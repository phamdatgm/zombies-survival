// Namespace: 
internal class <Module> // TypeDefIndex: 7343
{}


// Namespace: 
internal static class SR // TypeDefIndex: 7344
{
	// Methods

	// RVA: 0x10C7428 Offset: 0x10C3428 VA: 0x10C7428
	internal static string Format(string resourceFormat, object p1) { }
}


// Namespace: 
private enum BigInteger.GetBytesMode // TypeDefIndex: 7345
{
	// Fields
	public int value__; // 0x0
	public const BigInteger.GetBytesMode AllocateArray = 0;
	public const BigInteger.GetBytesMode Count = 1;
	public const BigInteger.GetBytesMode Span = 2;
}


// Namespace: System.Numerics
[Serializable]
public struct BigInteger : IFormattable, IComparable, IComparable<BigInteger>, IEquatable<BigInteger> // TypeDefIndex: 7346
{
	// Fields
	internal readonly int _sign; // 0x0
	internal readonly uint[] _bits; // 0x8
	private static readonly BigInteger s_bnMinInt; // 0x0
	private static readonly BigInteger s_bnOneInt; // 0x10
	private static readonly BigInteger s_bnZeroInt; // 0x20
	private static readonly BigInteger s_bnMinusOneInt; // 0x30
	private static readonly byte[] s_success; // 0x40

	// Properties
	public bool IsZero { get; }

	// Methods

	// RVA: 0x10C7498 Offset: 0x10C3498 VA: 0x10C7498
	public void .ctor(int value) { }

	// RVA: 0x10C7514 Offset: 0x10C3514 VA: 0x10C7514
	public void .ctor(uint value) { }

	// RVA: 0x10C7598 Offset: 0x10C3598 VA: 0x10C7598
	public void .ctor(long value) { }

	// RVA: 0x10C76B0 Offset: 0x10C36B0 VA: 0x10C76B0
	public void .ctor(ulong value) { }

	// RVA: 0x10C776C Offset: 0x10C376C VA: 0x10C776C
	public void .ctor(float value) { }

	// RVA: 0x10C77D0 Offset: 0x10C37D0 VA: 0x10C77D0
	public void .ctor(double value) { }

	// RVA: 0x10C7AC0 Offset: 0x10C3AC0 VA: 0x10C7AC0
	public void .ctor(Decimal value) { }

	// RVA: 0x10C7C88 Offset: 0x10C3C88 VA: 0x10C7C88
	public void .ctor(byte[] value) { }

	// RVA: 0x10C7D4C Offset: 0x10C3D4C VA: 0x10C7D4C
	public void .ctor(ReadOnlySpan<byte> value, bool isUnsigned = False, bool isBigEndian = False) { }

	// RVA: 0x10C8354 Offset: 0x10C4354 VA: 0x10C8354
	internal void .ctor(int n, uint[] rgu) { }

	// RVA: 0x10C8360 Offset: 0x10C4360 VA: 0x10C8360
	internal void .ctor(uint[] value, bool negative) { }

	// RVA: 0x10C84E8 Offset: 0x10C44E8 VA: 0x10C84E8
	public bool get_IsZero() { }

	// RVA: 0x10C84F8 Offset: 0x10C44F8 VA: 0x10C84F8
	public static BigInteger Parse(string value, IFormatProvider provider) { }

	// RVA: 0x10C8580 Offset: 0x10C4580 VA: 0x10C8580
	public static BigInteger Parse(string value, NumberStyles style, IFormatProvider provider) { }

	// RVA: 0x10C8660 Offset: 0x10C4660 VA: 0x10C8660 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x10C86A0 Offset: 0x10C46A0 VA: 0x10C86A0 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x10C8804 Offset: 0x10C4804 VA: 0x10C8804
	public bool Equals(long other) { }

	// RVA: 0x10C8748 Offset: 0x10C4748 VA: 0x10C8748 Slot: 7
	public bool Equals(BigInteger other) { }

	// RVA: 0x10C88E8 Offset: 0x10C48E8 VA: 0x10C88E8
	public int CompareTo(long other) { }

	// RVA: 0x10C8978 Offset: 0x10C4978 VA: 0x10C8978 Slot: 6
	public int CompareTo(BigInteger other) { }

	// RVA: 0x10C8AA0 Offset: 0x10C4AA0 VA: 0x10C8AA0 Slot: 5
	public int CompareTo(object obj) { }

	// RVA: 0x10C8BA4 Offset: 0x10C4BA4 VA: 0x10C8BA4
	public bool TryWriteBytes(Span<byte> destination, out int bytesWritten, bool isUnsigned = False, bool isBigEndian = False) { }

	// RVA: 0x10C9154 Offset: 0x10C5154 VA: 0x10C9154
	internal bool TryWriteOrCountBytes(Span<byte> destination, out int bytesWritten, bool isUnsigned = False, bool isBigEndian = False) { }

	// RVA: 0x10C8C54 Offset: 0x10C4C54 VA: 0x10C8C54
	private byte[] TryGetBytes(BigInteger.GetBytesMode mode, Span<byte> destination, bool isUnsigned, bool isBigEndian, ref int bytesWritten) { }

	// RVA: 0x10C91FC Offset: 0x10C51FC VA: 0x10C91FC Slot: 3
	public override string ToString() { }

	// RVA: 0x10C92D8 Offset: 0x10C52D8 VA: 0x10C92D8
	public string ToString(IFormatProvider provider) { }

	// RVA: 0x10C930C Offset: 0x10C530C VA: 0x10C930C Slot: 4
	public string ToString(string format, IFormatProvider provider) { }

	// RVA: 0x10C9344 Offset: 0x10C5344 VA: 0x10C9344
	private static BigInteger Add(uint[] leftBits, int leftSign, uint[] rightBits, int rightSign) { }

	// RVA: 0x10C9688 Offset: 0x10C5688 VA: 0x10C9688
	public static BigInteger op_Subtraction(BigInteger left, BigInteger right) { }

	// RVA: 0x10C9734 Offset: 0x10C5734 VA: 0x10C9734
	private static BigInteger Subtract(uint[] leftBits, int leftSign, uint[] rightBits, int rightSign) { }

	// RVA: 0x10C9AF0 Offset: 0x10C5AF0 VA: 0x10C9AF0
	public static BigInteger op_Implicit(byte value) { }

	// RVA: 0x10C9B18 Offset: 0x10C5B18 VA: 0x10C9B18
	public static BigInteger op_Implicit(sbyte value) { }

	// RVA: 0x10C9B40 Offset: 0x10C5B40 VA: 0x10C9B40
	public static BigInteger op_Implicit(short value) { }

	// RVA: 0x10C9B68 Offset: 0x10C5B68 VA: 0x10C9B68
	public static BigInteger op_Implicit(ushort value) { }

	// RVA: 0x10C9B90 Offset: 0x10C5B90 VA: 0x10C9B90
	public static BigInteger op_Implicit(int value) { }

	// RVA: 0x10C9BB8 Offset: 0x10C5BB8 VA: 0x10C9BB8
	public static BigInteger op_Implicit(uint value) { }

	// RVA: 0x10C9490 Offset: 0x10C5490 VA: 0x10C9490
	public static BigInteger op_Implicit(long value) { }

	// RVA: 0x10C7A98 Offset: 0x10C3A98 VA: 0x10C7A98
	public static BigInteger op_Implicit(ulong value) { }

	// RVA: 0x10C9BE0 Offset: 0x10C5BE0 VA: 0x10C9BE0
	public static byte op_Explicit(BigInteger value) { }

	// RVA: 0x10C9D48 Offset: 0x10C5D48 VA: 0x10C9D48
	public static sbyte op_Explicit(BigInteger value) { }

	// RVA: 0x10C9DD8 Offset: 0x10C5DD8 VA: 0x10C9DD8
	public static short op_Explicit(BigInteger value) { }

	// RVA: 0x10C9E68 Offset: 0x10C5E68 VA: 0x10C9E68
	public static ushort op_Explicit(BigInteger value) { }

	// RVA: 0x10C9C70 Offset: 0x10C5C70 VA: 0x10C9C70
	public static int op_Explicit(BigInteger value) { }

	// RVA: 0x10C9EF8 Offset: 0x10C5EF8 VA: 0x10C9EF8
	public static uint op_Explicit(BigInteger value) { }

	// RVA: 0x10C9FA0 Offset: 0x10C5FA0 VA: 0x10C9FA0
	public static long op_Explicit(BigInteger value) { }

	// RVA: 0x10CA04C Offset: 0x10C604C VA: 0x10CA04C
	public static ulong op_Explicit(BigInteger value) { }

	// RVA: 0x10CA104 Offset: 0x10C6104 VA: 0x10CA104
	public static float op_Explicit(BigInteger value) { }

	// RVA: 0x10CA170 Offset: 0x10C6170 VA: 0x10CA170
	public static double op_Explicit(BigInteger value) { }

	// RVA: 0x10CA388 Offset: 0x10C6388 VA: 0x10CA388
	public static Decimal op_Explicit(BigInteger value) { }

	// RVA: 0x10CA4E0 Offset: 0x10C64E0 VA: 0x10CA4E0
	public static BigInteger op_LeftShift(BigInteger value, int shift) { }

	// RVA: 0x10CA734 Offset: 0x10C6734 VA: 0x10CA734
	public static BigInteger op_RightShift(BigInteger value, int shift) { }

	// RVA: 0x10CAAE0 Offset: 0x10C6AE0 VA: 0x10CAAE0
	public static BigInteger op_UnaryNegation(BigInteger value) { }

	// RVA: 0x10CAAE8 Offset: 0x10C6AE8 VA: 0x10CAAE8
	public static BigInteger op_Addition(BigInteger left, BigInteger right) { }

	// RVA: 0x10CAB94 Offset: 0x10C6B94 VA: 0x10CAB94
	public static BigInteger op_Multiply(BigInteger left, BigInteger right) { }

	// RVA: 0x10CAF9C Offset: 0x10C6F9C VA: 0x10CAF9C
	public static BigInteger op_Division(BigInteger dividend, BigInteger divisor) { }

	// RVA: 0x10CB274 Offset: 0x10C7274 VA: 0x10CB274
	public static bool op_LessThanOrEqual(BigInteger left, BigInteger right) { }

	// RVA: 0x10CB2F4 Offset: 0x10C72F4 VA: 0x10CB2F4
	public static bool op_Inequality(BigInteger left, BigInteger right) { }

	// RVA: 0x10CB374 Offset: 0x10C7374 VA: 0x10CB374
	public static bool op_LessThan(BigInteger left, long right) { }

	// RVA: 0x10CB3E0 Offset: 0x10C73E0 VA: 0x10CB3E0
	public static bool op_LessThanOrEqual(BigInteger left, long right) { }

	// RVA: 0x10CB450 Offset: 0x10C7450 VA: 0x10CB450
	public static bool op_Equality(BigInteger left, long right) { }

	// RVA: 0x10CB4BC Offset: 0x10C74BC VA: 0x10CB4BC
	public static bool op_Inequality(BigInteger left, long right) { }

	// RVA: 0x10CB52C Offset: 0x10C752C VA: 0x10CB52C
	public static bool op_LessThan(long left, BigInteger right) { }

	// RVA: 0x10CB59C Offset: 0x10C759C VA: 0x10CB59C
	public static bool op_LessThanOrEqual(long left, BigInteger right) { }

	// RVA: 0x10CAA28 Offset: 0x10C6A28 VA: 0x10CAA28
	private static bool GetPartsForBitManipulation(ref BigInteger x, out uint[] xd, out int xl) { }

	// RVA: 0x10C8880 Offset: 0x10C4880 VA: 0x10C8880
	internal static int GetDiffLength(uint[] rgu1, uint[] rgu2, int cu) { }

	// RVA: 0x10CB60C Offset: 0x10C760C VA: 0x10CB60C
	private static void .cctor() { }
}


// Namespace: System.Numerics
internal static class BigIntegerCalculator // TypeDefIndex: 7347
{
	// Fields
	private static int ReducerThreshold; // 0x0
	private static int SquareThreshold; // 0x4
	private static int AllocationThreshold; // 0x8
	private static int MultiplyThreshold; // 0xC

	// Methods

	// RVA: 0x10C94C4 Offset: 0x10C54C4 VA: 0x10C94C4
	public static uint[] Add(uint[] left, uint right) { }

	// RVA: 0x10C959C Offset: 0x10C559C VA: 0x10C959C
	public static uint[] Add(uint[] left, uint[] right) { }

	// RVA: 0x10CB728 Offset: 0x10C7728 VA: 0x10CB728
	private static void Add(uint* left, int leftLength, uint* right, int rightLength, uint* bits, int bitsLength) { }

	// RVA: 0x10CB7AC Offset: 0x10C77AC VA: 0x10CB7AC
	private static void AddSelf(uint* left, int leftLength, uint* right, int rightLength) { }

	// RVA: 0x10C98C4 Offset: 0x10C58C4 VA: 0x10C98C4
	public static uint[] Subtract(uint[] left, uint right) { }

	// RVA: 0x10C99FC Offset: 0x10C59FC VA: 0x10C99FC
	public static uint[] Subtract(uint[] left, uint[] right) { }

	// RVA: 0x10CB820 Offset: 0x10C7820 VA: 0x10CB820
	private static void Subtract(uint* left, int leftLength, uint* right, int rightLength, uint* bits, int bitsLength) { }

	// RVA: 0x10C997C Offset: 0x10C597C VA: 0x10C997C
	public static int Compare(uint[] left, uint[] right) { }

	// RVA: 0x10CB0EC Offset: 0x10C70EC VA: 0x10CB0EC
	public static uint[] Divide(uint[] left, uint right) { }

	// RVA: 0x10CB198 Offset: 0x10C7198 VA: 0x10CB198
	public static uint[] Divide(uint[] left, uint[] right) { }

	// RVA: 0x10CB914 Offset: 0x10C7914 VA: 0x10CB914
	private static void Divide(uint* left, int leftLength, uint* right, int rightLength, uint* bits, int bitsLength) { }

	// RVA: 0x10CBD18 Offset: 0x10C7D18 VA: 0x10CBD18
	private static uint AddDivisor(uint* left, int leftLength, uint* right, int rightLength) { }

	// RVA: 0x10CBCD0 Offset: 0x10C7CD0 VA: 0x10CBCD0
	private static uint SubtractDivisor(uint* left, int leftLength, uint* right, int rightLength, ulong q) { }

	// RVA: 0x10CBC84 Offset: 0x10C7C84 VA: 0x10CBC84
	private static bool DivideGuessTooBig(ulong q, ulong valHi, uint valLo, uint divHi, uint divLo) { }

	// RVA: 0x10CB898 Offset: 0x10C7898 VA: 0x10CB898
	private static uint[] CreateCopy(uint[] value) { }

	// RVA: 0x10CBC0C Offset: 0x10C7C0C VA: 0x10CBC0C
	private static int LeadingZeros(uint value) { }

	// RVA: 0x10CADF0 Offset: 0x10C6DF0 VA: 0x10CADF0
	public static uint[] Square(uint[] value) { }

	// RVA: 0x10CBD58 Offset: 0x10C7D58 VA: 0x10CBD58
	private static void Square(uint* value, int valueLength, uint* bits, int bitsLength) { }

	// RVA: 0x10CAD0C Offset: 0x10C6D0C VA: 0x10CAD0C
	public static uint[] Multiply(uint[] left, uint right) { }

	// RVA: 0x10CAEB0 Offset: 0x10C6EB0 VA: 0x10CAEB0
	public static uint[] Multiply(uint[] left, uint[] right) { }

	// RVA: 0x10CC1C0 Offset: 0x10C81C0 VA: 0x10CC1C0
	private static void Multiply(uint* left, int leftLength, uint* right, int rightLength, uint* bits, int bitsLength) { }

	// RVA: 0x10CC100 Offset: 0x10C8100 VA: 0x10CC100
	private static void SubtractCore(uint* left, int leftLength, uint* right, int rightLength, uint* core, int coreLength) { }

	// RVA: 0x10CC654 Offset: 0x10C8654 VA: 0x10CC654
	private static void .cctor() { }
}


// Namespace: 
private struct BigNumber.BigNumberBuffer // TypeDefIndex: 7348
{
	// Fields
	public StringBuilder digits; // 0x0
	public int precision; // 0x8
	public int scale; // 0xC
	public bool sign; // 0x10

	// Methods

	// RVA: 0x10CC8AC Offset: 0x10C88AC VA: 0x10CC8AC
	public static BigNumber.BigNumberBuffer Create() { }
}


// Namespace: System.Numerics
internal static class BigNumber // TypeDefIndex: 7349
{
	// Methods

	// RVA: 0x10CC6A4 Offset: 0x10C86A4 VA: 0x10CC6A4
	internal static bool TryValidateParseStyleInteger(NumberStyles style, out ArgumentException e) { }

	// RVA: 0x10CC794 Offset: 0x10C8794 VA: 0x10CC794
	internal static bool TryParseBigInteger(ReadOnlySpan<char> value, NumberStyles style, NumberFormatInfo info, out BigInteger result) { }

	// RVA: 0x10C85B4 Offset: 0x10C45B4 VA: 0x10C85B4
	internal static BigInteger ParseBigInteger(string value, NumberStyles style, NumberFormatInfo info) { }

	// RVA: 0x10CCD68 Offset: 0x10C8D68 VA: 0x10CCD68
	internal static BigInteger ParseBigInteger(ReadOnlySpan<char> value, NumberStyles style, NumberFormatInfo info) { }

	// RVA: 0x10CC9FC Offset: 0x10C89FC VA: 0x10CC9FC
	private static bool HexNumberToBigInteger(ref BigNumber.BigNumberBuffer number, ref BigInteger value) { }

	// RVA: 0x10CCBA0 Offset: 0x10C8BA0 VA: 0x10CCBA0
	private static bool NumberToBigInteger(ref BigNumber.BigNumberBuffer number, ref BigInteger value) { }

	// RVA: 0x10CCE68 Offset: 0x10C8E68 VA: 0x10CCE68
	internal static char ParseFormatSpecifier(ReadOnlySpan<char> format, out int digits) { }

	// RVA: 0x10CCF20 Offset: 0x10C8F20 VA: 0x10CCF20
	private static string FormatBigIntegerToHex(bool targetSpan, BigInteger value, char format, int digits, NumberFormatInfo info, Span<char> destination, out int charsWritten, out bool spanSuccess) { }

	// RVA: 0x10C922C Offset: 0x10C522C VA: 0x10C922C
	internal static string FormatBigInteger(BigInteger value, string format, NumberFormatInfo info) { }

	// RVA: 0x10CDAE8 Offset: 0x10C9AE8 VA: 0x10CDAE8
	private static string FormatBigInteger(bool targetSpan, BigInteger value, string formatString, ReadOnlySpan<char> formatSpan, NumberFormatInfo info, Span<char> destination, out int charsWritten, out bool spanSuccess) { }
}


// Namespace: System.Numerics
internal struct DoubleUlong // TypeDefIndex: 7350
{
	// Fields
	public double dbl; // 0x0
	public ulong uu; // 0x0
}


// Namespace: System.Numerics
internal static class NumericsHelpers // TypeDefIndex: 7351
{
	// Methods

	// RVA: 0x10C7A1C Offset: 0x10C3A1C VA: 0x10C7A1C
	public static void GetDoubleParts(double dbl, out int sign, out int exp, out ulong man, out bool fFinite) { }

	// RVA: 0x10CA2E0 Offset: 0x10C62E0 VA: 0x10CA2E0
	public static double GetDoubleFromParts(int sign, int exp, ulong man) { }

	// RVA: 0x10C82A0 Offset: 0x10C42A0 VA: 0x10C82A0
	public static void DangerousMakeTwosComplement(uint[] d) { }

	// RVA: 0x10C8870 Offset: 0x10C4870 VA: 0x10C8870
	public static ulong MakeUlong(uint uHi, uint uLo) { }

	// RVA: 0x10C94B8 Offset: 0x10C54B8 VA: 0x10C94B8
	public static uint Abs(int a) { }

	// RVA: 0x10CE704 Offset: 0x10CA704 VA: 0x10CE704
	public static uint CombineHash(uint u1, uint u2) { }

	// RVA: 0x10C8698 Offset: 0x10C4698 VA: 0x10C8698
	public static int CombineHash(int n1, int n2) { }

	// RVA: 0x10CA268 Offset: 0x10C6268 VA: 0x10CA268
	public static int CbitHighZero(uint u) { }

	// RVA: 0x10CE6E0 Offset: 0x10CA6E0 VA: 0x10CE6E0
	public static int CbitHighZero(ulong uu) { }
}


// Namespace: 
internal struct FormatProvider.Number.NumberBuffer // TypeDefIndex: 7352
{
	// Fields
	public int precision; // 0x0
	public int scale; // 0x4
	public bool sign; // 0x8
	public char* overrideDigits; // 0x10
}


// Namespace: 
private class FormatProvider.Number // TypeDefIndex: 7353
{
	// Fields
	private static string[] s_posCurrencyFormats; // 0x0
	private static string[] s_negCurrencyFormats; // 0x8
	private static string[] s_posPercentFormats; // 0x10
	private static string[] s_negPercentFormats; // 0x18
	private static string[] s_negNumberFormats; // 0x20
	private static string s_posNumberFormat; // 0x28

	// Methods

	// RVA: 0x10CFCF0 Offset: 0x10CBCF0 VA: 0x10CFCF0
	private static bool IsWhite(char ch) { }

	// RVA: 0x10CFD18 Offset: 0x10CBD18 VA: 0x10CFD18
	private static char* MatchChars(char* p, char* pEnd, string str) { }

	// RVA: 0x10CFDDC Offset: 0x10CBDDC VA: 0x10CFDDC
	private static char* MatchChars(char* p, char* pEnd, char* str) { }

	// RVA: 0x10CFE38 Offset: 0x10CBE38 VA: 0x10CFE38
	private static bool ParseNumber(ref char* str, char* strEnd, NumberStyles options, ref FormatProvider.Number.NumberBuffer number, StringBuilder sb, NumberFormatInfo numfmt, bool parseDecimal) { }

	// RVA: 0x10D053C Offset: 0x10CC53C VA: 0x10D053C
	private static bool TrailingZeros(ReadOnlySpan<char> s, int index) { }

	// RVA: 0x10CFBC4 Offset: 0x10CBBC4 VA: 0x10CFBC4
	internal static bool TryStringToNumber(ReadOnlySpan<char> str, NumberStyles options, ref FormatProvider.Number.NumberBuffer number, StringBuilder sb, NumberFormatInfo numfmt, bool parseDecimal) { }

	// RVA: 0x10D0590 Offset: 0x10CC590 VA: 0x10D0590
	internal static void Int32ToDecChars(char* buffer, ref int index, uint value, int digits) { }

	// RVA: 0x10CE70C Offset: 0x10CA70C VA: 0x10CE70C
	internal static char ParseFormatSpecifier(ReadOnlySpan<char> format, out int digits) { }

	// RVA: 0x10CE820 Offset: 0x10CA820 VA: 0x10CE820
	internal static void NumberToString(ref ValueStringBuilder sb, ref FormatProvider.Number.NumberBuffer number, char format, int nMaxDigits, NumberFormatInfo info, bool isDecimal) { }

	// RVA: 0x10D06BC Offset: 0x10CC6BC VA: 0x10D06BC
	private static void FormatCurrency(ref ValueStringBuilder sb, ref FormatProvider.Number.NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info) { }

	// RVA: 0x10D15D4 Offset: 0x10CD5D4 VA: 0x10D15D4
	private static int wcslen(char* s) { }

	// RVA: 0x10D08C8 Offset: 0x10CC8C8 VA: 0x10D08C8
	private static void FormatFixed(ref ValueStringBuilder sb, ref FormatProvider.Number.NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info, int[] groupDigits, string sDecimal, string sGroup) { }

	// RVA: 0x10D0D60 Offset: 0x10CCD60 VA: 0x10D0D60
	private static void FormatNumber(ref ValueStringBuilder sb, ref FormatProvider.Number.NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info) { }

	// RVA: 0x10D0F58 Offset: 0x10CCF58 VA: 0x10D0F58
	private static void FormatScientific(ref ValueStringBuilder sb, ref FormatProvider.Number.NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info, char expChar) { }

	// RVA: 0x10D1840 Offset: 0x10CD840 VA: 0x10D1840
	private static void FormatExponent(ref ValueStringBuilder sb, NumberFormatInfo info, int value, char expChar, int minDigits, bool positiveSign) { }

	// RVA: 0x10D1120 Offset: 0x10CD120 VA: 0x10D1120
	private static void FormatGeneral(ref ValueStringBuilder sb, ref FormatProvider.Number.NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info, char expChar, bool bSuppressScientific) { }

	// RVA: 0x10D13C8 Offset: 0x10CD3C8 VA: 0x10D13C8
	private static void FormatPercent(ref ValueStringBuilder sb, ref FormatProvider.Number.NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info) { }

	// RVA: 0x10D05EC Offset: 0x10CC5EC VA: 0x10D05EC
	private static void RoundNumber(ref FormatProvider.Number.NumberBuffer number, int pos) { }

	// RVA: 0x10D1AA4 Offset: 0x10CDAA4 VA: 0x10D1AA4
	private static int FindSection(ReadOnlySpan<char> format, int section) { }

	// RVA: 0x10CED0C Offset: 0x10CAD0C VA: 0x10CED0C
	internal static void NumberToStringFormat(ref ValueStringBuilder sb, ref FormatProvider.Number.NumberBuffer number, ReadOnlySpan<char> format, NumberFormatInfo info) { }

	// RVA: 0x10D1BE4 Offset: 0x10CDBE4 VA: 0x10D1BE4
	private static void .cctor() { }
}


// Namespace: System.Globalization
internal class FormatProvider // TypeDefIndex: 7354
{
	// Methods

	// RVA: 0x10CE5A8 Offset: 0x10CA5A8 VA: 0x10CE5A8
	internal static void FormatBigInteger(ref ValueStringBuilder sb, int precision, int scale, bool sign, ReadOnlySpan<char> format, NumberFormatInfo numberFormatInfo, char[] digits, int startIndex) { }

	// RVA: 0x10CC908 Offset: 0x10C8908 VA: 0x10CC908
	internal static bool TryStringToBigInteger(ReadOnlySpan<char> s, NumberStyles styles, NumberFormatInfo numberFormatInfo, StringBuilder receiver, out int precision, out int scale, out bool sign) { }
}


// Namespace: System.Text
[IsByRefLike]
[Obsolete("Types with embedded references are not supported in this version of your compiler.", True)]
[DefaultMember("Item")]
internal struct ValueStringBuilder // TypeDefIndex: 7355
{
	// Fields
	private char[] _arrayToReturnToPool; // 0x0
	private Span<char> _chars; // 0x8
	private int _pos; // 0x18

	// Methods

	// RVA: 0x10CD554 Offset: 0x10C9554 VA: 0x10CD554
	public void .ctor(Span<char> initialBuffer) { }

	// RVA: 0x10CD98C Offset: 0x10C998C VA: 0x10CD98C Slot: 3
	public override string ToString() { }

	// RVA: 0x10CD79C Offset: 0x10C979C VA: 0x10CD79C
	public bool TryCopyTo(Span<char> destination, out int charsWritten) { }

	// RVA: 0x10CD564 Offset: 0x10C9564 VA: 0x10CD564
	public void Insert(int index, char value, int count) { }

	// RVA: 0x10D2420 Offset: 0x10CE420 VA: 0x10D2420
	public void Append(char c) { }

	// RVA: 0x10D24B4 Offset: 0x10CE4B4 VA: 0x10D24B4
	public void Append(string s) { }

	// RVA: 0x10D252C Offset: 0x10CE52C VA: 0x10D252C
	private void AppendSlow(string s) { }

	// RVA: 0x10D16F8 Offset: 0x10CD6F8 VA: 0x10D16F8
	public void Append(char c, int count) { }

	// RVA: 0x10D15F4 Offset: 0x10CD5F4 VA: 0x10D15F4
	public void Append(char* value, int length) { }

	// RVA: 0x10D2678 Offset: 0x10CE678 VA: 0x10D2678
	public Span<char> AppendSpan(int length) { }

	// RVA: 0x10D2460 Offset: 0x10CE460 VA: 0x10D2460
	private void GrowAndAppend(char c) { }

	// RVA: 0x10D22A4 Offset: 0x10CE2A4 VA: 0x10D22A4
	private void Grow(int requiredAdditionalCapacity) { }

	// RVA: 0x10D2754 Offset: 0x10CE754 VA: 0x10D2754
	public void Dispose() { }
}
