/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class ELDCILMPNCD // TypeDefIndex: 5283
{
	// Fields
	private static byte[] IPEEOHDPDPD; // 0x0
	private static int[] OCKABFGIHJP; // 0x8
	private static int DJBBLEPCHOA; // 0x10
	public static readonly bool BGIKBNIMAPF; // 0x14

	// Methods

	private static void .cctor() { }

	public void .ctor() { }
}
*/

// ==== private static void .cctor() { }   @0xb58a14

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ELDCILMPNCD___cctor(void)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam00000000019171cf & 1) == 0) {
    func_0x00a67900(&System_Convert_TypeInfo);
    func_0x00a67900(&ELDCILMPNCD_TypeInfo);
    func_0x00a67900(&int___TypeInfo);
    func_0x00a67900(&Str_);
    bRam00000000019171cf = 1;
  }
  if (*(int *)(_System_Convert_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = System_Convert__FromBase64String(_Str_,0);
  ELDCILMPNCD.IPEEOHDPDPD = uVar1;
  uVar1 = func_0x00a679a0(_int___TypeInfo,0);
  lVar2 = ELDCILMPNCD.<statics>;
  *(undefined8 *)(lVar2 + 8) = uVar1;
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined1 *)(lVar2 + 0x14) = 0;
  return;
}


// ==== public void .ctor() { }   @0xb58ad4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ELDCILMPNCD___ctor(void *__this)

{
  return;
}


