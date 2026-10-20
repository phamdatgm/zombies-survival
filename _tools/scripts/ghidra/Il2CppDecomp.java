// Headless Ghidra script: applies Il2CppDumper names and decompiles Assembly-CSharp methods.
// Args: <ghidra_in dir> <output dir>
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.app.cmd.function.ApplyFunctionSignatureCmd;
import ghidra.app.util.parser.FunctionSignatureParser;
import ghidra.program.model.address.*;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.util.task.ConsoleTaskMonitor;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.util.*;

public class Il2CppDecomp extends GhidraScript {
    private Address addr(String hex) {
        return currentProgram.getImageBase().add(Long.parseLong(hex, 16));
    }

    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        Path in = Paths.get(args[0]);
        Path out = Paths.get(args[1]);
        String targetsFile = args.length > 2 ? args[2] : "targets.tsv";
        int timeout = args.length > 3 ? Integer.parseInt(args[3]) : 30;
        Files.createDirectories(out);
        Listing listing = currentProgram.getListing();
        SymbolTable st = currentProgram.getSymbolTable();
        FunctionManager fm = currentProgram.getFunctionManager();
        DataTypeManager dtm = currentProgram.getDataTypeManager();
        FunctionSignatureParser parser = new FunctionSignatureParser(dtm, null);

        boolean skipNames = args.length > 4 && args[4].equals("skipNames");
        Map<String, String> sigs = new HashMap<>();
        int n = 0;
        for (String line : Files.readAllLines(in.resolve("methods.tsv"), StandardCharsets.UTF_8)) {
            if (skipNames) { String[] p0 = line.split("	", -1); if (p0.length > 2 && !p0[2].isEmpty()) sigs.put(p0[0], p0[2]); continue; }
            String[] p = line.split("\t", -1);
            if (p.length < 2) continue;
            Address a = addr(p[0]);
            String name = p[1].replaceAll("[^A-Za-z0-9_$.]", "_");
            try {
                Function f = fm.getFunctionAt(a);
                if (f == null) f = createFunction(a, name);
                if (f != null) f.setName(name, SourceType.USER_DEFINED);
                else st.createLabel(a, name, SourceType.USER_DEFINED);
                if (p.length > 2 && !p[2].isEmpty()) sigs.put(p[0], p[2]);
            } catch (Exception e) { /* duplicate names etc. */ }
            if (++n % 5000 == 0) println("methods " + n);
        }
        for (String line : Files.readAllLines(in.resolve("labels.tsv"), StandardCharsets.UTF_8)) {
            String[] p = line.split("\t", -1);
            if (p.length < 2 || p[1].isEmpty()) continue;
            try { st.createLabel(addr(p[0]), p[1], SourceType.USER_DEFINED); } catch (Exception e) { }
        }

        List<String[]> targets = new ArrayList<>();
        if (!targetsFile.equals("none"))
        for (String line : Files.readAllLines(in.resolve(targetsFile), StandardCharsets.UTF_8)) {
            String[] p = line.split("\t", -1);
            if (p.length >= 3) targets.add(p);
        }
        // il2cpp exception-raising thunks never return: mark them so flow doesn't spill into the next method
        String[] noret = args.length > 5 ? args[5].split("[+,]") : new String[0];
        for (String hx : noret) {
            if (hx.isEmpty()) continue;
            Address a = currentProgram.getImageBase().add(Long.parseLong(hx, 16));
            try {
                disassemble(a);
                Function f = fm.getFunctionAt(a);
                if (f == null) f = createFunction(a, "il2cpp_throw_" + hx);
                if (f != null) f.setNoReturn(true);
            } catch (Exception e) { println("noret fail " + hx + " " + e); }
        }
        // make sure target bodies are disassembled and function bodies computed
        for (String[] t : targets) {
            Address a = addr(t[0]);
            try {
                disassemble(a);
                Function f = fm.getFunctionAt(a);
                if (f != null) {
                    new ghidra.app.cmd.function.CreateFunctionCmd(null, a, null, SourceType.USER_DEFINED, false, true).applyTo(currentProgram);
                }
            } catch (Exception e) { }
        }
        // apply signatures for target methods so params are named
        for (String[] t : targets) {
            String sig = sigs.get(t[0]);
            Function f = fm.getFunctionAt(addr(t[0]));
            if (sig == null || f == null) continue;
            try {
                FunctionDefinitionDataType def = parser.parse(f.getSignature(), sig);
                new ApplyFunctionSignatureCmd(f.getEntryPoint(), def, SourceType.USER_DEFINED).applyTo(currentProgram);
            } catch (Exception e) { println("sig fail " + sig + " : " + e.getMessage()); }
        }

        DecompInterface di = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        di.setOptions(opts);
        di.toggleCCode(true);
        di.openProgram(currentProgram);
        ConsoleTaskMonitor mon = new ConsoleTaskMonitor();
        int k = 0;
        for (String[] t : targets) {
            Function f = fm.getFunctionAt(addr(t[0]));
            StringBuilder sb = new StringBuilder();
            sb.append("// ==== ").append(t[2]).append("   @0x").append(t[0]).append("\n");
            if (f == null) sb.append("// <no function>\n\n");
            else {
                long t0 = System.currentTimeMillis();
                DecompileResults r = di.decompileFunction(f, timeout, mon);
                if (r != null && r.decompileCompleted()) sb.append(r.getDecompiledFunction().getC());
                else sb.append("// decompile failed: ").append(r == null ? "null" : r.getErrorMessage()).append("\n");
                sb.append("\n");
                long dt = System.currentTimeMillis() - t0;
                if (dt > 5000) println("slow " + t[1] + " " + t[2] + " " + dt + "ms");
            }
            String fn = t[1].replaceAll("[^A-Za-z0-9_.]", "_") + ".c";
            Files.write(out.resolve(fn), sb.toString().getBytes(StandardCharsets.UTF_8), StandardOpenOption.CREATE, StandardOpenOption.APPEND);
            if (++k % 25 == 0) println("decompiled " + k + "/" + targets.size());
        }
        println("done " + k);
    }
}
