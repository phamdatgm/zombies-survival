// Namespace: 
internal class <Module> // TypeDefIndex: 2535
{}


// Namespace: 
internal static class SR // TypeDefIndex: 2536
{
	// Methods

	// RVA: 0x10D2814 Offset: 0x10CE814 VA: 0x10D2814
	internal static string GetString(string name, object[] args) { }

	// RVA: 0x10D2884 Offset: 0x10CE884 VA: 0x10D2884
	internal static string GetString(CultureInfo culture, string name, object[] args) { }
}


// Namespace: Microsoft.CSharp
internal class CodeDomProvider // TypeDefIndex: 2537
{
	// Methods

	// RVA: 0x10D288C Offset: 0x10CE88C VA: 0x10D288C
	public void .ctor() { }
}


// Namespace: Microsoft.CSharp
internal class CSharpCodeProvider : CodeDomProvider // TypeDefIndex: 2538
{
	// Methods

	// RVA: 0x10D2894 Offset: 0x10CE894 VA: 0x10D2894
	public void .ctor() { }
}


// Namespace: System
internal static class LocalAppContextSwitches // TypeDefIndex: 2539
{
	// Fields
	public static readonly bool IgnoreEmptyKeySequences; // 0x0
	public static readonly bool DontThrowOnInvalidSurrogatePairs; // 0x1
}


// Namespace: System.Xml
[Extension]
internal static class AsyncHelper // TypeDefIndex: 2540
{
	// Fields
	public static readonly Task DoneTask; // 0x0
	public static readonly Task<bool> DoneTaskTrue; // 0x8
	public static readonly Task<bool> DoneTaskFalse; // 0x10
	public static readonly Task<int> DoneTaskZero; // 0x18

	// Methods

	// RVA: 0x10D289C Offset: 0x10CE89C VA: 0x10D289C
	private static void .cctor() { }
}


// Namespace: System.Xml
internal abstract class Base64Encoder // TypeDefIndex: 2541
{
	// Fields
	private byte[] leftOverBytes; // 0x10
	private int leftOverBytesCount; // 0x18
	private char[] charsLine; // 0x20

	// Methods

	// RVA: 0x10D29A8 Offset: 0x10CE9A8 VA: 0x10D29A8
	internal void .ctor() { }

	// RVA: -1 Offset: -1 Slot: 4
	internal abstract void WriteChars(char[] chars, int index, int count);

	// RVA: 0x10D2A04 Offset: 0x10CEA04 VA: 0x10D2A04
	internal void Encode(byte[] buffer, int index, int count) { }

	// RVA: 0x10D2D4C Offset: 0x10CED4C VA: 0x10D2D4C
	internal void Flush() { }
}


// Namespace: System.Xml
internal class XmlRawWriterBase64Encoder : Base64Encoder // TypeDefIndex: 2542
{
	// Fields
	private XmlRawWriter rawWriter; // 0x28

	// Methods

	// RVA: 0x10D2DF4 Offset: 0x10CEDF4 VA: 0x10D2DF4
	internal void .ctor(XmlRawWriter rawWriter) { }

	// RVA: 0x10D2E18 Offset: 0x10CEE18 VA: 0x10D2E18 Slot: 4
	internal override void WriteChars(char[] chars, int index, int count) { }
}


// Namespace: System.Xml
internal class XmlTextWriterBase64Encoder : Base64Encoder // TypeDefIndex: 2543
{
	// Fields
	private XmlTextEncoder xmlTextEncoder; // 0x28

	// Methods

	// RVA: 0x10D2E3C Offset: 0x10CEE3C VA: 0x10D2E3C
	internal void .ctor(XmlTextEncoder xmlTextEncoder) { }

	// RVA: 0x10D2E60 Offset: 0x10CEE60 VA: 0x10D2E60 Slot: 4
	internal override void WriteChars(char[] chars, int index, int count) { }
}


// Namespace: System.Xml
internal class BinHexDecoder : IncrementalReadDecoder // TypeDefIndex: 2544
{
	// Fields
	private byte[] buffer; // 0x10
	private int curIndex; // 0x18
	private int endIndex; // 0x1C
	private bool hasHalfByteCached; // 0x20
	private byte cachedHalfByte; // 0x21

	// Properties
	internal override bool IsFull { get; }

	// Methods

	// RVA: 0x10D2E7C Offset: 0x10CEE7C VA: 0x10D2E7C Slot: 4
	internal override bool get_IsFull() { }

	// RVA: 0x10D2E8C Offset: 0x10CEE8C VA: 0x10D2E8C Slot: 5
	internal override int Decode(char[] chars, int startPos, int len) { }

	// RVA: 0x10D31A0 Offset: 0x10CF1A0 VA: 0x10D31A0
	public static byte[] Decode(char[] chars, bool allowOddChars) { }

	// RVA: 0x10D2FD8 Offset: 0x10CEFD8 VA: 0x10D2FD8
	private static void Decode(char* pChars, char* pCharsEndPos, byte* pBytes, byte* pBytesEndPos, ref bool hasHalfByteCached, ref byte cachedHalfByte, out int charsDecoded, out int bytesDecoded) { }
}


// Namespace: System.Xml
internal static class BinHexEncoder // TypeDefIndex: 2545
{
	// Methods

	// RVA: 0x10D3378 Offset: 0x10CF378 VA: 0x10D3378
	internal static void Encode(byte[] buffer, int index, int count, XmlWriter writer) { }

	// RVA: 0x10D3638 Offset: 0x10CF638 VA: 0x10D3638
	internal static string Encode(byte[] inArray, int offsetIn, int count) { }

	// RVA: 0x10D3514 Offset: 0x10CF514 VA: 0x10D3514
	private static int Encode(byte[] inArray, int offsetIn, int count, char[] outArray) { }
}


// Namespace: System.Xml
internal enum BinXmlToken // TypeDefIndex: 2546
{
	// Fields
	public int value__; // 0x0
	public const BinXmlToken Error = 0;
	public const BinXmlToken NotImpl = -2;
	public const BinXmlToken EOF = -1;
	public const BinXmlToken XmlDecl = 254;
	public const BinXmlToken Encoding = 253;
	public const BinXmlToken DocType = 252;
	public const BinXmlToken System = 251;
	public const BinXmlToken Public = 250;
	public const BinXmlToken Subset = 249;
	public const BinXmlToken Element = 248;
	public const BinXmlToken EndElem = 247;
	public const BinXmlToken Attr = 246;
	public const BinXmlToken EndAttrs = 245;
	public const BinXmlToken PI = 244;
	public const BinXmlToken Comment = 243;
	public const BinXmlToken CData = 242;
	public const BinXmlToken EndCData = 241;
	public const BinXmlToken Name = 240;
	public const BinXmlToken QName = 239;
	public const BinXmlToken XmlText = 237;
	public const BinXmlToken Nest = 236;
	public const BinXmlToken EndNest = 235;
	public const BinXmlToken Extn = 234;
	public const BinXmlToken NmFlush = 233;
	public const BinXmlToken SQL_BIT = 6;
	public const BinXmlToken SQL_TINYINT = 7;
	public const BinXmlToken SQL_SMALLINT = 1;
	public const BinXmlToken SQL_INT = 2;
	public const BinXmlToken SQL_BIGINT = 8;
	public const BinXmlToken SQL_REAL = 3;
	public const BinXmlToken SQL_FLOAT = 4;
	public const BinXmlToken SQL_MONEY = 5;
	public const BinXmlToken SQL_SMALLMONEY = 20;
	public const BinXmlToken SQL_DATETIME = 18;
	public const BinXmlToken SQL_SMALLDATETIME = 19;
	public const BinXmlToken SQL_DECIMAL = 10;
	public const BinXmlToken SQL_NUMERIC = 11;
	public const BinXmlToken SQL_UUID = 9;
	public const BinXmlToken SQL_VARBINARY = 15;
	public const BinXmlToken SQL_BINARY = 12;
	public const BinXmlToken SQL_IMAGE = 23;
	public const BinXmlToken SQL_CHAR = 13;
	public const BinXmlToken SQL_VARCHAR = 16;
	public const BinXmlToken SQL_TEXT = 22;
	public const BinXmlToken SQL_NVARCHAR = 17;
	public const BinXmlToken SQL_NCHAR = 14;
	public const BinXmlToken SQL_NTEXT = 24;
	public const BinXmlToken SQL_UDT = 27;
	public const BinXmlToken XSD_KATMAI_DATE = 127;
	public const BinXmlToken XSD_KATMAI_DATETIME = 126;
	public const BinXmlToken XSD_KATMAI_TIME = 125;
	public const BinXmlToken XSD_KATMAI_DATEOFFSET = 124;
	public const BinXmlToken XSD_KATMAI_DATETIMEOFFSET = 123;
	public const BinXmlToken XSD_KATMAI_TIMEOFFSET = 122;
	public const BinXmlToken XSD_BOOLEAN = 134;
	public const BinXmlToken XSD_TIME = 129;
	public const BinXmlToken XSD_DATETIME = 130;
	public const BinXmlToken XSD_DATE = 131;
	public const BinXmlToken XSD_BINHEX = 132;
	public const BinXmlToken XSD_BASE64 = 133;
	public const BinXmlToken XSD_DECIMAL = 135;
	public const BinXmlToken XSD_BYTE = 136;
	public const BinXmlToken XSD_UNSIGNEDSHORT = 137;
	public const BinXmlToken XSD_UNSIGNEDINT = 138;
	public const BinXmlToken XSD_UNSIGNEDLONG = 139;
	public const BinXmlToken XSD_QNAME = 140;
}


// Namespace: System.Xml
internal struct BinXmlSqlDecimal // TypeDefIndex: 2547
{
	// Fields
	internal byte m_bLen; // 0x0
	internal byte m_bPrec; // 0x1
	internal byte m_bScale; // 0x2
	internal byte m_bSign; // 0x3
	internal uint m_data1; // 0x4
	internal uint m_data2; // 0x8
	internal uint m_data3; // 0xC
	internal uint m_data4; // 0x10
	private static readonly byte NUMERIC_MAX_PRECISION; // 0x0
	private static readonly byte MaxPrecision; // 0x1
	private static readonly byte MaxScale; // 0x2
	private static readonly int x_cNumeMax; // 0x4
	private static readonly long x_lInt32Base; // 0x8
	private static readonly ulong x_ulInt32Base; // 0x10
	private static readonly ulong x_ulInt32BaseForMod; // 0x18
	internal static readonly ulong x_llMax; // 0x20
	private static readonly double DUINT_BASE; // 0x28
	private static readonly double DUINT_BASE2; // 0x30
	private static readonly double DUINT_BASE3; // 0x38
	private static readonly uint[] x_rgulShiftBase; // 0x40
	private static readonly byte[] rgCLenFromPrec; // 0x48

	// Properties
	public bool IsPositive { get; }

	// Methods

	// RVA: 0x10D3778 Offset: 0x10CF778 VA: 0x10D3778
	public bool get_IsPositive() { }

	// RVA: 0x10D3788 Offset: 0x10CF788 VA: 0x10D3788
	public void .ctor(byte[] data, int offset, bool trim) { }

	// RVA: 0x10D3A24 Offset: 0x10CFA24 VA: 0x10D3A24
	private static uint UIntFromByteArray(byte[] data, int offset) { }

	// RVA: 0x10D3C60 Offset: 0x10CFC60 VA: 0x10D3C60
	private static void MpDiv1(uint[] rgulU, ref int ciulU, uint iulD, out uint iulR) { }

	// RVA: 0x10D3D38 Offset: 0x10CFD38 VA: 0x10D3D38
	private static void MpNormalize(uint[] rgulU, ref int ciulU) { }

	// RVA: 0x10D3D90 Offset: 0x10CFD90 VA: 0x10D3D90
	private static char ChFromDigit(uint uiDigit) { }

	// RVA: 0x10D3D98 Offset: 0x10CFD98 VA: 0x10D3D98
	public Decimal ToDecimal() { }

	// RVA: 0x10D3A98 Offset: 0x10CFA98 VA: 0x10D3A98
	private void TrimTrailingZeros() { }

	// RVA: 0x10D3EB0 Offset: 0x10CFEB0 VA: 0x10D3EB0 Slot: 3
	public override string ToString() { }

	// RVA: 0x10D4174 Offset: 0x10D0174 VA: 0x10D4174
	private static void .cctor() { }
}


// Namespace: System.Xml
internal struct BinXmlSqlMoney // TypeDefIndex: 2548
{
	// Fields
	private long data; // 0x0

	// Methods

	// RVA: 0x10D42AC Offset: 0x10D02AC VA: 0x10D42AC
	public void .ctor(int v) { }

	// RVA: 0x10D42B8 Offset: 0x10D02B8 VA: 0x10D42B8
	public Decimal ToDecimal() { }

	// RVA: 0x10D431C Offset: 0x10D031C VA: 0x10D431C Slot: 3
	public override string ToString() { }
}


// Namespace: System.Xml
internal abstract class BinXmlDateTime // TypeDefIndex: 2549
{
	// Fields
	internal static int[] KatmaiTimeScaleMultiplicator; // 0x0
	private static readonly double SQLTicksPerMillisecond; // 0x8
	public static readonly int SQLTicksPerSecond; // 0x10
	public static readonly int SQLTicksPerMinute; // 0x14
	public static readonly int SQLTicksPerHour; // 0x18
	private static readonly int SQLTicksPerDay; // 0x1C

	// Methods

	// RVA: 0x10D4408 Offset: 0x10D0408 VA: 0x10D4408
	private static void Write2Dig(StringBuilder sb, int val) { }

	// RVA: 0x10D4464 Offset: 0x10D0464 VA: 0x10D4464
	private static void Write4DigNeg(StringBuilder sb, int val) { }

	// RVA: 0x10D4508 Offset: 0x10D0508 VA: 0x10D4508
	private static void Write3Dec(StringBuilder sb, int val) { }

	// RVA: 0x10D45B4 Offset: 0x10D05B4 VA: 0x10D45B4
	private static void WriteDate(StringBuilder sb, int yr, int mnth, int day) { }

	// RVA: 0x10D4668 Offset: 0x10D0668 VA: 0x10D4668
	private static void WriteTime(StringBuilder sb, int hr, int min, int sec, int ms) { }

	// RVA: 0x10D4754 Offset: 0x10D0754 VA: 0x10D4754
	private static void WriteTimeFullPrecision(StringBuilder sb, int hr, int min, int sec, int fraction) { }

	// RVA: 0x10D4948 Offset: 0x10D0948 VA: 0x10D4948
	private static void WriteTimeZone(StringBuilder sb, TimeSpan zone) { }

	// RVA: 0x10D4A2C Offset: 0x10D0A2C VA: 0x10D4A2C
	private static void WriteTimeZone(StringBuilder sb, bool negTimeZone, int hr, int min) { }

	// RVA: 0x10D4B00 Offset: 0x10D0B00 VA: 0x10D4B00
	private static void BreakDownXsdDateTime(long val, out int yr, out int mnth, out int day, out int hr, out int min, out int sec, out int ms) { }

	// RVA: 0x10D4CD0 Offset: 0x10D0CD0 VA: 0x10D4CD0
	private static void BreakDownXsdDate(long val, out int yr, out int mnth, out int day, out bool negTimeZone, out int hr, out int min) { }

	// RVA: 0x10D4E40 Offset: 0x10D0E40 VA: 0x10D4E40
	private static void BreakDownXsdTime(long val, out int hr, out int min, out int sec, out int ms) { }

	// RVA: 0x10D4F48 Offset: 0x10D0F48 VA: 0x10D4F48
	public static string XsdDateTimeToString(long val) { }

	// RVA: 0x10D5050 Offset: 0x10D1050 VA: 0x10D5050
	public static string XsdDateToString(long val) { }

	// RVA: 0x10D5134 Offset: 0x10D1134 VA: 0x10D5134
	public static string XsdTimeToString(long val) { }

	// RVA: 0x10D5208 Offset: 0x10D1208 VA: 0x10D5208
	public static string SqlDateTimeToString(int dateticks, uint timeticks) { }

	// RVA: 0x10D5344 Offset: 0x10D1344 VA: 0x10D5344
	public static DateTime SqlDateTimeToDateTime(int dateticks, uint timeticks) { }

	// RVA: 0x10D5438 Offset: 0x10D1438 VA: 0x10D5438
	public static string SqlSmallDateTimeToString(short dateticks, ushort timeticks) { }

	// RVA: 0x10D5528 Offset: 0x10D1528 VA: 0x10D5528
	public static DateTime SqlSmallDateTimeToDateTime(short dateticks, ushort timeticks) { }

	// RVA: 0x10D559C Offset: 0x10D159C VA: 0x10D559C
	public static DateTime XsdKatmaiDateToDateTime(byte[] data, int offset) { }

	// RVA: 0x10D5690 Offset: 0x10D1690 VA: 0x10D5690
	public static DateTime XsdKatmaiDateTimeToDateTime(byte[] data, int offset) { }

	// RVA: 0x10D5948 Offset: 0x10D1948 VA: 0x10D5948
	public static DateTime XsdKatmaiTimeToDateTime(byte[] data, int offset) { }

	// RVA: 0x10D59AC Offset: 0x10D19AC VA: 0x10D59AC
	public static DateTimeOffset XsdKatmaiDateOffsetToDateTimeOffset(byte[] data, int offset) { }

	// RVA: 0x10D5A10 Offset: 0x10D1A10 VA: 0x10D5A10
	public static DateTimeOffset XsdKatmaiDateTimeOffsetToDateTimeOffset(byte[] data, int offset) { }

	// RVA: 0x10D5B0C Offset: 0x10D1B0C VA: 0x10D5B0C
	public static DateTimeOffset XsdKatmaiTimeOffsetToDateTimeOffset(byte[] data, int offset) { }

	// RVA: 0x10D5B70 Offset: 0x10D1B70 VA: 0x10D5B70
	public static string XsdKatmaiDateToString(byte[] data, int offset) { }

	// RVA: 0x10D5C88 Offset: 0x10D1C88 VA: 0x10D5C88
	public static string XsdKatmaiDateTimeToString(byte[] data, int offset) { }

	// RVA: 0x10D5F18 Offset: 0x10D1F18 VA: 0x10D5F18
	public static string XsdKatmaiTimeToString(byte[] data, int offset) { }

	// RVA: 0x10D6044 Offset: 0x10D2044 VA: 0x10D6044
	public static string XsdKatmaiDateOffsetToString(byte[] data, int offset) { }

	// RVA: 0x10D617C Offset: 0x10D217C VA: 0x10D617C
	public static string XsdKatmaiDateTimeOffsetToString(byte[] data, int offset) { }

	// RVA: 0x10D6454 Offset: 0x10D2454 VA: 0x10D6454
	public static string XsdKatmaiTimeOffsetToString(byte[] data, int offset) { }

	// RVA: 0x10D561C Offset: 0x10D161C VA: 0x10D561C
	private static long GetKatmaiDateTicks(byte[] data, ref int pos) { }

	// RVA: 0x10D5720 Offset: 0x10D1720 VA: 0x10D5720
	private static long GetKatmaiTimeTicks(byte[] data, ref int pos) { }

	// RVA: 0x10D5AB8 Offset: 0x10D1AB8 VA: 0x10D5AB8
	private static long GetKatmaiTimeZoneTicks(byte[] data, int pos) { }

	// RVA: 0x10D5E04 Offset: 0x10D1E04 VA: 0x10D5E04
	private static int GetFractions(DateTime dt) { }

	// RVA: 0x10D6318 Offset: 0x10D2318 VA: 0x10D6318
	private static int GetFractions(DateTimeOffset dt) { }

	// RVA: 0x10D65A0 Offset: 0x10D25A0 VA: 0x10D65A0
	private static void .cctor() { }
}


// Namespace: 
private enum XmlSqlBinaryReader.ScanState // TypeDefIndex: 2550
{
	// Fields
	public int value__; // 0x0
	public const XmlSqlBinaryReader.ScanState Doc = 0;
	public const XmlSqlBinaryReader.ScanState XmlText = 1;
	public const XmlSqlBinaryReader.ScanState Attr = 2;
	public const XmlSqlBinaryReader.ScanState AttrVal = 3;
	public const XmlSqlBinaryReader.ScanState AttrValPseudoValue = 4;
	public const XmlSqlBinaryReader.ScanState Init = 5;
	public const XmlSqlBinaryReader.ScanState Error = 6;
	public const XmlSqlBinaryReader.ScanState EOF = 7;
	public const XmlSqlBinaryReader.ScanState Closed = 8;
}


// Namespace: 
internal struct XmlSqlBinaryReader.QName // TypeDefIndex: 2551
{
	// Fields
	public string prefix; // 0x0
	public string localname; // 0x8
	public string namespaceUri; // 0x10

	// Methods

	// RVA: 0x10DB8C8 Offset: 0x10D78C8 VA: 0x10DB8C8
	public void .ctor(string prefix, string lname, string nsUri) { }

	// RVA: 0x10DA788 Offset: 0x10D6788 VA: 0x10DA788
	public void Set(string prefix, string lname, string nsUri) { }

	// RVA: 0x10D6BBC Offset: 0x10D2BBC VA: 0x10D6BBC
	public void Clear() { }

	// RVA: 0x10DB21C Offset: 0x10D721C VA: 0x10DB21C
	public bool MatchNs(string lname, string nsUri) { }

	// RVA: 0x10DB26C Offset: 0x10D726C VA: 0x10DB26C
	public bool MatchPrefix(string prefix, string lname) { }

	// RVA: 0x10DB600 Offset: 0x10D7600 VA: 0x10DB600
	public void CheckPrefixNS(string prefix, string namespaceUri) { }

	// RVA: 0x10DE820 Offset: 0x10DA820 VA: 0x10DE820 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x10DE868 Offset: 0x10DA868 VA: 0x10DE868
	public int GetNSHashCode(SecureStringHasher hasher) { }

	// RVA: 0x10DE8B4 Offset: 0x10DA8B4 VA: 0x10DE8B4 Slot: 0
	public override bool Equals(object other) { }

	// RVA: 0x10DC3D8 Offset: 0x10D83D8 VA: 0x10DC3D8 Slot: 3
	public override string ToString() { }

	// RVA: 0x10DE964 Offset: 0x10DA964 VA: 0x10DE964
	public static bool op_Equality(XmlSqlBinaryReader.QName a, XmlSqlBinaryReader.QName b) { }
}


// Namespace: 
private struct XmlSqlBinaryReader.ElemInfo // TypeDefIndex: 2552
{
	// Fields
	public XmlSqlBinaryReader.QName name; // 0x0
	public string xmlLang; // 0x18
	public XmlSpace xmlSpace; // 0x20
	public bool xmlspacePreserve; // 0x24
	public XmlSqlBinaryReader.NamespaceDecl nsdecls; // 0x28

	// Methods

	// RVA: 0x10DD12C Offset: 0x10D912C VA: 0x10DD12C
	public void Set(XmlSqlBinaryReader.QName name, bool xmlspacePreserve) { }

	// RVA: 0x10DC588 Offset: 0x10D8588 VA: 0x10DC588
	public XmlSqlBinaryReader.NamespaceDecl Clear() { }
}


// Namespace: 
private struct XmlSqlBinaryReader.AttrInfo // TypeDefIndex: 2553
{
	// Fields
	public XmlSqlBinaryReader.QName name; // 0x0
	public string val; // 0x18
	public int contentPos; // 0x20
	public int hashCode; // 0x24
	public int prevHash; // 0x28

	// Methods

	// RVA: 0x10DB8D4 Offset: 0x10D78D4 VA: 0x10DB8D4
	public void Set(XmlSqlBinaryReader.QName n, string v) { }

	// RVA: 0x10DBDA4 Offset: 0x10D7DA4 VA: 0x10DBDA4
	public void Set(XmlSqlBinaryReader.QName n, int pos) { }

	// RVA: 0x10DC3C0 Offset: 0x10D83C0 VA: 0x10DC3C0
	public void GetLocalnameAndNamespaceUri(out string localname, out string namespaceUri) { }

	// RVA: 0x10DC448 Offset: 0x10D8448 VA: 0x10DC448
	public int GetLocalnameAndNamespaceUriAndHash(SecureStringHasher hasher, out string localname, out string namespaceUri) { }

	// RVA: 0x10DC3D4 Offset: 0x10D83D4 VA: 0x10DC3D4
	public bool MatchNS(string localname, string namespaceUri) { }

	// RVA: 0x10DC470 Offset: 0x10D8470 VA: 0x10DC470
	public bool MatchHashNS(int hash, string localname, string namespaceUri) { }

	// RVA: 0x10DAB64 Offset: 0x10D6B64 VA: 0x10DAB64
	public void AdjustPosition(int adj) { }
}


// Namespace: 
private class XmlSqlBinaryReader.NamespaceDecl // TypeDefIndex: 2554
{
	// Fields
	public string prefix; // 0x10
	public string uri; // 0x18
	public XmlSqlBinaryReader.NamespaceDecl scopeLink; // 0x20
	public XmlSqlBinaryReader.NamespaceDecl prevLink; // 0x28
	public int scope; // 0x30
	public bool implied; // 0x34

	// Methods

	// RVA: 0x10DA25C Offset: 0x10D625C VA: 0x10DA25C
	public void .ctor(string prefix, string nsuri, XmlSqlBinaryReader.NamespaceDecl nextInScope, XmlSqlBinaryReader.NamespaceDecl prevDecl, int scope, bool implied) { }
}


// Namespace: 
private struct XmlSqlBinaryReader.SymbolTables // TypeDefIndex: 2555
{
	// Fields
	public string[] symtable; // 0x0
	public int symCount; // 0x8
	public XmlSqlBinaryReader.QName[] qnametable; // 0x10
	public int qnameCount; // 0x18

	// Methods

	// RVA: 0x10D6AF8 Offset: 0x10D2AF8 VA: 0x10D6AF8
	public void Init() { }
}


// Namespace: 
private class XmlSqlBinaryReader.NestedBinXml // TypeDefIndex: 2556
{
	// Fields
	public XmlSqlBinaryReader.SymbolTables symbolTables; // 0x10
	public int docState; // 0x30
	public XmlSqlBinaryReader.NestedBinXml next; // 0x38

	// Methods

	// RVA: 0x10DD14C Offset: 0x10D914C VA: 0x10DD14C
	public void .ctor(XmlSqlBinaryReader.SymbolTables symbolTables, int docState, XmlSqlBinaryReader.NestedBinXml next) { }
}


// Namespace: System.Xml
internal sealed class XmlSqlBinaryReader : XmlReader, IXmlNamespaceResolver // TypeDefIndex: 2557
{
	// Fields
	internal static readonly Type TypeOfObject; // 0x0
	internal static readonly Type TypeOfString; // 0x8
	private static Type[] TokenTypeMap; // 0x10
	private static byte[] XsdKatmaiTimeScaleToValueLengthMap; // 0x18
	private static ReadState[] ScanState2ReadState; // 0x20
	private Stream inStrm; // 0x10
	private byte[] data; // 0x18
	private int pos; // 0x20
	private int mark; // 0x24
	private int end; // 0x28
	private long offset; // 0x30
	private bool eof; // 0x38
	private bool sniffed; // 0x39
	private bool isEmpty; // 0x3A
	private int docState; // 0x3C
	private XmlSqlBinaryReader.SymbolTables symbolTables; // 0x40
	private XmlNameTable xnt; // 0x60
	private bool xntFromSettings; // 0x68
	private string xml; // 0x70
	private string xmlns; // 0x78
	private string nsxmlns; // 0x80
	private string baseUri; // 0x88
	private XmlSqlBinaryReader.ScanState state; // 0x90
	private XmlNodeType nodetype; // 0x94
	private BinXmlToken token; // 0x98
	private int attrIndex; // 0x9C
	private XmlSqlBinaryReader.QName qnameOther; // 0xA0
	private XmlSqlBinaryReader.QName qnameElement; // 0xB8
	private XmlNodeType parentNodeType; // 0xD0
	private XmlSqlBinaryReader.ElemInfo[] elementStack; // 0xD8
	private int elemDepth; // 0xE0
	private XmlSqlBinaryReader.AttrInfo[] attributes; // 0xE8
	private int[] attrHashTbl; // 0xF0
	private int attrCount; // 0xF8
	private int posAfterAttrs; // 0xFC
	private bool xmlspacePreserve; // 0x100
	private int tokLen; // 0x104
	private int tokDataPos; // 0x108
	private bool hasTypedValue; // 0x10C
	private Type valueType; // 0x110
	private string stringValue; // 0x118
	private Dictionary<string, XmlSqlBinaryReader.NamespaceDecl> namespaces; // 0x120
	private XmlSqlBinaryReader.NestedBinXml prevNameInfo; // 0x128
	private XmlReader textXmlReader; // 0x130
	private bool closeInput; // 0x138
	private bool checkCharacters; // 0x139
	private bool ignoreWhitespace; // 0x13A
	private bool ignorePIs; // 0x13B
	private bool ignoreComments; // 0x13C
	private DtdProcessing dtdProcessing; // 0x140
	private SecureStringHasher hasher; // 0x148
	private XmlCharType xmlCharType; // 0x150
	private Encoding unicode; // 0x158
	private byte version; // 0x160

	// Properties
	public override XmlReaderSettings Settings { get; }
	public override XmlNodeType NodeType { get; }
	public override string LocalName { get; }
	public override string NamespaceURI { get; }
	public override string Prefix { get; }
	public override string Value { get; }
	public override int Depth { get; }
	public override string BaseURI { get; }
	public override bool IsEmptyElement { get; }
	public override XmlSpace XmlSpace { get; }
	public override string XmlLang { get; }
	public override Type ValueType { get; }
	public override int AttributeCount { get; }
	public override bool EOF { get; }
	public override XmlNameTable NameTable { get; }
	public override ReadState ReadState { get; }

	// Methods

	// RVA: 0x10D6654 Offset: 0x10D2654 VA: 0x10D6654
	public void .ctor(Stream stream, byte[] data, int len, string baseUri, bool closeInput, XmlReaderSettings settings) { }

	// RVA: 0x10D7774 Offset: 0x10D3774 VA: 0x10D7774 Slot: 5
	public override XmlReaderSettings get_Settings() { }

	// RVA: 0x10D7890 Offset: 0x10D3890 VA: 0x10D7890 Slot: 6
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x10D7898 Offset: 0x10D3898 VA: 0x10D7898 Slot: 8
	public override string get_LocalName() { }

	// RVA: 0x10D78A0 Offset: 0x10D38A0 VA: 0x10D78A0 Slot: 9
	public override string get_NamespaceURI() { }

	// RVA: 0x10D78A8 Offset: 0x10D38A8 VA: 0x10D78A8 Slot: 10
	public override string get_Prefix() { }

	// RVA: 0x10D78B0 Offset: 0x10D38B0 VA: 0x10D78B0 Slot: 11
	public override string get_Value() { }

	// RVA: 0x10D8578 Offset: 0x10D4578 VA: 0x10D8578 Slot: 12
	public override int get_Depth() { }

	// RVA: 0x10D861C Offset: 0x10D461C VA: 0x10D861C Slot: 13
	public override string get_BaseURI() { }

	// RVA: 0x10D8624 Offset: 0x10D4624 VA: 0x10D8624 Slot: 14
	public override bool get_IsEmptyElement() { }

	// RVA: 0x10D8648 Offset: 0x10D4648 VA: 0x10D8648 Slot: 17
	public override XmlSpace get_XmlSpace() { }

	// RVA: 0x10D86C8 Offset: 0x10D46C8 VA: 0x10D86C8 Slot: 18
	public override string get_XmlLang() { }

	// RVA: 0x10D8788 Offset: 0x10D4788 VA: 0x10D8788 Slot: 20
	public override Type get_ValueType() { }

	// RVA: 0x10D8790 Offset: 0x10D4790 VA: 0x10D8790 Slot: 21
	public override int get_AttributeCount() { }

	// RVA: 0x10D87E4 Offset: 0x10D47E4 VA: 0x10D87E4 Slot: 23
	public override string GetAttribute(string name, string ns) { }

	// RVA: 0x10D8994 Offset: 0x10D4994 VA: 0x10D8994 Slot: 22
	public override string GetAttribute(string name) { }

	// RVA: 0x10D8AE0 Offset: 0x10D4AE0 VA: 0x10D8AE0 Slot: 24
	public override string GetAttribute(int i) { }

	// RVA: 0x10D8B70 Offset: 0x10D4B70 VA: 0x10D8B70 Slot: 25
	public override bool MoveToAttribute(string name) { }

	// RVA: 0x10D8CC8 Offset: 0x10D4CC8 VA: 0x10D8CC8 Slot: 26
	public override void MoveToAttribute(int i) { }

	// RVA: 0x10D8D6C Offset: 0x10D4D6C VA: 0x10D8D6C Slot: 27
	public override bool MoveToFirstAttribute() { }

	// RVA: 0x10D8DE4 Offset: 0x10D4DE4 VA: 0x10D8DE4 Slot: 28
	public override bool MoveToNextAttribute() { }

	// RVA: 0x10D8E68 Offset: 0x10D4E68 VA: 0x10D8E68 Slot: 29
	public override bool MoveToElement() { }

	// RVA: 0x10D8F20 Offset: 0x10D4F20 VA: 0x10D8F20 Slot: 32
	public override bool get_EOF() { }

	// RVA: 0x10D8F30 Offset: 0x10D4F30 VA: 0x10D8F30 Slot: 30
	public override bool ReadAttributeValue() { }

	// RVA: 0x10D9298 Offset: 0x10D5298 VA: 0x10D9298 Slot: 33
	public override void Close() { }

	// RVA: 0x10D9304 Offset: 0x10D5304 VA: 0x10D9304 Slot: 36
	public override XmlNameTable get_NameTable() { }

	// RVA: 0x10D930C Offset: 0x10D530C VA: 0x10D930C Slot: 37
	public override string LookupNamespace(string prefix) { }

	// RVA: 0x10D93C0 Offset: 0x10D53C0 VA: 0x10D93C0 Slot: 39
	public override void ResolveEntity() { }

	// RVA: 0x10D93F8 Offset: 0x10D53F8 VA: 0x10D93F8 Slot: 34
	public override ReadState get_ReadState() { }

	// RVA: 0x10D9478 Offset: 0x10D5478 VA: 0x10D9478 Slot: 31
	public override bool Read() { }

	// RVA: 0x10D9D68 Offset: 0x10D5D68 VA: 0x10D9D68 Slot: 53
	private IDictionary<string, string> System.Xml.IXmlNamespaceResolver.GetNamespacesInScope(XmlNamespaceScope scope) { }

	// RVA: 0x10DA040 Offset: 0x10D6040 VA: 0x10DA040 Slot: 55
	private string System.Xml.IXmlNamespaceResolver.LookupPrefix(string namespaceName) { }

	// RVA: 0x10DA1DC Offset: 0x10D61DC VA: 0x10DA1DC
	private void VerifyVersion(int requiredVersion, BinXmlToken token) { }

	// RVA: 0x10D6C10 Offset: 0x10D2C10 VA: 0x10D6C10
	private void AddInitNamespace(string prefix, string uri) { }

	// RVA: 0x10DA2B4 Offset: 0x10D62B4 VA: 0x10DA2B4
	private void AddName() { }

	// RVA: 0x10DA484 Offset: 0x10D6484 VA: 0x10DA484
	private void AddQName() { }

	// RVA: 0x10DA794 Offset: 0x10D6794 VA: 0x10DA794
	private void NameFlush() { }

	// RVA: 0x10DA7E4 Offset: 0x10D67E4 VA: 0x10DA7E4
	private void SkipExtn() { }

	// RVA: 0x10DA8B8 Offset: 0x10D68B8 VA: 0x10DA8B8
	private int ReadQNameRef() { }

	// RVA: 0x10DA6FC Offset: 0x10D66FC VA: 0x10DA6FC
	private int ReadNameRef() { }

	// RVA: 0x10DA944 Offset: 0x10D6944 VA: 0x10DA944
	private bool FillAllowEOF() { }

	// RVA: 0x10DAB78 Offset: 0x10D6B78 VA: 0x10DAB78
	private void Fill_(int require) { }

	// RVA: 0x10DA89C Offset: 0x10D689C VA: 0x10DA89C
	private void Fill(int require) { }

	// RVA: 0x10DAC64 Offset: 0x10D6C64 VA: 0x10DAC64
	private byte ReadByte() { }

	// RVA: 0x10DACC0 Offset: 0x10D6CC0 VA: 0x10DACC0
	private ushort ReadUShort() { }

	// RVA: 0x10DA870 Offset: 0x10D6870 VA: 0x10DA870
	private int ParseMB32() { }

	// RVA: 0x10DAD34 Offset: 0x10D6D34 VA: 0x10DAD34
	private int ParseMB32_(byte b) { }

	// RVA: 0x10DADCC Offset: 0x10D6DCC VA: 0x10DADCC
	private int ParseMB32(int pos) { }

	// RVA: 0x10DAEB8 Offset: 0x10D6EB8 VA: 0x10DAEB8
	private int ParseMB64() { }

	// RVA: 0x10DAEE4 Offset: 0x10D6EE4 VA: 0x10DAEE4
	private BinXmlToken PeekToken() { }

	// RVA: 0x10DAF4C Offset: 0x10D6F4C VA: 0x10DAF4C
	private BinXmlToken ReadToken() { }

	// RVA: 0x10DAFBC Offset: 0x10D6FBC VA: 0x10DAFBC
	private BinXmlToken NextToken2(BinXmlToken token) { }

	// RVA: 0x10DB034 Offset: 0x10D7034 VA: 0x10DB034
	private BinXmlToken NextToken1() { }

	// RVA: 0x10DB0AC Offset: 0x10D70AC VA: 0x10DB0AC
	private BinXmlToken NextToken() { }

	// RVA: 0x10DB110 Offset: 0x10D7110 VA: 0x10DB110
	private BinXmlToken PeekNextToken() { }

	// RVA: 0x10D90B8 Offset: 0x10D50B8 VA: 0x10D90B8
	private BinXmlToken RescanNextToken() { }

	// RVA: 0x10DA3C0 Offset: 0x10D63C0 VA: 0x10DA3C0
	private string ParseText() { }

	// RVA: 0x10DB138 Offset: 0x10D7138 VA: 0x10DB138
	private int ScanText(out int start) { }

	// RVA: 0x10D79C4 Offset: 0x10D39C4 VA: 0x10D79C4
	private string GetString(int pos, int cch) { }

	// RVA: 0x10DB1F0 Offset: 0x10D71F0 VA: 0x10DB1F0
	private string GetStringAligned(byte[] data, int offset, int cch) { }

	// RVA: 0x10D8454 Offset: 0x10D4454 VA: 0x10D8454
	private string GetAttributeText(int i) { }

	// RVA: 0x10D890C Offset: 0x10D490C VA: 0x10D890C
	private int LocateAttribute(string name, string ns) { }

	// RVA: 0x10D8A00 Offset: 0x10D4A00 VA: 0x10D8A00
	private int LocateAttribute(string name) { }

	// RVA: 0x10D8C08 Offset: 0x10D4C08 VA: 0x10D8C08
	private void PositionOnAttribute(int i) { }

	// RVA: 0x10DB2BC Offset: 0x10D72BC VA: 0x10DB2BC
	private void GrowElements() { }

	// RVA: 0x10DB344 Offset: 0x10D7344 VA: 0x10DB344
	private void GrowAttributes() { }

	// RVA: 0x10DB3C8 Offset: 0x10D73C8 VA: 0x10DB3C8
	private void ClearAttributes() { }

	// RVA: 0x10DB3D8 Offset: 0x10D73D8 VA: 0x10DB3D8
	private void PushNamespace(string prefix, string ns, bool implied) { }

	// RVA: 0x10DB6F8 Offset: 0x10D76F8 VA: 0x10DB6F8
	private void PopNamespaces(XmlSqlBinaryReader.NamespaceDecl firstInScopeChain) { }

	// RVA: 0x10DB79C Offset: 0x10D779C VA: 0x10DB79C
	private void GenerateImpliedXmlnsAttrs() { }

	// RVA: 0x10D9640 Offset: 0x10D5640 VA: 0x10D9640
	private bool ReadInit(bool skipXmlDecl) { }

	// RVA: 0x10DB8F0 Offset: 0x10D78F0 VA: 0x10DB8F0
	private void ScanAttributes() { }

	// RVA: 0x10DC038 Offset: 0x10D8038 VA: 0x10DC038
	private void SimpleCheckForDuplicateAttributes() { }

	// RVA: 0x10DC184 Offset: 0x10D8184 VA: 0x10DC184
	private void HashCheckForDuplicateAttributes() { }

	// RVA: 0x10D7C34 Offset: 0x10D3C34 VA: 0x10D7C34
	private string XmlDeclValue() { }

	// RVA: 0x10D7B30 Offset: 0x10D3B30 VA: 0x10D7B30
	private string CDATAValue() { }

	// RVA: 0x10DC490 Offset: 0x10D8490 VA: 0x10DC490
	private void FinishCDATA() { }

	// RVA: 0x10DC534 Offset: 0x10D8534 VA: 0x10DC534
	private void FinishEndElement() { }

	// RVA: 0x10D99FC Offset: 0x10D59FC VA: 0x10D99FC
	private bool ReadDoc() { }

	// RVA: 0x10DCF58 Offset: 0x10D8F58 VA: 0x10DCF58
	private void ImplReadData(BinXmlToken tokenType) { }

	// RVA: 0x10DC598 Offset: 0x10D8598 VA: 0x10DC598
	private void ImplReadElement() { }

	// RVA: 0x10DC7E0 Offset: 0x10D87E0 VA: 0x10DC7E0
	private void ImplReadEndElement() { }

	// RVA: 0x10DC8A8 Offset: 0x10D88A8 VA: 0x10DC8A8
	private void ImplReadDoctype() { }

	// RVA: 0x10DCB14 Offset: 0x10D8B14 VA: 0x10DCB14
	private void ImplReadPI() { }

	// RVA: 0x10DCB78 Offset: 0x10D8B78 VA: 0x10DCB78
	private void ImplReadComment() { }

	// RVA: 0x10DCBA4 Offset: 0x10D8BA4 VA: 0x10DCBA4
	private void ImplReadCDATA() { }

	// RVA: 0x10DCBD8 Offset: 0x10D8BD8 VA: 0x10DCBD8
	private void ImplReadNest() { }

	// RVA: 0x10DCC78 Offset: 0x10D8C78 VA: 0x10DCC78
	private void ImplReadEndNest() { }

	// RVA: 0x10DCCA8 Offset: 0x10D8CA8 VA: 0x10DCCA8
	private void ImplReadXmlText() { }

	// RVA: 0x10DD190 Offset: 0x10D9190 VA: 0x10DD190
	private void UpdateFromTextReader() { }

	// RVA: 0x10D8BEC Offset: 0x10D4BEC VA: 0x10D8BEC
	private bool UpdateFromTextReader(bool needUpdate) { }

	// RVA: 0x10DD0C4 Offset: 0x10D90C4 VA: 0x10DD0C4
	private void CheckAllowContent() { }

	// RVA: 0x10D6CE4 Offset: 0x10D2CE4 VA: 0x10D6CE4
	private void GenerateTokenTypeMap() { }

	// RVA: 0x10D91AC Offset: 0x10D51AC VA: 0x10D91AC
	private Type GetValueType(BinXmlToken token) { }

	// RVA: 0x10D91A0 Offset: 0x10D51A0 VA: 0x10D91A0
	private void ReScanOverValue(BinXmlToken token) { }

	// RVA: 0x10DBE8C Offset: 0x10D7E8C VA: 0x10DBE8C
	private XmlNodeType ScanOverValue(BinXmlToken token, bool attr, bool checkChars) { }

	// RVA: 0x10DD494 Offset: 0x10D9494 VA: 0x10DD494
	private XmlNodeType ScanOverAnyValue(BinXmlToken token, bool attr, bool checkChars) { }

	// RVA: 0x10DD238 Offset: 0x10D9238 VA: 0x10DD238
	private XmlNodeType CheckText(bool attr) { }

	// RVA: 0x10DD3FC Offset: 0x10D93FC VA: 0x10DD3FC
	private XmlNodeType CheckTextIsWS() { }

	// RVA: 0x10DD890 Offset: 0x10D9890 VA: 0x10DD890
	private void CheckValueTokenBounds() { }

	// RVA: 0x10DD7A8 Offset: 0x10D97A8 VA: 0x10DD7A8
	private int GetXsdKatmaiTokenLength(BinXmlToken token) { }

	// RVA: 0x10DD8F0 Offset: 0x10D98F0 VA: 0x10DD8F0
	private int XsdKatmaiTimeScaleToValueLength(byte scale) { }

	// RVA: 0x10DD9C4 Offset: 0x10D99C4 VA: 0x10DD9C4
	private long ValueAsLong() { }

	// RVA: 0x10DE1E4 Offset: 0x10DA1E4 VA: 0x10DE1E4
	private ulong ValueAsULong() { }

	// RVA: 0x10DE000 Offset: 0x10DA000 VA: 0x10DE000
	private Decimal ValueAsDecimal() { }

	// RVA: 0x10DDECC Offset: 0x10D9ECC VA: 0x10DDECC
	private double ValueAsDouble() { }

	// RVA: 0x10DE380 Offset: 0x10DA380 VA: 0x10DE380
	private string ValueAsDateTimeString() { }

	// RVA: 0x10D7D74 Offset: 0x10D3D74 VA: 0x10D7D74
	private string ValueAsString(BinXmlToken token) { }

	// RVA: 0x10DDBBC Offset: 0x10D9BBC VA: 0x10DDBBC
	private short GetInt16(int pos) { }

	// RVA: 0x10DDD44 Offset: 0x10D9D44 VA: 0x10DDD44
	private ushort GetUInt16(int pos) { }

	// RVA: 0x10DDC00 Offset: 0x10D9C00 VA: 0x10DDC00
	private int GetInt32(int pos) { }

	// RVA: 0x10DDD88 Offset: 0x10D9D88 VA: 0x10DDD88
	private uint GetUInt32(int pos) { }

	// RVA: 0x10DDC74 Offset: 0x10D9C74 VA: 0x10DDC74
	private long GetInt64(int pos) { }

	// RVA: 0x10DDDFC Offset: 0x10D9DFC VA: 0x10DDDFC
	private ulong GetUInt64(int pos) { }

	// RVA: 0x10DE234 Offset: 0x10DA234 VA: 0x10DE234
	private float GetSingle(int offset) { }

	// RVA: 0x10DE2AC Offset: 0x10DA2AC VA: 0x10DE2AC
	private double GetDouble(int offset) { }

	// RVA: 0x10DA214 Offset: 0x10D6214 VA: 0x10DA214
	private Exception ThrowUnexpectedToken(BinXmlToken token) { }

	// RVA: 0x10DABF0 Offset: 0x10D6BF0 VA: 0x10DABF0
	private Exception ThrowXmlException(string res) { }

	// RVA: 0x10DBDC0 Offset: 0x10D7DC0 VA: 0x10DBDC0
	private Exception ThrowXmlException(string res, string arg1, string arg2) { }

	// RVA: 0x10DBFB4 Offset: 0x10D7FB4 VA: 0x10DBFB4
	private Exception ThrowNotSupported(string res) { }

	// RVA: 0x10DE6A4 Offset: 0x10DA6A4 VA: 0x10DE6A4
	private static void .cctor() { }
}


// Namespace: System.Xml
internal class BitStack // TypeDefIndex: 2558
{
	// Fields
	private uint[] bitStack; // 0x10
	private int stackPos; // 0x18
	private uint curr; // 0x1C

	// Methods

	// RVA: 0x10DE9C4 Offset: 0x10DA9C4 VA: 0x10DE9C4
	public void .ctor() { }

	// RVA: 0x10DE9E4 Offset: 0x10DA9E4 VA: 0x10DE9E4
	public void PushBit(bool bit) { }

	// RVA: 0x10DEAEC Offset: 0x10DAAEC VA: 0x10DEAEC
	public bool PopBit() { }

	// RVA: 0x10DEB58 Offset: 0x10DAB58 VA: 0x10DEB58
	public bool PeekBit() { }

	// RVA: 0x10DEA1C Offset: 0x10DAA1C VA: 0x10DEA1C
	private void PushCurr() { }

	// RVA: 0x10DEB14 Offset: 0x10DAB14 VA: 0x10DEB14
	private void PopCurr() { }
}


// Namespace: System.Xml
internal static class Bits // TypeDefIndex: 2559
{
	// Fields
	private static readonly uint MASK_0101010101010101; // 0x0
	private static readonly uint MASK_0011001100110011; // 0x4
	private static readonly uint MASK_0000111100001111; // 0x8
	private static readonly uint MASK_0000000011111111; // 0xC
	private static readonly uint MASK_1111111111111111; // 0x10

	// Methods

	// RVA: 0x10DEB64 Offset: 0x10DAB64 VA: 0x10DEB64
	public static int Count(uint num) { }

	// RVA: 0x10DEC00 Offset: 0x10DAC00 VA: 0x10DEC00
	public static int LeastPosition(uint num) { }

	// RVA: 0x10DEC6C Offset: 0x10DAC6C VA: 0x10DEC6C
	private static void .cctor() { }
}


// Namespace: System.Xml
internal class ByteStack // TypeDefIndex: 2560
{
	// Fields
	private byte[] stack; // 0x10
	private int growthRate; // 0x18
	private int top; // 0x1C
	private int size; // 0x20

	// Methods

	// RVA: 0x10DECC4 Offset: 0x10DACC4 VA: 0x10DECC4
	public void .ctor(int growthRate) { }

	// RVA: 0x10DED34 Offset: 0x10DAD34 VA: 0x10DED34
	public void Push(byte data) { }

	// RVA: 0x10DEE04 Offset: 0x10DAE04 VA: 0x10DEE04
	public byte Pop() { }
}


// Namespace: System.Xml
internal class CharEntityEncoderFallback : EncoderFallback // TypeDefIndex: 2561
{
	// Fields
	private CharEntityEncoderFallbackBuffer fallbackBuffer; // 0x10
	private int[] textContentMarks; // 0x18
	private int endMarkPos; // 0x20
	private int curMarkPos; // 0x24
	private int startOffset; // 0x28

	// Properties
	public override int MaxCharCount { get; }

	// Methods

	// RVA: 0x10DEE4C Offset: 0x10DAE4C VA: 0x10DEE4C
	internal void .ctor() { }

	// RVA: 0x10DEE54 Offset: 0x10DAE54 VA: 0x10DEE54 Slot: 4
	public override EncoderFallbackBuffer CreateFallbackBuffer() { }

	// RVA: 0x10DEF2C Offset: 0x10DAF2C VA: 0x10DEF2C Slot: 5
	public override int get_MaxCharCount() { }

	// RVA: 0x10DEF34 Offset: 0x10DAF34 VA: 0x10DEF34
	internal void Reset(int[] textContentMarks, int endMarkPos) { }

	// RVA: 0x10DEF40 Offset: 0x10DAF40 VA: 0x10DEF40
	internal bool CanReplaceAt(int index) { }
}


// Namespace: System.Xml
internal class CharEntityEncoderFallbackBuffer : EncoderFallbackBuffer // TypeDefIndex: 2562
{
	// Fields
	private CharEntityEncoderFallback parent; // 0x30
	private string charEntity; // 0x38
	private int charEntityIndex; // 0x40

	// Properties
	public override int Remaining { get; }

	// Methods

	// RVA: 0x10DEEB8 Offset: 0x10DAEB8 VA: 0x10DEEB8
	internal void .ctor(CharEntityEncoderFallback parent) { }

	// RVA: 0x10DEFC0 Offset: 0x10DAFC0 VA: 0x10DEFC0 Slot: 4
	public override bool Fallback(char charUnknown, int index) { }

	// RVA: 0x10DF1B0 Offset: 0x10DB1B0 VA: 0x10DF1B0 Slot: 5
	public override bool Fallback(char charUnknownHigh, char charUnknownLow, int index) { }

	// RVA: 0x10DF440 Offset: 0x10DB440 VA: 0x10DF440 Slot: 6
	public override char GetNextChar() { }

	// RVA: 0x10DF498 Offset: 0x10DB498 VA: 0x10DF498 Slot: 7
	public override bool MovePrevious() { }

	// RVA: 0x10DF4B4 Offset: 0x10DB4B4 VA: 0x10DF4B4 Slot: 8
	public override int get_Remaining() { }

	// RVA: 0x10DF4E8 Offset: 0x10DB4E8 VA: 0x10DF4E8 Slot: 9
	public override void Reset() { }

	// RVA: 0x10DF430 Offset: 0x10DB430 VA: 0x10DF430
	private int SurrogateCharToUtf32(char highSurrogate, char lowSurrogate) { }
}


// Namespace: System.Xml
public enum ConformanceLevel // TypeDefIndex: 2563
{
	// Fields
	public int value__; // 0x0
	public const ConformanceLevel Auto = 0;
	public const ConformanceLevel Fragment = 1;
	public const ConformanceLevel Document = 2;
}


// Namespace: System.Xml
public enum DtdProcessing // TypeDefIndex: 2564
{
	// Fields
	public int value__; // 0x0
	public const DtdProcessing Prohibit = 0;
	public const DtdProcessing Ignore = 1;
	public const DtdProcessing Parse = 2;
}


// Namespace: System.Xml
public enum EntityHandling // TypeDefIndex: 2565
{
	// Fields
	public int value__; // 0x0
	public const EntityHandling ExpandEntities = 1;
	public const EntityHandling ExpandCharEntities = 2;
}


// Namespace: System.Xml
internal class HtmlEncodedRawTextWriter : XmlEncodedRawTextWriter // TypeDefIndex: 2566
{
	// Fields
	protected ByteStack elementScope; // 0xC0
	protected ElementProperties currentElementProperties; // 0xC8
	private AttributeProperties currentAttributeProperties; // 0xCC
	private bool endsWithAmpersand; // 0xD0
	private byte[] uriEscapingBuffer; // 0xD8
	private string mediaType; // 0xE0
	private bool doNotEscapeUriAttributes; // 0xE8
	protected static TernaryTreeReadOnly elementPropertySearch; // 0x0
	protected static TernaryTreeReadOnly attributePropertySearch; // 0x8

	// Methods

	// RVA: 0x10DF4F4 Offset: 0x10DB4F4 VA: 0x10DF4F4
	public void .ctor(TextWriter writer, XmlWriterSettings settings) { }

	// RVA: 0x10DF690 Offset: 0x10DB690 VA: 0x10DF690
	public void .ctor(Stream stream, XmlWriterSettings settings) { }

	// RVA: 0x10DF6BC Offset: 0x10DB6BC VA: 0x10DF6BC Slot: 36
	internal override void WriteXmlDeclaration(XmlStandalone standalone) { }

	// RVA: 0x10DF6C0 Offset: 0x10DB6C0 VA: 0x10DF6C0 Slot: 37
	internal override void WriteXmlDeclaration(string xmldecl) { }

	// RVA: 0x10DF6C4 Offset: 0x10DB6C4 VA: 0x10DF6C4 Slot: 8
	public override void WriteDocType(string name, string pubid, string sysid, string subset) { }

	// RVA: 0x10DF90C Offset: 0x10DB90C VA: 0x10DF90C Slot: 9
	public override void WriteStartElement(string prefix, string localName, string ns) { }

	// RVA: 0x10DFA38 Offset: 0x10DBA38 VA: 0x10DFA38 Slot: 38
	internal override void StartElementContent() { }

	// RVA: 0x10DFBA0 Offset: 0x10DBBA0 VA: 0x10DFBA0 Slot: 40
	internal override void WriteEndElement(string prefix, string localName, string ns) { }

	// RVA: 0x10DFCA4 Offset: 0x10DBCA4 VA: 0x10DFCA4 Slot: 41
	internal override void WriteFullEndElement(string prefix, string localName, string ns) { }

	// RVA: 0x10DFDA8 Offset: 0x10DBDA8 VA: 0x10DFDA8 Slot: 12
	public override void WriteStartAttribute(string prefix, string localName, string ns) { }

	// RVA: 0x10DFF2C Offset: 0x10DBF2C VA: 0x10DFF2C Slot: 13
	public override void WriteEndAttribute() { }

	// RVA: 0x10E0050 Offset: 0x10DC050 VA: 0x10E0050 Slot: 16
	public override void WriteProcessingInstruction(string target, string text) { }

	// RVA: 0x10E0184 Offset: 0x10DC184 VA: 0x10E0184 Slot: 20
	public override void WriteString(string text) { }

	// RVA: 0x10E0250 Offset: 0x10DC250 VA: 0x10E0250 Slot: 17
	public override void WriteEntityRef(string name) { }

	// RVA: 0x10E02A8 Offset: 0x10DC2A8 VA: 0x10E02A8 Slot: 18
	public override void WriteCharEntity(char ch) { }

	// RVA: 0x10E0300 Offset: 0x10DC300 VA: 0x10E0300 Slot: 21
	public override void WriteSurrogateCharEntity(char lowChar, char highChar) { }

	// RVA: 0x10E0358 Offset: 0x10DC358 VA: 0x10E0358 Slot: 22
	public override void WriteChars(char[] buffer, int index, int count) { }

	// RVA: 0x10DF520 Offset: 0x10DB520 VA: 0x10DF520
	private void Init(XmlWriterSettings settings) { }

	// RVA: 0x10DFA8C Offset: 0x10DBA8C VA: 0x10DFA8C
	protected void WriteMetaElement() { }

	// RVA: 0x10E0238 Offset: 0x10DC238 VA: 0x10E0238
	protected void WriteHtmlElementTextBlock(char* pSrc, char* pSrcEnd) { }

	// RVA: 0x10E01F4 Offset: 0x10DC1F4 VA: 0x10E01F4
	protected void WriteHtmlAttributeTextBlock(char* pSrc, char* pSrcEnd) { }

	// RVA: 0x10E0720 Offset: 0x10DC720 VA: 0x10E0720
	private void WriteHtmlAttributeText(char* pSrc, char* pSrcEnd) { }

	// RVA: 0x10E03E8 Offset: 0x10DC3E8 VA: 0x10E03E8
	private void WriteUriAttributeText(char* pSrc, char* pSrcEnd) { }

	// RVA: 0x10DFFBC Offset: 0x10DBFBC VA: 0x10DFFBC
	private void OutputRestAmps() { }
}


// Namespace: System.Xml
internal class HtmlEncodedRawTextWriterIndent : HtmlEncodedRawTextWriter // TypeDefIndex: 2567
{
	// Fields
	private int indentLevel; // 0xEC
	private int endBlockPos; // 0xF0
	private string indentChars; // 0xF8
	private bool newLineOnAttributes; // 0x100

	// Methods

	// RVA: 0x10E0998 Offset: 0x10DC998 VA: 0x10E0998
	public void .ctor(TextWriter writer, XmlWriterSettings settings) { }

	// RVA: 0x10E0A0C Offset: 0x10DCA0C VA: 0x10E0A0C
	public void .ctor(Stream stream, XmlWriterSettings settings) { }

	// RVA: 0x10E0A58 Offset: 0x10DCA58 VA: 0x10E0A58 Slot: 8
	public override void WriteDocType(string name, string pubid, string sysid, string subset) { }

	// RVA: 0x10E0A74 Offset: 0x10DCA74 VA: 0x10E0A74 Slot: 9
	public override void WriteStartElement(string prefix, string localName, string ns) { }

	// RVA: 0x10E0C88 Offset: 0x10DCC88 VA: 0x10E0C88 Slot: 38
	internal override void StartElementContent() { }

	// RVA: 0x10E0CF8 Offset: 0x10DCCF8 VA: 0x10E0CF8 Slot: 40
	internal override void WriteEndElement(string prefix, string localName, string ns) { }

	// RVA: 0x10E0D90 Offset: 0x10DCD90 VA: 0x10E0D90 Slot: 12
	public override void WriteStartAttribute(string prefix, string localName, string ns) { }

	// RVA: 0x10E0E04 Offset: 0x10DCE04 VA: 0x10E0E04 Slot: 48
	protected override void FlushBuffer() { }

	// RVA: 0x10E09E4 Offset: 0x10DC9E4 VA: 0x10E09E4
	private void Init(XmlWriterSettings settings) { }

	// RVA: 0x10E0C38 Offset: 0x10DCC38 VA: 0x10E0C38
	private void WriteIndent() { }
}


// Namespace: System.Xml
internal abstract class HtmlTernaryTree // TypeDefIndex: 2568
{
	// Fields
	internal static byte[] htmlElements; // 0x0
	internal static byte[] htmlAttributes; // 0x8

	// Methods

	// RVA: 0x10E0E30 Offset: 0x10DCE30 VA: 0x10E0E30
	private static void .cctor() { }
}


// Namespace: System.Xml
internal class HtmlUtf8RawTextWriter : XmlUtf8RawTextWriter // TypeDefIndex: 2569
{
	// Fields
	protected ByteStack elementScope; // 0x90
	protected ElementProperties currentElementProperties; // 0x98
	private AttributeProperties currentAttributeProperties; // 0x9C
	private bool endsWithAmpersand; // 0xA0
	private byte[] uriEscapingBuffer; // 0xA8
	private string mediaType; // 0xB0
	private bool doNotEscapeUriAttributes; // 0xB8
	protected static TernaryTreeReadOnly elementPropertySearch; // 0x0
	protected static TernaryTreeReadOnly attributePropertySearch; // 0x8

	// Methods

	// RVA: 0x10E0F00 Offset: 0x10DCF00 VA: 0x10E0F00
	public void .ctor(Stream stream, XmlWriterSettings settings) { }

	// RVA: 0x10E109C Offset: 0x10DD09C VA: 0x10E109C Slot: 36
	internal override void WriteXmlDeclaration(XmlStandalone standalone) { }

	// RVA: 0x10E10A0 Offset: 0x10DD0A0 VA: 0x10E10A0 Slot: 37
	internal override void WriteXmlDeclaration(string xmldecl) { }

	// RVA: 0x10E10A4 Offset: 0x10DD0A4 VA: 0x10E10A4 Slot: 8
	public override void WriteDocType(string name, string pubid, string sysid, string subset) { }

	// RVA: 0x10E12EC Offset: 0x10DD2EC VA: 0x10E12EC Slot: 9
	public override void WriteStartElement(string prefix, string localName, string ns) { }

	// RVA: 0x10E13F8 Offset: 0x10DD3F8 VA: 0x10E13F8 Slot: 38
	internal override void StartElementContent() { }

	// RVA: 0x10E1564 Offset: 0x10DD564 VA: 0x10E1564 Slot: 40
	internal override void WriteEndElement(string prefix, string localName, string ns) { }

	// RVA: 0x10E1648 Offset: 0x10DD648 VA: 0x10E1648 Slot: 41
	internal override void WriteFullEndElement(string prefix, string localName, string ns) { }

	// RVA: 0x10E172C Offset: 0x10DD72C VA: 0x10E172C Slot: 12
	public override void WriteStartAttribute(string prefix, string localName, string ns) { }

	// RVA: 0x10E18A0 Offset: 0x10DD8A0 VA: 0x10E18A0 Slot: 13
	public override void WriteEndAttribute() { }

	// RVA: 0x10E19D0 Offset: 0x10DD9D0 VA: 0x10E19D0 Slot: 16
	public override void WriteProcessingInstruction(string target, string text) { }

	// RVA: 0x10E1AF0 Offset: 0x10DDAF0 VA: 0x10E1AF0 Slot: 20
	public override void WriteString(string text) { }

	// RVA: 0x10E1B9C Offset: 0x10DDB9C VA: 0x10E1B9C Slot: 17
	public override void WriteEntityRef(string name) { }

	// RVA: 0x10E1BF4 Offset: 0x10DDBF4 VA: 0x10E1BF4 Slot: 18
	public override void WriteCharEntity(char ch) { }

	// RVA: 0x10E1C4C Offset: 0x10DDC4C VA: 0x10E1C4C Slot: 21
	public override void WriteSurrogateCharEntity(char lowChar, char highChar) { }

	// RVA: 0x10E1CA4 Offset: 0x10DDCA4 VA: 0x10E1CA4 Slot: 22
	public override void WriteChars(char[] buffer, int index, int count) { }

	// RVA: 0x10E0F2C Offset: 0x10DCF2C VA: 0x10E0F2C
	private void Init(XmlWriterSettings settings) { }

	// RVA: 0x10E1450 Offset: 0x10DD450 VA: 0x10E1450
	protected void WriteMetaElement() { }

	// RVA: 0x10E1B84 Offset: 0x10DDB84 VA: 0x10E1B84
	protected void WriteHtmlElementTextBlock(char* pSrc, char* pSrcEnd) { }

	// RVA: 0x10E1B40 Offset: 0x10DDB40 VA: 0x10E1B40
	protected void WriteHtmlAttributeTextBlock(char* pSrc, char* pSrcEnd) { }

	// RVA: 0x10E2004 Offset: 0x10DE004 VA: 0x10E2004
	private void WriteHtmlAttributeText(char* pSrc, char* pSrcEnd) { }

	// RVA: 0x10E1CE8 Offset: 0x10DDCE8 VA: 0x10E1CE8
	private void WriteUriAttributeText(char* pSrc, char* pSrcEnd) { }

	// RVA: 0x10E190C Offset: 0x10DD90C VA: 0x10E190C
	private void OutputRestAmps() { }
}


// Namespace: System.Xml
internal class HtmlUtf8RawTextWriterIndent : HtmlUtf8RawTextWriter // TypeDefIndex: 2570
{
	// Fields
	private int indentLevel; // 0xBC
	private int endBlockPos; // 0xC0
	private string indentChars; // 0xC8
	private bool newLineOnAttributes; // 0xD0

	// Methods

	// RVA: 0x1199AD4 Offset: 0x1195AD4 VA: 0x1199AD4
	public void .ctor(Stream stream, XmlWriterSettings settings) { }

	// RVA: 0x1199B3C Offset: 0x1195B3C VA: 0x1199B3C Slot: 8
	public override void WriteDocType(string name, string pubid, string sysid, string subset) { }

	// RVA: 0x1199B5C Offset: 0x1195B5C VA: 0x1199B5C Slot: 9
	public override void WriteStartElement(string prefix, string localName, string ns) { }

	// RVA: 0x1199E80 Offset: 0x1195E80 VA: 0x1199E80 Slot: 38
	internal override void StartElementContent() { }

	// RVA: 0x1199EF8 Offset: 0x1195EF8 VA: 0x1199EF8 Slot: 40
	internal override void WriteEndElement(string prefix, string localName, string ns) { }

	// RVA: 0x1199F94 Offset: 0x1195F94 VA: 0x1199F94 Slot: 12
	public override void WriteStartAttribute(string prefix, string localName, string ns) { }

	// RVA: 0x119A00C Offset: 0x119600C VA: 0x119A00C Slot: 48
	protected override void FlushBuffer() { }

	// RVA: 0x1199B14 Offset: 0x1195B14 VA: 0x1199B14
	private void Init(XmlWriterSettings settings) { }

	// RVA: 0x1199E30 Offset: 0x1195E30 VA: 0x1199E30
	private void WriteIndent() { }
}


// Namespace: System.Xml
internal interface IDtdInfo // TypeDefIndex: 2571
{
	// Properties
	public abstract XmlQualifiedName Name { get; }
	public abstract string InternalDtdSubset { get; }
	public abstract bool HasDefaultAttributes { get; }
	public abstract bool HasNonCDataAttributes { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract XmlQualifiedName get_Name();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract string get_InternalDtdSubset();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract bool get_HasDefaultAttributes();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract bool get_HasNonCDataAttributes();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract IDtdAttributeListInfo LookupAttributeList(string prefix, string localName);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract IDtdEntityInfo LookupEntity(string name);
}


// Namespace: System.Xml
internal interface IDtdAttributeListInfo // TypeDefIndex: 2572
{
	// Properties
	public abstract bool HasNonCDataAttributes { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool get_HasNonCDataAttributes();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract IDtdAttributeInfo LookupAttribute(string prefix, string localName);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract IEnumerable<IDtdDefaultAttributeInfo> LookupDefaultAttributes();
}


// Namespace: System.Xml
internal interface IDtdAttributeInfo // TypeDefIndex: 2573
{
	// Properties
	public abstract string Prefix { get; }
	public abstract string LocalName { get; }
	public abstract int LineNumber { get; }
	public abstract int LinePosition { get; }
	public abstract bool IsNonCDataType { get; }
	public abstract bool IsDeclaredInExternal { get; }
	public abstract bool IsXmlAttribute { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string get_Prefix();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract string get_LocalName();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract int get_LineNumber();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract int get_LinePosition();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract bool get_IsNonCDataType();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract bool get_IsDeclaredInExternal();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract bool get_IsXmlAttribute();
}


// Namespace: System.Xml
internal interface IDtdDefaultAttributeInfo : IDtdAttributeInfo // TypeDefIndex: 2574
{
	// Properties
	public abstract string DefaultValueExpanded { get; }
	public abstract object DefaultValueTyped { get; }
	public abstract int ValueLineNumber { get; }
	public abstract int ValueLinePosition { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string get_DefaultValueExpanded();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract object get_DefaultValueTyped();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract int get_ValueLineNumber();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract int get_ValueLinePosition();
}


// Namespace: System.Xml
internal interface IDtdEntityInfo // TypeDefIndex: 2575
{
	// Properties
	public abstract string Name { get; }
	public abstract bool IsExternal { get; }
	public abstract bool IsDeclaredInExternal { get; }
	public abstract bool IsUnparsedEntity { get; }
	public abstract bool IsParameterEntity { get; }
	public abstract string BaseUriString { get; }
	public abstract string DeclaredUriString { get; }
	public abstract string SystemId { get; }
	public abstract string PublicId { get; }
	public abstract string Text { get; }
	public abstract int LineNumber { get; }
	public abstract int LinePosition { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string get_Name();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract bool get_IsExternal();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract bool get_IsDeclaredInExternal();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract bool get_IsUnparsedEntity();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract bool get_IsParameterEntity();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract string get_BaseUriString();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract string get_DeclaredUriString();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract string get_SystemId();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract string get_PublicId();

	// RVA: -1 Offset: -1 Slot: 9
	public abstract string get_Text();

	// RVA: -1 Offset: -1 Slot: 10
	public abstract int get_LineNumber();

	// RVA: -1 Offset: -1 Slot: 11
	public abstract int get_LinePosition();
}


// Namespace: System.Xml
internal interface IDtdParser // TypeDefIndex: 2576
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract IDtdInfo ParseInternalDtd(IDtdParserAdapter adapter, bool saveInternalSubset);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract IDtdInfo ParseFreeFloatingDtd(string baseUri, string docTypeName, string publicId, string systemId, string internalSubset, IDtdParserAdapter adapter);
}


// Namespace: System.Xml
internal interface IDtdParserAdapter // TypeDefIndex: 2577
{
	// Properties
	public abstract XmlNameTable NameTable { get; }
	public abstract IXmlNamespaceResolver NamespaceResolver { get; }
	public abstract Uri BaseUri { get; }
	public abstract char[] ParsingBuffer { get; }
	public abstract int ParsingBufferLength { get; }
	public abstract int CurrentPosition { get; set; }
	public abstract int LineNo { get; }
	public abstract int LineStartPosition { get; }
	public abstract bool IsEof { get; }
	public abstract int EntityStackLength { get; }
	public abstract bool IsEntityEolNormalized { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract XmlNameTable get_NameTable();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract IXmlNamespaceResolver get_NamespaceResolver();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract Uri get_BaseUri();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract char[] get_ParsingBuffer();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract int get_ParsingBufferLength();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract int get_CurrentPosition();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void set_CurrentPosition(int value);

	// RVA: -1 Offset: -1 Slot: 7
	public abstract int get_LineNo();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract int get_LineStartPosition();

	// RVA: -1 Offset: -1 Slot: 9
	public abstract bool get_IsEof();

	// RVA: -1 Offset: -1 Slot: 10
	public abstract int get_EntityStackLength();

	// RVA: -1 Offset: -1 Slot: 11
	public abstract bool get_IsEntityEolNormalized();

	// RVA: -1 Offset: -1 Slot: 12
	public abstract int ReadData();

	// RVA: -1 Offset: -1 Slot: 13
	public abstract void OnNewLine(int pos);

	// RVA: -1 Offset: -1 Slot: 14
	public abstract int ParseNumericCharRef(StringBuilder internalSubsetBuilder);

	// RVA: -1 Offset: -1 Slot: 15
	public abstract int ParseNamedCharRef(bool expand, StringBuilder internalSubsetBuilder);

	// RVA: -1 Offset: -1 Slot: 16
	public abstract void ParsePI(StringBuilder sb);

	// RVA: -1 Offset: -1 Slot: 17
	public abstract void ParseComment(StringBuilder sb);

	// RVA: -1 Offset: -1 Slot: 18
	public abstract bool PushEntity(IDtdEntityInfo entity, out int entityId);

	// RVA: -1 Offset: -1 Slot: 19
	public abstract bool PopEntity(out IDtdEntityInfo oldEntity, out int newEntityId);

	// RVA: -1 Offset: -1 Slot: 20
	public abstract bool PushExternalSubset(string systemId, string publicId);

	// RVA: -1 Offset: -1 Slot: 21
	public abstract void PushInternalDtd(string baseUri, string internalDtd);

	// RVA: -1 Offset: -1 Slot: 22
	public abstract void OnSystemId(string systemId, LineInfo keywordLineInfo, LineInfo systemLiteralLineInfo);

	// RVA: -1 Offset: -1 Slot: 23
	public abstract void OnPublicId(string publicId, LineInfo keywordLineInfo, LineInfo publicLiteralLineInfo);

	// RVA: -1 Offset: -1 Slot: 24
	public abstract void Throw(Exception e);
}


// Namespace: System.Xml
internal interface IDtdParserAdapterWithValidation : IDtdParserAdapter // TypeDefIndex: 2578
{
	// Properties
	public abstract bool DtdValidation { get; }
	public abstract IValidationEventHandling ValidationEventHandling { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool get_DtdValidation();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract IValidationEventHandling get_ValidationEventHandling();
}


// Namespace: System.Xml
internal interface IDtdParserAdapterV1 : IDtdParserAdapterWithValidation, IDtdParserAdapter // TypeDefIndex: 2579
{
	// Properties
	public abstract bool V1CompatibilityMode { get; }
	public abstract bool Normalization { get; }
	public abstract bool Namespaces { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool get_V1CompatibilityMode();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract bool get_Normalization();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract bool get_Namespaces();
}


// Namespace: System.Xml
internal sealed class OnRemoveWriter : MulticastDelegate // TypeDefIndex: 2580
{
	// Methods

	// RVA: 0x119A038 Offset: 0x1196038 VA: 0x119A038
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x119A138 Offset: 0x1196138 VA: 0x119A138 Slot: 12
	public virtual void Invoke(XmlRawWriter writer) { }
}


// Namespace: System.Xml
internal interface IValidationEventHandling // TypeDefIndex: 2581
{
	// Properties
	public abstract object EventHandler { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract object get_EventHandler();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void SendEvent(Exception exception, XmlSeverityType severity);
}


// Namespace: System.Xml
internal abstract class IncrementalReadDecoder // TypeDefIndex: 2582
{
	// Properties
	internal abstract bool IsFull { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	internal abstract bool get_IsFull();

	// RVA: -1 Offset: -1 Slot: 5
	internal abstract int Decode(char[] chars, int startPos, int len);

	// RVA: 0x119A14C Offset: 0x119614C VA: 0x119A14C
	protected void .ctor() { }
}


// Namespace: System.Xml
internal class IncrementalReadDummyDecoder : IncrementalReadDecoder // TypeDefIndex: 2583
{
	// Properties
	internal override bool IsFull { get; }

	// Methods

	// RVA: 0x119A154 Offset: 0x1196154 VA: 0x119A154 Slot: 4
	internal override bool get_IsFull() { }

	// RVA: 0x119A15C Offset: 0x119615C VA: 0x119A15C Slot: 5
	internal override int Decode(char[] chars, int startPos, int len) { }

	// RVA: 0x119A164 Offset: 0x1196164 VA: 0x119A164
	public void .ctor() { }
}


// Namespace: System.Xml
[Flags]
public enum NamespaceHandling // TypeDefIndex: 2584
{
	// Fields
	public int value__; // 0x0
	public const NamespaceHandling Default = 0;
	public const NamespaceHandling OmitDuplicates = 1;
}


// Namespace: System.Xml
public enum NewLineHandling // TypeDefIndex: 2585
{
	// Fields
	public int value__; // 0x0
	public const NewLineHandling Replace = 0;
	public const NewLineHandling Entitize = 1;
	public const NewLineHandling None = 2;
}


// Namespace: System.Xml
internal class QueryOutputWriter : XmlRawWriter // TypeDefIndex: 2586
{
	// Fields
	private XmlRawWriter wrapped; // 0x28
	private bool inCDataSection; // 0x30
	private Dictionary<XmlQualifiedName, int> lookupCDataElems; // 0x38
	private BitStack bitsCData; // 0x40
	private XmlQualifiedName qnameCData; // 0x48
	private bool outputDocType; // 0x50
	private bool checkWellFormedDoc; // 0x51
	private bool hasDocElem; // 0x52
	private bool inAttr; // 0x53
	private string systemId; // 0x58
	private string publicId; // 0x60
	private int depth; // 0x68

	// Properties
	internal override IXmlNamespaceResolver NamespaceResolver { set; }
	internal override bool SupportsNamespaceDeclarationInChunks { get; }

	// Methods

	// RVA: 0x119A16C Offset: 0x119616C VA: 0x119A16C
	public void .ctor(XmlRawWriter writer, XmlWriterSettings settings) { }

	// RVA: 0x119A37C Offset: 0x119637C VA: 0x119A37C Slot: 35
	internal override void set_NamespaceResolver(IXmlNamespaceResolver value) { }

	// RVA: 0x119A3A8 Offset: 0x11963A8 VA: 0x119A3A8 Slot: 36
	internal override void WriteXmlDeclaration(XmlStandalone standalone) { }

	// RVA: 0x119A3CC Offset: 0x11963CC VA: 0x119A3CC Slot: 37
	internal override void WriteXmlDeclaration(string xmldecl) { }

	// RVA: 0x119A3F0 Offset: 0x11963F0 VA: 0x119A3F0 Slot: 8
	public override void WriteDocType(string name, string pubid, string sysid, string subset) { }

	// RVA: 0x119A428 Offset: 0x1196428 VA: 0x119A428 Slot: 9
	public override void WriteStartElement(string prefix, string localName, string ns) { }

	// RVA: 0x119A5F0 Offset: 0x11965F0 VA: 0x119A5F0 Slot: 40
	internal override void WriteEndElement(string prefix, string localName, string ns) { }

	// RVA: 0x119A650 Offset: 0x1196650 VA: 0x119A650 Slot: 41
	internal override void WriteFullEndElement(string prefix, string localName, string ns) { }

	// RVA: 0x119A6B0 Offset: 0x11966B0 VA: 0x119A6B0 Slot: 38
	internal override void StartElementContent() { }

	// RVA: 0x119A6D4 Offset: 0x11966D4 VA: 0x119A6D4 Slot: 12
	public override void WriteStartAttribute(string prefix, string localName, string ns) { }

	// RVA: 0x119A700 Offset: 0x1196700 VA: 0x119A700 Slot: 13
	public override void WriteEndAttribute() { }

	// RVA: 0x119A72C Offset: 0x119672C VA: 0x119A72C Slot: 42
	internal override void WriteNamespaceDeclaration(string prefix, string ns) { }

	// RVA: 0x119A750 Offset: 0x1196750 VA: 0x119A750 Slot: 43
	internal override bool get_SupportsNamespaceDeclarationInChunks() { }

	// RVA: 0x119A774 Offset: 0x1196774 VA: 0x119A774 Slot: 44
	internal override void WriteStartNamespaceDeclaration(string prefix) { }

	// RVA: 0x119A798 Offset: 0x1196798 VA: 0x119A798 Slot: 45
	internal override void WriteEndNamespaceDeclaration() { }

	// RVA: 0x119A7BC Offset: 0x11967BC VA: 0x119A7BC Slot: 14
	public override void WriteCData(string text) { }

	// RVA: 0x119A7E0 Offset: 0x11967E0 VA: 0x119A7E0 Slot: 15
	public override void WriteComment(string text) { }

	// RVA: 0x119A80C Offset: 0x119680C VA: 0x119A80C Slot: 16
	public override void WriteProcessingInstruction(string name, string text) { }

	// RVA: 0x119A838 Offset: 0x1196838 VA: 0x119A838 Slot: 19
	public override void WriteWhitespace(string ws) { }

	// RVA: 0x119A8E4 Offset: 0x11968E4 VA: 0x119A8E4 Slot: 20
	public override void WriteString(string text) { }

	// RVA: 0x119A950 Offset: 0x1196950 VA: 0x119A950 Slot: 22
	public override void WriteChars(char[] buffer, int index, int count) { }

	// RVA: 0x119AA00 Offset: 0x1196A00 VA: 0x119AA00 Slot: 17
	public override void WriteEntityRef(string name) { }

	// RVA: 0x119AA2C Offset: 0x1196A2C VA: 0x119AA2C Slot: 18
	public override void WriteCharEntity(char ch) { }

	// RVA: 0x119AA58 Offset: 0x1196A58 VA: 0x119AA58 Slot: 21
	public override void WriteSurrogateCharEntity(char lowChar, char highChar) { }

	// RVA: 0x119AA84 Offset: 0x1196A84 VA: 0x119AA84 Slot: 23
	public override void WriteRaw(char[] buffer, int index, int count) { }

	// RVA: 0x119AB34 Offset: 0x1196B34 VA: 0x119AB34 Slot: 24
	public override void WriteRaw(string data) { }

	// RVA: 0x119ABA0 Offset: 0x1196BA0 VA: 0x119ABA0 Slot: 28
	public override void Close() { }

	// RVA: 0x119AC44 Offset: 0x1196C44 VA: 0x119AC44 Slot: 29
	public override void Flush() { }

	// RVA: 0x119A8A4 Offset: 0x11968A4 VA: 0x119A8A4
	private bool StartCDataSection() { }

	// RVA: 0x119A5E8 Offset: 0x11965E8 VA: 0x119A5E8
	private void EndCDataSection() { }
}


// Namespace: 
private enum ReadContentAsBinaryHelper.State // TypeDefIndex: 2587
{
	// Fields
	public int value__; // 0x0
	public const ReadContentAsBinaryHelper.State None = 0;
	public const ReadContentAsBinaryHelper.State InReadContent = 1;
	public const ReadContentAsBinaryHelper.State InReadElementContent = 2;
}


// Namespace: System.Xml
internal class ReadContentAsBinaryHelper // TypeDefIndex: 2588
{
	// Fields
	private XmlReader reader; // 0x10
	private ReadContentAsBinaryHelper.State state; // 0x18
	private int valueOffset; // 0x1C
	private bool isEnd; // 0x20

	// Methods

	// RVA: 0x119AC68 Offset: 0x1196C68 VA: 0x119AC68
	internal void Finish() { }

	// RVA: 0x119AE7C Offset: 0x1196E7C VA: 0x119AE7C
	internal void Reset() { }

	// RVA: 0x119ADA4 Offset: 0x1196DA4 VA: 0x119ADA4
	private bool MoveToNextContentNode(bool moveIfOnContentNode) { }
}


// Namespace: System.Xml
internal enum ElementProperties // TypeDefIndex: 2589
{
	// Fields
	public uint value__; // 0x0
	public const ElementProperties DEFAULT = 0;
	public const ElementProperties URI_PARENT = 1;
	public const ElementProperties BOOL_PARENT = 2;
	public const ElementProperties NAME_PARENT = 4;
	public const ElementProperties EMPTY = 8;
	public const ElementProperties NO_ENTITIES = 16;
	public const ElementProperties HEAD = 32;
	public const ElementProperties BLOCK_WS = 64;
	public const ElementProperties HAS_NS = 128;
}


// Namespace: System.Xml
internal enum AttributeProperties // TypeDefIndex: 2590
{
	// Fields
	public uint value__; // 0x0
	public const AttributeProperties DEFAULT = 0;
	public const AttributeProperties URI = 1;
	public const AttributeProperties BOOLEAN = 2;
	public const AttributeProperties NAME = 4;
}


// Namespace: System.Xml
internal class TernaryTreeReadOnly // TypeDefIndex: 2591
{
	// Fields
	private byte[] nodeBuffer; // 0x10

	// Methods

	// RVA: 0x119AE88 Offset: 0x1196E88 VA: 0x119AE88
	public void .ctor(byte[] nodeBuffer) { }

	// RVA: 0x1199D04 Offset: 0x1195D04 VA: 0x1199D04
	public byte FindCaseInsensitiveString(string stringToFind) { }
}


// Namespace: System.Xml
public enum ReadState // TypeDefIndex: 2592
{
	// Fields
	public int value__; // 0x0
	public const ReadState Initial = 0;
	public const ReadState Interactive = 1;
	public const ReadState Error = 2;
	public const ReadState EndOfFile = 3;
	public const ReadState Closed = 4;
}


// Namespace: 
private sealed class SecureStringHasher.HashCodeOfStringDelegate : MulticastDelegate // TypeDefIndex: 2593
{
	// Methods

	// RVA: 0x119B148 Offset: 0x1197148 VA: 0x119B148
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x119B1E8 Offset: 0x11971E8 VA: 0x119B1E8 Slot: 12
	public virtual int Invoke(string s, int sLen, long additionalEntropy) { }
}


// Namespace: System.Xml
internal class SecureStringHasher : IEqualityComparer<string> // TypeDefIndex: 2594
{
	// Fields
	private static SecureStringHasher.HashCodeOfStringDelegate hashCodeDelegate; // 0x0
	private int hashCodeRandomizer; // 0x10

	// Methods

	// RVA: 0x119AEB0 Offset: 0x1196EB0 VA: 0x119AEB0
	public void .ctor() { }

	// RVA: 0x119AED4 Offset: 0x1196ED4 VA: 0x119AED4 Slot: 4
	public bool Equals(string x, string y) { }

	// RVA: 0x119AEEC Offset: 0x1196EEC VA: 0x119AEEC Slot: 5
	public int GetHashCode(string key) { }

	// RVA: 0x119B0DC Offset: 0x11970DC VA: 0x119B0DC
	private static int GetHashCodeOfString(string key, int sLen, long additionalEntropy) { }

	// RVA: 0x119AF88 Offset: 0x1196F88 VA: 0x119AF88
	private static SecureStringHasher.HashCodeOfStringDelegate GetHashCodeDelegate() { }
}


// Namespace: System.Xml
internal class TextEncodedRawTextWriter : XmlEncodedRawTextWriter // TypeDefIndex: 2595
{
	// Properties
	internal override bool SupportsNamespaceDeclarationInChunks { get; }

	// Methods

	// RVA: 0x119B1FC Offset: 0x11971FC VA: 0x119B1FC
	public void .ctor(TextWriter writer, XmlWriterSettings settings) { }

	// RVA: 0x119B2D8 Offset: 0x11972D8 VA: 0x119B2D8
	public void .ctor(Stream stream, XmlWriterSettings settings) { }

	// RVA: 0x119B55C Offset: 0x119755C VA: 0x119B55C Slot: 36
	internal override void WriteXmlDeclaration(XmlStandalone standalone) { }

	// RVA: 0x119B560 Offset: 0x1197560 VA: 0x119B560 Slot: 37
	internal override void WriteXmlDeclaration(string xmldecl) { }

	// RVA: 0x119B564 Offset: 0x1197564 VA: 0x119B564 Slot: 8
	public override void WriteDocType(string name, string pubid, string sysid, string subset) { }

	// RVA: 0x119B568 Offset: 0x1197568 VA: 0x119B568 Slot: 9
	public override void WriteStartElement(string prefix, string localName, string ns) { }

	// RVA: 0x119B56C Offset: 0x119756C VA: 0x119B56C Slot: 40
	internal override void WriteEndElement(string prefix, string localName, string ns) { }

	// RVA: 0x119B570 Offset: 0x1197570 VA: 0x119B570 Slot: 41
	internal override void WriteFullEndElement(string prefix, string localName, string ns) { }

	// RVA: 0x119B574 Offset: 0x1197574 VA: 0x119B574 Slot: 38
	internal override void StartElementContent() { }

	// RVA: 0x119B578 Offset: 0x1197578 VA: 0x119B578 Slot: 12
	public override void WriteStartAttribute(string prefix, string localName, string ns) { }

	// RVA: 0x119B584 Offset: 0x1197584 VA: 0x119B584 Slot: 13
	public override void WriteEndAttribute() { }

	// RVA: 0x119B58C Offset: 0x119758C VA: 0x119B58C Slot: 42
	internal override void WriteNamespaceDeclaration(string prefix, string ns) { }

	// RVA: 0x119B590 Offset: 0x1197590 VA: 0x119B590 Slot: 43
	internal override bool get_SupportsNamespaceDeclarationInChunks() { }

	// RVA: 0x119B598 Offset: 0x1197598 VA: 0x119B598 Slot: 14
	public override void WriteCData(string text) { }

	// RVA: 0x119B600 Offset: 0x1197600 VA: 0x119B600 Slot: 15
	public override void WriteComment(string text) { }

	// RVA: 0x119B604 Offset: 0x1197604 VA: 0x119B604 Slot: 16
	public override void WriteProcessingInstruction(string name, string text) { }

	// RVA: 0x119B608 Offset: 0x1197608 VA: 0x119B608 Slot: 17
	public override void WriteEntityRef(string name) { }

	// RVA: 0x119B60C Offset: 0x119760C VA: 0x119B60C Slot: 18
	public override void WriteCharEntity(char ch) { }

	// RVA: 0x119B610 Offset: 0x1197610 VA: 0x119B610 Slot: 21
	public override void WriteSurrogateCharEntity(char lowChar, char highChar) { }

	// RVA: 0x119B614 Offset: 0x1197614 VA: 0x119B614 Slot: 19
	public override void WriteWhitespace(string ws) { }

	// RVA: 0x119B624 Offset: 0x1197624 VA: 0x119B624 Slot: 20
	public override void WriteString(string textBlock) { }

	// RVA: 0x119B634 Offset: 0x1197634 VA: 0x119B634 Slot: 22
	public override void WriteChars(char[] buffer, int index, int count) { }

	// RVA: 0x119B6C0 Offset: 0x11976C0 VA: 0x119B6C0 Slot: 23
	public override void WriteRaw(char[] buffer, int index, int count) { }

	// RVA: 0x119B6D0 Offset: 0x11976D0 VA: 0x119B6D0 Slot: 24
	public override void WriteRaw(string data) { }
}


// Namespace: System.Xml
internal class TextUtf8RawTextWriter : XmlUtf8RawTextWriter // TypeDefIndex: 2596
{
	// Properties
	internal override bool SupportsNamespaceDeclarationInChunks { get; }

	// Methods

	// RVA: 0x119B6E0 Offset: 0x11976E0 VA: 0x119B6E0
	public void .ctor(Stream stream, XmlWriterSettings settings) { }

	// RVA: 0x119B6E8 Offset: 0x11976E8 VA: 0x119B6E8 Slot: 36
	internal override void WriteXmlDeclaration(XmlStandalone standalone) { }

	// RVA: 0x119B6EC Offset: 0x11976EC VA: 0x119B6EC Slot: 37
	internal override void WriteXmlDeclaration(string xmldecl) { }

	// RVA: 0x119B6F0 Offset: 0x11976F0 VA: 0x119B6F0 Slot: 8
	public override void WriteDocType(string name, string pubid, string sysid, string subset) { }

	// RVA: 0x119B6F4 Offset: 0x11976F4 VA: 0x119B6F4 Slot: 9
	public override void WriteStartElement(string prefix, string localName, string ns) { }

	// RVA: 0x119B6F8 Offset: 0x11976F8 VA: 0x119B6F8 Slot: 40
	internal override void WriteEndElement(string prefix, string localName, string ns) { }

	// RVA: 0x119B6FC Offset: 0x11976FC VA: 0x119B6FC Slot: 41
	internal override void WriteFullEndElement(string prefix, string localName, string ns) { }

	// RVA: 0x119B700 Offset: 0x1197700 VA: 0x119B700 Slot: 38
	internal override void StartElementContent() { }

	// RVA: 0x119B704 Offset: 0x1197704 VA: 0x119B704 Slot: 12
	public override void WriteStartAttribute(string prefix, string localName, string ns) { }

	// RVA: 0x119B710 Offset: 0x1197710 VA: 0x119B710 Slot: 13
	public override void WriteEndAttribute() { }

	// RVA: 0x119B718 Offset: 0x1197718 VA: 0x119B718 Slot: 42
	internal override void WriteNamespaceDeclaration(string prefix, string ns) { }

	// RVA: 0x119B71C Offset: 0x119771C VA: 0x119B71C Slot: 43
	internal override bool get_SupportsNamespaceDeclarationInChunks() { }

	// RVA: 0x119B724 Offset: 0x1197724 VA: 0x119B724 Slot: 14
	public override void WriteCData(string text) { }

	// RVA: 0x119B72C Offset: 0x119772C VA: 0x119B72C Slot: 15
	public override void WriteComment(string text) { }

	// RVA: 0x119B730 Offset: 0x1197730 VA: 0x119B730 Slot: 16
	public override void WriteProcessingInstruction(string name, string text) { }

	// RVA: 0x119B734 Offset: 0x1197734 VA: 0x119B734 Slot: 17
	public override void WriteEntityRef(string name) { }

	// RVA: 0x119B738 Offset: 0x1197738 VA: 0x119B738 Slot: 18
	public override void WriteCharEntity(char ch) { }

	// RVA: 0x119B73C Offset: 0x119773C VA: 0x119B73C Slot: 21
	public override void WriteSurrogateCharEntity(char lowChar, char highChar) { }

	// RVA: 0x119B740 Offset: 0x1197740 VA: 0x119B740 Slot: 19
	public override void WriteWhitespace(string ws) { }

	// RVA: 0x119B754 Offset: 0x1197754 VA: 0x119B754 Slot: 20
	public override void WriteString(string textBlock) { }

	// RVA: 0x119B768 Offset: 0x1197768 VA: 0x119B768 Slot: 22
	public override void WriteChars(char[] buffer, int index, int count) { }

	// RVA: 0x119B77C Offset: 0x119777C VA: 0x119B77C Slot: 23
	public override void WriteRaw(char[] buffer, int index, int count) { }

	// RVA: 0x119B790 Offset: 0x1197790 VA: 0x119B790 Slot: 24
	public override void WriteRaw(string data) { }
}


// Namespace: System.Xml
internal class ValidatingReaderNodeData // TypeDefIndex: 2597
{
	// Fields
	private string localName; // 0x10
	private string namespaceUri; // 0x18
	private string prefix; // 0x20
	private string nameWPrefix; // 0x28
	private string rawValue; // 0x30
	private string originalStringValue; // 0x38
	private int depth; // 0x40
	private AttributePSVIInfo attributePSVIInfo; // 0x48
	private XmlNodeType nodeType; // 0x50
	private int lineNo; // 0x54
	private int linePos; // 0x58

	// Methods

	// RVA: 0x119B7A4 Offset: 0x11977A4 VA: 0x119B7A4
	public void .ctor() { }

	// RVA: 0x119B844 Offset: 0x1197844 VA: 0x119B844
	public void .ctor(XmlNodeType nodeType) { }

	// RVA: 0x119B870 Offset: 0x1197870 VA: 0x119B870
	public string GetAtomizedNameWPrefix(XmlNameTable nameTable) { }

	// RVA: 0x119B7C4 Offset: 0x11977C4 VA: 0x119B7C4
	internal void Clear(XmlNodeType nodeType) { }

	// RVA: 0x119B904 Offset: 0x1197904 VA: 0x119B904
	internal void SetLineInfo(int lineNo, int linePos) { }

	// RVA: 0x119B90C Offset: 0x119790C VA: 0x119B90C
	internal void SetLineInfo(IXmlLineInfo lineInfo) { }

	// RVA: 0x119BA14 Offset: 0x1197A14 VA: 0x119BA14
	internal void SetItemData(string localName, string prefix, string ns, int depth) { }

	// RVA: 0x119BA90 Offset: 0x1197A90 VA: 0x119BA90
	internal void SetItemData(string value) { }

	// RVA: 0x119BA98 Offset: 0x1197A98 VA: 0x119BA98
	internal void SetItemData(string value, string originalStringValue) { }
}


// Namespace: System.Xml
public enum ValidationType // TypeDefIndex: 2598
{
	// Fields
	public int value__; // 0x0
	public const ValidationType None = 0;
	[Obsolete("Validation type should be specified as DTD or Schema.")]
	public const ValidationType Auto = 1;
	public const ValidationType DTD = 2;
	[Obsolete("XDR Validation through XmlValidatingReader is obsoleted")]
	public const ValidationType XDR = 3;
	public const ValidationType Schema = 4;
}


// Namespace: System.Xml
public enum WhitespaceHandling // TypeDefIndex: 2599
{
	// Fields
	public int value__; // 0x0
	public const WhitespaceHandling All = 0;
	public const WhitespaceHandling Significant = 1;
	public const WhitespaceHandling None = 2;
}


// Namespace: System.Xml
[DefaultMember("Item")]
internal class XmlAsyncCheckReader : XmlReader // TypeDefIndex: 2600
{
	// Fields
	private readonly XmlReader coreReader; // 0x10
	private Task lastTask; // 0x18

	// Properties
	public override XmlReaderSettings Settings { get; }
	public override XmlNodeType NodeType { get; }
	public override string Name { get; }
	public override string LocalName { get; }
	public override string NamespaceURI { get; }
	public override string Prefix { get; }
	public override string Value { get; }
	public override int Depth { get; }
	public override string BaseURI { get; }
	public override bool IsEmptyElement { get; }
	public override bool IsDefault { get; }
	public override char QuoteChar { get; }
	public override XmlSpace XmlSpace { get; }
	public override string XmlLang { get; }
	public override IXmlSchemaInfo SchemaInfo { get; }
	public override Type ValueType { get; }
	public override int AttributeCount { get; }
	public override bool EOF { get; }
	public override ReadState ReadState { get; }
	public override XmlNameTable NameTable { get; }
	public override bool CanResolveEntity { get; }
	public override bool CanReadValueChunk { get; }
	public override bool HasAttributes { get; }
	internal override XmlNamespaceManager NamespaceManager { get; }
	internal override IDtdInfo DtdInfo { get; }

	// Methods

	// RVA: 0x119BAA0 Offset: 0x1197AA0 VA: 0x119BAA0
	public static XmlAsyncCheckReader CreateAsyncCheckWrapper(XmlReader reader) { }

	// RVA: 0x119BEB4 Offset: 0x1197EB4 VA: 0x119BEB4
	public void .ctor(XmlReader reader) { }

	// RVA: 0x119BF5C Offset: 0x1197F5C VA: 0x119BF5C
	private void CheckAsync() { }

	// RVA: 0x119BFD8 Offset: 0x1197FD8 VA: 0x119BFD8 Slot: 5
	public override XmlReaderSettings get_Settings() { }

	// RVA: 0x119C164 Offset: 0x1198164 VA: 0x119C164 Slot: 6
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x119C18C Offset: 0x119818C VA: 0x119C18C Slot: 7
	public override string get_Name() { }

	// RVA: 0x119C1B4 Offset: 0x11981B4 VA: 0x119C1B4 Slot: 8
	public override string get_LocalName() { }

	// RVA: 0x119C1DC Offset: 0x11981DC VA: 0x119C1DC Slot: 9
	public override string get_NamespaceURI() { }

	// RVA: 0x119C204 Offset: 0x1198204 VA: 0x119C204 Slot: 10
	public override string get_Prefix() { }

	// RVA: 0x119C22C Offset: 0x119822C VA: 0x119C22C Slot: 11
	public override string get_Value() { }

	// RVA: 0x119C254 Offset: 0x1198254 VA: 0x119C254 Slot: 12
	public override int get_Depth() { }

	// RVA: 0x119C27C Offset: 0x119827C VA: 0x119C27C Slot: 13
	public override string get_BaseURI() { }

	// RVA: 0x119C2A8 Offset: 0x11982A8 VA: 0x119C2A8 Slot: 14
	public override bool get_IsEmptyElement() { }

	// RVA: 0x119C2D4 Offset: 0x11982D4 VA: 0x119C2D4 Slot: 15
	public override bool get_IsDefault() { }

	// RVA: 0x119C300 Offset: 0x1198300 VA: 0x119C300 Slot: 16
	public override char get_QuoteChar() { }

	// RVA: 0x119C32C Offset: 0x119832C VA: 0x119C32C Slot: 17
	public override XmlSpace get_XmlSpace() { }

	// RVA: 0x119C358 Offset: 0x1198358 VA: 0x119C358 Slot: 18
	public override string get_XmlLang() { }

	// RVA: 0x119C384 Offset: 0x1198384 VA: 0x119C384 Slot: 19
	public override IXmlSchemaInfo get_SchemaInfo() { }

	// RVA: 0x119C3B0 Offset: 0x11983B0 VA: 0x119C3B0 Slot: 20
	public override Type get_ValueType() { }

	// RVA: 0x119C3DC Offset: 0x11983DC VA: 0x119C3DC Slot: 21
	public override int get_AttributeCount() { }

	// RVA: 0x119C408 Offset: 0x1198408 VA: 0x119C408 Slot: 22
	public override string GetAttribute(string name) { }

	// RVA: 0x119C444 Offset: 0x1198444 VA: 0x119C444 Slot: 23
	public override string GetAttribute(string name, string namespaceURI) { }

	// RVA: 0x119C488 Offset: 0x1198488 VA: 0x119C488 Slot: 24
	public override string GetAttribute(int i) { }

	// RVA: 0x119C4C4 Offset: 0x11984C4 VA: 0x119C4C4 Slot: 25
	public override bool MoveToAttribute(string name) { }

	// RVA: 0x119C500 Offset: 0x1198500 VA: 0x119C500 Slot: 26
	public override void MoveToAttribute(int i) { }

	// RVA: 0x119C53C Offset: 0x119853C VA: 0x119C53C Slot: 27
	public override bool MoveToFirstAttribute() { }

	// RVA: 0x119C568 Offset: 0x1198568 VA: 0x119C568 Slot: 28
	public override bool MoveToNextAttribute() { }

	// RVA: 0x119C594 Offset: 0x1198594 VA: 0x119C594 Slot: 29
	public override bool MoveToElement() { }

	// RVA: 0x119C5C0 Offset: 0x11985C0 VA: 0x119C5C0 Slot: 30
	public override bool ReadAttributeValue() { }

	// RVA: 0x119C5EC Offset: 0x11985EC VA: 0x119C5EC Slot: 31
	public override bool Read() { }

	// RVA: 0x119C618 Offset: 0x1198618 VA: 0x119C618 Slot: 32
	public override bool get_EOF() { }

	// RVA: 0x119C644 Offset: 0x1198644 VA: 0x119C644 Slot: 33
	public override void Close() { }

	// RVA: 0x119C670 Offset: 0x1198670 VA: 0x119C670 Slot: 34
	public override ReadState get_ReadState() { }

	// RVA: 0x119C69C Offset: 0x119869C VA: 0x119C69C Slot: 35
	public override void Skip() { }

	// RVA: 0x119C6C8 Offset: 0x11986C8 VA: 0x119C6C8 Slot: 36
	public override XmlNameTable get_NameTable() { }

	// RVA: 0x119C6F4 Offset: 0x11986F4 VA: 0x119C6F4 Slot: 37
	public override string LookupNamespace(string prefix) { }

	// RVA: 0x119C730 Offset: 0x1198730 VA: 0x119C730 Slot: 38
	public override bool get_CanResolveEntity() { }

	// RVA: 0x119C75C Offset: 0x119875C VA: 0x119C75C Slot: 39
	public override void ResolveEntity() { }

	// RVA: 0x119C788 Offset: 0x1198788 VA: 0x119C788 Slot: 40
	public override bool get_CanReadValueChunk() { }

	// RVA: 0x119C7B4 Offset: 0x11987B4 VA: 0x119C7B4 Slot: 41
	public override int ReadValueChunk(char[] buffer, int index, int count) { }

	// RVA: 0x119C808 Offset: 0x1198808 VA: 0x119C808 Slot: 42
	public override string ReadString() { }

	// RVA: 0x119C834 Offset: 0x1198834 VA: 0x119C834 Slot: 43
	public override XmlNodeType MoveToContent() { }

	// RVA: 0x119C860 Offset: 0x1198860 VA: 0x119C860 Slot: 44
	public override void ReadStartElement() { }

	// RVA: 0x119C88C Offset: 0x119888C VA: 0x119C88C Slot: 45
	public override string ReadElementString() { }

	// RVA: 0x119C8B8 Offset: 0x11988B8 VA: 0x119C8B8 Slot: 46
	public override void ReadEndElement() { }

	// RVA: 0x119C8E4 Offset: 0x11988E4 VA: 0x119C8E4 Slot: 47
	public override bool IsStartElement(string localname, string ns) { }

	// RVA: 0x119C928 Offset: 0x1198928 VA: 0x119C928 Slot: 48
	public override string ReadInnerXml() { }

	// RVA: 0x119C954 Offset: 0x1198954 VA: 0x119C954 Slot: 49
	public override bool get_HasAttributes() { }

	// RVA: 0x119C980 Offset: 0x1198980 VA: 0x119C980 Slot: 50
	protected override void Dispose(bool disposing) { }

	// RVA: 0x119C9C4 Offset: 0x11989C4 VA: 0x119C9C4 Slot: 51
	internal override XmlNamespaceManager get_NamespaceManager() { }

	// RVA: 0x119C9F0 Offset: 0x11989F0 VA: 0x119C9F0 Slot: 52
	internal override IDtdInfo get_DtdInfo() { }
}


// Namespace: System.Xml
internal class XmlAsyncCheckReaderWithNS : XmlAsyncCheckReader, IXmlNamespaceResolver // TypeDefIndex: 2601
{
	// Fields
	private readonly IXmlNamespaceResolver readerAsIXmlNamespaceResolver; // 0x20

	// Methods

	// RVA: 0x119BE10 Offset: 0x1197E10 VA: 0x119BE10
	public void .ctor(XmlReader reader) { }

	// RVA: 0x119CA1C Offset: 0x1198A1C VA: 0x119CA1C Slot: 53
	private IDictionary<string, string> System.Xml.IXmlNamespaceResolver.GetNamespacesInScope(XmlNamespaceScope scope) { }

	// RVA: 0x119CAC4 Offset: 0x1198AC4 VA: 0x119CAC4 Slot: 54
	private string System.Xml.IXmlNamespaceResolver.LookupNamespace(string prefix) { }

	// RVA: 0x119CB70 Offset: 0x1198B70 VA: 0x119CB70 Slot: 55
	private string System.Xml.IXmlNamespaceResolver.LookupPrefix(string namespaceName) { }
}


// Namespace: System.Xml
internal class XmlAsyncCheckReaderWithLineInfo : XmlAsyncCheckReader, IXmlLineInfo // TypeDefIndex: 2602
{
	// Fields
	private readonly IXmlLineInfo readerAsIXmlLineInfo; // 0x20

	// Properties
	public virtual int LineNumber { get; }
	public virtual int LinePosition { get; }

	// Methods

	// RVA: 0x119BD6C Offset: 0x1197D6C VA: 0x119BD6C
	public void .ctor(XmlReader reader) { }

	// RVA: 0x119CC1C Offset: 0x1198C1C VA: 0x119CC1C Slot: 56
	public virtual bool HasLineInfo() { }

	// RVA: 0x119CCBC Offset: 0x1198CBC VA: 0x119CCBC Slot: 57
	public virtual int get_LineNumber() { }

	// RVA: 0x119CD60 Offset: 0x1198D60 VA: 0x119CD60 Slot: 58
	public virtual int get_LinePosition() { }
}


// Namespace: System.Xml
internal class XmlAsyncCheckReaderWithLineInfoNS : XmlAsyncCheckReaderWithLineInfo, IXmlNamespaceResolver // TypeDefIndex: 2603
{
	// Fields
	private readonly IXmlNamespaceResolver readerAsIXmlNamespaceResolver; // 0x28

	// Methods

	// RVA: 0x119BCC8 Offset: 0x1197CC8 VA: 0x119BCC8
	public void .ctor(XmlReader reader) { }

	// RVA: 0x119CE04 Offset: 0x1198E04 VA: 0x119CE04 Slot: 59
	private IDictionary<string, string> System.Xml.IXmlNamespaceResolver.GetNamespacesInScope(XmlNamespaceScope scope) { }

	// RVA: 0x119CEAC Offset: 0x1198EAC VA: 0x119CEAC Slot: 60
	private string System.Xml.IXmlNamespaceResolver.LookupNamespace(string prefix) { }

	// RVA: 0x119CF58 Offset: 0x1198F58 VA: 0x119CF58 Slot: 61
	private string System.Xml.IXmlNamespaceResolver.LookupPrefix(string namespaceName) { }
}


// Namespace: System.Xml
internal class XmlAsyncCheckReaderWithLineInfoNSSchema : XmlAsyncCheckReaderWithLineInfoNS, IXmlSchemaInfo // TypeDefIndex: 2604
{
	// Fields
	private readonly IXmlSchemaInfo readerAsIXmlSchemaInfo; // 0x30

	// Properties
	private XmlSchemaValidity System.Xml.Schema.IXmlSchemaInfo.Validity { get; }
	private bool System.Xml.Schema.IXmlSchemaInfo.IsDefault { get; }
	private bool System.Xml.Schema.IXmlSchemaInfo.IsNil { get; }
	private XmlSchemaSimpleType System.Xml.Schema.IXmlSchemaInfo.MemberType { get; }
	private XmlSchemaType System.Xml.Schema.IXmlSchemaInfo.SchemaType { get; }
	private XmlSchemaElement System.Xml.Schema.IXmlSchemaInfo.SchemaElement { get; }
	private XmlSchemaAttribute System.Xml.Schema.IXmlSchemaInfo.SchemaAttribute { get; }

	// Methods

	// RVA: 0x119BC24 Offset: 0x1197C24 VA: 0x119BC24
	public void .ctor(XmlReader reader) { }

	// RVA: 0x119D004 Offset: 0x1199004 VA: 0x119D004 Slot: 62
	private XmlSchemaValidity System.Xml.Schema.IXmlSchemaInfo.get_Validity() { }

	// RVA: 0x119D0A4 Offset: 0x11990A4 VA: 0x119D0A4 Slot: 63
	private bool System.Xml.Schema.IXmlSchemaInfo.get_IsDefault() { }

	// RVA: 0x119D148 Offset: 0x1199148 VA: 0x119D148 Slot: 64
	private bool System.Xml.Schema.IXmlSchemaInfo.get_IsNil() { }

	// RVA: 0x119D1EC Offset: 0x11991EC VA: 0x119D1EC Slot: 65
	private XmlSchemaSimpleType System.Xml.Schema.IXmlSchemaInfo.get_MemberType() { }

	// RVA: 0x119D290 Offset: 0x1199290 VA: 0x119D290 Slot: 66
	private XmlSchemaType System.Xml.Schema.IXmlSchemaInfo.get_SchemaType() { }

	// RVA: 0x119D334 Offset: 0x1199334 VA: 0x119D334 Slot: 67
	private XmlSchemaElement System.Xml.Schema.IXmlSchemaInfo.get_SchemaElement() { }

	// RVA: 0x119D3D8 Offset: 0x11993D8 VA: 0x119D3D8 Slot: 68
	private XmlSchemaAttribute System.Xml.Schema.IXmlSchemaInfo.get_SchemaAttribute() { }
}


// Namespace: System.Xml
internal class XmlAsyncCheckWriter : XmlWriter // TypeDefIndex: 2605
{
	// Fields
	private readonly XmlWriter coreWriter; // 0x18
	private Task lastTask; // 0x20

	// Properties
	public override WriteState WriteState { get; }

	// Methods

	// RVA: 0x119D47C Offset: 0x119947C VA: 0x119D47C
	public void .ctor(XmlWriter writer) { }

	// RVA: 0x119D4F8 Offset: 0x11994F8 VA: 0x119D4F8
	private void CheckAsync() { }

	// RVA: 0x119D574 Offset: 0x1199574 VA: 0x119D574 Slot: 5
	public override void WriteStartDocument() { }

	// RVA: 0x119D59C Offset: 0x119959C VA: 0x119D59C Slot: 6
	public override void WriteStartDocument(bool standalone) { }

	// RVA: 0x119D5D4 Offset: 0x11995D4 VA: 0x119D5D4 Slot: 7
	public override void WriteEndDocument() { }

	// RVA: 0x119D5FC Offset: 0x11995FC VA: 0x119D5FC Slot: 8
	public override void WriteDocType(string name, string pubid, string sysid, string subset) { }

	// RVA: 0x119D654 Offset: 0x1199654 VA: 0x119D654 Slot: 9
	public override void WriteStartElement(string prefix, string localName, string ns) { }

	// RVA: 0x119D6A4 Offset: 0x11996A4 VA: 0x119D6A4 Slot: 10
	public override void WriteEndElement() { }

	// RVA: 0x119D6CC Offset: 0x11996CC VA: 0x119D6CC Slot: 11
	public override void WriteFullEndElement() { }

	// RVA: 0x119D6F4 Offset: 0x11996F4 VA: 0x119D6F4 Slot: 12
	public override void WriteStartAttribute(string prefix, string localName, string ns) { }

	// RVA: 0x119D744 Offset: 0x1199744 VA: 0x119D744 Slot: 13
	public override void WriteEndAttribute() { }

	// RVA: 0x119D770 Offset: 0x1199770 VA: 0x119D770 Slot: 14
	public override void WriteCData(string text) { }

	// RVA: 0x119D7AC Offset: 0x11997AC VA: 0x119D7AC Slot: 15
	public override void WriteComment(string text) { }

	// RVA: 0x119D7E8 Offset: 0x11997E8 VA: 0x119D7E8 Slot: 16
	public override void WriteProcessingInstruction(string name, string text) { }

	// RVA: 0x119D82C Offset: 0x119982C VA: 0x119D82C Slot: 17
	public override void WriteEntityRef(string name) { }

	// RVA: 0x119D868 Offset: 0x1199868 VA: 0x119D868 Slot: 18
	public override void WriteCharEntity(char ch) { }

	// RVA: 0x119D8A4 Offset: 0x11998A4 VA: 0x119D8A4 Slot: 19
	public override void WriteWhitespace(string ws) { }

	// RVA: 0x119D8E0 Offset: 0x11998E0 VA: 0x119D8E0 Slot: 20
	public override void WriteString(string text) { }

	// RVA: 0x119D91C Offset: 0x119991C VA: 0x119D91C Slot: 21
	public override void WriteSurrogateCharEntity(char lowChar, char highChar) { }

	// RVA: 0x119D960 Offset: 0x1199960 VA: 0x119D960 Slot: 22
	public override void WriteChars(char[] buffer, int index, int count) { }

	// RVA: 0x119D9B4 Offset: 0x11999B4 VA: 0x119D9B4 Slot: 23
	public override void WriteRaw(char[] buffer, int index, int count) { }

	// RVA: 0x119DA08 Offset: 0x1199A08 VA: 0x119DA08 Slot: 24
	public override void WriteRaw(string data) { }

	// RVA: 0x119DA44 Offset: 0x1199A44 VA: 0x119DA44 Slot: 25
	public override void WriteBase64(byte[] buffer, int index, int count) { }

	// RVA: 0x119DA98 Offset: 0x1199A98 VA: 0x119DA98 Slot: 26
	public override void WriteBinHex(byte[] buffer, int index, int count) { }

	// RVA: 0x119DAEC Offset: 0x1199AEC VA: 0x119DAEC Slot: 27
	public override WriteState get_WriteState() { }

	// RVA: 0x119DB18 Offset: 0x1199B18 VA: 0x119DB18 Slot: 28
	public override void Close() { }

	// RVA: 0x119DB44 Offset: 0x1199B44 VA: 0x119DB44 Slot: 29
	public override void Flush() { }

	// RVA: 0x119DB70 Offset: 0x1199B70 VA: 0x119DB70 Slot: 30
	public override string LookupPrefix(string ns) { }

	// RVA: 0x119DBAC Offset: 0x1199BAC VA: 0x119DBAC Slot: 31
	public override void WriteValue(string value) { }

	// RVA: 0x119DBE8 Offset: 0x1199BE8 VA: 0x119DBE8 Slot: 32
	public override void WriteAttributes(XmlReader reader, bool defattr) { }

	// RVA: 0x119DC2C Offset: 0x1199C2C VA: 0x119DC2C Slot: 33
	public override void WriteNode(XmlReader reader, bool defattr) { }

	// RVA: 0x119DC70 Offset: 0x1199C70 VA: 0x119DC70 Slot: 34
	protected override void Dispose(bool disposing) { }
}


// Namespace: System.Xml
internal class XmlAutoDetectWriter : XmlRawWriter // TypeDefIndex: 2606
{
	// Fields
	private XmlRawWriter wrapped; // 0x28
	private OnRemoveWriter onRemove; // 0x30
	private XmlWriterSettings writerSettings; // 0x38
	private XmlEventCache eventCache; // 0x40
	private TextWriter textWriter; // 0x48
	private Stream strm; // 0x50

	// Properties
	internal override IXmlNamespaceResolver NamespaceResolver { set; }
	internal override bool SupportsNamespaceDeclarationInChunks { get; }

	// Methods

	// RVA: 0x119DC94 Offset: 0x1199C94 VA: 0x119DC94
	private void .ctor(XmlWriterSettings writerSettings) { }

	// RVA: 0x119DD80 Offset: 0x1199D80 VA: 0x119DD80
	public void .ctor(TextWriter textWriter, XmlWriterSettings writerSettings) { }

	// RVA: 0x119DDA8 Offset: 0x1199DA8 VA: 0x119DDA8
	public void .ctor(Stream strm, XmlWriterSettings writerSettings) { }

	// RVA: 0x119DDD0 Offset: 0x1199DD0 VA: 0x119DDD0 Slot: 8
	public override void WriteDocType(string name, string pubid, string sysid, string subset) { }

	// RVA: 0x119DE48 Offset: 0x1199E48 VA: 0x119DE48 Slot: 9
	public override void WriteStartElement(string prefix, string localName, string ns) { }

	// RVA: 0x119E11C Offset: 0x119A11C VA: 0x119E11C Slot: 12
	public override void WriteStartAttribute(string prefix, string localName, string ns) { }

	// RVA: 0x119E17C Offset: 0x119A17C VA: 0x119E17C Slot: 13
	public override void WriteEndAttribute() { }

	// RVA: 0x119E1A0 Offset: 0x119A1A0 VA: 0x119E1A0 Slot: 14
	public override void WriteCData(string text) { }

	// RVA: 0x119E244 Offset: 0x119A244 VA: 0x119E244 Slot: 15
	public override void WriteComment(string text) { }

	// RVA: 0x119E274 Offset: 0x119A274 VA: 0x119E274 Slot: 16
	public override void WriteProcessingInstruction(string name, string text) { }

	// RVA: 0x119E2A4 Offset: 0x119A2A4 VA: 0x119E2A4 Slot: 19
	public override void WriteWhitespace(string ws) { }

	// RVA: 0x119E2D4 Offset: 0x119A2D4 VA: 0x119E2D4 Slot: 20
	public override void WriteString(string text) { }

	// RVA: 0x119E31C Offset: 0x119A31C VA: 0x119E31C Slot: 22
	public override void WriteChars(char[] buffer, int index, int count) { }

	// RVA: 0x119E34C Offset: 0x119A34C VA: 0x119E34C Slot: 23
	public override void WriteRaw(char[] buffer, int index, int count) { }

	// RVA: 0x119E37C Offset: 0x119A37C VA: 0x119E37C Slot: 24
	public override void WriteRaw(string data) { }

	// RVA: 0x119E3C4 Offset: 0x119A3C4 VA: 0x119E3C4 Slot: 17
	public override void WriteEntityRef(string name) { }

	// RVA: 0x119E410 Offset: 0x119A410 VA: 0x119E410 Slot: 18
	public override void WriteCharEntity(char ch) { }

	// RVA: 0x119E45C Offset: 0x119A45C VA: 0x119E45C Slot: 21
	public override void WriteSurrogateCharEntity(char lowChar, char highChar) { }

	// RVA: 0x119E4B0 Offset: 0x119A4B0 VA: 0x119E4B0 Slot: 25
	public override void WriteBase64(byte[] buffer, int index, int count) { }

	// RVA: 0x119E514 Offset: 0x119A514 VA: 0x119E514 Slot: 26
	public override void WriteBinHex(byte[] buffer, int index, int count) { }

	// RVA: 0x119E578 Offset: 0x119A578 VA: 0x119E578 Slot: 28
	public override void Close() { }

	// RVA: 0x119E5B4 Offset: 0x119A5B4 VA: 0x119E5B4 Slot: 29
	public override void Flush() { }

	// RVA: 0x119E5F0 Offset: 0x119A5F0 VA: 0x119E5F0 Slot: 31
	public override void WriteValue(string value) { }

	// RVA: 0x119E63C Offset: 0x119A63C VA: 0x119E63C Slot: 35
	internal override void set_NamespaceResolver(IXmlNamespaceResolver value) { }

	// RVA: 0x119E670 Offset: 0x119A670 VA: 0x119E670 Slot: 36
	internal override void WriteXmlDeclaration(XmlStandalone standalone) { }

	// RVA: 0x119E6BC Offset: 0x119A6BC VA: 0x119E6BC Slot: 37
	internal override void WriteXmlDeclaration(string xmldecl) { }

	// RVA: 0x119E708 Offset: 0x119A708 VA: 0x119E708 Slot: 38
	internal override void StartElementContent() { }

	// RVA: 0x119E72C Offset: 0x119A72C VA: 0x119E72C Slot: 40
	internal override void WriteEndElement(string prefix, string localName, string ns) { }

	// RVA: 0x119E750 Offset: 0x119A750 VA: 0x119E750 Slot: 41
	internal override void WriteFullEndElement(string prefix, string localName, string ns) { }

	// RVA: 0x119E774 Offset: 0x119A774 VA: 0x119E774 Slot: 42
	internal override void WriteNamespaceDeclaration(string prefix, string ns) { }

	// RVA: 0x119E7C8 Offset: 0x119A7C8 VA: 0x119E7C8 Slot: 43
	internal override bool get_SupportsNamespaceDeclarationInChunks() { }

	// RVA: 0x119E7EC Offset: 0x119A7EC VA: 0x119E7EC Slot: 44
	internal override void WriteStartNamespaceDeclaration(string prefix) { }

	// RVA: 0x119E838 Offset: 0x119A838 VA: 0x119E838 Slot: 45
	internal override void WriteEndNamespaceDeclaration() { }

	// RVA: 0x119DEC8 Offset: 0x1199EC8 VA: 0x119DEC8
	private static bool IsHtmlTag(string tagName) { }

	// RVA: 0x119DE38 Offset: 0x1199E38 VA: 0x119DE38
	private void EnsureWrappedWriter(XmlOutputMethod outMethod) { }

	// RVA: 0x119E1E8 Offset: 0x119A1E8 VA: 0x119E1E8
	private bool TextBlockCreatesWriter(string textBlock) { }

	// RVA: 0x119DFDC Offset: 0x1199FDC VA: 0x119DFDC
	private void CreateWrappedWriter(XmlOutputMethod outMethod) { }
}


// Namespace: System.Xml
internal class XmlEncodedRawTextWriter : XmlRawWriter // TypeDefIndex: 2607
{
	// Fields
	private readonly bool useAsync; // 0x28
	protected byte[] bufBytes; // 0x30
	protected Stream stream; // 0x38
	protected Encoding encoding; // 0x40
	protected XmlCharType xmlCharType; // 0x48
	protected int bufPos; // 0x50
	protected int textPos; // 0x54
	protected int contentPos; // 0x58
	protected int cdataPos; // 0x5C
	protected int attrEndPos; // 0x60
	protected int bufLen; // 0x64
	protected bool writeToNull; // 0x68
	protected bool hadDoubleBracket; // 0x69
	protected bool inAttributeValue; // 0x6A
	protected int bufBytesUsed; // 0x6C
	protected char[] bufChars; // 0x70
	protected Encoder encoder; // 0x78
	protected TextWriter writer; // 0x80
	protected bool trackTextContent; // 0x88
	protected bool inTextContent; // 0x89
	private int lastMarkPos; // 0x8C
	private int[] textContentMarks; // 0x90
	private CharEntityEncoderFallback charEntityFallback; // 0x98
	protected NewLineHandling newLineHandling; // 0xA0
	protected bool closeOutput; // 0xA4
	protected bool omitXmlDeclaration; // 0xA5
	protected string newLineChars; // 0xA8
	protected bool checkCharacters; // 0xB0
	protected XmlStandalone standalone; // 0xB4
	protected XmlOutputMethod outputMethod; // 0xB8
	protected bool autoXmlDeclaration; // 0xBC
	protected bool mergeCDataSections; // 0xBD

	// Properties
	internal override bool SupportsNamespaceDeclarationInChunks { get; }

	// Methods

	// RVA: 0x119EF60 Offset: 0x119AF60 VA: 0x119EF60
	protected void .ctor(XmlWriterSettings settings) { }

	// RVA: 0x119B200 Offset: 0x1197200 VA: 0x119B200
	public void .ctor(TextWriter writer, XmlWriterSettings settings) { }

	// RVA: 0x119B2DC Offset: 0x11972DC VA: 0x119B2DC
	public void .ctor(Stream stream, XmlWriterSettings settings) { }

	// RVA: 0x119F37C Offset: 0x119B37C VA: 0x119F37C Slot: 36
	internal override void WriteXmlDeclaration(XmlStandalone standalone) { }

	// RVA: 0x119F59C Offset: 0x119B59C VA: 0x119F59C Slot: 37
	internal override void WriteXmlDeclaration(string xmldecl) { }

	// RVA: 0x119F614 Offset: 0x119B614 VA: 0x119F614 Slot: 8
	public override void WriteDocType(string name, string pubid, string sysid, string subset) { }

	// RVA: 0x119F800 Offset: 0x119B800 VA: 0x119F800 Slot: 9
	public override void WriteStartElement(string prefix, string localName, string ns) { }

	// RVA: 0x119F8C8 Offset: 0x119B8C8 VA: 0x119F8C8 Slot: 38
	internal override void StartElementContent() { }

	// RVA: 0x119F90C Offset: 0x119B90C VA: 0x119F90C Slot: 40
	internal override void WriteEndElement(string prefix, string localName, string ns) { }

	// RVA: 0x119FA7C Offset: 0x119BA7C VA: 0x119FA7C Slot: 41
	internal override void WriteFullEndElement(string prefix, string localName, string ns) { }

	// RVA: 0x119FB84 Offset: 0x119BB84 VA: 0x119FB84 Slot: 12
	public override void WriteStartAttribute(string prefix, string localName, string ns) { }

	// RVA: 0x119FCA4 Offset: 0x119BCA4 VA: 0x119FCA4 Slot: 13
	public override void WriteEndAttribute() { }

	// RVA: 0x119FD0C Offset: 0x119BD0C VA: 0x119FD0C Slot: 42
	internal override void WriteNamespaceDeclaration(string prefix, string namespaceName) { }

	// RVA: 0x119FD60 Offset: 0x119BD60 VA: 0x119FD60 Slot: 43
	internal override bool get_SupportsNamespaceDeclarationInChunks() { }

	// RVA: 0x119FD68 Offset: 0x119BD68 VA: 0x119FD68 Slot: 44
	internal override void WriteStartNamespaceDeclaration(string prefix) { }

	// RVA: 0x119FE8C Offset: 0x119BE8C VA: 0x119FE8C Slot: 45
	internal override void WriteEndNamespaceDeclaration() { }

	// RVA: 0x119FEF4 Offset: 0x119BEF4 VA: 0x119FEF4 Slot: 14
	public override void WriteCData(string text) { }

	// RVA: 0x11A03F0 Offset: 0x119C3F0 VA: 0x11A03F0 Slot: 15
	public override void WriteComment(string text) { }

	// RVA: 0x11A0824 Offset: 0x119C824 VA: 0x11A0824 Slot: 16
	public override void WriteProcessingInstruction(string name, string text) { }

	// RVA: 0x11A0950 Offset: 0x119C950 VA: 0x11A0950 Slot: 17
	public override void WriteEntityRef(string name) { }

	// RVA: 0x11A0A1C Offset: 0x119CA1C VA: 0x11A0A1C Slot: 18
	public override void WriteCharEntity(char ch) { }

	// RVA: 0x11A0BE0 Offset: 0x119CBE0 VA: 0x11A0BE0 Slot: 19
	public override void WriteWhitespace(string ws) { }

	// RVA: 0x11A11D8 Offset: 0x119D1D8 VA: 0x11A11D8 Slot: 20
	public override void WriteString(string text) { }

	// RVA: 0x11A1244 Offset: 0x119D244 VA: 0x11A1244 Slot: 21
	public override void WriteSurrogateCharEntity(char lowChar, char highChar) { }

	// RVA: 0x11A1388 Offset: 0x119D388 VA: 0x11A1388 Slot: 22
	public override void WriteChars(char[] buffer, int index, int count) { }

	// RVA: 0x119B644 Offset: 0x1197644 VA: 0x119B644 Slot: 23
	public override void WriteRaw(char[] buffer, int index, int count) { }

	// RVA: 0x119B59C Offset: 0x119759C VA: 0x119B59C Slot: 24
	public override void WriteRaw(string data) { }

	// RVA: 0x11A1628 Offset: 0x119D628 VA: 0x11A1628 Slot: 28
	public override void Close() { }

	// RVA: 0x11A1740 Offset: 0x119D740 VA: 0x11A1740 Slot: 29
	public override void Flush() { }

	// RVA: 0x11A1798 Offset: 0x119D798 VA: 0x11A1798 Slot: 48
	protected virtual void FlushBuffer() { }

	// RVA: 0x11A19A0 Offset: 0x119D9A0 VA: 0x11A19A0
	private void EncodeChars(int startOffset, int endOffset, bool writeAllToStream) { }

	// RVA: 0x11A16A4 Offset: 0x119D6A4 VA: 0x11A16A4
	private void FlushEncoder() { }

	// RVA: 0x11A0C4C Offset: 0x119CC4C VA: 0x11A0C4C
	protected void WriteAttributeTextBlock(char* pSrc, char* pSrcEnd) { }

	// RVA: 0x11A0F34 Offset: 0x119CF34 VA: 0x11A0F34
	protected void WriteElementTextBlock(char* pSrc, char* pSrcEnd) { }

	// RVA: 0x119F560 Offset: 0x119B560 VA: 0x119F560
	protected void RawText(string s) { }

	// RVA: 0x11A1DF0 Offset: 0x119DDF0 VA: 0x11A1DF0
	protected void RawText(char* pSrcBegin, char* pSrcEnd) { }

	// RVA: 0x11A1410 Offset: 0x119D410 VA: 0x11A1410
	protected void WriteRawWithCharChecking(char* pSrcBegin, char* pSrcEnd) { }

	// RVA: 0x11A051C Offset: 0x119C51C VA: 0x11A051C
	protected void WriteCommentOrPi(string text, int stopChar) { }

	// RVA: 0x11A00D4 Offset: 0x119C0D4 VA: 0x11A00D4
	protected void WriteCDataSection(string text) { }

	// RVA: 0x11A1BD0 Offset: 0x119DBD0 VA: 0x11A1BD0
	private static char* EncodeSurrogate(char* pSrc, char* pSrcEnd, char* pDst) { }

	// RVA: 0x11A1D28 Offset: 0x119DD28 VA: 0x11A1D28
	private char* InvalidXmlChar(int ch, char* pDst, bool entitize) { }

	// RVA: 0x11A2060 Offset: 0x119E060 VA: 0x11A2060
	internal void EncodeChar(ref char* pSrc, char* pSrcEnd, ref char* pDst) { }

	// RVA: 0x119F4EC Offset: 0x119B4EC VA: 0x119F4EC
	protected void ChangeTextContentMark(bool value) { }

	// RVA: 0x11A2104 Offset: 0x119E104 VA: 0x11A2104
	private void GrowTextContentMarks() { }

	// RVA: 0x11A1D94 Offset: 0x119DD94 VA: 0x11A1D94
	protected char* WriteNewLine(char* pDst) { }

	// RVA: 0x11A1AFC Offset: 0x119DAFC VA: 0x11A1AFC
	protected static char* LtEntity(char* pDst) { }

	// RVA: 0x11A1B14 Offset: 0x119DB14 VA: 0x11A1B14
	protected static char* GtEntity(char* pDst) { }

	// RVA: 0x11A1AD4 Offset: 0x119DAD4 VA: 0x11A1AD4
	protected static char* AmpEntity(char* pDst) { }

	// RVA: 0x11A1B2C Offset: 0x119DB2C VA: 0x11A1B2C
	protected static char* QuoteEntity(char* pDst) { }

	// RVA: 0x11A1B58 Offset: 0x119DB58 VA: 0x11A1B58
	protected static char* TabEntity(char* pDst) { }

	// RVA: 0x11A1BA8 Offset: 0x119DBA8 VA: 0x11A1BA8
	protected static char* LineFeedEntity(char* pDst) { }

	// RVA: 0x11A1B80 Offset: 0x119DB80 VA: 0x11A1B80
	protected static char* CarriageReturnEntity(char* pDst) { }

	// RVA: 0x11A1FB0 Offset: 0x119DFB0 VA: 0x11A1FB0
	private static char* CharEntity(char* pDst, char ch) { }

	// RVA: 0x11A1F78 Offset: 0x119DF78 VA: 0x11A1F78
	protected static char* RawStartCData(char* pDst) { }

	// RVA: 0x11A1F58 Offset: 0x119DF58 VA: 0x11A1F58
	protected static char* RawEndCData(char* pDst) { }

	// RVA: 0x119F03C Offset: 0x119B03C VA: 0x119F03C
	protected void ValidateContentChars(string chars, string propertyName, bool allowOnlyWhitespace) { }
}


// Namespace: System.Xml
internal class XmlEncodedRawTextWriterIndent : XmlEncodedRawTextWriter // TypeDefIndex: 2608
{
	// Fields
	protected int indentLevel; // 0xC0
	protected bool newLineOnAttributes; // 0xC4
	protected string indentChars; // 0xC8
	protected bool mixedContent; // 0xD0
	private BitStack mixedContentStack; // 0xD8
	protected ConformanceLevel conformanceLevel; // 0xE0

	// Methods

	// RVA: 0x11A2184 Offset: 0x119E184 VA: 0x11A2184
	public void .ctor(TextWriter writer, XmlWriterSettings settings) { }

	// RVA: 0x11A22B8 Offset: 0x119E2B8 VA: 0x11A22B8
	public void .ctor(Stream stream, XmlWriterSettings settings) { }

	// RVA: 0x11A22E0 Offset: 0x119E2E0 VA: 0x11A22E0 Slot: 8
	public override void WriteDocType(string name, string pubid, string sysid, string subset) { }

	// RVA: 0x11A2388 Offset: 0x119E388 VA: 0x11A2388 Slot: 9
	public override void WriteStartElement(string prefix, string localName, string ns) { }

	// RVA: 0x11A23F4 Offset: 0x119E3F4 VA: 0x11A23F4 Slot: 38
	internal override void StartElementContent() { }

	// RVA: 0x11A2444 Offset: 0x119E444 VA: 0x11A2444 Slot: 39
	internal override void OnRootElement(ConformanceLevel currentConformanceLevel) { }

	// RVA: 0x11A244C Offset: 0x119E44C VA: 0x11A244C Slot: 40
	internal override void WriteEndElement(string prefix, string localName, string ns) { }

	// RVA: 0x11A24CC Offset: 0x119E4CC VA: 0x11A24CC Slot: 41
	internal override void WriteFullEndElement(string prefix, string localName, string ns) { }

	// RVA: 0x11A254C Offset: 0x119E54C VA: 0x11A254C Slot: 12
	public override void WriteStartAttribute(string prefix, string localName, string ns) { }

	// RVA: 0x11A2588 Offset: 0x119E588 VA: 0x11A2588 Slot: 14
	public override void WriteCData(string text) { }

	// RVA: 0x11A2594 Offset: 0x119E594 VA: 0x11A2594 Slot: 15
	public override void WriteComment(string text) { }

	// RVA: 0x11A25D4 Offset: 0x119E5D4 VA: 0x11A25D4 Slot: 16
	public override void WriteProcessingInstruction(string target, string text) { }

	// RVA: 0x11A261C Offset: 0x119E61C VA: 0x11A261C Slot: 17
	public override void WriteEntityRef(string name) { }

	// RVA: 0x11A2628 Offset: 0x119E628 VA: 0x11A2628 Slot: 18
	public override void WriteCharEntity(char ch) { }

	// RVA: 0x11A2634 Offset: 0x119E634 VA: 0x11A2634 Slot: 21
	public override void WriteSurrogateCharEntity(char lowChar, char highChar) { }

	// RVA: 0x11A2640 Offset: 0x119E640 VA: 0x11A2640 Slot: 19
	public override void WriteWhitespace(string ws) { }

	// RVA: 0x11A264C Offset: 0x119E64C VA: 0x11A264C Slot: 20
	public override void WriteString(string text) { }

	// RVA: 0x11A2658 Offset: 0x119E658 VA: 0x11A2658 Slot: 22
	public override void WriteChars(char[] buffer, int index, int count) { }

	// RVA: 0x11A2664 Offset: 0x119E664 VA: 0x11A2664 Slot: 23
	public override void WriteRaw(char[] buffer, int index, int count) { }

	// RVA: 0x11A2670 Offset: 0x119E670 VA: 0x11A2670 Slot: 24
	public override void WriteRaw(string data) { }

	// RVA: 0x11A267C Offset: 0x119E67C VA: 0x11A267C Slot: 25
	public override void WriteBase64(byte[] buffer, int index, int count) { }

	// RVA: 0x11A21AC Offset: 0x119E1AC VA: 0x11A21AC
	private void Init(XmlWriterSettings settings) { }

	// RVA: 0x11A2340 Offset: 0x119E340 VA: 0x11A2340
	private void WriteIndent() { }
}


// Namespace: 
private enum XmlEventCache.XmlEventType // TypeDefIndex: 2609
{
	// Fields
	public int value__; // 0x0
	public const XmlEventCache.XmlEventType Unknown = 0;
	public const XmlEventCache.XmlEventType DocType = 1;
	public const XmlEventCache.XmlEventType StartElem = 2;
	public const XmlEventCache.XmlEventType StartAttr = 3;
	public const XmlEventCache.XmlEventType EndAttr = 4;
	public const XmlEventCache.XmlEventType CData = 5;
	public const XmlEventCache.XmlEventType Comment = 6;
	public const XmlEventCache.XmlEventType PI = 7;
	public const XmlEventCache.XmlEventType Whitespace = 8;
	public const XmlEventCache.XmlEventType String = 9;
	public const XmlEventCache.XmlEventType Raw = 10;
	public const XmlEventCache.XmlEventType EntRef = 11;
	public const XmlEventCache.XmlEventType CharEnt = 12;
	public const XmlEventCache.XmlEventType SurrCharEnt = 13;
	public const XmlEventCache.XmlEventType Base64 = 14;
	public const XmlEventCache.XmlEventType BinHex = 15;
	public const XmlEventCache.XmlEventType XmlDecl1 = 16;
	public const XmlEventCache.XmlEventType XmlDecl2 = 17;
	public const XmlEventCache.XmlEventType StartContent = 18;
	public const XmlEventCache.XmlEventType EndElem = 19;
	public const XmlEventCache.XmlEventType FullEndElem = 20;
	public const XmlEventCache.XmlEventType Nmsp = 21;
	public const XmlEventCache.XmlEventType EndBase64 = 22;
	public const XmlEventCache.XmlEventType Close = 23;
	public const XmlEventCache.XmlEventType Flush = 24;
	public const XmlEventCache.XmlEventType Dispose = 25;
}


// Namespace: 
private struct XmlEventCache.XmlEvent // TypeDefIndex: 2610
{
	// Fields
	private XmlEventCache.XmlEventType eventType; // 0x0
	private string s1; // 0x8
	private string s2; // 0x10
	private string s3; // 0x18
	private object o; // 0x20

	// Methods

	// RVA: 0x11A2F5C Offset: 0x119EF5C VA: 0x11A2F5C
	public void InitEvent(XmlEventCache.XmlEventType eventType, string s1) { }

	// RVA: 0x11A2F68 Offset: 0x119EF68 VA: 0x11A2F68
	public void InitEvent(XmlEventCache.XmlEventType eventType, string s1, string s2) { }

	// RVA: 0x11A2F74 Offset: 0x119EF74 VA: 0x11A2F74
	public void InitEvent(XmlEventCache.XmlEventType eventType, string s1, string s2, string s3) { }

	// RVA: 0x11A2F84 Offset: 0x119EF84 VA: 0x11A2F84
	public void InitEvent(XmlEventCache.XmlEventType eventType, string s1, string s2, string s3, object o) { }

	// RVA: 0x11A2F94 Offset: 0x119EF94 VA: 0x11A2F94
	public void InitEvent(XmlEventCache.XmlEventType eventType, object o) { }
}


// Namespace: System.Xml
internal sealed class XmlEventCache : XmlRawWriter // TypeDefIndex: 2611
{
	// Fields
	private List<XmlEventCache.XmlEvent[]> pages; // 0x28
	private XmlEventCache.XmlEvent[] pageCurr; // 0x30
	private int pageSize; // 0x38
	private bool hasRootNode; // 0x3C
	private StringConcat singleText; // 0x40
	private string baseUri; // 0x78

	// Methods

	// RVA: 0x119DD50 Offset: 0x1199D50 VA: 0x119DD50
	public void .ctor(string baseUri, bool hasRootNode) { }

	// RVA: 0x119E85C Offset: 0x119A85C VA: 0x119E85C
	public void EndEvents() { }

	// RVA: 0x119E870 Offset: 0x119A870 VA: 0x119E870
	public void EventsToWriter(XmlWriter writer) { }

	// RVA: 0x11A2764 Offset: 0x119E764 VA: 0x11A2764 Slot: 8
	public override void WriteDocType(string name, string pubid, string sysid, string subset) { }

	// RVA: 0x11A27EC Offset: 0x119E7EC VA: 0x11A27EC Slot: 9
	public override void WriteStartElement(string prefix, string localName, string ns) { }

	// RVA: 0x11A2864 Offset: 0x119E864 VA: 0x11A2864 Slot: 12
	public override void WriteStartAttribute(string prefix, string localName, string ns) { }

	// RVA: 0x11A2878 Offset: 0x119E878 VA: 0x11A2878 Slot: 13
	public override void WriteEndAttribute() { }

	// RVA: 0x11A2880 Offset: 0x119E880 VA: 0x11A2880 Slot: 14
	public override void WriteCData(string text) { }

	// RVA: 0x11A28DC Offset: 0x119E8DC VA: 0x11A28DC Slot: 15
	public override void WriteComment(string text) { }

	// RVA: 0x11A28E8 Offset: 0x119E8E8 VA: 0x11A28E8 Slot: 16
	public override void WriteProcessingInstruction(string name, string text) { }

	// RVA: 0x11A2954 Offset: 0x119E954 VA: 0x11A2954 Slot: 19
	public override void WriteWhitespace(string ws) { }

	// RVA: 0x11A2960 Offset: 0x119E960 VA: 0x11A2960 Slot: 20
	public override void WriteString(string text) { }

	// RVA: 0x11A2984 Offset: 0x119E984 VA: 0x11A2984 Slot: 22
	public override void WriteChars(char[] buffer, int index, int count) { }

	// RVA: 0x11A29B4 Offset: 0x119E9B4 VA: 0x11A29B4 Slot: 23
	public override void WriteRaw(char[] buffer, int index, int count) { }

	// RVA: 0x11A29E4 Offset: 0x119E9E4 VA: 0x11A29E4 Slot: 24
	public override void WriteRaw(string data) { }

	// RVA: 0x11A29F0 Offset: 0x119E9F0 VA: 0x11A29F0 Slot: 17
	public override void WriteEntityRef(string name) { }

	// RVA: 0x11A29FC Offset: 0x119E9FC VA: 0x11A29FC Slot: 18
	public override void WriteCharEntity(char ch) { }

	// RVA: 0x11A2AB8 Offset: 0x119EAB8 VA: 0x11A2AB8 Slot: 21
	public override void WriteSurrogateCharEntity(char lowChar, char highChar) { }

	// RVA: 0x11A2B44 Offset: 0x119EB44 VA: 0x11A2B44 Slot: 25
	public override void WriteBase64(byte[] buffer, int index, int count) { }

	// RVA: 0x11A2C24 Offset: 0x119EC24 VA: 0x11A2C24 Slot: 26
	public override void WriteBinHex(byte[] buffer, int index, int count) { }

	// RVA: 0x11A2C50 Offset: 0x119EC50 VA: 0x11A2C50 Slot: 28
	public override void Close() { }

	// RVA: 0x11A2C58 Offset: 0x119EC58 VA: 0x11A2C58 Slot: 29
	public override void Flush() { }

	// RVA: 0x11A2C60 Offset: 0x119EC60 VA: 0x11A2C60 Slot: 31
	public override void WriteValue(string value) { }

	// RVA: 0x11A2C70 Offset: 0x119EC70 VA: 0x11A2C70 Slot: 34
	protected override void Dispose(bool disposing) { }

	// RVA: 0x11A2D20 Offset: 0x119ED20 VA: 0x11A2D20 Slot: 36
	internal override void WriteXmlDeclaration(XmlStandalone standalone) { }

	// RVA: 0x11A2D8C Offset: 0x119ED8C VA: 0x11A2D8C Slot: 37
	internal override void WriteXmlDeclaration(string xmldecl) { }

	// RVA: 0x11A2D98 Offset: 0x119ED98 VA: 0x11A2D98 Slot: 38
	internal override void StartElementContent() { }

	// RVA: 0x11A2DA0 Offset: 0x119EDA0 VA: 0x11A2DA0 Slot: 40
	internal override void WriteEndElement(string prefix, string localName, string ns) { }

	// RVA: 0x11A2DB4 Offset: 0x119EDB4 VA: 0x11A2DB4 Slot: 41
	internal override void WriteFullEndElement(string prefix, string localName, string ns) { }

	// RVA: 0x11A2DC8 Offset: 0x119EDC8 VA: 0x11A2DC8 Slot: 42
	internal override void WriteNamespaceDeclaration(string prefix, string ns) { }

	// RVA: 0x11A2DD8 Offset: 0x119EDD8 VA: 0x11A2DD8 Slot: 46
	internal override void WriteEndBase64() { }

	// RVA: 0x11A271C Offset: 0x119E71C VA: 0x11A271C
	private void AddEvent(XmlEventCache.XmlEventType eventType) { }

	// RVA: 0x11A288C Offset: 0x119E88C VA: 0x11A288C
	private void AddEvent(XmlEventCache.XmlEventType eventType, string s1) { }

	// RVA: 0x11A28F8 Offset: 0x119E8F8 VA: 0x11A28F8
	private void AddEvent(XmlEventCache.XmlEventType eventType, string s1, string s2) { }

	// RVA: 0x11A2800 Offset: 0x119E800 VA: 0x11A2800
	private void AddEvent(XmlEventCache.XmlEventType eventType, string s1, string s2, string s3) { }

	// RVA: 0x11A277C Offset: 0x119E77C VA: 0x11A277C
	private void AddEvent(XmlEventCache.XmlEventType eventType, string s1, string s2, string s3, object o) { }

	// RVA: 0x11A2A68 Offset: 0x119EA68 VA: 0x11A2A68
	private void AddEvent(XmlEventCache.XmlEventType eventType, object o) { }

	// RVA: 0x11A2DE0 Offset: 0x119EDE0 VA: 0x11A2DE0
	private int NewEvent() { }

	// RVA: 0x11A2B70 Offset: 0x119EB70 VA: 0x11A2B70
	private static byte[] ToBytes(byte[] buffer, int index, int count) { }
}


// Namespace: System.Xml
public class XmlParserContext // TypeDefIndex: 2612
{
	// Fields
	private XmlNameTable _nt; // 0x10
	private XmlNamespaceManager _nsMgr; // 0x18
	private string _docTypeName; // 0x20
	private string _pubId; // 0x28
	private string _sysId; // 0x30
	private string _internalSubset; // 0x38
	private string _xmlLang; // 0x40
	private XmlSpace _xmlSpace; // 0x48
	private string _baseURI; // 0x50
	private Encoding _encoding; // 0x58

	// Properties
	internal bool HasDtdInfo { get; }

	// Methods

	// RVA: 0x11A2FA0 Offset: 0x119EFA0 VA: 0x11A2FA0
	public void .ctor(XmlNameTable nt, XmlNamespaceManager nsMgr, string xmlLang, XmlSpace xmlSpace) { }

	// RVA: 0x11A3040 Offset: 0x119F040 VA: 0x11A3040
	public void .ctor(XmlNameTable nt, XmlNamespaceManager nsMgr, string docTypeName, string pubId, string sysId, string internalSubset, string baseURI, string xmlLang, XmlSpace xmlSpace) { }

	// RVA: 0x11A306C Offset: 0x119F06C VA: 0x11A306C
	public void .ctor(XmlNameTable nt, XmlNamespaceManager nsMgr, string docTypeName, string pubId, string sysId, string internalSubset, string baseURI, string xmlLang, XmlSpace xmlSpace, Encoding enc) { }

	// RVA: 0x11A3218 Offset: 0x119F218 VA: 0x11A3218
	internal bool get_HasDtdInfo() { }
}


// Namespace: System.Xml
internal abstract class XmlRawWriter : XmlWriter // TypeDefIndex: 2613
{
	// Fields
	protected XmlRawWriterBase64Encoder base64Encoder; // 0x18
	protected IXmlNamespaceResolver resolver; // 0x20

	// Properties
	public override WriteState WriteState { get; }
	internal virtual IXmlNamespaceResolver NamespaceResolver { set; }
	internal virtual bool SupportsNamespaceDeclarationInChunks { get; }

	// Methods

	// RVA: 0x11A32B4 Offset: 0x119F2B4 VA: 0x11A32B4 Slot: 5
	public override void WriteStartDocument() { }

	// RVA: 0x11A330C Offset: 0x119F30C VA: 0x11A330C Slot: 6
	public override void WriteStartDocument(bool standalone) { }

	// RVA: 0x11A3364 Offset: 0x119F364 VA: 0x11A3364 Slot: 7
	public override void WriteEndDocument() { }

	// RVA: 0x11A33BC Offset: 0x119F3BC VA: 0x11A33BC Slot: 8
	public override void WriteDocType(string name, string pubid, string sysid, string subset) { }

	// RVA: 0x11A33C0 Offset: 0x119F3C0 VA: 0x11A33C0 Slot: 10
	public override void WriteEndElement() { }

	// RVA: 0x11A3418 Offset: 0x119F418 VA: 0x11A3418 Slot: 11
	public override void WriteFullEndElement() { }

	// RVA: 0x11A2688 Offset: 0x119E688 VA: 0x11A2688 Slot: 25
	public override void WriteBase64(byte[] buffer, int index, int count) { }

	// RVA: 0x11A3470 Offset: 0x119F470 VA: 0x11A3470 Slot: 30
	public override string LookupPrefix(string ns) { }

	// RVA: 0x11A34C8 Offset: 0x119F4C8 VA: 0x11A34C8 Slot: 27
	public override WriteState get_WriteState() { }

	// RVA: 0x11A3520 Offset: 0x119F520 VA: 0x11A3520 Slot: 14
	public override void WriteCData(string text) { }

	// RVA: 0x11A3530 Offset: 0x119F530 VA: 0x11A3530 Slot: 18
	public override void WriteCharEntity(char ch) { }

	// RVA: 0x11A35C4 Offset: 0x119F5C4 VA: 0x11A35C4 Slot: 21
	public override void WriteSurrogateCharEntity(char lowChar, char highChar) { }

	// RVA: 0x11A3668 Offset: 0x119F668 VA: 0x11A3668 Slot: 19
	public override void WriteWhitespace(string ws) { }

	// RVA: 0x11A3678 Offset: 0x119F678 VA: 0x11A3678 Slot: 22
	public override void WriteChars(char[] buffer, int index, int count) { }

	// RVA: 0x11A36A8 Offset: 0x119F6A8 VA: 0x11A36A8 Slot: 23
	public override void WriteRaw(char[] buffer, int index, int count) { }

	// RVA: 0x11A36D8 Offset: 0x119F6D8 VA: 0x11A36D8 Slot: 24
	public override void WriteRaw(string data) { }

	// RVA: 0x11A36E8 Offset: 0x119F6E8 VA: 0x11A36E8 Slot: 31
	public override void WriteValue(string value) { }

	// RVA: 0x11A36F8 Offset: 0x119F6F8 VA: 0x11A36F8 Slot: 32
	public override void WriteAttributes(XmlReader reader, bool defattr) { }

	// RVA: 0x11A3750 Offset: 0x119F750 VA: 0x11A3750 Slot: 33
	public override void WriteNode(XmlReader reader, bool defattr) { }

	// RVA: 0x11A37A8 Offset: 0x119F7A8 VA: 0x11A37A8 Slot: 35
	internal virtual void set_NamespaceResolver(IXmlNamespaceResolver value) { }

	// RVA: 0x11A37B0 Offset: 0x119F7B0 VA: 0x11A37B0 Slot: 36
	internal virtual void WriteXmlDeclaration(XmlStandalone standalone) { }

	// RVA: 0x11A37B4 Offset: 0x119F7B4 VA: 0x11A37B4 Slot: 37
	internal virtual void WriteXmlDeclaration(string xmldecl) { }

	// RVA: -1 Offset: -1 Slot: 38
	internal abstract void StartElementContent();

	// RVA: 0x11A37B8 Offset: 0x119F7B8 VA: 0x11A37B8 Slot: 39
	internal virtual void OnRootElement(ConformanceLevel conformanceLevel) { }

	// RVA: -1 Offset: -1 Slot: 40
	internal abstract void WriteEndElement(string prefix, string localName, string ns);

	// RVA: 0x11A37BC Offset: 0x119F7BC VA: 0x11A37BC Slot: 41
	internal virtual void WriteFullEndElement(string prefix, string localName, string ns) { }

	// RVA: -1 Offset: -1 Slot: 42
	internal abstract void WriteNamespaceDeclaration(string prefix, string ns);

	// RVA: 0x11A37CC Offset: 0x119F7CC VA: 0x11A37CC Slot: 43
	internal virtual bool get_SupportsNamespaceDeclarationInChunks() { }

	// RVA: 0x11A37D4 Offset: 0x119F7D4 VA: 0x11A37D4 Slot: 44
	internal virtual void WriteStartNamespaceDeclaration(string prefix) { }

	// RVA: 0x11A380C Offset: 0x119F80C VA: 0x11A380C Slot: 45
	internal virtual void WriteEndNamespaceDeclaration() { }

	// RVA: 0x11A3844 Offset: 0x119F844 VA: 0x11A3844 Slot: 46
	internal virtual void WriteEndBase64() { }

	// RVA: 0x11A3860 Offset: 0x119F860 VA: 0x11A3860 Slot: 47
	internal virtual void Close(WriteState currentState) { }

	// RVA: 0x119A374 Offset: 0x1196374 VA: 0x119A374
	protected void .ctor() { }
}


// Namespace: System.Xml
[DefaultMember("Item")]
public abstract class XmlReader : IDisposable // TypeDefIndex: 2614
{
	// Fields
	private static uint IsTextualNodeBitmap; // 0x0
	private static uint CanReadContentAsBitmap; // 0x4
	private static uint HasValueBitmap; // 0x8

	// Properties
	public virtual XmlReaderSettings Settings { get; }
	public abstract XmlNodeType NodeType { get; }
	public virtual string Name { get; }
	public abstract string LocalName { get; }
	public abstract string NamespaceURI { get; }
	public abstract string Prefix { get; }
	public abstract string Value { get; }
	public abstract int Depth { get; }
	public abstract string BaseURI { get; }
	public abstract bool IsEmptyElement { get; }
	public virtual bool IsDefault { get; }
	public virtual char QuoteChar { get; }
	public virtual XmlSpace XmlSpace { get; }
	public virtual string XmlLang { get; }
	public virtual IXmlSchemaInfo SchemaInfo { get; }
	public virtual Type ValueType { get; }
	public abstract int AttributeCount { get; }
	public abstract bool EOF { get; }
	public abstract ReadState ReadState { get; }
	public abstract XmlNameTable NameTable { get; }
	public virtual bool CanResolveEntity { get; }
	public virtual bool CanReadValueChunk { get; }
	public virtual bool HasAttributes { get; }
	internal virtual XmlNamespaceManager NamespaceManager { get; }
	internal bool IsDefaultInternal { get; }
	internal virtual IDtdInfo DtdInfo { get; }

	// Methods

	// RVA: 0x11A3870 Offset: 0x119F870 VA: 0x11A3870 Slot: 5
	public virtual XmlReaderSettings get_Settings() { }

	// RVA: -1 Offset: -1 Slot: 6
	public abstract XmlNodeType get_NodeType();

	// RVA: 0x11A3878 Offset: 0x119F878 VA: 0x11A3878 Slot: 7
	public virtual string get_Name() { }

	// RVA: -1 Offset: -1 Slot: 8
	public abstract string get_LocalName();

	// RVA: -1 Offset: -1 Slot: 9
	public abstract string get_NamespaceURI();

	// RVA: -1 Offset: -1 Slot: 10
	public abstract string get_Prefix();

	// RVA: -1 Offset: -1 Slot: 11
	public abstract string get_Value();

	// RVA: -1 Offset: -1 Slot: 12
	public abstract int get_Depth();

	// RVA: -1 Offset: -1 Slot: 13
	public abstract string get_BaseURI();

	// RVA: -1 Offset: -1 Slot: 14
	public abstract bool get_IsEmptyElement();

	// RVA: 0x11A395C Offset: 0x119F95C VA: 0x11A395C Slot: 15
	public virtual bool get_IsDefault() { }

	// RVA: 0x11A3964 Offset: 0x119F964 VA: 0x11A3964 Slot: 16
	public virtual char get_QuoteChar() { }

	// RVA: 0x11A396C Offset: 0x119F96C VA: 0x11A396C Slot: 17
	public virtual XmlSpace get_XmlSpace() { }

	// RVA: 0x11A3974 Offset: 0x119F974 VA: 0x11A3974 Slot: 18
	public virtual string get_XmlLang() { }

	// RVA: 0x11A39BC Offset: 0x119F9BC VA: 0x11A39BC Slot: 19
	public virtual IXmlSchemaInfo get_SchemaInfo() { }

	// RVA: 0x11A3A04 Offset: 0x119FA04 VA: 0x11A3A04 Slot: 20
	public virtual Type get_ValueType() { }

	// RVA: -1 Offset: -1 Slot: 21
	public abstract int get_AttributeCount();

	// RVA: -1 Offset: -1 Slot: 22
	public abstract string GetAttribute(string name);

	// RVA: -1 Offset: -1 Slot: 23
	public abstract string GetAttribute(string name, string namespaceURI);

	// RVA: -1 Offset: -1 Slot: 24
	public abstract string GetAttribute(int i);

	// RVA: -1 Offset: -1 Slot: 25
	public abstract bool MoveToAttribute(string name);

	// RVA: 0x11A3A70 Offset: 0x119FA70 VA: 0x11A3A70 Slot: 26
	public virtual void MoveToAttribute(int i) { }

	// RVA: -1 Offset: -1 Slot: 27
	public abstract bool MoveToFirstAttribute();

	// RVA: -1 Offset: -1 Slot: 28
	public abstract bool MoveToNextAttribute();

	// RVA: -1 Offset: -1 Slot: 29
	public abstract bool MoveToElement();

	// RVA: -1 Offset: -1 Slot: 30
	public abstract bool ReadAttributeValue();

	// RVA: -1 Offset: -1 Slot: 31
	public abstract bool Read();

	// RVA: -1 Offset: -1 Slot: 32
	public abstract bool get_EOF();

	// RVA: 0x11A3B3C Offset: 0x119FB3C VA: 0x11A3B3C Slot: 33
	public virtual void Close() { }

	// RVA: -1 Offset: -1 Slot: 34
	public abstract ReadState get_ReadState();

	// RVA: 0x11A3B40 Offset: 0x119FB40 VA: 0x11A3B40 Slot: 35
	public virtual void Skip() { }

	// RVA: -1 Offset: -1 Slot: 36
	public abstract XmlNameTable get_NameTable();

	// RVA: -1 Offset: -1 Slot: 37
	public abstract string LookupNamespace(string prefix);

	// RVA: 0x11A3C48 Offset: 0x119FC48 VA: 0x11A3C48 Slot: 38
	public virtual bool get_CanResolveEntity() { }

	// RVA: -1 Offset: -1 Slot: 39
	public abstract void ResolveEntity();

	// RVA: 0x11A3C50 Offset: 0x119FC50 VA: 0x11A3C50 Slot: 40
	public virtual bool get_CanReadValueChunk() { }

	// RVA: 0x11A3C58 Offset: 0x119FC58 VA: 0x11A3C58 Slot: 41
	public virtual int ReadValueChunk(char[] buffer, int index, int count) { }

	// RVA: 0x11A3CB0 Offset: 0x119FCB0 VA: 0x11A3CB0 Slot: 42
	public virtual string ReadString() { }

	// RVA: 0x11A3EE8 Offset: 0x119FEE8 VA: 0x11A3EE8 Slot: 43
	public virtual XmlNodeType MoveToContent() { }

	// RVA: 0x11A3F6C Offset: 0x119FF6C VA: 0x11A3F6C Slot: 44
	public virtual void ReadStartElement() { }

	// RVA: 0x11A4060 Offset: 0x11A0060 VA: 0x11A4060 Slot: 45
	public virtual string ReadElementString() { }

	// RVA: 0x11A42DC Offset: 0x11A02DC VA: 0x11A42DC Slot: 46
	public virtual void ReadEndElement() { }

	// RVA: 0x11A43D0 Offset: 0x11A03D0 VA: 0x11A43D0 Slot: 47
	public virtual bool IsStartElement(string localname, string ns) { }

	// RVA: 0x11A4454 Offset: 0x11A0454 VA: 0x11A4454 Slot: 48
	public virtual string ReadInnerXml() { }

	// RVA: 0x11A4854 Offset: 0x11A0854 VA: 0x11A4854
	private void WriteNode(XmlWriter xtw, bool defattr) { }

	// RVA: 0x11A4780 Offset: 0x11A0780 VA: 0x11A4780
	private void WriteAttributeValue(XmlWriter xtw) { }

	// RVA: 0x11A470C Offset: 0x11A070C VA: 0x11A470C
	private XmlWriter CreateWriterForInnerOuterXml(StringWriter sw) { }

	// RVA: 0x11A4C9C Offset: 0x11A0C9C VA: 0x11A4C9C
	private void SetNamespacesFlag(XmlTextWriter xtw) { }

	// RVA: 0x11A4DA4 Offset: 0x11A0DA4 VA: 0x11A4DA4 Slot: 49
	public virtual bool get_HasAttributes() { }

	// RVA: 0x119C9B0 Offset: 0x11989B0 VA: 0x119C9B0 Slot: 4
	public void Dispose() { }

	// RVA: 0x11A4DC8 Offset: 0x11A0DC8 VA: 0x11A4DC8 Slot: 50
	protected virtual void Dispose(bool disposing) { }

	// RVA: 0x11A4E0C Offset: 0x11A0E0C VA: 0x11A4E0C Slot: 51
	internal virtual XmlNamespaceManager get_NamespaceManager() { }

	// RVA: 0x11A3E84 Offset: 0x119FE84 VA: 0x11A3E84
	internal static bool IsTextualNode(XmlNodeType nodeType) { }

	// RVA: 0x11A4E14 Offset: 0x11A0E14 VA: 0x11A4E14
	internal static bool HasValueInternal(XmlNodeType nodeType) { }

	// RVA: 0x11A3B74 Offset: 0x119FB74 VA: 0x11A3B74
	private bool SkipSubtree() { }

	// RVA: 0x11A4E78 Offset: 0x11A0E78 VA: 0x11A4E78
	internal bool get_IsDefaultInternal() { }

	// RVA: 0x11A4F58 Offset: 0x11A0F58 VA: 0x11A4F58 Slot: 52
	internal virtual IDtdInfo get_DtdInfo() { }

	// RVA: 0x11A4F60 Offset: 0x11A0F60 VA: 0x11A4F60
	public static XmlReader Create(Stream input, XmlReaderSettings settings, string baseUri) { }

	// RVA: 0x11A5198 Offset: 0x11A1198 VA: 0x11A5198
	public static XmlReader Create(TextReader input, XmlReaderSettings settings, string baseUri) { }

	// RVA: 0x11A5344 Offset: 0x11A1344 VA: 0x11A5344
	internal static XmlReader CreateSqlReader(Stream input, XmlReaderSettings settings, XmlParserContext inputContext) { }

	// RVA: 0x11A565C Offset: 0x11A165C VA: 0x11A565C
	internal static int CalcBufferSize(Stream input) { }

	// RVA: 0x119BF54 Offset: 0x1197F54 VA: 0x119BF54
	protected void .ctor() { }

	// RVA: 0x11A57C8 Offset: 0x11A17C8 VA: 0x11A57C8
	private static void .cctor() { }
}


// Namespace: System.Xml
public sealed class XmlReaderSettings // TypeDefIndex: 2615
{
	// Fields
	private bool useAsync; // 0x10
	private XmlNameTable nameTable; // 0x18
	private XmlResolver xmlResolver; // 0x20
	private int lineNumberOffset; // 0x28
	private int linePositionOffset; // 0x2C
	private ConformanceLevel conformanceLevel; // 0x30
	private bool checkCharacters; // 0x34
	private long maxCharactersInDocument; // 0x38
	private long maxCharactersFromEntities; // 0x40
	private bool ignoreWhitespace; // 0x48
	private bool ignorePIs; // 0x49
	private bool ignoreComments; // 0x4A
	private DtdProcessing dtdProcessing; // 0x4C
	private ValidationType validationType; // 0x50
	private XmlSchemaValidationFlags validationFlags; // 0x54
	private XmlSchemaSet schemas; // 0x58
	private ValidationEventHandler valEventHandler; // 0x60
	private bool closeInput; // 0x68
	private bool isReadOnly; // 0x69
	[CompilerGenerated]
	private bool <IsXmlResolverSet>k__BackingField; // 0x6A
	private static Nullable<bool> s_enableLegacyXmlSettings; // 0x0

	// Properties
	public bool Async { set; }
	public XmlNameTable NameTable { set; }
	public XmlResolver XmlResolver { set; }
	public int LineNumberOffset { set; }
	public int LinePositionOffset { set; }
	public ConformanceLevel ConformanceLevel { set; }
	public bool CheckCharacters { set; }
	public long MaxCharactersInDocument { set; }
	public long MaxCharactersFromEntities { set; }
	public bool IgnoreWhitespace { set; }
	public bool IgnoreProcessingInstructions { set; }
	public bool IgnoreComments { set; }
	public DtdProcessing DtdProcessing { set; }
	public bool CloseInput { set; }
	public ValidationType ValidationType { set; }
	public XmlSchemaValidationFlags ValidationFlags { set; }
	public XmlSchemaSet Schemas { get; set; }

	// Methods

	// RVA: 0x119C0E4 Offset: 0x11980E4 VA: 0x119C0E4
	public void .ctor() { }

	// RVA: 0x119C104 Offset: 0x1198104 VA: 0x119C104
	public void set_Async(bool value) { }

	// RVA: 0x11A58E0 Offset: 0x11A18E0 VA: 0x11A58E0
	public void set_NameTable(XmlNameTable value) { }

	// RVA: 0x11A593C Offset: 0x11A193C VA: 0x11A593C
	public void set_XmlResolver(XmlResolver value) { }

	// RVA: 0x11A59A0 Offset: 0x11A19A0 VA: 0x11A59A0
	public void set_LineNumberOffset(int value) { }

	// RVA: 0x11A59FC Offset: 0x11A19FC VA: 0x11A59FC
	public void set_LinePositionOffset(int value) { }

	// RVA: 0x11A5A58 Offset: 0x11A1A58 VA: 0x11A5A58
	public void set_ConformanceLevel(ConformanceLevel value) { }

	// RVA: 0x11A5B04 Offset: 0x11A1B04 VA: 0x11A5B04
	public void set_CheckCharacters(bool value) { }

	// RVA: 0x11A5B64 Offset: 0x11A1B64 VA: 0x11A5B64
	public void set_MaxCharactersInDocument(long value) { }

	// RVA: 0x11A5C0C Offset: 0x11A1C0C VA: 0x11A5C0C
	public void set_MaxCharactersFromEntities(long value) { }

	// RVA: 0x11A5CB4 Offset: 0x11A1CB4 VA: 0x11A5CB4
	public void set_IgnoreWhitespace(bool value) { }

	// RVA: 0x11A5D14 Offset: 0x11A1D14 VA: 0x11A5D14
	public void set_IgnoreProcessingInstructions(bool value) { }

	// RVA: 0x11A5D74 Offset: 0x11A1D74 VA: 0x11A5D74
	public void set_IgnoreComments(bool value) { }

	// RVA: 0x11A5DD4 Offset: 0x11A1DD4 VA: 0x11A5DD4
	public void set_DtdProcessing(DtdProcessing value) { }

	// RVA: 0x11A5E80 Offset: 0x11A1E80 VA: 0x11A5E80
	public void set_CloseInput(bool value) { }

	// RVA: 0x11A5EE0 Offset: 0x11A1EE0 VA: 0x11A5EE0
	public void set_ValidationType(ValidationType value) { }

	// RVA: 0x11A5F8C Offset: 0x11A1F8C VA: 0x11A5F8C
	public void set_ValidationFlags(XmlSchemaValidationFlags value) { }

	// RVA: 0x11A6038 Offset: 0x11A2038 VA: 0x11A6038
	public XmlSchemaSet get_Schemas() { }

	// RVA: 0x11A609C Offset: 0x11A209C VA: 0x11A609C
	public void set_Schemas(XmlSchemaSet value) { }

	// RVA: 0x119C07C Offset: 0x119807C VA: 0x119C07C
	public XmlReaderSettings Clone() { }

	// RVA: 0x11A4FF0 Offset: 0x11A0FF0 VA: 0x11A4FF0
	internal XmlReader CreateReader(Stream input, Uri baseUri, string baseUriString, XmlParserContext inputContext) { }

	// RVA: 0x11A5224 Offset: 0x11A1224 VA: 0x11A5224
	internal XmlReader CreateReader(TextReader input, string baseUriString, XmlParserContext inputContext) { }

	// RVA: 0x11A582C Offset: 0x11A182C VA: 0x11A582C
	private void CheckReadOnly(string propertyName) { }

	// RVA: 0x11A5824 Offset: 0x11A1824 VA: 0x11A5824
	private void Initialize() { }

	// RVA: 0x11A60F8 Offset: 0x11A20F8 VA: 0x11A60F8
	private void Initialize(XmlResolver resolver) { }

	// RVA: 0x11A6258 Offset: 0x11A2258 VA: 0x11A6258
	private static XmlResolver CreateDefaultResolver() { }

	// RVA: 0x11A56E0 Offset: 0x11A16E0 VA: 0x11A56E0
	internal XmlReader AddValidation(XmlReader reader) { }

	// RVA: 0x11A62AC Offset: 0x11A22AC VA: 0x11A62AC
	private XmlValidatingReaderImpl CreateDtdValidatingReader(XmlReader baseReader) { }

	// RVA: 0x11A6180 Offset: 0x11A2180 VA: 0x11A6180
	internal static bool EnableLegacyXmlSettings() { }
}


// Namespace: System.Xml
public enum XmlSpace // TypeDefIndex: 2616
{
	// Fields
	public int value__; // 0x0
	public const XmlSpace None = 0;
	public const XmlSpace Default = 1;
	public const XmlSpace Preserve = 2;
}


// Namespace: System.Xml
internal class XmlTextEncoder // TypeDefIndex: 2617
{
	// Fields
	private TextWriter textWriter; // 0x10
	private bool inAttribute; // 0x18
	private char quoteChar; // 0x1A
	private StringBuilder attrValue; // 0x20
	private bool cacheAttrValue; // 0x28
	private XmlCharType xmlCharType; // 0x30

	// Properties
	internal string AttributeValue { get; }

	// Methods

	// RVA: 0x11A6324 Offset: 0x11A2324 VA: 0x11A6324
	internal void .ctor(TextWriter textWriter) { }

	// RVA: 0x11A6360 Offset: 0x11A2360 VA: 0x11A6360
	internal void StartAttribute(bool cacheAttrValue) { }

	// RVA: 0x11A63F8 Offset: 0x11A23F8 VA: 0x11A63F8
	internal void EndAttribute() { }

	// RVA: 0x11A6430 Offset: 0x11A2430 VA: 0x11A6430
	internal string get_AttributeValue() { }

	// RVA: 0x11A64A4 Offset: 0x11A24A4 VA: 0x11A64A4
	internal void WriteSurrogateChar(char lowChar, char highChar) { }

	// RVA: 0x11A6550 Offset: 0x11A2550 VA: 0x11A6550
	internal void Write(char[] array, int offset, int count) { }

	// RVA: 0x11A6A50 Offset: 0x11A2A50 VA: 0x11A6A50
	internal void WriteSurrogateCharEntity(char lowChar, char highChar) { }

	// RVA: 0x11A6BD8 Offset: 0x11A2BD8 VA: 0x11A6BD8
	internal void Write(string text) { }

	// RVA: 0x11A70B8 Offset: 0x11A30B8 VA: 0x11A70B8
	internal void WriteRawWithSurrogateChecking(string text) { }

	// RVA: 0x11A72A8 Offset: 0x11A32A8 VA: 0x11A72A8
	internal void WriteRaw(char[] array, int offset, int count) { }

	// RVA: 0x11A73D4 Offset: 0x11A33D4 VA: 0x11A73D4
	internal void WriteCharEntity(char ch) { }

	// RVA: 0x11A75A4 Offset: 0x11A35A4 VA: 0x11A75A4
	internal void WriteEntityRef(string name) { }

	// RVA: 0x11A7010 Offset: 0x11A3010 VA: 0x11A7010
	private void WriteStringFragment(string str, int offset, int count, char[] helperBuffer) { }

	// RVA: 0x11A696C Offset: 0x11A296C VA: 0x11A696C
	private void WriteCharEntityImpl(char ch) { }

	// RVA: 0x11A7510 Offset: 0x11A3510 VA: 0x11A7510
	private void WriteCharEntityImpl(string strVal) { }

	// RVA: 0x11A69E8 Offset: 0x11A29E8 VA: 0x11A69E8
	private void WriteEntityRefImpl(string name) { }
}


// Namespace: System.Xml
public class XmlTextReader : XmlReader, IXmlLineInfo, IXmlNamespaceResolver // TypeDefIndex: 2618
{
	// Fields
	private XmlTextReaderImpl impl; // 0x10

	// Properties
	public override XmlNodeType NodeType { get; }
	public override string Name { get; }
	public override string LocalName { get; }
	public override string NamespaceURI { get; }
	public override string Prefix { get; }
	public override string Value { get; }
	public override int Depth { get; }
	public override string BaseURI { get; }
	public override bool IsEmptyElement { get; }
	public override bool IsDefault { get; }
	public override char QuoteChar { get; }
	public override XmlSpace XmlSpace { get; }
	public override string XmlLang { get; }
	public override int AttributeCount { get; }
	public override bool EOF { get; }
	public override ReadState ReadState { get; }
	public override XmlNameTable NameTable { get; }
	public override bool CanResolveEntity { get; }
	public override bool CanReadValueChunk { get; }
	public int LineNumber { get; }
	public int LinePosition { get; }
	public bool Namespaces { get; }
	public bool Normalization { get; set; }
	public WhitespaceHandling WhitespaceHandling { set; }
	public EntityHandling EntityHandling { set; }
	public XmlResolver XmlResolver { set; }
	internal override XmlNamespaceManager NamespaceManager { get; }
	internal bool XmlValidatingReaderCompatibilityMode { set; }
	internal override IDtdInfo DtdInfo { get; }

	// Methods

	// RVA: 0x11A7610 Offset: 0x11A3610 VA: 0x11A7610
	public void .ctor(Stream input) { }

	// RVA: 0x11A76B4 Offset: 0x11A36B4 VA: 0x11A76B4
	public void .ctor(string url, Stream input, XmlNameTable nt) { }

	// RVA: 0x11A7770 Offset: 0x11A3770 VA: 0x11A7770
	public void .ctor(TextReader input) { }

	// RVA: 0x11A7814 Offset: 0x11A3814 VA: 0x11A7814
	public void .ctor(TextReader input, XmlNameTable nt) { }

	// RVA: 0x11A78C0 Offset: 0x11A38C0 VA: 0x11A78C0 Slot: 6
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x11A78E0 Offset: 0x11A38E0 VA: 0x11A78E0 Slot: 7
	public override string get_Name() { }

	// RVA: 0x11A7900 Offset: 0x11A3900 VA: 0x11A7900 Slot: 8
	public override string get_LocalName() { }

	// RVA: 0x11A7920 Offset: 0x11A3920 VA: 0x11A7920 Slot: 9
	public override string get_NamespaceURI() { }

	// RVA: 0x11A7940 Offset: 0x11A3940 VA: 0x11A7940 Slot: 10
	public override string get_Prefix() { }

	// RVA: 0x11A7960 Offset: 0x11A3960 VA: 0x11A7960 Slot: 11
	public override string get_Value() { }

	// RVA: 0x11A7980 Offset: 0x11A3980 VA: 0x11A7980 Slot: 12
	public override int get_Depth() { }

	// RVA: 0x11A79A0 Offset: 0x11A39A0 VA: 0x11A79A0 Slot: 13
	public override string get_BaseURI() { }

	// RVA: 0x11A79BC Offset: 0x11A39BC VA: 0x11A79BC Slot: 14
	public override bool get_IsEmptyElement() { }

	// RVA: 0x11A79E0 Offset: 0x11A39E0 VA: 0x11A79E0 Slot: 15
	public override bool get_IsDefault() { }

	// RVA: 0x11A7A04 Offset: 0x11A3A04 VA: 0x11A7A04 Slot: 16
	public override char get_QuoteChar() { }

	// RVA: 0x11A7A28 Offset: 0x11A3A28 VA: 0x11A7A28 Slot: 17
	public override XmlSpace get_XmlSpace() { }

	// RVA: 0x11A7A4C Offset: 0x11A3A4C VA: 0x11A7A4C Slot: 18
	public override string get_XmlLang() { }

	// RVA: 0x11A7A70 Offset: 0x11A3A70 VA: 0x11A7A70 Slot: 21
	public override int get_AttributeCount() { }

	// RVA: 0x11A7A8C Offset: 0x11A3A8C VA: 0x11A7A8C Slot: 22
	public override string GetAttribute(string name) { }

	// RVA: 0x11A7AB0 Offset: 0x11A3AB0 VA: 0x11A7AB0 Slot: 23
	public override string GetAttribute(string localName, string namespaceURI) { }

	// RVA: 0x11A7AD4 Offset: 0x11A3AD4 VA: 0x11A7AD4 Slot: 24
	public override string GetAttribute(int i) { }

	// RVA: 0x11A7AF8 Offset: 0x11A3AF8 VA: 0x11A7AF8 Slot: 25
	public override bool MoveToAttribute(string name) { }

	// RVA: 0x11A7B1C Offset: 0x11A3B1C VA: 0x11A7B1C Slot: 26
	public override void MoveToAttribute(int i) { }

	// RVA: 0x11A7B40 Offset: 0x11A3B40 VA: 0x11A7B40 Slot: 27
	public override bool MoveToFirstAttribute() { }

	// RVA: 0x11A7B64 Offset: 0x11A3B64 VA: 0x11A7B64 Slot: 28
	public override bool MoveToNextAttribute() { }

	// RVA: 0x11A7B88 Offset: 0x11A3B88 VA: 0x11A7B88 Slot: 29
	public override bool MoveToElement() { }

	// RVA: 0x11A7BAC Offset: 0x11A3BAC VA: 0x11A7BAC Slot: 30
	public override bool ReadAttributeValue() { }

	// RVA: 0x11A7BD0 Offset: 0x11A3BD0 VA: 0x11A7BD0 Slot: 31
	public override bool Read() { }

	// RVA: 0x11A7BF4 Offset: 0x11A3BF4 VA: 0x11A7BF4 Slot: 32
	public override bool get_EOF() { }

	// RVA: 0x11A7C18 Offset: 0x11A3C18 VA: 0x11A7C18 Slot: 33
	public override void Close() { }

	// RVA: 0x11A7C3C Offset: 0x11A3C3C VA: 0x11A7C3C Slot: 34
	public override ReadState get_ReadState() { }

	// RVA: 0x11A7C58 Offset: 0x11A3C58 VA: 0x11A7C58 Slot: 35
	public override void Skip() { }

	// RVA: 0x11A7C7C Offset: 0x11A3C7C VA: 0x11A7C7C Slot: 36
	public override XmlNameTable get_NameTable() { }

	// RVA: 0x11A7C98 Offset: 0x11A3C98 VA: 0x11A7C98 Slot: 37
	public override string LookupNamespace(string prefix) { }

	// RVA: 0x11A7CD0 Offset: 0x11A3CD0 VA: 0x11A7CD0 Slot: 38
	public override bool get_CanResolveEntity() { }

	// RVA: 0x11A7CD8 Offset: 0x11A3CD8 VA: 0x11A7CD8 Slot: 39
	public override void ResolveEntity() { }

	// RVA: 0x11A7CFC Offset: 0x11A3CFC VA: 0x11A7CFC Slot: 40
	public override bool get_CanReadValueChunk() { }

	// RVA: 0x11A7D04 Offset: 0x11A3D04 VA: 0x11A7D04 Slot: 42
	public override string ReadString() { }

	// RVA: 0x11A7D2C Offset: 0x11A3D2C VA: 0x11A7D2C Slot: 53
	public bool HasLineInfo() { }

	// RVA: 0x11A7D34 Offset: 0x11A3D34 VA: 0x11A7D34 Slot: 54
	public int get_LineNumber() { }

	// RVA: 0x11A7D50 Offset: 0x11A3D50 VA: 0x11A7D50 Slot: 55
	public int get_LinePosition() { }

	// RVA: 0x11A7D6C Offset: 0x11A3D6C VA: 0x11A7D6C Slot: 56
	private IDictionary<string, string> System.Xml.IXmlNamespaceResolver.GetNamespacesInScope(XmlNamespaceScope scope) { }

	// RVA: 0x11A7D88 Offset: 0x11A3D88 VA: 0x11A7D88 Slot: 57
	private string System.Xml.IXmlNamespaceResolver.LookupNamespace(string prefix) { }

	// RVA: 0x11A7DAC Offset: 0x11A3DAC VA: 0x11A7DAC Slot: 58
	private string System.Xml.IXmlNamespaceResolver.LookupPrefix(string namespaceName) { }

	// RVA: 0x11A4D88 Offset: 0x11A0D88 VA: 0x11A4D88
	public bool get_Namespaces() { }

	// RVA: 0x11A7DC8 Offset: 0x11A3DC8 VA: 0x11A7DC8
	public bool get_Normalization() { }

	// RVA: 0x11A7DE4 Offset: 0x11A3DE4 VA: 0x11A7DE4
	public void set_Normalization(bool value) { }

	// RVA: 0x11A7E04 Offset: 0x11A3E04 VA: 0x11A7E04
	public void set_WhitespaceHandling(WhitespaceHandling value) { }

	// RVA: 0x11A7E20 Offset: 0x11A3E20 VA: 0x11A7E20
	public void set_EntityHandling(EntityHandling value) { }

	// RVA: 0x11A7E3C Offset: 0x11A3E3C VA: 0x11A7E3C
	public void set_XmlResolver(XmlResolver value) { }

	// RVA: 0x11A7E58 Offset: 0x11A3E58 VA: 0x11A7E58 Slot: 51
	internal override XmlNamespaceManager get_NamespaceManager() { }

	// RVA: 0x11A7E74 Offset: 0x11A3E74 VA: 0x11A7E74
	internal void set_XmlValidatingReaderCompatibilityMode(bool value) { }

	// RVA: 0x11A7E94 Offset: 0x11A3E94 VA: 0x11A7E94 Slot: 52
	internal override IDtdInfo get_DtdInfo() { }
}


// Namespace: 
private enum XmlTextReaderImpl.ParsingFunction // TypeDefIndex: 2619
{
	// Fields
	public int value__; // 0x0
	public const XmlTextReaderImpl.ParsingFunction ElementContent = 0;
	public const XmlTextReaderImpl.ParsingFunction NoData = 1;
	public const XmlTextReaderImpl.ParsingFunction OpenUrl = 2;
	public const XmlTextReaderImpl.ParsingFunction SwitchToInteractive = 3;
	public const XmlTextReaderImpl.ParsingFunction SwitchToInteractiveXmlDecl = 4;
	public const XmlTextReaderImpl.ParsingFunction DocumentContent = 5;
	public const XmlTextReaderImpl.ParsingFunction MoveToElementContent = 6;
	public const XmlTextReaderImpl.ParsingFunction PopElementContext = 7;
	public const XmlTextReaderImpl.ParsingFunction PopEmptyElementContext = 8;
	public const XmlTextReaderImpl.ParsingFunction ResetAttributesRootLevel = 9;
	public const XmlTextReaderImpl.ParsingFunction Error = 10;
	public const XmlTextReaderImpl.ParsingFunction Eof = 11;
	public const XmlTextReaderImpl.ParsingFunction ReaderClosed = 12;
	public const XmlTextReaderImpl.ParsingFunction EntityReference = 13;
	public const XmlTextReaderImpl.ParsingFunction InIncrementalRead = 14;
	public const XmlTextReaderImpl.ParsingFunction FragmentAttribute = 15;
	public const XmlTextReaderImpl.ParsingFunction ReportEndEntity = 16;
	public const XmlTextReaderImpl.ParsingFunction AfterResolveEntityInContent = 17;
	public const XmlTextReaderImpl.ParsingFunction AfterResolveEmptyEntityInContent = 18;
	public const XmlTextReaderImpl.ParsingFunction XmlDeclarationFragment = 19;
	public const XmlTextReaderImpl.ParsingFunction GoToEof = 20;
	public const XmlTextReaderImpl.ParsingFunction PartialTextValue = 21;
	public const XmlTextReaderImpl.ParsingFunction InReadAttributeValue = 22;
	public const XmlTextReaderImpl.ParsingFunction InReadValueChunk = 23;
	public const XmlTextReaderImpl.ParsingFunction InReadContentAsBinary = 24;
	public const XmlTextReaderImpl.ParsingFunction InReadElementContentAsBinary = 25;
}


// Namespace: 
private enum XmlTextReaderImpl.ParsingMode // TypeDefIndex: 2620
{
	// Fields
	public int value__; // 0x0
	public const XmlTextReaderImpl.ParsingMode Full = 0;
	public const XmlTextReaderImpl.ParsingMode SkipNode = 1;
	public const XmlTextReaderImpl.ParsingMode SkipContent = 2;
}


// Namespace: 
private enum XmlTextReaderImpl.EntityType // TypeDefIndex: 2621
{
	// Fields
	public int value__; // 0x0
	public const XmlTextReaderImpl.EntityType CharacterDec = 0;
	public const XmlTextReaderImpl.EntityType CharacterHex = 1;
	public const XmlTextReaderImpl.EntityType CharacterNamed = 2;
	public const XmlTextReaderImpl.EntityType Expanded = 3;
	public const XmlTextReaderImpl.EntityType Skipped = 4;
	public const XmlTextReaderImpl.EntityType FakeExpanded = 5;
	public const XmlTextReaderImpl.EntityType Unexpanded = 6;
	public const XmlTextReaderImpl.EntityType ExpandedInAttribute = 7;
}


// Namespace: 
private enum XmlTextReaderImpl.EntityExpandType // TypeDefIndex: 2622
{
	// Fields
	public int value__; // 0x0
	public const XmlTextReaderImpl.EntityExpandType All = 0;
	public const XmlTextReaderImpl.EntityExpandType OnlyGeneral = 1;
	public const XmlTextReaderImpl.EntityExpandType OnlyCharacter = 2;
}


// Namespace: 
private enum XmlTextReaderImpl.IncrementalReadState // TypeDefIndex: 2623
{
	// Fields
	public int value__; // 0x0
	public const XmlTextReaderImpl.IncrementalReadState Text = 0;
	public const XmlTextReaderImpl.IncrementalReadState StartTag = 1;
	public const XmlTextReaderImpl.IncrementalReadState PI = 2;
	public const XmlTextReaderImpl.IncrementalReadState CDATA = 3;
	public const XmlTextReaderImpl.IncrementalReadState Comment = 4;
	public const XmlTextReaderImpl.IncrementalReadState Attributes = 5;
	public const XmlTextReaderImpl.IncrementalReadState AttributeValue = 6;
	public const XmlTextReaderImpl.IncrementalReadState ReadData = 7;
	public const XmlTextReaderImpl.IncrementalReadState EndElement = 8;
	public const XmlTextReaderImpl.IncrementalReadState End = 9;
	public const XmlTextReaderImpl.IncrementalReadState ReadValueChunk_OnCachedValue = 10;
	public const XmlTextReaderImpl.IncrementalReadState ReadValueChunk_OnPartialValue = 11;
	public const XmlTextReaderImpl.IncrementalReadState ReadContentAsBinary_OnCachedValue = 12;
	public const XmlTextReaderImpl.IncrementalReadState ReadContentAsBinary_OnPartialValue = 13;
	public const XmlTextReaderImpl.IncrementalReadState ReadContentAsBinary_End = 14;
}


// Namespace: 
private class XmlTextReaderImpl.LaterInitParam // TypeDefIndex: 2624
{
	// Fields
	public bool useAsync; // 0x10
	public Stream inputStream; // 0x18
	public byte[] inputBytes; // 0x20
	public int inputByteCount; // 0x28
	public Uri inputbaseUri; // 0x30
	public string inputUriStr; // 0x38
	public XmlResolver inputUriResolver; // 0x40
	public XmlParserContext inputContext; // 0x48
	public TextReader inputTextReader; // 0x50
	public XmlTextReaderImpl.InitInputType initType; // 0x58

	// Methods

	// RVA: 0x11A7EB0 Offset: 0x11A3EB0 VA: 0x11A7EB0
	public void .ctor() { }
}


// Namespace: 
private enum XmlTextReaderImpl.InitInputType // TypeDefIndex: 2625
{
	// Fields
	public int value__; // 0x0
	public const XmlTextReaderImpl.InitInputType UriString = 0;
	public const XmlTextReaderImpl.InitInputType Stream = 1;
	public const XmlTextReaderImpl.InitInputType TextReader = 2;
	public const XmlTextReaderImpl.InitInputType Invalid = 3;
}


// Namespace: 
private struct XmlTextReaderImpl.ParsingState // TypeDefIndex: 2626
{
	// Fields
	internal char[] chars; // 0x0
	internal int charPos; // 0x8
	internal int charsUsed; // 0xC
	internal Encoding encoding; // 0x10
	internal bool appendMode; // 0x18
	internal Stream stream; // 0x20
	internal Decoder decoder; // 0x28
	internal byte[] bytes; // 0x30
	internal int bytePos; // 0x38
	internal int bytesUsed; // 0x3C
	internal TextReader textReader; // 0x40
	internal int lineNo; // 0x48
	internal int lineStartPos; // 0x4C
	internal string baseUriStr; // 0x50
	internal Uri baseUri; // 0x58
	internal bool isEof; // 0x60
	internal bool isStreamEof; // 0x61
	internal IDtdEntityInfo entity; // 0x68
	internal int entityId; // 0x70
	internal bool eolNormalized; // 0x74
	internal bool entityResolvedManually; // 0x75

	// Properties
	internal int LinePos { get; }

	// Methods

	// RVA: 0x11A7EC0 Offset: 0x11A3EC0 VA: 0x11A7EC0
	internal void Clear() { }

	// RVA: 0x11A7F3C Offset: 0x11A3F3C VA: 0x11A7F3C
	internal void Close(bool closeInput) { }

	// RVA: 0x11A7F74 Offset: 0x11A3F74 VA: 0x11A7F74
	internal int get_LinePos() { }
}


// Namespace: 
private class XmlTextReaderImpl.XmlContext // TypeDefIndex: 2627
{
	// Fields
	internal XmlSpace xmlSpace; // 0x10
	internal string xmlLang; // 0x18
	internal string defaultNamespace; // 0x20
	internal XmlTextReaderImpl.XmlContext previousContext; // 0x28

	// Methods

	// RVA: 0x11A7F84 Offset: 0x11A3F84 VA: 0x11A7F84
	internal void .ctor() { }

	// RVA: 0x11A7FE8 Offset: 0x11A3FE8 VA: 0x11A7FE8
	internal void .ctor(XmlTextReaderImpl.XmlContext previousContext) { }
}


// Namespace: 
private class XmlTextReaderImpl.NoNamespaceManager : XmlNamespaceManager // TypeDefIndex: 2628
{
	// Properties
	public override string DefaultNamespace { get; }

	// Methods

	// RVA: 0x11A8028 Offset: 0x11A4028 VA: 0x11A8028
	public void .ctor() { }

	// RVA: 0x11A8030 Offset: 0x11A4030 VA: 0x11A8030 Slot: 8
	public override string get_DefaultNamespace() { }

	// RVA: 0x11A8078 Offset: 0x11A4078 VA: 0x11A8078 Slot: 9
	public override void PushScope() { }

	// RVA: 0x11A807C Offset: 0x11A407C VA: 0x11A807C Slot: 10
	public override bool PopScope() { }

	// RVA: 0x11A8084 Offset: 0x11A4084 VA: 0x11A8084 Slot: 11
	public override void AddNamespace(string prefix, string uri) { }

	// RVA: 0x11A8088 Offset: 0x11A4088 VA: 0x11A8088 Slot: 12
	public override void RemoveNamespace(string prefix, string uri) { }

	// RVA: 0x11A808C Offset: 0x11A408C VA: 0x11A808C Slot: 13
	public override IEnumerator GetEnumerator() { }

	// RVA: 0x11A8094 Offset: 0x11A4094 VA: 0x11A8094 Slot: 14
	public override IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope) { }

	// RVA: 0x11A809C Offset: 0x11A409C VA: 0x11A809C Slot: 15
	public override string LookupNamespace(string prefix) { }

	// RVA: 0x11A80E4 Offset: 0x11A40E4 VA: 0x11A80E4 Slot: 16
	public override string LookupPrefix(string uri) { }
}


// Namespace: 
internal class XmlTextReaderImpl.DtdParserProxy : IDtdParserAdapterV1, IDtdParserAdapterWithValidation, IDtdParserAdapter // TypeDefIndex: 2629
{
	// Fields
	private XmlTextReaderImpl reader; // 0x10

	// Properties
	private XmlNameTable System.Xml.IDtdParserAdapter.NameTable { get; }
	private IXmlNamespaceResolver System.Xml.IDtdParserAdapter.NamespaceResolver { get; }
	private Uri System.Xml.IDtdParserAdapter.BaseUri { get; }
	private bool System.Xml.IDtdParserAdapter.IsEof { get; }
	private char[] System.Xml.IDtdParserAdapter.ParsingBuffer { get; }
	private int System.Xml.IDtdParserAdapter.ParsingBufferLength { get; }
	private int System.Xml.IDtdParserAdapter.CurrentPosition { get; set; }
	private int System.Xml.IDtdParserAdapter.EntityStackLength { get; }
	private bool System.Xml.IDtdParserAdapter.IsEntityEolNormalized { get; }
	private int System.Xml.IDtdParserAdapter.LineNo { get; }
	private int System.Xml.IDtdParserAdapter.LineStartPosition { get; }
	private bool System.Xml.IDtdParserAdapterWithValidation.DtdValidation { get; }
	private IValidationEventHandling System.Xml.IDtdParserAdapterWithValidation.ValidationEventHandling { get; }
	private bool System.Xml.IDtdParserAdapterV1.Normalization { get; }
	private bool System.Xml.IDtdParserAdapterV1.Namespaces { get; }
	private bool System.Xml.IDtdParserAdapterV1.V1CompatibilityMode { get; }

	// Methods

	// RVA: 0x11A80EC Offset: 0x11A40EC VA: 0x11A80EC
	internal void .ctor(XmlTextReaderImpl reader) { }

	// RVA: 0x11A8114 Offset: 0x11A4114 VA: 0x11A8114 Slot: 9
	private XmlNameTable System.Xml.IDtdParserAdapter.get_NameTable() { }

	// RVA: 0x11A8130 Offset: 0x11A4130 VA: 0x11A8130 Slot: 10
	private IXmlNamespaceResolver System.Xml.IDtdParserAdapter.get_NamespaceResolver() { }

	// RVA: 0x11A814C Offset: 0x11A414C VA: 0x11A814C Slot: 11
	private Uri System.Xml.IDtdParserAdapter.get_BaseUri() { }

	// RVA: 0x11A8168 Offset: 0x11A4168 VA: 0x11A8168 Slot: 18
	private bool System.Xml.IDtdParserAdapter.get_IsEof() { }

	// RVA: 0x11A8184 Offset: 0x11A4184 VA: 0x11A8184 Slot: 12
	private char[] System.Xml.IDtdParserAdapter.get_ParsingBuffer() { }

	// RVA: 0x11A81A0 Offset: 0x11A41A0 VA: 0x11A81A0 Slot: 13
	private int System.Xml.IDtdParserAdapter.get_ParsingBufferLength() { }

	// RVA: 0x11A81BC Offset: 0x11A41BC VA: 0x11A81BC Slot: 14
	private int System.Xml.IDtdParserAdapter.get_CurrentPosition() { }

	// RVA: 0x11A81D8 Offset: 0x11A41D8 VA: 0x11A81D8 Slot: 15
	private void System.Xml.IDtdParserAdapter.set_CurrentPosition(int value) { }

	// RVA: 0x11A81F4 Offset: 0x11A41F4 VA: 0x11A81F4 Slot: 19
	private int System.Xml.IDtdParserAdapter.get_EntityStackLength() { }

	// RVA: 0x11A8210 Offset: 0x11A4210 VA: 0x11A8210 Slot: 20
	private bool System.Xml.IDtdParserAdapter.get_IsEntityEolNormalized() { }

	// RVA: 0x11A822C Offset: 0x11A422C VA: 0x11A822C Slot: 22
	private void System.Xml.IDtdParserAdapter.OnNewLine(int pos) { }

	// RVA: 0x11A8248 Offset: 0x11A4248 VA: 0x11A8248 Slot: 16
	private int System.Xml.IDtdParserAdapter.get_LineNo() { }

	// RVA: 0x11A8264 Offset: 0x11A4264 VA: 0x11A8264 Slot: 17
	private int System.Xml.IDtdParserAdapter.get_LineStartPosition() { }

	// RVA: 0x11A8280 Offset: 0x11A4280 VA: 0x11A8280 Slot: 21
	private int System.Xml.IDtdParserAdapter.ReadData() { }

	// RVA: 0x11A829C Offset: 0x11A429C VA: 0x11A829C Slot: 23
	private int System.Xml.IDtdParserAdapter.ParseNumericCharRef(StringBuilder internalSubsetBuilder) { }

	// RVA: 0x11A82B8 Offset: 0x11A42B8 VA: 0x11A82B8 Slot: 24
	private int System.Xml.IDtdParserAdapter.ParseNamedCharRef(bool expand, StringBuilder internalSubsetBuilder) { }

	// RVA: 0x11A82D8 Offset: 0x11A42D8 VA: 0x11A82D8 Slot: 25
	private void System.Xml.IDtdParserAdapter.ParsePI(StringBuilder sb) { }

	// RVA: 0x11A82F4 Offset: 0x11A42F4 VA: 0x11A82F4 Slot: 26
	private void System.Xml.IDtdParserAdapter.ParseComment(StringBuilder sb) { }

	// RVA: 0x11A8310 Offset: 0x11A4310 VA: 0x11A8310 Slot: 27
	private bool System.Xml.IDtdParserAdapter.PushEntity(IDtdEntityInfo entity, out int entityId) { }

	// RVA: 0x11A832C Offset: 0x11A432C VA: 0x11A832C Slot: 28
	private bool System.Xml.IDtdParserAdapter.PopEntity(out IDtdEntityInfo oldEntity, out int newEntityId) { }

	// RVA: 0x11A8348 Offset: 0x11A4348 VA: 0x11A8348 Slot: 29
	private bool System.Xml.IDtdParserAdapter.PushExternalSubset(string systemId, string publicId) { }

	// RVA: 0x11A8364 Offset: 0x11A4364 VA: 0x11A8364 Slot: 30
	private void System.Xml.IDtdParserAdapter.PushInternalDtd(string baseUri, string internalDtd) { }

	// RVA: 0x11A8380 Offset: 0x11A4380 VA: 0x11A8380 Slot: 33
	private void System.Xml.IDtdParserAdapter.Throw(Exception e) { }

	// RVA: 0x11A839C Offset: 0x11A439C VA: 0x11A839C Slot: 31
	private void System.Xml.IDtdParserAdapter.OnSystemId(string systemId, LineInfo keywordLineInfo, LineInfo systemLiteralLineInfo) { }

	// RVA: 0x11A83B8 Offset: 0x11A43B8 VA: 0x11A83B8 Slot: 32
	private void System.Xml.IDtdParserAdapter.OnPublicId(string publicId, LineInfo keywordLineInfo, LineInfo publicLiteralLineInfo) { }

	// RVA: 0x11A83D4 Offset: 0x11A43D4 VA: 0x11A83D4 Slot: 7
	private bool System.Xml.IDtdParserAdapterWithValidation.get_DtdValidation() { }

	// RVA: 0x11A83F0 Offset: 0x11A43F0 VA: 0x11A83F0 Slot: 8
	private IValidationEventHandling System.Xml.IDtdParserAdapterWithValidation.get_ValidationEventHandling() { }

	// RVA: 0x11A840C Offset: 0x11A440C VA: 0x11A840C Slot: 5
	private bool System.Xml.IDtdParserAdapterV1.get_Normalization() { }

	// RVA: 0x11A8428 Offset: 0x11A4428 VA: 0x11A8428 Slot: 6
	private bool System.Xml.IDtdParserAdapterV1.get_Namespaces() { }

	// RVA: 0x11A8444 Offset: 0x11A4444 VA: 0x11A8444 Slot: 4
	private bool System.Xml.IDtdParserAdapterV1.get_V1CompatibilityMode() { }
}


// Namespace: 
private class XmlTextReaderImpl.NodeData : IComparable // TypeDefIndex: 2630
{
	// Fields
	private static XmlTextReaderImpl.NodeData s_None; // 0x0
	internal XmlNodeType type; // 0x10
	internal string localName; // 0x18
	internal string prefix; // 0x20
	internal string ns; // 0x28
	internal string nameWPrefix; // 0x30
	private string value; // 0x38
	private char[] chars; // 0x40
	private int valueStartPos; // 0x48
	private int valueLength; // 0x4C
	internal LineInfo lineInfo; // 0x50
	internal LineInfo lineInfo2; // 0x58
	internal char quoteChar; // 0x60
	internal int depth; // 0x64
	private bool isEmptyOrDefault; // 0x68
	internal int entityId; // 0x6C
	internal bool xmlContextPushed; // 0x70
	internal XmlTextReaderImpl.NodeData nextAttrValueChunk; // 0x78
	internal object schemaType; // 0x80
	internal object typedValue; // 0x88

	// Properties
	internal static XmlTextReaderImpl.NodeData None { get; }
	internal int LineNo { get; }
	internal int LinePos { get; }
	internal bool IsEmptyElement { get; }
	internal bool IsDefaultAttribute { get; }
	internal bool ValueBuffered { get; }
	internal string StringValue { get; }

	// Methods

	// RVA: 0x11A8460 Offset: 0x11A4460 VA: 0x11A8460
	internal static XmlTextReaderImpl.NodeData get_None() { }

	// RVA: 0x11A84F8 Offset: 0x11A44F8 VA: 0x11A84F8
	internal void .ctor() { }

	// RVA: 0x11A85AC Offset: 0x11A45AC VA: 0x11A85AC
	internal int get_LineNo() { }

	// RVA: 0x11A85B4 Offset: 0x11A45B4 VA: 0x11A85B4
	internal int get_LinePos() { }

	// RVA: 0x11A85BC Offset: 0x11A45BC VA: 0x11A85BC
	internal bool get_IsEmptyElement() { }

	// RVA: 0x11A85E0 Offset: 0x11A45E0 VA: 0x11A85E0
	internal bool get_IsDefaultAttribute() { }

	// RVA: 0x11A8604 Offset: 0x11A4604 VA: 0x11A8604
	internal bool get_ValueBuffered() { }

	// RVA: 0x11A8614 Offset: 0x11A4614 VA: 0x11A8614
	internal string get_StringValue() { }

	// RVA: 0x11A8640 Offset: 0x11A4640 VA: 0x11A8640
	internal void TrimSpacesInValue() { }

	// RVA: 0x11A8520 Offset: 0x11A4520 VA: 0x11A8520
	internal void Clear(XmlNodeType type) { }

	// RVA: 0x11A867C Offset: 0x11A467C VA: 0x11A867C
	internal void ClearName() { }

	// RVA: 0x11A86D0 Offset: 0x11A46D0 VA: 0x11A86D0
	internal void SetLineInfo(int lineNo, int linePos) { }

	// RVA: 0x11A86DC Offset: 0x11A46DC VA: 0x11A86DC
	internal void SetLineInfo2(int lineNo, int linePos) { }

	// RVA: 0x11A86E8 Offset: 0x11A46E8 VA: 0x11A86E8
	internal void SetValueNode(XmlNodeType type, string value) { }

	// RVA: 0x11A8758 Offset: 0x11A4758 VA: 0x11A8758
	internal void SetValueNode(XmlNodeType type, char[] chars, int startPos, int len) { }

	// RVA: 0x11A87D4 Offset: 0x11A47D4 VA: 0x11A87D4
	internal void SetNamedNode(XmlNodeType type, string localName) { }

	// RVA: 0x11A887C Offset: 0x11A487C VA: 0x11A887C
	internal void SetNamedNode(XmlNodeType type, string localName, string prefix, string nameWPrefix) { }

	// RVA: 0x11A8904 Offset: 0x11A4904 VA: 0x11A8904
	internal void SetValue(string value) { }

	// RVA: 0x11A8914 Offset: 0x11A4914 VA: 0x11A8914
	internal void SetValue(char[] chars, int startPos, int len) { }

	// RVA: 0x11A8920 Offset: 0x11A4920 VA: 0x11A8920
	internal void OnBufferInvalidated() { }

	// RVA: 0x11A8958 Offset: 0x11A4958 VA: 0x11A8958
	internal void CopyTo(int valueOffset, StringBuilder sb) { }

	// RVA: 0x11A89D8 Offset: 0x11A49D8 VA: 0x11A89D8
	internal int CopyTo(int valueOffset, char[] buffer, int offset, int length) { }

	// RVA: 0x11A8A38 Offset: 0x11A4A38 VA: 0x11A8A38
	internal string GetNameWPrefix(XmlNameTable nt) { }

	// RVA: 0x11A8A4C Offset: 0x11A4A4C VA: 0x11A8A4C
	internal string CreateNameWPrefix(XmlNameTable nt) { }

	// RVA: 0x11A8AD8 Offset: 0x11A4AD8 VA: 0x11A8AD8 Slot: 4
	private int System.IComparable.CompareTo(object obj) { }
}


// Namespace: 
private class XmlTextReaderImpl.DtdDefaultAttributeInfoToNodeDataComparer : IComparer<object> // TypeDefIndex: 2631
{
	// Fields
	private static IComparer<object> s_instance; // 0x0

	// Methods

	// RVA: 0x11A8BB0 Offset: 0x11A4BB0 VA: 0x11A8BB0 Slot: 4
	public int Compare(object x, object y) { }

	// RVA: 0x11A8EF0 Offset: 0x11A4EF0 VA: 0x11A8EF0
	public void .ctor() { }

	// RVA: 0x11A8EF8 Offset: 0x11A4EF8 VA: 0x11A8EF8
	private static void .cctor() { }
}


// Namespace: 
internal sealed class XmlTextReaderImpl.OnDefaultAttributeUseDelegate : MulticastDelegate // TypeDefIndex: 2632
{
	// Methods

	// RVA: 0x11A8F54 Offset: 0x11A4F54 VA: 0x11A8F54
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x11A9058 Offset: 0x11A5058 VA: 0x11A9058 Slot: 12
	public virtual void Invoke(IDtdDefaultAttributeInfo defaultAttribute, XmlTextReaderImpl coreReader) { }
}


// Namespace: System.Xml
internal class XmlTextReaderImpl : XmlReader, IXmlLineInfo, IXmlNamespaceResolver // TypeDefIndex: 2633
{
	// Fields
	private readonly bool useAsync; // 0x10
	private XmlTextReaderImpl.LaterInitParam laterInitParam; // 0x18
	private XmlCharType xmlCharType; // 0x20
	private XmlTextReaderImpl.ParsingState ps; // 0x28
	private XmlTextReaderImpl.ParsingFunction parsingFunction; // 0xA0
	private XmlTextReaderImpl.ParsingFunction nextParsingFunction; // 0xA4
	private XmlTextReaderImpl.ParsingFunction nextNextParsingFunction; // 0xA8
	private XmlTextReaderImpl.NodeData[] nodes; // 0xB0
	private XmlTextReaderImpl.NodeData curNode; // 0xB8
	private int index; // 0xC0
	private int curAttrIndex; // 0xC4
	private int attrCount; // 0xC8
	private int attrHashtable; // 0xCC
	private int attrDuplWalkCount; // 0xD0
	private bool attrNeedNamespaceLookup; // 0xD4
	private bool fullAttrCleanup; // 0xD5
	private XmlTextReaderImpl.NodeData[] attrDuplSortingArray; // 0xD8
	private XmlNameTable nameTable; // 0xE0
	private bool nameTableFromSettings; // 0xE8
	private XmlResolver xmlResolver; // 0xF0
	private string url; // 0xF8
	private bool normalize; // 0x100
	private bool supportNamespaces; // 0x101
	private WhitespaceHandling whitespaceHandling; // 0x104
	private DtdProcessing dtdProcessing; // 0x108
	private EntityHandling entityHandling; // 0x10C
	private bool ignorePIs; // 0x110
	private bool ignoreComments; // 0x111
	private bool checkCharacters; // 0x112
	private int lineNumberOffset; // 0x114
	private int linePositionOffset; // 0x118
	private bool closeInput; // 0x11C
	private long maxCharactersInDocument; // 0x120
	private long maxCharactersFromEntities; // 0x128
	private bool v1Compat; // 0x130
	private XmlNamespaceManager namespaceManager; // 0x138
	private string lastPrefix; // 0x140
	private XmlTextReaderImpl.XmlContext xmlContext; // 0x148
	private XmlTextReaderImpl.ParsingState[] parsingStatesStack; // 0x150
	private int parsingStatesStackTop; // 0x158
	private string reportedBaseUri; // 0x160
	private Encoding reportedEncoding; // 0x168
	private IDtdInfo dtdInfo; // 0x170
	private XmlNodeType fragmentType; // 0x178
	private XmlParserContext fragmentParserContext; // 0x180
	private bool fragment; // 0x188
	private IncrementalReadDecoder incReadDecoder; // 0x190
	private XmlTextReaderImpl.IncrementalReadState incReadState; // 0x198
	private LineInfo incReadLineInfo; // 0x19C
	private int incReadDepth; // 0x1A4
	private int incReadLeftStartPos; // 0x1A8
	private int incReadLeftEndPos; // 0x1AC
	private int attributeValueBaseEntityId; // 0x1B0
	private bool emptyEntityInAttributeResolved; // 0x1B4
	private IValidationEventHandling validationEventHandling; // 0x1B8
	private XmlTextReaderImpl.OnDefaultAttributeUseDelegate onDefaultAttributeUse; // 0x1C0
	private bool validatingReaderCompatFlag; // 0x1C8
	private bool addDefaultAttributesAndNormalize; // 0x1C9
	private StringBuilder stringBuilder; // 0x1D0
	private bool rootElementParsed; // 0x1D8
	private bool standalone; // 0x1D9
	private int nextEntityId; // 0x1DC
	private XmlTextReaderImpl.ParsingMode parsingMode; // 0x1E0
	private ReadState readState; // 0x1E4
	private IDtdEntityInfo lastEntity; // 0x1E8
	private bool afterResetState; // 0x1F0
	private int documentStartBytePos; // 0x1F4
	private int readValueOffset; // 0x1F8
	private long charactersInDocument; // 0x200
	private long charactersFromEntities; // 0x208
	private Dictionary<IDtdEntityInfo, IDtdEntityInfo> currentEntities; // 0x210
	private bool disableUndeclaredEntityCheck; // 0x218
	private XmlReader outerReader; // 0x220
	private bool xmlResolverIsSet; // 0x228
	private string Xml; // 0x230
	private string XmlNs; // 0x238
	private Task<Tuple<int, int, int, bool>> parseText_dummyTask; // 0x240

	// Properties
	public override XmlReaderSettings Settings { get; }
	public override XmlNodeType NodeType { get; }
	public override string Name { get; }
	public override string LocalName { get; }
	public override string NamespaceURI { get; }
	public override string Prefix { get; }
	public override string Value { get; }
	public override int Depth { get; }
	public override string BaseURI { get; }
	public override bool IsEmptyElement { get; }
	public override bool IsDefault { get; }
	public override char QuoteChar { get; }
	public override XmlSpace XmlSpace { get; }
	public override string XmlLang { get; }
	public override ReadState ReadState { get; }
	public override bool EOF { get; }
	public override XmlNameTable NameTable { get; }
	public override bool CanResolveEntity { get; }
	public override int AttributeCount { get; }
	public override bool CanReadValueChunk { get; }
	public int LineNumber { get; }
	public int LinePosition { get; }
	internal bool Namespaces { set; }
	internal bool Normalization { set; }
	internal WhitespaceHandling WhitespaceHandling { set; }
	internal EntityHandling EntityHandling { set; }
	internal XmlResolver XmlResolver { set; }
	internal bool DtdParserProxy_DtdValidation { get; }
	internal Uri DtdParserProxy_BaseUri { get; }
	internal bool DtdParserProxy_IsEof { get; }
	internal char[] DtdParserProxy_ParsingBuffer { get; }
	internal int DtdParserProxy_ParsingBufferLength { get; }
	internal int DtdParserProxy_CurrentPosition { get; set; }
	internal int DtdParserProxy_EntityStackLength { get; }
	internal bool DtdParserProxy_IsEntityEolNormalized { get; }
	internal int DtdParserProxy_LineNo { get; }
	internal int DtdParserProxy_LineStartPosition { get; }
	private bool IsResolverNull { get; }
	private bool InAttributeValueIterator { get; }
	private bool DtdValidation { get; }
	private bool InEntity { get; }
	internal override IDtdInfo DtdInfo { get; }
	internal IValidationEventHandling ValidationEventHandling { set; }
	internal bool XmlValidatingReaderCompatibilityMode { set; }
	internal object InternalSchemaType { set; }
	internal object InternalTypedValue { get; set; }
	internal override XmlNamespaceManager NamespaceManager { get; }

	// Methods

	// RVA: 0x10EAE74 Offset: 0x10E6E74 VA: 0x10EAE74
	internal void .ctor(XmlNameTable nt) { }

	// RVA: 0x10EB1F4 Offset: 0x10E71F4 VA: 0x10EB1F4
	private void .ctor(XmlResolver resolver, XmlReaderSettings settings, XmlParserContext context) { }

	// RVA: 0x10EB86C Offset: 0x10E786C VA: 0x10EB86C
	internal void .ctor(Stream input) { }

	// RVA: 0x10EB8FC Offset: 0x10E78FC VA: 0x10EB8FC
	internal void .ctor(string url, Stream input, XmlNameTable nt) { }

	// RVA: 0x10EBA5C Offset: 0x10E7A5C VA: 0x10EBA5C
	internal void .ctor(TextReader input) { }

	// RVA: 0x10EBBB4 Offset: 0x10E7BB4 VA: 0x10EBBB4
	internal void .ctor(TextReader input, XmlNameTable nt) { }

	// RVA: 0x10EBAEC Offset: 0x10E7AEC VA: 0x10EBAEC
	internal void .ctor(string url, TextReader input, XmlNameTable nt) { }

	// RVA: 0x10EBC28 Offset: 0x10E7C28 VA: 0x10EBC28
	internal void .ctor(string xmlFragment, XmlNodeType fragType, XmlParserContext context) { }

	// RVA: 0x10EBFEC Offset: 0x10E7FEC VA: 0x10EBFEC
	internal void .ctor(string xmlFragment, XmlParserContext context) { }

	// RVA: 0x10EC148 Offset: 0x10E8148 VA: 0x10EC148
	private void FinishInitUriString() { }

	// RVA: 0x10EC720 Offset: 0x10E8720 VA: 0x10EC720
	internal void .ctor(Stream stream, byte[] bytes, int byteCount, XmlReaderSettings settings, Uri baseUri, string baseUriStr, XmlParserContext context, bool closeInput) { }

	// RVA: 0x10EC9C0 Offset: 0x10E89C0 VA: 0x10EC9C0
	private void FinishInitStream() { }

	// RVA: 0x10ECA40 Offset: 0x10E8A40 VA: 0x10ECA40
	internal void .ctor(TextReader input, XmlReaderSettings settings, string baseUriStr, XmlParserContext context) { }

	// RVA: 0x10ECB28 Offset: 0x10E8B28 VA: 0x10ECB28
	private void FinishInitTextReader() { }

	// RVA: 0x10ECB8C Offset: 0x10E8B8C VA: 0x10ECB8C
	internal void .ctor(string xmlFragment, XmlParserContext context, XmlReaderSettings settings) { }

	// RVA: 0x10ECC30 Offset: 0x10E8C30 VA: 0x10ECC30 Slot: 5
	public override XmlReaderSettings get_Settings() { }

	// RVA: 0x10ECDA4 Offset: 0x10E8DA4 VA: 0x10ECDA4 Slot: 6
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x10ECDC0 Offset: 0x10E8DC0 VA: 0x10ECDC0 Slot: 7
	public override string get_Name() { }

	// RVA: 0x10ECDE4 Offset: 0x10E8DE4 VA: 0x10ECDE4 Slot: 8
	public override string get_LocalName() { }

	// RVA: 0x10ECE00 Offset: 0x10E8E00 VA: 0x10ECE00 Slot: 9
	public override string get_NamespaceURI() { }

	// RVA: 0x10ECE1C Offset: 0x10E8E1C VA: 0x10ECE1C Slot: 10
	public override string get_Prefix() { }

	// RVA: 0x10ECE38 Offset: 0x10E8E38 VA: 0x10ECE38 Slot: 11
	public override string get_Value() { }

	// RVA: 0x10ED048 Offset: 0x10E9048 VA: 0x10ED048 Slot: 12
	public override int get_Depth() { }

	// RVA: 0x10ED064 Offset: 0x10E9064 VA: 0x10ED064 Slot: 13
	public override string get_BaseURI() { }

	// RVA: 0x10ED06C Offset: 0x10E906C VA: 0x10ED06C Slot: 14
	public override bool get_IsEmptyElement() { }

	// RVA: 0x10ED088 Offset: 0x10E9088 VA: 0x10ED088 Slot: 15
	public override bool get_IsDefault() { }

	// RVA: 0x10ED0A4 Offset: 0x10E90A4 VA: 0x10ED0A4 Slot: 16
	public override char get_QuoteChar() { }

	// RVA: 0x10ED0D4 Offset: 0x10E90D4 VA: 0x10ED0D4 Slot: 17
	public override XmlSpace get_XmlSpace() { }

	// RVA: 0x10ED0F0 Offset: 0x10E90F0 VA: 0x10ED0F0 Slot: 18
	public override string get_XmlLang() { }

	// RVA: 0x10ED10C Offset: 0x10E910C VA: 0x10ED10C Slot: 34
	public override ReadState get_ReadState() { }

	// RVA: 0x10ED114 Offset: 0x10E9114 VA: 0x10ED114 Slot: 32
	public override bool get_EOF() { }

	// RVA: 0x10ED124 Offset: 0x10E9124 VA: 0x10ED124 Slot: 36
	public override XmlNameTable get_NameTable() { }

	// RVA: 0x10ED12C Offset: 0x10E912C VA: 0x10ED12C Slot: 38
	public override bool get_CanResolveEntity() { }

	// RVA: 0x10ED134 Offset: 0x10E9134 VA: 0x10ED134 Slot: 21
	public override int get_AttributeCount() { }

	// RVA: 0x10ED13C Offset: 0x10E913C VA: 0x10ED13C Slot: 22
	public override string GetAttribute(string name) { }

	// RVA: 0x10ED36C Offset: 0x10E936C VA: 0x10ED36C Slot: 23
	public override string GetAttribute(string localName, string namespaceURI) { }

	// RVA: 0x10ED4E8 Offset: 0x10E94E8 VA: 0x10ED4E8 Slot: 24
	public override string GetAttribute(int i) { }

	// RVA: 0x10ED584 Offset: 0x10E9584 VA: 0x10ED584 Slot: 25
	public override bool MoveToAttribute(string name) { }

	// RVA: 0x10ED704 Offset: 0x10E9704 VA: 0x10ED704 Slot: 26
	public override void MoveToAttribute(int i) { }

	// RVA: 0x10ED7CC Offset: 0x10E97CC VA: 0x10ED7CC Slot: 27
	public override bool MoveToFirstAttribute() { }

	// RVA: 0x10ED844 Offset: 0x10E9844 VA: 0x10ED844 Slot: 28
	public override bool MoveToNextAttribute() { }

	// RVA: 0x10ED8DC Offset: 0x10E98DC VA: 0x10ED8DC Slot: 29
	public override bool MoveToElement() { }

	// RVA: 0x10ED964 Offset: 0x10E9964 VA: 0x10ED964
	private void FinishInit() { }

	// RVA: 0x10ED9AC Offset: 0x10E99AC VA: 0x10ED9AC Slot: 31
	public override bool Read() { }

	// RVA: 0x10EFA6C Offset: 0x10EBA6C VA: 0x10EFA6C Slot: 33
	public override void Close() { }

	// RVA: 0x10EFB2C Offset: 0x10EBB2C VA: 0x10EFB2C Slot: 35
	public override void Skip() { }

	// RVA: 0x10EFCAC Offset: 0x10EBCAC VA: 0x10EFCAC Slot: 37
	public override string LookupNamespace(string prefix) { }

	// RVA: 0x10EFCE4 Offset: 0x10EBCE4 VA: 0x10EFCE4 Slot: 30
	public override bool ReadAttributeValue() { }

	// RVA: 0x10F03B8 Offset: 0x10EC3B8 VA: 0x10F03B8 Slot: 39
	public override void ResolveEntity() { }

	// RVA: 0x10F0A9C Offset: 0x10ECA9C VA: 0x10F0A9C
	internal void MoveOffEntityReference() { }

	// RVA: 0x10F0B4C Offset: 0x10ECB4C VA: 0x10F0B4C Slot: 42
	public override string ReadString() { }

	// RVA: 0x10F0B68 Offset: 0x10ECB68 VA: 0x10F0B68 Slot: 40
	public override bool get_CanReadValueChunk() { }

	// RVA: 0x10F0B70 Offset: 0x10ECB70 VA: 0x10F0B70 Slot: 41
	public override int ReadValueChunk(char[] buffer, int index, int count) { }

	// RVA: 0x10F159C Offset: 0x10ED59C VA: 0x10F159C Slot: 53
	public bool HasLineInfo() { }

	// RVA: 0x10F15A4 Offset: 0x10ED5A4 VA: 0x10F15A4 Slot: 54
	public int get_LineNumber() { }

	// RVA: 0x10F15C0 Offset: 0x10ED5C0 VA: 0x10F15C0 Slot: 55
	public int get_LinePosition() { }

	// RVA: 0x10F15DC Offset: 0x10ED5DC VA: 0x10F15DC Slot: 56
	private IDictionary<string, string> System.Xml.IXmlNamespaceResolver.GetNamespacesInScope(XmlNamespaceScope scope) { }

	// RVA: 0x10F1624 Offset: 0x10ED624 VA: 0x10F1624 Slot: 57
	private string System.Xml.IXmlNamespaceResolver.LookupNamespace(string prefix) { }

	// RVA: 0x10F1634 Offset: 0x10ED634 VA: 0x10F1634 Slot: 58
	private string System.Xml.IXmlNamespaceResolver.LookupPrefix(string namespaceName) { }

	// RVA: 0x10F1600 Offset: 0x10ED600 VA: 0x10F1600
	internal IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope) { }

	// RVA: 0x10F1658 Offset: 0x10ED658 VA: 0x10F1658
	internal string LookupPrefix(string namespaceName) { }

	// RVA: 0x10F167C Offset: 0x10ED67C VA: 0x10F167C
	internal void set_Namespaces(bool value) { }

	// RVA: 0x10F1838 Offset: 0x10ED838 VA: 0x10F1838
	internal void set_Normalization(bool value) { }

	// RVA: 0x10F1954 Offset: 0x10ED954 VA: 0x10F1954
	internal void set_WhitespaceHandling(WhitespaceHandling value) { }

	// RVA: 0x10F1A1C Offset: 0x10EDA1C VA: 0x10F1A1C
	internal void set_EntityHandling(EntityHandling value) { }

	// RVA: 0x10F1AA0 Offset: 0x10EDAA0 VA: 0x10F1AA0
	internal void set_XmlResolver(XmlResolver value) { }

	// RVA: 0x10F1AFC Offset: 0x10EDAFC VA: 0x10F1AFC
	internal bool get_DtdParserProxy_DtdValidation() { }

	// RVA: 0x10F1B1C Offset: 0x10EDB1C VA: 0x10F1B1C
	internal Uri get_DtdParserProxy_BaseUri() { }

	// RVA: 0x10F1BC0 Offset: 0x10EDBC0 VA: 0x10F1BC0
	internal bool get_DtdParserProxy_IsEof() { }

	// RVA: 0x10F1BC8 Offset: 0x10EDBC8 VA: 0x10F1BC8
	internal char[] get_DtdParserProxy_ParsingBuffer() { }

	// RVA: 0x10F1BD0 Offset: 0x10EDBD0 VA: 0x10F1BD0
	internal int get_DtdParserProxy_ParsingBufferLength() { }

	// RVA: 0x10F1BD8 Offset: 0x10EDBD8 VA: 0x10F1BD8
	internal int get_DtdParserProxy_CurrentPosition() { }

	// RVA: 0x10F1BE0 Offset: 0x10EDBE0 VA: 0x10F1BE0
	internal void set_DtdParserProxy_CurrentPosition(int value) { }

	// RVA: 0x10F1BE8 Offset: 0x10EDBE8 VA: 0x10F1BE8
	internal int get_DtdParserProxy_EntityStackLength() { }

	// RVA: 0x10F1BF4 Offset: 0x10EDBF4 VA: 0x10F1BF4
	internal bool get_DtdParserProxy_IsEntityEolNormalized() { }

	// RVA: 0x10F1BFC Offset: 0x10EDBFC VA: 0x10F1BFC
	internal void DtdParserProxy_OnNewLine(int pos) { }

	// RVA: 0x10F1C24 Offset: 0x10EDC24 VA: 0x10F1C24
	internal int get_DtdParserProxy_LineNo() { }

	// RVA: 0x10F1C2C Offset: 0x10EDC2C VA: 0x10F1C2C
	internal int get_DtdParserProxy_LineStartPosition() { }

	// RVA: 0x10F1C34 Offset: 0x10EDC34 VA: 0x10F1C34
	internal int DtdParserProxy_ReadData() { }

	// RVA: 0x10F2064 Offset: 0x10EE064 VA: 0x10F2064
	internal int DtdParserProxy_ParseNumericCharRef(StringBuilder internalSubsetBuilder) { }

	// RVA: 0x10F2130 Offset: 0x10EE130 VA: 0x10F2130
	internal int DtdParserProxy_ParseNamedCharRef(bool expand, StringBuilder internalSubsetBuilder) { }

	// RVA: 0x10F219C Offset: 0x10EE19C VA: 0x10F219C
	internal void DtdParserProxy_ParsePI(StringBuilder sb) { }

	// RVA: 0x10F2550 Offset: 0x10EE550 VA: 0x10F2550
	internal void DtdParserProxy_ParseComment(StringBuilder sb) { }

	// RVA: 0x10F28D0 Offset: 0x10EE8D0 VA: 0x10F28D0
	private bool get_IsResolverNull() { }

	// RVA: 0x10F28E0 Offset: 0x10EE8E0 VA: 0x10F28E0
	private XmlResolver GetTempResolver() { }

	// RVA: 0x10F2940 Offset: 0x10EE940 VA: 0x10F2940
	internal bool DtdParserProxy_PushEntity(IDtdEntityInfo entity, out int entityId) { }

	// RVA: 0x10F30DC Offset: 0x10EF0DC VA: 0x10F30DC
	internal bool DtdParserProxy_PopEntity(out IDtdEntityInfo oldEntity, out int newEntityId) { }

	// RVA: 0x10F3178 Offset: 0x10EF178 VA: 0x10F3178
	internal bool DtdParserProxy_PushExternalSubset(string systemId, string publicId) { }

	// RVA: 0x10F386C Offset: 0x10EF86C VA: 0x10F386C
	internal void DtdParserProxy_PushInternalDtd(string baseUri, string internalDtd) { }

	// RVA: 0x10F3AE0 Offset: 0x10EFAE0 VA: 0x10F3AE0
	internal void DtdParserProxy_Throw(Exception e) { }

	// RVA: 0x10F3B70 Offset: 0x10EFB70 VA: 0x10F3B70
	internal void DtdParserProxy_OnSystemId(string systemId, LineInfo keywordLineInfo, LineInfo systemLiteralLineInfo) { }

	// RVA: 0x10F3C78 Offset: 0x10EFC78 VA: 0x10F3C78
	internal void DtdParserProxy_OnPublicId(string publicId, LineInfo keywordLineInfo, LineInfo publicLiteralLineInfo) { }

	// RVA: 0x10F3D04 Offset: 0x10EFD04 VA: 0x10F3D04
	private void Throw(int pos, string res, string arg) { }

	// RVA: 0x10F3DAC Offset: 0x10EFDAC VA: 0x10F3DAC
	private void Throw(int pos, string res, string[] args) { }

	// RVA: 0x10F3E54 Offset: 0x10EFE54 VA: 0x10F3E54
	private void Throw(int pos, string res) { }

	// RVA: 0x10EC96C Offset: 0x10E896C VA: 0x10EC96C
	private void Throw(string res) { }

	// RVA: 0x10F3EB0 Offset: 0x10EFEB0 VA: 0x10F3EB0
	private void Throw(string res, int lineNo, int linePos) { }

	// RVA: 0x10F3D18 Offset: 0x10EFD18 VA: 0x10F3D18
	private void Throw(string res, string arg) { }

	// RVA: 0x10F3F50 Offset: 0x10EFF50 VA: 0x10F3F50
	private void Throw(string res, string arg, int lineNo, int linePos) { }

	// RVA: 0x10F3DC0 Offset: 0x10EFDC0 VA: 0x10F3DC0
	private void Throw(string res, string[] args) { }

	// RVA: 0x10F3FD4 Offset: 0x10EFFD4 VA: 0x10F3FD4
	private void Throw(string res, string arg, Exception innerException) { }

	// RVA: 0x10F4054 Offset: 0x10F0054 VA: 0x10F4054
	private void Throw(string res, string[] args, Exception innerException) { }

	// RVA: 0x10F3AE8 Offset: 0x10EFAE8 VA: 0x10F3AE8
	private void Throw(Exception e) { }

	// RVA: 0x10F4108 Offset: 0x10F0108 VA: 0x10F4108
	private void ReThrow(Exception e, int lineNo, int linePos) { }

	// RVA: 0x10EF868 Offset: 0x10EB868 VA: 0x10EF868
	private void ThrowWithoutLineInfo(string res) { }

	// RVA: 0x10F41A8 Offset: 0x10F01A8 VA: 0x10F41A8
	private void ThrowWithoutLineInfo(string res, string arg) { }

	// RVA: 0x10F4218 Offset: 0x10F0218 VA: 0x10F4218
	private void ThrowWithoutLineInfo(string res, string[] args, Exception innerException) { }

	// RVA: 0x10F429C Offset: 0x10F029C VA: 0x10F429C
	private void ThrowInvalidChar(char[] data, int length, int invCharPos) { }

	// RVA: 0x10F40F4 Offset: 0x10F00F4 VA: 0x10F40F4
	private void SetErrorState() { }

	// RVA: 0x10F282C Offset: 0x10EE82C VA: 0x10F282C
	private void SendValidationEvent(XmlSeverityType severity, string code, string arg, int lineNo, int linePos) { }

	// RVA: 0x10F430C Offset: 0x10F030C VA: 0x10F430C
	private void SendValidationEvent(XmlSeverityType severity, XmlSchemaException exception) { }

	// RVA: 0x10ED640 Offset: 0x10E9640 VA: 0x10ED640
	private bool get_InAttributeValueIterator() { }

	// RVA: 0x10ED664 Offset: 0x10E9664 VA: 0x10ED664
	private void FinishAttributeValueIterator() { }

	// RVA: 0x10F1B0C Offset: 0x10EDB0C VA: 0x10F1B0C
	private bool get_DtdValidation() { }

	// RVA: 0x10EB9CC Offset: 0x10E79CC VA: 0x10EB9CC
	private void InitStreamInput(Stream stream, Encoding encoding) { }

	// RVA: 0x10EBA40 Offset: 0x10E7A40 VA: 0x10EBA40
	private void InitStreamInput(string baseUriStr, Stream stream, Encoding encoding) { }

	// RVA: 0x10F4500 Offset: 0x10F0500 VA: 0x10F4500
	private void InitStreamInput(Uri baseUri, Stream stream, Encoding encoding) { }

	// RVA: 0x10F4560 Offset: 0x10F0560 VA: 0x10F4560
	private void InitStreamInput(Uri baseUri, string baseUriStr, Stream stream, Encoding encoding) { }

	// RVA: 0x10EC43C Offset: 0x10E843C VA: 0x10EC43C
	private void InitStreamInput(Uri baseUri, string baseUriStr, Stream stream, byte[] bytes, int byteCount, Encoding encoding) { }

	// RVA: 0x10EBC1C Offset: 0x10E7C1C VA: 0x10EBC1C
	private void InitTextReaderInput(string baseUriStr, TextReader input) { }

	// RVA: 0x10F48D0 Offset: 0x10F08D0 VA: 0x10F48D0
	private void InitTextReaderInput(string baseUriStr, Uri baseUri, TextReader input) { }

	// RVA: 0x10EBD2C Offset: 0x10E7D2C VA: 0x10EBD2C
	private void InitStringInput(string baseUriStr, Encoding originalEncoding, string str) { }

	// RVA: 0x10EBDF8 Offset: 0x10E7DF8 VA: 0x10EBDF8
	private void InitFragmentReader(XmlNodeType fragmentType, XmlParserContext parserContext, bool allowXmlDeclFragment) { }

	// RVA: 0x10EC6B4 Offset: 0x10E86B4 VA: 0x10EC6B4
	private void ProcessDtdFromParserContext(XmlParserContext context) { }

	// RVA: 0x10EE56C Offset: 0x10EA56C VA: 0x10EE56C
	private void OpenUrl() { }

	// RVA: 0x10F4BA4 Offset: 0x10F0BA4 VA: 0x10F4BA4
	private void OpenUrlDelegate(object xmlResolver) { }

	// RVA: 0x10F4570 Offset: 0x10F0570 VA: 0x10F4570
	private Encoding DetectEncoding() { }

	// RVA: 0x10F4798 Offset: 0x10F0798 VA: 0x10F4798
	private void SetupEncoding(Encoding encoding) { }

	// RVA: 0x10F4CC8 Offset: 0x10F0CC8 VA: 0x10F4CC8
	private void SwitchEncoding(Encoding newEncoding) { }

	// RVA: 0x10F4E64 Offset: 0x10F0E64 VA: 0x10F4E64
	private Encoding CheckEncoding(string newEncodingName) { }

	// RVA: 0x10F4DB8 Offset: 0x10F0DB8 VA: 0x10F4DB8
	private void UnDecodeChars() { }

	// RVA: 0x10F51A8 Offset: 0x10F11A8 VA: 0x10F51A8
	private void SwitchEncodingToUTF8() { }

	// RVA: 0x10F1C38 Offset: 0x10EDC38 VA: 0x10F1C38
	private int ReadData() { }

	// RVA: 0x10F5214 Offset: 0x10F1214 VA: 0x10F5214
	private int GetChars(int maxCharsCount) { }

	// RVA: 0x10F532C Offset: 0x10F132C VA: 0x10F532C
	private void InvalidCharRecovery(ref int bytesCount, out int charsCount) { }

	// RVA: 0x10EFA74 Offset: 0x10EBA74 VA: 0x10EFA74
	internal void Close(bool closeInput) { }

	// RVA: 0x10F5514 Offset: 0x10F1514 VA: 0x10F5514
	private void ShiftBuffer(int sourcePos, int destPos, int count) { }

	// RVA: 0x10EE6F8 Offset: 0x10EA6F8 VA: 0x10EE6F8
	private bool ParseXmlDeclaration(bool isTextDecl) { }

	// RVA: 0x10EE07C Offset: 0x10EA07C VA: 0x10EE07C
	private bool ParseDocumentContent() { }

	// RVA: 0x10EDD44 Offset: 0x10E9D44 VA: 0x10EDD44
	private bool ParseElementContent() { }

	// RVA: 0x10F6A40 Offset: 0x10F2A40 VA: 0x10F6A40
	private void ThrowUnclosedElements() { }

	// RVA: 0x10F59A8 Offset: 0x10F19A8 VA: 0x10F59A8
	private void ParseElement() { }

	// RVA: 0x10F720C Offset: 0x10F320C VA: 0x10F720C
	private void AddDefaultAttributesAndNormalize() { }

	// RVA: 0x10F6654 Offset: 0x10F2654 VA: 0x10F6654
	private void ParseEndElement() { }

	// RVA: 0x10F8318 Offset: 0x10F4318 VA: 0x10F8318
	private void ThrowTagMismatch(XmlTextReaderImpl.NodeData startTag) { }

	// RVA: 0x10F6BE8 Offset: 0x10F2BE8 VA: 0x10F6BE8
	private void ParseAttributes() { }

	// RVA: 0x10F7BF4 Offset: 0x10F3BF4 VA: 0x10F7BF4
	private void ElementNamespaceLookup() { }

	// RVA: 0x10F8274 Offset: 0x10F4274 VA: 0x10F8274
	private void AttributeNamespaceLookup() { }

	// RVA: 0x10F93FC Offset: 0x10F53FC VA: 0x10F93FC
	private void AttributeDuplCheck() { }

	// RVA: 0x10F9044 Offset: 0x10F5044 VA: 0x10F9044
	private void OnDefaultNamespaceDecl(XmlTextReaderImpl.NodeData attr) { }

	// RVA: 0x10F9140 Offset: 0x10F5140 VA: 0x10F9140
	private void OnNamespaceDecl(XmlTextReaderImpl.NodeData attr) { }

	// RVA: 0x10F9210 Offset: 0x10F5210 VA: 0x10F9210
	private void OnXmlReservedAttribute(XmlTextReaderImpl.NodeData attr) { }

	// RVA: 0x10F8704 Offset: 0x10F4704 VA: 0x10F8704
	private void ParseAttributeValueSlow(int curPos, char quoteChar, XmlTextReaderImpl.NodeData attr) { }

	// RVA: 0x10F9B04 Offset: 0x10F5B04 VA: 0x10F9B04
	private void AddAttributeChunkToList(XmlTextReaderImpl.NodeData attr, XmlTextReaderImpl.NodeData chunk, ref XmlTextReaderImpl.NodeData lastChunk) { }

	// RVA: 0x10F60E4 Offset: 0x10F20E4 VA: 0x10F60E4
	private bool ParseText() { }

	// RVA: 0x10F0FB0 Offset: 0x10ECFB0 VA: 0x10F0FB0
	private bool ParseText(out int startPos, out int endPos, ref int outOrChars) { }

	// RVA: 0x10ECE80 Offset: 0x10E8E80 VA: 0x10ECE80
	private void FinishPartialValue() { }

	// RVA: 0x10ECF38 Offset: 0x10E8F38 VA: 0x10ECF38
	private void FinishOtherValueIterator() { }

	// RVA: 0x10EF8F4 Offset: 0x10EB8F4 VA: 0x10EF8F4
	private void SkipPartialTextValue() { }

	// RVA: 0x10EF934 Offset: 0x10EB934 VA: 0x10EF934
	private void FinishReadValueChunk() { }

	// RVA: 0x10EF954 Offset: 0x10EB954 VA: 0x10EF954
	private void FinishReadContentAsBinary() { }

	// RVA: 0x10EF9A4 Offset: 0x10EB9A4 VA: 0x10EF9A4
	private void FinishReadElementContentAsBinary() { }

	// RVA: 0x10F6458 Offset: 0x10F2458 VA: 0x10F6458
	private bool ParseRootLevelWhitespace() { }

	// RVA: 0x10EF48C Offset: 0x10EB48C VA: 0x10EF48C
	private void ParseEntityReference() { }

	// RVA: 0x10F5E38 Offset: 0x10F1E38 VA: 0x10F5E38
	private XmlTextReaderImpl.EntityType HandleEntityReference(bool isInAttributeValue, XmlTextReaderImpl.EntityExpandType expandType, out int charRefEndPos) { }

	// RVA: 0x10F0600 Offset: 0x10EC600 VA: 0x10F0600
	private XmlTextReaderImpl.EntityType HandleGeneralEntityReference(string name, bool isInAttributeValue, bool pushFakeEntityIfNullResolver, int entityStartLinePos) { }

	// RVA: 0x10F5198 Offset: 0x10F1198 VA: 0x10F5198
	private bool get_InEntity() { }

	// RVA: 0x10F43D4 Offset: 0x10F03D4 VA: 0x10F43D4
	private bool HandleEntityEnd(bool checkEntityNesting) { }

	// RVA: 0x10EF500 Offset: 0x10EB500 VA: 0x10EF500
	private void SetupEndEntityNodeInContent() { }

	// RVA: 0x10F9EA0 Offset: 0x10F5EA0 VA: 0x10F9EA0
	private void SetupEndEntityNodeInAttribute() { }

	// RVA: 0x10F56A0 Offset: 0x10F16A0 VA: 0x10F56A0
	private bool ParsePI() { }

	// RVA: 0x10F21E0 Offset: 0x10EE1E0 VA: 0x10F21E0
	private bool ParsePI(StringBuilder piInDtdStringBuilder) { }

	// RVA: 0x10F9F08 Offset: 0x10F5F08 VA: 0x10F9F08
	private bool ParsePIValue(out int outStartPos, out int outEndPos) { }

	// RVA: 0x10F56A8 Offset: 0x10F16A8 VA: 0x10F56A8
	private bool ParseComment() { }

	// RVA: 0x10F570C Offset: 0x10F170C VA: 0x10F570C
	private void ParseCData() { }

	// RVA: 0x10F26D4 Offset: 0x10EE6D4 VA: 0x10F26D4
	private void ParseCDataOrComment(XmlNodeType type) { }

	// RVA: 0x10FA298 Offset: 0x10F6298 VA: 0x10FA298
	private bool ParseCDataOrComment(XmlNodeType type, out int outStartPos, out int outEndPos) { }

	// RVA: 0x10F5714 Offset: 0x10F1714 VA: 0x10F5714
	private bool ParseDoctypeDecl() { }

	// RVA: 0x10FA6D4 Offset: 0x10F66D4 VA: 0x10FA6D4
	private void ParseDtd() { }

	// RVA: 0x10FA9EC Offset: 0x10F69EC VA: 0x10FA9EC
	private void SkipDtd() { }

	// RVA: 0x10FAD58 Offset: 0x10F6D58 VA: 0x10FAD58
	private void SkipPublicOrSystemIdLiteral() { }

	// RVA: 0x10FAE10 Offset: 0x10F6E10 VA: 0x10FAE10
	private void SkipUntil(char stopChar, bool recognizeLiterals) { }

	// RVA: 0x10F3614 Offset: 0x10EF614 VA: 0x10F3614
	private int EatWhitespaces(StringBuilder sb) { }

	// RVA: 0x10F9CC8 Offset: 0x10F5CC8 VA: 0x10F9CC8
	private int ParseCharRefInline(int startPos, out int charCount, out XmlTextReaderImpl.EntityType entityType) { }

	// RVA: 0x10F2084 Offset: 0x10EE084 VA: 0x10F2084
	private int ParseNumericCharRef(bool expand, StringBuilder internalSubsetBuilder, out XmlTextReaderImpl.EntityType entityType) { }

	// RVA: 0x10FB24C Offset: 0x10F724C VA: 0x10FB24C
	private int ParseNumericCharRefInline(int startPos, bool expand, StringBuilder internalSubsetBuilder, out int charCount, out XmlTextReaderImpl.EntityType entityType) { }

	// RVA: 0x10F2138 Offset: 0x10EE138 VA: 0x10F2138
	private int ParseNamedCharRef(bool expand, StringBuilder internalSubsetBuilder) { }

	// RVA: 0x10FB8D0 Offset: 0x10F78D0 VA: 0x10FB8D0
	private int ParseNamedCharRefInline(int startPos, bool expand, StringBuilder internalSubsetBuilder) { }

	// RVA: 0x10F553C Offset: 0x10F153C VA: 0x10F553C
	private int ParseName() { }

	// RVA: 0x10F6BD8 Offset: 0x10F2BD8 VA: 0x10F6BD8
	private int ParseQName(out int colonPos) { }

	// RVA: 0x10FBBAC Offset: 0x10F7BAC VA: 0x10FBBAC
	private int ParseQName(bool isQName, int startOffset, out int colonPos) { }

	// RVA: 0x10FBE40 Offset: 0x10F7E40 VA: 0x10FBE40
	private bool ReadDataInName(ref int pos) { }

	// RVA: 0x10F9B34 Offset: 0x10F5B34 VA: 0x10F9B34
	private string ParseEntityName() { }

	// RVA: 0x10EF404 Offset: 0x10EB404 VA: 0x10EF404
	private XmlTextReaderImpl.NodeData AddNode(int nodeIndex, int nodeDepth) { }

	// RVA: 0x10FBE80 Offset: 0x10F7E80 VA: 0x10FBE80
	private XmlTextReaderImpl.NodeData AllocNode(int nodeIndex, int nodeDepth) { }

	// RVA: 0x10F3BFC Offset: 0x10EFBFC VA: 0x10F3BFC
	private XmlTextReaderImpl.NodeData AddAttributeNoChecks(string name, int attrDepth) { }

	// RVA: 0x10F8560 Offset: 0x10F4560 VA: 0x10F8560
	private XmlTextReaderImpl.NodeData AddAttribute(int endNamePos, int colonPos) { }

	// RVA: 0x10FBFBC Offset: 0x10F7FBC VA: 0x10FBFBC
	private XmlTextReaderImpl.NodeData AddAttribute(string localName, string prefix, string nameWPrefix) { }

	// RVA: 0x10EF448 Offset: 0x10EB448 VA: 0x10EF448
	private void PopElementContext() { }

	// RVA: 0x10F1C10 Offset: 0x10EDC10 VA: 0x10F1C10
	private void OnNewLine(int pos) { }

	// RVA: 0x10EF7E0 Offset: 0x10EB7E0 VA: 0x10EF7E0
	private void OnEof() { }

	// RVA: 0x10F9770 Offset: 0x10F5770 VA: 0x10F9770
	private string LookupNamespace(XmlTextReaderImpl.NodeData node) { }

	// RVA: 0x10F98A8 Offset: 0x10F58A8 VA: 0x10F98A8
	private void AddNamespace(string prefix, string uri, XmlTextReaderImpl.NodeData attr) { }

	// RVA: 0x10EF3D8 Offset: 0x10EB3D8 VA: 0x10EF3D8
	private void ResetAttributes() { }

	// RVA: 0x10FC11C Offset: 0x10F811C VA: 0x10FC11C
	private void FullAttributeCleanup() { }

	// RVA: 0x10F9834 Offset: 0x10F5834 VA: 0x10F9834
	private void PushXmlContext() { }

	// RVA: 0x10FC0F0 Offset: 0x10F80F0 VA: 0x10FC0F0
	private void PopXmlContext() { }

	// RVA: 0x10F9E58 Offset: 0x10F5E58 VA: 0x10F9E58
	private XmlNodeType GetWhitespaceType() { }

	// RVA: 0x10F9C70 Offset: 0x10F5C70 VA: 0x10F9C70
	private XmlNodeType GetTextNodeType(int orChars) { }

	// RVA: 0x10F328C Offset: 0x10EF28C VA: 0x10F328C
	private void PushExternalEntityOrSubset(string publicId, string systemId, Uri baseUri, string entityName) { }

	// RVA: 0x10FC180 Offset: 0x10F8180 VA: 0x10FC180
	private bool OpenAndPush(Uri uri) { }

	// RVA: 0x10F2A38 Offset: 0x10EEA38 VA: 0x10F2A38
	private bool PushExternalEntity(IDtdEntityInfo entity) { }

	// RVA: 0x10F2DB4 Offset: 0x10EEDB4 VA: 0x10F2DB4
	private void PushInternalEntity(IDtdEntityInfo entity) { }

	// RVA: 0x10F312C Offset: 0x10EF12C VA: 0x10F312C
	private void PopEntity() { }

	// RVA: 0x10FC3B4 Offset: 0x10F83B4 VA: 0x10FC3B4
	private void RegisterEntity(IDtdEntityInfo entity) { }

	// RVA: 0x10FC5A4 Offset: 0x10F85A4 VA: 0x10FC5A4
	private void UnregisterEntity() { }

	// RVA: 0x10F38D0 Offset: 0x10EF8D0 VA: 0x10F38D0
	private void PushParsingState() { }

	// RVA: 0x10F54A8 Offset: 0x10F14A8 VA: 0x10F54A8
	private void PopParsingState() { }

	// RVA: 0x10FC608 Offset: 0x10F8608 VA: 0x10FC608
	private int IncrementalRead() { }

	// RVA: 0x10EF638 Offset: 0x10EB638 VA: 0x10EF638
	private void FinishIncrementalRead() { }

	// RVA: 0x10EF69C Offset: 0x10EB69C VA: 0x10EF69C
	private bool ParseFragmentAttribute() { }

	// RVA: 0x10EFF30 Offset: 0x10EBF30 VA: 0x10EFF30
	private bool ParseAttributeValueChunk() { }

	// RVA: 0x10EF724 Offset: 0x10EB724 VA: 0x10EF724
	private void ParseXmlDeclarationFragment() { }

	// RVA: 0x10F56FC Offset: 0x10F16FC VA: 0x10F56FC
	private void ThrowUnexpectedToken(int pos, string expectedToken) { }

	// RVA: 0x10F5534 Offset: 0x10F1534 VA: 0x10F5534
	private void ThrowUnexpectedToken(string expectedToken1) { }

	// RVA: 0x10F5998 Offset: 0x10F1998 VA: 0x10F5998
	private void ThrowUnexpectedToken(int pos, string expectedToken1, string expectedToken2) { }

	// RVA: 0x10F555C Offset: 0x10F155C VA: 0x10F555C
	private void ThrowUnexpectedToken(string expectedToken1, string expectedToken2) { }

	// RVA: 0x10F5990 Offset: 0x10F1990 VA: 0x10F5990
	private string ParseUnexpectedToken(int pos) { }

	// RVA: 0x10FCF2C Offset: 0x10F8F2C VA: 0x10FCF2C
	private string ParseUnexpectedToken() { }

	// RVA: 0x10F84E0 Offset: 0x10F44E0 VA: 0x10F84E0
	private void ThrowExpectingWhitespace(int pos) { }

	// RVA: 0x10ED1D0 Offset: 0x10E91D0 VA: 0x10ED1D0
	private int GetIndexOfAttributeWithoutPrefix(string name) { }

	// RVA: 0x10ED2B8 Offset: 0x10E92B8 VA: 0x10ED2B8
	private int GetIndexOfAttributeWithPrefix(string name) { }

	// RVA: 0x10F9D34 Offset: 0x10F5D34 VA: 0x10F9D34
	private bool ZeroEndingStream(int pos) { }

	// RVA: 0x10F4980 Offset: 0x10F0980 VA: 0x10F4980
	private void ParseDtdFromParserContext() { }

	// RVA: 0x10F9DB0 Offset: 0x10F5DB0 VA: 0x10F9DB0
	private bool MoveToNextContentNode(bool moveIfOnContentNode) { }

	// RVA: 0x10EB66C Offset: 0x10E766C VA: 0x10EB66C
	private void SetupFromParserContext(XmlParserContext context, XmlReaderSettings settings) { }

	// RVA: 0x10FCFF4 Offset: 0x10F8FF4 VA: 0x10FCFF4 Slot: 52
	internal override IDtdInfo get_DtdInfo() { }

	// RVA: 0x10FCFFC Offset: 0x10F8FFC VA: 0x10FCFFC
	internal void SetDtdInfo(IDtdInfo newDtdInfo) { }

	// RVA: 0x10FD130 Offset: 0x10F9130 VA: 0x10FD130
	internal void set_ValidationEventHandling(IValidationEventHandling value) { }

	// RVA: 0x10FD138 Offset: 0x10F9138 VA: 0x10FD138
	internal void set_XmlValidatingReaderCompatibilityMode(bool value) { }

	// RVA: 0x10FD210 Offset: 0x10F9210 VA: 0x10FD210
	internal void ChangeCurrentNodeType(XmlNodeType newNodeType) { }

	// RVA: 0x10FD22C Offset: 0x10F922C VA: 0x10FD22C
	internal XmlResolver GetResolver() { }

	// RVA: 0x10FD234 Offset: 0x10F9234 VA: 0x10FD234
	internal void set_InternalSchemaType(object value) { }

	// RVA: 0x10FD250 Offset: 0x10F9250 VA: 0x10FD250
	internal object get_InternalTypedValue() { }

	// RVA: 0x10FD26C Offset: 0x10F926C VA: 0x10FD26C
	internal void set_InternalTypedValue(object value) { }

	// RVA: 0x10FD288 Offset: 0x10F9288 VA: 0x10FD288 Slot: 51
	internal override XmlNamespaceManager get_NamespaceManager() { }

	// RVA: 0x10F7C38 Offset: 0x10F3C38 VA: 0x10F7C38
	private bool AddDefaultAttributeDtd(IDtdDefaultAttributeInfo defAttrInfo, bool definedInDtd, XmlTextReaderImpl.NodeData[] nameSortedNodeData) { }

	// RVA: 0x10FD4D0 Offset: 0x10F94D0 VA: 0x10FD4D0
	internal bool AddDefaultAttributeNonDtd(SchemaAttDef attrDef) { }

	// RVA: 0x10FD290 Offset: 0x10F9290 VA: 0x10FD290
	private XmlTextReaderImpl.NodeData AddDefaultAttributeInternal(string localName, string ns, string prefix, string value, int lineNo, int linePos, int valueLineNo, int valueLinePos, bool isXmlAttribute) { }

	// RVA: 0x10EC888 Offset: 0x10E8888 VA: 0x10EC888
	private bool UriEqual(Uri uri1, string uri1Str, string uri2Str, XmlResolver resolver) { }

	// RVA: 0x10F39F8 Offset: 0x10EF9F8 VA: 0x10F39F8
	private void RegisterConsumedCharacters(long characters, bool inEntityReference) { }

	// RVA: 0x10FD6DC Offset: 0x10F96DC VA: 0x10FD6DC
	internal static string StripSpaces(string value) { }

	// RVA: 0x10FD900 Offset: 0x10F9900 VA: 0x10FD900
	internal static void StripSpaces(char[] value, int index, ref int len) { }

	// RVA: 0x10F1588 Offset: 0x10ED588 VA: 0x10F1588
	internal static void BlockCopyChars(char[] src, int srcOffset, char[] dst, int dstOffset, int count) { }

	// RVA: 0x10F520C Offset: 0x10F120C VA: 0x10F520C
	internal static void BlockCopy(byte[] src, int srcOffset, byte[] dst, int dstOffset, int count) { }
}


// Namespace: System.Xml
public enum Formatting // TypeDefIndex: 2634
{
	// Fields
	public int value__; // 0x0
	public const Formatting None = 0;
	public const Formatting Indented = 1;
}


// Namespace: 
private enum XmlTextWriter.NamespaceState // TypeDefIndex: 2635
{
	// Fields
	public int value__; // 0x0
	public const XmlTextWriter.NamespaceState Uninitialized = 0;
	public const XmlTextWriter.NamespaceState NotDeclaredButInScope = 1;
	public const XmlTextWriter.NamespaceState DeclaredButNotWrittenOut = 2;
	public const XmlTextWriter.NamespaceState DeclaredAndWrittenOut = 3;
}


// Namespace: 
private struct XmlTextWriter.TagInfo // TypeDefIndex: 2636
{
	// Fields
	internal string name; // 0x0
	internal string prefix; // 0x8
	internal string defaultNs; // 0x10
	internal XmlTextWriter.NamespaceState defaultNsState; // 0x18
	internal XmlSpace xmlSpace; // 0x1C
	internal string xmlLang; // 0x20
	internal int prevNsTop; // 0x28
	internal int prefixCount; // 0x2C
	internal bool mixed; // 0x30

	// Methods

	// RVA: 0x11A9190 Offset: 0x11A5190 VA: 0x11A9190
	internal void Init(int nsTop) { }
}


// Namespace: 
private struct XmlTextWriter.Namespace // TypeDefIndex: 2637
{
	// Fields
	internal string prefix; // 0x0
	internal string ns; // 0x8
	internal bool declared; // 0x10
	internal int prevNsIndex; // 0x14

	// Methods

	// RVA: 0x11AD77C Offset: 0x11A977C VA: 0x11AD77C
	internal void Set(string prefix, string ns, bool declared) { }
}


// Namespace: 
private enum XmlTextWriter.SpecialAttr // TypeDefIndex: 2638
{
	// Fields
	public int value__; // 0x0
	public const XmlTextWriter.SpecialAttr None = 0;
	public const XmlTextWriter.SpecialAttr XmlSpace = 1;
	public const XmlTextWriter.SpecialAttr XmlLang = 2;
	public const XmlTextWriter.SpecialAttr XmlNs = 3;
}


// Namespace: 
private enum XmlTextWriter.State // TypeDefIndex: 2639
{
	// Fields
	public int value__; // 0x0
	public const XmlTextWriter.State Start = 0;
	public const XmlTextWriter.State Prolog = 1;
	public const XmlTextWriter.State PostDTD = 2;
	public const XmlTextWriter.State Element = 3;
	public const XmlTextWriter.State Attribute = 4;
	public const XmlTextWriter.State Content = 5;
	public const XmlTextWriter.State AttrOnly = 6;
	public const XmlTextWriter.State Epilog = 7;
	public const XmlTextWriter.State Error = 8;
	public const XmlTextWriter.State Closed = 9;
}


// Namespace: 
private enum XmlTextWriter.Token // TypeDefIndex: 2640
{
	// Fields
	public int value__; // 0x0
	public const XmlTextWriter.Token PI = 0;
	public const XmlTextWriter.Token Doctype = 1;
	public const XmlTextWriter.Token Comment = 2;
	public const XmlTextWriter.Token CData = 3;
	public const XmlTextWriter.Token StartElement = 4;
	public const XmlTextWriter.Token EndElement = 5;
	public const XmlTextWriter.Token LongEndElement = 6;
	public const XmlTextWriter.Token StartAttribute = 7;
	public const XmlTextWriter.Token EndAttribute = 8;
	public const XmlTextWriter.Token Content = 9;
	public const XmlTextWriter.Token Base64 = 10;
	public const XmlTextWriter.Token RawData = 11;
	public const XmlTextWriter.Token Whitespace = 12;
	public const XmlTextWriter.Token Empty = 13;
}


// Namespace: System.Xml
public class XmlTextWriter : XmlWriter // TypeDefIndex: 2641
{
	// Fields
	private TextWriter textWriter; // 0x18
	private XmlTextEncoder xmlEncoder; // 0x20
	private Encoding encoding; // 0x28
	private Formatting formatting; // 0x30
	private bool indented; // 0x34
	private int indentation; // 0x38
	private char indentChar; // 0x3C
	private XmlTextWriter.TagInfo[] stack; // 0x40
	private int top; // 0x48
	private XmlTextWriter.State[] stateTable; // 0x50
	private XmlTextWriter.State currentState; // 0x58
	private XmlTextWriter.Token lastToken; // 0x5C
	private XmlTextWriterBase64Encoder base64Encoder; // 0x60
	private char quoteChar; // 0x68
	private char curQuoteChar; // 0x6A
	private bool namespaces; // 0x6C
	private XmlTextWriter.SpecialAttr specialAttr; // 0x70
	private string prefixForXmlNs; // 0x78
	private bool flush; // 0x80
	private XmlTextWriter.Namespace[] nsStack; // 0x88
	private int nsTop; // 0x90
	private Dictionary<string, int> nsHashtable; // 0x98
	private bool useNsHashtable; // 0xA0
	private XmlCharType xmlCharType; // 0xA8
	private static string[] stateName; // 0x0
	private static string[] tokenName; // 0x8
	private static readonly XmlTextWriter.State[] stateTableDefault; // 0x10
	private static readonly XmlTextWriter.State[] stateTableDocument; // 0x18

	// Properties
	public Stream BaseStream { get; }
	public bool Namespaces { set; }
	public Formatting Formatting { set; }
	public char QuoteChar { set; }
	public override WriteState WriteState { get; }

	// Methods

	// RVA: 0x11A906C Offset: 0x11A506C VA: 0x11A906C
	internal void .ctor() { }

	// RVA: 0x11A91FC Offset: 0x11A51FC VA: 0x11A91FC
	public void .ctor(Stream w, Encoding encoding) { }

	// RVA: 0x11A92C8 Offset: 0x11A52C8 VA: 0x11A92C8
	public void .ctor(string filename, Encoding encoding) { }

	// RVA: 0x11A9348 Offset: 0x11A5348 VA: 0x11A9348
	public void .ctor(TextWriter w) { }

	// RVA: 0x11A93DC Offset: 0x11A53DC VA: 0x11A93DC
	public Stream get_BaseStream() { }

	// RVA: 0x11A946C Offset: 0x11A546C VA: 0x11A946C
	public void set_Namespaces(bool value) { }

	// RVA: 0x11A94E0 Offset: 0x11A54E0 VA: 0x11A94E0
	public void set_Formatting(Formatting value) { }

	// RVA: 0x11A94F4 Offset: 0x11A54F4 VA: 0x11A94F4
	public void set_QuoteChar(char value) { }

	// RVA: 0x11A9580 Offset: 0x11A5580 VA: 0x11A9580 Slot: 5
	public override void WriteStartDocument() { }

	// RVA: 0x11A9918 Offset: 0x11A5918 VA: 0x11A9918 Slot: 6
	public override void WriteStartDocument(bool standalone) { }

	// RVA: 0x11A992C Offset: 0x11A592C VA: 0x11A992C Slot: 7
	public override void WriteEndDocument() { }

	// RVA: 0x11A9B38 Offset: 0x11A5B38 VA: 0x11A9B38 Slot: 8
	public override void WriteDocType(string name, string pubid, string sysid, string subset) { }

	// RVA: 0x11AA60C Offset: 0x11A660C VA: 0x11AA60C Slot: 9
	public override void WriteStartElement(string prefix, string localName, string ns) { }

	// RVA: 0x11AAFDC Offset: 0x11A6FDC VA: 0x11AAFDC Slot: 10
	public override void WriteEndElement() { }

	// RVA: 0x11AB2B0 Offset: 0x11A72B0 VA: 0x11AB2B0 Slot: 11
	public override void WriteFullEndElement() { }

	// RVA: 0x11AB2B8 Offset: 0x11A72B8 VA: 0x11AB2B8 Slot: 12
	public override void WriteStartAttribute(string prefix, string localName, string ns) { }

	// RVA: 0x11ABB78 Offset: 0x11A7B78 VA: 0x11ABB78 Slot: 13
	public override void WriteEndAttribute() { }

	// RVA: 0x11ABC18 Offset: 0x11A7C18 VA: 0x11ABC18 Slot: 14
	public override void WriteCData(string text) { }

	// RVA: 0x11ABDDC Offset: 0x11A7DDC VA: 0x11ABDDC Slot: 15
	public override void WriteComment(string text) { }

	// RVA: 0x11ABFDC Offset: 0x11A7FDC VA: 0x11ABFDC Slot: 16
	public override void WriteProcessingInstruction(string name, string text) { }

	// RVA: 0x11AC304 Offset: 0x11A8304 VA: 0x11AC304 Slot: 17
	public override void WriteEntityRef(string name) { }

	// RVA: 0x11AC3D0 Offset: 0x11A83D0 VA: 0x11AC3D0 Slot: 18
	public override void WriteCharEntity(char ch) { }

	// RVA: 0x11AC490 Offset: 0x11A8490 VA: 0x11AC490 Slot: 19
	public override void WriteWhitespace(string ws) { }

	// RVA: 0x11AC5FC Offset: 0x11A85FC VA: 0x11AC5FC Slot: 20
	public override void WriteString(string text) { }

	// RVA: 0x11AC6C8 Offset: 0x11A86C8 VA: 0x11AC6C8 Slot: 21
	public override void WriteSurrogateCharEntity(char lowChar, char highChar) { }

	// RVA: 0x11AC790 Offset: 0x11A8790 VA: 0x11AC790 Slot: 22
	public override void WriteChars(char[] buffer, int index, int count) { }

	// RVA: 0x11AC868 Offset: 0x11A8868 VA: 0x11AC868 Slot: 23
	public override void WriteRaw(char[] buffer, int index, int count) { }

	// RVA: 0x11AC940 Offset: 0x11A8940 VA: 0x11AC940 Slot: 24
	public override void WriteRaw(string data) { }

	// RVA: 0x11ACA00 Offset: 0x11A8A00 VA: 0x11ACA00 Slot: 25
	public override void WriteBase64(byte[] buffer, int index, int count) { }

	// RVA: 0x11ACB48 Offset: 0x11A8B48 VA: 0x11ACB48 Slot: 26
	public override void WriteBinHex(byte[] buffer, int index, int count) { }

	// RVA: 0x11ACC18 Offset: 0x11A8C18 VA: 0x11ACC18 Slot: 27
	public override WriteState get_WriteState() { }

	// RVA: 0x11ACC3C Offset: 0x11A8C3C VA: 0x11ACC3C Slot: 28
	public override void Close() { }

	// RVA: 0x11ACD74 Offset: 0x11A8D74 VA: 0x11ACD74 Slot: 29
	public override void Flush() { }

	// RVA: 0x11ACD94 Offset: 0x11A8D94 VA: 0x11ACD94 Slot: 30
	public override string LookupPrefix(string ns) { }

	// RVA: 0x11A9588 Offset: 0x11A5588 VA: 0x11A9588
	private void StartDocument(int standalone) { }

	// RVA: 0x11AA114 Offset: 0x11A6114 VA: 0x11AA114
	private void AutoComplete(XmlTextWriter.Token token) { }

	// RVA: 0x11A9AE4 Offset: 0x11A5AE4 VA: 0x11A9AE4
	private void AutoCompleteAll() { }

	// RVA: 0x11AAFE4 Offset: 0x11A6FE4 VA: 0x11AAFE4
	private void InternalWriteEndElement(bool longFormat) { }

	// RVA: 0x11ACFA8 Offset: 0x11A8FA8 VA: 0x11ACFA8
	private void WriteEndStartTag(bool empty) { }

	// RVA: 0x11ACF60 Offset: 0x11A8F60 VA: 0x11ACF60
	private void WriteEndAttributeQuote() { }

	// RVA: 0x11ACE94 Offset: 0x11A8E94 VA: 0x11ACE94
	private void Indent(bool beforeEndElement) { }

	// RVA: 0x11AAC50 Offset: 0x11A6C50 VA: 0x11AAC50
	private void PushNamespace(string prefix, string ns, bool declared) { }

	// RVA: 0x11AD5E4 Offset: 0x11A95E4 VA: 0x11AD5E4
	private void AddNamespace(string prefix, string ns, bool declared) { }

	// RVA: 0x11AD794 Offset: 0x11A9794 VA: 0x11AD794
	private void AddToNamespaceHashtable(int namespaceIndex) { }

	// RVA: 0x11AD2F8 Offset: 0x11A92F8 VA: 0x11AD2F8
	private void PopNamespaces(int indexFrom, int indexTo) { }

	// RVA: 0x11ABA64 Offset: 0x11A7A64 VA: 0x11ABA64
	private string GeneratePrefix() { }

	// RVA: 0x11AC20C Offset: 0x11A820C VA: 0x11AC20C
	private void InternalWriteProcessingInstruction(string name, string text) { }

	// RVA: 0x11AAAA4 Offset: 0x11A6AA4 VA: 0x11AAAA4
	private int LookupNamespace(string prefix) { }

	// RVA: 0x11AB938 Offset: 0x11A7938 VA: 0x11AB938
	private int LookupNamespaceInCurrentScope(string prefix) { }

	// RVA: 0x11AAB80 Offset: 0x11A6B80 VA: 0x11AAB80
	private string FindPrefix(string ns) { }

	// RVA: 0x11A9F5C Offset: 0x11A5F5C VA: 0x11A9F5C
	private void ValidateName(string name, bool isNCName) { }

	// RVA: 0x11AD3D4 Offset: 0x11A93D4 VA: 0x11AD3D4
	private void HandleSpecialAttribute() { }

	// RVA: 0x11AAE7C Offset: 0x11A6E7C VA: 0x11AAE7C
	private void VerifyPrefixXml(string prefix, string ns) { }

	// RVA: 0x11AA9D4 Offset: 0x11A69D4 VA: 0x11AA9D4
	private void PushStack() { }

	// RVA: 0x11AD2D4 Offset: 0x11A92D4 VA: 0x11AD2D4
	private void FlushEncoders() { }

	// RVA: 0x11AD880 Offset: 0x11A9880 VA: 0x11AD880
	private static void .cctor() { }
}


// Namespace: System.Xml
internal class XmlUtf8RawTextWriter : XmlRawWriter // TypeDefIndex: 2642
{
	// Fields
	private readonly bool useAsync; // 0x28
	protected byte[] bufBytes; // 0x30
	protected Stream stream; // 0x38
	protected Encoding encoding; // 0x40
	protected XmlCharType xmlCharType; // 0x48
	protected int bufPos; // 0x50
	protected int textPos; // 0x54
	protected int contentPos; // 0x58
	protected int cdataPos; // 0x5C
	protected int attrEndPos; // 0x60
	protected int bufLen; // 0x64
	protected bool writeToNull; // 0x68
	protected bool hadDoubleBracket; // 0x69
	protected bool inAttributeValue; // 0x6A
	protected NewLineHandling newLineHandling; // 0x6C
	protected bool closeOutput; // 0x70
	protected bool omitXmlDeclaration; // 0x71
	protected string newLineChars; // 0x78
	protected bool checkCharacters; // 0x80
	protected XmlStandalone standalone; // 0x84
	protected XmlOutputMethod outputMethod; // 0x88
	protected bool autoXmlDeclaration; // 0x8C
	protected bool mergeCDataSections; // 0x8D

	// Properties
	internal override bool SupportsNamespaceDeclarationInChunks { get; }

	// Methods

	// RVA: 0x11ADCF0 Offset: 0x11A9CF0 VA: 0x11ADCF0
	protected void .ctor(XmlWriterSettings settings) { }

	// RVA: 0x11AE10C Offset: 0x11AA10C VA: 0x11AE10C
	public void .ctor(Stream stream, XmlWriterSettings settings) { }

	// RVA: 0x11AE250 Offset: 0x11AA250 VA: 0x11AE250 Slot: 36
	internal override void WriteXmlDeclaration(XmlStandalone standalone) { }

	// RVA: 0x11AE3E0 Offset: 0x11AA3E0 VA: 0x11AE3E0 Slot: 37
	internal override void WriteXmlDeclaration(string xmldecl) { }

	// RVA: 0x11AE458 Offset: 0x11AA458 VA: 0x11AE458 Slot: 8
	public override void WriteDocType(string name, string pubid, string sysid, string subset) { }

	// RVA: 0x11AE648 Offset: 0x11AA648 VA: 0x11AE648 Slot: 9
	public override void WriteStartElement(string prefix, string localName, string ns) { }

	// RVA: 0x11AE6EC Offset: 0x11AA6EC VA: 0x11AE6EC Slot: 38
	internal override void StartElementContent() { }

	// RVA: 0x11AE734 Offset: 0x11AA734 VA: 0x11AE734 Slot: 40
	internal override void WriteEndElement(string prefix, string localName, string ns) { }

	// RVA: 0x11AE88C Offset: 0x11AA88C VA: 0x11AE88C Slot: 41
	internal override void WriteFullEndElement(string prefix, string localName, string ns) { }

	// RVA: 0x11AE980 Offset: 0x11AA980 VA: 0x11AE980 Slot: 12
	public override void WriteStartAttribute(string prefix, string localName, string ns) { }

	// RVA: 0x11AEA8C Offset: 0x11AAA8C VA: 0x11AEA8C Slot: 13
	public override void WriteEndAttribute() { }

	// RVA: 0x11AEAD8 Offset: 0x11AAAD8 VA: 0x11AEAD8 Slot: 42
	internal override void WriteNamespaceDeclaration(string prefix, string namespaceName) { }

	// RVA: 0x11AEB2C Offset: 0x11AAB2C VA: 0x11AEB2C Slot: 43
	internal override bool get_SupportsNamespaceDeclarationInChunks() { }

	// RVA: 0x11AEB34 Offset: 0x11AAB34 VA: 0x11AEB34 Slot: 44
	internal override void WriteStartNamespaceDeclaration(string prefix) { }

	// RVA: 0x11AEC28 Offset: 0x11AAC28 VA: 0x11AEC28 Slot: 45
	internal override void WriteEndNamespaceDeclaration() { }

	// RVA: 0x11AEC74 Offset: 0x11AAC74 VA: 0x11AEC74 Slot: 14
	public override void WriteCData(string text) { }

	// RVA: 0x11AF204 Offset: 0x11AB204 VA: 0x11AF204 Slot: 15
	public override void WriteComment(string text) { }

	// RVA: 0x11AF688 Offset: 0x11AB688 VA: 0x11AF688 Slot: 16
	public override void WriteProcessingInstruction(string name, string text) { }

	// RVA: 0x11AF7B0 Offset: 0x11AB7B0 VA: 0x11AF7B0 Slot: 17
	public override void WriteEntityRef(string name) { }

	// RVA: 0x11AF850 Offset: 0x11AB850 VA: 0x11AF850 Slot: 18
	public override void WriteCharEntity(char ch) { }

	// RVA: 0x11AFA1C Offset: 0x11ABA1C VA: 0x11AFA1C Slot: 19
	public override void WriteWhitespace(string ws) { }

	// RVA: 0x11B000C Offset: 0x11AC00C VA: 0x11B000C Slot: 20
	public override void WriteString(string text) { }

	// RVA: 0x11B005C Offset: 0x11AC05C VA: 0x11B005C Slot: 21
	public override void WriteSurrogateCharEntity(char lowChar, char highChar) { }

	// RVA: 0x11B01A8 Offset: 0x11AC1A8 VA: 0x11B01A8 Slot: 22
	public override void WriteChars(char[] buffer, int index, int count) { }

	// RVA: 0x11B01E8 Offset: 0x11AC1E8 VA: 0x11B01E8 Slot: 23
	public override void WriteRaw(char[] buffer, int index, int count) { }

	// RVA: 0x11B0468 Offset: 0x11AC468 VA: 0x11B0468 Slot: 24
	public override void WriteRaw(string data) { }

	// RVA: 0x11B04B0 Offset: 0x11AC4B0 VA: 0x11B04B0 Slot: 28
	public override void Close() { }

	// RVA: 0x11B0614 Offset: 0x11AC614 VA: 0x11B0614 Slot: 29
	public override void Flush() { }

	// RVA: 0x11B0650 Offset: 0x11AC650 VA: 0x11B0650 Slot: 48
	protected virtual void FlushBuffer() { }

	// RVA: 0x11AFA6C Offset: 0x11ABA6C VA: 0x11AFA6C
	protected void WriteAttributeTextBlock(char* pSrc, char* pSrcEnd) { }

	// RVA: 0x11AFD54 Offset: 0x11ABD54 VA: 0x11AFD54
	protected void WriteElementTextBlock(char* pSrc, char* pSrcEnd) { }

	// RVA: 0x11AE3A4 Offset: 0x11AA3A4 VA: 0x11AE3A4
	protected void RawText(string s) { }

	// RVA: 0x11B0B60 Offset: 0x11ACB60 VA: 0x11B0B60
	protected void RawText(char* pSrcBegin, char* pSrcEnd) { }

	// RVA: 0x11B0228 Offset: 0x11AC228 VA: 0x11B0228
	protected void WriteRawWithCharChecking(char* pSrcBegin, char* pSrcEnd) { }

	// RVA: 0x11AF35C Offset: 0x11AB35C VA: 0x11AF35C
	protected void WriteCommentOrPi(string text, int stopChar) { }

	// RVA: 0x11AEED0 Offset: 0x11AAED0 VA: 0x11AEED0
	protected void WriteCDataSection(string text) { }

	// RVA: 0x11B0D20 Offset: 0x11ACD20 VA: 0x11B0D20
	private static bool IsSurrogateByte(byte b) { }

	// RVA: 0x11B0888 Offset: 0x11AC888 VA: 0x11B0888
	private static byte* EncodeSurrogate(char* pSrc, char* pSrcEnd, byte* pDst) { }

	// RVA: 0x11B0A18 Offset: 0x11ACA18 VA: 0x11B0A18
	private byte* InvalidXmlChar(int ch, byte* pDst, bool entitize) { }

	// RVA: 0x11B0DDC Offset: 0x11ACDDC VA: 0x11B0DDC
	internal void EncodeChar(ref char* pSrc, char* pSrcEnd, ref byte* pDst) { }

	// RVA: 0x11B0ACC Offset: 0x11ACACC VA: 0x11B0ACC
	internal static byte* EncodeMultibyteUTF8(int ch, byte* pDst) { }

	// RVA: 0x11B0EB8 Offset: 0x11ACEB8 VA: 0x11B0EB8
	internal static void CharToUTF8(ref char* pSrc, char* pSrcEnd, ref byte* pDst) { }

	// RVA: 0x11B0B0C Offset: 0x11ACB0C VA: 0x11B0B0C
	protected byte* WriteNewLine(byte* pDst) { }

	// RVA: 0x11B07E8 Offset: 0x11AC7E8 VA: 0x11B07E8
	protected static byte* LtEntity(byte* pDst) { }

	// RVA: 0x11B07F8 Offset: 0x11AC7F8 VA: 0x11B07F8
	protected static byte* GtEntity(byte* pDst) { }

	// RVA: 0x11B07C8 Offset: 0x11AC7C8 VA: 0x11B07C8
	protected static byte* AmpEntity(byte* pDst) { }

	// RVA: 0x11B0808 Offset: 0x11AC808 VA: 0x11B0808
	protected static byte* QuoteEntity(byte* pDst) { }

	// RVA: 0x11B0828 Offset: 0x11AC828 VA: 0x11B0828
	protected static byte* TabEntity(byte* pDst) { }

	// RVA: 0x11B0868 Offset: 0x11AC868 VA: 0x11B0868
	protected static byte* LineFeedEntity(byte* pDst) { }

	// RVA: 0x11B0848 Offset: 0x11AC848 VA: 0x11B0848
	protected static byte* CarriageReturnEntity(byte* pDst) { }

	// RVA: 0x11B0D30 Offset: 0x11ACD30 VA: 0x11B0D30
	private static byte* CharEntity(byte* pDst, char ch) { }

	// RVA: 0x11B0CF8 Offset: 0x11ACCF8 VA: 0x11B0CF8
	protected static byte* RawStartCData(byte* pDst) { }

	// RVA: 0x11B0CDC Offset: 0x11ACCDC VA: 0x11B0CDC
	protected static byte* RawEndCData(byte* pDst) { }

	// RVA: 0x11ADDCC Offset: 0x11A9DCC VA: 0x11ADDCC
	protected void ValidateContentChars(string chars, string propertyName, bool allowOnlyWhitespace) { }
}


// Namespace: System.Xml
internal class XmlUtf8RawTextWriterIndent : XmlUtf8RawTextWriter // TypeDefIndex: 2643
{
	// Fields
	protected int indentLevel; // 0x90
	protected bool newLineOnAttributes; // 0x94
	protected string indentChars; // 0x98
	protected bool mixedContent; // 0xA0
	private BitStack mixedContentStack; // 0xA8
	protected ConformanceLevel conformanceLevel; // 0xB0

	// Methods

	// RVA: 0x11B0F88 Offset: 0x11ACF88 VA: 0x11B0F88
	public void .ctor(Stream stream, XmlWriterSettings settings) { }

	// RVA: 0x11B10BC Offset: 0x11AD0BC VA: 0x11B10BC Slot: 8
	public override void WriteDocType(string name, string pubid, string sysid, string subset) { }

	// RVA: 0x11B1164 Offset: 0x11AD164 VA: 0x11B1164 Slot: 9
	public override void WriteStartElement(string prefix, string localName, string ns) { }

	// RVA: 0x11B11D0 Offset: 0x11AD1D0 VA: 0x11B11D0 Slot: 38
	internal override void StartElementContent() { }

	// RVA: 0x11B1220 Offset: 0x11AD220 VA: 0x11B1220 Slot: 39
	internal override void OnRootElement(ConformanceLevel currentConformanceLevel) { }

	// RVA: 0x11B1228 Offset: 0x11AD228 VA: 0x11B1228 Slot: 40
	internal override void WriteEndElement(string prefix, string localName, string ns) { }

	// RVA: 0x11B12A8 Offset: 0x11AD2A8 VA: 0x11B12A8 Slot: 41
	internal override void WriteFullEndElement(string prefix, string localName, string ns) { }

	// RVA: 0x11B1328 Offset: 0x11AD328 VA: 0x11B1328 Slot: 12
	public override void WriteStartAttribute(string prefix, string localName, string ns) { }

	// RVA: 0x11B1364 Offset: 0x11AD364 VA: 0x11B1364 Slot: 14
	public override void WriteCData(string text) { }

	// RVA: 0x11B1370 Offset: 0x11AD370 VA: 0x11B1370 Slot: 15
	public override void WriteComment(string text) { }

	// RVA: 0x11B13B0 Offset: 0x11AD3B0 VA: 0x11B13B0 Slot: 16
	public override void WriteProcessingInstruction(string target, string text) { }

	// RVA: 0x11B13F8 Offset: 0x11AD3F8 VA: 0x11B13F8 Slot: 17
	public override void WriteEntityRef(string name) { }

	// RVA: 0x11B1404 Offset: 0x11AD404 VA: 0x11B1404 Slot: 18
	public override void WriteCharEntity(char ch) { }

	// RVA: 0x11B1410 Offset: 0x11AD410 VA: 0x11B1410 Slot: 21
	public override void WriteSurrogateCharEntity(char lowChar, char highChar) { }

	// RVA: 0x11B141C Offset: 0x11AD41C VA: 0x11B141C Slot: 19
	public override void WriteWhitespace(string ws) { }

	// RVA: 0x11B1428 Offset: 0x11AD428 VA: 0x11B1428 Slot: 20
	public override void WriteString(string text) { }

	// RVA: 0x11B1434 Offset: 0x11AD434 VA: 0x11B1434 Slot: 22
	public override void WriteChars(char[] buffer, int index, int count) { }

	// RVA: 0x11B1440 Offset: 0x11AD440 VA: 0x11B1440 Slot: 23
	public override void WriteRaw(char[] buffer, int index, int count) { }

	// RVA: 0x11B144C Offset: 0x11AD44C VA: 0x11B144C Slot: 24
	public override void WriteRaw(string data) { }

	// RVA: 0x11B1458 Offset: 0x11AD458 VA: 0x11B1458 Slot: 25
	public override void WriteBase64(byte[] buffer, int index, int count) { }

	// RVA: 0x11B0FB0 Offset: 0x11ACFB0 VA: 0x11B0FB0
	private void Init(XmlWriterSettings settings) { }

	// RVA: 0x11B111C Offset: 0x11AD11C VA: 0x11B111C
	private void WriteIndent() { }
}


// Namespace: System.Xml
[Obsolete("Use XmlReader created by XmlReader.Create() method using appropriate XmlReaderSettings instead. https://go.microsoft.com/fwlink/?linkid=14202")]
public class XmlValidatingReader : XmlReader // TypeDefIndex: 2644
{
	// Fields
	private XmlValidatingReaderImpl impl; // 0x10

	// Properties
	public override XmlNodeType NodeType { get; }
	public override string LocalName { get; }
	public override string NamespaceURI { get; }
	public override string Prefix { get; }
	public override string Value { get; }
	public override int Depth { get; }
	public override string BaseURI { get; }
	public override bool IsEmptyElement { get; }
	public override int AttributeCount { get; }
	public override bool EOF { get; }
	public override ReadState ReadState { get; }
	public override XmlNameTable NameTable { get; }
	public bool Namespaces { get; }

	// Methods

	// RVA: 0x11B1468 Offset: 0x11AD468 VA: 0x11B1468 Slot: 6
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x11B1488 Offset: 0x11AD488 VA: 0x11B1488 Slot: 8
	public override string get_LocalName() { }

	// RVA: 0x11B14A8 Offset: 0x11AD4A8 VA: 0x11B14A8 Slot: 9
	public override string get_NamespaceURI() { }

	// RVA: 0x11B14C8 Offset: 0x11AD4C8 VA: 0x11B14C8 Slot: 10
	public override string get_Prefix() { }

	// RVA: 0x11B14E8 Offset: 0x11AD4E8 VA: 0x11B14E8 Slot: 11
	public override string get_Value() { }

	// RVA: 0x11B1508 Offset: 0x11AD508 VA: 0x11B1508 Slot: 12
	public override int get_Depth() { }

	// RVA: 0x11B1528 Offset: 0x11AD528 VA: 0x11B1528 Slot: 13
	public override string get_BaseURI() { }

	// RVA: 0x11B154C Offset: 0x11AD54C VA: 0x11B154C Slot: 14
	public override bool get_IsEmptyElement() { }

	// RVA: 0x11B1570 Offset: 0x11AD570 VA: 0x11B1570 Slot: 21
	public override int get_AttributeCount() { }

	// RVA: 0x11B1594 Offset: 0x11AD594 VA: 0x11B1594 Slot: 22
	public override string GetAttribute(string name) { }

	// RVA: 0x11B15B8 Offset: 0x11AD5B8 VA: 0x11B15B8 Slot: 23
	public override string GetAttribute(string localName, string namespaceURI) { }

	// RVA: 0x11B15DC Offset: 0x11AD5DC VA: 0x11B15DC Slot: 24
	public override string GetAttribute(int i) { }

	// RVA: 0x11B1600 Offset: 0x11AD600 VA: 0x11B1600 Slot: 25
	public override bool MoveToAttribute(string name) { }

	// RVA: 0x11B1624 Offset: 0x11AD624 VA: 0x11B1624 Slot: 27
	public override bool MoveToFirstAttribute() { }

	// RVA: 0x11B1648 Offset: 0x11AD648 VA: 0x11B1648 Slot: 28
	public override bool MoveToNextAttribute() { }

	// RVA: 0x11B166C Offset: 0x11AD66C VA: 0x11B166C Slot: 29
	public override bool MoveToElement() { }

	// RVA: 0x11B1690 Offset: 0x11AD690 VA: 0x11B1690 Slot: 30
	public override bool ReadAttributeValue() { }

	// RVA: 0x11B16B4 Offset: 0x11AD6B4 VA: 0x11B16B4 Slot: 31
	public override bool Read() { }

	// RVA: 0x11B16D8 Offset: 0x11AD6D8 VA: 0x11B16D8 Slot: 32
	public override bool get_EOF() { }

	// RVA: 0x11B16FC Offset: 0x11AD6FC VA: 0x11B16FC Slot: 34
	public override ReadState get_ReadState() { }

	// RVA: 0x11B1720 Offset: 0x11AD720 VA: 0x11B1720 Slot: 36
	public override XmlNameTable get_NameTable() { }

	// RVA: 0x11B1744 Offset: 0x11AD744 VA: 0x11B1744 Slot: 37
	public override string LookupNamespace(string prefix) { }

	// RVA: 0x11B177C Offset: 0x11AD77C VA: 0x11B177C Slot: 39
	public override void ResolveEntity() { }

	// RVA: 0x11B17A0 Offset: 0x11AD7A0 VA: 0x11B17A0
	public bool get_Namespaces() { }
}


// Namespace: 
private enum XmlValidatingReaderImpl.ParsingFunction // TypeDefIndex: 2645
{
	// Fields
	public int value__; // 0x0
	public const XmlValidatingReaderImpl.ParsingFunction Read = 0;
	public const XmlValidatingReaderImpl.ParsingFunction Init = 1;
	public const XmlValidatingReaderImpl.ParsingFunction ParseDtdFromContext = 2;
	public const XmlValidatingReaderImpl.ParsingFunction ResolveEntityInternally = 3;
	public const XmlValidatingReaderImpl.ParsingFunction InReadBinaryContent = 4;
	public const XmlValidatingReaderImpl.ParsingFunction ReaderClosed = 5;
	public const XmlValidatingReaderImpl.ParsingFunction Error = 6;
	public const XmlValidatingReaderImpl.ParsingFunction None = 7;
}


// Namespace: 
internal class XmlValidatingReaderImpl.ValidationEventHandling : IValidationEventHandling // TypeDefIndex: 2646
{
	// Fields
	private XmlValidatingReaderImpl reader; // 0x10
	private ValidationEventHandler eventHandler; // 0x18

	// Properties
	private object System.Xml.IValidationEventHandling.EventHandler { get; }

	// Methods

	// RVA: 0x11B1BF8 Offset: 0x11ADBF8 VA: 0x11B1BF8
	internal void .ctor(XmlValidatingReaderImpl reader) { }

	// RVA: 0x11B2D8C Offset: 0x11AED8C VA: 0x11B2D8C Slot: 4
	private object System.Xml.IValidationEventHandling.get_EventHandler() { }

	// RVA: 0x11B2D94 Offset: 0x11AED94 VA: 0x11B2D94 Slot: 5
	private void System.Xml.IValidationEventHandling.SendEvent(Exception exception, XmlSeverityType severity) { }

	// RVA: 0x11B1C20 Offset: 0x11ADC20 VA: 0x11B1C20
	internal void AddHandler(ValidationEventHandler handler) { }
}


// Namespace: System.Xml
internal sealed class XmlValidatingReaderImpl : XmlReader, IXmlLineInfo, IXmlNamespaceResolver // TypeDefIndex: 2647
{
	// Fields
	private XmlReader coreReader; // 0x10
	private XmlTextReaderImpl coreReaderImpl; // 0x18
	private IXmlNamespaceResolver coreReaderNSResolver; // 0x20
	private ValidationType validationType; // 0x28
	private BaseValidator validator; // 0x30
	private XmlSchemaCollection schemaCollection; // 0x38
	private bool processIdentityConstraints; // 0x40
	private XmlValidatingReaderImpl.ParsingFunction parsingFunction; // 0x44
	private XmlValidatingReaderImpl.ValidationEventHandling eventHandling; // 0x48
	private XmlParserContext parserContext; // 0x50
	private ReadContentAsBinaryHelper readBinaryHelper; // 0x58
	private XmlReader outerReader; // 0x60
	private static XmlResolver s_tempResolver; // 0x0

	// Properties
	public override XmlReaderSettings Settings { get; }
	public override XmlNodeType NodeType { get; }
	public override string Name { get; }
	public override string LocalName { get; }
	public override string NamespaceURI { get; }
	public override string Prefix { get; }
	public override string Value { get; }
	public override int Depth { get; }
	public override string BaseURI { get; }
	public override bool IsEmptyElement { get; }
	public override bool IsDefault { get; }
	public override char QuoteChar { get; }
	public override XmlSpace XmlSpace { get; }
	public override string XmlLang { get; }
	public override ReadState ReadState { get; }
	public override bool EOF { get; }
	public override XmlNameTable NameTable { get; }
	public override int AttributeCount { get; }
	public override bool CanResolveEntity { get; }
	public int LineNumber { get; }
	public int LinePosition { get; }
	internal bool Namespaces { get; }
	internal override XmlNamespaceManager NamespaceManager { get; }
	internal bool StandAlone { get; }
	internal object SchemaTypeObject { set; }
	internal object TypedValueObject { get; set; }
	internal override IDtdInfo DtdInfo { get; }

	// Methods

	// RVA: 0x11B17E0 Offset: 0x11AD7E0 VA: 0x11B17E0
	internal void .ctor(XmlReader reader, ValidationEventHandler settingsEventHandler, bool processIdentityConstraints) { }

	// RVA: 0x11B1DDC Offset: 0x11ADDDC VA: 0x11B1DDC Slot: 5
	public override XmlReaderSettings get_Settings() { }

	// RVA: 0x11B1EAC Offset: 0x11ADEAC VA: 0x11B1EAC Slot: 6
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x11B1ECC Offset: 0x11ADECC VA: 0x11B1ECC Slot: 7
	public override string get_Name() { }

	// RVA: 0x11B1EEC Offset: 0x11ADEEC VA: 0x11B1EEC Slot: 8
	public override string get_LocalName() { }

	// RVA: 0x11B1F0C Offset: 0x11ADF0C VA: 0x11B1F0C Slot: 9
	public override string get_NamespaceURI() { }

	// RVA: 0x11B1F2C Offset: 0x11ADF2C VA: 0x11B1F2C Slot: 10
	public override string get_Prefix() { }

	// RVA: 0x11B1F4C Offset: 0x11ADF4C VA: 0x11B1F4C Slot: 11
	public override string get_Value() { }

	// RVA: 0x11B1F6C Offset: 0x11ADF6C VA: 0x11B1F6C Slot: 12
	public override int get_Depth() { }

	// RVA: 0x11B1F8C Offset: 0x11ADF8C VA: 0x11B1F8C Slot: 13
	public override string get_BaseURI() { }

	// RVA: 0x11B1FB0 Offset: 0x11ADFB0 VA: 0x11B1FB0 Slot: 14
	public override bool get_IsEmptyElement() { }

	// RVA: 0x11B1FD4 Offset: 0x11ADFD4 VA: 0x11B1FD4 Slot: 15
	public override bool get_IsDefault() { }

	// RVA: 0x11B1FF8 Offset: 0x11ADFF8 VA: 0x11B1FF8 Slot: 16
	public override char get_QuoteChar() { }

	// RVA: 0x11B201C Offset: 0x11AE01C VA: 0x11B201C Slot: 17
	public override XmlSpace get_XmlSpace() { }

	// RVA: 0x11B2040 Offset: 0x11AE040 VA: 0x11B2040 Slot: 18
	public override string get_XmlLang() { }

	// RVA: 0x11B2064 Offset: 0x11AE064 VA: 0x11B2064 Slot: 34
	public override ReadState get_ReadState() { }

	// RVA: 0x11B20A0 Offset: 0x11AE0A0 VA: 0x11B20A0 Slot: 32
	public override bool get_EOF() { }

	// RVA: 0x11B20C4 Offset: 0x11AE0C4 VA: 0x11B20C4 Slot: 36
	public override XmlNameTable get_NameTable() { }

	// RVA: 0x11B20E8 Offset: 0x11AE0E8 VA: 0x11B20E8 Slot: 21
	public override int get_AttributeCount() { }

	// RVA: 0x11B210C Offset: 0x11AE10C VA: 0x11B210C Slot: 22
	public override string GetAttribute(string name) { }

	// RVA: 0x11B2130 Offset: 0x11AE130 VA: 0x11B2130 Slot: 23
	public override string GetAttribute(string localName, string namespaceURI) { }

	// RVA: 0x11B2154 Offset: 0x11AE154 VA: 0x11B2154 Slot: 24
	public override string GetAttribute(int i) { }

	// RVA: 0x11B2178 Offset: 0x11AE178 VA: 0x11B2178 Slot: 25
	public override bool MoveToAttribute(string name) { }

	// RVA: 0x11B21B0 Offset: 0x11AE1B0 VA: 0x11B21B0 Slot: 26
	public override void MoveToAttribute(int i) { }

	// RVA: 0x11B21E0 Offset: 0x11AE1E0 VA: 0x11B21E0 Slot: 27
	public override bool MoveToFirstAttribute() { }

	// RVA: 0x11B2218 Offset: 0x11AE218 VA: 0x11B2218 Slot: 28
	public override bool MoveToNextAttribute() { }

	// RVA: 0x11B2250 Offset: 0x11AE250 VA: 0x11B2250 Slot: 29
	public override bool MoveToElement() { }

	// RVA: 0x11B2288 Offset: 0x11AE288 VA: 0x11B2288 Slot: 31
	public override bool Read() { }

	// RVA: 0x11B2648 Offset: 0x11AE648 VA: 0x11B2648 Slot: 33
	public override void Close() { }

	// RVA: 0x11B267C Offset: 0x11AE67C VA: 0x11B267C Slot: 37
	public override string LookupNamespace(string prefix) { }

	// RVA: 0x11B26A0 Offset: 0x11AE6A0 VA: 0x11B26A0 Slot: 30
	public override bool ReadAttributeValue() { }

	// RVA: 0x11B26F8 Offset: 0x11AE6F8 VA: 0x11B26F8 Slot: 38
	public override bool get_CanResolveEntity() { }

	// RVA: 0x11B2700 Offset: 0x11AE700 VA: 0x11B2700 Slot: 39
	public override void ResolveEntity() { }

	// RVA: 0x11B2734 Offset: 0x11AE734 VA: 0x11B2734
	internal void MoveOffEntityReference() { }

	// RVA: 0x11B27E4 Offset: 0x11AE7E4 VA: 0x11B27E4 Slot: 42
	public override string ReadString() { }

	// RVA: 0x11B2800 Offset: 0x11AE800 VA: 0x11B2800 Slot: 53
	public bool HasLineInfo() { }

	// RVA: 0x11B2808 Offset: 0x11AE808 VA: 0x11B2808 Slot: 54
	public int get_LineNumber() { }

	// RVA: 0x11B28F0 Offset: 0x11AE8F0 VA: 0x11B28F0 Slot: 55
	public int get_LinePosition() { }

	// RVA: 0x11B29D8 Offset: 0x11AE9D8 VA: 0x11B29D8 Slot: 56
	private IDictionary<string, string> System.Xml.IXmlNamespaceResolver.GetNamespacesInScope(XmlNamespaceScope scope) { }

	// RVA: 0x11B2A84 Offset: 0x11AEA84 VA: 0x11B2A84 Slot: 57
	private string System.Xml.IXmlNamespaceResolver.LookupNamespace(string prefix) { }

	// RVA: 0x11B2A94 Offset: 0x11AEA94 VA: 0x11B2A94 Slot: 58
	private string System.Xml.IXmlNamespaceResolver.LookupPrefix(string namespaceName) { }

	// RVA: 0x11B29DC Offset: 0x11AE9DC VA: 0x11B29DC
	internal IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope) { }

	// RVA: 0x11B2A98 Offset: 0x11AEA98 VA: 0x11B2A98
	internal string LookupPrefix(string namespaceName) { }

	// RVA: 0x11B17C4 Offset: 0x11AD7C4 VA: 0x11B17C4
	internal bool get_Namespaces() { }

	// RVA: 0x11B244C Offset: 0x11AE44C VA: 0x11B244C
	private void ParseDtdFromParserContext() { }

	// RVA: 0x11B2B44 Offset: 0x11AEB44 VA: 0x11B2B44
	private void ValidateDtd() { }

	// RVA: 0x11B25C0 Offset: 0x11AE5C0 VA: 0x11B25C0
	private void ResolveEntityInternally() { }

	// RVA: 0x11B1CA0 Offset: 0x11ADCA0 VA: 0x11B1CA0
	private void SetupValidation(ValidationType valType) { }

	// RVA: 0x11B1B24 Offset: 0x11ADB24 VA: 0x11B1B24
	private XmlResolver GetResolver() { }

	// RVA: 0x11B2360 Offset: 0x11AE360 VA: 0x11B2360
	private void ProcessCoreReaderEvent() { }

	// RVA: 0x11B2BB0 Offset: 0x11AEBB0 VA: 0x11B2BB0 Slot: 51
	internal override XmlNamespaceManager get_NamespaceManager() { }

	// RVA: 0x11B2BCC Offset: 0x11AEBCC VA: 0x11B2BCC
	internal bool get_StandAlone() { }

	// RVA: 0x11B2BE8 Offset: 0x11AEBE8 VA: 0x11B2BE8
	internal void set_SchemaTypeObject(object value) { }

	// RVA: 0x11B2C04 Offset: 0x11AEC04 VA: 0x11B2C04
	internal object get_TypedValueObject() { }

	// RVA: 0x11B2C20 Offset: 0x11AEC20 VA: 0x11B2C20
	internal void set_TypedValueObject(object value) { }

	// RVA: 0x11B2C3C Offset: 0x11AEC3C VA: 0x11B2C3C
	internal bool AddDefaultAttribute(SchemaAttDef attdef) { }

	// RVA: 0x11B2C58 Offset: 0x11AEC58 VA: 0x11B2C58 Slot: 52
	internal override IDtdInfo get_DtdInfo() { }

	// RVA: 0x11B2C74 Offset: 0x11AEC74 VA: 0x11B2C74
	internal void ValidateDefaultAttributeOnUse(IDtdDefaultAttributeInfo defaultAttribute, XmlTextReaderImpl coreReader) { }
}


// Namespace: 
private enum XmlWellFormedWriter.State // TypeDefIndex: 2648
{
	// Fields
	public int value__; // 0x0
	public const XmlWellFormedWriter.State Start = 0;
	public const XmlWellFormedWriter.State TopLevel = 1;
	public const XmlWellFormedWriter.State Document = 2;
	public const XmlWellFormedWriter.State Element = 3;
	public const XmlWellFormedWriter.State Content = 4;
	public const XmlWellFormedWriter.State B64Content = 5;
	public const XmlWellFormedWriter.State B64Attribute = 6;
	public const XmlWellFormedWriter.State AfterRootEle = 7;
	public const XmlWellFormedWriter.State Attribute = 8;
	public const XmlWellFormedWriter.State SpecialAttr = 9;
	public const XmlWellFormedWriter.State EndDocument = 10;
	public const XmlWellFormedWriter.State RootLevelAttr = 11;
	public const XmlWellFormedWriter.State RootLevelSpecAttr = 12;
	public const XmlWellFormedWriter.State RootLevelB64Attr = 13;
	public const XmlWellFormedWriter.State AfterRootLevelAttr = 14;
	public const XmlWellFormedWriter.State Closed = 15;
	public const XmlWellFormedWriter.State Error = 16;
	public const XmlWellFormedWriter.State StartContent = 101;
	public const XmlWellFormedWriter.State StartContentEle = 102;
	public const XmlWellFormedWriter.State StartContentB64 = 103;
	public const XmlWellFormedWriter.State StartDoc = 104;
	public const XmlWellFormedWriter.State StartDocEle = 106;
	public const XmlWellFormedWriter.State EndAttrSEle = 107;
	public const XmlWellFormedWriter.State EndAttrEEle = 108;
	public const XmlWellFormedWriter.State EndAttrSCont = 109;
	public const XmlWellFormedWriter.State EndAttrSAttr = 111;
	public const XmlWellFormedWriter.State PostB64Cont = 112;
	public const XmlWellFormedWriter.State PostB64Attr = 113;
	public const XmlWellFormedWriter.State PostB64RootAttr = 114;
	public const XmlWellFormedWriter.State StartFragEle = 115;
	public const XmlWellFormedWriter.State StartFragCont = 116;
	public const XmlWellFormedWriter.State StartFragB64 = 117;
	public const XmlWellFormedWriter.State StartRootLevelAttr = 118;
}


// Namespace: 
private enum XmlWellFormedWriter.Token // TypeDefIndex: 2649
{
	// Fields
	public int value__; // 0x0
	public const XmlWellFormedWriter.Token StartDocument = 0;
	public const XmlWellFormedWriter.Token EndDocument = 1;
	public const XmlWellFormedWriter.Token PI = 2;
	public const XmlWellFormedWriter.Token Comment = 3;
	public const XmlWellFormedWriter.Token Dtd = 4;
	public const XmlWellFormedWriter.Token StartElement = 5;
	public const XmlWellFormedWriter.Token EndElement = 6;
	public const XmlWellFormedWriter.Token StartAttribute = 7;
	public const XmlWellFormedWriter.Token EndAttribute = 8;
	public const XmlWellFormedWriter.Token Text = 9;
	public const XmlWellFormedWriter.Token CData = 10;
	public const XmlWellFormedWriter.Token AtomicValue = 11;
	public const XmlWellFormedWriter.Token Base64 = 12;
	public const XmlWellFormedWriter.Token RawData = 13;
	public const XmlWellFormedWriter.Token Whitespace = 14;
}


// Namespace: 
private class XmlWellFormedWriter.NamespaceResolverProxy : IXmlNamespaceResolver // TypeDefIndex: 2650
{
	// Fields
	private XmlWellFormedWriter wfWriter; // 0x10

	// Methods

	// RVA: 0x11B3290 Offset: 0x11AF290 VA: 0x11B3290
	internal void .ctor(XmlWellFormedWriter wfWriter) { }

	// RVA: 0x11BA038 Offset: 0x11B6038 VA: 0x11BA038 Slot: 4
	private IDictionary<string, string> System.Xml.IXmlNamespaceResolver.GetNamespacesInScope(XmlNamespaceScope scope) { }

	// RVA: 0x11BA070 Offset: 0x11B6070 VA: 0x11BA070 Slot: 5
	private string System.Xml.IXmlNamespaceResolver.LookupNamespace(string prefix) { }

	// RVA: 0x11BA088 Offset: 0x11B6088 VA: 0x11BA088 Slot: 6
	private string System.Xml.IXmlNamespaceResolver.LookupPrefix(string namespaceName) { }
}


// Namespace: 
private struct XmlWellFormedWriter.ElementScope // TypeDefIndex: 2651
{
	// Fields
	internal int prevNSTop; // 0x0
	internal string prefix; // 0x8
	internal string localName; // 0x10
	internal string namespaceUri; // 0x18
	internal XmlSpace xmlSpace; // 0x20
	internal string xmlLang; // 0x28

	// Methods

	// RVA: 0x11B32C8 Offset: 0x11AF2C8 VA: 0x11B32C8
	internal void Set(string prefix, string localName, string namespaceUri, int prevNSTop) { }

	// RVA: 0x11B4A10 Offset: 0x11B0A10 VA: 0x11B4A10
	internal void WriteEndElement(XmlRawWriter rawWriter) { }

	// RVA: 0x11B4D00 Offset: 0x11B0D00 VA: 0x11B4D00
	internal void WriteFullEndElement(XmlRawWriter rawWriter) { }
}


// Namespace: 
private enum XmlWellFormedWriter.NamespaceKind // TypeDefIndex: 2652
{
	// Fields
	public int value__; // 0x0
	public const XmlWellFormedWriter.NamespaceKind Written = 0;
	public const XmlWellFormedWriter.NamespaceKind NeedToWrite = 1;
	public const XmlWellFormedWriter.NamespaceKind Implied = 2;
	public const XmlWellFormedWriter.NamespaceKind Special = 3;
}


// Namespace: 
private struct XmlWellFormedWriter.Namespace // TypeDefIndex: 2653
{
	// Fields
	internal string prefix; // 0x0
	internal string namespaceUri; // 0x8
	internal XmlWellFormedWriter.NamespaceKind kind; // 0x10
	internal int prevNsIndex; // 0x14

	// Methods

	// RVA: 0x11B32B8 Offset: 0x11AF2B8 VA: 0x11B32B8
	internal void Set(string prefix, string namespaceUri, XmlWellFormedWriter.NamespaceKind kind) { }

	// RVA: 0x11B9664 Offset: 0x11B5664 VA: 0x11B9664
	internal void WriteDecl(XmlWriter writer, XmlRawWriter rawWriter) { }
}


// Namespace: 
private struct XmlWellFormedWriter.AttrName // TypeDefIndex: 2654
{
	// Fields
	internal string prefix; // 0x0
	internal string namespaceUri; // 0x8
	internal string localName; // 0x10
	internal int prev; // 0x18

	// Methods

	// RVA: 0x11B98B8 Offset: 0x11B58B8 VA: 0x11B98B8
	internal void Set(string prefix, string localName, string namespaceUri) { }

	// RVA: 0x11B98C8 Offset: 0x11B58C8 VA: 0x11B98C8
	internal bool IsDuplicate(string prefix, string localName, string namespaceUri) { }
}


// Namespace: 
private enum XmlWellFormedWriter.SpecialAttribute // TypeDefIndex: 2655
{
	// Fields
	public int value__; // 0x0
	public const XmlWellFormedWriter.SpecialAttribute No = 0;
	public const XmlWellFormedWriter.SpecialAttribute DefaultXmlns = 1;
	public const XmlWellFormedWriter.SpecialAttribute PrefixedXmlns = 2;
	public const XmlWellFormedWriter.SpecialAttribute XmlSpace = 3;
	public const XmlWellFormedWriter.SpecialAttribute XmlLang = 4;
}


// Namespace: 
private enum XmlWellFormedWriter.AttributeValueCache.ItemType // TypeDefIndex: 2656
{
	// Fields
	public int value__; // 0x0
	public const XmlWellFormedWriter.AttributeValueCache.ItemType EntityRef = 0;
	public const XmlWellFormedWriter.AttributeValueCache.ItemType CharEntity = 1;
	public const XmlWellFormedWriter.AttributeValueCache.ItemType SurrogateCharEntity = 2;
	public const XmlWellFormedWriter.AttributeValueCache.ItemType Whitespace = 3;
	public const XmlWellFormedWriter.AttributeValueCache.ItemType String = 4;
	public const XmlWellFormedWriter.AttributeValueCache.ItemType StringChars = 5;
	public const XmlWellFormedWriter.AttributeValueCache.ItemType Raw = 6;
	public const XmlWellFormedWriter.AttributeValueCache.ItemType RawChars = 7;
	public const XmlWellFormedWriter.AttributeValueCache.ItemType ValueString = 8;
}


// Namespace: 
private class XmlWellFormedWriter.AttributeValueCache.Item // TypeDefIndex: 2657
{
	// Fields
	internal XmlWellFormedWriter.AttributeValueCache.ItemType type; // 0x10
	internal object data; // 0x18

	// Methods

	// RVA: 0x11BA268 Offset: 0x11B6268 VA: 0x11BA268
	internal void .ctor() { }

	// RVA: 0x11BA270 Offset: 0x11B6270 VA: 0x11BA270
	internal void Set(XmlWellFormedWriter.AttributeValueCache.ItemType type, object data) { }
}


// Namespace: 
private class XmlWellFormedWriter.AttributeValueCache.BufferChunk // TypeDefIndex: 2658
{
	// Fields
	internal char[] buffer; // 0x10
	internal int index; // 0x18
	internal int count; // 0x1C

	// Methods

	// RVA: 0x11BA27C Offset: 0x11B627C VA: 0x11BA27C
	internal void .ctor(char[] buffer, int index, int count) { }
}


// Namespace: 
private class XmlWellFormedWriter.AttributeValueCache // TypeDefIndex: 2659
{
	// Fields
	private StringBuilder stringValue; // 0x10
	private string singleStringValue; // 0x18
	private XmlWellFormedWriter.AttributeValueCache.Item[] items; // 0x20
	private int firstItem; // 0x28
	private int lastItem; // 0x2C

	// Properties
	internal string StringValue { get; }

	// Methods

	// RVA: 0x11B6104 Offset: 0x11B2104 VA: 0x11B6104
	internal string get_StringValue() { }

	// RVA: 0x11B73B0 Offset: 0x11B33B0 VA: 0x11B73B0
	internal void WriteEntityRef(string name) { }

	// RVA: 0x11B76EC Offset: 0x11B36EC VA: 0x11B76EC
	internal void WriteCharEntity(char ch) { }

	// RVA: 0x11B7924 Offset: 0x11B3924 VA: 0x11B7924
	internal void WriteSurrogateCharEntity(char lowChar, char highChar) { }

	// RVA: 0x11B7B9C Offset: 0x11B3B9C VA: 0x11B7B9C
	internal void WriteWhitespace(string ws) { }

	// RVA: 0x11B7CDC Offset: 0x11B3CDC VA: 0x11B7CDC
	internal void WriteString(string text) { }

	// RVA: 0x11B7FA8 Offset: 0x11B3FA8 VA: 0x11B7FA8
	internal void WriteChars(char[] buffer, int index, int count) { }

	// RVA: 0x11B82B4 Offset: 0x11B42B4 VA: 0x11B82B4
	internal void WriteRaw(char[] buffer, int index, int count) { }

	// RVA: 0x11B8454 Offset: 0x11B4454 VA: 0x11B8454
	internal void WriteRaw(string data) { }

	// RVA: 0x11B8CE8 Offset: 0x11B4CE8 VA: 0x11B8CE8
	internal void WriteValue(string value) { }

	// RVA: 0x11B65F0 Offset: 0x11B25F0 VA: 0x11B65F0
	internal void Replay(XmlWriter writer) { }

	// RVA: 0x11B6914 Offset: 0x11B2914 VA: 0x11B6914
	internal void Trim() { }

	// RVA: 0x11B6D64 Offset: 0x11B2D64 VA: 0x11B6D64
	internal void Clear() { }

	// RVA: 0x11BA0AC Offset: 0x11B60AC VA: 0x11BA0AC
	private void StartComplexValue() { }

	// RVA: 0x11BA0E8 Offset: 0x11B60E8 VA: 0x11BA0E8
	private void AddItem(XmlWellFormedWriter.AttributeValueCache.ItemType type, object data) { }

	// RVA: 0x11B8E74 Offset: 0x11B4E74 VA: 0x11B8E74
	public void .ctor() { }
}


// Namespace: System.Xml
internal class XmlWellFormedWriter : XmlWriter // TypeDefIndex: 2660
{
	// Fields
	private XmlWriter writer; // 0x18
	private XmlRawWriter rawWriter; // 0x20
	private IXmlNamespaceResolver predefinedNamespaces; // 0x28
	private XmlWellFormedWriter.Namespace[] nsStack; // 0x30
	private int nsTop; // 0x38
	private Dictionary<string, int> nsHashtable; // 0x40
	private bool useNsHashtable; // 0x48
	private XmlWellFormedWriter.ElementScope[] elemScopeStack; // 0x50
	private int elemTop; // 0x58
	private XmlWellFormedWriter.AttrName[] attrStack; // 0x60
	private int attrCount; // 0x68
	private Dictionary<string, int> attrHashTable; // 0x70
	private XmlWellFormedWriter.SpecialAttribute specAttr; // 0x78
	private XmlWellFormedWriter.AttributeValueCache attrValueCache; // 0x80
	private string curDeclPrefix; // 0x88
	private XmlWellFormedWriter.State[] stateTable; // 0x90
	private XmlWellFormedWriter.State currentState; // 0x98
	private bool checkCharacters; // 0x9C
	private bool omitDuplNamespaces; // 0x9D
	private bool writeEndDocumentOnClose; // 0x9E
	private ConformanceLevel conformanceLevel; // 0xA0
	private bool dtdWritten; // 0xA4
	private bool xmlDeclFollows; // 0xA5
	private XmlCharType xmlCharType; // 0xA8
	private SecureStringHasher hasher; // 0xB0
	internal static readonly string[] stateName; // 0x0
	internal static readonly string[] tokenName; // 0x8
	private static WriteState[] state2WriteState; // 0x10
	private static readonly XmlWellFormedWriter.State[] StateTableDocument; // 0x18
	private static readonly XmlWellFormedWriter.State[] StateTableAuto; // 0x20

	// Properties
	public override WriteState WriteState { get; }
	private bool SaveAttrValue { get; }
	private bool InBase64 { get; }
	private bool IsClosedOrErrorState { get; }

	// Methods

	// RVA: 0x11B2EB0 Offset: 0x11AEEB0 VA: 0x11B2EB0
	internal void .ctor(XmlWriter writer, XmlWriterSettings settings) { }

	// RVA: 0x11B32E4 Offset: 0x11AF2E4 VA: 0x11B32E4 Slot: 27
	public override WriteState get_WriteState() { }

	// RVA: 0x11B3378 Offset: 0x11AF378 VA: 0x11B3378 Slot: 5
	public override void WriteStartDocument() { }

	// RVA: 0x11B3528 Offset: 0x11AF528 VA: 0x11B3528 Slot: 6
	public override void WriteStartDocument(bool standalone) { }

	// RVA: 0x11B3544 Offset: 0x11AF544 VA: 0x11B3544 Slot: 7
	public override void WriteEndDocument() { }

	// RVA: 0x11B3998 Offset: 0x11AF998 VA: 0x11B3998 Slot: 8
	public override void WriteDocType(string name, string pubid, string sysid, string subset) { }

	// RVA: 0x11B3E48 Offset: 0x11AFE48 VA: 0x11B3E48 Slot: 9
	public override void WriteStartElement(string prefix, string localName, string ns) { }

	// RVA: 0x11B482C Offset: 0x11B082C VA: 0x11B482C Slot: 10
	public override void WriteEndElement() { }

	// RVA: 0x11B4B1C Offset: 0x11B0B1C VA: 0x11B4B1C Slot: 11
	public override void WriteFullEndElement() { }

	// RVA: 0x11B4D30 Offset: 0x11B0D30 VA: 0x11B4D30 Slot: 12
	public override void WriteStartAttribute(string prefix, string localName, string namespaceName) { }

	// RVA: 0x11B58DC Offset: 0x11B18DC VA: 0x11B58DC Slot: 13
	public override void WriteEndAttribute() { }

	// RVA: 0x11B6D94 Offset: 0x11B2D94 VA: 0x11B6D94 Slot: 14
	public override void WriteCData(string text) { }

	// RVA: 0x11B6E98 Offset: 0x11B2E98 VA: 0x11B6E98 Slot: 15
	public override void WriteComment(string text) { }

	// RVA: 0x11B6F9C Offset: 0x11B2F9C VA: 0x11B6F9C Slot: 16
	public override void WriteProcessingInstruction(string name, string text) { }

	// RVA: 0x11B7240 Offset: 0x11B3240 VA: 0x11B7240 Slot: 17
	public override void WriteEntityRef(string name) { }

	// RVA: 0x11B754C Offset: 0x11B354C VA: 0x11B754C Slot: 18
	public override void WriteCharEntity(char ch) { }

	// RVA: 0x11B7780 Offset: 0x11B3780 VA: 0x11B7780 Slot: 21
	public override void WriteSurrogateCharEntity(char lowChar, char highChar) { }

	// RVA: 0x11B79E8 Offset: 0x11B39E8 VA: 0x11B79E8 Slot: 19
	public override void WriteWhitespace(string ws) { }

	// RVA: 0x11B7BEC Offset: 0x11B3BEC VA: 0x11B7BEC Slot: 20
	public override void WriteString(string text) { }

	// RVA: 0x11B7D4C Offset: 0x11B3D4C VA: 0x11B7D4C Slot: 22
	public override void WriteChars(char[] buffer, int index, int count) { }

	// RVA: 0x11B8058 Offset: 0x11B4058 VA: 0x11B8058 Slot: 23
	public override void WriteRaw(char[] buffer, int index, int count) { }

	// RVA: 0x11B8364 Offset: 0x11B4364 VA: 0x11B8364 Slot: 24
	public override void WriteRaw(string data) { }

	// RVA: 0x11B84A4 Offset: 0x11B44A4 VA: 0x11B84A4 Slot: 25
	public override void WriteBase64(byte[] buffer, int index, int count) { }

	// RVA: 0x11B86D4 Offset: 0x11B46D4 VA: 0x11B86D4 Slot: 28
	public override void Close() { }

	// RVA: 0x11B88B8 Offset: 0x11B48B8 VA: 0x11B88B8 Slot: 29
	public override void Flush() { }

	// RVA: 0x11B896C Offset: 0x11B496C VA: 0x11B896C Slot: 30
	public override string LookupPrefix(string ns) { }

	// RVA: 0x11B8BE8 Offset: 0x11B4BE8 VA: 0x11B8BE8 Slot: 31
	public override void WriteValue(string value) { }

	// RVA: 0x11B8D38 Offset: 0x11B4D38 VA: 0x11B8D38 Slot: 26
	public override void WriteBinHex(byte[] buffer, int index, int count) { }

	// RVA: 0x11B73A0 Offset: 0x11B33A0 VA: 0x11B73A0
	private bool get_SaveAttrValue() { }

	// RVA: 0x11B8890 Offset: 0x11B4890 VA: 0x11B8890
	private bool get_InBase64() { }

	// RVA: 0x11B53E4 Offset: 0x11B13E4 VA: 0x11B53E4
	private void SetSpecialAttribute(XmlWellFormedWriter.SpecialAttribute special) { }

	// RVA: 0x11B3380 Offset: 0x11AF380 VA: 0x11B3380
	private void WriteStartDocumentImpl(XmlStandalone standalone) { }

	// RVA: 0x11B8EDC Offset: 0x11B4EDC VA: 0x11B8EDC
	private void StartFragment() { }

	// RVA: 0x11B4430 Offset: 0x11B0430 VA: 0x11B4430
	private void PushNamespaceImplicit(string prefix, string ns) { }

	// RVA: 0x11B6138 Offset: 0x11B2138 VA: 0x11B6138
	private bool PushNamespaceExplicit(string prefix, string ns) { }

	// RVA: 0x11B8FC4 Offset: 0x11B4FC4 VA: 0x11B8FC4
	private void AddNamespace(string prefix, string ns, XmlWellFormedWriter.NamespaceKind kind) { }

	// RVA: 0x11B924C Offset: 0x11B524C VA: 0x11B924C
	private void AddToNamespaceHashtable(int namespaceIndex) { }

	// RVA: 0x11B8EE8 Offset: 0x11B4EE8 VA: 0x11B8EE8
	private int LookupNamespaceIndex(string prefix) { }

	// RVA: 0x11B4A40 Offset: 0x11B0A40 VA: 0x11B4A40
	private void PopNamespaces(int indexFrom, int indexTo) { }

	// RVA: 0x11B913C Offset: 0x11B513C VA: 0x11B913C
	private static XmlException DupAttrException(string prefix, string localName) { }

	// RVA: 0x11B3694 Offset: 0x11AF694 VA: 0x11B3694
	private void AdvanceState(XmlWellFormedWriter.Token token) { }

	// RVA: 0x11B959C Offset: 0x11B559C VA: 0x11B959C
	private void StartElementContent() { }

	// RVA: 0x11B9338 Offset: 0x11B5338 VA: 0x11B9338
	private static string GetStateName(XmlWellFormedWriter.State state) { }

	// RVA: 0x11B42F0 Offset: 0x11B02F0 VA: 0x11B42F0
	internal string LookupNamespace(string prefix) { }

	// RVA: 0x11B55A0 Offset: 0x11B15A0 VA: 0x11B55A0
	private string LookupLocalNamespace(string prefix) { }

	// RVA: 0x11B546C Offset: 0x11B146C VA: 0x11B546C
	private string GeneratePrefix() { }

	// RVA: 0x11B41F0 Offset: 0x11B01F0 VA: 0x11B41F0
	private void CheckNCName(string ncname) { }

	// RVA: 0x11B97A0 Offset: 0x11B57A0 VA: 0x11B97A0
	private static Exception InvalidCharsException(string name, int badCharIndex) { }

	// RVA: 0x11B93D8 Offset: 0x11B53D8 VA: 0x11B93D8
	private void ThrowInvalidStateTransition(XmlWellFormedWriter.Token token, XmlWellFormedWriter.State currentState) { }

	// RVA: 0x11B8E64 Offset: 0x11B4E64 VA: 0x11B8E64
	private bool get_IsClosedOrErrorState() { }

	// RVA: 0x11B5670 Offset: 0x11B1670 VA: 0x11B5670
	private void AddAttribute(string prefix, string localName, string namespaceName) { }

	// RVA: 0x11B9934 Offset: 0x11B5934 VA: 0x11B9934
	private void AddToAttrHashTable(int attributeIndex) { }

	// RVA: 0x11B9A6C Offset: 0x11B5A6C VA: 0x11B9A6C
	private static void .cctor() { }
}


// Namespace: System.Xml
public enum WriteState // TypeDefIndex: 2661
{
	// Fields
	public int value__; // 0x0
	public const WriteState Start = 0;
	public const WriteState Prolog = 1;
	public const WriteState Element = 2;
	public const WriteState Attribute = 3;
	public const WriteState Content = 4;
	public const WriteState Closed = 5;
	public const WriteState Error = 6;
}


// Namespace: System.Xml
public abstract class XmlWriter : IDisposable // TypeDefIndex: 2662
{
	// Fields
	private char[] writeNodeBuffer; // 0x10

	// Properties
	public abstract WriteState WriteState { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void WriteStartDocument();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void WriteStartDocument(bool standalone);

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void WriteEndDocument();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract void WriteDocType(string name, string pubid, string sysid, string subset);

	// RVA: 0x11BA2B8 Offset: 0x11B62B8 VA: 0x11BA2B8
	public void WriteStartElement(string localName, string ns) { }

	// RVA: -1 Offset: -1 Slot: 9
	public abstract void WriteStartElement(string prefix, string localName, string ns);

	// RVA: -1 Offset: -1 Slot: 10
	public abstract void WriteEndElement();

	// RVA: -1 Offset: -1 Slot: 11
	public abstract void WriteFullEndElement();

	// RVA: 0x11BA2D0 Offset: 0x11B62D0 VA: 0x11BA2D0
	public void WriteAttributeString(string localName, string ns, string value) { }

	// RVA: 0x11BA32C Offset: 0x11B632C VA: 0x11BA32C
	public void WriteAttributeString(string localName, string value) { }

	// RVA: 0x11BA388 Offset: 0x11B6388 VA: 0x11BA388
	public void WriteAttributeString(string prefix, string localName, string ns, string value) { }

	// RVA: -1 Offset: -1 Slot: 12
	public abstract void WriteStartAttribute(string prefix, string localName, string ns);

	// RVA: -1 Offset: -1 Slot: 13
	public abstract void WriteEndAttribute();

	// RVA: -1 Offset: -1 Slot: 14
	public abstract void WriteCData(string text);

	// RVA: -1 Offset: -1 Slot: 15
	public abstract void WriteComment(string text);

	// RVA: -1 Offset: -1 Slot: 16
	public abstract void WriteProcessingInstruction(string name, string text);

	// RVA: -1 Offset: -1 Slot: 17
	public abstract void WriteEntityRef(string name);

	// RVA: -1 Offset: -1 Slot: 18
	public abstract void WriteCharEntity(char ch);

	// RVA: -1 Offset: -1 Slot: 19
	public abstract void WriteWhitespace(string ws);

	// RVA: -1 Offset: -1 Slot: 20
	public abstract void WriteString(string text);

	// RVA: -1 Offset: -1 Slot: 21
	public abstract void WriteSurrogateCharEntity(char lowChar, char highChar);

	// RVA: -1 Offset: -1 Slot: 22
	public abstract void WriteChars(char[] buffer, int index, int count);

	// RVA: -1 Offset: -1 Slot: 23
	public abstract void WriteRaw(char[] buffer, int index, int count);

	// RVA: -1 Offset: -1 Slot: 24
	public abstract void WriteRaw(string data);

	// RVA: -1 Offset: -1 Slot: 25
	public abstract void WriteBase64(byte[] buffer, int index, int count);

	// RVA: 0x11BA3D8 Offset: 0x11B63D8 VA: 0x11BA3D8 Slot: 26
	public virtual void WriteBinHex(byte[] buffer, int index, int count) { }

	// RVA: -1 Offset: -1 Slot: 27
	public abstract WriteState get_WriteState();

	// RVA: 0x11BA3F4 Offset: 0x11B63F4 VA: 0x11BA3F4 Slot: 28
	public virtual void Close() { }

	// RVA: -1 Offset: -1 Slot: 29
	public abstract void Flush();

	// RVA: -1 Offset: -1 Slot: 30
	public abstract string LookupPrefix(string ns);

	// RVA: 0x11BA3F8 Offset: 0x11B63F8 VA: 0x11BA3F8 Slot: 31
	public virtual void WriteValue(string value) { }

	// RVA: 0x11BA410 Offset: 0x11B6410 VA: 0x11BA410 Slot: 32
	public virtual void WriteAttributes(XmlReader reader, bool defattr) { }

	// RVA: 0x11BA68C Offset: 0x11B668C VA: 0x11BA68C Slot: 33
	public virtual void WriteNode(XmlReader reader, bool defattr) { }

	// RVA: 0x11BAAF0 Offset: 0x11B6AF0 VA: 0x11BAAF0
	public void WriteElementString(string localName, string ns, string value) { }

	// RVA: 0x11BAB54 Offset: 0x11B6B54 VA: 0x11BAB54 Slot: 4
	public void Dispose() { }

	// RVA: 0x11BAB68 Offset: 0x11B6B68 VA: 0x11BAB68 Slot: 34
	protected virtual void Dispose(bool disposing) { }

	// RVA: 0x11BABAC Offset: 0x11B6BAC VA: 0x11BABAC
	public static XmlWriter Create(Stream output, XmlWriterSettings settings) { }

	// RVA: 0x11BB110 Offset: 0x11B7110 VA: 0x11BB110
	public static XmlWriter Create(TextWriter output, XmlWriterSettings settings) { }

	// RVA: 0x11BB474 Offset: 0x11B7474 VA: 0x11BB474
	protected void .ctor() { }
}


// Namespace: System.Xml
public enum XmlOutputMethod // TypeDefIndex: 2663
{
	// Fields
	public int value__; // 0x0
	public const XmlOutputMethod Xml = 0;
	public const XmlOutputMethod Html = 1;
	public const XmlOutputMethod Text = 2;
	public const XmlOutputMethod AutoDetect = 3;
}


// Namespace: System.Xml
internal enum TriState // TypeDefIndex: 2664
{
	// Fields
	public int value__; // 0x0
	public const TriState Unknown = -1;
	public const TriState False = 0;
	public const TriState True = 1;
}


// Namespace: System.Xml
internal enum XmlStandalone // TypeDefIndex: 2665
{
	// Fields
	public int value__; // 0x0
	public const XmlStandalone Omit = 0;
	public const XmlStandalone Yes = 1;
	public const XmlStandalone No = 2;
}


// Namespace: System.Xml
public sealed class XmlWriterSettings // TypeDefIndex: 2666
{
	// Fields
	private bool useAsync; // 0x10
	private Encoding encoding; // 0x18
	private bool omitXmlDecl; // 0x20
	private NewLineHandling newLineHandling; // 0x24
	private string newLineChars; // 0x28
	private TriState indent; // 0x30
	private string indentChars; // 0x38
	private bool newLineOnAttributes; // 0x40
	private bool closeOutput; // 0x41
	private NamespaceHandling namespaceHandling; // 0x44
	private ConformanceLevel conformanceLevel; // 0x48
	private bool checkCharacters; // 0x4C
	private bool writeEndDocumentOnClose; // 0x4D
	private XmlOutputMethod outputMethod; // 0x50
	private List<XmlQualifiedName> cdataSections; // 0x58
	private bool doNotEscapeUriAttributes; // 0x60
	private bool mergeCDataSections; // 0x61
	private string mediaType; // 0x68
	private string docTypeSystem; // 0x70
	private string docTypePublic; // 0x78
	private XmlStandalone standalone; // 0x80
	private bool autoXmlDecl; // 0x84
	private bool isReadOnly; // 0x85

	// Properties
	public bool OmitXmlDeclaration { set; }
	public bool Indent { get; set; }
	public ConformanceLevel ConformanceLevel { set; }
	public NamespaceHandling NamespaceHandling { set; }
	internal bool IsQuerySpecific { get; }

	// Methods

	// RVA: 0x11BAC14 Offset: 0x11B6C14 VA: 0x11BAC14
	public void .ctor() { }

	// RVA: 0x11BB58C Offset: 0x11B758C VA: 0x11BB58C
	public void set_OmitXmlDeclaration(bool value) { }

	// RVA: 0x11BB6A0 Offset: 0x11B76A0 VA: 0x11BB6A0
	public bool get_Indent() { }

	// RVA: 0x11BB6B0 Offset: 0x11B76B0 VA: 0x11BB6B0
	public void set_Indent(bool value) { }

	// RVA: 0x11BB718 Offset: 0x11B7718 VA: 0x11BB718
	public void set_ConformanceLevel(ConformanceLevel value) { }

	// RVA: 0x11BB7C4 Offset: 0x11B77C4 VA: 0x11BB7C4
	public void set_NamespaceHandling(NamespaceHandling value) { }

	// RVA: 0x11BB870 Offset: 0x11B7870 VA: 0x11BB870
	public XmlWriterSettings Clone() { }

	// RVA: 0x11BB938 Offset: 0x11B7938 VA: 0x11BB938
	internal bool get_IsQuerySpecific() { }

	// RVA: 0x11BAC98 Offset: 0x11B6C98 VA: 0x11BAC98
	internal XmlWriter CreateWriter(Stream output) { }

	// RVA: 0x11BB178 Offset: 0x11B7178 VA: 0x11BB178
	internal XmlWriter CreateWriter(TextWriter output) { }

	// RVA: 0x11BB5EC Offset: 0x11B75EC VA: 0x11BB5EC
	private void CheckReadOnly(string propertyName) { }

	// RVA: 0x11BB47C Offset: 0x11B747C VA: 0x11BB47C
	private void Initialize() { }
}


// Namespace: 
private enum XsdCachingReader.CachingReaderState // TypeDefIndex: 2667
{
	// Fields
	public int value__; // 0x0
	public const XsdCachingReader.CachingReaderState None = 0;
	public const XsdCachingReader.CachingReaderState Init = 1;
	public const XsdCachingReader.CachingReaderState Record = 2;
	public const XsdCachingReader.CachingReaderState Replay = 3;
	public const XsdCachingReader.CachingReaderState ReaderClosed = 4;
	public const XsdCachingReader.CachingReaderState Error = 5;
}


// Namespace: System.Xml
[DefaultMember("Item")]
internal class XsdCachingReader : XmlReader, IXmlLineInfo // TypeDefIndex: 2668
{
	// Fields
	private XmlReader coreReader; // 0x10
	private XmlNameTable coreReaderNameTable; // 0x18
	private ValidatingReaderNodeData[] contentEvents; // 0x20
	private ValidatingReaderNodeData[] attributeEvents; // 0x28
	private ValidatingReaderNodeData cachedNode; // 0x30
	private XsdCachingReader.CachingReaderState cacheState; // 0x38
	private int contentIndex; // 0x3C
	private int attributeCount; // 0x40
	private bool returnOriginalStringValues; // 0x44
	private CachingEventHandler cacheHandler; // 0x48
	private int currentAttrIndex; // 0x50
	private int currentContentIndex; // 0x54
	private bool readAhead; // 0x58
	private IXmlLineInfo lineInfo; // 0x60
	private ValidatingReaderNodeData textNode; // 0x68

	// Properties
	public override XmlReaderSettings Settings { get; }
	public override XmlNodeType NodeType { get; }
	public override string Name { get; }
	public override string LocalName { get; }
	public override string NamespaceURI { get; }
	public override string Prefix { get; }
	public override string Value { get; }
	public override int Depth { get; }
	public override string BaseURI { get; }
	public override bool IsEmptyElement { get; }
	public override bool IsDefault { get; }
	public override char QuoteChar { get; }
	public override XmlSpace XmlSpace { get; }
	public override string XmlLang { get; }
	public override int AttributeCount { get; }
	public override bool EOF { get; }
	public override ReadState ReadState { get; }
	public override XmlNameTable NameTable { get; }
	private int System.Xml.IXmlLineInfo.LineNumber { get; }
	private int System.Xml.IXmlLineInfo.LinePosition { get; }

	// Methods

	// RVA: 0x11BB97C Offset: 0x11B797C VA: 0x11BB97C
	internal void .ctor(XmlReader reader, IXmlLineInfo lineInfo, CachingEventHandler handlerMethod) { }

	// RVA: 0x11BBA38 Offset: 0x11B7A38 VA: 0x11BBA38
	private void Init() { }

	// RVA: 0x11BBE74 Offset: 0x11B7E74 VA: 0x11BBE74
	internal void Reset(XmlReader reader) { }

	// RVA: 0x11BBE7C Offset: 0x11B7E7C VA: 0x11BBE7C Slot: 5
	public override XmlReaderSettings get_Settings() { }

	// RVA: 0x11BBE9C Offset: 0x11B7E9C VA: 0x11BBE9C Slot: 6
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x11BBEB8 Offset: 0x11B7EB8 VA: 0x11BBEB8 Slot: 7
	public override string get_Name() { }

	// RVA: 0x11BBEDC Offset: 0x11B7EDC VA: 0x11BBEDC Slot: 8
	public override string get_LocalName() { }

	// RVA: 0x11BBEF8 Offset: 0x11B7EF8 VA: 0x11BBEF8 Slot: 9
	public override string get_NamespaceURI() { }

	// RVA: 0x11BBF14 Offset: 0x11B7F14 VA: 0x11BBF14 Slot: 10
	public override string get_Prefix() { }

	// RVA: 0x11BBF30 Offset: 0x11B7F30 VA: 0x11BBF30 Slot: 11
	public override string get_Value() { }

	// RVA: 0x11BBF60 Offset: 0x11B7F60 VA: 0x11BBF60 Slot: 12
	public override int get_Depth() { }

	// RVA: 0x11BBF7C Offset: 0x11B7F7C VA: 0x11BBF7C Slot: 13
	public override string get_BaseURI() { }

	// RVA: 0x11BBFA0 Offset: 0x11B7FA0 VA: 0x11BBFA0 Slot: 14
	public override bool get_IsEmptyElement() { }

	// RVA: 0x11BBFA8 Offset: 0x11B7FA8 VA: 0x11BBFA8 Slot: 15
	public override bool get_IsDefault() { }

	// RVA: 0x11BBFB0 Offset: 0x11B7FB0 VA: 0x11BBFB0 Slot: 16
	public override char get_QuoteChar() { }

	// RVA: 0x11BBFD4 Offset: 0x11B7FD4 VA: 0x11BBFD4 Slot: 17
	public override XmlSpace get_XmlSpace() { }

	// RVA: 0x11BBFF8 Offset: 0x11B7FF8 VA: 0x11BBFF8 Slot: 18
	public override string get_XmlLang() { }

	// RVA: 0x11BC01C Offset: 0x11B801C VA: 0x11BC01C Slot: 21
	public override int get_AttributeCount() { }

	// RVA: 0x11BC024 Offset: 0x11B8024 VA: 0x11BC024 Slot: 22
	public override string GetAttribute(string name) { }

	// RVA: 0x11BC200 Offset: 0x11B8200 VA: 0x11BC200 Slot: 23
	public override string GetAttribute(string name, string namespaceURI) { }

	// RVA: 0x11BC318 Offset: 0x11B8318 VA: 0x11BC318 Slot: 24
	public override string GetAttribute(int i) { }

	// RVA: 0x11BC3A8 Offset: 0x11B83A8 VA: 0x11BC3A8 Slot: 25
	public override bool MoveToAttribute(string name) { }

	// RVA: 0x11BC438 Offset: 0x11B8438 VA: 0x11BC438 Slot: 26
	public override void MoveToAttribute(int i) { }

	// RVA: 0x11BC4C8 Offset: 0x11B84C8 VA: 0x11BC4C8 Slot: 27
	public override bool MoveToFirstAttribute() { }

	// RVA: 0x11BC508 Offset: 0x11B8508 VA: 0x11BC508 Slot: 28
	public override bool MoveToNextAttribute() { }

	// RVA: 0x11BC55C Offset: 0x11B855C VA: 0x11BC55C Slot: 29
	public override bool MoveToElement() { }

	// RVA: 0x11BC5B0 Offset: 0x11B85B0 VA: 0x11BC5B0 Slot: 31
	public override bool Read() { }

	// RVA: 0x11BC884 Offset: 0x11B8884 VA: 0x11BC884
	internal ValidatingReaderNodeData RecordTextNode(string textValue, string originalStringValue, int depth, int lineNo, int linePos) { }

	// RVA: 0x11BC8FC Offset: 0x11B88FC VA: 0x11BC8FC
	internal void SwitchTextNodeAndEndElement(string textValue, string originalStringValue) { }

	// RVA: 0x11BC9FC Offset: 0x11B89FC VA: 0x11BC9FC
	internal void RecordEndElementNode() { }

	// RVA: 0x11BCB2C Offset: 0x11B8B2C VA: 0x11BCB2C Slot: 32
	public override bool get_EOF() { }

	// RVA: 0x11BCB68 Offset: 0x11B8B68 VA: 0x11BCB68 Slot: 33
	public override void Close() { }

	// RVA: 0x11BCB9C Offset: 0x11B8B9C VA: 0x11BCB9C Slot: 34
	public override ReadState get_ReadState() { }

	// RVA: 0x11BCBC0 Offset: 0x11B8BC0 VA: 0x11BCBC0 Slot: 35
	public override void Skip() { }

	// RVA: 0x11BCCD4 Offset: 0x11B8CD4 VA: 0x11BCCD4 Slot: 36
	public override XmlNameTable get_NameTable() { }

	// RVA: 0x11BCCDC Offset: 0x11B8CDC VA: 0x11BCCDC Slot: 37
	public override string LookupNamespace(string prefix) { }

	// RVA: 0x11BCD00 Offset: 0x11B8D00 VA: 0x11BCD00 Slot: 39
	public override void ResolveEntity() { }

	// RVA: 0x11BCD38 Offset: 0x11B8D38 VA: 0x11BCD38 Slot: 30
	public override bool ReadAttributeValue() { }

	// RVA: 0x11BCE0C Offset: 0x11B8E0C VA: 0x11BCE0C Slot: 53
	private bool System.Xml.IXmlLineInfo.HasLineInfo() { }

	// RVA: 0x11BCE14 Offset: 0x11B8E14 VA: 0x11BCE14 Slot: 54
	private int System.Xml.IXmlLineInfo.get_LineNumber() { }

	// RVA: 0x11BCE30 Offset: 0x11B8E30 VA: 0x11BCE30 Slot: 55
	private int System.Xml.IXmlLineInfo.get_LinePosition() { }

	// RVA: 0x11BCE4C Offset: 0x11B8E4C VA: 0x11BCE4C
	internal void SetToReplayMode() { }

	// RVA: 0x11BC874 Offset: 0x11B8874 VA: 0x11BC874
	private void ClearAttributesInfo() { }

	// RVA: 0x11BCE6C Offset: 0x11B8E6C VA: 0x11BCE6C
	private ValidatingReaderNodeData AddAttribute(int attIndex) { }

	// RVA: 0x11BBB88 Offset: 0x11B7B88 VA: 0x11BBB88
	private ValidatingReaderNodeData AddContent(XmlNodeType nodeType) { }

	// RVA: 0x11BBCFC Offset: 0x11B7CFC VA: 0x11BBCFC
	private void RecordAttributes() { }

	// RVA: 0x11BC0B0 Offset: 0x11B80B0 VA: 0x11BC0B0
	private int GetAttributeIndexWithoutPrefix(string name) { }

	// RVA: 0x11BC160 Offset: 0x11B8160 VA: 0x11BC160
	private int GetAttributeIndexWithPrefix(string name) { }

	// RVA: 0x11BCD84 Offset: 0x11B8D84 VA: 0x11BCD84
	private ValidatingReaderNodeData CreateDummyTextNode(string attributeValue, int depth) { }
}


// Namespace: System.Xml
internal sealed class CachingEventHandler : MulticastDelegate // TypeDefIndex: 2669
{
	// Methods

	// RVA: 0x11BCFC8 Offset: 0x11B8FC8 VA: 0x11BCFC8
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x11BD0C8 Offset: 0x11B90C8 VA: 0x11BD0C8 Slot: 12
	public virtual void Invoke(XsdCachingReader cachingReader) { }
}


// Namespace: System.Xml
internal class AttributePSVIInfo // TypeDefIndex: 2670
{
	// Fields
	internal string localName; // 0x10
	internal string namespaceUri; // 0x18
	internal object typedAttributeValue; // 0x20
	internal XmlSchemaInfo attributeSchemaInfo; // 0x28

	// Methods

	// RVA: 0x11BD0DC Offset: 0x11B90DC VA: 0x11BD0DC
	internal void .ctor() { }

	// RVA: 0x11BD140 Offset: 0x11B9140 VA: 0x11BD140
	internal void Reset() { }
}


// Namespace: 
private enum XsdValidatingReader.ValidatingReaderState // TypeDefIndex: 2671
{
	// Fields
	public int value__; // 0x0
	public const XsdValidatingReader.ValidatingReaderState None = 0;
	public const XsdValidatingReader.ValidatingReaderState Init = 1;
	public const XsdValidatingReader.ValidatingReaderState Read = 2;
	public const XsdValidatingReader.ValidatingReaderState OnDefaultAttribute = -1;
	public const XsdValidatingReader.ValidatingReaderState OnReadAttributeValue = -2;
	public const XsdValidatingReader.ValidatingReaderState OnAttribute = 3;
	public const XsdValidatingReader.ValidatingReaderState ClearAttributes = 4;
	public const XsdValidatingReader.ValidatingReaderState ParseInlineSchema = 5;
	public const XsdValidatingReader.ValidatingReaderState ReadAhead = 6;
	public const XsdValidatingReader.ValidatingReaderState OnReadBinaryContent = 7;
	public const XsdValidatingReader.ValidatingReaderState ReaderClosed = 8;
	public const XsdValidatingReader.ValidatingReaderState EOF = 9;
	public const XsdValidatingReader.ValidatingReaderState Error = 10;
}


// Namespace: System.Xml
internal class XsdValidatingReader : XmlReader, IXmlSchemaInfo, IXmlLineInfo, IXmlNamespaceResolver // TypeDefIndex: 2672
{
	// Fields
	private XmlReader coreReader; // 0x10
	private IXmlNamespaceResolver coreReaderNSResolver; // 0x18
	private IXmlNamespaceResolver thisNSResolver; // 0x20
	private XmlSchemaValidator validator; // 0x28
	private XmlResolver xmlResolver; // 0x30
	private ValidationEventHandler validationEvent; // 0x38
	private XsdValidatingReader.ValidatingReaderState validationState; // 0x40
	private XmlValueGetter valueGetter; // 0x48
	private XmlNamespaceManager nsManager; // 0x50
	private bool manageNamespaces; // 0x58
	private bool processInlineSchema; // 0x59
	private bool replayCache; // 0x5A
	private ValidatingReaderNodeData cachedNode; // 0x60
	private AttributePSVIInfo attributePSVI; // 0x68
	private int attributeCount; // 0x70
	private int coreReaderAttributeCount; // 0x74
	private int currentAttrIndex; // 0x78
	private AttributePSVIInfo[] attributePSVINodes; // 0x80
	private ArrayList defaultAttributes; // 0x88
	private Parser inlineSchemaParser; // 0x90
	private object atomicValue; // 0x98
	private XmlSchemaInfo xmlSchemaInfo; // 0xA0
	private string originalAtomicValueString; // 0xA8
	private XmlNameTable coreReaderNameTable; // 0xB0
	private XsdCachingReader cachingReader; // 0xB8
	private ValidatingReaderNodeData textNode; // 0xC0
	private string NsXmlNs; // 0xC8
	private string NsXs; // 0xD0
	private string NsXsi; // 0xD8
	private string XsiType; // 0xE0
	private string XsiNil; // 0xE8
	private string XsdSchema; // 0xF0
	private string XsiSchemaLocation; // 0xF8
	private string XsiNoNamespaceSchemaLocation; // 0x100
	private XmlCharType xmlCharType; // 0x108
	private IXmlLineInfo lineInfo; // 0x110
	private ReadContentAsBinaryHelper readBinaryHelper; // 0x118
	private XsdValidatingReader.ValidatingReaderState savedState; // 0x120
	private static Type TypeOfString; // 0x0

	// Properties
	public override XmlReaderSettings Settings { get; }
	public override XmlNodeType NodeType { get; }
	public override string Name { get; }
	public override string LocalName { get; }
	public override string NamespaceURI { get; }
	public override string Prefix { get; }
	public override string Value { get; }
	public override int Depth { get; }
	public override string BaseURI { get; }
	public override bool IsEmptyElement { get; }
	public override bool IsDefault { get; }
	public override char QuoteChar { get; }
	public override XmlSpace XmlSpace { get; }
	public override string XmlLang { get; }
	public override IXmlSchemaInfo SchemaInfo { get; }
	public override Type ValueType { get; }
	public override int AttributeCount { get; }
	public override bool EOF { get; }
	public override ReadState ReadState { get; }
	public override XmlNameTable NameTable { get; }
	private bool System.Xml.Schema.IXmlSchemaInfo.IsDefault { get; }
	private bool System.Xml.Schema.IXmlSchemaInfo.IsNil { get; }
	private XmlSchemaValidity System.Xml.Schema.IXmlSchemaInfo.Validity { get; }
	private XmlSchemaSimpleType System.Xml.Schema.IXmlSchemaInfo.MemberType { get; }
	private XmlSchemaType System.Xml.Schema.IXmlSchemaInfo.SchemaType { get; }
	private XmlSchemaElement System.Xml.Schema.IXmlSchemaInfo.SchemaElement { get; }
	private XmlSchemaAttribute System.Xml.Schema.IXmlSchemaInfo.SchemaAttribute { get; }
	public int LineNumber { get; }
	public int LinePosition { get; }
	private XmlSchemaInfo AttributeSchemaInfo { get; }

	// Methods

	// RVA: 0x11BD1A4 Offset: 0x11B91A4 VA: 0x11BD1A4
	internal void .ctor(XmlReader reader, XmlResolver xmlResolver, XmlReaderSettings readerSettings, XmlSchemaObject partialValidationType) { }

	// RVA: 0x11BD840 Offset: 0x11B9840 VA: 0x11BD840
	internal void .ctor(XmlReader reader, XmlResolver xmlResolver, XmlReaderSettings readerSettings) { }

	// RVA: 0x11BD338 Offset: 0x11B9338 VA: 0x11BD338
	private void Init() { }

	// RVA: 0x11BD660 Offset: 0x11B9660 VA: 0x11BD660
	private void SetupValidator(XmlReaderSettings readerSettings, XmlReader reader, XmlSchemaObject partialValidationType) { }

	// RVA: 0x11BD848 Offset: 0x11B9848 VA: 0x11BD848 Slot: 5
	public override XmlReaderSettings get_Settings() { }

	// RVA: 0x11BD918 Offset: 0x11B9918 VA: 0x11BD918 Slot: 6
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x11BD9A0 Offset: 0x11B99A0 VA: 0x11BD9A0 Slot: 7
	public override string get_Name() { }

	// RVA: 0x11BDAAC Offset: 0x11B9AAC VA: 0x11BDAAC Slot: 8
	public override string get_LocalName() { }

	// RVA: 0x11BDAE8 Offset: 0x11B9AE8 VA: 0x11BDAE8 Slot: 9
	public override string get_NamespaceURI() { }

	// RVA: 0x11BDB24 Offset: 0x11B9B24 VA: 0x11BDB24 Slot: 10
	public override string get_Prefix() { }

	// RVA: 0x11BDB60 Offset: 0x11B9B60 VA: 0x11BDB60 Slot: 11
	public override string get_Value() { }

	// RVA: 0x11BDB9C Offset: 0x11B9B9C VA: 0x11BDB9C Slot: 12
	public override int get_Depth() { }

	// RVA: 0x11BDBD8 Offset: 0x11B9BD8 VA: 0x11BDBD8 Slot: 13
	public override string get_BaseURI() { }

	// RVA: 0x11BDBFC Offset: 0x11B9BFC VA: 0x11BDBFC Slot: 14
	public override bool get_IsEmptyElement() { }

	// RVA: 0x11BDC20 Offset: 0x11B9C20 VA: 0x11BDC20 Slot: 15
	public override bool get_IsDefault() { }

	// RVA: 0x11BDC5C Offset: 0x11B9C5C VA: 0x11BDC5C Slot: 16
	public override char get_QuoteChar() { }

	// RVA: 0x11BDC80 Offset: 0x11B9C80 VA: 0x11BDC80 Slot: 17
	public override XmlSpace get_XmlSpace() { }

	// RVA: 0x11BDCA4 Offset: 0x11B9CA4 VA: 0x11BDCA4 Slot: 18
	public override string get_XmlLang() { }

	// RVA: 0x11BDCC8 Offset: 0x11B9CC8 VA: 0x11BDCC8 Slot: 19
	public override IXmlSchemaInfo get_SchemaInfo() { }

	// RVA: 0x11BDCCC Offset: 0x11B9CCC VA: 0x11BDCCC Slot: 20
	public override Type get_ValueType() { }

	// RVA: 0x11BDDB0 Offset: 0x11B9DB0 VA: 0x11BDDB0 Slot: 21
	public override int get_AttributeCount() { }

	// RVA: 0x11BDDB8 Offset: 0x11B9DB8 VA: 0x11BDDB8 Slot: 22
	public override string GetAttribute(string name) { }

	// RVA: 0x11BDFA8 Offset: 0x11B9FA8 VA: 0x11BDFA8 Slot: 23
	public override string GetAttribute(string name, string namespaceURI) { }

	// RVA: 0x11BE1EC Offset: 0x11BA1EC VA: 0x11BE1EC Slot: 24
	public override string GetAttribute(int i) { }

	// RVA: 0x11BE2C8 Offset: 0x11BA2C8 VA: 0x11BE2C8 Slot: 25
	public override bool MoveToAttribute(string name) { }

	// RVA: 0x11BE500 Offset: 0x11BA500 VA: 0x11BE500 Slot: 26
	public override void MoveToAttribute(int i) { }

	// RVA: 0x11BE698 Offset: 0x11BA698 VA: 0x11BE698 Slot: 27
	public override bool MoveToFirstAttribute() { }

	// RVA: 0x11BE7EC Offset: 0x11BA7EC VA: 0x11BE7EC Slot: 28
	public override bool MoveToNextAttribute() { }

	// RVA: 0x11BE948 Offset: 0x11BA948 VA: 0x11BE948 Slot: 29
	public override bool MoveToElement() { }

	// RVA: 0x11BE99C Offset: 0x11BA99C VA: 0x11BE99C Slot: 31
	public override bool Read() { }

	// RVA: 0x11BED84 Offset: 0x11BAD84 VA: 0x11BED84 Slot: 32
	public override bool get_EOF() { }

	// RVA: 0x11BEDA8 Offset: 0x11BADA8 VA: 0x11BEDA8 Slot: 33
	public override void Close() { }

	// RVA: 0x11BEDDC Offset: 0x11BADDC VA: 0x11BEDDC Slot: 34
	public override ReadState get_ReadState() { }

	// RVA: 0x11BEE18 Offset: 0x11BAE18 VA: 0x11BEE18 Slot: 35
	public override void Skip() { }

	// RVA: 0x11BEF84 Offset: 0x11BAF84 VA: 0x11BEF84 Slot: 36
	public override XmlNameTable get_NameTable() { }

	// RVA: 0x11BEF8C Offset: 0x11BAF8C VA: 0x11BEF8C Slot: 37
	public override string LookupNamespace(string prefix) { }

	// RVA: 0x11BF038 Offset: 0x11BB038 VA: 0x11BF038 Slot: 39
	public override void ResolveEntity() { }

	// RVA: 0x11BF070 Offset: 0x11BB070 VA: 0x11BF070 Slot: 30
	public override bool ReadAttributeValue() { }

	// RVA: 0x11BF1A4 Offset: 0x11BB1A4 VA: 0x11BF1A4 Slot: 54
	private bool System.Xml.Schema.IXmlSchemaInfo.get_IsDefault() { }

	// RVA: 0x11BF49C Offset: 0x11BB49C VA: 0x11BF49C Slot: 55
	private bool System.Xml.Schema.IXmlSchemaInfo.get_IsNil() { }

	// RVA: 0x11BF4E8 Offset: 0x11BB4E8 VA: 0x11BF4E8 Slot: 53
	private XmlSchemaValidity System.Xml.Schema.IXmlSchemaInfo.get_Validity() { }

	// RVA: 0x11BF57C Offset: 0x11BB57C VA: 0x11BF57C Slot: 56
	private XmlSchemaSimpleType System.Xml.Schema.IXmlSchemaInfo.get_MemberType() { }

	// RVA: 0x11BF6F4 Offset: 0x11BB6F4 VA: 0x11BF6F4 Slot: 57
	private XmlSchemaType System.Xml.Schema.IXmlSchemaInfo.get_SchemaType() { }

	// RVA: 0x11BF750 Offset: 0x11BB750 VA: 0x11BF750 Slot: 58
	private XmlSchemaElement System.Xml.Schema.IXmlSchemaInfo.get_SchemaElement() { }

	// RVA: 0x11BF7A4 Offset: 0x11BB7A4 VA: 0x11BF7A4 Slot: 59
	private XmlSchemaAttribute System.Xml.Schema.IXmlSchemaInfo.get_SchemaAttribute() { }

	// RVA: 0x11BF7E8 Offset: 0x11BB7E8 VA: 0x11BF7E8 Slot: 60
	public bool HasLineInfo() { }

	// RVA: 0x11BF7F0 Offset: 0x11BB7F0 VA: 0x11BF7F0 Slot: 61
	public int get_LineNumber() { }

	// RVA: 0x11BF8A0 Offset: 0x11BB8A0 VA: 0x11BF8A0 Slot: 62
	public int get_LinePosition() { }

	// RVA: 0x11BF950 Offset: 0x11BB950 VA: 0x11BF950 Slot: 63
	private IDictionary<string, string> System.Xml.IXmlNamespaceResolver.GetNamespacesInScope(XmlNamespaceScope scope) { }

	// RVA: 0x11BFA10 Offset: 0x11BBA10 VA: 0x11BFA10 Slot: 64
	private string System.Xml.IXmlNamespaceResolver.LookupNamespace(string prefix) { }

	// RVA: 0x11BFAD4 Offset: 0x11BBAD4 VA: 0x11BFAD4 Slot: 65
	private string System.Xml.IXmlNamespaceResolver.LookupPrefix(string namespaceName) { }

	// RVA: 0x11BFB98 Offset: 0x11BBB98 VA: 0x11BFB98
	private object GetStringValue() { }

	// RVA: 0x11BDD94 Offset: 0x11B9D94 VA: 0x11BDD94
	private XmlSchemaInfo get_AttributeSchemaInfo() { }

	// RVA: 0x11BEAEC Offset: 0x11BAAEC VA: 0x11BEAEC
	private void ProcessReaderEvent() { }

	// RVA: 0x11BFBB8 Offset: 0x11BBBB8 VA: 0x11BFBB8
	private void ProcessElementEvent() { }

	// RVA: 0x11C0050 Offset: 0x11BC050 VA: 0x11C0050
	private void ProcessEndElementEvent() { }

	// RVA: 0x11C01D0 Offset: 0x11BC1D0 VA: 0x11C01D0
	private void ValidateAttributes() { }

	// RVA: 0x11BED48 Offset: 0x11BAD48 VA: 0x11BED48
	private void ClearAttributesInfo() { }

	// RVA: 0x11BE380 Offset: 0x11BA380 VA: 0x11BE380
	private AttributePSVIInfo GetAttributePSVI(string name) { }

	// RVA: 0x11C0624 Offset: 0x11BC624 VA: 0x11C0624
	private AttributePSVIInfo GetAttributePSVI(string localName, string ns) { }

	// RVA: 0x11BDE24 Offset: 0x11B9E24 VA: 0x11BDE24
	private ValidatingReaderNodeData GetDefaultAttribute(string name, bool updatePosition) { }

	// RVA: 0x11BE0A8 Offset: 0x11BA0A8 VA: 0x11BE0A8
	private ValidatingReaderNodeData GetDefaultAttribute(string attrLocalName, string ns, bool updatePosition) { }

	// RVA: 0x11C04D8 Offset: 0x11BC4D8 VA: 0x11C04D8
	private AttributePSVIInfo AddAttributePSVI(int attIndex) { }

	// RVA: 0x11C0180 Offset: 0x11BC180 VA: 0x11C0180
	private bool IsXSDRoot(string localName, string ns) { }

	// RVA: 0x11BEC98 Offset: 0x11BAC98 VA: 0x11BEC98
	private void ProcessInlineSchema() { }

	// RVA: 0x11C06CC Offset: 0x11BC6CC VA: 0x11C06CC
	private void ReadAheadForMemberType() { }

	// RVA: 0x11BF22C Offset: 0x11BB22C VA: 0x11BF22C
	private void GetIsDefault() { }

	// RVA: 0x11BF5FC Offset: 0x11BB5FC VA: 0x11BF5FC
	private void GetMemberType() { }

	// RVA: 0x11C0408 Offset: 0x11BC408 VA: 0x11C0408
	private XsdCachingReader GetCachingReader() { }

	// RVA: 0x11BF11C Offset: 0x11BB11C VA: 0x11BF11C
	internal ValidatingReaderNodeData CreateDummyTextNode(string attributeValue, int depth) { }

	// RVA: 0x11C0888 Offset: 0x11BC888 VA: 0x11C0888
	internal void CachingCallBack(XsdCachingReader cachingReader) { }

	// RVA: 0x11C0378 Offset: 0x11BC378 VA: 0x11C0378
	private string GetOriginalAtomicValueStringOfElement() { }
}


// Namespace: System.Xml
internal class DomNameTable // TypeDefIndex: 2673
{
	// Fields
	private XmlName[] entries; // 0x10
	private int count; // 0x18
	private int mask; // 0x1C
	private XmlDocument ownerDocument; // 0x20
	private XmlNameTable nameTable; // 0x28

	// Methods

	// RVA: 0x11C08B0 Offset: 0x11BC8B0 VA: 0x11C08B0
	public void .ctor(XmlDocument document) { }

	// RVA: 0x11C0950 Offset: 0x11BC950 VA: 0x11C0950
	public XmlName GetName(string prefix, string localName, string ns, IXmlSchemaInfo schemaInfo) { }

	// RVA: 0x11C0AB8 Offset: 0x11BCAB8 VA: 0x11C0AB8
	public XmlName AddName(string prefix, string localName, string ns, IXmlSchemaInfo schemaInfo) { }

	// RVA: 0x11C0D28 Offset: 0x11BCD28 VA: 0x11C0D28
	private void Grow() { }
}


// Namespace: System.Xml
public class XmlAttribute : XmlNode // TypeDefIndex: 2674
{
	// Fields
	private XmlName name; // 0x18
	private XmlLinkedNode lastChild; // 0x20

	// Properties
	internal int LocalNameHash { get; }
	public override XmlNode ParentNode { get; }
	public override string Name { get; }
	public override string LocalName { get; }
	public override string NamespaceURI { get; }
	public override string Prefix { get; set; }
	public override XmlNodeType NodeType { get; }
	public override XmlDocument OwnerDocument { get; }
	public override string Value { get; set; }
	public override IXmlSchemaInfo SchemaInfo { get; }
	public override string InnerText { set; }
	internal override bool IsContainer { get; }
	internal override XmlLinkedNode LastNode { get; set; }
	public virtual bool Specified { get; }
	public virtual XmlElement OwnerElement { get; }
	public override string InnerXml { set; }
	public override string BaseURI { get; }
	internal override XmlSpace XmlSpace { get; }
	internal override string XmlLang { get; }

	// Methods

	// RVA: 0x11C0E50 Offset: 0x11BCE50 VA: 0x11C0E50
	internal void .ctor(XmlName name, XmlDocument doc) { }

	// RVA: 0x11C102C Offset: 0x11BD02C VA: 0x11C102C
	internal int get_LocalNameHash() { }

	// RVA: 0x11C1048 Offset: 0x11BD048 VA: 0x11C1048
	protected internal void .ctor(string prefix, string localName, string namespaceURI, XmlDocument doc) { }

	// RVA: 0x11C1198 Offset: 0x11BD198 VA: 0x11C1198 Slot: 31
	public override XmlNode CloneNode(bool deep) { }

	// RVA: 0x11C1260 Offset: 0x11BD260 VA: 0x11C1260 Slot: 10
	public override XmlNode get_ParentNode() { }

	// RVA: 0x11C1268 Offset: 0x11BD268 VA: 0x11C1268 Slot: 6
	public override string get_Name() { }

	// RVA: 0x11C1284 Offset: 0x11BD284 VA: 0x11C1284 Slot: 36
	public override string get_LocalName() { }

	// RVA: 0x11C12A0 Offset: 0x11BD2A0 VA: 0x11C12A0 Slot: 33
	public override string get_NamespaceURI() { }

	// RVA: 0x11C12BC Offset: 0x11BD2BC VA: 0x11C12BC Slot: 34
	public override string get_Prefix() { }

	// RVA: 0x11C12D8 Offset: 0x11BD2D8 VA: 0x11C12D8 Slot: 35
	public override void set_Prefix(string value) { }

	// RVA: 0x11C1354 Offset: 0x11BD354 VA: 0x11C1354 Slot: 9
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x11C135C Offset: 0x11BD35C VA: 0x11C135C Slot: 15
	public override XmlDocument get_OwnerDocument() { }

	// RVA: 0x11C1378 Offset: 0x11BD378 VA: 0x11C1378 Slot: 7
	public override string get_Value() { }

	// RVA: 0x11C1388 Offset: 0x11BD388 VA: 0x11C1388 Slot: 8
	public override void set_Value(string value) { }

	// RVA: 0x11C1398 Offset: 0x11BD398 VA: 0x11C1398 Slot: 41
	public override IXmlSchemaInfo get_SchemaInfo() { }

	// RVA: 0x11C13A0 Offset: 0x11BD3A0 VA: 0x11C13A0 Slot: 39
	public override void set_InnerText(string value) { }

	// RVA: 0x11C1404 Offset: 0x11BD404 VA: 0x11C1404
	internal bool PrepareOwnerElementInElementIdAttrMap() { }

	// RVA: 0x11C14B4 Offset: 0x11BD4B4 VA: 0x11C14B4
	internal void ResetOwnerElementInElementIdAttrMap(string oldInnerText) { }

	// RVA: 0x11C16E4 Offset: 0x11BD6E4 VA: 0x11C16E4 Slot: 18
	internal override bool get_IsContainer() { }

	// RVA: 0x11C16EC Offset: 0x11BD6EC VA: 0x11C16EC Slot: 26
	internal override XmlNode AppendChildForLoad(XmlNode newChild, XmlDocument doc) { }

	// RVA: 0x11C1904 Offset: 0x11BD904 VA: 0x11C1904 Slot: 19
	internal override XmlLinkedNode get_LastNode() { }

	// RVA: 0x11C190C Offset: 0x11BD90C VA: 0x11C190C Slot: 20
	internal override void set_LastNode(XmlLinkedNode value) { }

	// RVA: 0x11C1914 Offset: 0x11BD914 VA: 0x11C1914 Slot: 27
	internal override bool IsValidChildType(XmlNodeType type) { }

	// RVA: 0x11C192C Offset: 0x11BD92C VA: 0x11C192C Slot: 56
	public virtual bool get_Specified() { }

	// RVA: 0x11C1934 Offset: 0x11BD934 VA: 0x11C1934 Slot: 21
	public override XmlNode InsertBefore(XmlNode newChild, XmlNode refChild) { }

	// RVA: 0x11C19C4 Offset: 0x11BD9C4 VA: 0x11C19C4 Slot: 22
	public override XmlNode InsertAfter(XmlNode newChild, XmlNode refChild) { }

	// RVA: 0x11C1A54 Offset: 0x11BDA54 VA: 0x11C1A54 Slot: 23
	public override XmlNode RemoveChild(XmlNode oldChild) { }

	// RVA: 0x11C1ACC Offset: 0x11BDACC VA: 0x11C1ACC Slot: 24
	public override XmlNode PrependChild(XmlNode newChild) { }

	// RVA: 0x11C1B44 Offset: 0x11BDB44 VA: 0x11C1B44 Slot: 25
	public override XmlNode AppendChild(XmlNode newChild) { }

	// RVA: 0x11C1BBC Offset: 0x11BDBBC VA: 0x11C1BBC Slot: 57
	public virtual XmlElement get_OwnerElement() { }

	// RVA: 0x11C1C38 Offset: 0x11BDC38 VA: 0x11C1C38 Slot: 40
	public override void set_InnerXml(string value) { }

	// RVA: 0x11C1CD4 Offset: 0x11BDCD4 VA: 0x11C1CD4 Slot: 43
	public override void WriteTo(XmlWriter w) { }

	// RVA: 0x11C1D88 Offset: 0x11BDD88 VA: 0x11C1D88 Slot: 44
	public override void WriteContentTo(XmlWriter w) { }

	// RVA: 0x11C1DF0 Offset: 0x11BDDF0 VA: 0x11C1DF0 Slot: 42
	public override string get_BaseURI() { }

	// RVA: 0x11C1E88 Offset: 0x11BDE88 VA: 0x11C1E88 Slot: 47
	internal override void SetParent(XmlNode node) { }

	// RVA: 0x11C1E90 Offset: 0x11BDE90 VA: 0x11C1E90 Slot: 53
	internal override XmlSpace get_XmlSpace() { }

	// RVA: 0x11C1EE4 Offset: 0x11BDEE4 VA: 0x11C1EE4 Slot: 54
	internal override string get_XmlLang() { }
}


// Namespace: System.Xml
[DefaultMember("ItemOf")]
public sealed class XmlAttributeCollection : XmlNamedNodeMap, ICollection, IEnumerable // TypeDefIndex: 2675
{
	// Properties
	public XmlAttribute ItemOf { get; }
	public XmlAttribute ItemOf { get; }
	public XmlAttribute ItemOf { get; }
	private bool System.Collections.ICollection.IsSynchronized { get; }
	private object System.Collections.ICollection.SyncRoot { get; }
	private int System.Collections.ICollection.Count { get; }

	// Methods

	// RVA: 0x11C1F7C Offset: 0x11BDF7C VA: 0x11C1F7C
	internal void .ctor(XmlNode parent) { }

	// RVA: 0x11C1F84 Offset: 0x11BDF84 VA: 0x11C1F84
	public XmlAttribute get_ItemOf(int i) { }

	// RVA: 0x11C20C8 Offset: 0x11BE0C8 VA: 0x11C20C8
	public XmlAttribute get_ItemOf(string name) { }

	// RVA: 0x11C21F0 Offset: 0x11BE1F0 VA: 0x11C21F0
	public XmlAttribute get_ItemOf(string localName, string namespaceURI) { }

	// RVA: 0x11C2348 Offset: 0x11BE348 VA: 0x11C2348
	internal int FindNodeOffsetNS(XmlAttribute node) { }

	// RVA: 0x11C24CC Offset: 0x11BE4CC VA: 0x11C24CC Slot: 6
	public override XmlNode SetNamedItem(XmlNode node) { }

	// RVA: 0x11C2700 Offset: 0x11BE700 VA: 0x11C2700
	public XmlAttribute Append(XmlAttribute node) { }

	// RVA: 0x11C29B4 Offset: 0x11BE9B4 VA: 0x11C29B4
	public XmlAttribute Remove(XmlAttribute node) { }

	// RVA: 0x11C2A3C Offset: 0x11BEA3C VA: 0x11C2A3C
	public XmlAttribute RemoveAt(int i) { }

	// RVA: 0x11C2AE8 Offset: 0x11BEAE8 VA: 0x11C2AE8
	public void RemoveAll() { }

	// RVA: 0x11C2B30 Offset: 0x11BEB30 VA: 0x11C2B30 Slot: 13
	private void System.Collections.ICollection.CopyTo(Array array, int index) { }

	// RVA: 0x11C2BB4 Offset: 0x11BEBB4 VA: 0x11C2BB4 Slot: 16
	private bool System.Collections.ICollection.get_IsSynchronized() { }

	// RVA: 0x11C2BBC Offset: 0x11BEBBC VA: 0x11C2BBC Slot: 15
	private object System.Collections.ICollection.get_SyncRoot() { }

	// RVA: 0x11C2BC0 Offset: 0x11BEBC0 VA: 0x11C2BC0 Slot: 14
	private int System.Collections.ICollection.get_Count() { }

	// RVA: 0x11C2BC8 Offset: 0x11BEBC8 VA: 0x11C2BC8 Slot: 9
	internal override XmlNode AddNode(XmlNode node) { }

	// RVA: 0x11C2DB0 Offset: 0x11BEDB0 VA: 0x11C2DB0 Slot: 12
	internal override XmlNode InsertNodeAt(int i, XmlNode node) { }

	// RVA: 0x11C2E60 Offset: 0x11BEE60 VA: 0x11C2E60 Slot: 11
	internal override XmlNode RemoveNodeAt(int i) { }

	// RVA: 0x11C2814 Offset: 0x11BE814 VA: 0x11C2814
	internal void Detach(XmlAttribute attr) { }

	// RVA: 0x11C285C Offset: 0x11BE85C VA: 0x11C285C
	internal void InsertParentIntoElementIdAttrMap(XmlAttribute attr) { }

	// RVA: 0x11C3000 Offset: 0x11BF000 VA: 0x11C3000
	internal void RemoveParentFromElementIdAttrMap(XmlAttribute attr) { }

	// RVA: 0x11C2CAC Offset: 0x11BECAC VA: 0x11C2CAC
	internal int RemoveDuplicateAttribute(XmlAttribute attr) { }

	// RVA: 0x11C1530 Offset: 0x11BD530 VA: 0x11C1530
	internal bool PrepareParentInElementIdAttrMap(string attrPrefix, string attrLocalName) { }

	// RVA: 0x11C1624 Offset: 0x11BD624 VA: 0x11C1624
	internal void ResetParentInElementIdAttrMap(string oldVal, string newVal) { }

	// RVA: 0x11C2660 Offset: 0x11BE660 VA: 0x11C2660
	internal XmlAttribute InternalAppendAttribute(XmlAttribute node) { }
}


// Namespace: System.Xml
public class XmlCDataSection : XmlCharacterData // TypeDefIndex: 2676
{
	// Properties
	public override string Name { get; }
	public override string LocalName { get; }
	public override XmlNodeType NodeType { get; }
	public override XmlNode ParentNode { get; }
	internal override bool IsText { get; }

	// Methods

	// RVA: 0x11C372C Offset: 0x11BF72C VA: 0x11C372C
	protected internal void .ctor(string data, XmlDocument doc) { }

	// RVA: 0x11C3784 Offset: 0x11BF784 VA: 0x11C3784 Slot: 6
	public override string get_Name() { }

	// RVA: 0x11C37AC Offset: 0x11BF7AC VA: 0x11C37AC Slot: 36
	public override string get_LocalName() { }

	// RVA: 0x11C37D4 Offset: 0x11BF7D4 VA: 0x11C37D4 Slot: 9
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x11C37DC Offset: 0x11BF7DC VA: 0x11C37DC Slot: 10
	public override XmlNode get_ParentNode() { }

	// RVA: 0x11C3860 Offset: 0x11BF860 VA: 0x11C3860 Slot: 31
	public override XmlNode CloneNode(bool deep) { }

	// RVA: 0x11C38BC Offset: 0x11BF8BC VA: 0x11C38BC Slot: 43
	public override void WriteTo(XmlWriter w) { }

	// RVA: 0x11C38FC Offset: 0x11BF8FC VA: 0x11C38FC Slot: 44
	public override void WriteContentTo(XmlWriter w) { }

	// RVA: 0x11C3900 Offset: 0x11BF900 VA: 0x11C3900 Slot: 55
	internal override bool get_IsText() { }
}


// Namespace: System.Xml
public abstract class XmlCharacterData : XmlLinkedNode // TypeDefIndex: 2677
{
	// Fields
	private string data; // 0x20

	// Properties
	public override string Value { get; set; }
	public override string InnerText { get; set; }
	public virtual string Data { get; set; }

	// Methods

	// RVA: 0x11C3758 Offset: 0x11BF758 VA: 0x11C3758
	protected internal void .ctor(string data, XmlDocument doc) { }

	// RVA: 0x11C3924 Offset: 0x11BF924 VA: 0x11C3924 Slot: 7
	public override string get_Value() { }

	// RVA: 0x11C3934 Offset: 0x11BF934 VA: 0x11C3934 Slot: 8
	public override void set_Value(string value) { }

	// RVA: 0x11C3944 Offset: 0x11BF944 VA: 0x11C3944 Slot: 38
	public override string get_InnerText() { }

	// RVA: 0x11C3950 Offset: 0x11BF950 VA: 0x11C3950 Slot: 39
	public override void set_InnerText(string value) { }

	// RVA: 0x11C395C Offset: 0x11BF95C VA: 0x11C395C Slot: 56
	public virtual string get_Data() { }

	// RVA: 0x11C39B0 Offset: 0x11BF9B0 VA: 0x11C39B0 Slot: 57
	public virtual void set_Data(string value) { }

	// RVA: 0x11C3A50 Offset: 0x11BFA50 VA: 0x11C3A50
	internal bool CheckOnData(string data) { }
}


// Namespace: System.Xml
internal sealed class XmlChildEnumerator : IEnumerator // TypeDefIndex: 2678
{
	// Fields
	internal XmlNode container; // 0x10
	internal XmlNode child; // 0x18
	internal bool isFirst; // 0x20

	// Properties
	private object System.Collections.IEnumerator.Current { get; }
	internal XmlNode Current { get; }

	// Methods

	// RVA: 0x11C3A88 Offset: 0x11BFA88 VA: 0x11C3A88
	internal void .ctor(XmlNode container) { }

	// RVA: 0x11C3AD8 Offset: 0x11BFAD8 VA: 0x11C3AD8 Slot: 4
	private bool System.Collections.IEnumerator.MoveNext() { }

	// RVA: 0x11C3ADC Offset: 0x11BFADC VA: 0x11C3ADC
	internal bool MoveNext() { }

	// RVA: 0x11C3B40 Offset: 0x11BFB40 VA: 0x11C3B40 Slot: 6
	private void System.Collections.IEnumerator.Reset() { }

	// RVA: 0x11C3B78 Offset: 0x11BFB78 VA: 0x11C3B78 Slot: 5
	private object System.Collections.IEnumerator.get_Current() { }

	// RVA: 0x11C3B7C Offset: 0x11BFB7C VA: 0x11C3B7C
	internal XmlNode get_Current() { }
}


// Namespace: System.Xml
internal class XmlChildNodes : XmlNodeList // TypeDefIndex: 2679
{
	// Fields
	private XmlNode container; // 0x10

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x11C3BF0 Offset: 0x11BFBF0 VA: 0x11C3BF0
	public void .ctor(XmlNode container) { }

	// RVA: 0x11C3C18 Offset: 0x11BFC18 VA: 0x11C3C18 Slot: 6
	public override XmlNode Item(int i) { }

	// RVA: 0x11C3C74 Offset: 0x11BFC74 VA: 0x11C3C74 Slot: 7
	public override int get_Count() { }

	// RVA: 0x11C3CC0 Offset: 0x11BFCC0 VA: 0x11C3CC0 Slot: 8
	public override IEnumerator GetEnumerator() { }
}


// Namespace: System.Xml
public class XmlComment : XmlCharacterData // TypeDefIndex: 2680
{
	// Properties
	public override string Name { get; }
	public override string LocalName { get; }
	public override XmlNodeType NodeType { get; }

	// Methods

	// RVA: 0x11C3D70 Offset: 0x11BFD70 VA: 0x11C3D70
	protected internal void .ctor(string comment, XmlDocument doc) { }

	// RVA: 0x11C3D9C Offset: 0x11BFD9C VA: 0x11C3D9C Slot: 6
	public override string get_Name() { }

	// RVA: 0x11C3DC4 Offset: 0x11BFDC4 VA: 0x11C3DC4 Slot: 36
	public override string get_LocalName() { }

	// RVA: 0x11C3DEC Offset: 0x11BFDEC VA: 0x11C3DEC Slot: 9
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x11C3DF4 Offset: 0x11BFDF4 VA: 0x11C3DF4 Slot: 31
	public override XmlNode CloneNode(bool deep) { }

	// RVA: 0x11C3E50 Offset: 0x11BFE50 VA: 0x11C3E50 Slot: 43
	public override void WriteTo(XmlWriter w) { }

	// RVA: 0x11C3E90 Offset: 0x11BFE90 VA: 0x11C3E90 Slot: 44
	public override void WriteContentTo(XmlWriter w) { }
}


// Namespace: System.Xml
public class XmlDeclaration : XmlLinkedNode // TypeDefIndex: 2681
{
	// Fields
	private string version; // 0x20
	private string encoding; // 0x28
	private string standalone; // 0x30

	// Properties
	public string Version { get; }
	public string Encoding { get; set; }
	public string Standalone { get; set; }
	public override string Value { get; set; }
	public override string InnerText { get; set; }
	public override string Name { get; }
	public override string LocalName { get; }
	public override XmlNodeType NodeType { get; }

	// Methods

	// RVA: 0x11C3E94 Offset: 0x11BFE94 VA: 0x11C3E94
	protected internal void .ctor(string version, string encoding, string standalone, XmlDocument doc) { }

	// RVA: 0x11C4240 Offset: 0x11C0240 VA: 0x11C4240
	public string get_Version() { }

	// RVA: 0x11C4248 Offset: 0x11C0248 VA: 0x11C4248
	public string get_Encoding() { }

	// RVA: 0x11C409C Offset: 0x11C009C VA: 0x11C409C
	public void set_Encoding(string value) { }

	// RVA: 0x11C4250 Offset: 0x11C0250 VA: 0x11C4250
	public string get_Standalone() { }

	// RVA: 0x11C4104 Offset: 0x11C0104 VA: 0x11C4104
	public void set_Standalone(string value) { }

	// RVA: 0x11C4258 Offset: 0x11C0258 VA: 0x11C4258 Slot: 7
	public override string get_Value() { }

	// RVA: 0x11C4268 Offset: 0x11C0268 VA: 0x11C4268 Slot: 8
	public override void set_Value(string value) { }

	// RVA: 0x11C4278 Offset: 0x11C0278 VA: 0x11C4278 Slot: 38
	public override string get_InnerText() { }

	// RVA: 0x11C43EC Offset: 0x11C03EC VA: 0x11C43EC Slot: 39
	public override void set_InnerText(string value) { }

	// RVA: 0x11C4780 Offset: 0x11C0780 VA: 0x11C4780 Slot: 6
	public override string get_Name() { }

	// RVA: 0x11C47C0 Offset: 0x11C07C0 VA: 0x11C47C0 Slot: 36
	public override string get_LocalName() { }

	// RVA: 0x11C4800 Offset: 0x11C0800 VA: 0x11C4800 Slot: 9
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x11C4808 Offset: 0x11C0808 VA: 0x11C4808 Slot: 31
	public override XmlNode CloneNode(bool deep) { }

	// RVA: 0x11C4844 Offset: 0x11C0844 VA: 0x11C4844 Slot: 43
	public override void WriteTo(XmlWriter w) { }

	// RVA: 0x11C48BC Offset: 0x11C08BC VA: 0x11C48BC Slot: 44
	public override void WriteContentTo(XmlWriter w) { }

	// RVA: 0x11C4020 Offset: 0x11C0020 VA: 0x11C4020
	private bool IsValidXmlVersion(string ver) { }
}


// Namespace: System.Xml
public class XmlDocument : XmlNode // TypeDefIndex: 2682
{
	// Fields
	private XmlImplementation implementation; // 0x18
	private DomNameTable domNameTable; // 0x20
	private XmlLinkedNode lastChild; // 0x28
	private XmlNamedNodeMap entities; // 0x30
	private Hashtable htElementIdMap; // 0x38
	private Hashtable htElementIDAttrDecl; // 0x40
	private SchemaInfo schemaInfo; // 0x48
	private XmlSchemaSet schemas; // 0x50
	private bool reportValidity; // 0x58
	private bool actualLoadingStatus; // 0x59
	private XmlNodeChangedEventHandler onNodeInsertingDelegate; // 0x60
	private XmlNodeChangedEventHandler onNodeInsertedDelegate; // 0x68
	private XmlNodeChangedEventHandler onNodeRemovingDelegate; // 0x70
	private XmlNodeChangedEventHandler onNodeRemovedDelegate; // 0x78
	private XmlNodeChangedEventHandler onNodeChangingDelegate; // 0x80
	private XmlNodeChangedEventHandler onNodeChangedDelegate; // 0x88
	internal bool fEntRefNodesPresent; // 0x90
	internal bool fCDataNodesPresent; // 0x91
	private bool preserveWhitespace; // 0x92
	private bool isLoading; // 0x93
	internal string strDocumentName; // 0x98
	internal string strDocumentFragmentName; // 0xA0
	internal string strCommentName; // 0xA8
	internal string strTextName; // 0xB0
	internal string strCDataSectionName; // 0xB8
	internal string strEntityName; // 0xC0
	internal string strID; // 0xC8
	internal string strXmlns; // 0xD0
	internal string strXml; // 0xD8
	internal string strSpace; // 0xE0
	internal string strLang; // 0xE8
	internal string strEmpty; // 0xF0
	internal string strNonSignificantWhitespaceName; // 0xF8
	internal string strSignificantWhitespaceName; // 0x100
	internal string strReservedXmlns; // 0x108
	internal string strReservedXml; // 0x110
	internal string baseURI; // 0x118
	private XmlResolver resolver; // 0x120
	internal bool bSetResolver; // 0x128
	internal object objLock; // 0x130
	internal static EmptyEnumerator EmptyEnumerator; // 0x0
	internal static IXmlSchemaInfo NotKnownSchemaInfo; // 0x8
	internal static IXmlSchemaInfo ValidSchemaInfo; // 0x10
	internal static IXmlSchemaInfo InvalidSchemaInfo; // 0x18

	// Properties
	public override XmlNodeType NodeType { get; }
	public override XmlNode ParentNode { get; }
	public virtual XmlDocumentType DocumentType { get; }
	internal virtual XmlDeclaration Declaration { get; }
	public override string Name { get; }
	public override string LocalName { get; }
	public XmlElement DocumentElement { get; }
	internal override bool IsContainer { get; }
	internal override XmlLinkedNode LastNode { get; set; }
	public override XmlDocument OwnerDocument { get; }
	public virtual XmlResolver XmlResolver { set; }
	public XmlNameTable NameTable { get; }
	public override bool IsReadOnly { get; }
	internal XmlNamedNodeMap Entities { get; }
	public override string InnerText { set; }
	public override string InnerXml { set; }
	internal string Version { get; }
	internal string Encoding { get; }
	internal string Standalone { get; }
	public override IXmlSchemaInfo SchemaInfo { get; }
	public override string BaseURI { get; }

	// Methods

	// RVA: 0x11C48C0 Offset: 0x11C08C0 VA: 0x11C48C0
	public void .ctor() { }

	// RVA: 0x11C4D3C Offset: 0x11C0D3C VA: 0x11C4D3C
	public void .ctor(XmlNameTable nt) { }

	// RVA: 0x11C497C Offset: 0x11C097C VA: 0x11C497C
	protected internal void .ctor(XmlImplementation imp) { }

	// RVA: 0x11C0F58 Offset: 0x11BCF58 VA: 0x11C0F58
	internal static void CheckName(string name) { }

	// RVA: 0x11C4DD0 Offset: 0x11C0DD0 VA: 0x11C4DD0
	internal XmlName AddXmlName(string prefix, string localName, string namespaceURI, IXmlSchemaInfo schemaInfo) { }

	// RVA: 0x11C4DE8 Offset: 0x11C0DE8 VA: 0x11C4DE8
	internal XmlName GetXmlName(string prefix, string localName, string namespaceURI, IXmlSchemaInfo schemaInfo) { }

	// RVA: 0x11C1084 Offset: 0x11BD084 VA: 0x11C1084
	internal XmlName AddAttrXmlName(string prefix, string localName, string namespaceURI, IXmlSchemaInfo schemaInfo) { }

	// RVA: 0x11C4E00 Offset: 0x11C0E00 VA: 0x11C4E00
	internal bool AddIdInfo(XmlName eleName, XmlName attrName) { }

	// RVA: 0x11C4EC0 Offset: 0x11C0EC0 VA: 0x11C4EC0
	private XmlName GetIDInfoByElement_(XmlName eleName) { }

	// RVA: 0x11C33EC Offset: 0x11BF3EC VA: 0x11C33EC
	internal XmlName GetIDInfoByElement(XmlName eleName) { }

	// RVA: 0x11C4F94 Offset: 0x11C0F94 VA: 0x11C4F94
	private WeakReference GetElement(ArrayList elementList, XmlElement elem) { }

	// RVA: 0x11C3400 Offset: 0x11BF400 VA: 0x11C3400
	internal void AddElementWithId(string id, XmlElement elem) { }

	// RVA: 0x11C35E8 Offset: 0x11BF5E8 VA: 0x11C35E8
	internal void RemoveElementWithId(string id, XmlElement elem) { }

	// RVA: 0x11C55F0 Offset: 0x11C15F0 VA: 0x11C55F0 Slot: 31
	public override XmlNode CloneNode(bool deep) { }

	// RVA: 0x11C56EC Offset: 0x11C16EC VA: 0x11C56EC Slot: 9
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x11C56F4 Offset: 0x11C16F4 VA: 0x11C56F4 Slot: 10
	public override XmlNode get_ParentNode() { }

	// RVA: 0x11C56FC Offset: 0x11C16FC VA: 0x11C56FC Slot: 56
	public virtual XmlDocumentType get_DocumentType() { }

	// RVA: 0x11C5788 Offset: 0x11C1788 VA: 0x11C5788 Slot: 57
	internal virtual XmlDeclaration get_Declaration() { }

	// RVA: 0x11C582C Offset: 0x11C182C VA: 0x11C582C Slot: 6
	public override string get_Name() { }

	// RVA: 0x11C5834 Offset: 0x11C1834 VA: 0x11C5834 Slot: 36
	public override string get_LocalName() { }

	// RVA: 0x11C583C Offset: 0x11C183C VA: 0x11C583C
	public XmlElement get_DocumentElement() { }

	// RVA: 0x11C58C8 Offset: 0x11C18C8 VA: 0x11C58C8 Slot: 18
	internal override bool get_IsContainer() { }

	// RVA: 0x11C58D0 Offset: 0x11C18D0 VA: 0x11C58D0 Slot: 19
	internal override XmlLinkedNode get_LastNode() { }

	// RVA: 0x11C58D8 Offset: 0x11C18D8 VA: 0x11C58D8 Slot: 20
	internal override void set_LastNode(XmlLinkedNode value) { }

	// RVA: 0x11C58E0 Offset: 0x11C18E0 VA: 0x11C58E0 Slot: 15
	public override XmlDocument get_OwnerDocument() { }

	// RVA: 0x11C58E8 Offset: 0x11C18E8 VA: 0x11C58E8 Slot: 58
	public virtual void set_XmlResolver(XmlResolver value) { }

	// RVA: 0x11C5A64 Offset: 0x11C1A64 VA: 0x11C5A64 Slot: 27
	internal override bool IsValidChildType(XmlNodeType type) { }

	// RVA: 0x11C5B4C Offset: 0x11C1B4C VA: 0x11C5B4C
	private bool HasNodeTypeInPrevSiblings(XmlNodeType nt, XmlNode refNode) { }

	// RVA: 0x11C5BFC Offset: 0x11C1BFC VA: 0x11C5BFC
	private bool HasNodeTypeInNextSiblings(XmlNodeType nt, XmlNode refNode) { }

	// RVA: 0x11C5C60 Offset: 0x11C1C60 VA: 0x11C5C60 Slot: 28
	internal override bool CanInsertBefore(XmlNode newChild, XmlNode refChild) { }

	// RVA: 0x11C5DC4 Offset: 0x11C1DC4 VA: 0x11C5DC4 Slot: 29
	internal override bool CanInsertAfter(XmlNode newChild, XmlNode refChild) { }

	// RVA: 0x11C5EC0 Offset: 0x11C1EC0 VA: 0x11C5EC0
	public XmlAttribute CreateAttribute(string name) { }

	// RVA: 0x11C5F80 Offset: 0x11C1F80 VA: 0x11C5F80
	internal void SetDefaultNamespace(string prefix, string localName, ref string namespaceURI) { }

	// RVA: 0x11C6010 Offset: 0x11C2010 VA: 0x11C6010 Slot: 59
	public virtual XmlCDataSection CreateCDataSection(string data) { }

	// RVA: 0x11C6084 Offset: 0x11C2084 VA: 0x11C6084 Slot: 60
	public virtual XmlComment CreateComment(string data) { }

	// RVA: 0x11C60F0 Offset: 0x11C20F0 VA: 0x11C60F0 Slot: 61
	public virtual XmlDocumentType CreateDocumentType(string name, string publicId, string systemId, string internalSubset) { }

	// RVA: 0x11C6240 Offset: 0x11C2240 VA: 0x11C6240 Slot: 62
	public virtual XmlDocumentFragment CreateDocumentFragment() { }

	// RVA: 0x11C6314 Offset: 0x11C2314 VA: 0x11C6314
	public XmlElement CreateElement(string name) { }

	// RVA: 0x11C63C4 Offset: 0x11C23C4 VA: 0x11C63C4
	internal void AddDefaultAttributes(XmlElement elem) { }

	// RVA: 0x11C664C Offset: 0x11C264C VA: 0x11C664C
	private SchemaElementDecl GetSchemaElementDecl(XmlElement elem) { }

	// RVA: 0x11C6758 Offset: 0x11C2758 VA: 0x11C6758
	private XmlAttribute PrepareDefaultAttribute(SchemaAttDef attdef, string attrPrefix, string attrLocalname, string attrNamespaceURI) { }

	// RVA: 0x11C6854 Offset: 0x11C2854 VA: 0x11C6854 Slot: 63
	public virtual XmlEntityReference CreateEntityReference(string name) { }

	// RVA: 0x11C69A4 Offset: 0x11C29A4 VA: 0x11C69A4 Slot: 64
	public virtual XmlProcessingInstruction CreateProcessingInstruction(string target, string data) { }

	// RVA: 0x11C6A18 Offset: 0x11C2A18 VA: 0x11C6A18 Slot: 65
	public virtual XmlDeclaration CreateXmlDeclaration(string version, string encoding, string standalone) { }

	// RVA: 0x11C6A98 Offset: 0x11C2A98 VA: 0x11C6A98 Slot: 66
	public virtual XmlText CreateTextNode(string text) { }

	// RVA: 0x11C6B04 Offset: 0x11C2B04 VA: 0x11C6B04 Slot: 67
	public virtual XmlSignificantWhitespace CreateSignificantWhitespace(string text) { }

	// RVA: 0x11C6B70 Offset: 0x11C2B70 VA: 0x11C6B70 Slot: 68
	public virtual XmlWhitespace CreateWhitespace(string text) { }

	// RVA: 0x11C6BDC Offset: 0x11C2BDC VA: 0x11C6BDC
	public XmlAttribute CreateAttribute(string qualifiedName, string namespaceURI) { }

	// RVA: 0x11C6C80 Offset: 0x11C2C80 VA: 0x11C6C80
	public XmlElement CreateElement(string qualifiedName, string namespaceURI) { }

	// RVA: 0x11C6D24 Offset: 0x11C2D24 VA: 0x11C6D24
	private XmlNode ImportNodeInternal(XmlNode node, bool deep) { }

	// RVA: 0x11C71BC Offset: 0x11C31BC VA: 0x11C71BC
	private void ImportAttributes(XmlNode fromElem, XmlNode toElem) { }

	// RVA: 0x11C5650 Offset: 0x11C1650 VA: 0x11C5650
	private void ImportChildren(XmlNode fromNode, XmlNode toNode, bool deep) { }

	// RVA: 0x11C0934 Offset: 0x11BC934 VA: 0x11C0934
	public XmlNameTable get_NameTable() { }

	// RVA: 0x11C72D0 Offset: 0x11C32D0 VA: 0x11C72D0 Slot: 69
	public virtual XmlAttribute CreateAttribute(string prefix, string localName, string namespaceURI) { }

	// RVA: 0x11C7368 Offset: 0x11C3368 VA: 0x11C7368 Slot: 70
	protected internal virtual XmlAttribute CreateDefaultAttribute(string prefix, string localName, string namespaceURI) { }

	// RVA: 0x11C73EC Offset: 0x11C33EC VA: 0x11C73EC Slot: 71
	public virtual XmlElement CreateElement(string prefix, string localName, string namespaceURI) { }

	// RVA: 0x11C75B0 Offset: 0x11C35B0 VA: 0x11C75B0 Slot: 37
	public override bool get_IsReadOnly() { }

	// RVA: 0x11C75B8 Offset: 0x11C35B8 VA: 0x11C75B8
	internal XmlNamedNodeMap get_Entities() { }

	// RVA: 0x11C7620 Offset: 0x11C3620 VA: 0x11C7620 Slot: 72
	public virtual XmlNode ReadNode(XmlReader reader) { }

	// RVA: 0x11C7818 Offset: 0x11C3818 VA: 0x11C7818
	private XmlTextReader SetupReader(XmlTextReader tr) { }

	// RVA: 0x11C7878 Offset: 0x11C3878 VA: 0x11C7878 Slot: 73
	public virtual void Load(XmlReader reader) { }

	// RVA: 0x11C7BBC Offset: 0x11C3BBC VA: 0x11C7BBC Slot: 74
	public virtual void LoadXml(string xml) { }

	// RVA: 0x11C7D0C Offset: 0x11C3D0C VA: 0x11C7D0C Slot: 39
	public override void set_InnerText(string value) { }

	// RVA: 0x11C7D64 Offset: 0x11C3D64 VA: 0x11C7D64 Slot: 40
	public override void set_InnerXml(string value) { }

	// RVA: 0x11C7D74 Offset: 0x11C3D74 VA: 0x11C7D74 Slot: 75
	public virtual void Save(XmlWriter w) { }

	// RVA: 0x11C7F8C Offset: 0x11C3F8C VA: 0x11C7F8C Slot: 43
	public override void WriteTo(XmlWriter w) { }

	// RVA: 0x11C7F9C Offset: 0x11C3F9C VA: 0x11C7F9C Slot: 44
	public override void WriteContentTo(XmlWriter xw) { }

	// RVA: 0x11C826C Offset: 0x11C426C VA: 0x11C826C Slot: 50
	internal override XmlNodeChangedEventArgs GetEventArgs(XmlNode node, XmlNode oldParent, XmlNode newParent, string oldValue, string newValue, XmlNodeChangedAction action) { }

	// RVA: 0x11C184C Offset: 0x11BD84C VA: 0x11C184C
	internal XmlNodeChangedEventArgs GetInsertEventArgsForLoad(XmlNode node, XmlNode newParent) { }

	// RVA: 0x11C8364 Offset: 0x11C4364 VA: 0x11C8364 Slot: 51
	internal override void BeforeEvent(XmlNodeChangedEventArgs args) { }

	// RVA: 0x11C83B8 Offset: 0x11C43B8 VA: 0x11C83B8 Slot: 52
	internal override void AfterEvent(XmlNodeChangedEventArgs args) { }

	// RVA: 0x11C3158 Offset: 0x11BF158 VA: 0x11C3158
	internal XmlAttribute GetDefaultAttribute(XmlElement elem, string attrPrefix, string attrLocalname, string attrNamespaceURI) { }

	// RVA: 0x11C840C Offset: 0x11C440C VA: 0x11C840C
	internal string get_Version() { }

	// RVA: 0x11C8430 Offset: 0x11C4430 VA: 0x11C8430
	internal string get_Encoding() { }

	// RVA: 0x11C7F68 Offset: 0x11C3F68 VA: 0x11C7F68
	internal string get_Standalone() { }

	// RVA: 0x11C8454 Offset: 0x11C4454 VA: 0x11C8454
	internal XmlEntity GetEntityNode(string name) { }

	// RVA: 0x11C8580 Offset: 0x11C4580 VA: 0x11C8580 Slot: 41
	public override IXmlSchemaInfo get_SchemaInfo() { }

	// RVA: 0x11C86B4 Offset: 0x11C46B4 VA: 0x11C86B4 Slot: 42
	public override string get_BaseURI() { }

	// RVA: 0x11C86BC Offset: 0x11C46BC VA: 0x11C86BC Slot: 26
	internal override XmlNode AppendChildForLoad(XmlNode newChild, XmlDocument doc) { }

	// RVA: 0x11C8888 Offset: 0x11C4888 VA: 0x11C8888
	private static void .cctor() { }
}


// Namespace: System.Xml
public class XmlDocumentFragment : XmlNode // TypeDefIndex: 2683
{
	// Fields
	private XmlLinkedNode lastChild; // 0x18

	// Properties
	public override string Name { get; }
	public override string LocalName { get; }
	public override XmlNodeType NodeType { get; }
	public override XmlNode ParentNode { get; }
	public override XmlDocument OwnerDocument { get; }
	public override string InnerXml { set; }
	internal override bool IsContainer { get; }
	internal override XmlLinkedNode LastNode { get; set; }

	// Methods

	// RVA: 0x11C6298 Offset: 0x11C2298 VA: 0x11C6298
	protected internal void .ctor(XmlDocument ownerDocument) { }

	// RVA: 0x11C8980 Offset: 0x11C4980 VA: 0x11C8980 Slot: 6
	public override string get_Name() { }

	// RVA: 0x11C89A8 Offset: 0x11C49A8 VA: 0x11C89A8 Slot: 36
	public override string get_LocalName() { }

	// RVA: 0x11C89D0 Offset: 0x11C49D0 VA: 0x11C89D0 Slot: 9
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x11C89D8 Offset: 0x11C49D8 VA: 0x11C89D8 Slot: 10
	public override XmlNode get_ParentNode() { }

	// RVA: 0x11C89E0 Offset: 0x11C49E0 VA: 0x11C89E0 Slot: 15
	public override XmlDocument get_OwnerDocument() { }

	// RVA: 0x11C8A58 Offset: 0x11C4A58 VA: 0x11C8A58 Slot: 40
	public override void set_InnerXml(string value) { }

	// RVA: 0x11C8CE8 Offset: 0x11C4CE8 VA: 0x11C8CE8 Slot: 31
	public override XmlNode CloneNode(bool deep) { }

	// RVA: 0x11C8D6C Offset: 0x11C4D6C VA: 0x11C8D6C Slot: 18
	internal override bool get_IsContainer() { }

	// RVA: 0x11C8D74 Offset: 0x11C4D74 VA: 0x11C8D74 Slot: 19
	internal override XmlLinkedNode get_LastNode() { }

	// RVA: 0x11C8D7C Offset: 0x11C4D7C VA: 0x11C8D7C Slot: 20
	internal override void set_LastNode(XmlLinkedNode value) { }

	// RVA: 0x11C8D84 Offset: 0x11C4D84 VA: 0x11C8D84 Slot: 27
	internal override bool IsValidChildType(XmlNodeType type) { }

	// RVA: 0x11C8DF0 Offset: 0x11C4DF0 VA: 0x11C8DF0 Slot: 29
	internal override bool CanInsertAfter(XmlNode newChild, XmlNode refChild) { }

	// RVA: 0x11C8E50 Offset: 0x11C4E50 VA: 0x11C8E50 Slot: 28
	internal override bool CanInsertBefore(XmlNode newChild, XmlNode refChild) { }

	// RVA: 0x11C8EB8 Offset: 0x11C4EB8 VA: 0x11C8EB8 Slot: 43
	public override void WriteTo(XmlWriter w) { }

	// RVA: 0x11C8EC8 Offset: 0x11C4EC8 VA: 0x11C8EC8 Slot: 44
	public override void WriteContentTo(XmlWriter w) { }
}


// Namespace: System.Xml
public class XmlDocumentType : XmlLinkedNode // TypeDefIndex: 2684
{
	// Fields
	private string name; // 0x20
	private string publicId; // 0x28
	private string systemId; // 0x30
	private string internalSubset; // 0x38
	private bool namespaces; // 0x40
	private XmlNamedNodeMap entities; // 0x48
	private XmlNamedNodeMap notations; // 0x50
	private SchemaInfo schemaInfo; // 0x58

	// Properties
	public override string Name { get; }
	public override string LocalName { get; }
	public override XmlNodeType NodeType { get; }
	public override bool IsReadOnly { get; }
	public XmlNamedNodeMap Entities { get; }
	public XmlNamedNodeMap Notations { get; }
	public string PublicId { get; }
	public string SystemId { get; }
	public string InternalSubset { get; }

	// Methods

	// RVA: 0x11C6178 Offset: 0x11C2178 VA: 0x11C6178
	protected internal void .ctor(string name, string publicId, string systemId, string internalSubset, XmlDocument doc) { }

	// RVA: 0x11C9200 Offset: 0x11C5200 VA: 0x11C9200 Slot: 6
	public override string get_Name() { }

	// RVA: 0x11C9208 Offset: 0x11C5208 VA: 0x11C9208 Slot: 36
	public override string get_LocalName() { }

	// RVA: 0x11C9210 Offset: 0x11C5210 VA: 0x11C9210 Slot: 9
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x11C9218 Offset: 0x11C5218 VA: 0x11C9218 Slot: 31
	public override XmlNode CloneNode(bool deep) { }

	// RVA: 0x11C9254 Offset: 0x11C5254 VA: 0x11C9254 Slot: 37
	public override bool get_IsReadOnly() { }

	// RVA: 0x11C8518 Offset: 0x11C4518 VA: 0x11C8518
	public XmlNamedNodeMap get_Entities() { }

	// RVA: 0x11C925C Offset: 0x11C525C VA: 0x11C925C
	public XmlNamedNodeMap get_Notations() { }

	// RVA: 0x11C92C4 Offset: 0x11C52C4 VA: 0x11C92C4
	public string get_PublicId() { }

	// RVA: 0x11C92CC Offset: 0x11C52CC VA: 0x11C92CC
	public string get_SystemId() { }

	// RVA: 0x11C92D4 Offset: 0x11C52D4 VA: 0x11C92D4
	public string get_InternalSubset() { }

	// RVA: 0x11C92DC Offset: 0x11C52DC VA: 0x11C92DC Slot: 43
	public override void WriteTo(XmlWriter w) { }

	// RVA: 0x11C9308 Offset: 0x11C5308 VA: 0x11C9308 Slot: 44
	public override void WriteContentTo(XmlWriter w) { }
}


// Namespace: System.Xml
public class XmlElement : XmlLinkedNode // TypeDefIndex: 2685
{
	// Fields
	private XmlName name; // 0x20
	private XmlAttributeCollection attributes; // 0x28
	private XmlLinkedNode lastChild; // 0x30

	// Properties
	public override string Name { get; }
	public override string LocalName { get; }
	public override string NamespaceURI { get; }
	public override string Prefix { get; set; }
	public override XmlNodeType NodeType { get; }
	public override XmlNode ParentNode { get; }
	public override XmlDocument OwnerDocument { get; }
	internal override bool IsContainer { get; }
	public bool IsEmpty { get; set; }
	internal override XmlLinkedNode LastNode { get; set; }
	public override XmlAttributeCollection Attributes { get; }
	public virtual bool HasAttributes { get; }
	public override IXmlSchemaInfo SchemaInfo { get; }
	public override string InnerXml { set; }
	public override string InnerText { get; set; }
	public override XmlNode NextSibling { get; }

	// Methods

	// RVA: 0x11C749C Offset: 0x11C349C VA: 0x11C749C
	internal void .ctor(XmlName name, bool empty, XmlDocument doc) { }

	// RVA: 0x11C930C Offset: 0x11C530C VA: 0x11C930C
	protected internal void .ctor(string prefix, string localName, string namespaceURI, XmlDocument doc) { }

	// RVA: 0x11C9350 Offset: 0x11C5350 VA: 0x11C9350 Slot: 31
	public override XmlNode CloneNode(bool deep) { }

	// RVA: 0x11C98FC Offset: 0x11C58FC VA: 0x11C98FC Slot: 6
	public override string get_Name() { }

	// RVA: 0x11C9918 Offset: 0x11C5918 VA: 0x11C9918 Slot: 36
	public override string get_LocalName() { }

	// RVA: 0x11C9934 Offset: 0x11C5934 VA: 0x11C9934 Slot: 33
	public override string get_NamespaceURI() { }

	// RVA: 0x11C9950 Offset: 0x11C5950 VA: 0x11C9950 Slot: 34
	public override string get_Prefix() { }

	// RVA: 0x11C996C Offset: 0x11C596C VA: 0x11C996C Slot: 35
	public override void set_Prefix(string value) { }

	// RVA: 0x11C99EC Offset: 0x11C59EC VA: 0x11C99EC Slot: 9
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x11C99F4 Offset: 0x11C59F4 VA: 0x11C99F4 Slot: 10
	public override XmlNode get_ParentNode() { }

	// RVA: 0x11C99FC Offset: 0x11C59FC VA: 0x11C99FC Slot: 15
	public override XmlDocument get_OwnerDocument() { }

	// RVA: 0x11C9A18 Offset: 0x11C5A18 VA: 0x11C9A18 Slot: 18
	internal override bool get_IsContainer() { }

	// RVA: 0x11C9A20 Offset: 0x11C5A20 VA: 0x11C9A20 Slot: 26
	internal override XmlNode AppendChildForLoad(XmlNode newChild, XmlDocument doc) { }

	// RVA: 0x11C98B0 Offset: 0x11C58B0 VA: 0x11C98B0
	public bool get_IsEmpty() { }

	// RVA: 0x11C98C0 Offset: 0x11C58C0 VA: 0x11C98C0
	public void set_IsEmpty(bool value) { }

	// RVA: 0x11C9B98 Offset: 0x11C5B98 VA: 0x11C9B98 Slot: 19
	internal override XmlLinkedNode get_LastNode() { }

	// RVA: 0x11C9BA8 Offset: 0x11C5BA8 VA: 0x11C9BA8 Slot: 20
	internal override void set_LastNode(XmlLinkedNode value) { }

	// RVA: 0x11C9BB0 Offset: 0x11C5BB0 VA: 0x11C9BB0 Slot: 27
	internal override bool IsValidChildType(XmlNodeType type) { }

	// RVA: 0x11C9BD4 Offset: 0x11C5BD4 VA: 0x11C9BD4 Slot: 14
	public override XmlAttributeCollection get_Attributes() { }

	// RVA: 0x11C9D08 Offset: 0x11C5D08 VA: 0x11C9D08 Slot: 56
	public virtual bool get_HasAttributes() { }

	// RVA: 0x11C9D30 Offset: 0x11C5D30 VA: 0x11C9D30 Slot: 57
	public virtual string GetAttribute(string name) { }

	// RVA: 0x11C9DB0 Offset: 0x11C5DB0 VA: 0x11C9DB0 Slot: 58
	public virtual void SetAttribute(string name, string value) { }

	// RVA: 0x11C9E54 Offset: 0x11C5E54 VA: 0x11C9E54 Slot: 59
	public virtual XmlAttribute GetAttributeNode(string name) { }

	// RVA: 0x11C9EB8 Offset: 0x11C5EB8 VA: 0x11C9EB8 Slot: 60
	public virtual XmlAttribute SetAttributeNode(XmlAttribute newAttr) { }

	// RVA: 0x11C9FC8 Offset: 0x11C5FC8 VA: 0x11C9FC8 Slot: 61
	public virtual string GetAttribute(string localName, string namespaceURI) { }

	// RVA: 0x11CA05C Offset: 0x11C605C VA: 0x11CA05C Slot: 62
	public virtual string SetAttribute(string localName, string namespaceURI, string value) { }

	// RVA: 0x11CA160 Offset: 0x11C6160 VA: 0x11CA160 Slot: 63
	public virtual XmlAttribute GetAttributeNode(string localName, string namespaceURI) { }

	// RVA: 0x11CA1CC Offset: 0x11C61CC VA: 0x11CA1CC Slot: 64
	public virtual XmlAttribute SetAttributeNode(string localName, string namespaceURI) { }

	// RVA: 0x11CA2A8 Offset: 0x11C62A8 VA: 0x11CA2A8 Slot: 65
	public virtual bool HasAttribute(string name) { }

	// RVA: 0x11CA2CC Offset: 0x11C62CC VA: 0x11CA2CC Slot: 43
	public override void WriteTo(XmlWriter w) { }

	// RVA: 0x11CA3E0 Offset: 0x11C63E0 VA: 0x11CA3E0
	private static void WriteElementTo(XmlWriter writer, XmlElement e) { }

	// RVA: 0x11CA5C8 Offset: 0x11C65C8 VA: 0x11CA5C8
	private void WriteStartElement(XmlWriter w) { }

	// RVA: 0x11CA6E0 Offset: 0x11C66E0 VA: 0x11CA6E0 Slot: 44
	public override void WriteContentTo(XmlWriter w) { }

	// RVA: 0x11CA748 Offset: 0x11C6748 VA: 0x11CA748 Slot: 66
	public virtual void RemoveAllAttributes() { }

	// RVA: 0x11CA780 Offset: 0x11C6780 VA: 0x11CA780 Slot: 45
	public override void RemoveAll() { }

	// RVA: 0x11C9B90 Offset: 0x11C5B90 VA: 0x11C9B90
	internal void RemoveAllChildren() { }

	// RVA: 0x11CA7A8 Offset: 0x11C67A8 VA: 0x11CA7A8 Slot: 41
	public override IXmlSchemaInfo get_SchemaInfo() { }

	// RVA: 0x11CA7B0 Offset: 0x11C67B0 VA: 0x11CA7B0 Slot: 40
	public override void set_InnerXml(string value) { }

	// RVA: 0x11CA8A4 Offset: 0x11C68A4 VA: 0x11CA8A4 Slot: 38
	public override string get_InnerText() { }

	// RVA: 0x11CA8AC Offset: 0x11C68AC VA: 0x11CA8AC Slot: 39
	public override void set_InnerText(string value) { }

	// RVA: 0x11CA968 Offset: 0x11C6968 VA: 0x11CA968 Slot: 13
	public override XmlNode get_NextSibling() { }

	// RVA: 0x11CA9A4 Offset: 0x11C69A4 VA: 0x11CA9A4 Slot: 47
	internal override void SetParent(XmlNode node) { }
}


// Namespace: System.Xml
public class XmlEntity : XmlNode // TypeDefIndex: 2686
{
	// Fields
	private string publicId; // 0x18
	private string systemId; // 0x20
	private string notationName; // 0x28
	private string name; // 0x30
	private string unparsedReplacementStr; // 0x38
	private string baseURI; // 0x40
	private XmlLinkedNode lastChild; // 0x48
	private bool childrenFoliating; // 0x50

	// Properties
	public override bool IsReadOnly { get; }
	public override string Name { get; }
	public override string LocalName { get; }
	public override string InnerText { get; set; }
	internal override bool IsContainer { get; }
	internal override XmlLinkedNode LastNode { get; set; }
	public override XmlNodeType NodeType { get; }
	public override string InnerXml { set; }
	public override string BaseURI { get; }

	// Methods

	// RVA: 0x11CA9AC Offset: 0x11C69AC VA: 0x11CA9AC
	internal void .ctor(string name, string strdata, string publicId, string systemId, string notationName, XmlDocument doc) { }

	// RVA: 0x11CAA30 Offset: 0x11C6A30 VA: 0x11CAA30 Slot: 31
	public override XmlNode CloneNode(bool deep) { }

	// RVA: 0x11CAA88 Offset: 0x11C6A88 VA: 0x11CAA88 Slot: 37
	public override bool get_IsReadOnly() { }

	// RVA: 0x11CAA90 Offset: 0x11C6A90 VA: 0x11CAA90 Slot: 6
	public override string get_Name() { }

	// RVA: 0x11CAA98 Offset: 0x11C6A98 VA: 0x11CAA98 Slot: 36
	public override string get_LocalName() { }

	// RVA: 0x11CAAA0 Offset: 0x11C6AA0 VA: 0x11CAAA0 Slot: 38
	public override string get_InnerText() { }

	// RVA: 0x11CAAA8 Offset: 0x11C6AA8 VA: 0x11CAAA8 Slot: 39
	public override void set_InnerText(string value) { }

	// RVA: 0x11CAB00 Offset: 0x11C6B00 VA: 0x11CAB00 Slot: 18
	internal override bool get_IsContainer() { }

	// RVA: 0x11CAB08 Offset: 0x11C6B08 VA: 0x11CAB08 Slot: 19
	internal override XmlLinkedNode get_LastNode() { }

	// RVA: 0x11CABD0 Offset: 0x11C6BD0 VA: 0x11CABD0 Slot: 20
	internal override void set_LastNode(XmlLinkedNode value) { }

	// RVA: 0x11CABD8 Offset: 0x11C6BD8 VA: 0x11CABD8 Slot: 27
	internal override bool IsValidChildType(XmlNodeType type) { }

	// RVA: 0x11CABFC Offset: 0x11C6BFC VA: 0x11CABFC Slot: 9
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x11CAC04 Offset: 0x11C6C04 VA: 0x11CAC04 Slot: 40
	public override void set_InnerXml(string value) { }

	// RVA: 0x11CAC5C Offset: 0x11C6C5C VA: 0x11CAC5C Slot: 43
	public override void WriteTo(XmlWriter w) { }

	// RVA: 0x11CAC60 Offset: 0x11C6C60 VA: 0x11CAC60 Slot: 44
	public override void WriteContentTo(XmlWriter w) { }

	// RVA: 0x11CAC64 Offset: 0x11C6C64 VA: 0x11CAC64 Slot: 42
	public override string get_BaseURI() { }
}


// Namespace: System.Xml
public class XmlEntityReference : XmlLinkedNode // TypeDefIndex: 2687
{
	// Fields
	private string name; // 0x20
	private XmlLinkedNode lastChild; // 0x28

	// Properties
	public override string Name { get; }
	public override string LocalName { get; }
	public override string Value { get; set; }
	public override XmlNodeType NodeType { get; }
	public override bool IsReadOnly { get; }
	internal override bool IsContainer { get; }
	internal override XmlLinkedNode LastNode { get; set; }
	public override string BaseURI { get; }
	internal string ChildBaseURI { get; }

	// Methods

	// RVA: 0x11C68BC Offset: 0x11C28BC VA: 0x11C68BC
	protected internal void .ctor(string name, XmlDocument doc) { }

	// RVA: 0x11CAC6C Offset: 0x11C6C6C VA: 0x11CAC6C Slot: 6
	public override string get_Name() { }

	// RVA: 0x11CAC74 Offset: 0x11C6C74 VA: 0x11CAC74 Slot: 36
	public override string get_LocalName() { }

	// RVA: 0x11CAC7C Offset: 0x11C6C7C VA: 0x11CAC7C Slot: 7
	public override string get_Value() { }

	// RVA: 0x11CAC84 Offset: 0x11C6C84 VA: 0x11CAC84 Slot: 8
	public override void set_Value(string value) { }

	// RVA: 0x11CACDC Offset: 0x11C6CDC VA: 0x11CACDC Slot: 9
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x11CACE4 Offset: 0x11C6CE4 VA: 0x11CACE4 Slot: 31
	public override XmlNode CloneNode(bool deep) { }

	// RVA: 0x11CAD1C Offset: 0x11C6D1C VA: 0x11CAD1C Slot: 37
	public override bool get_IsReadOnly() { }

	// RVA: 0x11CAD24 Offset: 0x11C6D24 VA: 0x11CAD24 Slot: 18
	internal override bool get_IsContainer() { }

	// RVA: 0x11CAD2C Offset: 0x11C6D2C VA: 0x11CAD2C Slot: 47
	internal override void SetParent(XmlNode node) { }

	// RVA: 0x11CB384 Offset: 0x11C7384 VA: 0x11CB384 Slot: 48
	internal override void SetParentForLoad(XmlNode node) { }

	// RVA: 0x11CB394 Offset: 0x11C7394 VA: 0x11CB394 Slot: 19
	internal override XmlLinkedNode get_LastNode() { }

	// RVA: 0x11CB39C Offset: 0x11C739C VA: 0x11CB39C Slot: 20
	internal override void set_LastNode(XmlLinkedNode value) { }

	// RVA: 0x11CB3A4 Offset: 0x11C73A4 VA: 0x11CB3A4 Slot: 27
	internal override bool IsValidChildType(XmlNodeType type) { }

	// RVA: 0x11CB3C8 Offset: 0x11C73C8 VA: 0x11CB3C8 Slot: 43
	public override void WriteTo(XmlWriter w) { }

	// RVA: 0x11CB3F4 Offset: 0x11C73F4 VA: 0x11CB3F4 Slot: 44
	public override void WriteContentTo(XmlWriter w) { }

	// RVA: 0x11CB6C4 Offset: 0x11C76C4 VA: 0x11CB6C4 Slot: 42
	public override string get_BaseURI() { }

	// RVA: 0x11CB6EC Offset: 0x11C76EC VA: 0x11CB6EC
	private string ConstructBaseURI(string baseURI, string systemId) { }

	// RVA: 0x11CB7C0 Offset: 0x11C77C0 VA: 0x11CB7C0
	internal string get_ChildBaseURI() { }
}


// Namespace: System.Xml
public enum XmlNodeChangedAction // TypeDefIndex: 2688
{
	// Fields
	public int value__; // 0x0
	public const XmlNodeChangedAction Insert = 0;
	public const XmlNodeChangedAction Remove = 1;
	public const XmlNodeChangedAction Change = 2;
}


// Namespace: System.Xml
public class XmlImplementation // TypeDefIndex: 2689
{
	// Fields
	private XmlNameTable nameTable; // 0x10

	// Methods

	// RVA: 0x11C4918 Offset: 0x11C0918 VA: 0x11C4918
	public void .ctor() { }

	// RVA: 0x11C4DA8 Offset: 0x11C0DA8 VA: 0x11C4DA8
	public void .ctor(XmlNameTable nt) { }

	// RVA: 0x11CB860 Offset: 0x11C7860 VA: 0x11CB860 Slot: 4
	public virtual XmlDocument CreateDocument() { }
}


// Namespace: System.Xml
public abstract class XmlLinkedNode : XmlNode // TypeDefIndex: 2690
{
	// Fields
	internal XmlLinkedNode next; // 0x18

	// Properties
	public override XmlNode PreviousSibling { get; }
	public override XmlNode NextSibling { get; }

	// Methods

	// RVA: 0x11C3908 Offset: 0x11BF908 VA: 0x11C3908
	internal void .ctor(XmlDocument doc) { }

	// RVA: 0x11CB8B8 Offset: 0x11C78B8 VA: 0x11CB8B8 Slot: 12
	public override XmlNode get_PreviousSibling() { }

	// RVA: 0x11CB920 Offset: 0x11C7920 VA: 0x11CB920 Slot: 13
	public override XmlNode get_NextSibling() { }
}


// Namespace: System.Xml
internal class XmlLoader // TypeDefIndex: 2691
{
	// Fields
	private XmlDocument doc; // 0x10
	private XmlReader reader; // 0x18
	private bool preserveWhitespace; // 0x20

	// Methods

	// RVA: 0x11C1CC4 Offset: 0x11BDCC4 VA: 0x11C1CC4
	public void .ctor() { }

	// RVA: 0x11C7984 Offset: 0x11C3984 VA: 0x11C7984
	internal void Load(XmlDocument doc, XmlReader reader, bool preserveWhitespace) { }

	// RVA: 0x11CB970 Offset: 0x11C7970 VA: 0x11CB970
	private void LoadDocSequence(XmlDocument parentDoc) { }

	// RVA: 0x11C76F8 Offset: 0x11C36F8 VA: 0x11C76F8
	internal XmlNode ReadCurrentNode(XmlDocument doc, XmlReader reader) { }

	// RVA: 0x11CB9DC Offset: 0x11C79DC VA: 0x11CB9DC
	private XmlNode LoadNode(bool skipOverWhitespace) { }

	// RVA: 0x11CBF6C Offset: 0x11C7F6C VA: 0x11CBF6C
	private XmlAttribute LoadAttributeNode() { }

	// RVA: 0x11CC8E4 Offset: 0x11C88E4 VA: 0x11CC8E4
	private XmlAttribute LoadDefaultAttribute() { }

	// RVA: 0x11CCA74 Offset: 0x11C8A74 VA: 0x11CCA74
	private void LoadAttributeValue(XmlNode parent, bool direct) { }

	// RVA: 0x11CC294 Offset: 0x11C8294 VA: 0x11CC294
	private XmlEntityReference LoadEntityReferenceNode(bool direct) { }

	// RVA: 0x11CC47C Offset: 0x11C847C VA: 0x11CC47C
	private XmlDeclaration LoadDeclarationNode() { }

	// RVA: 0x11CC628 Offset: 0x11C8628 VA: 0x11CC628
	private XmlDocumentType LoadDocumentTypeNode() { }

	// RVA: 0x11CCD80 Offset: 0x11C8D80 VA: 0x11CCD80
	private XmlNode LoadNodeDirect() { }

	// RVA: 0x11CDAEC Offset: 0x11C9AEC VA: 0x11CDAEC
	private XmlAttribute LoadAttributeNodeDirect() { }

	// RVA: 0x11C9198 Offset: 0x11C5198 VA: 0x11C9198
	internal void ParseDocumentType(XmlDocumentType dtNode) { }

	// RVA: 0x11CDC2C Offset: 0x11C9C2C VA: 0x11CDC2C
	private void ParseDocumentType(XmlDocumentType dtNode, bool bUseResolver, XmlResolver resolver) { }

	// RVA: 0x11CD1E0 Offset: 0x11C91E0 VA: 0x11CD1E0
	private void LoadDocumentType(IDtdInfo dtdInfo, XmlDocumentType dtNode) { }

	// RVA: 0x11CDEB8 Offset: 0x11C9EB8 VA: 0x11CDEB8
	private XmlParserContext GetContext(XmlNode node) { }

	// RVA: 0x11C8AE4 Offset: 0x11C4AE4 VA: 0x11C8AE4
	internal XmlNamespaceManager ParsePartialContent(XmlNode parentNode, string innerxmltext, XmlNodeType nt) { }

	// RVA: 0x11CA830 Offset: 0x11C6830 VA: 0x11CA830
	internal void LoadInnerXmlElement(XmlElement node, string innerxmltext) { }

	// RVA: 0x11C1CCC Offset: 0x11BDCCC VA: 0x11C1CCC
	internal void LoadInnerXmlAttribute(XmlAttribute node, string innerxmltext) { }

	// RVA: 0x11CE9F0 Offset: 0x11CA9F0 VA: 0x11CE9F0
	private void RemoveDuplicateNamespace(XmlElement elem, XmlNamespaceManager mgr, bool fCheckElemAttrs) { }

	// RVA: 0x11CEC90 Offset: 0x11CAC90 VA: 0x11CEC90
	private string EntitizeName(string name) { }

	// RVA: 0x11CAB94 Offset: 0x11C6B94 VA: 0x11CAB94
	internal void ExpandEntity(XmlEntity ent) { }

	// RVA: 0x11CADD8 Offset: 0x11C6DD8 VA: 0x11CADD8
	internal void ExpandEntityReference(XmlEntityReference eref) { }

	// RVA: 0x11CE774 Offset: 0x11CA774 VA: 0x11CE774
	private XmlReader CreateInnerXmlReader(string xmlFragment, XmlNodeType nt, XmlParserContext context, XmlDocument doc) { }

	// RVA: 0x11C4568 Offset: 0x11C0568 VA: 0x11C4568
	internal static void ParseXmlDeclarationValue(string strValue, out string version, out string encoding, out string standalone) { }

	// RVA: 0x11CC7D4 Offset: 0x11C87D4 VA: 0x11CC7D4
	internal static Exception UnexpectedNodeType(XmlNodeType nodetype) { }
}


// Namespace: System.Xml
internal class XmlName : IXmlSchemaInfo // TypeDefIndex: 2692
{
	// Fields
	private string prefix; // 0x10
	private string localName; // 0x18
	private string ns; // 0x20
	private string name; // 0x28
	private int hashCode; // 0x30
	internal XmlDocument ownerDoc; // 0x38
	internal XmlName next; // 0x40

	// Properties
	public string Name { get; }
	public virtual XmlSchemaValidity Validity { get; }
	public virtual bool IsDefault { get; }
	public virtual bool IsNil { get; }
	public virtual XmlSchemaSimpleType MemberType { get; }
	public virtual XmlSchemaType SchemaType { get; }
	public virtual XmlSchemaElement SchemaElement { get; }
	public virtual XmlSchemaAttribute SchemaAttribute { get; }

	// Methods

	// RVA: 0x11CECFC Offset: 0x11CACFC VA: 0x11CECFC
	public static XmlName Create(string prefix, string localName, string ns, int hashCode, XmlDocument ownerDoc, XmlName next, IXmlSchemaInfo schemaInfo) { }

	// RVA: 0x11CEDE4 Offset: 0x11CADE4 VA: 0x11CEDE4
	internal void .ctor(string prefix, string localName, string ns, int hashCode, XmlDocument ownerDoc, XmlName next) { }

	// RVA: 0x11CF214 Offset: 0x11CB214 VA: 0x11CF214
	public string get_Name() { }

	// RVA: 0x11CF3C4 Offset: 0x11CB3C4 VA: 0x11CF3C4 Slot: 11
	public virtual XmlSchemaValidity get_Validity() { }

	// RVA: 0x11CF3CC Offset: 0x11CB3CC VA: 0x11CF3CC Slot: 12
	public virtual bool get_IsDefault() { }

	// RVA: 0x11CF3D4 Offset: 0x11CB3D4 VA: 0x11CF3D4 Slot: 13
	public virtual bool get_IsNil() { }

	// RVA: 0x11CF3DC Offset: 0x11CB3DC VA: 0x11CF3DC Slot: 14
	public virtual XmlSchemaSimpleType get_MemberType() { }

	// RVA: 0x11CF3E4 Offset: 0x11CB3E4 VA: 0x11CF3E4 Slot: 15
	public virtual XmlSchemaType get_SchemaType() { }

	// RVA: 0x11CF3EC Offset: 0x11CB3EC VA: 0x11CF3EC Slot: 16
	public virtual XmlSchemaElement get_SchemaElement() { }

	// RVA: 0x11CF3F4 Offset: 0x11CB3F4 VA: 0x11CF3F4 Slot: 17
	public virtual XmlSchemaAttribute get_SchemaAttribute() { }

	// RVA: 0x11CF3FC Offset: 0x11CB3FC VA: 0x11CF3FC Slot: 18
	public virtual bool Equals(IXmlSchemaInfo schemaInfo) { }

	// RVA: 0x11CF408 Offset: 0x11CB408 VA: 0x11CF408
	public static int GetHashCode(string name) { }
}


// Namespace: System.Xml
internal sealed class XmlNameEx : XmlName // TypeDefIndex: 2693
{
	// Fields
	private byte flags; // 0x48
	private XmlSchemaSimpleType memberType; // 0x50
	private XmlSchemaType schemaType; // 0x58
	private object decl; // 0x60

	// Properties
	public override XmlSchemaValidity Validity { get; }
	public override bool IsDefault { get; }
	public override bool IsNil { get; }
	public override XmlSchemaSimpleType MemberType { get; }
	public override XmlSchemaType SchemaType { get; }
	public override XmlSchemaElement SchemaElement { get; }
	public override XmlSchemaAttribute SchemaAttribute { get; }

	// Methods

	// RVA: 0x11CEE3C Offset: 0x11CAE3C VA: 0x11CEE3C
	internal void .ctor(string prefix, string localName, string ns, int hashCode, XmlDocument ownerDoc, XmlName next, IXmlSchemaInfo schemaInfo) { }

	// RVA: 0x11CF4C0 Offset: 0x11CB4C0 VA: 0x11CF4C0 Slot: 11
	public override XmlSchemaValidity get_Validity() { }

	// RVA: 0x11CF4F0 Offset: 0x11CB4F0 VA: 0x11CF4F0 Slot: 12
	public override bool get_IsDefault() { }

	// RVA: 0x11CF4FC Offset: 0x11CB4FC VA: 0x11CF4FC Slot: 13
	public override bool get_IsNil() { }

	// RVA: 0x11CF508 Offset: 0x11CB508 VA: 0x11CF508 Slot: 14
	public override XmlSchemaSimpleType get_MemberType() { }

	// RVA: 0x11CF510 Offset: 0x11CB510 VA: 0x11CF510 Slot: 15
	public override XmlSchemaType get_SchemaType() { }

	// RVA: 0x11CF518 Offset: 0x11CB518 VA: 0x11CF518 Slot: 16
	public override XmlSchemaElement get_SchemaElement() { }

	// RVA: 0x11CF594 Offset: 0x11CB594 VA: 0x11CF594 Slot: 17
	public override XmlSchemaAttribute get_SchemaAttribute() { }

	// RVA: 0x11CF46C Offset: 0x11CB46C VA: 0x11CF46C
	public void SetValidity(XmlSchemaValidity value) { }

	// RVA: 0x11CF480 Offset: 0x11CB480 VA: 0x11CF480
	public void SetIsDefault(bool value) { }

	// RVA: 0x11CF4A0 Offset: 0x11CB4A0 VA: 0x11CF4A0
	public void SetIsNil(bool value) { }

	// RVA: 0x11CF610 Offset: 0x11CB610 VA: 0x11CF610 Slot: 18
	public override bool Equals(IXmlSchemaInfo schemaInfo) { }
}


// Namespace: 
private class XmlNamedNodeMap.SmallXmlNodeList.SingleObjectEnumerator : IEnumerator // TypeDefIndex: 2694
{
	// Fields
	private object loneValue; // 0x10
	private int position; // 0x18

	// Properties
	public object Current { get; }

	// Methods

	// RVA: 0x11D0914 Offset: 0x11CC914 VA: 0x11D0914
	public void .ctor(object value) { }

	// RVA: 0x11D0944 Offset: 0x11CC944 VA: 0x11D0944 Slot: 5
	public object get_Current() { }

	// RVA: 0x11D0990 Offset: 0x11CC990 VA: 0x11D0990 Slot: 4
	public bool MoveNext() { }

	// RVA: 0x11D09AC Offset: 0x11CC9AC VA: 0x11D09AC Slot: 6
	public void Reset() { }
}


// Namespace: 
[DefaultMember("Item")]
internal struct XmlNamedNodeMap.SmallXmlNodeList // TypeDefIndex: 2695
{
	// Fields
	private object field; // 0x0

	// Properties
	public int Count { get; }
	public object Item { get; }

	// Methods

	// RVA: 0x11CFEA8 Offset: 0x11CBEA8 VA: 0x11CFEA8
	public int get_Count() { }

	// RVA: 0x11CFB90 Offset: 0x11CBB90 VA: 0x11CFB90
	public object get_Item(int index) { }

	// RVA: 0x11D01D0 Offset: 0x11CC1D0 VA: 0x11D01D0
	public void Add(object value) { }

	// RVA: 0x11D04FC Offset: 0x11CC4FC VA: 0x11D04FC
	public void RemoveAt(int index) { }

	// RVA: 0x11D0774 Offset: 0x11CC774 VA: 0x11D0774
	public void Insert(int index, object value) { }

	// RVA: 0x11CFF54 Offset: 0x11CBF54 VA: 0x11CFF54
	public IEnumerator GetEnumerator() { }
}


// Namespace: System.Xml
public class XmlNamedNodeMap : IEnumerable // TypeDefIndex: 2696
{
	// Fields
	internal XmlNode parent; // 0x10
	internal XmlNamedNodeMap.SmallXmlNodeList nodes; // 0x18

	// Properties
	public virtual int Count { get; }

	// Methods

	// RVA: 0x11CF9EC Offset: 0x11CB9EC VA: 0x11CF9EC
	internal void .ctor(XmlNode parent) { }

	// RVA: 0x11CFA14 Offset: 0x11CBA14 VA: 0x11CFA14 Slot: 5
	public virtual XmlNode GetNamedItem(string name) { }

	// RVA: 0x11CFC6C Offset: 0x11CBC6C VA: 0x11CFC6C Slot: 6
	public virtual XmlNode SetNamedItem(XmlNode node) { }

	// RVA: 0x11CFEA0 Offset: 0x11CBEA0 VA: 0x11CFEA0 Slot: 7
	public virtual int get_Count() { }

	// RVA: 0x11CFF4C Offset: 0x11CBF4C VA: 0x11CFF4C Slot: 8
	public virtual IEnumerator GetEnumerator() { }

	// RVA: 0x11CFAAC Offset: 0x11CBAAC VA: 0x11CFAAC
	internal int FindNodeOffset(string name) { }

	// RVA: 0x11CFD28 Offset: 0x11CBD28 VA: 0x11CFD28
	internal int FindNodeOffset(string localName, string namespaceURI) { }

	// RVA: 0x11D004C Offset: 0x11CC04C VA: 0x11D004C Slot: 9
	internal virtual XmlNode AddNode(XmlNode node) { }

	// RVA: 0x11D02EC Offset: 0x11CC2EC VA: 0x11D02EC Slot: 10
	internal virtual XmlNode AddNodeForLoad(XmlNode node, XmlDocument doc) { }

	// RVA: 0x11D0394 Offset: 0x11CC394 VA: 0x11D0394 Slot: 11
	internal virtual XmlNode RemoveNodeAt(int i) { }

	// RVA: 0x11CFE4C Offset: 0x11CBE4C VA: 0x11CFE4C
	internal XmlNode ReplaceNodeAt(int i, XmlNode node) { }

	// RVA: 0x11D05DC Offset: 0x11CC5DC VA: 0x11D05DC Slot: 12
	internal virtual XmlNode InsertNodeAt(int i, XmlNode node) { }
}


// Namespace: System.Xml
[DefaultMember("Item")]
public abstract class XmlNode : ICloneable, IEnumerable // TypeDefIndex: 2697
{
	// Fields
	internal XmlNode parentNode; // 0x10

	// Properties
	public abstract string Name { get; }
	public virtual string Value { get; set; }
	public abstract XmlNodeType NodeType { get; }
	public virtual XmlNode ParentNode { get; }
	public virtual XmlNodeList ChildNodes { get; }
	public virtual XmlNode PreviousSibling { get; }
	public virtual XmlNode NextSibling { get; }
	public virtual XmlAttributeCollection Attributes { get; }
	public virtual XmlDocument OwnerDocument { get; }
	public virtual XmlNode FirstChild { get; }
	public virtual XmlNode LastChild { get; }
	internal virtual bool IsContainer { get; }
	internal virtual XmlLinkedNode LastNode { get; set; }
	public virtual bool HasChildNodes { get; }
	public virtual string NamespaceURI { get; }
	public virtual string Prefix { get; set; }
	public abstract string LocalName { get; }
	public virtual bool IsReadOnly { get; }
	public virtual string InnerText { get; set; }
	public virtual string InnerXml { set; }
	public virtual IXmlSchemaInfo SchemaInfo { get; }
	public virtual string BaseURI { get; }
	internal XmlDocument Document { get; }
	internal virtual XmlSpace XmlSpace { get; }
	internal virtual string XmlLang { get; }
	internal virtual bool IsText { get; }

	// Methods

	// RVA: 0x11D09B8 Offset: 0x11CC9B8 VA: 0x11D09B8
	internal void .ctor() { }

	// RVA: 0x11D09C0 Offset: 0x11CC9C0 VA: 0x11D09C0
	internal void .ctor(XmlDocument doc) { }

	// RVA: -1 Offset: -1 Slot: 6
	public abstract string get_Name();

	// RVA: 0x11D0A3C Offset: 0x11CCA3C VA: 0x11D0A3C Slot: 7
	public virtual string get_Value() { }

	// RVA: 0x11D0A44 Offset: 0x11CCA44 VA: 0x11D0A44 Slot: 8
	public virtual void set_Value(string value) { }

	// RVA: -1 Offset: -1 Slot: 9
	public abstract XmlNodeType get_NodeType();

	// RVA: 0x11D0B10 Offset: 0x11CCB10 VA: 0x11D0B10 Slot: 10
	public virtual XmlNode get_ParentNode() { }

	// RVA: 0x11D0BF4 Offset: 0x11CCBF4 VA: 0x11D0BF4 Slot: 11
	public virtual XmlNodeList get_ChildNodes() { }

	// RVA: 0x11D0C50 Offset: 0x11CCC50 VA: 0x11D0C50 Slot: 12
	public virtual XmlNode get_PreviousSibling() { }

	// RVA: 0x11D0C58 Offset: 0x11CCC58 VA: 0x11D0C58 Slot: 13
	public virtual XmlNode get_NextSibling() { }

	// RVA: 0x11D0C60 Offset: 0x11CCC60 VA: 0x11D0C60 Slot: 14
	public virtual XmlAttributeCollection get_Attributes() { }

	// RVA: 0x11D0C68 Offset: 0x11CCC68 VA: 0x11D0C68 Slot: 15
	public virtual XmlDocument get_OwnerDocument() { }

	// RVA: 0x11D0D20 Offset: 0x11CCD20 VA: 0x11D0D20 Slot: 16
	public virtual XmlNode get_FirstChild() { }

	// RVA: 0x11D0D44 Offset: 0x11CCD44 VA: 0x11D0D44 Slot: 17
	public virtual XmlNode get_LastChild() { }

	// RVA: 0x11D0D54 Offset: 0x11CCD54 VA: 0x11D0D54 Slot: 18
	internal virtual bool get_IsContainer() { }

	// RVA: 0x11D0D5C Offset: 0x11CCD5C VA: 0x11D0D5C Slot: 19
	internal virtual XmlLinkedNode get_LastNode() { }

	// RVA: 0x11D0D64 Offset: 0x11CCD64 VA: 0x11D0D64 Slot: 20
	internal virtual void set_LastNode(XmlLinkedNode value) { }

	// RVA: 0x11D0D68 Offset: 0x11CCD68 VA: 0x11D0D68
	internal bool AncestorNode(XmlNode node) { }

	// RVA: 0x11D0DC4 Offset: 0x11CCDC4 VA: 0x11D0DC4 Slot: 21
	public virtual XmlNode InsertBefore(XmlNode newChild, XmlNode refChild) { }

	// RVA: 0x11D1368 Offset: 0x11CD368 VA: 0x11D1368 Slot: 22
	public virtual XmlNode InsertAfter(XmlNode newChild, XmlNode refChild) { }

	// RVA: 0x11D18AC Offset: 0x11CD8AC VA: 0x11D18AC Slot: 23
	public virtual XmlNode RemoveChild(XmlNode oldChild) { }

	// RVA: 0x11D1C1C Offset: 0x11CDC1C VA: 0x11D1C1C Slot: 24
	public virtual XmlNode PrependChild(XmlNode newChild) { }

	// RVA: 0x11D1C64 Offset: 0x11CDC64 VA: 0x11D1C64 Slot: 25
	public virtual XmlNode AppendChild(XmlNode newChild) { }

	// RVA: 0x11D210C Offset: 0x11CE10C VA: 0x11D210C Slot: 26
	internal virtual XmlNode AppendChildForLoad(XmlNode newChild, XmlDocument doc) { }

	// RVA: 0x11D22A0 Offset: 0x11CE2A0 VA: 0x11D22A0 Slot: 27
	internal virtual bool IsValidChildType(XmlNodeType type) { }

	// RVA: 0x11D22A8 Offset: 0x11CE2A8 VA: 0x11D22A8 Slot: 28
	internal virtual bool CanInsertBefore(XmlNode newChild, XmlNode refChild) { }

	// RVA: 0x11D22B0 Offset: 0x11CE2B0 VA: 0x11D22B0 Slot: 29
	internal virtual bool CanInsertAfter(XmlNode newChild, XmlNode refChild) { }

	// RVA: 0x11D22B8 Offset: 0x11CE2B8 VA: 0x11D22B8 Slot: 30
	public virtual bool get_HasChildNodes() { }

	// RVA: -1 Offset: -1 Slot: 31
	public abstract XmlNode CloneNode(bool deep);

	// RVA: 0x11D22DC Offset: 0x11CE2DC VA: 0x11D22DC Slot: 32
	internal virtual void CopyChildren(XmlDocument doc, XmlNode container, bool deep) { }

	// RVA: 0x11D237C Offset: 0x11CE37C VA: 0x11D237C Slot: 33
	public virtual string get_NamespaceURI() { }

	// RVA: 0x11D23C4 Offset: 0x11CE3C4 VA: 0x11D23C4 Slot: 34
	public virtual string get_Prefix() { }

	// RVA: 0x11D240C Offset: 0x11CE40C VA: 0x11D240C Slot: 35
	public virtual void set_Prefix(string value) { }

	// RVA: -1 Offset: -1 Slot: 36
	public abstract string get_LocalName();

	// RVA: 0x11D2410 Offset: 0x11CE410 VA: 0x11D2410 Slot: 37
	public virtual bool get_IsReadOnly() { }

	// RVA: 0x11D2434 Offset: 0x11CE434 VA: 0x11D2434
	internal static bool HasReadOnlyParent(XmlNode n) { }

	// RVA: 0x11D2500 Offset: 0x11CE500 VA: 0x11D2500 Slot: 4
	private object System.ICloneable.Clone() { }

	// RVA: 0x11D2514 Offset: 0x11CE514 VA: 0x11D2514 Slot: 5
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	// RVA: 0x11D2570 Offset: 0x11CE570 VA: 0x11D2570
	public IEnumerator GetEnumerator() { }

	// RVA: 0x11D25CC Offset: 0x11CE5CC VA: 0x11D25CC
	private void AppendChildText(StringBuilder builder) { }

	// RVA: 0x11D26D0 Offset: 0x11CE6D0 VA: 0x11D26D0 Slot: 38
	public virtual string get_InnerText() { }

	// RVA: 0x11D27D8 Offset: 0x11CE7D8 VA: 0x11D27D8 Slot: 39
	public virtual void set_InnerText(string value) { }

	// RVA: 0x11D28A8 Offset: 0x11CE8A8 VA: 0x11D28A8 Slot: 40
	public virtual void set_InnerXml(string value) { }

	// RVA: 0x11D2900 Offset: 0x11CE900 VA: 0x11D2900 Slot: 41
	public virtual IXmlSchemaInfo get_SchemaInfo() { }

	// RVA: 0x11D2958 Offset: 0x11CE958 VA: 0x11D2958 Slot: 42
	public virtual string get_BaseURI() { }

	// RVA: -1 Offset: -1 Slot: 43
	public abstract void WriteTo(XmlWriter w);

	// RVA: -1 Offset: -1 Slot: 44
	public abstract void WriteContentTo(XmlWriter w);

	// RVA: 0x11D2A80 Offset: 0x11CEA80 VA: 0x11D2A80 Slot: 45
	public virtual void RemoveAll() { }

	// RVA: 0x11D2AE8 Offset: 0x11CEAE8 VA: 0x11D2AE8
	internal XmlDocument get_Document() { }

	// RVA: 0x11D2B94 Offset: 0x11CEB94 VA: 0x11D2B94 Slot: 46
	public virtual string GetPrefixOfNamespace(string namespaceURI) { }

	// RVA: 0x11D2BF4 Offset: 0x11CEBF4 VA: 0x11D2BF4
	internal string GetPrefixOfNamespaceStrict(string namespaceURI) { }

	// RVA: 0x11D2F4C Offset: 0x11CEF4C VA: 0x11D2F4C Slot: 47
	internal virtual void SetParent(XmlNode node) { }

	// RVA: 0x11D2F7C Offset: 0x11CEF7C VA: 0x11D2F7C Slot: 48
	internal virtual void SetParentForLoad(XmlNode node) { }

	// RVA: 0x11D2F84 Offset: 0x11CEF84 VA: 0x11D2F84
	internal static void SplitName(string name, out string prefix, out string localName) { }

	// RVA: 0x11D3050 Offset: 0x11CF050 VA: 0x11D3050 Slot: 49
	internal virtual XmlNode FindChild(XmlNodeType type) { }

	// RVA: 0x11D30B4 Offset: 0x11CF0B4 VA: 0x11D30B4 Slot: 50
	internal virtual XmlNodeChangedEventArgs GetEventArgs(XmlNode node, XmlNode oldParent, XmlNode newParent, string oldValue, string newValue, XmlNodeChangedAction action) { }

	// RVA: 0x11D31D8 Offset: 0x11CF1D8 VA: 0x11D31D8 Slot: 51
	internal virtual void BeforeEvent(XmlNodeChangedEventArgs args) { }

	// RVA: 0x11D321C Offset: 0x11CF21C VA: 0x11D321C Slot: 52
	internal virtual void AfterEvent(XmlNodeChangedEventArgs args) { }

	// RVA: 0x11D3260 Offset: 0x11CF260 VA: 0x11D3260 Slot: 53
	internal virtual XmlSpace get_XmlSpace() { }

	// RVA: 0x11D33D8 Offset: 0x11CF3D8 VA: 0x11D33D8 Slot: 54
	internal virtual string get_XmlLang() { }

	// RVA: 0x11D34DC Offset: 0x11CF4DC VA: 0x11D34DC Slot: 55
	internal virtual bool get_IsText() { }

	// RVA: 0x11D1324 Offset: 0x11CD324 VA: 0x11D1324
	internal static void NestTextNodes(XmlNode prevNode, XmlNode nextNode) { }

	// RVA: 0x11D133C Offset: 0x11CD33C VA: 0x11D133C
	internal static void UnnestTextNodes(XmlNode prevNode, XmlNode nextNode) { }
}


// Namespace: System.Xml
public class XmlNodeChangedEventArgs : EventArgs // TypeDefIndex: 2698
{
	// Fields
	private XmlNodeChangedAction action; // 0x10
	private XmlNode node; // 0x18
	private XmlNode oldParent; // 0x20
	private XmlNode newParent; // 0x28
	private string oldValue; // 0x30
	private string newValue; // 0x38

	// Methods

	// RVA: 0x11D34E4 Offset: 0x11CF4E4 VA: 0x11D34E4
	public void .ctor(XmlNode node, XmlNode oldParent, XmlNode newParent, string oldValue, string newValue, XmlNodeChangedAction action) { }
}


// Namespace: System.Xml
public sealed class XmlNodeChangedEventHandler : MulticastDelegate // TypeDefIndex: 2699
{
	// Methods

	// RVA: 0x11D3580 Offset: 0x11CF580 VA: 0x11D3580
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x11D3684 Offset: 0x11CF684 VA: 0x11D3684 Slot: 12
	public virtual void Invoke(object sender, XmlNodeChangedEventArgs e) { }
}


// Namespace: System.Xml
[DefaultMember("ItemOf")]
public abstract class XmlNodeList : IEnumerable, IDisposable // TypeDefIndex: 2700
{
	// Properties
	public abstract int Count { get; }
	public virtual XmlNode ItemOf { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 6
	public abstract XmlNode Item(int index);

	// RVA: -1 Offset: -1 Slot: 7
	public abstract int get_Count();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract IEnumerator GetEnumerator();

	// RVA: 0x11D3698 Offset: 0x11CF698 VA: 0x11D3698 Slot: 9
	public virtual XmlNode get_ItemOf(int i) { }

	// RVA: 0x11D36A4 Offset: 0x11CF6A4 VA: 0x11D36A4 Slot: 5
	private void System.IDisposable.Dispose() { }

	// RVA: 0x11D36B0 Offset: 0x11CF6B0 VA: 0x11D36B0 Slot: 10
	protected virtual void PrivateDisposeNodeList() { }

	// RVA: 0x11D36B4 Offset: 0x11CF6B4 VA: 0x11D36B4
	protected void .ctor() { }
}


// Namespace: 
internal struct XmlNodeReaderNavigator.VirtualAttribute // TypeDefIndex: 2701
{
	// Fields
	internal string name; // 0x0
	internal string value; // 0x8

	// Methods

	// RVA: 0x11D388C Offset: 0x11CF88C VA: 0x11D388C
	internal void .ctor(string name, string value) { }
}


// Namespace: System.Xml
internal class XmlNodeReaderNavigator // TypeDefIndex: 2702
{
	// Fields
	private XmlNode curNode; // 0x10
	private XmlNode elemNode; // 0x18
	private XmlNode logNode; // 0x20
	private int attrIndex; // 0x28
	private int logAttrIndex; // 0x2C
	private XmlNameTable nameTable; // 0x30
	private XmlDocument doc; // 0x38
	private int nAttrInd; // 0x40
	private int nDeclarationAttrCount; // 0x44
	private int nDocTypeAttrCount; // 0x48
	private int nLogLevel; // 0x4C
	private int nLogAttrInd; // 0x50
	private bool bLogOnAttrVal; // 0x54
	private bool bCreatedOnAttribute; // 0x55
	internal XmlNodeReaderNavigator.VirtualAttribute[] decNodeAttributes; // 0x58
	internal XmlNodeReaderNavigator.VirtualAttribute[] docTypeNodeAttributes; // 0x60
	private bool bOnAttrVal; // 0x68

	// Properties
	public XmlNodeType NodeType { get; }
	public string NamespaceURI { get; }
	public string Name { get; }
	public string LocalName { get; }
	public string Prefix { get; }
	public string Value { get; }
	public string BaseURI { get; }
	public XmlSpace XmlSpace { get; }
	public string XmlLang { get; }
	public bool IsEmptyElement { get; }
	public bool IsDefault { get; }
	public IXmlSchemaInfo SchemaInfo { get; }
	public int AttributeCount { get; }
	private bool IsOnDeclOrDocType { get; }

	// Methods

	// RVA: 0x11D36BC Offset: 0x11CF6BC VA: 0x11D36BC
	public void .ctor(XmlNode node) { }

	// RVA: 0x11D3894 Offset: 0x11CF894 VA: 0x11D3894
	public XmlNodeType get_NodeType() { }

	// RVA: 0x11D38D8 Offset: 0x11CF8D8 VA: 0x11D38D8
	public string get_NamespaceURI() { }

	// RVA: 0x11D38FC Offset: 0x11CF8FC VA: 0x11D38FC
	public string get_Name() { }

	// RVA: 0x11D3A10 Offset: 0x11CFA10 VA: 0x11D3A10
	public string get_LocalName() { }

	// RVA: 0x11D39EC Offset: 0x11CF9EC VA: 0x11D39EC
	private bool IsLocalNameEmpty(XmlNodeType nt) { }

	// RVA: 0x11D3ABC Offset: 0x11CFABC VA: 0x11D3ABC
	public string get_Prefix() { }

	// RVA: 0x11D3AE0 Offset: 0x11CFAE0 VA: 0x11D3AE0
	public string get_Value() { }

	// RVA: 0x11D3E94 Offset: 0x11CFE94 VA: 0x11D3E94
	public string get_BaseURI() { }

	// RVA: 0x11D3EB8 Offset: 0x11CFEB8 VA: 0x11D3EB8
	public XmlSpace get_XmlSpace() { }

	// RVA: 0x11D3EDC Offset: 0x11CFEDC VA: 0x11D3EDC
	public string get_XmlLang() { }

	// RVA: 0x11D3F00 Offset: 0x11CFF00 VA: 0x11D3F00
	public bool get_IsEmptyElement() { }

	// RVA: 0x11D3FAC Offset: 0x11CFFAC VA: 0x11D3FAC
	public bool get_IsDefault() { }

	// RVA: 0x11D4060 Offset: 0x11D0060 VA: 0x11D4060
	public IXmlSchemaInfo get_SchemaInfo() { }

	// RVA: 0x11D4084 Offset: 0x11D0084 VA: 0x11D4084
	public int get_AttributeCount() { }

	// RVA: 0x11D4294 Offset: 0x11D0294 VA: 0x11D4294
	private void CheckIndexCondition(int attributeIndex) { }

	// RVA: 0x11D3D60 Offset: 0x11CFD60 VA: 0x11D3D60
	private void InitDecAttr() { }

	// RVA: 0x11D42FC Offset: 0x11D02FC VA: 0x11D42FC
	public string GetDeclarationAttr(XmlDeclaration decl, string name) { }

	// RVA: 0x11D43DC Offset: 0x11D03DC VA: 0x11D43DC
	public string GetDeclarationAttr(int i) { }

	// RVA: 0x11D4430 Offset: 0x11D0430 VA: 0x11D4430
	public int GetDecAttrInd(string name) { }

	// RVA: 0x11D41C0 Offset: 0x11D01C0 VA: 0x11D41C0
	private void InitDocTypeAttr() { }

	// RVA: 0x11D44C8 Offset: 0x11D04C8 VA: 0x11D44C8
	public string GetDocumentTypeAttr(XmlDocumentType docType, string name) { }

	// RVA: 0x11D4574 Offset: 0x11D0574 VA: 0x11D4574
	public string GetDocumentTypeAttr(int i) { }

	// RVA: 0x11D45C8 Offset: 0x11D05C8 VA: 0x11D45C8
	public int GetDocTypeAttrInd(string name) { }

	// RVA: 0x11D4660 Offset: 0x11D0660 VA: 0x11D4660
	private string GetAttributeFromElement(XmlElement elem, string name) { }

	// RVA: 0x11D46A4 Offset: 0x11D06A4 VA: 0x11D46A4
	public string GetAttribute(string name) { }

	// RVA: 0x11D4840 Offset: 0x11D0840 VA: 0x11D4840
	private string GetAttributeFromElement(XmlElement elem, string name, string ns) { }

	// RVA: 0x11D4888 Offset: 0x11D0888 VA: 0x11D4888
	public string GetAttribute(string name, string ns) { }

	// RVA: 0x11D4A58 Offset: 0x11D0A58 VA: 0x11D4A58
	public string GetAttribute(int attributeIndex) { }

	// RVA: 0x11D4C00 Offset: 0x11D0C00 VA: 0x11D4C00
	public void LogMove(int level) { }

	// RVA: 0x11D4C24 Offset: 0x11D0C24 VA: 0x11D4C24
	public void RollBackMove(ref int level) { }

	// RVA: 0x11D4C50 Offset: 0x11D0C50 VA: 0x11D4C50
	private bool get_IsOnDeclOrDocType() { }

	// RVA: 0x11D4C88 Offset: 0x11D0C88 VA: 0x11D4C88
	public void ResetToAttribute(ref int level) { }

	// RVA: 0x11D4D1C Offset: 0x11D0D1C VA: 0x11D4D1C
	public void ResetMove(ref int level, ref XmlNodeType nt) { }

	// RVA: 0x11D4EBC Offset: 0x11D0EBC VA: 0x11D4EBC
	public bool MoveToAttribute(string name) { }

	// RVA: 0x11D5074 Offset: 0x11D1074 VA: 0x11D5074
	private bool MoveToAttributeFromElement(XmlElement elem, string name, string ns) { }

	// RVA: 0x11D4F1C Offset: 0x11D0F1C VA: 0x11D4F1C
	public bool MoveToAttribute(string name, string namespaceURI) { }

	// RVA: 0x11D512C Offset: 0x11D112C VA: 0x11D512C
	public void MoveToAttribute(int attributeIndex) { }

	// RVA: 0x11D52B0 Offset: 0x11D12B0 VA: 0x11D52B0
	public bool MoveToNextAttribute(ref int level) { }

	// RVA: 0x11D5474 Offset: 0x11D1474 VA: 0x11D5474
	public bool MoveToParent() { }

	// RVA: 0x11D54B4 Offset: 0x11D14B4 VA: 0x11D54B4
	public bool MoveToFirstChild() { }

	// RVA: 0x11D54FC Offset: 0x11D14FC VA: 0x11D54FC
	private bool MoveToNextSibling(XmlNode node) { }

	// RVA: 0x11D5548 Offset: 0x11D1548 VA: 0x11D5548
	public bool MoveToNext() { }

	// RVA: 0x11D5588 Offset: 0x11D1588 VA: 0x11D5588
	public bool MoveToElement() { }

	// RVA: 0x11D5608 Offset: 0x11D1608 VA: 0x11D5608
	public string LookupNamespace(string prefix) { }

	// RVA: 0x11D58AC Offset: 0x11D18AC VA: 0x11D58AC
	internal string DefaultLookupNamespace(string prefix) { }

	// RVA: 0x11D59E4 Offset: 0x11D19E4 VA: 0x11D59E4
	internal string LookupPrefix(string namespaceName) { }

	// RVA: 0x11D5DAC Offset: 0x11D1DAC VA: 0x11D5DAC
	internal IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope) { }

	// RVA: 0x11D6288 Offset: 0x11D2288 VA: 0x11D6288
	public bool ReadAttributeValue(ref int level, ref bool bResolveEntity, ref XmlNodeType nt) { }
}


// Namespace: System.Xml
public class XmlNodeReader : XmlReader, IXmlNamespaceResolver // TypeDefIndex: 2703
{
	// Fields
	private XmlNodeReaderNavigator readerNav; // 0x10
	private XmlNodeType nodeType; // 0x18
	private int curDepth; // 0x1C
	private ReadState readState; // 0x20
	private bool fEOF; // 0x24
	private bool bResolveEntity; // 0x25
	private bool bStartFromDocument; // 0x26
	private bool bInReadBinary; // 0x27
	private ReadContentAsBinaryHelper readBinaryHelper; // 0x28

	// Properties
	public override XmlNodeType NodeType { get; }
	public override string Name { get; }
	public override string LocalName { get; }
	public override string NamespaceURI { get; }
	public override string Prefix { get; }
	public override string Value { get; }
	public override int Depth { get; }
	public override string BaseURI { get; }
	public override bool CanResolveEntity { get; }
	public override bool IsEmptyElement { get; }
	public override bool IsDefault { get; }
	public override XmlSpace XmlSpace { get; }
	public override string XmlLang { get; }
	public override IXmlSchemaInfo SchemaInfo { get; }
	public override int AttributeCount { get; }
	public override bool EOF { get; }
	public override ReadState ReadState { get; }
	public override bool HasAttributes { get; }
	public override XmlNameTable NameTable { get; }
	internal override IDtdInfo DtdInfo { get; }

	// Methods

	// RVA: 0x11D6448 Offset: 0x11D2448 VA: 0x11D6448
	public void .ctor(XmlNode node) { }

	// RVA: 0x11D652C Offset: 0x11D252C VA: 0x11D652C
	internal bool IsInReadingStates() { }

	// RVA: 0x11D653C Offset: 0x11D253C VA: 0x11D653C Slot: 6
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x11D6558 Offset: 0x11D2558 VA: 0x11D6558 Slot: 7
	public override string get_Name() { }

	// RVA: 0x11D65C8 Offset: 0x11D25C8 VA: 0x11D65C8 Slot: 8
	public override string get_LocalName() { }

	// RVA: 0x11D6638 Offset: 0x11D2638 VA: 0x11D6638 Slot: 9
	public override string get_NamespaceURI() { }

	// RVA: 0x11D66BC Offset: 0x11D26BC VA: 0x11D66BC Slot: 10
	public override string get_Prefix() { }

	// RVA: 0x11D6740 Offset: 0x11D2740 VA: 0x11D6740 Slot: 11
	public override string get_Value() { }

	// RVA: 0x11D67B0 Offset: 0x11D27B0 VA: 0x11D67B0 Slot: 12
	public override int get_Depth() { }

	// RVA: 0x11D67B8 Offset: 0x11D27B8 VA: 0x11D67B8 Slot: 13
	public override string get_BaseURI() { }

	// RVA: 0x11D67E4 Offset: 0x11D27E4 VA: 0x11D67E4 Slot: 38
	public override bool get_CanResolveEntity() { }

	// RVA: 0x11D67EC Offset: 0x11D27EC VA: 0x11D67EC Slot: 14
	public override bool get_IsEmptyElement() { }

	// RVA: 0x11D681C Offset: 0x11D281C VA: 0x11D681C Slot: 15
	public override bool get_IsDefault() { }

	// RVA: 0x11D684C Offset: 0x11D284C VA: 0x11D684C Slot: 17
	public override XmlSpace get_XmlSpace() { }

	// RVA: 0x11D6890 Offset: 0x11D2890 VA: 0x11D6890 Slot: 18
	public override string get_XmlLang() { }

	// RVA: 0x11D6914 Offset: 0x11D2914 VA: 0x11D6914 Slot: 19
	public override IXmlSchemaInfo get_SchemaInfo() { }

	// RVA: 0x11D6958 Offset: 0x11D2958 VA: 0x11D6958 Slot: 21
	public override int get_AttributeCount() { }

	// RVA: 0x11D6994 Offset: 0x11D2994 VA: 0x11D6994 Slot: 22
	public override string GetAttribute(string name) { }

	// RVA: 0x11D69C4 Offset: 0x11D29C4 VA: 0x11D69C4 Slot: 23
	public override string GetAttribute(string name, string namespaceURI) { }

	// RVA: 0x11D6A58 Offset: 0x11D2A58 VA: 0x11D6A58 Slot: 24
	public override string GetAttribute(int attributeIndex) { }

	// RVA: 0x11D6AC4 Offset: 0x11D2AC4 VA: 0x11D6AC4 Slot: 25
	public override bool MoveToAttribute(string name) { }

	// RVA: 0x11D6BB0 Offset: 0x11D2BB0 VA: 0x11D6BB0 Slot: 26
	public override void MoveToAttribute(int attributeIndex) { }

	// RVA: 0x11D6D88 Offset: 0x11D2D88 VA: 0x11D6D88 Slot: 27
	public override bool MoveToFirstAttribute() { }

	// RVA: 0x11D6E60 Offset: 0x11D2E60 VA: 0x11D6E60 Slot: 28
	public override bool MoveToNextAttribute() { }

	// RVA: 0x11D6F40 Offset: 0x11D2F40 VA: 0x11D6F40 Slot: 29
	public override bool MoveToElement() { }

	// RVA: 0x11D7020 Offset: 0x11D3020 VA: 0x11D7020 Slot: 31
	public override bool Read() { }

	// RVA: 0x11D7028 Offset: 0x11D3028 VA: 0x11D7028
	private bool Read(bool fSkipChildren) { }

	// RVA: 0x11D712C Offset: 0x11D312C VA: 0x11D712C
	private bool ReadNextNode(bool fSkipChildren) { }

	// RVA: 0x11D73E0 Offset: 0x11D33E0 VA: 0x11D73E0
	private void SetEndOfFile() { }

	// RVA: 0x11D73F8 Offset: 0x11D33F8 VA: 0x11D73F8
	private bool ReadAtZeroLevel(bool fSkipChildren) { }

	// RVA: 0x11D72FC Offset: 0x11D32FC VA: 0x11D72FC
	private bool ReadForward(bool fSkipChildren) { }

	// RVA: 0x11D72D8 Offset: 0x11D32D8 VA: 0x11D72D8
	private void ReSetReadingMarks() { }

	// RVA: 0x11D7468 Offset: 0x11D3468 VA: 0x11D7468 Slot: 32
	public override bool get_EOF() { }

	// RVA: 0x11D748C Offset: 0x11D348C VA: 0x11D748C Slot: 33
	public override void Close() { }

	// RVA: 0x11D7498 Offset: 0x11D3498 VA: 0x11D7498 Slot: 34
	public override ReadState get_ReadState() { }

	// RVA: 0x11D74A0 Offset: 0x11D34A0 VA: 0x11D74A0 Slot: 35
	public override void Skip() { }

	// RVA: 0x11D74A8 Offset: 0x11D34A8 VA: 0x11D74A8 Slot: 42
	public override string ReadString() { }

	// RVA: 0x11D754C Offset: 0x11D354C VA: 0x11D754C Slot: 49
	public override bool get_HasAttributes() { }

	// RVA: 0x11D7570 Offset: 0x11D3570 VA: 0x11D7570 Slot: 36
	public override XmlNameTable get_NameTable() { }

	// RVA: 0x11D758C Offset: 0x11D358C VA: 0x11D758C Slot: 37
	public override string LookupNamespace(string prefix) { }

	// RVA: 0x11D75C4 Offset: 0x11D35C4 VA: 0x11D75C4 Slot: 39
	public override void ResolveEntity() { }

	// RVA: 0x11D7648 Offset: 0x11D3648 VA: 0x11D7648 Slot: 30
	public override bool ReadAttributeValue() { }

	// RVA: 0x11D6B8C Offset: 0x11D2B8C VA: 0x11D6B8C
	private void FinishReadBinary() { }

	// RVA: 0x11D7694 Offset: 0x11D3694 VA: 0x11D7694 Slot: 53
	private IDictionary<string, string> System.Xml.IXmlNamespaceResolver.GetNamespacesInScope(XmlNamespaceScope scope) { }

	// RVA: 0x11D76AC Offset: 0x11D36AC VA: 0x11D76AC Slot: 55
	private string System.Xml.IXmlNamespaceResolver.LookupPrefix(string namespaceName) { }

	// RVA: 0x11D76C4 Offset: 0x11D36C4 VA: 0x11D76C4 Slot: 54
	private string System.Xml.IXmlNamespaceResolver.LookupNamespace(string prefix) { }

	// RVA: 0x11D7720 Offset: 0x11D3720 VA: 0x11D7720 Slot: 52
	internal override IDtdInfo get_DtdInfo() { }
}


// Namespace: System.Xml
public class XmlNotation : XmlNode // TypeDefIndex: 2704
{
	// Fields
	private string publicId; // 0x18
	private string systemId; // 0x20
	private string name; // 0x28

	// Properties
	public override string Name { get; }
	public override string LocalName { get; }
	public override XmlNodeType NodeType { get; }
	public override bool IsReadOnly { get; }
	public override string InnerXml { set; }

	// Methods

	// RVA: 0x11D7744 Offset: 0x11D3744 VA: 0x11D7744
	internal void .ctor(string name, string publicId, string systemId, XmlDocument doc) { }

	// RVA: 0x11D77AC Offset: 0x11D37AC VA: 0x11D77AC Slot: 6
	public override string get_Name() { }

	// RVA: 0x11D77B4 Offset: 0x11D37B4 VA: 0x11D77B4 Slot: 36
	public override string get_LocalName() { }

	// RVA: 0x11D77BC Offset: 0x11D37BC VA: 0x11D77BC Slot: 9
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x11D77C4 Offset: 0x11D37C4 VA: 0x11D77C4 Slot: 31
	public override XmlNode CloneNode(bool deep) { }

	// RVA: 0x11D781C Offset: 0x11D381C VA: 0x11D781C Slot: 37
	public override bool get_IsReadOnly() { }

	// RVA: 0x11D7824 Offset: 0x11D3824 VA: 0x11D7824 Slot: 40
	public override void set_InnerXml(string value) { }

	// RVA: 0x11D787C Offset: 0x11D387C VA: 0x11D787C Slot: 43
	public override void WriteTo(XmlWriter w) { }

	// RVA: 0x11D7880 Offset: 0x11D3880 VA: 0x11D7880 Slot: 44
	public override void WriteContentTo(XmlWriter w) { }
}


// Namespace: System.Xml
public class XmlProcessingInstruction : XmlLinkedNode // TypeDefIndex: 2705
{
	// Fields
	private string target; // 0x20
	private string data; // 0x28

	// Properties
	public override string Name { get; }
	public override string LocalName { get; }
	public override string Value { get; set; }
	public string Data { set; }
	public override string InnerText { get; set; }
	public override XmlNodeType NodeType { get; }

	// Methods

	// RVA: 0x11D7884 Offset: 0x11D3884 VA: 0x11D7884
	protected internal void .ctor(string target, string data, XmlDocument doc) { }

	// RVA: 0x11D78B4 Offset: 0x11D38B4 VA: 0x11D78B4 Slot: 6
	public override string get_Name() { }

	// RVA: 0x11D7908 Offset: 0x11D3908 VA: 0x11D7908 Slot: 36
	public override string get_LocalName() { }

	// RVA: 0x11D7914 Offset: 0x11D3914 VA: 0x11D7914 Slot: 7
	public override string get_Value() { }

	// RVA: 0x11D791C Offset: 0x11D391C VA: 0x11D791C Slot: 8
	public override void set_Value(string value) { }

	// RVA: 0x11D7920 Offset: 0x11D3920 VA: 0x11D7920
	public void set_Data(string value) { }

	// RVA: 0x11D79C0 Offset: 0x11D39C0 VA: 0x11D79C0 Slot: 38
	public override string get_InnerText() { }

	// RVA: 0x11D79C8 Offset: 0x11D39C8 VA: 0x11D79C8 Slot: 39
	public override void set_InnerText(string value) { }

	// RVA: 0x11D79CC Offset: 0x11D39CC VA: 0x11D79CC Slot: 9
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x11D79D4 Offset: 0x11D39D4 VA: 0x11D79D4 Slot: 31
	public override XmlNode CloneNode(bool deep) { }

	// RVA: 0x11D7A0C Offset: 0x11D3A0C VA: 0x11D7A0C Slot: 43
	public override void WriteTo(XmlWriter w) { }

	// RVA: 0x11D7A38 Offset: 0x11D3A38 VA: 0x11D7A38 Slot: 44
	public override void WriteContentTo(XmlWriter w) { }
}


// Namespace: System.Xml
public class XmlSignificantWhitespace : XmlCharacterData // TypeDefIndex: 2706
{
	// Properties
	public override string Name { get; }
	public override string LocalName { get; }
	public override XmlNodeType NodeType { get; }
	public override XmlNode ParentNode { get; }
	public override string Value { get; set; }
	internal override bool IsText { get; }

	// Methods

	// RVA: 0x11D7A3C Offset: 0x11D3A3C VA: 0x11D7A3C
	protected internal void .ctor(string strData, XmlDocument doc) { }

	// RVA: 0x11D7AD8 Offset: 0x11D3AD8 VA: 0x11D7AD8 Slot: 6
	public override string get_Name() { }

	// RVA: 0x11D7B00 Offset: 0x11D3B00 VA: 0x11D7B00 Slot: 36
	public override string get_LocalName() { }

	// RVA: 0x11D7B28 Offset: 0x11D3B28 VA: 0x11D7B28 Slot: 9
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x11D7B30 Offset: 0x11D3B30 VA: 0x11D7B30 Slot: 10
	public override XmlNode get_ParentNode() { }

	// RVA: 0x11D7BB8 Offset: 0x11D3BB8 VA: 0x11D7BB8 Slot: 31
	public override XmlNode CloneNode(bool deep) { }

	// RVA: 0x11D7C14 Offset: 0x11D3C14 VA: 0x11D7C14 Slot: 7
	public override string get_Value() { }

	// RVA: 0x11D7C24 Offset: 0x11D3C24 VA: 0x11D7C24 Slot: 8
	public override void set_Value(string value) { }

	// RVA: 0x11D7CB0 Offset: 0x11D3CB0 VA: 0x11D7CB0 Slot: 43
	public override void WriteTo(XmlWriter w) { }

	// RVA: 0x11D7CF0 Offset: 0x11D3CF0 VA: 0x11D7CF0 Slot: 44
	public override void WriteContentTo(XmlWriter w) { }

	// RVA: 0x11D7CF4 Offset: 0x11D3CF4 VA: 0x11D7CF4 Slot: 55
	internal override bool get_IsText() { }
}


// Namespace: System.Xml
public class XmlText : XmlCharacterData // TypeDefIndex: 2707
{
	// Properties
	public override string Name { get; }
	public override string LocalName { get; }
	public override XmlNodeType NodeType { get; }
	public override XmlNode ParentNode { get; }
	public override string Value { get; set; }
	internal override bool IsText { get; }

	// Methods

	// RVA: 0x11D7CFC Offset: 0x11D3CFC VA: 0x11D7CFC
	internal void .ctor(string strData) { }

	// RVA: 0x11D7D08 Offset: 0x11D3D08 VA: 0x11D7D08
	protected internal void .ctor(string strData, XmlDocument doc) { }

	// RVA: 0x11D7D10 Offset: 0x11D3D10 VA: 0x11D7D10 Slot: 6
	public override string get_Name() { }

	// RVA: 0x11D7D38 Offset: 0x11D3D38 VA: 0x11D7D38 Slot: 36
	public override string get_LocalName() { }

	// RVA: 0x11D7D60 Offset: 0x11D3D60 VA: 0x11D7D60 Slot: 9
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x11D7D68 Offset: 0x11D3D68 VA: 0x11D7D68 Slot: 10
	public override XmlNode get_ParentNode() { }

	// RVA: 0x11D7DEC Offset: 0x11D3DEC VA: 0x11D7DEC Slot: 31
	public override XmlNode CloneNode(bool deep) { }

	// RVA: 0x11D7E48 Offset: 0x11D3E48 VA: 0x11D7E48 Slot: 7
	public override string get_Value() { }

	// RVA: 0x11D7E58 Offset: 0x11D3E58 VA: 0x11D7E58 Slot: 8
	public override void set_Value(string value) { }

	// RVA: 0x11D7F10 Offset: 0x11D3F10 VA: 0x11D7F10 Slot: 43
	public override void WriteTo(XmlWriter w) { }

	// RVA: 0x11D7F50 Offset: 0x11D3F50 VA: 0x11D7F50 Slot: 44
	public override void WriteContentTo(XmlWriter w) { }

	// RVA: 0x11D7F54 Offset: 0x11D3F54 VA: 0x11D7F54 Slot: 55
	internal override bool get_IsText() { }
}


// Namespace: System.Xml
internal class XmlUnspecifiedAttribute : XmlAttribute // TypeDefIndex: 2708
{
	// Fields
	private bool fSpecified; // 0x28

	// Properties
	public override bool Specified { get; }
	public override string InnerText { set; }

	// Methods

	// RVA: 0x11D7F5C Offset: 0x11D3F5C VA: 0x11D7F5C
	protected internal void .ctor(string prefix, string localName, string namespaceURI, XmlDocument doc) { }

	// RVA: 0x11D7F64 Offset: 0x11D3F64 VA: 0x11D7F64 Slot: 56
	public override bool get_Specified() { }

	// RVA: 0x11D7F6C Offset: 0x11D3F6C VA: 0x11D7F6C Slot: 31
	public override XmlNode CloneNode(bool deep) { }

	// RVA: 0x11D809C Offset: 0x11D409C VA: 0x11D809C Slot: 39
	public override void set_InnerText(string value) { }

	// RVA: 0x11D80BC Offset: 0x11D40BC VA: 0x11D80BC Slot: 21
	public override XmlNode InsertBefore(XmlNode newChild, XmlNode refChild) { }

	// RVA: 0x11D80DC Offset: 0x11D40DC VA: 0x11D80DC Slot: 22
	public override XmlNode InsertAfter(XmlNode newChild, XmlNode refChild) { }

	// RVA: 0x11D80FC Offset: 0x11D40FC VA: 0x11D80FC Slot: 23
	public override XmlNode RemoveChild(XmlNode oldChild) { }

	// RVA: 0x11D811C Offset: 0x11D411C VA: 0x11D811C Slot: 25
	public override XmlNode AppendChild(XmlNode newChild) { }

	// RVA: 0x11D813C Offset: 0x11D413C VA: 0x11D813C Slot: 43
	public override void WriteTo(XmlWriter w) { }
}


// Namespace: System.Xml
public class XmlWhitespace : XmlCharacterData // TypeDefIndex: 2709
{
	// Properties
	public override string Name { get; }
	public override string LocalName { get; }
	public override XmlNodeType NodeType { get; }
	public override XmlNode ParentNode { get; }
	public override string Value { get; set; }
	internal override bool IsText { get; }

	// Methods

	// RVA: 0x11D8150 Offset: 0x11D4150 VA: 0x11D8150
	protected internal void .ctor(string strData, XmlDocument doc) { }

	// RVA: 0x11D81EC Offset: 0x11D41EC VA: 0x11D81EC Slot: 6
	public override string get_Name() { }

	// RVA: 0x11D8214 Offset: 0x11D4214 VA: 0x11D8214 Slot: 36
	public override string get_LocalName() { }

	// RVA: 0x11D823C Offset: 0x11D423C VA: 0x11D823C Slot: 9
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x11D8244 Offset: 0x11D4244 VA: 0x11D8244 Slot: 10
	public override XmlNode get_ParentNode() { }

	// RVA: 0x11D82CC Offset: 0x11D42CC VA: 0x11D82CC Slot: 7
	public override string get_Value() { }

	// RVA: 0x11D82DC Offset: 0x11D42DC VA: 0x11D82DC Slot: 8
	public override void set_Value(string value) { }

	// RVA: 0x11D8368 Offset: 0x11D4368 VA: 0x11D8368 Slot: 31
	public override XmlNode CloneNode(bool deep) { }

	// RVA: 0x11D83C4 Offset: 0x11D43C4 VA: 0x11D83C4 Slot: 43
	public override void WriteTo(XmlWriter w) { }

	// RVA: 0x11D8404 Offset: 0x11D4404 VA: 0x11D8404 Slot: 44
	public override void WriteContentTo(XmlWriter w) { }

	// RVA: 0x11D8408 Offset: 0x11D4408 VA: 0x11D8408 Slot: 55
	internal override bool get_IsText() { }
}


// Namespace: System.Xml
internal sealed class EmptyEnumerator : IEnumerator // TypeDefIndex: 2710
{
	// Properties
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	// RVA: 0x11D8410 Offset: 0x11D4410 VA: 0x11D8410 Slot: 4
	private bool System.Collections.IEnumerator.MoveNext() { }

	// RVA: 0x11D8418 Offset: 0x11D4418 VA: 0x11D8418 Slot: 6
	private void System.Collections.IEnumerator.Reset() { }

	// RVA: 0x11D841C Offset: 0x11D441C VA: 0x11D841C Slot: 5
	private object System.Collections.IEnumerator.get_Current() { }

	// RVA: 0x11D8474 Offset: 0x11D4474 VA: 0x11D8474
	public void .ctor() { }
}


// Namespace: System.Xml
[DefaultMember("Item")]
internal class HWStack : ICloneable // TypeDefIndex: 2711
{
	// Fields
	private object[] stack; // 0x10
	private int growthRate; // 0x18
	private int used; // 0x1C
	private int size; // 0x20
	private int limit; // 0x24

	// Properties
	internal object Item { get; set; }

	// Methods

	// RVA: 0x11D847C Offset: 0x11D447C VA: 0x11D847C
	internal void .ctor(int GrowthRate) { }

	// RVA: 0x11D8484 Offset: 0x11D4484 VA: 0x11D8484
	internal void .ctor(int GrowthRate, int limit) { }

	// RVA: 0x11D84F8 Offset: 0x11D44F8 VA: 0x11D84F8
	internal object Push() { }

	// RVA: 0x11D8630 Offset: 0x11D4630 VA: 0x11D8630
	internal object Pop() { }

	// RVA: 0x11D8678 Offset: 0x11D4678 VA: 0x11D8678
	internal object Peek() { }

	// RVA: 0x11D86BC Offset: 0x11D46BC VA: 0x11D86BC
	internal void AddToTop(object o) { }

	// RVA: 0x11D8728 Offset: 0x11D4728 VA: 0x11D8728
	internal object get_Item(int index) { }

	// RVA: 0x11D879C Offset: 0x11D479C VA: 0x11D879C
	internal void set_Item(int index, object value) { }

	// RVA: 0x11D8844 Offset: 0x11D4844 VA: 0x11D8844
	private void .ctor(object[] stack, int growthRate, int used, int size) { }

	// RVA: 0x11D8888 Offset: 0x11D4888 VA: 0x11D8888 Slot: 4
	public object Clone() { }
}


// Namespace: System.Xml
public interface IXmlLineInfo // TypeDefIndex: 2712
{
	// Properties
	public abstract int LineNumber { get; }
	public abstract int LinePosition { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool HasLineInfo();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract int get_LineNumber();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract int get_LinePosition();
}


// Namespace: System.Xml
internal class PositionInfo : IXmlLineInfo // TypeDefIndex: 2713
{
	// Properties
	public virtual int LineNumber { get; }
	public virtual int LinePosition { get; }

	// Methods

	// RVA: 0x11D8964 Offset: 0x11D4964 VA: 0x11D8964 Slot: 7
	public virtual bool HasLineInfo() { }

	// RVA: 0x11D896C Offset: 0x11D496C VA: 0x11D896C Slot: 8
	public virtual int get_LineNumber() { }

	// RVA: 0x11D8974 Offset: 0x11D4974 VA: 0x11D8974 Slot: 9
	public virtual int get_LinePosition() { }

	// RVA: 0x11D897C Offset: 0x11D497C VA: 0x11D897C
	public static PositionInfo GetPositionInfo(object o) { }

	// RVA: 0x11D8A54 Offset: 0x11D4A54 VA: 0x11D8A54
	public void .ctor() { }
}


// Namespace: System.Xml
internal class ReaderPositionInfo : PositionInfo // TypeDefIndex: 2714
{
	// Fields
	private IXmlLineInfo lineInfo; // 0x10

	// Properties
	public override int LineNumber { get; }
	public override int LinePosition { get; }

	// Methods

	// RVA: 0x11D8A2C Offset: 0x11D4A2C VA: 0x11D8A2C
	public void .ctor(IXmlLineInfo lineInfo) { }

	// RVA: 0x11D8A5C Offset: 0x11D4A5C VA: 0x11D8A5C Slot: 7
	public override bool HasLineInfo() { }

	// RVA: 0x11D8AFC Offset: 0x11D4AFC VA: 0x11D8AFC Slot: 8
	public override int get_LineNumber() { }

	// RVA: 0x11D8BA0 Offset: 0x11D4BA0 VA: 0x11D8BA0 Slot: 9
	public override int get_LinePosition() { }
}


// Namespace: System.Xml
public interface IXmlNamespaceResolver // TypeDefIndex: 2715
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract string LookupNamespace(string prefix);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract string LookupPrefix(string namespaceName);
}


// Namespace: System.Xml
internal struct LineInfo // TypeDefIndex: 2716
{
	// Fields
	internal int lineNo; // 0x0
	internal int linePos; // 0x4

	// Methods

	// RVA: 0x11D8C44 Offset: 0x11D4C44 VA: 0x11D8C44
	public void .ctor(int lineNo, int linePos) { }

	// RVA: 0x11D8C4C Offset: 0x11D4C4C VA: 0x11D8C4C
	public void Set(int lineNo, int linePos) { }
}


// Namespace: 
private class NameTable.Entry // TypeDefIndex: 2717
{
	// Fields
	internal string str; // 0x10
	internal int hashCode; // 0x18
	internal NameTable.Entry next; // 0x20

	// Methods

	// RVA: 0x11D92E0 Offset: 0x11D52E0 VA: 0x11D92E0
	internal void .ctor(string str, int hashCode, NameTable.Entry next) { }
}


// Namespace: System.Xml
public class NameTable : XmlNameTable // TypeDefIndex: 2718
{
	// Fields
	private NameTable.Entry[] entries; // 0x10
	private int count; // 0x18
	private int mask; // 0x1C
	private int hashCodeRandomizer; // 0x20

	// Methods

	// RVA: 0x11D8C54 Offset: 0x11D4C54 VA: 0x11D8C54
	public void .ctor() { }

	// RVA: 0x11D8CC4 Offset: 0x11D4CC4 VA: 0x11D8CC4 Slot: 6
	public override string Add(string key) { }

	// RVA: 0x11D8F40 Offset: 0x11D4F40 VA: 0x11D8F40 Slot: 5
	public override string Add(char[] key, int start, int len) { }

	// RVA: 0x11D917C Offset: 0x11D517C VA: 0x11D917C Slot: 4
	public override string Get(string value) { }

	// RVA: 0x11D8E3C Offset: 0x11D4E3C VA: 0x11D8E3C
	private string AddEntry(string str, int hashCode) { }

	// RVA: 0x11D9320 Offset: 0x11D5320 VA: 0x11D9320
	private void Grow() { }

	// RVA: 0x11D90C0 Offset: 0x11D50C0 VA: 0x11D90C0
	private static bool TextEquals(string str1, char[] str2, int str2Start, int str2Length) { }
}


// Namespace: System.Xml
internal static class Ref // TypeDefIndex: 2719
{
	// Methods

	// RVA: 0x11D2F40 Offset: 0x11CEF40 VA: 0x11D2F40
	public static bool Equal(string strA, string strB) { }
}


// Namespace: 
private enum DtdParser.Token // TypeDefIndex: 2720
{
	// Fields
	public int value__; // 0x0
	public const DtdParser.Token CDATA = 0;
	public const DtdParser.Token ID = 1;
	public const DtdParser.Token IDREF = 2;
	public const DtdParser.Token IDREFS = 3;
	public const DtdParser.Token ENTITY = 4;
	public const DtdParser.Token ENTITIES = 5;
	public const DtdParser.Token NMTOKEN = 6;
	public const DtdParser.Token NMTOKENS = 7;
	public const DtdParser.Token NOTATION = 8;
	public const DtdParser.Token None = 9;
	public const DtdParser.Token PERef = 10;
	public const DtdParser.Token AttlistDecl = 11;
	public const DtdParser.Token ElementDecl = 12;
	public const DtdParser.Token EntityDecl = 13;
	public const DtdParser.Token NotationDecl = 14;
	public const DtdParser.Token Comment = 15;
	public const DtdParser.Token PI = 16;
	public const DtdParser.Token CondSectionStart = 17;
	public const DtdParser.Token CondSectionEnd = 18;
	public const DtdParser.Token Eof = 19;
	public const DtdParser.Token REQUIRED = 20;
	public const DtdParser.Token IMPLIED = 21;
	public const DtdParser.Token FIXED = 22;
	public const DtdParser.Token QName = 23;
	public const DtdParser.Token Name = 24;
	public const DtdParser.Token Nmtoken = 25;
	public const DtdParser.Token Quote = 26;
	public const DtdParser.Token LeftParen = 27;
	public const DtdParser.Token RightParen = 28;
	public const DtdParser.Token GreaterThan = 29;
	public const DtdParser.Token Or = 30;
	public const DtdParser.Token LeftBracket = 31;
	public const DtdParser.Token RightBracket = 32;
	public const DtdParser.Token PUBLIC = 33;
	public const DtdParser.Token SYSTEM = 34;
	public const DtdParser.Token Literal = 35;
	public const DtdParser.Token DOCTYPE = 36;
	public const DtdParser.Token NData = 37;
	public const DtdParser.Token Percent = 38;
	public const DtdParser.Token Star = 39;
	public const DtdParser.Token QMark = 40;
	public const DtdParser.Token Plus = 41;
	public const DtdParser.Token PCDATA = 42;
	public const DtdParser.Token Comma = 43;
	public const DtdParser.Token ANY = 44;
	public const DtdParser.Token EMPTY = 45;
	public const DtdParser.Token IGNORE = 46;
	public const DtdParser.Token INCLUDE = 47;
}


// Namespace: 
private enum DtdParser.ScanningFunction // TypeDefIndex: 2721
{
	// Fields
	public int value__; // 0x0
	public const DtdParser.ScanningFunction SubsetContent = 0;
	public const DtdParser.ScanningFunction Name = 1;
	public const DtdParser.ScanningFunction QName = 2;
	public const DtdParser.ScanningFunction Nmtoken = 3;
	public const DtdParser.ScanningFunction Doctype1 = 4;
	public const DtdParser.ScanningFunction Doctype2 = 5;
	public const DtdParser.ScanningFunction Element1 = 6;
	public const DtdParser.ScanningFunction Element2 = 7;
	public const DtdParser.ScanningFunction Element3 = 8;
	public const DtdParser.ScanningFunction Element4 = 9;
	public const DtdParser.ScanningFunction Element5 = 10;
	public const DtdParser.ScanningFunction Element6 = 11;
	public const DtdParser.ScanningFunction Element7 = 12;
	public const DtdParser.ScanningFunction Attlist1 = 13;
	public const DtdParser.ScanningFunction Attlist2 = 14;
	public const DtdParser.ScanningFunction Attlist3 = 15;
	public const DtdParser.ScanningFunction Attlist4 = 16;
	public const DtdParser.ScanningFunction Attlist5 = 17;
	public const DtdParser.ScanningFunction Attlist6 = 18;
	public const DtdParser.ScanningFunction Attlist7 = 19;
	public const DtdParser.ScanningFunction Entity1 = 20;
	public const DtdParser.ScanningFunction Entity2 = 21;
	public const DtdParser.ScanningFunction Entity3 = 22;
	public const DtdParser.ScanningFunction Notation1 = 23;
	public const DtdParser.ScanningFunction CondSection1 = 24;
	public const DtdParser.ScanningFunction CondSection2 = 25;
	public const DtdParser.ScanningFunction CondSection3 = 26;
	public const DtdParser.ScanningFunction Literal = 27;
	public const DtdParser.ScanningFunction SystemId = 28;
	public const DtdParser.ScanningFunction PublicId1 = 29;
	public const DtdParser.ScanningFunction PublicId2 = 30;
	public const DtdParser.ScanningFunction ClosingTag = 31;
	public const DtdParser.ScanningFunction ParamEntitySpace = 32;
	public const DtdParser.ScanningFunction None = 33;
}


// Namespace: 
private enum DtdParser.LiteralType // TypeDefIndex: 2722
{
	// Fields
	public int value__; // 0x0
	public const DtdParser.LiteralType AttributeValue = 0;
	public const DtdParser.LiteralType EntityReplText = 1;
	public const DtdParser.LiteralType SystemOrPublicID = 2;
}


// Namespace: 
private class DtdParser.UndeclaredNotation // TypeDefIndex: 2723
{
	// Fields
	internal string name; // 0x10
	internal int lineNo; // 0x18
	internal int linePos; // 0x1C
	internal DtdParser.UndeclaredNotation next; // 0x20

	// Methods

	// RVA: 0x11E3168 Offset: 0x11DF168 VA: 0x11E3168
	internal void .ctor(string name, int lineNo, int linePos) { }
}


// Namespace: 
private class DtdParser.ParseElementOnlyContent_LocalFrame // TypeDefIndex: 2724
{
	// Fields
	public int startParenEntityId; // 0x10
	public DtdParser.Token parsingSchema; // 0x14

	// Methods

	// RVA: 0x11E31A8 Offset: 0x11DF1A8 VA: 0x11E31A8
	public void .ctor(int startParentEntityIdParam) { }
}


// Namespace: System.Xml
internal class DtdParser : IDtdParser // TypeDefIndex: 2725
{
	// Fields
	private IDtdParserAdapter readerAdapter; // 0x10
	private IDtdParserAdapterWithValidation readerAdapterWithValidation; // 0x18
	private XmlNameTable nameTable; // 0x20
	private SchemaInfo schemaInfo; // 0x28
	private XmlCharType xmlCharType; // 0x30
	private string systemId; // 0x38
	private string publicId; // 0x40
	private bool normalize; // 0x48
	private bool validate; // 0x49
	private bool supportNamespaces; // 0x4A
	private bool v1Compat; // 0x4B
	private char[] chars; // 0x50
	private int charsUsed; // 0x58
	private int curPos; // 0x5C
	private DtdParser.ScanningFunction scanningFunction; // 0x60
	private DtdParser.ScanningFunction nextScaningFunction; // 0x64
	private DtdParser.ScanningFunction savedScanningFunction; // 0x68
	private bool whitespaceSeen; // 0x6C
	private int tokenStartPos; // 0x70
	private int colonPos; // 0x74
	private StringBuilder internalSubsetValueSb; // 0x78
	private int externalEntitiesDepth; // 0x80
	private int currentEntityId; // 0x84
	private bool freeFloatingDtd; // 0x88
	private bool hasFreeFloatingInternalSubset; // 0x89
	private StringBuilder stringBuilder; // 0x90
	private int condSectionDepth; // 0x98
	private LineInfo literalLineInfo; // 0x9C
	private char literalQuoteChar; // 0xA4
	private string documentBaseUri; // 0xA8
	private string externalDtdBaseUri; // 0xB0
	private Dictionary<string, DtdParser.UndeclaredNotation> undeclaredNotations; // 0xB8
	private int[] condSectionEntityIds; // 0xC0

	// Properties
	private bool ParsingInternalSubset { get; }
	private bool IgnoreEntityReferences { get; }
	private bool SaveInternalSubsetValue { get; }
	private bool ParsingTopLevelMarkup { get; }
	private int LineNo { get; }
	private int LinePos { get; }
	private string BaseUriStr { get; }

	// Methods

	// RVA: 0x11D9448 Offset: 0x11D5448 VA: 0x11D9448
	private void .ctor() { }

	// RVA: 0x11D94D0 Offset: 0x11D54D0 VA: 0x11D94D0
	internal static IDtdParser Create() { }

	// RVA: 0x11D9520 Offset: 0x11D5520 VA: 0x11D9520
	private void Initialize(IDtdParserAdapter readerAdapter) { }

	// RVA: 0x11D98EC Offset: 0x11D58EC VA: 0x11D98EC
	private void InitializeFreeFloatingDtd(string baseUri, string docTypeName, string publicId, string systemId, string internalSubset, IDtdParserAdapter adapter) { }

	// RVA: 0x11D9D30 Offset: 0x11D5D30 VA: 0x11D9D30 Slot: 4
	private IDtdInfo System.Xml.IDtdParser.ParseInternalDtd(IDtdParserAdapter adapter, bool saveInternalSubset) { }

	// RVA: 0x11D9F04 Offset: 0x11D5F04 VA: 0x11D9F04 Slot: 5
	private IDtdInfo System.Xml.IDtdParser.ParseFreeFloatingDtd(string baseUri, string docTypeName, string publicId, string systemId, string internalSubset, IDtdParserAdapter adapter) { }

	// RVA: 0x11D9F28 Offset: 0x11D5F28 VA: 0x11D9F28
	private bool get_ParsingInternalSubset() { }

	// RVA: 0x11D9F38 Offset: 0x11D5F38 VA: 0x11D9F38
	private bool get_IgnoreEntityReferences() { }

	// RVA: 0x11D9F48 Offset: 0x11D5F48 VA: 0x11D9F48
	private bool get_SaveInternalSubsetValue() { }

	// RVA: 0x11DA008 Offset: 0x11D6008 VA: 0x11DA008
	private bool get_ParsingTopLevelMarkup() { }

	// RVA: 0x11D9D60 Offset: 0x11D5D60 VA: 0x11D9D60
	private void Parse(bool saveInternalSubset) { }

	// RVA: 0x11DA08C Offset: 0x11D608C VA: 0x11DA08C
	private void ParseInDocumentDtd(bool saveInternalSubset) { }

	// RVA: 0x11DA038 Offset: 0x11D6038 VA: 0x11DA038
	private void ParseFreeFloatingDtd() { }

	// RVA: 0x11DB4A0 Offset: 0x11D74A0 VA: 0x11DB4A0
	private void ParseInternalSubset() { }

	// RVA: 0x11DB4A4 Offset: 0x11D74A4 VA: 0x11DB4A4
	private void ParseExternalSubset() { }

	// RVA: 0x11DB648 Offset: 0x11D7648 VA: 0x11DB648
	private void ParseSubset() { }

	// RVA: 0x11DB988 Offset: 0x11D7988 VA: 0x11DB988
	private void ParseAttlistDecl() { }

	// RVA: 0x11DD3C8 Offset: 0x11D93C8 VA: 0x11DD3C8
	private void ParseAttlistType(SchemaAttDef attrDef, SchemaElementDecl elementDecl, bool ignoreErrors) { }

	// RVA: 0x11DD934 Offset: 0x11D9934 VA: 0x11DD934
	private void ParseAttlistDefault(SchemaAttDef attrDef, bool ignoreErrors) { }

	// RVA: 0x11DBF44 Offset: 0x11D7F44 VA: 0x11DBF44
	private void ParseElementDecl() { }

	// RVA: 0x11DE098 Offset: 0x11DA098 VA: 0x11DE098
	private void ParseElementOnlyContent(ParticleContentValidator pcv, int startParenEntityId) { }

	// RVA: 0x11DE3E4 Offset: 0x11DA3E4 VA: 0x11DE3E4
	private void ParseHowMany(ParticleContentValidator pcv) { }

	// RVA: 0x11DDE04 Offset: 0x11D9E04 VA: 0x11DDE04
	private void ParseElementMixedContent(ParticleContentValidator pcv, int startParenEntityId) { }

	// RVA: 0x11DC2E0 Offset: 0x11D82E0 VA: 0x11DC2E0
	private void ParseEntityDecl() { }

	// RVA: 0x11DC63C Offset: 0x11D863C VA: 0x11DC63C
	private void ParseNotationDecl() { }

	// RVA: 0x11DDBD0 Offset: 0x11D9BD0 VA: 0x11DDBD0
	private void AddUndeclaredNotation(string notationName) { }

	// RVA: 0x11DC82C Offset: 0x11D882C VA: 0x11DC82C
	private void ParseComment() { }

	// RVA: 0x11DCA78 Offset: 0x11D8A78 VA: 0x11DCA78
	private void ParsePI() { }

	// RVA: 0x11DCC44 Offset: 0x11D8C44 VA: 0x11DCC44
	private void ParseCondSection() { }

	// RVA: 0x11DAFB4 Offset: 0x11D6FB4 VA: 0x11DAFB4
	private void ParseExternalId(DtdParser.Token idTokenType, DtdParser.Token declType, out string publicId, out string systemId) { }

	// RVA: 0x11DA5BC Offset: 0x11D65BC VA: 0x11DA5BC
	private DtdParser.Token GetToken(bool needWhiteSpace) { }

	// RVA: 0x11DEB2C Offset: 0x11DAB2C VA: 0x11DEB2C
	private DtdParser.Token ScanSubsetContent() { }

	// RVA: 0x11DEAC4 Offset: 0x11DAAC4 VA: 0x11DEAC4
	private DtdParser.Token ScanNameExpected() { }

	// RVA: 0x11DEAE8 Offset: 0x11DAAE8 VA: 0x11DEAE8
	private DtdParser.Token ScanQNameExpected() { }

	// RVA: 0x11DEB0C Offset: 0x11DAB0C VA: 0x11DEB0C
	private DtdParser.Token ScanNmtokenExpected() { }

	// RVA: 0x11DF230 Offset: 0x11DB230 VA: 0x11DF230
	private DtdParser.Token ScanDoctype1() { }

	// RVA: 0x11DF35C Offset: 0x11DB35C VA: 0x11DF35C
	private DtdParser.Token ScanDoctype2() { }

	// RVA: 0x11E15A0 Offset: 0x11DD5A0 VA: 0x11E15A0
	private DtdParser.Token ScanClosingTag() { }

	// RVA: 0x11DF404 Offset: 0x11DB404 VA: 0x11DF404
	private DtdParser.Token ScanElement1() { }

	// RVA: 0x11DF5D4 Offset: 0x11DB5D4 VA: 0x11DF5D4
	private DtdParser.Token ScanElement2() { }

	// RVA: 0x11DF778 Offset: 0x11DB778 VA: 0x11DF778
	private DtdParser.Token ScanElement3() { }

	// RVA: 0x11DF7F8 Offset: 0x11DB7F8 VA: 0x11DF7F8
	private DtdParser.Token ScanElement4() { }

	// RVA: 0x11DF8C4 Offset: 0x11DB8C4 VA: 0x11DF8C4
	private DtdParser.Token ScanElement5() { }

	// RVA: 0x11DF9B0 Offset: 0x11DB9B0 VA: 0x11DF9B0
	private DtdParser.Token ScanElement6() { }

	// RVA: 0x11DFA80 Offset: 0x11DBA80 VA: 0x11DFA80
	private DtdParser.Token ScanElement7() { }

	// RVA: 0x11DFAE0 Offset: 0x11DBAE0 VA: 0x11DFAE0
	private DtdParser.Token ScanAttlist1() { }

	// RVA: 0x11DFBA4 Offset: 0x11DBBA4 VA: 0x11DFBA4
	private DtdParser.Token ScanAttlist2() { }

	// RVA: 0x11E0224 Offset: 0x11DC224 VA: 0x11E0224
	private DtdParser.Token ScanAttlist3() { }

	// RVA: 0x11E02C4 Offset: 0x11DC2C4 VA: 0x11E02C4
	private DtdParser.Token ScanAttlist4() { }

	// RVA: 0x11E0394 Offset: 0x11DC394 VA: 0x11E0394
	private DtdParser.Token ScanAttlist5() { }

	// RVA: 0x11E0464 Offset: 0x11DC464 VA: 0x11E0464
	private DtdParser.Token ScanAttlist6() { }

	// RVA: 0x11E07D8 Offset: 0x11DC7D8 VA: 0x11E07D8
	private DtdParser.Token ScanAttlist7() { }

	// RVA: 0x11E1BD8 Offset: 0x11DDBD8 VA: 0x11E1BD8
	private DtdParser.Token ScanLiteral(DtdParser.LiteralType literalType) { }

	// RVA: 0x11E2658 Offset: 0x11DE658 VA: 0x11E2658
	private XmlQualifiedName ScanEntityName() { }

	// RVA: 0x11E0894 Offset: 0x11DC894 VA: 0x11E0894
	private DtdParser.Token ScanNotation1() { }

	// RVA: 0x11E0994 Offset: 0x11DC994 VA: 0x11E0994
	private DtdParser.Token ScanSystemId() { }

	// RVA: 0x11E0B64 Offset: 0x11DCB64 VA: 0x11E0B64
	private DtdParser.Token ScanEntity1() { }

	// RVA: 0x11E0BD8 Offset: 0x11DCBD8 VA: 0x11E0BD8
	private DtdParser.Token ScanEntity2() { }

	// RVA: 0x11E0D0C Offset: 0x11DCD0C VA: 0x11E0D0C
	private DtdParser.Token ScanEntity3() { }

	// RVA: 0x11E0A48 Offset: 0x11DCA48 VA: 0x11E0A48
	private DtdParser.Token ScanPublicId1() { }

	// RVA: 0x11E0AFC Offset: 0x11DCAFC VA: 0x11E0AFC
	private DtdParser.Token ScanPublicId2() { }

	// RVA: 0x11E0E20 Offset: 0x11DCE20 VA: 0x11E0E20
	private DtdParser.Token ScanCondSection1() { }

	// RVA: 0x11E10BC Offset: 0x11DD0BC VA: 0x11E10BC
	private DtdParser.Token ScanCondSection2() { }

	// RVA: 0x11E1154 Offset: 0x11DD154 VA: 0x11E1154
	private DtdParser.Token ScanCondSection3() { }

	// RVA: 0x11E18A0 Offset: 0x11DD8A0 VA: 0x11E18A0
	private void ScanName() { }

	// RVA: 0x11E18A8 Offset: 0x11DD8A8 VA: 0x11E18A8
	private void ScanQName() { }

	// RVA: 0x11E29E0 Offset: 0x11DE9E0 VA: 0x11E29E0
	private void ScanQName(bool isQName) { }

	// RVA: 0x11E2C60 Offset: 0x11DEC60 VA: 0x11E2C60
	private bool ReadDataInName() { }

	// RVA: 0x11E18B0 Offset: 0x11DD8B0 VA: 0x11E18B0
	private void ScanNmtoken() { }

	// RVA: 0x11E1A10 Offset: 0x11DDA10 VA: 0x11E1A10
	private bool EatPublicKeyword() { }

	// RVA: 0x11E1AF4 Offset: 0x11DDAF4 VA: 0x11E1AF4
	private bool EatSystemKeyword() { }

	// RVA: 0x11DAE40 Offset: 0x11D6E40 VA: 0x11DAE40
	private XmlQualifiedName GetNameQualified(bool canHavePrefix) { }

	// RVA: 0x11DDBB4 Offset: 0x11D9BB4 VA: 0x11DDBB4
	private string GetNameString() { }

	// RVA: 0x11DDD2C Offset: 0x11D9D2C VA: 0x11DDD2C
	private string GetNmtokenString() { }

	// RVA: 0x11DDDA8 Offset: 0x11D9DA8 VA: 0x11DDDA8
	private string GetValue() { }

	// RVA: 0x11DDD48 Offset: 0x11D9D48 VA: 0x11DDD48
	private string GetValueWithStrippedSpaces() { }

	// RVA: 0x11E1634 Offset: 0x11DD634 VA: 0x11E1634
	private int ReadData() { }

	// RVA: 0x11DA440 Offset: 0x11D6440 VA: 0x11DA440
	private void LoadParsingBuffer() { }

	// RVA: 0x11DB498 Offset: 0x11D7498 VA: 0x11DB498
	private void SaveParsingBuffer() { }

	// RVA: 0x11DCF54 Offset: 0x11D8F54 VA: 0x11DCF54
	private void SaveParsingBuffer(int internalSubsetValueEndPos) { }

	// RVA: 0x11DE9B8 Offset: 0x11DA9B8 VA: 0x11DE9B8
	private bool HandleEntityReference(bool paramEntity, bool inLiteral, bool inAttribute) { }

	// RVA: 0x11E2EC8 Offset: 0x11DEEC8 VA: 0x11E2EC8
	private bool HandleEntityReference(XmlQualifiedName entityName, bool paramEntity, bool inLiteral, bool inAttribute) { }

	// RVA: 0x11E16F8 Offset: 0x11DD6F8 VA: 0x11E16F8
	private bool HandleEntityEnd(bool inLiteral) { }

	// RVA: 0x11E27B8 Offset: 0x11DE7B8 VA: 0x11E27B8
	private SchemaEntity VerifyEntityReference(XmlQualifiedName entityName, bool paramEntity, bool mustBeDeclared, bool inAttribute) { }

	// RVA: 0x11DCE80 Offset: 0x11D8E80 VA: 0x11DCE80
	private void SendValidationEvent(int pos, XmlSeverityType severity, string code, string arg) { }

	// RVA: 0x11DDAF4 Offset: 0x11D9AF4 VA: 0x11DDAF4
	private void SendValidationEvent(XmlSeverityType severity, string code, string arg) { }

	// RVA: 0x11DA2FC Offset: 0x11D62FC VA: 0x11DA2FC
	private void SendValidationEvent(XmlSeverityType severity, XmlSchemaException e) { }

	// RVA: 0x11DDAE8 Offset: 0x11D9AE8 VA: 0x11DDAE8
	private bool IsAttributeValueType(DtdParser.Token token) { }

	// RVA: 0x11DD0A8 Offset: 0x11D90A8 VA: 0x11DD0A8
	private int get_LineNo() { }

	// RVA: 0x11DD14C Offset: 0x11D914C VA: 0x11DD14C
	private int get_LinePos() { }

	// RVA: 0x11DA1D8 Offset: 0x11D61D8 VA: 0x11DA1D8
	private string get_BaseUriStr() { }

	// RVA: 0x11DADF4 Offset: 0x11D6DF4 VA: 0x11DADF4
	private void OnUnexpectedError() { }

	// RVA: 0x11DCBDC Offset: 0x11D8BDC VA: 0x11DCBDC
	private void Throw(int curPos, string res) { }

	// RVA: 0x11DE454 Offset: 0x11DA454 VA: 0x11DE454
	private void Throw(int curPos, string res, string arg) { }

	// RVA: 0x11DE754 Offset: 0x11DA754 VA: 0x11DE754
	private void Throw(int curPos, string res, string[] args) { }

	// RVA: 0x11DD1FC Offset: 0x11D91FC VA: 0x11DD1FC
	private void Throw(string res, string arg, int lineNo, int linePos) { }

	// RVA: 0x11D9CB4 Offset: 0x11D5CB4 VA: 0x11D9CB4
	private void ThrowInvalidChar(int pos, string data, int invCharPos) { }

	// RVA: 0x11DE938 Offset: 0x11DA938 VA: 0x11DE938
	private void ThrowInvalidChar(char[] data, int length, int invCharPos) { }

	// RVA: 0x11DD0A0 Offset: 0x11D90A0 VA: 0x11DD0A0
	private void ThrowUnexpectedToken(int pos, string expectedToken) { }

	// RVA: 0x11DE638 Offset: 0x11DA638 VA: 0x11DE638
	private void ThrowUnexpectedToken(int pos, string expectedToken1, string expectedToken2) { }

	// RVA: 0x11DEA08 Offset: 0x11DAA08 VA: 0x11DEA08
	private string ParseUnexpectedToken(int startPos) { }

	// RVA: 0x11E2CA4 Offset: 0x11DECA4 VA: 0x11E2CA4
	internal static string StripSpaces(string value) { }
}


// Namespace: System.Xml
public enum XmlTokenizedType // TypeDefIndex: 2726
{
	// Fields
	public int value__; // 0x0
	public const XmlTokenizedType CDATA = 0;
	public const XmlTokenizedType ID = 1;
	public const XmlTokenizedType IDREF = 2;
	public const XmlTokenizedType IDREFS = 3;
	public const XmlTokenizedType ENTITY = 4;
	public const XmlTokenizedType ENTITIES = 5;
	public const XmlTokenizedType NMTOKEN = 6;
	public const XmlTokenizedType NMTOKENS = 7;
	public const XmlTokenizedType NOTATION = 8;
	public const XmlTokenizedType ENUMERATION = 9;
	public const XmlTokenizedType QName = 10;
	public const XmlTokenizedType NCName = 11;
	public const XmlTokenizedType None = 12;
}


// Namespace: System.Xml
internal static class ValidateNames // TypeDefIndex: 2727
{
	// Fields
	private static XmlCharType xmlCharType; // 0x0

	// Methods

	// RVA: 0x11E31D4 Offset: 0x11DF1D4 VA: 0x11E31D4
	internal static int ParseNmtoken(string s, int offset) { }

	// RVA: 0x11E329C Offset: 0x11DF29C VA: 0x11E329C
	internal static int ParseNmtokenNoNamespaces(string s, int offset) { }

	// RVA: 0x11E3380 Offset: 0x11DF380 VA: 0x11E3380
	internal static int ParseNameNoNamespaces(string s, int offset) { }

	// RVA: 0x11E34D8 Offset: 0x11DF4D8 VA: 0x11E34D8
	internal static bool IsNameNoNamespaces(string s) { }

	// RVA: 0x11E3558 Offset: 0x11DF558 VA: 0x11E3558
	internal static int ParseNCName(string s, int offset) { }

	// RVA: 0x11E3674 Offset: 0x11DF674 VA: 0x11E3674
	internal static int ParseNCName(string s) { }

	// RVA: 0x11E36CC Offset: 0x11DF6CC VA: 0x11E36CC
	internal static int ParseQName(string s, int offset, out int colonOffset) { }

	// RVA: 0x11E37A8 Offset: 0x11DF7A8 VA: 0x11E37A8
	internal static void ParseQNameThrow(string s, out string prefix, out string localName) { }

	// RVA: 0x11E38B4 Offset: 0x11DF8B4 VA: 0x11E38B4
	internal static void ThrowInvalidName(string s, int offsetStartChar, int offsetBadChar) { }

	// RVA: 0x11E3C58 Offset: 0x11DFC58 VA: 0x11E3C58
	internal static Exception GetInvalidNameException(string s, int offsetStartChar, int offsetBadChar) { }

	// RVA: 0x11E3E18 Offset: 0x11DFE18 VA: 0x11E3E18
	internal static void SplitQName(string name, out string prefix, out string lname) { }

	// RVA: 0x11E41D8 Offset: 0x11E01D8 VA: 0x11E41D8
	private static void .cctor() { }
}


// Namespace: System.Xml
internal struct XmlCharType // TypeDefIndex: 2728
{
	// Fields
	private static object s_Lock; // 0x0
	private static byte[] s_CharProperties; // 0x8
	internal byte[] charProperties; // 0x0

	// Properties
	private static object StaticLock { get; }
	public static XmlCharType Instance { get; }

	// Methods

	// RVA: 0x11E4224 Offset: 0x11E0224 VA: 0x11E4224
	private static object get_StaticLock() { }

	// RVA: 0x11E42B8 Offset: 0x11E02B8 VA: 0x11E42B8
	private static void InitInstance() { }

	// RVA: 0x11E4518 Offset: 0x11E0518 VA: 0x11E4518
	private static void SetProperties(byte[] chProps, string ranges, byte value) { }

	// RVA: 0x11E45DC Offset: 0x11E05DC VA: 0x11E45DC
	private void .ctor(byte[] charProperties) { }

	// RVA: 0x11E3B04 Offset: 0x11DFB04 VA: 0x11E3B04
	public static XmlCharType get_Instance() { }

	// RVA: 0x11E45E4 Offset: 0x11E05E4 VA: 0x11E45E4
	public bool IsWhiteSpace(char ch) { }

	// RVA: 0x11E3AD0 Offset: 0x11DFAD0 VA: 0x11E3AD0
	public bool IsNCNameSingleChar(char ch) { }

	// RVA: 0x11E3B6C Offset: 0x11DFB6C VA: 0x11E3B6C
	public bool IsStartNCNameSingleChar(char ch) { }

	// RVA: 0x11E4618 Offset: 0x11E0618 VA: 0x11E4618
	public bool IsNameSingleChar(char ch) { }

	// RVA: 0x11E463C Offset: 0x11E063C VA: 0x11E463C
	public bool IsCharData(char ch) { }

	// RVA: 0x11E4670 Offset: 0x11E0670 VA: 0x11E4670
	public bool IsPubidChar(char ch) { }

	// RVA: 0x11E46EC Offset: 0x11E06EC VA: 0x11E46EC
	internal bool IsTextChar(char ch) { }

	// RVA: 0x11E4720 Offset: 0x11E0720 VA: 0x11E4720
	public bool IsLetter(char ch) { }

	// RVA: 0x11E4754 Offset: 0x11E0754 VA: 0x11E4754
	public bool IsNCNameCharXml4e(char ch) { }

	// RVA: 0x11E4788 Offset: 0x11E0788 VA: 0x11E4788
	public bool IsStartNCNameCharXml4e(char ch) { }

	// RVA: 0x11E47AC Offset: 0x11E07AC VA: 0x11E47AC
	public bool IsNameCharXml4e(char ch) { }

	// RVA: 0x11E47D0 Offset: 0x11E07D0 VA: 0x11E47D0
	public static bool IsDigit(char ch) { }

	// RVA: 0x11E47F8 Offset: 0x11E07F8 VA: 0x11E47F8
	internal static bool IsHighSurrogate(int ch) { }

	// RVA: 0x11E4808 Offset: 0x11E0808 VA: 0x11E4808
	internal static bool IsLowSurrogate(int ch) { }

	// RVA: 0x11E4818 Offset: 0x11E0818 VA: 0x11E4818
	internal static bool IsSurrogate(int ch) { }

	// RVA: 0x11E4828 Offset: 0x11E0828 VA: 0x11E4828
	internal static int CombineSurrogateChar(int lowChar, int highChar) { }

	// RVA: 0x11E4840 Offset: 0x11E0840 VA: 0x11E4840
	internal static void SplitSurrogateChar(int combinedChar, out char lowChar, out char highChar) { }

	// RVA: 0x11E4874 Offset: 0x11E0874 VA: 0x11E4874
	internal bool IsOnlyWhitespace(string str) { }

	// RVA: 0x11E488C Offset: 0x11E088C VA: 0x11E488C
	internal int IsOnlyWhitespaceWithPos(string str) { }

	// RVA: 0x11E4914 Offset: 0x11E0914 VA: 0x11E4914
	internal int IsOnlyCharData(string str) { }

	// RVA: 0x11E49EC Offset: 0x11E09EC VA: 0x11E49EC
	internal static bool IsOnlyDigits(string str, int startPos, int len) { }

	// RVA: 0x11E4A94 Offset: 0x11E0A94 VA: 0x11E4A94
	internal int IsPublicId(string str) { }

	// RVA: 0x11E47E4 Offset: 0x11E07E4 VA: 0x11E47E4
	private static bool InRange(int value, int start, int end) { }
}


// Namespace: System.Xml
internal static class XmlComplianceUtil // TypeDefIndex: 2729
{
	// Methods

	// RVA: 0x11E4AF4 Offset: 0x11E0AF4 VA: 0x11E4AF4
	public static string NonCDataNormalize(string value) { }

	// RVA: 0x11E4D54 Offset: 0x11E0D54 VA: 0x11E4D54
	public static string CDataNormalize(string value) { }
}


// Namespace: System.Xml
internal enum ExceptionType // TypeDefIndex: 2730
{
	// Fields
	public int value__; // 0x0
	public const ExceptionType ArgumentException = 0;
	public const ExceptionType XmlException = 1;
}


// Namespace: System.Xml
public enum XmlDateTimeSerializationMode // TypeDefIndex: 2731
{
	// Fields
	public int value__; // 0x0
	public const XmlDateTimeSerializationMode Local = 0;
	public const XmlDateTimeSerializationMode Utc = 1;
	public const XmlDateTimeSerializationMode Unspecified = 2;
	public const XmlDateTimeSerializationMode RoundtripKind = 3;
}


// Namespace: System.Xml
public class XmlConvert // TypeDefIndex: 2732
{
	// Fields
	private static XmlCharType xmlCharType; // 0x0
	internal static char[] crt; // 0x8
	private static readonly int c_EncodedCharLength; // 0x10
	private static Regex c_EncodeCharPattern; // 0x18
	private static Regex c_DecodeCharPattern; // 0x20
	private static string[] s_allDateTimeFormats; // 0x28
	internal static readonly char[] WhitespaceChars; // 0x30

	// Properties
	private static string[] AllDateTimeFormats { get; }

	// Methods

	// RVA: 0x11E4F34 Offset: 0x11E0F34 VA: 0x11E4F34
	public static string EncodeName(string name) { }

	// RVA: 0x11E5950 Offset: 0x11E1950 VA: 0x11E5950
	public static string EncodeLocalName(string name) { }

	// RVA: 0x11E59AC Offset: 0x11E19AC VA: 0x11E59AC
	public static string DecodeName(string name) { }

	// RVA: 0x11E4F90 Offset: 0x11E0F90 VA: 0x11E4F90
	private static string EncodeName(string name, bool first, bool local) { }

	// RVA: 0x11E62BC Offset: 0x11E22BC VA: 0x11E62BC
	private static int FromHex(char digit) { }

	// RVA: 0x11E62EC Offset: 0x11E22EC VA: 0x11E62EC
	internal static byte[] FromBinHexString(string s) { }

	// RVA: 0x11E6344 Offset: 0x11E2344 VA: 0x11E6344
	internal static byte[] FromBinHexString(string s, bool allowOddCount) { }

	// RVA: 0x11E63B0 Offset: 0x11E23B0 VA: 0x11E63B0
	internal static string ToBinHexString(byte[] inArray) { }

	// RVA: 0x11E6414 Offset: 0x11E2414 VA: 0x11E6414
	public static string VerifyName(string name) { }

	// RVA: 0x11E6628 Offset: 0x11E2628 VA: 0x11E6628
	internal static Exception TryVerifyName(string name) { }

	// RVA: 0x11E676C Offset: 0x11E276C VA: 0x11E676C
	internal static string VerifyQName(string name, ExceptionType exceptionType) { }

	// RVA: 0x11E6964 Offset: 0x11E2964 VA: 0x11E6964
	public static string VerifyNCName(string name) { }

	// RVA: 0x11E69BC Offset: 0x11E29BC VA: 0x11E69BC
	internal static string VerifyNCName(string name, ExceptionType exceptionType) { }

	// RVA: 0x11E6B0C Offset: 0x11E2B0C VA: 0x11E6B0C
	internal static Exception TryVerifyNCName(string name) { }

	// RVA: 0x11E6BAC Offset: 0x11E2BAC VA: 0x11E6BAC
	public static string VerifyTOKEN(string token) { }

	// RVA: 0x11E6CE0 Offset: 0x11E2CE0 VA: 0x11E6CE0
	internal static Exception TryVerifyTOKEN(string token) { }

	// RVA: 0x11E6E14 Offset: 0x11E2E14 VA: 0x11E6E14
	internal static Exception TryVerifyNMTOKEN(string name) { }

	// RVA: 0x11E6F38 Offset: 0x11E2F38 VA: 0x11E6F38
	internal static Exception TryVerifyNormalizedString(string str) { }

	// RVA: 0x11E7000 Offset: 0x11E3000 VA: 0x11E7000
	public static string ToString(bool value) { }

	// RVA: 0x11E7068 Offset: 0x11E3068 VA: 0x11E7068
	public static string ToString(char value) { }

	// RVA: 0x11E70C8 Offset: 0x11E30C8 VA: 0x11E70C8
	public static string ToString(Decimal value) { }

	// RVA: 0x11E7164 Offset: 0x11E3164 VA: 0x11E7164
	public static string ToString(sbyte value) { }

	// RVA: 0x11E7190 Offset: 0x11E3190 VA: 0x11E7190
	public static string ToString(short value) { }

	// RVA: 0x11E71BC Offset: 0x11E31BC VA: 0x11E71BC
	public static string ToString(int value) { }

	// RVA: 0x11E71E8 Offset: 0x11E31E8 VA: 0x11E71E8
	public static string ToString(long value) { }

	// RVA: 0x11E7214 Offset: 0x11E3214 VA: 0x11E7214
	public static string ToString(byte value) { }

	// RVA: 0x11E7240 Offset: 0x11E3240 VA: 0x11E7240
	public static string ToString(ushort value) { }

	// RVA: 0x11E726C Offset: 0x11E326C VA: 0x11E726C
	public static string ToString(uint value) { }

	// RVA: 0x11E7298 Offset: 0x11E3298 VA: 0x11E7298
	public static string ToString(ulong value) { }

	// RVA: 0x11E72C4 Offset: 0x11E32C4 VA: 0x11E72C4
	public static string ToString(float value) { }

	// RVA: 0x11E7434 Offset: 0x11E3434 VA: 0x11E7434
	public static string ToString(double value) { }

	// RVA: 0x11E7530 Offset: 0x11E3530 VA: 0x11E7530
	public static string ToString(TimeSpan value) { }

	// RVA: 0x11E7588 Offset: 0x11E3588 VA: 0x11E7588
	public static string ToString(DateTime value, string format) { }

	// RVA: 0x11E762C Offset: 0x11E362C VA: 0x11E762C
	public static string ToString(DateTime value, XmlDateTimeSerializationMode dateTimeOption) { }

	// RVA: 0x11E7A04 Offset: 0x11E3A04 VA: 0x11E7A04
	public static string ToString(DateTimeOffset value) { }

	// RVA: 0x11E7A8C Offset: 0x11E3A8C VA: 0x11E7A8C
	public static string ToString(Guid value) { }

	// RVA: 0x11E7AB0 Offset: 0x11E3AB0 VA: 0x11E7AB0
	public static bool ToBoolean(string s) { }

	// RVA: 0x11E7CE4 Offset: 0x11E3CE4 VA: 0x11E7CE4
	internal static Exception TryToBoolean(string s, out bool result) { }

	// RVA: 0x11E7F04 Offset: 0x11E3F04 VA: 0x11E7F04
	public static char ToChar(string s) { }

	// RVA: 0x11E7FC0 Offset: 0x11E3FC0 VA: 0x11E7FC0
	internal static Exception TryToChar(string s, out char result) { }

	// RVA: 0x11E8130 Offset: 0x11E4130 VA: 0x11E8130
	public static Decimal ToDecimal(string s) { }

	// RVA: 0x11E81A0 Offset: 0x11E41A0 VA: 0x11E81A0
	internal static Exception TryToDecimal(string s, out Decimal result) { }

	// RVA: 0x11E8328 Offset: 0x11E4328 VA: 0x11E8328
	internal static Decimal ToInteger(string s) { }

	// RVA: 0x11E8398 Offset: 0x11E4398 VA: 0x11E8398
	internal static Exception TryToInteger(string s, out Decimal result) { }

	// RVA: 0x11E8520 Offset: 0x11E4520 VA: 0x11E8520
	public static sbyte ToSByte(string s) { }

	// RVA: 0x11E8548 Offset: 0x11E4548 VA: 0x11E8548
	internal static Exception TryToSByte(string s, out sbyte result) { }

	// RVA: 0x11E869C Offset: 0x11E469C VA: 0x11E869C
	public static short ToInt16(string s) { }

	// RVA: 0x11E86C4 Offset: 0x11E46C4 VA: 0x11E86C4
	internal static Exception TryToInt16(string s, out short result) { }

	// RVA: 0x11E8818 Offset: 0x11E4818 VA: 0x11E8818
	public static int ToInt32(string s) { }

	// RVA: 0x11E8840 Offset: 0x11E4840 VA: 0x11E8840
	internal static Exception TryToInt32(string s, out int result) { }

	// RVA: 0x11E8994 Offset: 0x11E4994 VA: 0x11E8994
	public static long ToInt64(string s) { }

	// RVA: 0x11E89BC Offset: 0x11E49BC VA: 0x11E89BC
	internal static Exception TryToInt64(string s, out long result) { }

	// RVA: 0x11E8B10 Offset: 0x11E4B10 VA: 0x11E8B10
	public static byte ToByte(string s) { }

	// RVA: 0x11E8B38 Offset: 0x11E4B38 VA: 0x11E8B38
	internal static Exception TryToByte(string s, out byte result) { }

	// RVA: 0x11E8C8C Offset: 0x11E4C8C VA: 0x11E8C8C
	public static ushort ToUInt16(string s) { }

	// RVA: 0x11E8CB4 Offset: 0x11E4CB4 VA: 0x11E8CB4
	internal static Exception TryToUInt16(string s, out ushort result) { }

	// RVA: 0x11E8E08 Offset: 0x11E4E08 VA: 0x11E8E08
	public static uint ToUInt32(string s) { }

	// RVA: 0x11E8E30 Offset: 0x11E4E30 VA: 0x11E8E30
	internal static Exception TryToUInt32(string s, out uint result) { }

	// RVA: 0x11E8F84 Offset: 0x11E4F84 VA: 0x11E8F84
	public static ulong ToUInt64(string s) { }

	// RVA: 0x11E8FAC Offset: 0x11E4FAC VA: 0x11E8FAC
	internal static Exception TryToUInt64(string s, out ulong result) { }

	// RVA: 0x11E9100 Offset: 0x11E5100 VA: 0x11E9100
	public static float ToSingle(string s) { }

	// RVA: 0x11E9218 Offset: 0x11E5218 VA: 0x11E9218
	internal static Exception TryToSingle(string s, out float result) { }

	// RVA: 0x11E944C Offset: 0x11E544C VA: 0x11E944C
	public static double ToDouble(string s) { }

	// RVA: 0x11E9564 Offset: 0x11E5564 VA: 0x11E9564
	internal static Exception TryToDouble(string s, out double result) { }

	// RVA: 0x11E9798 Offset: 0x11E5798 VA: 0x11E9798
	internal static double ToXPathDouble(object o) { }

	// RVA: 0x11E99EC Offset: 0x11E59EC VA: 0x11E99EC
	public static TimeSpan ToTimeSpan(string s) { }

	// RVA: 0x11E9B80 Offset: 0x11E5B80 VA: 0x11E9B80
	internal static Exception TryToTimeSpan(string s, out TimeSpan result) { }

	// RVA: 0x11E9C2C Offset: 0x11E5C2C VA: 0x11E9C2C
	private static string[] get_AllDateTimeFormats() { }

	// RVA: 0x11E9CC4 Offset: 0x11E5CC4 VA: 0x11E9CC4
	private static void CreateAllDateTimeFormats() { }

	[Obsolete("Use XmlConvert.ToDateTime() that takes in XmlDateTimeSerializationMode")]
	// RVA: 0x11EA0D4 Offset: 0x11E60D4 VA: 0x11EA0D4
	public static DateTime ToDateTime(string s) { }

	// RVA: 0x11EA130 Offset: 0x11E6130 VA: 0x11EA130
	public static DateTime ToDateTime(string s, string[] formats) { }

	// RVA: 0x11EA1D4 Offset: 0x11E61D4 VA: 0x11EA1D4
	public static DateTime ToDateTime(string s, XmlDateTimeSerializationMode dateTimeOption) { }

	// RVA: 0x11EA414 Offset: 0x11E6414 VA: 0x11EA414
	public static DateTimeOffset ToDateTimeOffset(string s) { }

	// RVA: 0x11EA4DC Offset: 0x11E64DC VA: 0x11EA4DC
	public static Guid ToGuid(string s) { }

	// RVA: 0x11EA508 Offset: 0x11E6508 VA: 0x11EA508
	internal static Exception TryToGuid(string s, out Guid result) { }

	// RVA: 0x11E785C Offset: 0x11E385C VA: 0x11E785C
	private static DateTime SwitchToLocalTime(DateTime value) { }

	// RVA: 0x11E7930 Offset: 0x11E3930 VA: 0x11E7930
	private static DateTime SwitchToUtcTime(DateTime value) { }

	// RVA: 0x11EA6E8 Offset: 0x11E66E8 VA: 0x11EA6E8
	internal static Uri ToUri(string s) { }

	// RVA: 0x11EA89C Offset: 0x11E689C VA: 0x11EA89C
	internal static Exception TryToUri(string s, out Uri result) { }

	// RVA: 0x11EAAA8 Offset: 0x11E6AA8 VA: 0x11EAAA8
	internal static bool StrEqual(char[] chars, int strPos1, int strLen1, string str2) { }

	// RVA: 0x11E7C78 Offset: 0x11E3C78 VA: 0x11E7C78
	internal static string TrimString(string value) { }

	// RVA: 0x11EAB74 Offset: 0x11E6B74 VA: 0x11EAB74
	internal static string TrimStringStart(string value) { }

	// RVA: 0x11EABE0 Offset: 0x11E6BE0 VA: 0x11EABE0
	internal static string TrimStringEnd(string value) { }

	// RVA: 0x11EAC4C Offset: 0x11E6C4C VA: 0x11EAC4C
	internal static string[] SplitString(string value) { }

	// RVA: 0x11E73C0 Offset: 0x11E33C0 VA: 0x11E73C0
	internal static bool IsNegativeZero(double value) { }

	// RVA: 0x11EACBC Offset: 0x11E6CBC VA: 0x11EACBC
	private static long DoubleToInt64Bits(double value) { }

	// RVA: 0x11EACC4 Offset: 0x11E6CC4 VA: 0x11EACC4
	internal static void VerifyCharData(string data, ExceptionType invCharExceptionType, ExceptionType invSurrogateExceptionType) { }

	// RVA: 0x11EAEB4 Offset: 0x11E6EB4 VA: 0x11EAEB4
	internal static Exception CreateException(string res, ExceptionType exceptionType, int lineNo, int linePos) { }

	// RVA: 0x11EB258 Offset: 0x11E7258 VA: 0x11EB258
	internal static Exception CreateException(string res, string arg, ExceptionType exceptionType, int lineNo, int linePos) { }

	// RVA: 0x11EB388 Offset: 0x11E7388 VA: 0x11EB388
	internal static Exception CreateException(string res, string[] args, ExceptionType exceptionType) { }

	// RVA: 0x11E6894 Offset: 0x11E2894 VA: 0x11E6894
	internal static Exception CreateException(string res, string[] args, ExceptionType exceptionType, int lineNo, int linePos) { }

	// RVA: 0x11EB46C Offset: 0x11E746C VA: 0x11EB46C
	internal static Exception CreateInvalidSurrogatePairException(char low, char hi) { }

	// RVA: 0x11EB4D4 Offset: 0x11E74D4 VA: 0x11EB4D4
	internal static Exception CreateInvalidSurrogatePairException(char low, char hi, ExceptionType exceptionType) { }

	// RVA: 0x11EAF80 Offset: 0x11E6F80 VA: 0x11EAF80
	internal static Exception CreateInvalidSurrogatePairException(char low, char hi, ExceptionType exceptionType, int lineNo, int linePos) { }

	// RVA: 0x11EB548 Offset: 0x11E7548 VA: 0x11EB548
	internal static Exception CreateInvalidHighSurrogateCharException(char hi) { }

	// RVA: 0x11EB5A0 Offset: 0x11E75A0 VA: 0x11EB5A0
	internal static Exception CreateInvalidHighSurrogateCharException(char hi, ExceptionType exceptionType) { }

	// RVA: 0x11EB60C Offset: 0x11E760C VA: 0x11EB60C
	internal static Exception CreateInvalidHighSurrogateCharException(char hi, ExceptionType exceptionType, int lineNo, int linePos) { }

	// RVA: 0x11EB0F4 Offset: 0x11E70F4 VA: 0x11EB0F4
	internal static Exception CreateInvalidCharException(string data, int invCharPos, ExceptionType exceptionType) { }

	// RVA: 0x11EB708 Offset: 0x11E7708 VA: 0x11EB708
	internal static Exception CreateInvalidCharException(char invChar, char nextChar) { }

	// RVA: 0x11EB770 Offset: 0x11E7770 VA: 0x11EB770
	internal static Exception CreateInvalidCharException(char invChar, char nextChar, ExceptionType exceptionType) { }

	// RVA: 0x11E6564 Offset: 0x11E2564 VA: 0x11E6564
	internal static Exception CreateInvalidNameCharException(string name, int index, ExceptionType exceptionType) { }

	// RVA: 0x11EB804 Offset: 0x11E7804 VA: 0x11EB804
	internal static ArgumentException CreateInvalidNameArgumentException(string name, string argumentName) { }

	// RVA: 0x11EB8B8 Offset: 0x11E78B8 VA: 0x11EB8B8
	private static void .cctor() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class XmlDownloadManager.<>c__DisplayClass4_0 // TypeDefIndex: 2733
{
	// Fields
	public Uri uri; // 0x10

	// Methods

	// RVA: 0x11EC3C4 Offset: 0x11E83C4 VA: 0x11EC3C4
	public void .ctor() { }

	// RVA: 0x11EC4DC Offset: 0x11E84DC VA: 0x11EC4DC
	internal Stream <GetStreamAsync>b__0() { }
}


// Namespace: 
[CompilerGenerated]
private struct XmlDownloadManager.<GetNonFileStreamAsync>d__5 : IAsyncStateMachine // TypeDefIndex: 2734
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<Stream> <>t__builder; // 0x8
	public Uri uri; // 0x20
	public ICredentials credentials; // 0x28
	public IWebProxy proxy; // 0x30
	public RequestCachePolicy cachePolicy; // 0x38
	public XmlDownloadManager <>4__this; // 0x40
	private WebRequest <req>5__2; // 0x48
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<WebResponse> <>u__1; // 0x50

	// Methods

	// RVA: 0x11EC568 Offset: 0x11E8568 VA: 0x11EC568 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x11ECCEC Offset: 0x11E8CEC VA: 0x11ECCEC Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: System.Xml
internal class XmlDownloadManager // TypeDefIndex: 2735
{
	// Fields
	private Hashtable connections; // 0x10

	// Methods

	// RVA: 0x11EB9A0 Offset: 0x11E79A0 VA: 0x11EB9A0
	internal Stream GetStream(Uri uri, ICredentials credentials, IWebProxy proxy, RequestCachePolicy cachePolicy) { }

	// RVA: 0x11EBAA0 Offset: 0x11E7AA0 VA: 0x11EBAA0
	private Stream GetNonFileStream(Uri uri, ICredentials credentials, IWebProxy proxy, RequestCachePolicy cachePolicy) { }

	// RVA: 0x11EC0F8 Offset: 0x11E80F8 VA: 0x11EC0F8
	internal void Remove(string host) { }

	// RVA: 0x11EC264 Offset: 0x11E8264 VA: 0x11EC264
	internal Task<Stream> GetStreamAsync(Uri uri, ICredentials credentials, IWebProxy proxy, RequestCachePolicy cachePolicy) { }

	[AsyncStateMachine(typeof(XmlDownloadManager.<GetNonFileStreamAsync>d__5))]
	// RVA: 0x11EC3CC Offset: 0x11E83CC VA: 0x11EC3CC
	private Task<Stream> GetNonFileStreamAsync(Uri uri, ICredentials credentials, IWebProxy proxy, RequestCachePolicy cachePolicy) { }

	// RVA: 0x11EC4D4 Offset: 0x11E84D4 VA: 0x11EC4D4
	public void .ctor() { }
}


// Namespace: System.Xml
internal class OpenedHost // TypeDefIndex: 2736
{
	// Fields
	internal int nonCachedConnectionsCount; // 0x10

	// Methods

	// RVA: 0x11EBF04 Offset: 0x11E7F04 VA: 0x11EBF04
	public void .ctor() { }
}


// Namespace: System.Xml
internal class XmlRegisteredNonCachedStream : Stream // TypeDefIndex: 2737
{
	// Fields
	protected Stream stream; // 0x28
	private XmlDownloadManager downloadManager; // 0x30
	private string host; // 0x38

	// Properties
	public override bool CanRead { get; }
	public override bool CanSeek { get; }
	public override bool CanWrite { get; }
	public override long Length { get; }
	public override long Position { get; set; }

	// Methods

	// RVA: 0x11EBF0C Offset: 0x11E7F0C VA: 0x11EBF0C
	internal void .ctor(Stream stream, XmlDownloadManager downloadManager, string host) { }

	// RVA: 0x11ECD68 Offset: 0x11E8D68 VA: 0x11ECD68 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x11ECE0C Offset: 0x11E8E0C VA: 0x11ECE0C Slot: 15
	protected override void Dispose(bool disposing) { }

	// RVA: 0x11ECF44 Offset: 0x11E8F44 VA: 0x11ECF44 Slot: 17
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state) { }

	// RVA: 0x11ECF68 Offset: 0x11E8F68 VA: 0x11ECF68 Slot: 21
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback callback, object state) { }

	// RVA: 0x11ECF8C Offset: 0x11E8F8C VA: 0x11ECF8C Slot: 18
	public override int EndRead(IAsyncResult asyncResult) { }

	// RVA: 0x11ECFB0 Offset: 0x11E8FB0 VA: 0x11ECFB0 Slot: 22
	public override void EndWrite(IAsyncResult asyncResult) { }

	// RVA: 0x11ECFD4 Offset: 0x11E8FD4 VA: 0x11ECFD4 Slot: 16
	public override void Flush() { }

	// RVA: 0x11ECFF8 Offset: 0x11E8FF8 VA: 0x11ECFF8 Slot: 27
	public override int Read(byte[] buffer, int offset, int count) { }

	// RVA: 0x11ED01C Offset: 0x11E901C VA: 0x11ED01C Slot: 29
	public override int ReadByte() { }

	// RVA: 0x11ED040 Offset: 0x11E9040 VA: 0x11ED040 Slot: 25
	public override long Seek(long offset, SeekOrigin origin) { }

	// RVA: 0x11ED064 Offset: 0x11E9064 VA: 0x11ED064 Slot: 26
	public override void SetLength(long value) { }

	// RVA: 0x11ED088 Offset: 0x11E9088 VA: 0x11ED088 Slot: 30
	public override void Write(byte[] buffer, int offset, int count) { }

	// RVA: 0x11ED0AC Offset: 0x11E90AC VA: 0x11ED0AC Slot: 32
	public override void WriteByte(byte value) { }

	// RVA: 0x11ED0D0 Offset: 0x11E90D0 VA: 0x11ED0D0 Slot: 5
	public override bool get_CanRead() { }

	// RVA: 0x11ED0F0 Offset: 0x11E90F0 VA: 0x11ED0F0 Slot: 6
	public override bool get_CanSeek() { }

	// RVA: 0x11ED110 Offset: 0x11E9110 VA: 0x11ED110 Slot: 8
	public override bool get_CanWrite() { }

	// RVA: 0x11ED130 Offset: 0x11E9130 VA: 0x11ED130 Slot: 9
	public override long get_Length() { }

	// RVA: 0x11ED150 Offset: 0x11E9150 VA: 0x11ED150 Slot: 10
	public override long get_Position() { }

	// RVA: 0x11ED170 Offset: 0x11E9170 VA: 0x11ED170 Slot: 11
	public override void set_Position(long value) { }
}


// Namespace: System.Xml
internal class XmlCachedStream : MemoryStream // TypeDefIndex: 2738
{
	// Fields
	private Uri uri; // 0x50

	// Methods

	// RVA: 0x11EBF8C Offset: 0x11E7F8C VA: 0x11EBF8C
	internal void .ctor(Uri uri, Stream stream) { }
}


// Namespace: System.Xml
internal class UTF16Decoder : Decoder // TypeDefIndex: 2739
{
	// Fields
	private bool bigEndian; // 0x20
	private int lastByte; // 0x24

	// Methods

	// RVA: 0x11ED190 Offset: 0x11E9190 VA: 0x11ED190
	public void .ctor(bool bigEndian) { }

	// RVA: 0x11ED1C0 Offset: 0x11E91C0 VA: 0x11ED1C0 Slot: 5
	public override int GetCharCount(byte[] bytes, int index, int count) { }

	// RVA: 0x11ED1D0 Offset: 0x11E91D0 VA: 0x11ED1D0 Slot: 6
	public override int GetCharCount(byte[] bytes, int index, int count, bool flush) { }

	// RVA: 0x11ED2B4 Offset: 0x11E92B4 VA: 0x11ED2B4 Slot: 8
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex) { }

	// RVA: 0x11ED428 Offset: 0x11E9428 VA: 0x11ED428 Slot: 12
	public override void Convert(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed) { }
}


// Namespace: System.Xml
internal class SafeAsciiDecoder : Decoder // TypeDefIndex: 2740
{
	// Methods

	// RVA: 0x11ED5F4 Offset: 0x11E95F4 VA: 0x11ED5F4
	public void .ctor() { }

	// RVA: 0x11ED5FC Offset: 0x11E95FC VA: 0x11ED5FC Slot: 5
	public override int GetCharCount(byte[] bytes, int index, int count) { }

	// RVA: 0x11ED604 Offset: 0x11E9604 VA: 0x11ED604 Slot: 8
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex) { }

	// RVA: 0x11ED670 Offset: 0x11E9670 VA: 0x11ED670 Slot: 12
	public override void Convert(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed) { }
}


// Namespace: System.Xml
internal class Ucs4Encoding : Encoding // TypeDefIndex: 2741
{
	// Fields
	internal Ucs4Decoder ucs4Decoder; // 0x38

	// Properties
	public override string WebName { get; }
	public override int CodePage { get; }
	internal static Encoding UCS4_Littleendian { get; }
	internal static Encoding UCS4_Bigendian { get; }
	internal static Encoding UCS4_2143 { get; }
	internal static Encoding UCS4_3412 { get; }

	// Methods

	// RVA: 0x11ED6F8 Offset: 0x11E96F8 VA: 0x11ED6F8 Slot: 10
	public override string get_WebName() { }

	// RVA: 0x11ED704 Offset: 0x11E9704 VA: 0x11ED704 Slot: 33
	public override Decoder GetDecoder() { }

	// RVA: 0x11ED70C Offset: 0x11E970C VA: 0x11ED70C Slot: 13
	public override int GetByteCount(char[] chars, int index, int count) { }

	// RVA: 0x11ED76C Offset: 0x11E976C VA: 0x11ED76C Slot: 19
	public override byte[] GetBytes(string s) { }

	// RVA: 0x11ED774 Offset: 0x11E9774 VA: 0x11ED774 Slot: 18
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex) { }

	// RVA: 0x11ED77C Offset: 0x11E977C VA: 0x11ED77C Slot: 35
	public override int GetMaxByteCount(int charCount) { }

	// RVA: 0x11ED784 Offset: 0x11E9784 VA: 0x11ED784 Slot: 23
	public override int GetCharCount(byte[] bytes, int index, int count) { }

	// RVA: 0x11ED7A4 Offset: 0x11E97A4 VA: 0x11ED7A4 Slot: 28
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex) { }

	// RVA: 0x11ED7C4 Offset: 0x11E97C4 VA: 0x11ED7C4 Slot: 36
	public override int GetMaxCharCount(int byteCount) { }

	// RVA: 0x11ED7DC Offset: 0x11E97DC VA: 0x11ED7DC Slot: 32
	public override int get_CodePage() { }

	// RVA: 0x11ED7E4 Offset: 0x11E97E4 VA: 0x11ED7E4 Slot: 34
	public override Encoder GetEncoder() { }

	// RVA: 0x11ED7EC Offset: 0x11E97EC VA: 0x11ED7EC
	internal static Encoding get_UCS4_Littleendian() { }

	// RVA: 0x11ED89C Offset: 0x11E989C VA: 0x11ED89C
	internal static Encoding get_UCS4_Bigendian() { }

	// RVA: 0x11ED94C Offset: 0x11E994C VA: 0x11ED94C
	internal static Encoding get_UCS4_2143() { }

	// RVA: 0x11ED9FC Offset: 0x11E99FC VA: 0x11ED9FC
	internal static Encoding get_UCS4_3412() { }

	// RVA: 0x11EDAAC Offset: 0x11E9AAC VA: 0x11EDAAC
	public void .ctor() { }
}


// Namespace: System.Xml
internal class Ucs4Encoding1234 : Ucs4Encoding // TypeDefIndex: 2742
{
	// Properties
	public override string EncodingName { get; }

	// Methods

	// RVA: 0x11ED8EC Offset: 0x11E98EC VA: 0x11ED8EC
	public void .ctor() { }

	// RVA: 0x11EDAB8 Offset: 0x11E9AB8 VA: 0x11EDAB8 Slot: 8
	public override string get_EncodingName() { }

	// RVA: 0x11EDAF8 Offset: 0x11E9AF8 VA: 0x11EDAF8 Slot: 6
	public override byte[] GetPreamble() { }
}


// Namespace: System.Xml
internal class Ucs4Encoding4321 : Ucs4Encoding // TypeDefIndex: 2743
{
	// Properties
	public override string EncodingName { get; }

	// Methods

	// RVA: 0x11ED83C Offset: 0x11E983C VA: 0x11ED83C
	public void .ctor() { }

	// RVA: 0x11EDB74 Offset: 0x11E9B74 VA: 0x11EDB74 Slot: 8
	public override string get_EncodingName() { }

	// RVA: 0x11EDBB4 Offset: 0x11E9BB4 VA: 0x11EDBB4 Slot: 6
	public override byte[] GetPreamble() { }
}


// Namespace: System.Xml
internal class Ucs4Encoding2143 : Ucs4Encoding // TypeDefIndex: 2744
{
	// Properties
	public override string EncodingName { get; }

	// Methods

	// RVA: 0x11ED99C Offset: 0x11E999C VA: 0x11ED99C
	public void .ctor() { }

	// RVA: 0x11EDC2C Offset: 0x11E9C2C VA: 0x11EDC2C Slot: 8
	public override string get_EncodingName() { }

	// RVA: 0x11EDC6C Offset: 0x11E9C6C VA: 0x11EDC6C Slot: 6
	public override byte[] GetPreamble() { }
}


// Namespace: System.Xml
internal class Ucs4Encoding3412 : Ucs4Encoding // TypeDefIndex: 2745
{
	// Properties
	public override string EncodingName { get; }

	// Methods

	// RVA: 0x11EDA4C Offset: 0x11E9A4C VA: 0x11EDA4C
	public void .ctor() { }

	// RVA: 0x11EDCE8 Offset: 0x11E9CE8 VA: 0x11EDCE8 Slot: 8
	public override string get_EncodingName() { }

	// RVA: 0x11EDD28 Offset: 0x11E9D28 VA: 0x11EDD28 Slot: 6
	public override byte[] GetPreamble() { }
}


// Namespace: System.Xml
internal abstract class Ucs4Decoder : Decoder // TypeDefIndex: 2746
{
	// Fields
	internal byte[] lastBytes; // 0x20
	internal int lastBytesCount; // 0x28

	// Methods

	// RVA: 0x11EDD9C Offset: 0x11E9D9C VA: 0x11EDD9C Slot: 5
	public override int GetCharCount(byte[] bytes, int index, int count) { }

	// RVA: -1 Offset: -1 Slot: 14
	internal abstract int GetFullChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex);

	// RVA: 0x11EDDB8 Offset: 0x11E9DB8 VA: 0x11EDDB8 Slot: 8
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex) { }

	// RVA: 0x11EDF60 Offset: 0x11E9F60 VA: 0x11EDF60 Slot: 12
	public override void Convert(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed) { }

	// RVA: 0x11EE174 Offset: 0x11EA174 VA: 0x11EE174
	internal void Ucs4ToUTF16(uint code, char[] chars, int charIndex) { }

	// RVA: 0x11EE1CC Offset: 0x11EA1CC VA: 0x11EE1CC
	protected void .ctor() { }
}


// Namespace: System.Xml
internal class Ucs4Decoder4321 : Ucs4Decoder // TypeDefIndex: 2747
{
	// Methods

	// RVA: 0x11EE224 Offset: 0x11EA224 VA: 0x11EE224 Slot: 14
	internal override int GetFullChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex) { }

	// RVA: 0x11EDB70 Offset: 0x11E9B70 VA: 0x11EDB70
	public void .ctor() { }
}


// Namespace: System.Xml
internal class Ucs4Decoder1234 : Ucs4Decoder // TypeDefIndex: 2748
{
	// Methods

	// RVA: 0x11EE42C Offset: 0x11EA42C VA: 0x11EE42C Slot: 14
	internal override int GetFullChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex) { }

	// RVA: 0x11EDAB4 Offset: 0x11E9AB4 VA: 0x11EDAB4
	public void .ctor() { }
}


// Namespace: System.Xml
internal class Ucs4Decoder2143 : Ucs4Decoder // TypeDefIndex: 2749
{
	// Methods

	// RVA: 0x11EE634 Offset: 0x11EA634 VA: 0x11EE634 Slot: 14
	internal override int GetFullChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex) { }

	// RVA: 0x11EDC28 Offset: 0x11E9C28 VA: 0x11EDC28
	public void .ctor() { }
}


// Namespace: System.Xml
internal class Ucs4Decoder3412 : Ucs4Decoder // TypeDefIndex: 2750
{
	// Methods

	// RVA: 0x11EE83C Offset: 0x11EA83C VA: 0x11EE83C Slot: 14
	internal override int GetFullChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex) { }

	// RVA: 0x11EDCE4 Offset: 0x11E9CE4 VA: 0x11EDCE4
	public void .ctor() { }
}


// Namespace: System.Xml
[Serializable]
public class XmlException : SystemException // TypeDefIndex: 2751
{
	// Fields
	private string res; // 0x90
	private string[] args; // 0x98
	private int lineNumber; // 0xA0
	private int linePosition; // 0xA4
	[OptionalField]
	private string sourceUri; // 0xA8
	private string message; // 0xB0

	// Properties
	public override string Message { get; }

	// Methods

	// RVA: 0x11EEA44 Offset: 0x11EAA44 VA: 0x11EEA44
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x11EF048 Offset: 0x11EB048 VA: 0x11EF048 Slot: 10
	public override void GetObjectData(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x11EF1B8 Offset: 0x11EB1B8 VA: 0x11EF1B8
	public void .ctor() { }

	// RVA: 0x11EF1D0 Offset: 0x11EB1D0 VA: 0x11EF1D0
	public void .ctor(string message) { }

	// RVA: 0x11EF1EC Offset: 0x11EB1EC VA: 0x11EF1EC
	public void .ctor(string message, Exception innerException) { }

	// RVA: 0x11EF1E4 Offset: 0x11EB1E4 VA: 0x11EF1E4
	public void .ctor(string message, Exception innerException, int lineNumber, int linePosition) { }

	// RVA: 0x11EF1FC Offset: 0x11EB1FC VA: 0x11EF1FC
	internal void .ctor(string message, Exception innerException, int lineNumber, int linePosition, string sourceUri) { }

	// RVA: 0x11E3BFC Offset: 0x11DFBFC VA: 0x11E3BFC
	internal void .ctor(string res, string[] args) { }

	// RVA: 0x11E3A1C Offset: 0x11DFA1C VA: 0x11E3A1C
	internal void .ctor(string res, string arg) { }

	// RVA: 0x11EF45C Offset: 0x11EB45C VA: 0x11EF45C
	internal void .ctor(string res, string arg, string sourceUri) { }

	// RVA: 0x11EF51C Offset: 0x11EB51C VA: 0x11EF51C
	internal void .ctor(string res, string arg, IXmlLineInfo lineInfo) { }

	// RVA: 0x11EF754 Offset: 0x11EB754 VA: 0x11EF754
	internal void .ctor(string res, string[] args, IXmlLineInfo lineInfo) { }

	// RVA: 0x11EF5B0 Offset: 0x11EB5B0 VA: 0x11EF5B0
	internal void .ctor(string res, string[] args, IXmlLineInfo lineInfo, string sourceUri) { }

	// RVA: 0x11EB190 Offset: 0x11E7190 VA: 0x11EB190
	internal void .ctor(string res, string arg, int lineNumber, int linePosition) { }

	// RVA: 0x11EF75C Offset: 0x11EB75C VA: 0x11EF75C
	internal void .ctor(string res, string arg, int lineNumber, int linePosition, string sourceUri) { }

	// RVA: 0x11EB3FC Offset: 0x11E73FC VA: 0x11EB3FC
	internal void .ctor(string res, string[] args, int lineNumber, int linePosition) { }

	// RVA: 0x11EF830 Offset: 0x11EB830 VA: 0x11EF830
	internal void .ctor(string res, string[] args, int lineNumber, int linePosition, string sourceUri) { }

	// RVA: 0x11EF8AC Offset: 0x11EB8AC VA: 0x11EF8AC
	internal void .ctor(string res, string[] args, Exception innerException, int lineNumber, int linePosition) { }

	// RVA: 0x11EF3DC Offset: 0x11EB3DC VA: 0x11EF3DC
	internal void .ctor(string res, string[] args, Exception innerException, int lineNumber, int linePosition, string sourceUri) { }

	// RVA: 0x11EF308 Offset: 0x11EB308 VA: 0x11EF308
	private static string FormatUserMessage(string message, int lineNumber, int linePosition) { }

	// RVA: 0x11EEE1C Offset: 0x11EAE1C VA: 0x11EEE1C
	private static string CreateMessage(string res, string[] args, int lineNumber, int linePosition) { }

	// RVA: 0x11E3BA0 Offset: 0x11DFBA0 VA: 0x11E3BA0
	internal static string[] BuildCharExceptionArgs(string data, int invCharIndex) { }

	// RVA: 0x11EF928 Offset: 0x11EB928 VA: 0x11EF928
	internal static string[] BuildCharExceptionArgs(char[] data, int length, int invCharIndex) { }

	// RVA: 0x11E3F60 Offset: 0x11DFF60 VA: 0x11E3F60
	internal static string[] BuildCharExceptionArgs(char invChar, char nextChar) { }

	// RVA: 0x11EF97C Offset: 0x11EB97C VA: 0x11EF97C Slot: 5
	public override string get_Message() { }
}


// Namespace: System.Xml
public abstract class XmlNameTable // TypeDefIndex: 2752
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public abstract string Get(string array);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract string Add(char[] array, int offset, int length);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract string Add(string array);

	// RVA: 0x11EF994 Offset: 0x11EB994 VA: 0x11EF994
	protected void .ctor() { }
}


// Namespace: System.Xml
public enum XmlNamespaceScope // TypeDefIndex: 2753
{
	// Fields
	public int value__; // 0x0
	public const XmlNamespaceScope All = 0;
	public const XmlNamespaceScope ExcludeXml = 1;
	public const XmlNamespaceScope Local = 2;
}


// Namespace: 
private struct XmlNamespaceManager.NamespaceDeclaration // TypeDefIndex: 2754
{
	// Fields
	public string prefix; // 0x0
	public string uri; // 0x8
	public int scopeId; // 0x10
	public int previousNsIndex; // 0x14

	// Methods

	// RVA: 0x11EFB60 Offset: 0x11EBB60 VA: 0x11EFB60
	public void Set(string prefix, string uri, int scopeId, int previousNsIndex) { }
}


// Namespace: System.Xml
public class XmlNamespaceManager : IXmlNamespaceResolver, IEnumerable // TypeDefIndex: 2755
{
	// Fields
	private XmlNamespaceManager.NamespaceDeclaration[] nsdecls; // 0x10
	private int lastDecl; // 0x18
	private XmlNameTable nameTable; // 0x20
	private int scopeId; // 0x28
	private Dictionary<string, int> hashTable; // 0x30
	private bool useHashtable; // 0x38
	private string xml; // 0x40
	private string xmlNs; // 0x48

	// Properties
	public virtual string DefaultNamespace { get; }

	// Methods

	// RVA: 0x11EF99C Offset: 0x11EB99C VA: 0x11EF99C
	internal void .ctor() { }

	// RVA: 0x11EF9A4 Offset: 0x11EB9A4 VA: 0x11EF9A4
	public void .ctor(XmlNameTable nameTable) { }

	// RVA: 0x11EFB6C Offset: 0x11EBB6C VA: 0x11EFB6C Slot: 8
	public virtual string get_DefaultNamespace() { }

	// RVA: 0x11EFBDC Offset: 0x11EBBDC VA: 0x11EFBDC Slot: 9
	public virtual void PushScope() { }

	// RVA: 0x11EFBEC Offset: 0x11EBBEC VA: 0x11EFBEC Slot: 10
	public virtual bool PopScope() { }

	// RVA: 0x11EFCD0 Offset: 0x11EBCD0 VA: 0x11EFCD0 Slot: 11
	public virtual void AddNamespace(string prefix, string uri) { }

	// RVA: 0x11F01F4 Offset: 0x11EC1F4 VA: 0x11F01F4 Slot: 12
	public virtual void RemoveNamespace(string prefix, string uri) { }

	// RVA: 0x11F0328 Offset: 0x11EC328 VA: 0x11F0328 Slot: 13
	public virtual IEnumerator GetEnumerator() { }

	// RVA: 0x11F049C Offset: 0x11EC49C VA: 0x11F049C Slot: 14
	public virtual IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope) { }

	// RVA: 0x11F0654 Offset: 0x11EC654 VA: 0x11F0654 Slot: 15
	public virtual string LookupNamespace(string prefix) { }

	// RVA: 0x11F0064 Offset: 0x11EC064 VA: 0x11F0064
	private int LookupNamespaceDecl(string prefix) { }

	// RVA: 0x11F06A0 Offset: 0x11EC6A0 VA: 0x11F06A0 Slot: 16
	public virtual string LookupPrefix(string uri) { }
}


// Namespace: System.Xml
public enum XmlNodeType // TypeDefIndex: 2756
{
	// Fields
	public int value__; // 0x0
	public const XmlNodeType None = 0;
	public const XmlNodeType Element = 1;
	public const XmlNodeType Attribute = 2;
	public const XmlNodeType Text = 3;
	public const XmlNodeType CDATA = 4;
	public const XmlNodeType EntityReference = 5;
	public const XmlNodeType Entity = 6;
	public const XmlNodeType ProcessingInstruction = 7;
	public const XmlNodeType Comment = 8;
	public const XmlNodeType Document = 9;
	public const XmlNodeType DocumentType = 10;
	public const XmlNodeType DocumentFragment = 11;
	public const XmlNodeType Notation = 12;
	public const XmlNodeType Whitespace = 13;
	public const XmlNodeType SignificantWhitespace = 14;
	public const XmlNodeType EndElement = 15;
	public const XmlNodeType EndEntity = 16;
	public const XmlNodeType XmlDeclaration = 17;
}


// Namespace: 
private sealed class XmlQualifiedName.HashCodeOfStringDelegate : MulticastDelegate // TypeDefIndex: 2757
{
	// Methods

	// RVA: 0x11F0DA0 Offset: 0x11ECDA0 VA: 0x11F0DA0
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x11F1204 Offset: 0x11ED204 VA: 0x11F1204 Slot: 12
	public virtual int Invoke(string s, int sLen, long additionalEntropy) { }
}


// Namespace: System.Xml
[Serializable]
public class XmlQualifiedName // TypeDefIndex: 2758
{
	// Fields
	private static XmlQualifiedName.HashCodeOfStringDelegate hashCodeDelegate; // 0x0
	private string name; // 0x10
	private string ns; // 0x18
	private int hash; // 0x20
	public static readonly XmlQualifiedName Empty; // 0x8

	// Properties
	public bool IsEmpty { get; }

	// Methods

	// RVA: 0x11F0764 Offset: 0x11EC764 VA: 0x11F0764
	public void .ctor() { }

	// RVA: 0x11F084C Offset: 0x11EC84C VA: 0x11F084C
	public void .ctor(string name) { }

	// RVA: 0x11F07B8 Offset: 0x11EC7B8 VA: 0x11F07B8
	public void .ctor(string name, string ns) { }

	// RVA: 0x11F08AC Offset: 0x11EC8AC VA: 0x11F08AC Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x11F0ACC Offset: 0x11ECACC VA: 0x11F0ACC
	public bool get_IsEmpty() { }

	// RVA: 0x11F0B08 Offset: 0x11ECB08 VA: 0x11F0B08 Slot: 3
	public override string ToString() { }

	// RVA: 0x11F0B78 Offset: 0x11ECB78 VA: 0x11F0B78 Slot: 0
	public override bool Equals(object other) { }

	// RVA: 0x11F0CC8 Offset: 0x11ECCC8 VA: 0x11F0CC8
	public static bool op_Equality(XmlQualifiedName a, XmlQualifiedName b) { }

	// RVA: 0x11F0C58 Offset: 0x11ECC58 VA: 0x11F0C58
	public static bool op_Inequality(XmlQualifiedName a, XmlQualifiedName b) { }

	// RVA: 0x11F0D30 Offset: 0x11ECD30 VA: 0x11F0D30
	public static string ToString(string name, string ns) { }

	// RVA: 0x11F0978 Offset: 0x11EC978 VA: 0x11F0978
	private static XmlQualifiedName.HashCodeOfStringDelegate GetHashCodeDelegate() { }

	// RVA: 0x11F0E40 Offset: 0x11ECE40 VA: 0x11F0E40
	private static int GetHashCodeOfString(string s, int length, long additionalEntropy) { }

	// RVA: 0x11F0E5C Offset: 0x11ECE5C VA: 0x11F0E5C
	internal void Init(string name, string ns) { }

	// RVA: 0x11F0E68 Offset: 0x11ECE68 VA: 0x11F0E68
	internal void Verify() { }

	// RVA: 0x11F0EF8 Offset: 0x11ECEF8 VA: 0x11F0EF8
	internal void Atomize(XmlNameTable nameTable) { }

	// RVA: 0x11F0F4C Offset: 0x11ECF4C VA: 0x11F0F4C
	internal static XmlQualifiedName Parse(string s, IXmlNamespaceResolver nsmgr, out string prefix) { }

	// RVA: 0x11F10FC Offset: 0x11ED0FC VA: 0x11F10FC
	internal XmlQualifiedName Clone() { }

	// RVA: 0x11F117C Offset: 0x11ED17C VA: 0x11F117C
	private static void .cctor() { }
}


// Namespace: System.Xml
public abstract class XmlResolver // TypeDefIndex: 2759
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public abstract object GetEntity(Uri absoluteUri, string role, Type ofObjectToReturn);

	// RVA: 0x11F1218 Offset: 0x11ED218 VA: 0x11F1218 Slot: 5
	public virtual Uri ResolveUri(Uri baseUri, string relativeUri) { }

	// RVA: 0x11F13E4 Offset: 0x11ED3E4 VA: 0x11F13E4 Slot: 6
	public virtual bool SupportsType(Uri absoluteUri, Type type) { }

	// RVA: 0x11F1528 Offset: 0x11ED528 VA: 0x11F1528 Slot: 7
	public virtual Task<object> GetEntityAsync(Uri absoluteUri, string role, Type ofObjectToReturn) { }

	// RVA: 0x11F1560 Offset: 0x11ED560 VA: 0x11F1560
	protected void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private struct XmlUrlResolver.<GetEntityAsync>d__15 : IAsyncStateMachine // TypeDefIndex: 2760
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<object> <>t__builder; // 0x8
	public Type ofObjectToReturn; // 0x20
	public Uri absoluteUri; // 0x28
	public XmlUrlResolver <>4__this; // 0x30
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<Stream> <>u__1; // 0x38

	// Methods

	// RVA: 0x11F18AC Offset: 0x11ED8AC VA: 0x11F18AC Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x11F1C70 Offset: 0x11EDC70 VA: 0x11F1C70 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: System.Xml
public class XmlUrlResolver : XmlResolver // TypeDefIndex: 2761
{
	// Fields
	private static object s_DownloadManager; // 0x0
	private ICredentials _credentials; // 0x10
	private IWebProxy _proxy; // 0x18
	private RequestCachePolicy _cachePolicy; // 0x20

	// Properties
	private static XmlDownloadManager DownloadManager { get; }

	// Methods

	// RVA: 0x11F1568 Offset: 0x11ED568 VA: 0x11F1568
	private static XmlDownloadManager get_DownloadManager() { }

	// RVA: 0x11F1634 Offset: 0x11ED634 VA: 0x11F1634
	public void .ctor() { }

	// RVA: 0x11F163C Offset: 0x11ED63C VA: 0x11F163C Slot: 4
	public override object GetEntity(Uri absoluteUri, string role, Type ofObjectToReturn) { }

	// RVA: 0x11F17B4 Offset: 0x11ED7B4 VA: 0x11F17B4 Slot: 5
	public override Uri ResolveUri(Uri baseUri, string relativeUri) { }

	[AsyncStateMachine(typeof(XmlUrlResolver.<GetEntityAsync>d__15))]
	// RVA: 0x11F17B8 Offset: 0x11ED7B8 VA: 0x11F17B8 Slot: 7
	public override Task<object> GetEntityAsync(Uri absoluteUri, string role, Type ofObjectToReturn) { }
}


// Namespace: System.Xml
internal static class Res // TypeDefIndex: 2762
{
	// Methods

	// RVA: 0x11E6560 Offset: 0x11E2560 VA: 0x11E6560
	public static string GetString(string name) { }

	// RVA: 0x11E41C8 Offset: 0x11E01C8 VA: 0x11E41C8
	public static string GetString(string name, object[] args) { }
}


// Namespace: System.Xml.XPath
public class XPathDocument // TypeDefIndex: 2763
{
	// Fields
	private XPathNode[] pageXmlNmsp; // 0x10
	private int idxXmlNmsp; // 0x18
	private XmlNameTable nameTable; // 0x20
	private bool hasLineInfo; // 0x28
	private Dictionary<XPathNodeRef, XPathNodeRef> mapNmsp; // 0x30

	// Methods

	// RVA: 0x11F1CEC Offset: 0x11EDCEC VA: 0x11F1CEC
	internal int GetXmlNamespaceNode(out XPathNode[] pageXmlNmsp) { }

	// RVA: 0x11F1CFC Offset: 0x11EDCFC VA: 0x11F1CFC
	internal int LookupNamespaces(XPathNode[] pageElem, int idxElem, out XPathNode[] pageNmsp) { }
}


// Namespace: System.Xml.XPath
[Serializable]
public class XPathException : SystemException // TypeDefIndex: 2764
{
	// Fields
	private string res; // 0x90
	private string[] args; // 0x98
	private string message; // 0xA0

	// Properties
	public override string Message { get; }

	// Methods

	// RVA: 0x11F1DE0 Offset: 0x11EDDE0 VA: 0x11F1DE0
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x11F2190 Offset: 0x11EE190 VA: 0x11F2190 Slot: 10
	public override void GetObjectData(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x11F2278 Offset: 0x11EE278 VA: 0x11F2278
	public void .ctor() { }

	// RVA: 0x11F22CC Offset: 0x11EE2CC VA: 0x11F22CC
	public void .ctor(string message, Exception innerException) { }

	// RVA: 0x11F23E8 Offset: 0x11EE3E8 VA: 0x11F23E8
	internal static XPathException Create(string res) { }

	// RVA: 0x11F24B8 Offset: 0x11EE4B8 VA: 0x11F24B8
	internal static XPathException Create(string res, string arg) { }

	// RVA: 0x11F2580 Offset: 0x11EE580 VA: 0x11F2580
	internal static XPathException Create(string res, string arg, string arg2) { }

	// RVA: 0x11F2468 Offset: 0x11EE468 VA: 0x11F2468
	private void .ctor(string res, string[] args) { }

	// RVA: 0x11F238C Offset: 0x11EE38C VA: 0x11F238C
	private void .ctor(string res, string[] args, Exception inner) { }

	// RVA: 0x11F2054 Offset: 0x11EE054 VA: 0x11F2054
	private static string CreateMessage(string res, string[] args) { }

	// RVA: 0x11F2658 Offset: 0x11EE658 VA: 0x11F2658 Slot: 5
	public override string get_Message() { }
}


// Namespace: System.Xml.XPath
public enum XPathResultType // TypeDefIndex: 2765
{
	// Fields
	public int value__; // 0x0
	public const XPathResultType Number = 0;
	public const XPathResultType String = 1;
	public const XPathResultType Boolean = 2;
	public const XPathResultType NodeSet = 3;
	public const XPathResultType Navigator = 1;
	public const XPathResultType Any = 5;
	public const XPathResultType Error = 6;
}


// Namespace: System.Xml.XPath
public abstract class XPathItem // TypeDefIndex: 2766
{
	// Properties
	public abstract string Value { get; }
	public abstract object TypedValue { get; }
	public abstract Type ValueType { get; }
	public abstract bool ValueAsBoolean { get; }
	public abstract DateTime ValueAsDateTime { get; }
	public abstract double ValueAsDouble { get; }
	public abstract int ValueAsInt { get; }
	public abstract long ValueAsLong { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public abstract string get_Value();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract object get_TypedValue();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract Type get_ValueType();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract bool get_ValueAsBoolean();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract DateTime get_ValueAsDateTime();

	// RVA: -1 Offset: -1 Slot: 9
	public abstract double get_ValueAsDouble();

	// RVA: -1 Offset: -1 Slot: 10
	public abstract int get_ValueAsInt();

	// RVA: -1 Offset: -1 Slot: 11
	public abstract long get_ValueAsLong();

	// RVA: 0x11F2670 Offset: 0x11EE670 VA: 0x11F2670 Slot: 12
	public virtual object ValueAs(Type returnType) { }

	// RVA: -1 Offset: -1 Slot: 13
	public abstract object ValueAs(Type returnType, IXmlNamespaceResolver nsResolver);

	// RVA: 0x11F2684 Offset: 0x11EE684 VA: 0x11F2684
	protected void .ctor() { }
}


// Namespace: System.Xml.XPath
public enum XPathNamespaceScope // TypeDefIndex: 2767
{
	// Fields
	public int value__; // 0x0
	public const XPathNamespaceScope All = 0;
	public const XPathNamespaceScope ExcludeXml = 1;
	public const XPathNamespaceScope Local = 2;
}


// Namespace: System.Xml.XPath
public abstract class XPathNavigator : XPathItem, ICloneable, IXmlNamespaceResolver // TypeDefIndex: 2768
{
	// Fields
	internal static readonly XPathNavigatorKeyComparer comparer; // 0x0
	internal static readonly char[] NodeTypeLetter; // 0x8
	internal static readonly char[] UniqueIdTbl; // 0x10
	internal static readonly int[] ContentKindMasks; // 0x18

	// Properties
	public override object TypedValue { get; }
	public override Type ValueType { get; }
	public override bool ValueAsBoolean { get; }
	public override DateTime ValueAsDateTime { get; }
	public override double ValueAsDouble { get; }
	public override int ValueAsInt { get; }
	public override long ValueAsLong { get; }
	public abstract XmlNameTable NameTable { get; }
	public abstract XPathNodeType NodeType { get; }
	public abstract string LocalName { get; }
	public abstract string NamespaceURI { get; }
	public abstract string Prefix { get; }
	public virtual object UnderlyingObject { get; }
	public virtual IXmlSchemaInfo SchemaInfo { get; }

	// Methods

	// RVA: 0x11F268C Offset: 0x11EE68C VA: 0x11F268C Slot: 3
	public override string ToString() { }

	// RVA: 0x11F2698 Offset: 0x11EE698 VA: 0x11F2698 Slot: 5
	public override object get_TypedValue() { }

	// RVA: 0x11F2974 Offset: 0x11EE974 VA: 0x11F2974 Slot: 6
	public override Type get_ValueType() { }

	// RVA: 0x11F2B80 Offset: 0x11EEB80 VA: 0x11F2B80 Slot: 7
	public override bool get_ValueAsBoolean() { }

	// RVA: 0x11F2E44 Offset: 0x11EEE44 VA: 0x11F2E44 Slot: 8
	public override DateTime get_ValueAsDateTime() { }

	// RVA: 0x11F3110 Offset: 0x11EF110 VA: 0x11F3110 Slot: 9
	public override double get_ValueAsDouble() { }

	// RVA: 0x11F33DC Offset: 0x11EF3DC VA: 0x11F33DC Slot: 10
	public override int get_ValueAsInt() { }

	// RVA: 0x11F36A8 Offset: 0x11EF6A8 VA: 0x11F36A8 Slot: 11
	public override long get_ValueAsLong() { }

	// RVA: 0x11F3974 Offset: 0x11EF974 VA: 0x11F3974 Slot: 13
	public override object ValueAs(Type returnType, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x11F3C60 Offset: 0x11EFC60 VA: 0x11F3C60 Slot: 14
	private object System.ICloneable.Clone() { }

	// RVA: -1 Offset: -1 Slot: 18
	public abstract XmlNameTable get_NameTable();

	// RVA: 0x11F3C70 Offset: 0x11EFC70 VA: 0x11F3C70 Slot: 19
	public virtual string LookupNamespace(string prefix) { }

	// RVA: 0x11F3E14 Offset: 0x11EFE14 VA: 0x11F3E14 Slot: 20
	public virtual string LookupPrefix(string namespaceURI) { }

	// RVA: 0x11F4004 Offset: 0x11F0004 VA: 0x11F4004 Slot: 21
	public virtual IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope) { }

	// RVA: -1 Offset: -1 Slot: 22
	public abstract XPathNavigator Clone();

	// RVA: -1 Offset: -1 Slot: 23
	public abstract XPathNodeType get_NodeType();

	// RVA: -1 Offset: -1 Slot: 24
	public abstract string get_LocalName();

	// RVA: -1 Offset: -1 Slot: 25
	public abstract string get_NamespaceURI();

	// RVA: -1 Offset: -1 Slot: 26
	public abstract string get_Prefix();

	// RVA: 0x11F4220 Offset: 0x11F0220 VA: 0x11F4220 Slot: 27
	public virtual object get_UnderlyingObject() { }

	// RVA: 0x11F4228 Offset: 0x11F0228 VA: 0x11F4228 Slot: 28
	public virtual bool MoveToNamespace(string name) { }

	// RVA: -1 Offset: -1 Slot: 29
	public abstract bool MoveToFirstNamespace(XPathNamespaceScope namespaceScope);

	// RVA: -1 Offset: -1 Slot: 30
	public abstract bool MoveToNextNamespace(XPathNamespaceScope namespaceScope);

	// RVA: -1 Offset: -1 Slot: 31
	public abstract bool MoveToParent();

	// RVA: -1 Offset: -1 Slot: 32
	public abstract bool IsSamePosition(XPathNavigator other);

	// RVA: 0x11F42C8 Offset: 0x11F02C8 VA: 0x11F42C8 Slot: 33
	public virtual IXmlSchemaInfo get_SchemaInfo() { }

	// RVA: 0x11F4310 Offset: 0x11F0310 VA: 0x11F4310
	internal static bool IsText(XPathNodeType type) { }

	// RVA: 0x11F4320 Offset: 0x11F0320 VA: 0x11F4320
	protected void .ctor() { }

	// RVA: 0x11F4328 Offset: 0x11F0328 VA: 0x11F4328
	private static void .cctor() { }
}


// Namespace: System.Xml.XPath
internal class XPathNavigatorKeyComparer : IEqualityComparer // TypeDefIndex: 2769
{
	// Methods

	// RVA: 0x11F4494 Offset: 0x11F0494 VA: 0x11F4494 Slot: 4
	private bool System.Collections.IEqualityComparer.Equals(object obj1, object obj2) { }

	// RVA: 0x11F4570 Offset: 0x11F0570 VA: 0x11F4570 Slot: 5
	private int System.Collections.IEqualityComparer.GetHashCode(object obj) { }

	// RVA: 0x11F448C Offset: 0x11F048C VA: 0x11F448C
	public void .ctor() { }
}


// Namespace: System.Xml.XPath
public enum XPathNodeType // TypeDefIndex: 2770
{
	// Fields
	public int value__; // 0x0
	public const XPathNodeType Root = 0;
	public const XPathNodeType Element = 1;
	public const XPathNodeType Attribute = 2;
	public const XPathNodeType Namespace = 3;
	public const XPathNodeType Text = 4;
	public const XPathNodeType SignificantWhitespace = 5;
	public const XPathNodeType Whitespace = 6;
	public const XPathNodeType ProcessingInstruction = 7;
	public const XPathNodeType Comment = 8;
	public const XPathNodeType All = 9;
}


// Namespace: System.Xml.Serialization
public class CodeIdentifier // TypeDefIndex: 2771
{
	// Fields
	internal static CodeDomProvider csharp; // 0x0

	// Methods

	// RVA: 0x11F473C Offset: 0x11F073C VA: 0x11F473C
	public static string MakePascal(string identifier) { }

	// RVA: 0x11F48EC Offset: 0x11F08EC VA: 0x11F48EC
	public static string MakeValid(string identifier) { }

	// RVA: 0x11F4AEC Offset: 0x11F0AEC VA: 0x11F4AEC
	private static bool IsValidStart(char c) { }

	// RVA: 0x11F4A70 Offset: 0x11F0A70 VA: 0x11F4A70
	private static bool IsValid(char c) { }

	// RVA: 0x11F4B50 Offset: 0x11F0B50 VA: 0x11F4B50
	private static void .cctor() { }
}


// Namespace: System.Xml.Serialization
public class XmlSerializerNamespaces // TypeDefIndex: 2772
{
	// Fields
	private Hashtable namespaces; // 0x10

	// Properties
	public int Count { get; }
	internal ArrayList NamespaceList { get; }
	internal Hashtable Namespaces { get; }

	// Methods

	// RVA: 0x11F4BC0 Offset: 0x11F0BC0 VA: 0x11F4BC0
	public void .ctor() { }

	// RVA: 0x11F4BC8 Offset: 0x11F0BC8 VA: 0x11F4BC8
	public void Add(string prefix, string ns) { }

	// RVA: 0x11F4C7C Offset: 0x11F0C7C VA: 0x11F4C7C
	internal void AddInternal(string prefix, string ns) { }

	// RVA: 0x11F4D1C Offset: 0x11F0D1C VA: 0x11F4D1C
	public XmlQualifiedName[] ToArray() { }

	// RVA: 0x11F5258 Offset: 0x11F1258 VA: 0x11F5258
	public int get_Count() { }

	// RVA: 0x11F4E24 Offset: 0x11F0E24 VA: 0x11F4E24
	internal ArrayList get_NamespaceList() { }

	// RVA: 0x11F4CB8 Offset: 0x11F0CB8 VA: 0x11F4CB8
	internal Hashtable get_Namespaces() { }
}


// Namespace: System.Xml.Serialization
public sealed class XmlAttributeEventHandler : MulticastDelegate // TypeDefIndex: 2773
{
	// Methods

	// RVA: 0x11F527C Offset: 0x11F127C VA: 0x11F527C
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x11F5380 Offset: 0x11F1380 VA: 0x11F5380 Slot: 12
	public virtual void Invoke(object sender, XmlAttributeEventArgs e) { }
}


// Namespace: System.Xml.Serialization
public class XmlAttributeEventArgs : EventArgs // TypeDefIndex: 2774
{
	// Fields
	private object o; // 0x10
	private XmlAttribute attr; // 0x18
	private string qnames; // 0x20
	private int lineNumber; // 0x28
	private int linePosition; // 0x2C

	// Methods

	// RVA: 0x11F5394 Offset: 0x11F1394 VA: 0x11F5394
	internal void .ctor(XmlAttribute attr, int lineNumber, int linePosition, object o, string qnames) { }
}


// Namespace: System.Xml.Serialization
public sealed class XmlElementEventHandler : MulticastDelegate // TypeDefIndex: 2775
{
	// Methods

	// RVA: 0x11F5428 Offset: 0x11F1428 VA: 0x11F5428
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x11F552C Offset: 0x11F152C VA: 0x11F552C Slot: 12
	public virtual void Invoke(object sender, XmlElementEventArgs e) { }
}


// Namespace: System.Xml.Serialization
public class XmlElementEventArgs : EventArgs // TypeDefIndex: 2776
{
	// Fields
	private object o; // 0x10
	private XmlElement elem; // 0x18
	private string qnames; // 0x20
	private int lineNumber; // 0x28
	private int linePosition; // 0x2C

	// Methods

	// RVA: 0x11F5540 Offset: 0x11F1540 VA: 0x11F5540
	internal void .ctor(XmlElement elem, int lineNumber, int linePosition, object o, string qnames) { }
}


// Namespace: System.Xml.Serialization
public sealed class XmlNodeEventHandler : MulticastDelegate // TypeDefIndex: 2777
{
	// Methods

	// RVA: 0x11F55D4 Offset: 0x11F15D4 VA: 0x11F55D4
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x11F56D8 Offset: 0x11F16D8 VA: 0x11F56D8 Slot: 12
	public virtual void Invoke(object sender, XmlNodeEventArgs e) { }
}


// Namespace: System.Xml.Serialization
public class XmlNodeEventArgs : EventArgs // TypeDefIndex: 2778
{
	// Fields
	private object o; // 0x10
	private XmlNode xmlNode; // 0x18
	private int lineNumber; // 0x20
	private int linePosition; // 0x24

	// Methods

	// RVA: 0x11F56EC Offset: 0x11F16EC VA: 0x11F56EC
	internal void .ctor(XmlNode xmlNode, int lineNumber, int linePosition, object o) { }
}


// Namespace: System.Xml.Serialization
public sealed class UnreferencedObjectEventHandler : MulticastDelegate // TypeDefIndex: 2779
{
	// Methods

	// RVA: 0x11F5770 Offset: 0x11F1770 VA: 0x11F5770
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x11F5874 Offset: 0x11F1874 VA: 0x11F5874 Slot: 12
	public virtual void Invoke(object sender, UnreferencedObjectEventArgs e) { }
}


// Namespace: System.Xml.Serialization
public class UnreferencedObjectEventArgs : EventArgs // TypeDefIndex: 2780
{
	// Fields
	private object o; // 0x10
	private string id; // 0x18

	// Methods

	// RVA: 0x11F5888 Offset: 0x11F1888 VA: 0x11F5888
	public void .ctor(object o, string id) { }
}


// Namespace: System.Xml.Serialization
public interface IXmlSerializable // TypeDefIndex: 2781
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract XmlSchema GetSchema();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void ReadXml(XmlReader reader);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void WriteXml(XmlWriter writer);
}


// Namespace: System.Xml.Serialization
public interface IXmlTextParser // TypeDefIndex: 2782
{
	// Properties
	public abstract bool Normalized { get; set; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool get_Normalized();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void set_Normalized(bool value);
}


// Namespace: System.Xml.Serialization
internal class KeyHelper // TypeDefIndex: 2783
{
	// Methods

	// RVA: 0x11F58F8 Offset: 0x11F18F8 VA: 0x11F58F8
	public static void AddField(StringBuilder sb, int n, string val) { }

	// RVA: 0x11F5900 Offset: 0x11F1900 VA: 0x11F5900
	public static void AddField(StringBuilder sb, int n, string val, string def) { }

	// RVA: 0x11F59E4 Offset: 0x11F19E4 VA: 0x11F59E4
	public static void AddField(StringBuilder sb, int n, bool val) { }

	// RVA: 0x11F59F0 Offset: 0x11F19F0 VA: 0x11F59F0
	public static void AddField(StringBuilder sb, int n, bool val, bool def) { }

	// RVA: 0x11F5A40 Offset: 0x11F1A40 VA: 0x11F5A40
	public static void AddField(StringBuilder sb, int n, int val, int def) { }

	// RVA: 0x11F5AF8 Offset: 0x11F1AF8 VA: 0x11F5AF8
	public static void AddField(StringBuilder sb, int n, Type val) { }
}


// Namespace: System.Xml.Serialization
internal class ReflectionHelper // TypeDefIndex: 2784
{
	// Fields
	private Hashtable _clrTypes; // 0x10
	private Hashtable _schemaTypes; // 0x18
	private static readonly ParameterModifier[] empty_modifiers; // 0x0

	// Methods

	// RVA: 0x11F5BE4 Offset: 0x11F1BE4 VA: 0x11F5BE4
	public void RegisterSchemaType(XmlTypeMapping map, string xmlType, string ns) { }

	// RVA: 0x11F5CB0 Offset: 0x11F1CB0 VA: 0x11F5CB0
	public XmlTypeMapping GetRegisteredSchemaType(string xmlType, string ns) { }

	// RVA: 0x11F5D84 Offset: 0x11F1D84 VA: 0x11F5D84
	public void RegisterClrType(XmlTypeMapping map, Type type, string ns) { }

	// RVA: 0x11F5EDC Offset: 0x11F1EDC VA: 0x11F5EDC
	public XmlTypeMapping GetRegisteredClrType(Type type, string ns) { }

	// RVA: 0x11F6044 Offset: 0x11F2044 VA: 0x11F6044
	public static void CheckSerializableType(Type type, bool allowPrivateConstructors) { }

	// RVA: 0x11F638C Offset: 0x11F238C VA: 0x11F638C
	public void .ctor() { }

	// RVA: 0x11F6404 Offset: 0x11F2404 VA: 0x11F6404
	private static void .cctor() { }
}


// Namespace: System.Xml.Serialization
internal enum SchemaTypes // TypeDefIndex: 2785
{
	// Fields
	public int value__; // 0x0
	public const SchemaTypes NotSet = 0;
	public const SchemaTypes Primitive = 1;
	public const SchemaTypes Enum = 2;
	public const SchemaTypes Array = 3;
	public const SchemaTypes Class = 4;
	public const SchemaTypes XmlSerializable = 5;
	public const SchemaTypes XmlNode = 6;
	public const SchemaTypes Void = 7;
}


// Namespace: System.Xml.Serialization
internal abstract class SerializationSource // TypeDefIndex: 2786
{
	// Fields
	private Type[] includedTypes; // 0x10
	private string namspace; // 0x18
	private bool canBeGenerated; // 0x20

	// Methods

	// RVA: 0x11F646C Offset: 0x11F246C VA: 0x11F646C
	public void .ctor(string namspace, Type[] includedTypes) { }

	// RVA: 0x11F64A0 Offset: 0x11F24A0 VA: 0x11F64A0
	protected bool BaseEquals(SerializationSource other) { }
}


// Namespace: System.Xml.Serialization
internal class XmlTypeSerializationSource : SerializationSource // TypeDefIndex: 2787
{
	// Fields
	private string attributeOverridesHash; // 0x28
	private Type type; // 0x30
	private string rootHash; // 0x38

	// Methods

	// RVA: 0x11F65AC Offset: 0x11F25AC VA: 0x11F65AC
	public void .ctor(Type type, XmlRootAttribute root, XmlAttributeOverrides attributeOverrides, string namspace, Type[] includedTypes) { }

	// RVA: 0x11F66B0 Offset: 0x11F26B0 VA: 0x11F66B0 Slot: 0
	public override bool Equals(object o) { }

	// RVA: 0x11F6790 Offset: 0x11F2790 VA: 0x11F6790 Slot: 2
	public override int GetHashCode() { }
}


// Namespace: System.Xml.Serialization
[Usage(4, AllowMultiple = False)]
internal class XmlTypeConvertorAttribute : Attribute // TypeDefIndex: 2788
{
	// Fields
	[CompilerGenerated]
	private string <Method>k__BackingField; // 0x10

	// Methods

	// RVA: 0x11F67B0 Offset: 0x11F27B0 VA: 0x11F67B0
	public void .ctor(string method) { }
}


// Namespace: System.Xml.Serialization
internal class TypeData // TypeDefIndex: 2789
{
	// Fields
	private Type type; // 0x10
	private string elementName; // 0x18
	private SchemaTypes sType; // 0x20
	private Type listItemType; // 0x28
	private string typeName; // 0x30
	private string fullTypeName; // 0x38
	private TypeData listItemTypeData; // 0x40
	private TypeData mappedType; // 0x48
	private XmlSchemaPatternFacet facet; // 0x50
	private MethodInfo typeConvertor; // 0x58
	private bool hasPublicConstructor; // 0x60
	private bool nullableOverride; // 0x61
	private static string[] keywords; // 0x0

	// Properties
	public bool IsListType { get; }
	public bool IsComplexType { get; }
	public bool IsValueType { get; }
	public bool IsNullable { get; }
	public TypeData ListItemTypeData { get; }
	public Type ListItemType { get; }
	public bool IsXsdType { get; }

	// Methods

	// RVA: 0x11F67D8 Offset: 0x11F27D8 VA: 0x11F67D8
	public void .ctor(Type type, string elementName, bool isPrimitive) { }

	// RVA: 0x11F67E8 Offset: 0x11F27E8 VA: 0x11F67E8
	public void .ctor(Type type, string elementName, bool isPrimitive, TypeData mappedType, XmlSchemaPatternFacet facet) { }

	// RVA: 0x11F6D78 Offset: 0x11F2D78 VA: 0x11F6D78
	private void LookupTypeConvertor() { }

	// RVA: 0x11F6E18 Offset: 0x11F2E18 VA: 0x11F6E18
	internal void ConvertForAssignment(ref object value) { }

	// RVA: 0x11F637C Offset: 0x11F237C VA: 0x11F637C
	public bool get_IsListType() { }

	// RVA: 0x11F6EE8 Offset: 0x11F2EE8 VA: 0x11F6EE8
	public bool get_IsComplexType() { }

	// RVA: 0x11F6F20 Offset: 0x11F2F20 VA: 0x11F6F20
	public bool get_IsValueType() { }

	// RVA: 0x11F6FB4 Offset: 0x11F2FB4 VA: 0x11F6FB4
	public bool get_IsNullable() { }

	// RVA: 0x11F6BB4 Offset: 0x11F2BB4 VA: 0x11F6BB4
	public TypeData get_ListItemTypeData() { }

	// RVA: 0x11F70C8 Offset: 0x11F30C8 VA: 0x11F70C8
	public Type get_ListItemType() { }

	// RVA: 0x11F6F10 Offset: 0x11F2F10 VA: 0x11F6F10
	public bool get_IsXsdType() { }

	// RVA: 0x11F7980 Offset: 0x11F3980 VA: 0x11F7980
	public static PropertyInfo GetIndexerProperty(Type collectionType) { }

	// RVA: 0x11F7AB0 Offset: 0x11F3AB0 VA: 0x11F7AB0
	private static InvalidOperationException CreateMissingAddMethodException(Type type, string inheritFrom, Type argumentType) { }

	// RVA: 0x11F778C Offset: 0x11F378C VA: 0x11F778C
	internal static Type GetGenericListItemType(Type type) { }

	// RVA: 0x11F7BC4 Offset: 0x11F3BC4 VA: 0x11F7BC4
	private static void .cctor() { }
}


// Namespace: System.Xml.Serialization
internal sealed class TypeMember // TypeDefIndex: 2790
{
	// Fields
	private Type type; // 0x10
	private string member; // 0x18

	// Methods

	// RVA: 0x11F8778 Offset: 0x11F4778 VA: 0x11F8778
	internal void .ctor(Type type, string member) { }

	// RVA: 0x11F87A4 Offset: 0x11F47A4 VA: 0x11F87A4 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x11F87EC Offset: 0x11F47EC VA: 0x11F87EC Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x11F885C Offset: 0x11F485C VA: 0x11F885C
	public static bool Equals(TypeMember tm1, TypeMember tm2) { }

	// RVA: 0x11F8908 Offset: 0x11F4908 VA: 0x11F8908 Slot: 3
	public override string ToString() { }
}


// Namespace: System.Xml.Serialization
internal class TypeTranslator // TypeDefIndex: 2791
{
	// Fields
	private static Hashtable nameCache; // 0x0
	private static Hashtable primitiveTypes; // 0x8
	private static Hashtable primitiveArrayTypes; // 0x10
	private static Hashtable nullableTypes; // 0x18

	// Methods

	// RVA: 0x11F896C Offset: 0x11F496C VA: 0x11F896C
	private static void .cctor() { }

	// RVA: 0x11F6320 Offset: 0x11F2320 VA: 0x11F6320
	public static TypeData GetTypeData(Type type) { }

	// RVA: 0x11FADA8 Offset: 0x11F6DA8 VA: 0x11FADA8
	public static TypeData GetTypeData(Type runtimeType, string xmlDataType, bool underlyingEnumType = False) { }

	// RVA: 0x11FB6F8 Offset: 0x11F76F8 VA: 0x11FB6F8
	public static TypeData GetPrimitiveTypeData(string typeName) { }

	// RVA: 0x11FB750 Offset: 0x11F7750 VA: 0x11FB750
	public static TypeData GetPrimitiveTypeData(string typeName, bool nullable) { }

	// RVA: 0x11FB950 Offset: 0x11F7950 VA: 0x11FB950
	public static TypeData FindPrimitiveTypeData(string typeName) { }

	// RVA: 0x11F6C6C Offset: 0x11F2C6C VA: 0x11F6C6C
	public static string GetArrayName(string elemName) { }

	// RVA: 0x11FBA10 Offset: 0x11F7A10 VA: 0x11FBA10
	public static void ParseArrayType(string arrayType, out string type, out string ns, out string dimensions) { }
}


// Namespace: System.Xml.Serialization
[Usage(10624)]
public class XmlAnyAttributeAttribute : Attribute // TypeDefIndex: 2792
{}


// Namespace: System.Xml.Serialization
[Usage(10624, AllowMultiple = True)]
public class XmlAnyElementAttribute : Attribute // TypeDefIndex: 2793
{
	// Fields
	private string elementName; // 0x10
	private string ns; // 0x18
	private int order; // 0x20

	// Properties
	public string Name { get; }

	// Methods

	// RVA: 0x11FBB80 Offset: 0x11F7B80 VA: 0x11FBB80
	public string get_Name() { }

	// RVA: 0x11FBBD4 Offset: 0x11F7BD4 VA: 0x11FBBD4
	internal void AddKeyHash(StringBuilder sb) { }
}


// Namespace: System.Xml.Serialization
[DefaultMember("Item")]
public class XmlAnyElementAttributes : CollectionBase // TypeDefIndex: 2794
{
	// Properties
	public XmlAnyElementAttribute Item { get; }
	internal int Order { get; }

	// Methods

	// RVA: 0x11FBC64 Offset: 0x11F7C64 VA: 0x11FBC64
	public XmlAnyElementAttribute get_Item(int index) { }

	// RVA: 0x11FBD64 Offset: 0x11F7D64 VA: 0x11FBD64
	public int Add(XmlAnyElementAttribute attribute) { }

	// RVA: 0x11FBE1C Offset: 0x11F7E1C VA: 0x11FBE1C
	internal void AddKeyHash(StringBuilder sb) { }

	// RVA: 0x11FBEE8 Offset: 0x11F7EE8 VA: 0x11FBEE8
	internal int get_Order() { }

	// RVA: 0x11FC1B4 Offset: 0x11F81B4 VA: 0x11FC1B4
	public void .ctor() { }
}


// Namespace: System.Xml.Serialization
[Usage(10624, AllowMultiple = False)]
public class XmlArrayAttribute : Attribute // TypeDefIndex: 2795
{
	// Fields
	private string elementName; // 0x10
	private XmlSchemaForm form; // 0x18
	private bool isNullable; // 0x1C
	private string ns; // 0x20
	private int order; // 0x28

	// Properties
	public string ElementName { get; }

	// Methods

	// RVA: 0x11FC1BC Offset: 0x11F81BC VA: 0x11FC1BC
	public string get_ElementName() { }

	// RVA: 0x11FC210 Offset: 0x11F8210 VA: 0x11FC210
	internal void AddKeyHash(StringBuilder sb) { }
}


// Namespace: System.Xml.Serialization
[Usage(10624, AllowMultiple = True)]
public class XmlArrayItemAttribute : Attribute // TypeDefIndex: 2796
{
	// Fields
	private string dataType; // 0x10
	private string elementName; // 0x18
	private XmlSchemaForm form; // 0x20
	private string ns; // 0x28
	private bool isNullable; // 0x30
	private bool isNullableSpecified; // 0x31
	private int nestingLevel; // 0x34
	private Type type; // 0x38

	// Properties
	public string DataType { get; }
	public string ElementName { get; }

	// Methods

	// RVA: 0x11FC32C Offset: 0x11F832C VA: 0x11FC32C
	public string get_DataType() { }

	// RVA: 0x11FC380 Offset: 0x11F8380 VA: 0x11FC380
	public string get_ElementName() { }

	// RVA: 0x11FC3D4 Offset: 0x11F83D4 VA: 0x11FC3D4
	internal void AddKeyHash(StringBuilder sb) { }
}


// Namespace: System.Xml.Serialization
[DefaultMember("Item")]
public class XmlArrayItemAttributes : CollectionBase // TypeDefIndex: 2797
{
	// Properties
	public XmlArrayItemAttribute Item { get; }

	// Methods

	// RVA: 0x11FC528 Offset: 0x11F8528 VA: 0x11FC528
	public XmlArrayItemAttribute get_Item(int index) { }

	// RVA: 0x11FC628 Offset: 0x11F8628 VA: 0x11FC628
	public int Add(XmlArrayItemAttribute attribute) { }

	// RVA: 0x11FC6E0 Offset: 0x11F86E0 VA: 0x11FC6E0
	internal void AddKeyHash(StringBuilder sb) { }

	// RVA: 0x11FC7B0 Offset: 0x11F87B0 VA: 0x11FC7B0
	public void .ctor() { }
}


// Namespace: System.Xml.Serialization
[Usage(10624)]
public class XmlAttributeAttribute : Attribute // TypeDefIndex: 2798
{
	// Fields
	private string attributeName; // 0x10
	private string dataType; // 0x18
	private Type type; // 0x20
	private XmlSchemaForm form; // 0x28
	private string ns; // 0x30

	// Properties
	public string AttributeName { get; }
	public string DataType { get; }

	// Methods

	// RVA: 0x11FC7B8 Offset: 0x11F87B8 VA: 0x11FC7B8
	public void .ctor(string attributeName) { }

	// RVA: 0x11FC7E0 Offset: 0x11F87E0 VA: 0x11FC7E0
	public string get_AttributeName() { }

	// RVA: 0x11FC834 Offset: 0x11F8834 VA: 0x11FC834
	public string get_DataType() { }

	// RVA: 0x11FC888 Offset: 0x11F8888 VA: 0x11FC888
	internal void AddKeyHash(StringBuilder sb) { }
}


// Namespace: System.Xml.Serialization
[DefaultMember("Item")]
public class XmlAttributeOverrides // TypeDefIndex: 2799
{
	// Fields
	private Hashtable overrides; // 0x10

	// Properties
	public XmlAttributes Item { get; }
	public XmlAttributes Item { get; }

	// Methods

	// RVA: 0x11FC9BC Offset: 0x11F89BC VA: 0x11FC9BC
	public void .ctor() { }

	// RVA: 0x11FCA20 Offset: 0x11F8A20 VA: 0x11FCA20
	public XmlAttributes get_Item(Type type) { }

	// RVA: 0x11FCA80 Offset: 0x11F8A80 VA: 0x11FCA80
	public XmlAttributes get_Item(Type type, string member) { }

	// RVA: 0x11FCB34 Offset: 0x11F8B34 VA: 0x11FCB34
	private TypeMember GetKey(Type type, string member) { }

	// RVA: 0x11FCBA0 Offset: 0x11F8BA0 VA: 0x11FCBA0
	internal void AddKeyHash(StringBuilder sb) { }
}


// Namespace: System.Xml.Serialization
public class XmlAttributes // TypeDefIndex: 2800
{
	// Fields
	private XmlAnyAttributeAttribute xmlAnyAttribute; // 0x10
	private XmlAnyElementAttributes xmlAnyElements; // 0x18
	private XmlArrayAttribute xmlArray; // 0x20
	private XmlArrayItemAttributes xmlArrayItems; // 0x28
	private XmlAttributeAttribute xmlAttribute; // 0x30
	private XmlChoiceIdentifierAttribute xmlChoiceIdentifier; // 0x38
	private object xmlDefaultValue; // 0x40
	private XmlElementAttributes xmlElements; // 0x48
	private XmlEnumAttribute xmlEnum; // 0x50
	private bool xmlIgnore; // 0x58
	private bool xmlns; // 0x59
	private XmlRootAttribute xmlRoot; // 0x60
	private XmlTextAttribute xmlText; // 0x68
	private XmlTypeAttribute xmlType; // 0x70

	// Properties
	internal Nullable<int> Order { get; }
	internal int SortableOrder { get; }

	// Methods

	// RVA: 0x11FD320 Offset: 0x11F9320 VA: 0x11FD320
	public void .ctor() { }

	// RVA: 0x11FD41C Offset: 0x11F941C VA: 0x11FD41C
	public void .ctor(ICustomAttributeProvider provider) { }

	// RVA: 0x11FD0AC Offset: 0x11F90AC VA: 0x11FD0AC
	internal void AddKeyHash(StringBuilder sb) { }

	// RVA: 0x11FEB24 Offset: 0x11FAB24 VA: 0x11FEB24
	internal Nullable<int> get_Order() { }

	// RVA: 0x11FEEBC Offset: 0x11FAEBC VA: 0x11FEEBC
	internal int get_SortableOrder() { }
}


// Namespace: System.Xml.Serialization
[Usage(10624, AllowMultiple = False)]
public class XmlChoiceIdentifierAttribute : Attribute // TypeDefIndex: 2801
{
	// Fields
	private string memberName; // 0x10

	// Properties
	public string MemberName { get; }

	// Methods

	// RVA: 0x11FEF3C Offset: 0x11FAF3C VA: 0x11FEF3C
	public string get_MemberName() { }

	// RVA: 0x11FEAA8 Offset: 0x11FAAA8 VA: 0x11FEAA8
	internal void AddKeyHash(StringBuilder sb) { }
}


// Namespace: System.Xml.Serialization
internal class XmlCustomFormatter // TypeDefIndex: 2802
{
	// Fields
	private static string[] allTimeFormats; // 0x0

	// Methods

	// RVA: 0x11FEF90 Offset: 0x11FAF90 VA: 0x11FEF90
	internal static string FromEnum(long value, string[] values, long[] ids, string typeName) { }

	// RVA: 0x11FF214 Offset: 0x11FB214 VA: 0x11FF214
	internal static string FromXmlName(string name) { }

	// RVA: 0x11FF26C Offset: 0x11FB26C VA: 0x11FF26C
	internal static string FromXmlNCName(string ncName) { }

	// RVA: 0x11FDBC0 Offset: 0x11F9BC0 VA: 0x11FDBC0
	internal static string ToXmlString(TypeData type, object value) { }

	// RVA: 0x11FF2C4 Offset: 0x11FB2C4 VA: 0x11FF2C4
	internal static object FromXmlString(TypeData type, string value) { }

	// RVA: 0x11FFDE0 Offset: 0x11FBDE0 VA: 0x11FFDE0
	private static void .cctor() { }
}


// Namespace: System.Xml.Serialization
[Usage(10624, AllowMultiple = True)]
public class XmlElementAttribute : Attribute // TypeDefIndex: 2803
{
	// Fields
	private string dataType; // 0x10
	private string elementName; // 0x18
	private XmlSchemaForm form; // 0x20
	private string ns; // 0x28
	private bool isNullable; // 0x30
	private Type type; // 0x38
	private int order; // 0x40

	// Properties
	public string DataType { get; }
	public string ElementName { get; }

	// Methods

	// RVA: 0x12001B4 Offset: 0x11FC1B4 VA: 0x12001B4
	public void .ctor(string elementName, Type type) { }

	// RVA: 0x12001EC Offset: 0x11FC1EC VA: 0x12001EC
	public string get_DataType() { }

	// RVA: 0x1200240 Offset: 0x11FC240 VA: 0x1200240
	public string get_ElementName() { }

	// RVA: 0x1200294 Offset: 0x11FC294 VA: 0x1200294
	internal void AddKeyHash(StringBuilder sb) { }
}


// Namespace: System.Xml.Serialization
[DefaultMember("Item")]
public class XmlElementAttributes : CollectionBase // TypeDefIndex: 2804
{
	// Properties
	public XmlElementAttribute Item { get; }
	internal int Order { get; }

	// Methods

	// RVA: 0x12003DC Offset: 0x11FC3DC VA: 0x12003DC
	public XmlElementAttribute get_Item(int index) { }

	// RVA: 0x11FDA3C Offset: 0x11F9A3C VA: 0x11FDA3C
	public int Add(XmlElementAttribute attribute) { }

	// RVA: 0x11FDAF4 Offset: 0x11F9AF4 VA: 0x11FDAF4
	internal void AddKeyHash(StringBuilder sb) { }

	// RVA: 0x11FEBF0 Offset: 0x11FABF0 VA: 0x11FEBF0
	internal int get_Order() { }

	// RVA: 0x11FD414 Offset: 0x11F9414 VA: 0x11FD414
	public void .ctor() { }
}


// Namespace: System.Xml.Serialization
[Usage(256)]
public class XmlEnumAttribute : Attribute // TypeDefIndex: 2805
{
	// Fields
	private string name; // 0x10

	// Methods

	// RVA: 0x12004DC Offset: 0x11FC4DC VA: 0x12004DC
	public void .ctor(string name) { }

	// RVA: 0x11FE974 Offset: 0x11FA974 VA: 0x11FE974
	internal void AddKeyHash(StringBuilder sb) { }
}


// Namespace: System.Xml.Serialization
[Usage(10624)]
public class XmlIgnoreAttribute : Attribute // TypeDefIndex: 2806
{
	// Methods

	// RVA: 0x1200504 Offset: 0x11FC504 VA: 0x1200504
	public void .ctor() { }
}


// Namespace: System.Xml.Serialization
[Usage(1100, AllowMultiple = True)]
public class XmlIncludeAttribute : Attribute // TypeDefIndex: 2807
{
	// Fields
	private Type type; // 0x10
}


// Namespace: System.Xml.Serialization
public abstract class XmlMapping // TypeDefIndex: 2808
{
	// Fields
	private ObjectMap map; // 0x10
	private ArrayList relatedMaps; // 0x18
	private SerializationFormat format; // 0x20
	private SerializationSource source; // 0x28
	internal string _elementName; // 0x30
	internal string _namespace; // 0x38
	private string key; // 0x40

	// Methods

	// RVA: 0x120050C Offset: 0x11FC50C VA: 0x120050C
	internal void .ctor(string elementName, string ns) { }
}


// Namespace: System.Xml.Serialization
internal class ObjectMap // TypeDefIndex: 2809
{
	// Methods

	// RVA: 0x1200538 Offset: 0x11FC538 VA: 0x1200538
	public void .ctor() { }
}


// Namespace: System.Xml.Serialization
internal enum SerializationFormat // TypeDefIndex: 2810
{
	// Fields
	public int value__; // 0x0
	public const SerializationFormat Encoded = 0;
	public const SerializationFormat Literal = 1;
}


// Namespace: System.Xml.Serialization
public class XmlMemberMapping // TypeDefIndex: 2811
{}


// Namespace: System.Xml.Serialization
[DefaultMember("Item")]
public class XmlMembersMapping : XmlMapping // TypeDefIndex: 2812
{
	// Fields
	private bool _hasWrapperElement; // 0x48
	private XmlMemberMapping[] _mapping; // 0x50

	// Properties
	public int Count { get; }

	// Methods

	// RVA: 0x1200540 Offset: 0x11FC540 VA: 0x1200540
	public int get_Count() { }
}


// Namespace: System.Xml.Serialization
[Usage(10624)]
public class XmlNamespaceDeclarationsAttribute : Attribute // TypeDefIndex: 2813
{
	// Methods

	// RVA: 0x120055C Offset: 0x11FC55C VA: 0x120055C
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class XmlReflectionImporter.<>c // TypeDefIndex: 2814
{
	// Fields
	public static readonly XmlReflectionImporter.<>c <>9; // 0x0
	public static Comparison<XmlReflectionMember> <>9__28_0; // 0x8

	// Methods

	// RVA: 0x1207228 Offset: 0x1203228 VA: 0x1207228
	private static void .cctor() { }

	// RVA: 0x1207284 Offset: 0x1203284 VA: 0x1207284
	public void .ctor() { }

	// RVA: 0x120728C Offset: 0x120328C VA: 0x120728C
	internal int <ImportClassMapping>b__28_0(XmlReflectionMember m1, XmlReflectionMember m2) { }
}


// Namespace: System.Xml.Serialization
public class XmlReflectionImporter // TypeDefIndex: 2815
{
	// Fields
	private string initialDefaultNamespace; // 0x10
	private XmlAttributeOverrides attributeOverrides; // 0x18
	private ArrayList includedTypes; // 0x20
	private ReflectionHelper helper; // 0x28
	private int arrayChoiceCount; // 0x30
	private ArrayList relatedMaps; // 0x38
	private bool allowPrivateTypes; // 0x40
	private static readonly string errSimple; // 0x0
	private static readonly string errSimple2; // 0x8

	// Methods

	// RVA: 0x1200564 Offset: 0x11FC564 VA: 0x1200564
	public void .ctor(XmlAttributeOverrides attributeOverrides, string defaultNamespace) { }

	// RVA: 0x1200668 Offset: 0x11FC668 VA: 0x1200668
	public XmlTypeMapping ImportTypeMapping(Type type) { }

	// RVA: 0x1200850 Offset: 0x11FC850 VA: 0x1200850
	public XmlTypeMapping ImportTypeMapping(Type type, string defaultNamespace) { }

	// RVA: 0x1200674 Offset: 0x11FC674 VA: 0x1200674
	public XmlTypeMapping ImportTypeMapping(Type type, XmlRootAttribute root, string defaultNamespace) { }

	// RVA: 0x120085C Offset: 0x11FC85C VA: 0x120085C
	private XmlTypeMapping ImportTypeMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace) { }

	// RVA: 0x1203148 Offset: 0x11FF148 VA: 0x1203148
	private XmlTypeMapping CreateTypeMapping(TypeData typeData, XmlRootAttribute root, string defaultXmlType, string defaultNamespace) { }

	// RVA: 0x1203630 Offset: 0x11FF630 VA: 0x1203630
	private XmlTypeMapping ImportClassMapping(Type type, XmlRootAttribute root, string defaultNamespace, bool isBaseType = False) { }

	// RVA: 0x1200CC4 Offset: 0x11FCCC4 VA: 0x1200CC4
	private XmlTypeMapping ImportClassMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace, bool isBaseType = False) { }

	// RVA: 0x1204E44 Offset: 0x1200E44 VA: 0x1204E44
	private void RegisterDerivedMap(XmlTypeMapping map, XmlTypeMapping derivedMap) { }

	// RVA: 0x12036C0 Offset: 0x11FF6C0 VA: 0x12036C0
	private string GetTypeNamespace(TypeData typeData, XmlRootAttribute root, string defaultNamespace) { }

	// RVA: 0x1205098 Offset: 0x1201098 VA: 0x1205098
	private XmlTypeMapping ImportListMapping(Type type, XmlRootAttribute root, string defaultNamespace, XmlAttributes atts, int nestingLevel) { }

	// RVA: 0x1201AF8 Offset: 0x11FDAF8 VA: 0x1201AF8
	private XmlTypeMapping ImportListMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace, XmlAttributes atts, int nestingLevel) { }

	// RVA: 0x12027AC Offset: 0x11FE7AC VA: 0x12027AC
	private XmlTypeMapping ImportXmlNodeMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace) { }

	// RVA: 0x1202980 Offset: 0x11FE980 VA: 0x1202980
	private XmlTypeMapping ImportPrimitiveMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace) { }

	// RVA: 0x1202A34 Offset: 0x11FEA34 VA: 0x1202A34
	private XmlTypeMapping ImportEnumMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace) { }

	// RVA: 0x1203034 Offset: 0x11FF034 VA: 0x1203034
	private XmlTypeMapping ImportXmlSerializableMapping(TypeData typeData, XmlRootAttribute root, string defaultNamespace) { }

	// RVA: 0x1204F60 Offset: 0x1200F60 VA: 0x1204F60
	private void ImportIncludedTypes(Type type, string defaultNamespace) { }

	// RVA: 0x12037CC Offset: 0x11FF7CC VA: 0x12037CC
	private List<XmlReflectionMember> GetReflectionMembers(Type type) { }

	// RVA: 0x12044E4 Offset: 0x12004E4 VA: 0x12044E4
	private XmlTypeMapMember CreateMapMember(Type declaringType, XmlReflectionMember rmember, string defaultNamespace) { }

	// RVA: 0x12057B4 Offset: 0x12017B4 VA: 0x12057B4
	private XmlTypeMapElementInfoList ImportElementInfo(Type cls, string defaultName, string defaultNamespace, Type defaultType, XmlTypeMapMemberElement member, XmlAttributes atts) { }

	// RVA: 0x1205174 Offset: 0x1201174 VA: 0x1205174
	private XmlTypeMapElementInfoList ImportAnyElementInfo(string defaultNamespace, XmlReflectionMember rmember, XmlTypeMapMemberElement member, XmlAttributes atts) { }

	// RVA: 0x1206974 Offset: 0x1202974 VA: 0x1206974
	private void ImportTextElementInfo(XmlTypeMapElementInfoList list, Type defaultType, XmlTypeMapMemberElement member, XmlAttributes atts, string defaultNamespace) { }

	// RVA: 0x120359C Offset: 0x11FF59C VA: 0x120359C
	private bool CanBeNull(TypeData type) { }

	// RVA: 0x1206CB4 Offset: 0x1202CB4 VA: 0x1206CB4
	public void IncludeType(Type type) { }

	// RVA: 0x12067A8 Offset: 0x12027A8 VA: 0x12067A8
	private object GetDefaultValue(TypeData typeData, object defaultValue) { }

	// RVA: 0x120719C Offset: 0x120319C VA: 0x120719C
	private static void .cctor() { }
}


// Namespace: System.Xml.Serialization
public class XmlReflectionMember // TypeDefIndex: 2816
{
	// Fields
	private bool isReturnValue; // 0x10
	private string memberName; // 0x18
	private Type memberType; // 0x20
	private XmlAttributes xmlAttributes; // 0x28
	private Type declaringType; // 0x30

	// Properties
	public XmlAttributes XmlAttributes { get; }

	// Methods

	// RVA: 0x1205138 Offset: 0x1201138 VA: 0x1205138
	internal void .ctor(string name, Type type, XmlAttributes attributes) { }

	// RVA: 0x1204484 Offset: 0x1200484 VA: 0x1204484
	public XmlAttributes get_XmlAttributes() { }
}


// Namespace: System.Xml.Serialization
[Usage(9244)]
public class XmlRootAttribute : Attribute // TypeDefIndex: 2817
{
	// Fields
	private string dataType; // 0x10
	private string elementName; // 0x18
	private bool isNullable; // 0x20
	private string ns; // 0x28

	// Properties
	public string DataType { get; set; }
	public string ElementName { get; set; }
	public bool IsNullable { get; set; }
	public string Namespace { get; set; }

	// Methods

	// RVA: 0x12072D8 Offset: 0x12032D8 VA: 0x12072D8
	public void .ctor() { }

	// RVA: 0x12072E8 Offset: 0x12032E8 VA: 0x12072E8
	public void .ctor(string elementName) { }

	// RVA: 0x1207318 Offset: 0x1203318 VA: 0x1207318
	public string get_DataType() { }

	// RVA: 0x120736C Offset: 0x120336C VA: 0x120736C
	public void set_DataType(string value) { }

	// RVA: 0x12035DC Offset: 0x11FF5DC VA: 0x12035DC
	public string get_ElementName() { }

	// RVA: 0x1207374 Offset: 0x1203374 VA: 0x1207374
	public void set_ElementName(string value) { }

	// RVA: 0x120737C Offset: 0x120337C VA: 0x120737C
	public bool get_IsNullable() { }

	// RVA: 0x1207384 Offset: 0x1203384 VA: 0x1207384
	public void set_IsNullable(bool value) { }

	// RVA: 0x1207390 Offset: 0x1203390 VA: 0x1207390
	public string get_Namespace() { }

	// RVA: 0x1207398 Offset: 0x1203398 VA: 0x1207398
	public void set_Namespace(string value) { }

	// RVA: 0x11FE9F0 Offset: 0x11FA9F0 VA: 0x11FE9F0
	internal void AddKeyHash(StringBuilder sb) { }
}


// Namespace: System.Xml.Serialization
[Usage(1036)]
public sealed class XmlSchemaProviderAttribute : Attribute // TypeDefIndex: 2818
{
	// Fields
	private string _methodName; // 0x10
	private bool _isAny; // 0x18

	// Properties
	public bool IsAny { set; }

	// Methods

	// RVA: 0x12073A0 Offset: 0x12033A0 VA: 0x12073A0
	public void .ctor(string methodName) { }

	// RVA: 0x12073C8 Offset: 0x12033C8 VA: 0x12073C8
	public void set_IsAny(bool value) { }
}


// Namespace: System.Xml.Serialization
public sealed class XmlSerializationCollectionFixupCallback : MulticastDelegate // TypeDefIndex: 2819
{
	// Methods

	// RVA: 0x12073D4 Offset: 0x12033D4 VA: 0x12073D4
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x12074D8 Offset: 0x12034D8 VA: 0x12074D8 Slot: 12
	public virtual void Invoke(object collection, object collectionItems) { }
}


// Namespace: System.Xml.Serialization
public sealed class XmlSerializationFixupCallback : MulticastDelegate // TypeDefIndex: 2820
{
	// Methods

	// RVA: 0x12074EC Offset: 0x12034EC VA: 0x12074EC
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x12075EC Offset: 0x12035EC VA: 0x12075EC Slot: 12
	public virtual void Invoke(object fixup) { }
}


// Namespace: System.Xml.Serialization
public abstract class XmlSerializationGeneratedCode // TypeDefIndex: 2821
{
	// Methods

	// RVA: 0x1207600 Offset: 0x1203600 VA: 0x1207600
	protected void .ctor() { }
}


// Namespace: System.Xml.Serialization
public sealed class XmlSerializationReadCallback : MulticastDelegate // TypeDefIndex: 2822
{
	// Methods

	// RVA: 0x1207608 Offset: 0x1203608 VA: 0x1207608
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x1207690 Offset: 0x1203690 VA: 0x1207690 Slot: 12
	public virtual object Invoke() { }
}


// Namespace: 
private class XmlSerializationReader.WriteCallbackInfo // TypeDefIndex: 2823
{
	// Fields
	public Type Type; // 0x10
	public string TypeName; // 0x18
	public string TypeNs; // 0x20
	public XmlSerializationReadCallback Callback; // 0x28

	// Methods

	// RVA: 0x1207D30 Offset: 0x1203D30 VA: 0x1207D30
	public void .ctor() { }
}


// Namespace: 
protected class XmlSerializationReader.CollectionFixup // TypeDefIndex: 2824
{
	// Fields
	private XmlSerializationCollectionFixupCallback callback; // 0x10
	private object collection; // 0x18
	private object collectionItems; // 0x20
	private string id; // 0x28

	// Methods

	// RVA: 0x120BC24 Offset: 0x1207C24 VA: 0x120BC24
	internal void .ctor(object collection, XmlSerializationCollectionFixupCallback callback, string id) { }
}


// Namespace: 
protected class XmlSerializationReader.Fixup // TypeDefIndex: 2825
{
	// Fields
	private object source; // 0x10
	private string[] ids; // 0x18
	private XmlSerializationFixupCallback callback; // 0x20

	// Methods

	// RVA: 0x120BC60 Offset: 0x1207C60 VA: 0x120BC60
	public void .ctor(object o, XmlSerializationFixupCallback callback, int count) { }
}


// Namespace: 
private class XmlSerializationReader.CollectionItemFixup // TypeDefIndex: 2826
{
	// Fields
	private Array list; // 0x10
	private int index; // 0x18
	private string id; // 0x20

	// Methods

	// RVA: 0x120A024 Offset: 0x1206024 VA: 0x120A024
	public void .ctor(Array list, int index, string id) { }
}


// Namespace: System.Xml.Serialization
public abstract class XmlSerializationReader : XmlSerializationGeneratedCode // TypeDefIndex: 2827
{
	// Fields
	private XmlDocument document; // 0x10
	private XmlReader reader; // 0x18
	private ArrayList fixups; // 0x20
	private Hashtable collFixups; // 0x28
	private ArrayList collItemFixups; // 0x30
	private Hashtable typesCallbacks; // 0x38
	private ArrayList noIDTargets; // 0x40
	private Hashtable targets; // 0x48
	private Hashtable delayedListFixups; // 0x50
	private XmlSerializer eventSource; // 0x58
	private int delayedFixupId; // 0x60
	private Hashtable referencedObjects; // 0x68
	private int readCount; // 0x70
	private int whileIterationCount; // 0x74
	private string w3SchemaNS; // 0x78
	private string w3InstanceNS; // 0x80
	private string w3InstanceNS2000; // 0x88
	private string w3InstanceNS1999; // 0x90
	private string soapNS; // 0x98
	private string wsdlNS; // 0xA0
	private string nullX; // 0xA8
	private string nil; // 0xB0
	private string typeX; // 0xB8
	private string arrayType; // 0xC0
	private XmlQualifiedName arrayQName; // 0xC8

	// Properties
	protected XmlDocument Document { get; }

	// Methods

	// RVA: 0x12076A4 Offset: 0x12036A4 VA: 0x12076A4
	internal void Initialize(XmlReader reader, XmlSerializer eventSource) { }

	// RVA: 0x12079C8 Offset: 0x12039C8 VA: 0x12079C8
	private ArrayList EnsureArrayList(ArrayList list) { }

	// RVA: 0x1207A24 Offset: 0x1203A24 VA: 0x1207A24
	private Hashtable EnsureHashtable(Hashtable hash) { }

	// RVA: 0x1207A80 Offset: 0x1203A80 VA: 0x1207A80
	protected void .ctor() { }

	// RVA: 0x1207A88 Offset: 0x1203A88 VA: 0x1207A88
	protected XmlDocument get_Document() { }

	// RVA: 0x1207B14 Offset: 0x1203B14 VA: 0x1207B14
	protected void AddFixup(XmlSerializationReader.CollectionFixup fixup) { }

	// RVA: 0x1207BC8 Offset: 0x1203BC8 VA: 0x1207BC8
	protected void AddFixup(XmlSerializationReader.Fixup fixup) { }

	// RVA: 0x1207C0C Offset: 0x1203C0C VA: 0x1207C0C
	private void AddFixup(XmlSerializationReader.CollectionItemFixup fixup) { }

	// RVA: 0x1207C50 Offset: 0x1203C50 VA: 0x1207C50
	protected void AddReadCallback(string name, string ns, Type type, XmlSerializationReadCallback read) { }

	// RVA: 0x1207D38 Offset: 0x1203D38 VA: 0x1207D38
	protected void AddTarget(string id, object o) { }

	// RVA: 0x1207DE0 Offset: 0x1203DE0 VA: 0x1207DE0
	private string CurrentTag() { }

	// RVA: 0x1207F40 Offset: 0x1203F40 VA: 0x1207F40
	protected Exception CreateReadOnlyCollectionException(string name) { }

	// RVA: 0x1207FD0 Offset: 0x1203FD0 VA: 0x1207FD0
	protected Exception CreateUnknownConstantException(string value, Type enumType) { }

	// RVA: 0x1208068 Offset: 0x1204068 VA: 0x1208068
	protected Exception CreateUnknownNodeException() { }

	// RVA: 0x12080FC Offset: 0x12040FC VA: 0x12080FC
	protected Exception CreateUnknownTypeException(XmlQualifiedName type) { }

	// RVA: 0x1208250 Offset: 0x1204250 VA: 0x1208250
	protected Array EnsureArrayIndex(Array a, int index, Type elementType) { }

	// RVA: 0x12082DC Offset: 0x12042DC VA: 0x12082DC
	protected bool GetNullAttr() { }

	// RVA: 0x1208384 Offset: 0x1204384 VA: 0x1208384
	protected object GetTarget(string id) { }

	// RVA: 0x120843C Offset: 0x120443C VA: 0x120843C
	private bool TargetReady(string id) { }

	// RVA: 0x1208458 Offset: 0x1204458 VA: 0x1208458
	protected XmlQualifiedName GetXsiType() { }

	// RVA: -1 Offset: -1 Slot: 4
	protected abstract void InitCallbacks();

	// RVA: -1 Offset: -1 Slot: 5
	protected abstract void InitIDs();

	// RVA: 0x120866C Offset: 0x120466C VA: 0x120866C
	protected bool IsXmlnsAttribute(string name) { }

	// RVA: 0x120870C Offset: 0x120470C VA: 0x120870C
	protected void ParseWsdlArrayType(XmlAttribute attr) { }

	// RVA: 0x1208890 Offset: 0x1204890 VA: 0x1208890
	protected XmlQualifiedName ReadElementQualifiedName() { }

	// RVA: 0x1208BB8 Offset: 0x1204BB8 VA: 0x1208BB8
	protected void ReadEndElement() { }

	// RVA: 0x1208C50 Offset: 0x1204C50 VA: 0x1208C50
	protected bool ReadNull() { }

	// RVA: 0x1208D4C Offset: 0x1204D4C VA: 0x1208D4C
	protected XmlQualifiedName ReadNullableQualifiedName() { }

	// RVA: 0x1208D74 Offset: 0x1204D74 VA: 0x1208D74
	protected string ReadNullableString() { }

	// RVA: 0x1208DBC Offset: 0x1204DBC VA: 0x1208DBC
	protected object ReadReferencedElement() { }

	// RVA: 0x12090E4 Offset: 0x12050E4 VA: 0x12090E4
	private XmlSerializationReader.WriteCallbackInfo GetCallbackInfo(XmlQualifiedName qname) { }

	// RVA: 0x1208E14 Offset: 0x1204E14 VA: 0x1208E14
	protected object ReadReferencedElement(string name, string ns) { }

	// RVA: 0x12091C0 Offset: 0x12051C0 VA: 0x12091C0
	private bool ReadList(out object resultList) { }

	// RVA: 0x120A064 Offset: 0x1206064 VA: 0x120A064
	protected void ReadReferencedElements() { }

	// RVA: 0x120AFA0 Offset: 0x1206FA0 VA: 0x120AFA0
	protected object ReadReferencingElement(out string fixupReference) { }

	// RVA: 0x120A018 Offset: 0x1206018 VA: 0x120A018
	protected object ReadReferencingElement(string name, string ns, out string fixupReference) { }

	// RVA: 0x120B004 Offset: 0x1207004 VA: 0x120B004
	protected object ReadReferencingElement(string name, string ns, bool elementCanBeType, out string fixupReference) { }

	// RVA: 0x120B310 Offset: 0x1207310 VA: 0x120B310
	protected IXmlSerializable ReadSerializable(IXmlSerializable serializable) { }

	// RVA: 0x120B4A0 Offset: 0x12074A0 VA: 0x120B4A0
	protected object ReadTypedPrimitive(XmlQualifiedName type) { }

	// RVA: 0x1209698 Offset: 0x1205698 VA: 0x1209698
	private object ReadTypedPrimitive(XmlQualifiedName qname, bool reportUnknown) { }

	// RVA: 0x120B720 Offset: 0x1207720 VA: 0x120B720
	protected XmlNode ReadXmlNode(bool wrapped) { }

	// RVA: 0x120B788 Offset: 0x1207788 VA: 0x120B788
	protected XmlDocument ReadXmlDocument(bool wrapped) { }

	// RVA: 0x120B8A4 Offset: 0x12078A4 VA: 0x120B8A4
	protected Array ShrinkArray(Array a, int length, Type elementType, bool isNullable) { }

	// RVA: 0x120898C Offset: 0x120498C VA: 0x120898C
	protected XmlQualifiedName ToXmlQualifiedName(string value) { }

	// RVA: 0x120B934 Offset: 0x1207934 VA: 0x120B934
	protected void UnknownAttribute(object o, XmlAttribute attr, string qnames) { }

	// RVA: 0x120BA90 Offset: 0x1207A90 VA: 0x120BA90
	protected void UnknownElement(object o, XmlElement elem, string qnames) { }

	// RVA: 0x1208D18 Offset: 0x1204D18 VA: 0x1208D18
	protected void UnknownNode(object o) { }

	// RVA: 0x120BBEC Offset: 0x1207BEC VA: 0x120BBEC
	protected void UnknownNode(object o, string qnames) { }

	// RVA: 0x120B4A8 Offset: 0x12074A8 VA: 0x120B4A8
	private void OnUnknownNode(XmlNode node, object o, string qnames) { }

	// RVA: 0x120AF0C Offset: 0x1206F0C VA: 0x120AF0C
	protected void UnreferencedObject(string id, object o) { }
}


// Namespace: 
private class XmlSerializationReaderInterpreter.FixupCallbackInfo // TypeDefIndex: 2828
{
	// Fields
	private XmlSerializationReaderInterpreter _sri; // 0x10
	private ClassMap _map; // 0x18
	private bool _isValueList; // 0x20

	// Methods

	// RVA: 0x12101CC Offset: 0x120C1CC VA: 0x12101CC
	public void .ctor(XmlSerializationReaderInterpreter sri, ClassMap map, bool isValueList) { }

	// RVA: 0x1211300 Offset: 0x120D300 VA: 0x1211300
	public void FixupMembers(object fixup) { }
}


// Namespace: 
private class XmlSerializationReaderInterpreter.ReaderCallbackInfo // TypeDefIndex: 2829
{
	// Fields
	private XmlSerializationReaderInterpreter _sri; // 0x10
	private XmlTypeMapping _typeMap; // 0x18

	// Methods

	// RVA: 0x120C0F0 Offset: 0x12080F0 VA: 0x120C0F0
	public void .ctor(XmlSerializationReaderInterpreter sri, XmlTypeMapping typeMap) { }

	// RVA: 0x1211328 Offset: 0x120D328 VA: 0x1211328
	internal object ReadObject() { }
}


// Namespace: System.Xml.Serialization
internal class XmlSerializationReaderInterpreter : XmlSerializationReader // TypeDefIndex: 2830
{
	// Fields
	private XmlMapping _typeMap; // 0xD0
	private SerializationFormat _format; // 0xD8
	private static readonly XmlQualifiedName AnyType; // 0x0
	private static readonly object[] empty_array; // 0x8

	// Methods

	// RVA: 0x120BCE0 Offset: 0x1207CE0 VA: 0x120BCE0
	public void .ctor(XmlMapping typeMap) { }

	// RVA: 0x120BD18 Offset: 0x1207D18 VA: 0x120BD18 Slot: 4
	protected override void InitCallbacks() { }

	// RVA: 0x120C11C Offset: 0x120811C VA: 0x120C11C Slot: 5
	protected override void InitIDs() { }

	// RVA: 0x120C120 Offset: 0x1208120 VA: 0x120C120
	public object ReadRoot() { }

	// RVA: 0x120C300 Offset: 0x1208300 VA: 0x120C300
	private object ReadEncodedObject(XmlTypeMapping typeMap) { }

	// RVA: 0x120C404 Offset: 0x1208404 VA: 0x120C404 Slot: 6
	protected virtual object ReadMessage(XmlMembersMapping typeMap) { }

	// RVA: 0x120C228 Offset: 0x1208228 VA: 0x120C228
	private object ReadRoot(XmlTypeMapping rootMap) { }

	// RVA: 0x120EE50 Offset: 0x120AE50 VA: 0x120EE50 Slot: 7
	protected virtual object ReadObject(XmlTypeMapping typeMap, bool isNullable, bool checkType) { }

	// RVA: 0x120F5A0 Offset: 0x120B5A0 VA: 0x120F5A0 Slot: 8
	protected virtual object ReadClassInstance(XmlTypeMapping typeMap, bool isNullable, bool checkType) { }

	// RVA: 0x120F888 Offset: 0x120B888 VA: 0x120F888 Slot: 9
	protected virtual void ReadClassInstanceMembers(XmlTypeMapping typeMap, object ob) { }

	// RVA: 0x120C9B0 Offset: 0x12089B0 VA: 0x120C9B0
	private void ReadAttributeMembers(ClassMap map, object ob, bool isValueList) { }

	// RVA: 0x120CDAC Offset: 0x1208DAC VA: 0x120CDAC
	private void ReadMembers(ClassMap map, object ob, bool isValueList, bool readBySoapOrder) { }

	// RVA: 0x120FF94 Offset: 0x120BF94 VA: 0x120FF94
	private void SetListMembersDefaults(ClassMap map, object ob, bool isValueList) { }

	// RVA: 0x12104FC Offset: 0x120C4FC VA: 0x12104FC
	internal void FixupMembers(ClassMap map, object obfixup, bool isValueList) { }

	// RVA: 0x12108FC Offset: 0x120C8FC VA: 0x12108FC Slot: 10
	protected virtual void ProcessUnknownAttribute(object target) { }

	// RVA: 0x1210930 Offset: 0x120C930 VA: 0x1210930 Slot: 11
	protected virtual void ProcessUnknownElement(object target) { }

	// RVA: 0x12100DC Offset: 0x120C0DC VA: 0x12100DC
	private bool IsReadOnly(XmlTypeMapMember member, TypeData memType, object ob, bool isValueList) { }

	// RVA: 0x120FA68 Offset: 0x120BA68 VA: 0x120FA68
	private void SetMemberValue(XmlTypeMapMember member, object ob, object value, bool isValueList) { }

	// RVA: 0x120C8F0 Offset: 0x12088F0 VA: 0x120C8F0
	private void SetMemberValueFromAttr(XmlTypeMapMember member, object ob, object value, bool isValueList) { }

	// RVA: 0x120FBF4 Offset: 0x120BBF4 VA: 0x120FBF4
	private object GetMemberValue(XmlTypeMapMember member, object ob, bool isValueList) { }

	// RVA: 0x12102A4 Offset: 0x120C2A4 VA: 0x12102A4
	private object ReadObjectElement(XmlTypeMapElementInfo elem) { }

	// RVA: 0x1210964 Offset: 0x120C964 VA: 0x1210964
	private object ReadPrimitiveValue(XmlTypeMapElementInfo elem) { }

	// RVA: 0x120F930 Offset: 0x120B930 VA: 0x120F930
	private object GetValueFromXmlString(string value, TypeData typeData, XmlTypeMapping typeMap) { }

	// RVA: 0x120EF34 Offset: 0x120AF34 VA: 0x120EF34
	private object ReadListElement(XmlTypeMapping typeMap, bool isNullable, object list, bool canCreateInstance) { }

	// RVA: 0x1210A7C Offset: 0x120CA7C VA: 0x1210A7C
	private object ReadListString(XmlTypeMapping typeMap, string values) { }

	// RVA: 0x120FCC0 Offset: 0x120BCC0 VA: 0x120FCC0
	private void AddListValue(TypeData listType, ref object list, int index, object value, bool canCreateInstance) { }

	// RVA: 0x120F87C Offset: 0x120B87C VA: 0x120F87C
	private static object CreateInstance(Type type, bool nonPublic) { }

	// RVA: 0x120C88C Offset: 0x120888C VA: 0x120C88C
	private object CreateInstance(Type type) { }

	// RVA: 0x1210208 Offset: 0x120C208 VA: 0x1210208
	private object CreateList(Type listType) { }

	// RVA: 0x1210140 Offset: 0x120C140 VA: 0x1210140
	private object InitializeList(TypeData listType) { }

	// RVA: 0x1210DDC Offset: 0x120CDDC VA: 0x1210DDC
	private void FillList(object list, object items) { }

	// RVA: 0x1210DEC Offset: 0x120CDEC VA: 0x1210DEC
	private void CopyEnumerableList(object source, object dest) { }

	// RVA: 0x120EE34 Offset: 0x120AE34 VA: 0x120EE34
	private object ReadXmlNodeElement(XmlTypeMapping typeMap, bool isNullable) { }

	// RVA: 0x121043C Offset: 0x120C43C VA: 0x121043C
	private object ReadXmlNode(TypeData type, bool wrapped) { }

	// RVA: 0x120F2E4 Offset: 0x120B2E4 VA: 0x120F2E4
	private object ReadPrimitiveElement(XmlTypeMapping typeMap, bool isNullable) { }

	// RVA: 0x120F39C Offset: 0x120B39C VA: 0x120F39C
	private object ReadEnumElement(XmlTypeMapping typeMap, bool isNullable) { }

	// RVA: 0x1210CAC Offset: 0x120CCAC VA: 0x1210CAC
	private object GetEnumValue(XmlTypeMapping typeMap, string val) { }

	// RVA: 0x120F40C Offset: 0x120B40C VA: 0x120F40C
	private object ReadXmlSerializableElement(XmlTypeMapping typeMap, bool isNullable) { }

	// RVA: 0x1211224 Offset: 0x120D224 VA: 0x1211224
	private static void .cctor() { }
}


// Namespace: System.Xml.Serialization
public sealed class XmlSerializationWriteCallback : MulticastDelegate // TypeDefIndex: 2831
{
	// Methods

	// RVA: 0x1211358 Offset: 0x120D358 VA: 0x1211358
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x1211458 Offset: 0x120D458 VA: 0x1211458 Slot: 12
	public virtual void Invoke(object o) { }
}


// Namespace: 
private class XmlSerializationWriter.WriteCallbackInfo // TypeDefIndex: 2832
{
	// Fields
	public Type Type; // 0x10
	public string TypeName; // 0x18
	public string TypeNs; // 0x20
	public XmlSerializationWriteCallback Callback; // 0x28

	// Methods

	// RVA: 0x12146BC Offset: 0x12106BC VA: 0x12146BC
	public void .ctor() { }
}


// Namespace: System.Xml.Serialization
public abstract class XmlSerializationWriter : XmlSerializationGeneratedCode // TypeDefIndex: 2833
{
	// Fields
	private ObjectIDGenerator idGenerator; // 0x10
	private int qnameCount; // 0x18
	private bool topLevelElement; // 0x1C
	private ArrayList namespaces; // 0x20
	private XmlWriter writer; // 0x28
	private Queue referencedElements; // 0x30
	private Hashtable callbacks; // 0x38
	private Hashtable serializedObjects; // 0x40

	// Methods

	// RVA: 0x121146C Offset: 0x120D46C VA: 0x121146C
	protected void .ctor() { }

	// RVA: 0x12114D4 Offset: 0x120D4D4 VA: 0x12114D4
	internal void Initialize(XmlWriter writer, XmlSerializerNamespaces nss) { }

	// RVA: 0x12115EC Offset: 0x120D5EC VA: 0x12115EC
	protected void AddWriteCallback(Type type, string typeName, string typeNs, XmlSerializationWriteCallback callback) { }

	// RVA: 0x12116C0 Offset: 0x120D6C0 VA: 0x12116C0
	protected Exception CreateUnknownAnyElementException(string name, string ns) { }

	// RVA: 0x1211758 Offset: 0x120D758 VA: 0x1211758
	protected Exception CreateUnknownTypeException(object o) { }

	// RVA: 0x121177C Offset: 0x120D77C VA: 0x121177C
	protected Exception CreateUnknownTypeException(Type type) { }

	// RVA: 0x121180C Offset: 0x120D80C VA: 0x121180C
	protected string FromXmlQualifiedName(XmlQualifiedName xmlQualifiedName) { }

	// RVA: 0x1211998 Offset: 0x120D998 VA: 0x1211998
	private string GetId(object o, bool addToReferencesList) { }

	// RVA: 0x1211AB4 Offset: 0x120DAB4 VA: 0x1211AB4
	private bool AlreadyQueued(object ob) { }

	// RVA: 0x1211AE8 Offset: 0x120DAE8 VA: 0x1211AE8
	private string GetNamespacePrefix(string ns) { }

	// RVA: 0x12118CC Offset: 0x120D8CC VA: 0x12118CC
	private string GetQualifiedName(string name, string ns) { }

	// RVA: -1 Offset: -1 Slot: 4
	protected abstract void InitCallbacks();

	// RVA: 0x1211C2C Offset: 0x120DC2C VA: 0x1211C2C
	protected void TopLevelElement() { }

	// RVA: 0x1211C38 Offset: 0x120DC38 VA: 0x1211C38
	protected void WriteAttribute(string localName, string ns, string value) { }

	// RVA: 0x1211C04 Offset: 0x120DC04 VA: 0x1211C04
	protected void WriteAttribute(string prefix, string localName, string ns, string value) { }

	// RVA: 0x1211C4C Offset: 0x120DC4C VA: 0x1211C4C
	private void WriteXmlNode(XmlNode node) { }

	// RVA: 0x1211CEC Offset: 0x120DCEC VA: 0x1211CEC
	protected void WriteElementEncoded(XmlNode node, string name, string ns, bool isNullable, bool any) { }

	// RVA: 0x1211ED4 Offset: 0x120DED4 VA: 0x1211ED4
	protected void WriteElementLiteral(XmlNode node, string name, string ns, bool isNullable, bool any) { }

	// RVA: 0x12120C0 Offset: 0x120E0C0 VA: 0x12120C0
	protected void WriteElementQualifiedName(string localName, string ns, XmlQualifiedName value) { }

	// RVA: 0x12120C8 Offset: 0x120E0C8 VA: 0x12120C8
	protected void WriteElementQualifiedName(string localName, string ns, XmlQualifiedName value, XmlQualifiedName xsiType) { }

	// RVA: 0x12122D4 Offset: 0x120E2D4 VA: 0x12122D4
	protected void WriteElementString(string localName, string ns, string value) { }

	// RVA: 0x12122DC Offset: 0x120E2DC VA: 0x12122DC
	protected void WriteElementString(string localName, string ns, string value, XmlQualifiedName xsiType) { }

	// RVA: 0x12122B4 Offset: 0x120E2B4 VA: 0x12122B4
	protected void WriteEndElement() { }

	// RVA: 0x121242C Offset: 0x120E42C VA: 0x121242C
	protected void WriteEndElement(object o) { }

	// RVA: 0x121246C Offset: 0x120E46C VA: 0x121246C
	protected void WriteNamespaceDeclarations(XmlSerializerNamespaces xmlns) { }

	// RVA: 0x1212898 Offset: 0x120E898 VA: 0x1212898
	protected void WriteNullableQualifiedNameEncoded(string name, string ns, XmlQualifiedName value, XmlQualifiedName xsiType) { }

	// RVA: 0x1212950 Offset: 0x120E950 VA: 0x1212950
	protected void WriteNullableQualifiedNameLiteral(string name, string ns, XmlQualifiedName value) { }

	// RVA: 0x1212A04 Offset: 0x120EA04 VA: 0x1212A04
	protected void WriteNullableStringEncoded(string name, string ns, string value, XmlQualifiedName xsiType) { }

	// RVA: 0x1212A10 Offset: 0x120EA10 VA: 0x1212A10
	protected void WriteNullableStringLiteral(string name, string ns, string value) { }

	// RVA: 0x1211E14 Offset: 0x120DE14 VA: 0x1211E14
	protected void WriteNullTagEncoded(string name, string ns) { }

	// RVA: 0x1211FFC Offset: 0x120DFFC VA: 0x1211FFC
	protected void WriteNullTagLiteral(string name, string ns) { }

	// RVA: 0x1212A20 Offset: 0x120EA20 VA: 0x1212A20
	protected void WritePotentiallyReferencingElement(string n, string ns, object o, Type ambientType, bool suppressReference, bool isNullable) { }

	// RVA: 0x1213024 Offset: 0x120F024 VA: 0x1213024
	protected void WriteReferencedElements() { }

	// RVA: 0x1212F30 Offset: 0x120EF30 VA: 0x1212F30
	private bool IsPrimitiveArray(TypeData td) { }

	// RVA: 0x1213240 Offset: 0x120F240 VA: 0x1213240
	private void WriteArray(object o, TypeData td) { }

	// RVA: 0x121353C Offset: 0x120F53C VA: 0x121353C
	protected void WriteReferencingElement(string n, string ns, object o, bool isNullable) { }

	// RVA: 0x1212EB8 Offset: 0x120EEB8 VA: 0x1212EB8
	private void CheckReferenceQueue() { }

	// RVA: 0x1213698 Offset: 0x120F698 VA: 0x1213698
	protected void WriteSerializable(IXmlSerializable serializable, string name, string ns, bool isNullable) { }

	// RVA: 0x12136A4 Offset: 0x120F6A4 VA: 0x12136A4
	protected void WriteSerializable(IXmlSerializable serializable, string name, string ns, bool isNullable, bool wrapped) { }

	// RVA: 0x12137E0 Offset: 0x120F7E0 VA: 0x12137E0
	protected void WriteStartDocument() { }

	// RVA: 0x12121E4 Offset: 0x120E1E4 VA: 0x12121E4
	protected void WriteStartElement(string name, string ns) { }

	// RVA: 0x1212EA8 Offset: 0x120EEA8 VA: 0x1212EA8
	protected void WriteStartElement(string name, string ns, bool writePrefixed) { }

	// RVA: 0x1213834 Offset: 0x120F834 VA: 0x1213834
	protected void WriteStartElement(string name, string ns, object o) { }

	// RVA: 0x1213828 Offset: 0x120F828 VA: 0x1213828
	protected void WriteStartElement(string name, string ns, object o, bool writePrefixed) { }

	// RVA: 0x1213840 Offset: 0x120F840 VA: 0x1213840
	private void WriteStartElement(string name, string ns, object o, bool writePrefixed, ICollection namespaces) { }

	// RVA: 0x1214140 Offset: 0x1210140 VA: 0x1214140
	protected void WriteTypedPrimitive(string name, string ns, object o, bool xsiType) { }

	// RVA: 0x121440C Offset: 0x121040C VA: 0x121440C
	protected void WriteValue(string value) { }

	// RVA: 0x121443C Offset: 0x121043C VA: 0x121443C
	protected void WriteXmlAttribute(XmlNode node, object container) { }

	// RVA: 0x12121F4 Offset: 0x120E1F4 VA: 0x12121F4
	protected void WriteXsiType(string name, string ns) { }
}


// Namespace: 
private class XmlSerializationWriterInterpreter.CallbackInfo // TypeDefIndex: 2834
{
	// Fields
	private XmlSerializationWriterInterpreter _swi; // 0x10
	private XmlTypeMapping _typeMap; // 0x18

	// Methods

	// RVA: 0x1214B18 Offset: 0x1210B18 VA: 0x1214B18
	public void .ctor(XmlSerializationWriterInterpreter swi, XmlTypeMapping typeMap) { }

	// RVA: 0x121AFF8 Offset: 0x1216FF8 VA: 0x121AFF8
	internal void WriteObject(object ob) { }

	// RVA: 0x121B048 Offset: 0x1217048 VA: 0x121B048
	internal void WriteEnum(object ob) { }
}


// Namespace: System.Xml.Serialization
internal class XmlSerializationWriterInterpreter : XmlSerializationWriter // TypeDefIndex: 2835
{
	// Fields
	private XmlMapping _typeMap; // 0x48
	private SerializationFormat _format; // 0x50

	// Methods

	// RVA: 0x12146C4 Offset: 0x12106C4 VA: 0x12146C4
	public void .ctor(XmlMapping typeMap) { }

	// RVA: 0x12146FC Offset: 0x12106FC VA: 0x12146FC Slot: 4
	protected override void InitCallbacks() { }

	// RVA: 0x1214B44 Offset: 0x1210B44 VA: 0x1214B44
	public void WriteRoot(object ob) { }

	// RVA: 0x1214D58 Offset: 0x1210D58 VA: 0x1214D58 Slot: 5
	protected virtual void WriteObject(XmlTypeMapping typeMap, object ob, string element, string namesp, bool isNullable, bool needType, bool writeWrappingElem) { }

	// RVA: 0x12159FC Offset: 0x12119FC VA: 0x12159FC Slot: 6
	protected virtual void WriteMessage(XmlMembersMapping membersMap, object[] parameters) { }

	// RVA: 0x1215C30 Offset: 0x1211C30 VA: 0x1215C30 Slot: 7
	protected virtual void WriteObjectElement(XmlTypeMapping typeMap, object ob, string element, string namesp) { }

	// RVA: 0x1215E68 Offset: 0x1211E68 VA: 0x1215E68 Slot: 8
	protected virtual void WriteObjectElementAttributes(XmlTypeMapping typeMap, object ob) { }

	// RVA: 0x121666C Offset: 0x121266C VA: 0x121666C Slot: 9
	protected virtual void WriteObjectElementElements(XmlTypeMapping typeMap, object ob) { }

	// RVA: 0x1215BEC Offset: 0x1211BEC VA: 0x1215BEC
	private void WriteMembers(ClassMap map, object ob, bool isValueList) { }

	// RVA: 0x1215F0C Offset: 0x1211F0C VA: 0x1215F0C
	private void WriteAttributeMembers(ClassMap map, object ob, bool isValueList) { }

	// RVA: 0x1216710 Offset: 0x1212710 VA: 0x1216710
	private void WriteElementMembers(ClassMap map, object ob, bool isValueList) { }

	// RVA: 0x1217094 Offset: 0x1213094 VA: 0x1217094
	private object GetMemberValue(XmlTypeMapMember member, object ob, bool isValueList) { }

	// RVA: 0x1216E6C Offset: 0x1212E6C VA: 0x1216E6C
	private bool MemberHasValue(XmlTypeMapMember member, object ob, bool isValueList) { }

	// RVA: 0x121781C Offset: 0x121381C VA: 0x121781C
	private void WriteMemberElement(XmlTypeMapElementInfo elem, object memberValue) { }

	// RVA: 0x1215560 Offset: 0x1211560 VA: 0x1215560
	internal static object ImplicitConvert(object obj, Type type) { }

	// RVA: 0x1219524 Offset: 0x1215524 VA: 0x1219524
	private void WritePrimitiveValueLiteral(object memberValue, string name, string ns, XmlTypeMapping mappedType, TypeData typeData, bool wrapped, bool isNullable) { }

	// RVA: 0x121982C Offset: 0x121582C VA: 0x121982C
	private void WritePrimitiveValueEncoded(object memberValue, string name, string ns, XmlQualifiedName xsiType, XmlTypeMapping mappedType, TypeData typeData, bool wrapped, bool isNullable) { }

	// RVA: 0x1219AA8 Offset: 0x1215AA8 VA: 0x1219AA8 Slot: 10
	protected virtual void WriteListElement(XmlTypeMapping typeMap, object ob, string element, string namesp) { }

	// RVA: 0x1217D90 Offset: 0x1213D90 VA: 0x1217D90
	private void WriteListContent(object container, TypeData listType, ListMap map, object ob, StringBuilder targetString) { }

	// RVA: 0x1219C90 Offset: 0x1215C90 VA: 0x1219C90
	private int GetListCount(TypeData listType, object ob) { }

	// RVA: 0x121858C Offset: 0x121458C VA: 0x121858C
	private void WriteAnyElementContent(XmlTypeMapMemberAnyElement member, object memberValue) { }

	// RVA: 0x121AB54 Offset: 0x1216B54 VA: 0x121AB54 Slot: 11
	protected virtual void WritePrimitiveElement(XmlTypeMapping typeMap, object ob, string element, string namesp) { }

	// RVA: 0x121AB90 Offset: 0x1216B90 VA: 0x121AB90 Slot: 12
	protected virtual void WriteEnumElement(XmlTypeMapping typeMap, object ob, string element, string namesp) { }

	// RVA: 0x1217570 Offset: 0x1213570 VA: 0x1217570
	private string GetStringValue(XmlTypeMapping typeMap, TypeData type, object value) { }

	// RVA: 0x121ABC0 Offset: 0x1216BC0 VA: 0x121ABC0
	private string GetEnumXmlValue(XmlTypeMapping typeMap, object ob) { }
}


// Namespace: 
internal class XmlSerializer.SerializerData // TypeDefIndex: 2836
{
	// Fields
	public MethodInfo ReaderMethod; // 0x10
	public Type WriterType; // 0x18
	public MethodInfo WriterMethod; // 0x20
	public XmlSerializerImplementation Implementation; // 0x28

	// Methods

	// RVA: 0x121BFAC Offset: 0x1217FAC VA: 0x121BFAC
	public XmlSerializationWriter CreateWriter() { }
}


// Namespace: System.Xml.Serialization
public class XmlSerializer // TypeDefIndex: 2837
{
	// Fields
	private static int generationThreshold; // 0x0
	private static bool backgroundGeneration; // 0x4
	private static bool deleteTempFiles; // 0x5
	private static bool generatorFallback; // 0x6
	private bool customSerializer; // 0x10
	private XmlMapping typeMapping; // 0x18
	private XmlSerializer.SerializerData serializerData; // 0x20
	private static Hashtable serializerTypes; // 0x8
	private UnreferencedObjectEventHandler onUnreferencedObject; // 0x28
	private XmlAttributeEventHandler onUnknownAttribute; // 0x30
	private XmlElementEventHandler onUnknownElement; // 0x38
	private XmlNodeEventHandler onUnknownNode; // 0x40

	// Methods

	// RVA: 0x121B098 Offset: 0x1217098 VA: 0x121B098
	private static void .cctor() { }

	// RVA: 0x121B13C Offset: 0x121713C VA: 0x121B13C
	public void .ctor(Type type, XmlAttributeOverrides overrides, Type[] extraTypes, XmlRootAttribute root, string defaultNamespace) { }

	// RVA: 0x121B2C4 Offset: 0x12172C4 VA: 0x121B2C4 Slot: 4
	internal virtual void OnUnknownAttribute(XmlAttributeEventArgs e) { }

	// RVA: 0x121B2EC Offset: 0x12172EC VA: 0x121B2EC Slot: 5
	internal virtual void OnUnknownElement(XmlElementEventArgs e) { }

	// RVA: 0x121B314 Offset: 0x1217314 VA: 0x121B314 Slot: 6
	internal virtual void OnUnknownNode(XmlNodeEventArgs e) { }

	// RVA: 0x121B33C Offset: 0x121733C VA: 0x121B33C Slot: 7
	internal virtual void OnUnreferencedObject(UnreferencedObjectEventArgs e) { }

	// RVA: 0x121B364 Offset: 0x1217364 VA: 0x121B364 Slot: 8
	protected virtual XmlSerializationReader CreateReader() { }

	// RVA: 0x121B39C Offset: 0x121739C VA: 0x121B39C Slot: 9
	protected virtual XmlSerializationWriter CreateWriter() { }

	// RVA: 0x121B3D4 Offset: 0x12173D4 VA: 0x121B3D4
	public object Deserialize(TextReader textReader) { }

	// RVA: 0x121B468 Offset: 0x1217468 VA: 0x121B468
	public object Deserialize(XmlReader xmlReader) { }

	// RVA: 0x121B534 Offset: 0x1217534 VA: 0x121B534 Slot: 10
	protected virtual object Deserialize(XmlSerializationReader reader) { }

	// RVA: 0x121B818 Offset: 0x1217818 VA: 0x121B818 Slot: 11
	protected virtual void Serialize(object o, XmlSerializationWriter writer) { }

	// RVA: 0x121BA04 Offset: 0x1217A04 VA: 0x121BA04
	public void Serialize(TextWriter textWriter, object o) { }

	// RVA: 0x121BDA0 Offset: 0x1217DA0 VA: 0x121BDA0
	public void Serialize(XmlWriter xmlWriter, object o) { }

	// RVA: 0x121BA94 Offset: 0x1217A94 VA: 0x121BA94
	public void Serialize(XmlWriter xmlWriter, object o, XmlSerializerNamespaces namespaces) { }

	// RVA: 0x121BDA8 Offset: 0x1217DA8 VA: 0x121BDA8
	private XmlSerializationWriter CreateWriter(XmlMapping typeMapping) { }

	// RVA: 0x121B4D8 Offset: 0x12174D8 VA: 0x121B4D8
	private XmlSerializationReader CreateReader(XmlMapping typeMapping) { }
}


// Namespace: System.Xml.Serialization
public class XmlSerializerFactory // TypeDefIndex: 2838
{
	// Fields
	private static Hashtable serializersBySource; // 0x0

	// Methods

	// RVA: 0x121C084 Offset: 0x1218084 VA: 0x121C084
	public void .ctor() { }

	// RVA: 0x121C08C Offset: 0x121808C VA: 0x121C08C
	public XmlSerializer CreateSerializer(Type type) { }

	// RVA: 0x121C30C Offset: 0x121830C VA: 0x121C30C
	public XmlSerializer CreateSerializer(Type type, XmlRootAttribute root) { }

	// RVA: 0x121C0A0 Offset: 0x12180A0 VA: 0x121C0A0
	public XmlSerializer CreateSerializer(Type type, XmlAttributeOverrides overrides, Type[] extraTypes, XmlRootAttribute root, string defaultNamespace) { }

	// RVA: 0x121C320 Offset: 0x1218320 VA: 0x121C320
	private static void .cctor() { }
}


// Namespace: System.Xml.Serialization
public abstract class XmlSerializerImplementation // TypeDefIndex: 2839
{
	// Properties
	public virtual XmlSerializationWriter Writer { get; }

	// Methods

	// RVA: 0x121C390 Offset: 0x1218390 VA: 0x121C390 Slot: 4
	public virtual XmlSerializationWriter get_Writer() { }
}


// Namespace: System.Xml.Serialization
[Usage(10624)]
public class XmlTextAttribute : Attribute // TypeDefIndex: 2840
{
	// Fields
	private string dataType; // 0x10
	private Type type; // 0x18

	// Properties
	public string DataType { get; }

	// Methods

	// RVA: 0x121C3C8 Offset: 0x12183C8 VA: 0x121C3C8
	public string get_DataType() { }

	// RVA: 0x121C41C Offset: 0x121841C VA: 0x121C41C
	internal void AddKeyHash(StringBuilder sb) { }
}


// Namespace: System.Xml.Serialization
[Usage(1052)]
public class XmlTypeAttribute : Attribute // TypeDefIndex: 2841
{
	// Fields
	private bool includeInSchema; // 0x10
	private string ns; // 0x18
	private string typeName; // 0x20

	// Properties
	public string TypeName { get; }

	// Methods

	// RVA: 0x121C4AC Offset: 0x12184AC VA: 0x121C4AC
	public string get_TypeName() { }

	// RVA: 0x121C500 Offset: 0x1218500 VA: 0x121C500
	internal void AddKeyHash(StringBuilder sb) { }
}


// Namespace: System.Xml.Serialization
internal class XmlTypeMapElementInfo // TypeDefIndex: 2842
{
	// Fields
	private string _elementName; // 0x10
	private string _namespace; // 0x18
	private XmlSchemaForm _form; // 0x20
	private XmlTypeMapMember _member; // 0x28
	private object _choiceValue; // 0x30
	private bool _isNullable; // 0x38
	private int _nestingLevel; // 0x3C
	private XmlTypeMapping _mappedType; // 0x40
	private TypeData _type; // 0x48
	private bool _wrappedElement; // 0x50
	private int _explicitOrder; // 0x54

	// Properties
	public string ElementName { set; }
	public string Namespace { set; }
	public string DataTypeNamespace { get; }
	public string DataTypeName { get; }
	public XmlSchemaForm Form { set; }
	public bool IsNullable { set; }
	public bool MultiReferenceType { get; }
	public bool IsTextElement { get; set; }
	public bool IsUnnamedAnyElement { get; set; }
	public int ExplicitOrder { set; }

	// Methods

	// RVA: 0x121C5A4 Offset: 0x12185A4 VA: 0x121C5A4
	public void .ctor(XmlTypeMapMember member, TypeData type) { }

	// RVA: 0x121C650 Offset: 0x1218650 VA: 0x121C650
	public void set_ElementName(string value) { }

	// RVA: 0x121C658 Offset: 0x1218658 VA: 0x121C658
	public void set_Namespace(string value) { }

	// RVA: 0x12197A4 Offset: 0x12157A4 VA: 0x12197A4
	public string get_DataTypeNamespace() { }

	// RVA: 0x1219774 Offset: 0x1215774 VA: 0x1219774
	public string get_DataTypeName() { }

	// RVA: 0x121C660 Offset: 0x1218660 VA: 0x121C660
	public void set_Form(XmlSchemaForm value) { }

	// RVA: 0x121C668 Offset: 0x1218668 VA: 0x121C668
	public void set_IsNullable(bool value) { }

	// RVA: 0x121C674 Offset: 0x1218674 VA: 0x121C674
	public bool get_MultiReferenceType() { }

	// RVA: 0x121C694 Offset: 0x1218694 VA: 0x121C694
	public bool get_IsTextElement() { }

	// RVA: 0x121C6E0 Offset: 0x12186E0 VA: 0x121C6E0
	public void set_IsTextElement(bool value) { }

	// RVA: 0x121C79C Offset: 0x121879C VA: 0x121C79C
	public bool get_IsUnnamedAnyElement() { }

	// RVA: 0x121C7F0 Offset: 0x12187F0 VA: 0x121C7F0
	public void set_IsUnnamedAnyElement(bool value) { }

	// RVA: 0x121C890 Offset: 0x1218890 VA: 0x121C890
	public void set_ExplicitOrder(int value) { }

	// RVA: 0x121C898 Offset: 0x1218898 VA: 0x121C898 Slot: 0
	public override bool Equals(object other) { }

	// RVA: 0x121C9D0 Offset: 0x12189D0 VA: 0x121C9D0 Slot: 2
	public override int GetHashCode() { }
}


// Namespace: System.Xml.Serialization
internal class XmlTypeMapElementInfoList : ArrayList // TypeDefIndex: 2843
{
	// Methods

	// RVA: 0x121C9D8 Offset: 0x12189D8 VA: 0x121C9D8
	public void .ctor() { }
}


// Namespace: System.Xml.Serialization
internal class XmlTypeMapMember // TypeDefIndex: 2844
{
	// Fields
	private string _name; // 0x10
	private int _index; // 0x18
	private int _globalIndex; // 0x1C
	private int _specifiedGlobalIndex; // 0x20
	private TypeData _typeData; // 0x28
	private MemberInfo _member; // 0x30
	private MemberInfo _specifiedMember; // 0x38
	private MethodInfo _shouldSerialize; // 0x40
	private object _defaultValue; // 0x48
	private int _flags; // 0x50

	// Properties
	public bool IsOptionalValueType { get; set; }
	public bool IsReturnValue { get; set; }

	// Methods

	// RVA: 0x121C9E0 Offset: 0x12189E0 VA: 0x121C9E0
	public void .ctor() { }

	// RVA: 0x121CA50 Offset: 0x1218A50 VA: 0x121CA50
	public bool IsReadOnly(Type type) { }

	// RVA: 0x121CD40 Offset: 0x1218D40 VA: 0x121CD40
	public static object GetValue(object ob, string name) { }

	// RVA: 0x1215D58 Offset: 0x1211D58 VA: 0x1215D58
	public object GetValue(object ob) { }

	// RVA: 0x121CE5C Offset: 0x1218E5C VA: 0x121CE5C
	public void SetValue(object ob, object value) { }

	// RVA: 0x121CF90 Offset: 0x1218F90 VA: 0x121CF90
	public static void SetValue(object ob, string name, object value) { }

	// RVA: 0x121CB04 Offset: 0x1218B04 VA: 0x121CB04
	private void InitMember(Type type) { }

	// RVA: 0x12192E0 Offset: 0x12152E0 VA: 0x12192E0
	public bool get_IsOptionalValueType() { }

	// RVA: 0x121D0C0 Offset: 0x12190C0 VA: 0x121D0C0
	public void set_IsOptionalValueType(bool value) { }

	// RVA: 0x121D0E0 Offset: 0x12190E0 VA: 0x121D0E0
	public bool get_IsReturnValue() { }

	// RVA: 0x121D0EC Offset: 0x12190EC VA: 0x121D0EC
	public void set_IsReturnValue(bool value) { }

	// RVA: 0x121D11C Offset: 0x121911C VA: 0x121D11C
	public void CheckOptionalValueType(Type type) { }

	// RVA: 0x12192EC Offset: 0x12152EC VA: 0x12192EC
	public bool GetValueSpecified(object ob) { }

	// RVA: 0x121D198 Offset: 0x1219198 VA: 0x121D198
	public void SetValueSpecified(object ob, bool value) { }
}


// Namespace: System.Xml.Serialization
internal class XmlTypeMapMemberAttribute : XmlTypeMapMember // TypeDefIndex: 2845
{
	// Fields
	private string _attributeName; // 0x58
	private string _namespace; // 0x60
	private XmlSchemaForm _form; // 0x68
	private XmlTypeMapping _mappedType; // 0x70

	// Methods

	// RVA: 0x121D40C Offset: 0x121940C VA: 0x121D40C
	public void .ctor() { }
}


// Namespace: System.Xml.Serialization
internal class XmlTypeMapMemberElement : XmlTypeMapMember // TypeDefIndex: 2846
{
	// Fields
	private XmlTypeMapElementInfoList _elementInfo; // 0x58
	private string _choiceMember; // 0x60
	private bool _isTextCollector; // 0x68
	private TypeData _choiceTypeData; // 0x70

	// Properties
	public XmlTypeMapElementInfoList ElementInfo { get; }

	// Methods

	// RVA: 0x121D458 Offset: 0x1219458 VA: 0x121D458
	public void .ctor() { }

	// RVA: 0x12177B8 Offset: 0x12137B8 VA: 0x12177B8
	public XmlTypeMapElementInfoList get_ElementInfo() { }

	// RVA: 0x1218BE4 Offset: 0x1214BE4 VA: 0x1218BE4
	public XmlTypeMapElementInfo FindElement(object ob, object memberValue) { }

	// RVA: 0x121D45C Offset: 0x121945C VA: 0x121D45C
	public void SetChoice(object ob, object choice) { }
}


// Namespace: System.Xml.Serialization
internal class XmlTypeMapMemberList : XmlTypeMapMemberElement // TypeDefIndex: 2847
{
	// Methods

	// RVA: 0x121D46C Offset: 0x121946C VA: 0x121D46C
	public void .ctor() { }
}


// Namespace: System.Xml.Serialization
internal class XmlTypeMapMemberExpandable : XmlTypeMapMemberElement // TypeDefIndex: 2848
{
	// Fields
	private int _flatArrayIndex; // 0x78

	// Methods

	// RVA: 0x121D470 Offset: 0x1219470 VA: 0x121D470
	public void .ctor() { }
}


// Namespace: System.Xml.Serialization
internal class XmlTypeMapMemberFlatList : XmlTypeMapMemberExpandable // TypeDefIndex: 2849
{
	// Fields
	private ListMap _listMap; // 0x80

	// Methods

	// RVA: 0x121D474 Offset: 0x1219474 VA: 0x121D474
	public void .ctor() { }
}


// Namespace: System.Xml.Serialization
internal class XmlTypeMapMemberAnyElement : XmlTypeMapMemberExpandable // TypeDefIndex: 2850
{
	// Properties
	public bool IsDefaultAny { get; }

	// Methods

	// RVA: 0x121A820 Offset: 0x1216820 VA: 0x121A820
	public bool IsElementDefined(string name, string ns) { }

	// RVA: 0x121D478 Offset: 0x1219478 VA: 0x121D478
	public bool get_IsDefaultAny() { }

	// RVA: 0x121D75C Offset: 0x121975C VA: 0x121D75C
	public void .ctor() { }
}


// Namespace: System.Xml.Serialization
internal class XmlTypeMapMemberAnyAttribute : XmlTypeMapMember // TypeDefIndex: 2851
{
	// Methods

	// RVA: 0x121D760 Offset: 0x1219760 VA: 0x121D760
	public void .ctor() { }
}


// Namespace: System.Xml.Serialization
internal class XmlTypeMapMemberNamespaces : XmlTypeMapMember // TypeDefIndex: 2852
{
	// Methods

	// RVA: 0x121D764 Offset: 0x1219764 VA: 0x121D764
	public void .ctor() { }
}


// Namespace: System.Xml.Serialization
public class XmlTypeMapping : XmlMapping // TypeDefIndex: 2853
{
	// Fields
	private string xmlType; // 0x48
	private string xmlTypeNamespace; // 0x50
	private TypeData type; // 0x58
	private XmlTypeMapping baseMap; // 0x60
	private bool multiReferenceType; // 0x68
	private bool includeInSchema; // 0x69
	private bool isNullable; // 0x6A
	private bool isAny; // 0x6B
	private ArrayList _derivedTypes; // 0x70

	// Properties
	public string TypeFullName { get; }
	internal string XmlTypeNamespace { get; }
	internal bool HasXmlTypeNamespace { get; }

	// Methods

	// RVA: 0x121D768 Offset: 0x1219768 VA: 0x121D768
	internal void .ctor(string elementName, string ns, TypeData typeData, string xmlType, string xmlTypeNamespace) { }

	// RVA: 0x121AC68 Offset: 0x1216C68 VA: 0x121AC68
	public string get_TypeFullName() { }

	// RVA: 0x12159A8 Offset: 0x12119A8 VA: 0x12159A8
	internal string get_XmlTypeNamespace() { }

	// RVA: 0x121D810 Offset: 0x1219810 VA: 0x121D810
	internal bool get_HasXmlTypeNamespace() { }

	// RVA: 0x1215838 Offset: 0x1211838 VA: 0x1215838
	internal XmlTypeMapping GetRealTypeMap(Type objectType) { }

	// RVA: 0x121D820 Offset: 0x1219820 VA: 0x121D820
	internal XmlTypeMapping GetRealElementMap(string name, string ens) { }

	// RVA: 0x121DBE4 Offset: 0x1219BE4 VA: 0x121DBE4
	internal void UpdateRoot(XmlQualifiedName qname) { }
}


// Namespace: System.Xml.Serialization
internal class XmlSerializableMapping : XmlTypeMapping // TypeDefIndex: 2854
{
	// Fields
	private XmlSchema _schema; // 0x78
	private XmlSchemaComplexType _schemaType; // 0x80
	private XmlQualifiedName _schemaTypeName; // 0x88

	// Methods

	// RVA: 0x121DC64 Offset: 0x1219C64 VA: 0x121DC64
	internal void .ctor(XmlRootAttribute root, string elementName, string ns, TypeData typeData, string xmlType, string xmlTypeNamespace) { }
}


// Namespace: System.Xml.Serialization
internal class ClassMap : ObjectMap // TypeDefIndex: 2855
{
	// Fields
	private Hashtable _elements; // 0x10
	private ArrayList _elementMembers; // 0x18
	private Hashtable _attributeMembers; // 0x20
	private XmlTypeMapMemberAttribute[] _attributeMembersArray; // 0x28
	private ArrayList _flatLists; // 0x30
	private ArrayList _allMembers; // 0x38
	private ArrayList _membersWithDefault; // 0x40
	private ArrayList _listMembers; // 0x48
	private XmlTypeMapMemberAnyElement _defaultAnyElement; // 0x50
	private XmlTypeMapMemberAnyAttribute _defaultAnyAttribute; // 0x58
	private XmlTypeMapMemberNamespaces _namespaceDeclarations; // 0x60
	private XmlTypeMapMember _xmlTextCollector; // 0x68
	private XmlTypeMapMember _returnMember; // 0x70
	private bool _ignoreMemberNamespace; // 0x78
	private bool _canBeSimpleType; // 0x79
	private Nullable<bool> _isOrderDependentMap; // 0x7A

	// Properties
	public bool IsOrderDependentMap { get; }
	public ICollection AttributeMembers { get; }
	public XmlQualifiedName SimpleContentBaseType { get; }
	public bool HasSimpleContent { get; }

	// Methods

	// RVA: 0x121E3C0 Offset: 0x121A3C0 VA: 0x121E3C0
	public void AddMember(XmlTypeMapMember member) { }

	// RVA: 0x121EFC0 Offset: 0x121AFC0 VA: 0x121EFC0
	private void RegisterFlatList(XmlTypeMapMemberExpandable member) { }

	// RVA: 0x121F060 Offset: 0x121B060 VA: 0x121F060
	public XmlTypeMapMemberAttribute GetAttribute(string name, string ns) { }

	// RVA: 0x121F11C Offset: 0x121B11C VA: 0x121F11C
	public XmlTypeMapElementInfo GetElement(string name, string ns, int minimalOrder) { }

	// RVA: 0x121F4E4 Offset: 0x121B4E4 VA: 0x121F4E4
	public XmlTypeMapElementInfo GetElement(string name, string ns) { }

	// RVA: 0x121EEE0 Offset: 0x121AEE0 VA: 0x121EEE0
	private string BuildKey(string name, string ns, int explicitOrder) { }

	// RVA: 0x121F87C Offset: 0x121B87C VA: 0x121F87C
	public bool get_IsOrderDependentMap() { }

	// RVA: 0x121715C Offset: 0x121315C VA: 0x121715C
	public ICollection get_AttributeMembers() { }

	// RVA: 0x121FC60 Offset: 0x121BC60 VA: 0x121FC60
	public XmlQualifiedName get_SimpleContentBaseType() { }

	// RVA: 0x121FE34 Offset: 0x121BE34 VA: 0x121FE34
	public bool get_HasSimpleContent() { }

	// RVA: 0x121FEA0 Offset: 0x121BEA0 VA: 0x121FEA0
	public void .ctor() { }
}


// Namespace: System.Xml.Serialization
internal class ListMap : ObjectMap // TypeDefIndex: 2856
{
	// Fields
	private XmlTypeMapElementInfoList _itemInfo; // 0x10
	private string _choiceMember; // 0x18

	// Methods

	// RVA: 0x1219FC0 Offset: 0x1215FC0 VA: 0x1219FC0
	public XmlTypeMapElementInfo FindElement(object ob, int index, object memberValue) { }

	// RVA: 0x121FF3C Offset: 0x121BF3C VA: 0x121FF3C
	public XmlTypeMapElementInfo FindElement(string elementName, string ns) { }

	// RVA: 0x1220258 Offset: 0x121C258 VA: 0x1220258
	public XmlTypeMapElementInfo FindTextElement() { }

	// RVA: 0x1219DB8 Offset: 0x1215DB8 VA: 0x1219DB8
	public void GetArrayType(int itemCount, out string localName, out string ns) { }

	// RVA: 0x1220544 Offset: 0x121C544 VA: 0x1220544 Slot: 0
	public override bool Equals(object other) { }

	// RVA: 0x12206A8 Offset: 0x121C6A8 VA: 0x12206A8 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x12206B0 Offset: 0x121C6B0 VA: 0x12206B0
	public void .ctor() { }
}


// Namespace: 
public class EnumMap.EnumMapMember // TypeDefIndex: 2857
{
	// Fields
	private readonly string _xmlName; // 0x10
	private readonly string _enumName; // 0x18
	private readonly long _value; // 0x20

	// Methods

	// RVA: 0x1220AE4 Offset: 0x121CAE4 VA: 0x1220AE4
	public void .ctor(string xmlName, string enumName, long value) { }
}


// Namespace: System.Xml.Serialization
internal class EnumMap : ObjectMap // TypeDefIndex: 2858
{
	// Fields
	private readonly EnumMap.EnumMapMember[] _members; // 0x10
	private readonly bool _isFlags; // 0x18
	private readonly string[] _enumNames; // 0x20
	private readonly string[] _xmlNames; // 0x28
	private readonly long[] _values; // 0x30

	// Methods

	// RVA: 0x12206B8 Offset: 0x121C6B8 VA: 0x12206B8
	public void .ctor(EnumMap.EnumMapMember[] members, bool isFlags) { }

	// RVA: 0x121AC84 Offset: 0x1216C84 VA: 0x121AC84
	public string GetXmlName(string typeName, object enumValue) { }

	// RVA: 0x1220808 Offset: 0x121C808 VA: 0x1220808
	public string GetEnumName(string typeName, string xmlName) { }
}


// Namespace: System.Xml.XmlConfiguration
public sealed class XmlReaderSection // TypeDefIndex: 2859
{
	// Methods

	// RVA: 0x1220B20 Offset: 0x121CB20 VA: 0x1220B20
	internal static XmlResolver CreateDefaultResolver() { }
}


// Namespace: System.Xml.Xsl.Runtime
public struct StringConcat // TypeDefIndex: 2860
{
	// Fields
	private string s1; // 0x0
	private string s2; // 0x8
	private string s3; // 0x10
	private string s4; // 0x18
	private string delimiter; // 0x20
	private List<string> strList; // 0x28
	private int idxStr; // 0x30

	// Methods

	// RVA: 0x1220B74 Offset: 0x121CB74 VA: 0x1220B74
	public void Clear() { }

	// RVA: 0x1220B80 Offset: 0x121CB80 VA: 0x1220B80
	public string GetResult() { }

	// RVA: 0x1220C74 Offset: 0x121CC74 VA: 0x1220C74
	internal void ConcatNoDelimiter(string s) { }
}


// Namespace: System.Xml.Schema
internal class AxisElement // TypeDefIndex: 2861
{
	// Fields
	internal DoubleLinkAxis curNode; // 0x10
	internal int rootDepth; // 0x18
	internal int curDepth; // 0x1C
	internal bool isMatch; // 0x20

	// Methods

	// RVA: 0x1220DDC Offset: 0x121CDDC VA: 0x1220DDC
	internal void .ctor(DoubleLinkAxis node, int depth) { }

	// RVA: 0x1220E10 Offset: 0x121CE10 VA: 0x1220E10
	internal void SetDepth(int depth) { }

	// RVA: 0x1220E18 Offset: 0x121CE18 VA: 0x1220E18
	internal void MoveToParent(int depth, ForwardAxis parent) { }

	// RVA: 0x1220F24 Offset: 0x121CF24 VA: 0x1220F24
	internal bool MoveToChild(string name, string URN, int depth, ForwardAxis parent) { }
}


// Namespace: System.Xml.Schema
internal class AxisStack // TypeDefIndex: 2862
{
	// Fields
	private ArrayList _stack; // 0x10
	private ForwardAxis _subtree; // 0x18
	private ActiveAxis _parent; // 0x20

	// Properties
	internal int Length { get; }

	// Methods

	// RVA: 0x1221138 Offset: 0x121D138 VA: 0x1221138
	internal int get_Length() { }

	// RVA: 0x122115C Offset: 0x121D15C VA: 0x122115C
	public void .ctor(ForwardAxis faxis, ActiveAxis parent) { }

	// RVA: 0x1221200 Offset: 0x121D200 VA: 0x1221200
	internal void Push(int depth) { }

	// RVA: 0x1221294 Offset: 0x121D294 VA: 0x1221294
	internal void Pop() { }

	// RVA: 0x12210BC Offset: 0x121D0BC VA: 0x12210BC
	internal static bool Equal(string thisname, string thisURN, string name, string URN) { }

	// RVA: 0x12212D4 Offset: 0x121D2D4 VA: 0x12212D4
	internal void MoveToParent(string name, string URN, int depth) { }

	// RVA: 0x122141C Offset: 0x121D41C VA: 0x122141C
	internal bool MoveToChild(string name, string URN, int depth) { }

	// RVA: 0x122155C Offset: 0x121D55C VA: 0x122155C
	internal bool MoveToAttribute(string name, string URN, int depth) { }
}


// Namespace: System.Xml.Schema
internal class ActiveAxis // TypeDefIndex: 2863
{
	// Fields
	private int _currentDepth; // 0x10
	private bool _isActive; // 0x14
	private Asttree _axisTree; // 0x18
	private ArrayList _axisStack; // 0x20

	// Methods

	// RVA: 0x12216D0 Offset: 0x121D6D0 VA: 0x12216D0
	internal void Reactivate() { }

	// RVA: 0x12216E4 Offset: 0x121D6E4 VA: 0x12216E4
	internal void .ctor(Asttree axisTree) { }

	// RVA: 0x1221888 Offset: 0x121D888 VA: 0x1221888
	public bool MoveToStartElement(string localname, string URN) { }

	// RVA: 0x12219C8 Offset: 0x121D9C8 VA: 0x12219C8 Slot: 4
	public virtual bool EndElement(string localname, string URN) { }

	// RVA: 0x1221AD8 Offset: 0x121DAD8 VA: 0x1221AD8
	public bool MoveToAttribute(string localname, string URN) { }
}


// Namespace: System.Xml.Schema
internal class DoubleLinkAxis : Axis // TypeDefIndex: 2864
{
	// Fields
	internal Axis next; // 0x40

	// Methods

	// RVA: 0x1221BE4 Offset: 0x121DBE4 VA: 0x1221BE4
	internal void .ctor(Axis axis, DoubleLinkAxis inputaxis) { }

	// RVA: 0x1221C3C Offset: 0x121DC3C VA: 0x1221C3C
	internal static DoubleLinkAxis ConvertTree(Axis axis) { }
}


// Namespace: System.Xml.Schema
internal class ForwardAxis // TypeDefIndex: 2865
{
	// Fields
	private DoubleLinkAxis _topNode; // 0x10
	private DoubleLinkAxis _rootNode; // 0x18
	private bool _isAttribute; // 0x20
	private bool _isDss; // 0x21
	private bool _isSelfAxis; // 0x22

	// Methods

	// RVA: 0x1221CFC Offset: 0x121DCFC VA: 0x1221CFC
	public void .ctor(DoubleLinkAxis axis, bool isdesorself) { }
}


// Namespace: System.Xml.Schema
internal class Asttree // TypeDefIndex: 2866
{
	// Fields
	private ArrayList _fAxisArray; // 0x10
	private string _xpathexpr; // 0x18
	private bool _isField; // 0x20
	private XmlNamespaceManager _nsmgr; // 0x28

	// Methods

	// RVA: 0x1221E5C Offset: 0x121DE5C VA: 0x1221E5C
	public void .ctor(string xPath, bool isField, XmlNamespaceManager nsmgr) { }

	// RVA: 0x1222678 Offset: 0x121E678 VA: 0x1222678
	private static bool IsNameTest(Axis ast) { }

	// RVA: 0x1221088 Offset: 0x121D088 VA: 0x1221088
	internal static bool IsAttribute(Axis ast) { }

	// RVA: 0x12226AC Offset: 0x121E6AC VA: 0x12226AC
	private static bool IsDescendantOrSelf(Axis ast) { }

	// RVA: 0x1221E1C Offset: 0x121DE1C VA: 0x1221E1C
	internal static bool IsSelf(Axis ast) { }

	// RVA: 0x1221EAC Offset: 0x121DEAC VA: 0x1221EAC
	public void CompileXPath(string xPath, bool isField, XmlNamespaceManager nsmgr) { }

	// RVA: 0x12226EC Offset: 0x121E6EC VA: 0x12226EC
	private void SetURN(Axis axis, XmlNamespaceManager nsmgr) { }
}


// Namespace: System.Xml.Schema
internal class AutoValidator : BaseValidator // TypeDefIndex: 2867
{
	// Properties
	public override bool PreserveWhitespace { get; }

	// Methods

	// RVA: 0x12227DC Offset: 0x121E7DC VA: 0x12227DC
	public void .ctor(XmlValidatingReaderImpl reader, XmlSchemaCollection schemaCollection, IValidationEventHandling eventHandling) { }

	// RVA: 0x1222914 Offset: 0x121E914 VA: 0x1222914 Slot: 4
	public override bool get_PreserveWhitespace() { }

	// RVA: 0x122291C Offset: 0x121E91C VA: 0x122291C Slot: 5
	public override void Validate() { }

	// RVA: 0x1222D3C Offset: 0x121ED3C VA: 0x1222D3C Slot: 6
	public override void CompleteValidation() { }

	// RVA: 0x1222D40 Offset: 0x121ED40 VA: 0x1222D40 Slot: 7
	public override object FindId(string name) { }

	// RVA: 0x12229F8 Offset: 0x121E9F8 VA: 0x12229F8
	private ValidationType DetectValidationType() { }
}


// Namespace: System.Xml.Schema
internal class BaseProcessor // TypeDefIndex: 2868
{
	// Fields
	private XmlNameTable nameTable; // 0x10
	private SchemaNames schemaNames; // 0x18
	private ValidationEventHandler eventHandler; // 0x20
	private XmlSchemaCompilationSettings compilationSettings; // 0x28
	private int errorCount; // 0x30
	private string NsXml; // 0x38

	// Properties
	protected SchemaNames SchemaNames { get; }
	protected bool HasErrors { get; }

	// Methods

	// RVA: 0x1222DD4 Offset: 0x121EDD4 VA: 0x1222DD4
	public void .ctor(XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventHandler) { }

	// RVA: 0x1222E58 Offset: 0x121EE58 VA: 0x1222E58
	public void .ctor(XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventHandler, XmlSchemaCompilationSettings compilationSettings) { }

	// RVA: 0x1222EEC Offset: 0x121EEEC VA: 0x1222EEC
	protected SchemaNames get_SchemaNames() { }

	// RVA: 0x1222F58 Offset: 0x121EF58 VA: 0x1222F58
	protected bool get_HasErrors() { }

	// RVA: 0x1222F68 Offset: 0x121EF68 VA: 0x1222F68
	protected void AddToTable(XmlSchemaObjectTable table, XmlQualifiedName qname, XmlSchemaObject item) { }

	// RVA: 0x12233C8 Offset: 0x121F3C8 VA: 0x12233C8
	private bool IsValidAttributeGroupRedefine(XmlSchemaObject existingObject, XmlSchemaObject item, XmlSchemaObjectTable table) { }

	// RVA: 0x1223618 Offset: 0x121F618 VA: 0x1223618
	private bool IsValidGroupRedefine(XmlSchemaObject existingObject, XmlSchemaObject item, XmlSchemaObjectTable table) { }

	// RVA: 0x12234F0 Offset: 0x121F4F0 VA: 0x12234F0
	private bool IsValidTypeRedefine(XmlSchemaObject existingObject, XmlSchemaObject item, XmlSchemaObjectTable table) { }

	// RVA: 0x12237B4 Offset: 0x121F7B4 VA: 0x12237B4
	protected void SendValidationEvent(string code, XmlSchemaObject source) { }

	// RVA: 0x122372C Offset: 0x121F72C VA: 0x122372C
	protected void SendValidationEvent(string code, string msg, XmlSchemaObject source) { }

	// RVA: 0x12238F4 Offset: 0x121F8F4 VA: 0x12238F4
	protected void SendValidationEvent(string code, string msg1, string msg2, XmlSchemaObject source) { }

	// RVA: 0x12239C8 Offset: 0x121F9C8 VA: 0x12239C8
	protected void SendValidationEvent(string code, string[] args, Exception innerException, XmlSchemaObject source) { }

	// RVA: 0x1223A84 Offset: 0x121FA84 VA: 0x1223A84
	protected void SendValidationEvent(string code, string msg1, string msg2, string sourceUri, int lineNumber, int linePosition) { }

	// RVA: 0x1223B70 Offset: 0x121FB70 VA: 0x1223B70
	protected void SendValidationEvent(string code, XmlSchemaObject source, XmlSeverityType severity) { }

	// RVA: 0x1223BF4 Offset: 0x121FBF4 VA: 0x1223BF4
	protected void SendValidationEvent(XmlSchemaException e) { }

	// RVA: 0x1223BFC Offset: 0x121FBFC VA: 0x1223BFC
	protected void SendValidationEvent(string code, string msg, XmlSchemaObject source, XmlSeverityType severity) { }

	// RVA: 0x122382C Offset: 0x121F82C VA: 0x122382C
	protected void SendValidationEvent(XmlSchemaException e, XmlSeverityType severity) { }

	// RVA: 0x1223C88 Offset: 0x121FC88 VA: 0x1223C88
	protected void SendValidationEventNoThrow(XmlSchemaException e, XmlSeverityType severity) { }
}


// Namespace: System.Xml.Schema
internal class BaseValidator // TypeDefIndex: 2869
{
	// Fields
	private XmlSchemaCollection schemaCollection; // 0x10
	private IValidationEventHandling eventHandling; // 0x18
	private XmlNameTable nameTable; // 0x20
	private SchemaNames schemaNames; // 0x28
	private PositionInfo positionInfo; // 0x30
	private XmlResolver xmlResolver; // 0x38
	private Uri baseUri; // 0x40
	protected SchemaInfo schemaInfo; // 0x48
	protected XmlValidatingReaderImpl reader; // 0x50
	protected XmlQualifiedName elementName; // 0x58
	protected ValidationState context; // 0x60
	protected StringBuilder textValue; // 0x68
	protected string textString; // 0x70
	protected bool hasSibling; // 0x78
	protected bool checkDatatype; // 0x79

	// Properties
	public SchemaNames SchemaNames { get; }
	public Uri BaseUri { set; }
	public ValidationEventHandler EventHandler { get; }
	public IDtdInfo DtdInfo { set; }
	public virtual bool PreserveWhitespace { get; }

	// Methods

	// RVA: 0x1223D30 Offset: 0x121FD30 VA: 0x1223D30
	public void .ctor(BaseValidator other) { }

	// RVA: 0x1222864 Offset: 0x121E864 VA: 0x1222864
	public void .ctor(XmlValidatingReaderImpl reader, XmlSchemaCollection schemaCollection, IValidationEventHandling eventHandling) { }

	// RVA: 0x1222D48 Offset: 0x121ED48 VA: 0x1222D48
	public SchemaNames get_SchemaNames() { }

	// RVA: 0x1223DA4 Offset: 0x121FDA4 VA: 0x1223DA4
	public void set_BaseUri(Uri value) { }

	// RVA: 0x1223DAC Offset: 0x121FDAC VA: 0x1223DAC
	public ValidationEventHandler get_EventHandler() { }

	// RVA: 0x1223E7C Offset: 0x121FE7C VA: 0x1223E7C
	public void set_DtdInfo(IDtdInfo value) { }

	// RVA: 0x1223F54 Offset: 0x121FF54 VA: 0x1223F54 Slot: 4
	public virtual bool get_PreserveWhitespace() { }

	// RVA: 0x1223F5C Offset: 0x121FF5C VA: 0x1223F5C Slot: 5
	public virtual void Validate() { }

	// RVA: 0x1223F60 Offset: 0x121FF60 VA: 0x1223F60 Slot: 6
	public virtual void CompleteValidation() { }

	// RVA: 0x1223F64 Offset: 0x121FF64 VA: 0x1223F64 Slot: 7
	public virtual object FindId(string name) { }

	// RVA: 0x1223F6C Offset: 0x121FF6C VA: 0x1223F6C
	public void ValidateText() { }

	// RVA: 0x1224420 Offset: 0x1220420 VA: 0x1224420
	public void ValidateWhitespace() { }

	// RVA: 0x12243AC Offset: 0x12203AC VA: 0x12243AC
	private void SaveTextValue(string value) { }

	// RVA: 0x122455C Offset: 0x122055C VA: 0x122455C
	protected void SendValidationEvent(string code) { }

	// RVA: 0x12242C4 Offset: 0x12202C4 VA: 0x12242C4
	protected void SendValidationEvent(string code, string[] args) { }

	// RVA: 0x12241DC Offset: 0x12201DC VA: 0x12241DC
	protected void SendValidationEvent(string code, string arg) { }

	// RVA: 0x12245BC Offset: 0x12205BC VA: 0x12245BC
	protected void SendValidationEvent(XmlSchemaException e) { }

	// RVA: 0x12246A8 Offset: 0x12206A8 VA: 0x12246A8
	protected void SendValidationEvent(string code, string msg, XmlSeverityType severity) { }

	// RVA: 0x122479C Offset: 0x122079C VA: 0x122479C
	protected void SendValidationEvent(string code, string[] args, XmlSeverityType severity) { }

	// RVA: 0x12245C4 Offset: 0x12205C4 VA: 0x12245C4
	protected void SendValidationEvent(XmlSchemaException e, XmlSeverityType severity) { }

	// RVA: 0x1224890 Offset: 0x1220890 VA: 0x1224890
	protected static void ProcessEntity(SchemaInfo sinfo, string name, object sender, ValidationEventHandler eventhandler, string baseUri, int lineNumber, int linePosition) { }

	// RVA: 0x1224A50 Offset: 0x1220A50 VA: 0x1224A50
	protected static void ProcessEntity(SchemaInfo sinfo, string name, IValidationEventHandling eventHandling, string baseUriStr, int lineNumber, int linePosition) { }

	// RVA: 0x1224C44 Offset: 0x1220C44 VA: 0x1224C44
	public static BaseValidator CreateInstance(ValidationType valType, XmlValidatingReaderImpl reader, XmlSchemaCollection schemaCollection, IValidationEventHandling eventHandling, bool processIdentityConstraints) { }
}


// Namespace: System.Xml.Schema
[DefaultMember("Item")]
internal sealed class BitSet // TypeDefIndex: 2870
{
	// Fields
	private int count; // 0x10
	private uint[] bits; // 0x18

	// Properties
	public bool Item { get; }
	public bool IsEmpty { get; }

	// Methods

	// RVA: 0x1224DD0 Offset: 0x1220DD0 VA: 0x1224DD0
	private void .ctor() { }

	// RVA: 0x1224DD8 Offset: 0x1220DD8 VA: 0x1224DD8
	public void .ctor(int count) { }

	// RVA: 0x1224E50 Offset: 0x1220E50 VA: 0x1224E50
	public bool get_Item(int index) { }

	// RVA: 0x1224EA4 Offset: 0x1220EA4 VA: 0x1224EA4
	public void Clear() { }

	// RVA: 0x1224EF8 Offset: 0x1220EF8 VA: 0x1224EF8
	public void Set(int index) { }

	// RVA: 0x1224E54 Offset: 0x1220E54 VA: 0x1224E54
	public bool Get(int index) { }

	// RVA: 0x1224FE8 Offset: 0x1220FE8 VA: 0x1224FE8
	public int NextSet(int startFrom) { }

	// RVA: 0x1225080 Offset: 0x1221080 VA: 0x1225080
	public void And(BitSet other) { }

	// RVA: 0x122513C Offset: 0x122113C VA: 0x122513C
	public void Or(BitSet other) { }

	// RVA: 0x12251E0 Offset: 0x12211E0 VA: 0x12251E0 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1225218 Offset: 0x1221218 VA: 0x1225218 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x1225374 Offset: 0x1221374 VA: 0x1225374
	public BitSet Clone() { }

	// RVA: 0x1225448 Offset: 0x1221448 VA: 0x1225448
	public bool get_IsEmpty() { }

	// RVA: 0x12254B0 Offset: 0x12214B0 VA: 0x12254B0
	public bool Intersects(BitSet other) { }

	// RVA: 0x1224E48 Offset: 0x1220E48 VA: 0x1224E48
	private int Subscript(int bitIndex) { }

	// RVA: 0x1224F54 Offset: 0x1220F54 VA: 0x1224F54
	private void EnsureLength(int nRequiredLength) { }
}


// Namespace: System.Xml.Schema
internal class ChameleonKey // TypeDefIndex: 2871
{
	// Fields
	internal string targetNS; // 0x10
	internal Uri chameleonLocation; // 0x18
	internal XmlSchema originalSchema; // 0x20
	private int hashCode; // 0x28

	// Methods

	// RVA: 0x122558C Offset: 0x122158C VA: 0x122558C
	public void .ctor(string ns, XmlSchema originalSchema) { }

	// RVA: 0x12255E4 Offset: 0x12215E4 VA: 0x12255E4 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1225664 Offset: 0x1221664 VA: 0x1225664 Slot: 0
	public override bool Equals(object obj) { }
}


// Namespace: 
public enum CompiledIdentityConstraint.ConstraintRole // TypeDefIndex: 2872
{
	// Fields
	public int value__; // 0x0
	public const CompiledIdentityConstraint.ConstraintRole Unique = 0;
	public const CompiledIdentityConstraint.ConstraintRole Key = 1;
	public const CompiledIdentityConstraint.ConstraintRole Keyref = 2;
}


// Namespace: System.Xml.Schema
internal class CompiledIdentityConstraint // TypeDefIndex: 2873
{
	// Fields
	internal XmlQualifiedName name; // 0x10
	private CompiledIdentityConstraint.ConstraintRole role; // 0x18
	private Asttree selector; // 0x20
	private Asttree[] fields; // 0x28
	internal XmlQualifiedName refer; // 0x30
	public static readonly CompiledIdentityConstraint Empty; // 0x0

	// Methods

	// RVA: 0x1225740 Offset: 0x1221740 VA: 0x1225740
	private void .ctor() { }

	// RVA: 0x12257AC Offset: 0x12217AC VA: 0x12257AC
	public void .ctor(XmlSchemaIdentityConstraint constraint, XmlNamespaceManager nsmgr) { }

	// RVA: 0x1225C40 Offset: 0x1221C40 VA: 0x1225C40
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal sealed class ConstraintStruct // TypeDefIndex: 2874
{
	// Fields
	internal CompiledIdentityConstraint constraint; // 0x10
	internal SelectorActiveAxis axisSelector; // 0x18
	internal ArrayList axisFields; // 0x20
	internal Hashtable qualifiedTable; // 0x28
	internal Hashtable keyrefTable; // 0x30
	private int tableDim; // 0x38

	// Methods

	// RVA: 0x1225C98 Offset: 0x1221C98 VA: 0x1225C98
	internal void .ctor(CompiledIdentityConstraint constraint) { }
}


// Namespace: System.Xml.Schema
internal class LocatedActiveAxis : ActiveAxis // TypeDefIndex: 2875
{
	// Fields
	private int column; // 0x28
	internal bool isMatched; // 0x2C
	internal KeySequence Ks; // 0x30

	// Methods

	// RVA: 0x1225E0C Offset: 0x1221E0C VA: 0x1225E0C
	internal void .ctor(Asttree astfield, KeySequence ks, int column) { }

	// RVA: 0x1225E3C Offset: 0x1221E3C VA: 0x1225E3C
	internal void Reactivate(KeySequence ks) { }
}


// Namespace: System.Xml.Schema
internal class SelectorActiveAxis : ActiveAxis // TypeDefIndex: 2876
{
	// Fields
	private ConstraintStruct cs; // 0x28
	private ArrayList KSs; // 0x30
	private int KSpointer; // 0x38

	// Properties
	public int lastDepth { get; }

	// Methods

	// RVA: 0x1225E54 Offset: 0x1221E54 VA: 0x1225E54
	public int get_lastDepth() { }

	// RVA: 0x1225D98 Offset: 0x1221D98 VA: 0x1225D98
	public void .ctor(Asttree axisTree, ConstraintStruct cs) { }

	// RVA: 0x1225EFC Offset: 0x1221EFC VA: 0x1225EFC Slot: 4
	public override bool EndElement(string localname, string URN) { }

	// RVA: 0x1225F44 Offset: 0x1221F44 VA: 0x1225F44
	public int PushKS(int errline, int errcol) { }

	// RVA: 0x1226314 Offset: 0x1222314 VA: 0x1226314
	public KeySequence PopKS() { }
}


// Namespace: System.Xml.Schema
internal class KSStruct // TypeDefIndex: 2877
{
	// Fields
	public int depth; // 0x10
	public KeySequence ks; // 0x18
	public LocatedActiveAxis[] fields; // 0x20

	// Methods

	// RVA: 0x12262A4 Offset: 0x12222A4 VA: 0x12262A4
	public void .ctor(KeySequence ks, int dim) { }
}


// Namespace: 
private class TypedObject.DecimalStruct // TypeDefIndex: 2878
{
	// Fields
	private bool isDecimal; // 0x10
	private Decimal[] dvalue; // 0x18

	// Methods

	// RVA: 0x1226828 Offset: 0x1222828 VA: 0x1226828
	public void .ctor() { }

	// RVA: 0x12267C0 Offset: 0x12227C0 VA: 0x12267C0
	public void .ctor(int dim) { }
}


// Namespace: System.Xml.Schema
internal class TypedObject // TypeDefIndex: 2879
{
	// Fields
	private TypedObject.DecimalStruct dstruct; // 0x10
	private object ovalue; // 0x18
	private string svalue; // 0x20
	private XmlSchemaDatatype xsdtype; // 0x28
	private int dim; // 0x30
	private bool isList; // 0x34

	// Properties
	public bool IsDecimal { get; }
	public Decimal[] Dvalue { get; }

	// Methods

	// RVA: 0x12263B4 Offset: 0x12223B4 VA: 0x12263B4
	public bool get_IsDecimal() { }

	// RVA: 0x12263D0 Offset: 0x12223D0 VA: 0x12263D0
	public Decimal[] get_Dvalue() { }

	// RVA: 0x12263EC Offset: 0x12223EC VA: 0x12263EC
	public void .ctor(object obj, string svalue, XmlSchemaDatatype xsdtype) { }

	// RVA: 0x1226548 Offset: 0x1222548 VA: 0x1226548 Slot: 3
	public override string ToString() { }

	// RVA: 0x1226550 Offset: 0x1222550 VA: 0x1226550
	public void SetDecimal() { }

	// RVA: 0x1226884 Offset: 0x1222884 VA: 0x1226884
	private bool ListDValueEquals(TypedObject other) { }

	// RVA: 0x1226998 Offset: 0x1222998 VA: 0x1226998
	public bool Equals(TypedObject other) { }
}


// Namespace: System.Xml.Schema
[DefaultMember("Item")]
internal class KeySequence // TypeDefIndex: 2880
{
	// Fields
	private TypedObject[] ks; // 0x10
	private int dim; // 0x18
	private int hashcode; // 0x1C
	private int posline; // 0x20
	private int poscol; // 0x24

	// Properties
	public object Item { get; set; }

	// Methods

	// RVA: 0x122621C Offset: 0x122221C VA: 0x122621C
	internal void .ctor(int dim, int line, int col) { }

	// RVA: 0x1226C08 Offset: 0x1222C08 VA: 0x1226C08
	public object get_Item(int index) { }

	// RVA: 0x1226C38 Offset: 0x1222C38 VA: 0x1226C38
	public void set_Item(int index, object value) { }

	// RVA: 0x1226D30 Offset: 0x1222D30 VA: 0x1226D30
	internal bool IsQualified() { }

	// RVA: 0x1226D90 Offset: 0x1222D90 VA: 0x1226D90 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1227104 Offset: 0x1223104 VA: 0x1227104 Slot: 0
	public override bool Equals(object other) { }

	// RVA: 0x12271F4 Offset: 0x12231F4 VA: 0x12271F4 Slot: 3
	public override string ToString() { }
}


// Namespace: System.Xml.Schema
internal class UpaException : Exception // TypeDefIndex: 2881
{
	// Fields
	private object particle1; // 0x90
	private object particle2; // 0x98

	// Methods

	// RVA: 0x1227308 Offset: 0x1223308 VA: 0x1227308
	public void .ctor(object particle1, object particle2) { }
}


// Namespace: System.Xml.Schema
[DefaultMember("Item")]
internal class SymbolsDictionary // TypeDefIndex: 2882
{
	// Fields
	private int last; // 0x10
	private Hashtable names; // 0x18
	private Hashtable wildcards; // 0x20
	private ArrayList particles; // 0x28
	private object particleLast; // 0x30
	private bool isUpaEnforced; // 0x38

	// Properties
	public int Count { get; }
	public int Item { get; }

	// Methods

	// RVA: 0x1227378 Offset: 0x1223378 VA: 0x1227378
	public void .ctor() { }

	// RVA: 0x1227418 Offset: 0x1223418 VA: 0x1227418
	public int get_Count() { }

	// RVA: 0x1227424 Offset: 0x1223424 VA: 0x1227424
	public int AddName(XmlQualifiedName name, object particle) { }

	// RVA: 0x1227558 Offset: 0x1223558 VA: 0x1227558
	public void AddNamespaceList(NamespaceList list, object particle, bool allowLocal) { }

	// RVA: 0x12278F8 Offset: 0x12238F8 VA: 0x12278F8
	private void AddWildcard(string wildcard, object particle) { }

	// RVA: 0x1227A5C Offset: 0x1223A5C VA: 0x1227A5C
	public ICollection GetNamespaceListSymbols(NamespaceList list) { }

	// RVA: 0x1228200 Offset: 0x1224200 VA: 0x1228200
	public int get_Item(XmlQualifiedName name) { }

	// RVA: 0x12282B8 Offset: 0x12242B8 VA: 0x12282B8
	public bool Exists(XmlQualifiedName name) { }

	// RVA: 0x12282E8 Offset: 0x12242E8 VA: 0x12282E8
	public object GetParticle(int symbol) { }

	// RVA: 0x1228324 Offset: 0x1224324 VA: 0x1228324
	public string NameOf(int symbol) { }
}


// Namespace: System.Xml.Schema
internal struct Position // TypeDefIndex: 2883
{
	// Fields
	public int symbol; // 0x0
	public object particle; // 0x8

	// Methods

	// RVA: 0x12289F8 Offset: 0x12249F8 VA: 0x12289F8
	public void .ctor(int symbol, object particle) { }
}


// Namespace: System.Xml.Schema
[DefaultMember("Item")]
internal class Positions // TypeDefIndex: 2884
{
	// Fields
	private ArrayList positions; // 0x10

	// Properties
	public Position Item { get; }
	public int Count { get; }

	// Methods

	// RVA: 0x1228A04 Offset: 0x1224A04 VA: 0x1228A04
	public int Add(int symbol, object particle) { }

	// RVA: 0x1228A94 Offset: 0x1224A94 VA: 0x1228A94
	public Position get_Item(int pos) { }

	// RVA: 0x1228B24 Offset: 0x1224B24 VA: 0x1228B24
	public int get_Count() { }

	// RVA: 0x1228B48 Offset: 0x1224B48 VA: 0x1228B48
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal abstract class SyntaxTreeNode // TypeDefIndex: 2885
{
	// Properties
	public abstract bool IsNullable { get; }
	public virtual bool IsRangeNode { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void ConstructPos(BitSet firstpos, BitSet lastpos, BitSet[] followpos);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract bool get_IsNullable();

	// RVA: 0x1228BA8 Offset: 0x1224BA8 VA: 0x1228BA8 Slot: 7
	public virtual bool get_IsRangeNode() { }

	// RVA: 0x1228BB0 Offset: 0x1224BB0 VA: 0x1228BB0
	protected void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class LeafNode : SyntaxTreeNode // TypeDefIndex: 2886
{
	// Fields
	private int pos; // 0x10

	// Properties
	public int Pos { set; }
	public override bool IsNullable { get; }

	// Methods

	// RVA: 0x1228BB8 Offset: 0x1224BB8 VA: 0x1228BB8
	public void .ctor(int pos) { }

	// RVA: 0x1228BE0 Offset: 0x1224BE0 VA: 0x1228BE0
	public void set_Pos(int value) { }

	// RVA: 0x1228BE8 Offset: 0x1224BE8 VA: 0x1228BE8 Slot: 4
	public override void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions) { }

	// RVA: 0x1228BEC Offset: 0x1224BEC VA: 0x1228BEC Slot: 5
	public override void ConstructPos(BitSet firstpos, BitSet lastpos, BitSet[] followpos) { }

	// RVA: 0x1228C2C Offset: 0x1224C2C VA: 0x1228C2C Slot: 6
	public override bool get_IsNullable() { }
}


// Namespace: System.Xml.Schema
internal class NamespaceListNode : SyntaxTreeNode // TypeDefIndex: 2887
{
	// Fields
	protected NamespaceList namespaceList; // 0x10
	protected object particle; // 0x18

	// Properties
	public override bool IsNullable { get; }

	// Methods

	// RVA: 0x1228C34 Offset: 0x1224C34 VA: 0x1228C34
	public void .ctor(NamespaceList namespaceList, object particle) { }

	// RVA: 0x1228C60 Offset: 0x1224C60 VA: 0x1228C60 Slot: 8
	public virtual ICollection GetResolvedSymbols(SymbolsDictionary symbols) { }

	// RVA: 0x1228C80 Offset: 0x1224C80 VA: 0x1228C80 Slot: 4
	public override void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions) { }

	// RVA: 0x12290FC Offset: 0x12250FC VA: 0x12290FC Slot: 5
	public override void ConstructPos(BitSet firstpos, BitSet lastpos, BitSet[] followpos) { }

	// RVA: 0x1229134 Offset: 0x1225134 VA: 0x1229134 Slot: 6
	public override bool get_IsNullable() { }
}


// Namespace: System.Xml.Schema
internal abstract class InteriorNode : SyntaxTreeNode // TypeDefIndex: 2888
{
	// Fields
	private SyntaxTreeNode leftChild; // 0x10
	private SyntaxTreeNode rightChild; // 0x18

	// Methods

	// RVA: 0x122916C Offset: 0x122516C VA: 0x122916C
	protected void ExpandTreeNoRecursive(InteriorNode parent, SymbolsDictionary symbols, Positions positions) { }

	// RVA: 0x122934C Offset: 0x122534C VA: 0x122934C Slot: 4
	public override void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions) { }

	// RVA: 0x12293B0 Offset: 0x12253B0 VA: 0x12293B0
	protected void .ctor() { }
}


// Namespace: 
private struct SequenceNode.SequenceConstructPosContext // TypeDefIndex: 2889
{
	// Fields
	public SequenceNode this_; // 0x0
	public BitSet firstpos; // 0x8
	public BitSet lastpos; // 0x10
	public BitSet lastposLeft; // 0x18
	public BitSet firstposRight; // 0x20

	// Methods

	// RVA: 0x12296FC Offset: 0x12256FC VA: 0x12296FC
	public void .ctor(SequenceNode node, BitSet firstpos, BitSet lastpos) { }
}


// Namespace: System.Xml.Schema
internal sealed class SequenceNode : InteriorNode // TypeDefIndex: 2890
{
	// Properties
	public override bool IsNullable { get; }

	// Methods

	// RVA: 0x12293B8 Offset: 0x12253B8 VA: 0x12293B8 Slot: 5
	public override void ConstructPos(BitSet firstpos, BitSet lastpos, BitSet[] followpos) { }

	// RVA: 0x122970C Offset: 0x122570C VA: 0x122970C Slot: 6
	public override bool get_IsNullable() { }

	// RVA: 0x1229878 Offset: 0x1225878 VA: 0x1229878 Slot: 4
	public override void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions) { }

	// RVA: 0x122987C Offset: 0x122587C VA: 0x122987C
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal sealed class ChoiceNode : InteriorNode // TypeDefIndex: 2891
{
	// Properties
	public override bool IsNullable { get; }

	// Methods

	// RVA: 0x1229884 Offset: 0x1225884 VA: 0x1229884
	private static void ConstructChildPos(SyntaxTreeNode child, BitSet firstpos, BitSet lastpos, BitSet[] followpos) { }

	// RVA: 0x1229958 Offset: 0x1225958 VA: 0x1229958 Slot: 5
	public override void ConstructPos(BitSet firstpos, BitSet lastpos, BitSet[] followpos) { }

	// RVA: 0x1229A84 Offset: 0x1225A84 VA: 0x1229A84 Slot: 6
	public override bool get_IsNullable() { }

	// RVA: 0x1229B1C Offset: 0x1225B1C VA: 0x1229B1C Slot: 4
	public override void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions) { }

	// RVA: 0x12290F4 Offset: 0x12250F4 VA: 0x12290F4
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal sealed class PlusNode : InteriorNode // TypeDefIndex: 2892
{
	// Properties
	public override bool IsNullable { get; }

	// Methods

	// RVA: 0x1229B20 Offset: 0x1225B20 VA: 0x1229B20 Slot: 5
	public override void ConstructPos(BitSet firstpos, BitSet lastpos, BitSet[] followpos) { }

	// RVA: 0x1229BBC Offset: 0x1225BBC VA: 0x1229BBC Slot: 6
	public override bool get_IsNullable() { }

	// RVA: 0x1229BDC Offset: 0x1225BDC VA: 0x1229BDC
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal sealed class QmarkNode : InteriorNode // TypeDefIndex: 2893
{
	// Properties
	public override bool IsNullable { get; }

	// Methods

	// RVA: 0x1229BE4 Offset: 0x1225BE4 VA: 0x1229BE4 Slot: 5
	public override void ConstructPos(BitSet firstpos, BitSet lastpos, BitSet[] followpos) { }

	// RVA: 0x1229C04 Offset: 0x1225C04 VA: 0x1229C04 Slot: 6
	public override bool get_IsNullable() { }

	// RVA: 0x1229C0C Offset: 0x1225C0C VA: 0x1229C0C
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal sealed class StarNode : InteriorNode // TypeDefIndex: 2894
{
	// Properties
	public override bool IsNullable { get; }

	// Methods

	// RVA: 0x1229C14 Offset: 0x1225C14 VA: 0x1229C14 Slot: 5
	public override void ConstructPos(BitSet firstpos, BitSet lastpos, BitSet[] followpos) { }

	// RVA: 0x1229CB0 Offset: 0x1225CB0 VA: 0x1229CB0 Slot: 6
	public override bool get_IsNullable() { }

	// RVA: 0x1229CB8 Offset: 0x1225CB8 VA: 0x1229CB8
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal sealed class LeafRangeNode : LeafNode // TypeDefIndex: 2895
{
	// Fields
	private Decimal min; // 0x18
	private Decimal max; // 0x28
	private BitSet nextIteration; // 0x38

	// Properties
	public override bool IsRangeNode { get; }

	// Methods

	// RVA: 0x1229CC0 Offset: 0x1225CC0 VA: 0x1229CC0
	public void .ctor(Decimal min, Decimal max) { }

	// RVA: 0x1229D08 Offset: 0x1225D08 VA: 0x1229D08
	public void .ctor(int pos, Decimal min, Decimal max) { }

	// RVA: 0x1229D58 Offset: 0x1225D58 VA: 0x1229D58 Slot: 7
	public override bool get_IsRangeNode() { }

	// RVA: 0x1229D60 Offset: 0x1225D60 VA: 0x1229D60 Slot: 4
	public override void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions) { }
}


// Namespace: System.Xml.Schema
internal class ContentValidator // TypeDefIndex: 2896
{
	// Fields
	private XmlSchemaContentType contentType; // 0x10
	private bool isOpen; // 0x14
	private bool isEmptiable; // 0x15
	public static readonly ContentValidator Empty; // 0x0
	public static readonly ContentValidator TextOnly; // 0x8
	public static readonly ContentValidator Mixed; // 0x10
	public static readonly ContentValidator Any; // 0x18

	// Properties
	public bool PreserveWhitespace { get; }
	public virtual bool IsEmptiable { get; }
	public bool IsOpen { get; }

	// Methods

	// RVA: 0x1229D94 Offset: 0x1225D94 VA: 0x1229D94
	public void .ctor(XmlSchemaContentType contentType) { }

	// RVA: 0x1229DC4 Offset: 0x1225DC4 VA: 0x1229DC4
	protected void .ctor(XmlSchemaContentType contentType, bool isOpen, bool isEmptiable) { }

	// RVA: 0x1229E04 Offset: 0x1225E04 VA: 0x1229E04
	public bool get_PreserveWhitespace() { }

	// RVA: 0x1229E20 Offset: 0x1225E20 VA: 0x1229E20 Slot: 4
	public virtual bool get_IsEmptiable() { }

	// RVA: 0x1229E28 Offset: 0x1225E28 VA: 0x1229E28
	public bool get_IsOpen() { }

	// RVA: 0x1229E4C Offset: 0x1225E4C VA: 0x1229E4C Slot: 5
	public virtual void InitValidation(ValidationState context) { }

	// RVA: 0x1229E50 Offset: 0x1225E50 VA: 0x1229E50 Slot: 6
	public virtual object ValidateElement(XmlQualifiedName name, ValidationState context, out int errorCode) { }

	// RVA: 0x1229E80 Offset: 0x1225E80 VA: 0x1229E80 Slot: 7
	public virtual bool CompleteValidation(ValidationState context) { }

	// RVA: 0x1229E88 Offset: 0x1225E88 VA: 0x1229E88 Slot: 8
	public virtual ArrayList ExpectedElements(ValidationState context, bool isRequiredOnly) { }

	// RVA: 0x1229E90 Offset: 0x1225E90 VA: 0x1229E90 Slot: 9
	public virtual ArrayList ExpectedParticles(ValidationState context, bool isRequiredOnly, XmlSchemaSet schemaSet) { }

	// RVA: 0x1229E98 Offset: 0x1225E98 VA: 0x1229E98
	public static void AddParticleToExpected(XmlSchemaParticle p, XmlSchemaSet schemaSet, ArrayList particles) { }

	// RVA: 0x1229F08 Offset: 0x1225F08 VA: 0x1229F08
	public static void AddParticleToExpected(XmlSchemaParticle p, XmlSchemaSet schemaSet, ArrayList particles, bool global) { }

	// RVA: 0x122A130 Offset: 0x1226130 VA: 0x122A130
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal sealed class ParticleContentValidator : ContentValidator // TypeDefIndex: 2897
{
	// Fields
	private SymbolsDictionary symbols; // 0x18
	private Positions positions; // 0x20
	private Stack stack; // 0x28
	private SyntaxTreeNode contentNode; // 0x30
	private bool isPartial; // 0x38
	private int minMaxNodesCount; // 0x3C
	private bool enableUpaCheck; // 0x40

	// Methods

	// RVA: 0x122A218 Offset: 0x1226218 VA: 0x122A218
	public void .ctor(XmlSchemaContentType contentType) { }

	// RVA: 0x122A220 Offset: 0x1226220 VA: 0x122A220
	public void .ctor(XmlSchemaContentType contentType, bool enableUpaCheck) { }

	// RVA: 0x122A2A0 Offset: 0x12262A0 VA: 0x122A2A0 Slot: 5
	public override void InitValidation(ValidationState context) { }

	// RVA: 0x122A2D8 Offset: 0x12262D8 VA: 0x122A2D8 Slot: 6
	public override object ValidateElement(XmlQualifiedName name, ValidationState context, out int errorCode) { }

	// RVA: 0x122A310 Offset: 0x1226310 VA: 0x122A310 Slot: 7
	public override bool CompleteValidation(ValidationState context) { }

	// RVA: 0x122A348 Offset: 0x1226348 VA: 0x122A348
	public void Start() { }

	// RVA: 0x122A3F8 Offset: 0x12263F8 VA: 0x122A3F8
	public void OpenGroup() { }

	// RVA: 0x122A420 Offset: 0x1226420 VA: 0x122A420
	public void CloseGroup() { }

	// RVA: 0x122A570 Offset: 0x1226570 VA: 0x122A570
	public bool Exists(XmlQualifiedName name) { }

	// RVA: 0x122A5A8 Offset: 0x12265A8 VA: 0x122A5A8
	public void AddName(XmlQualifiedName name, object particle) { }

	// RVA: 0x122A72C Offset: 0x122672C VA: 0x122A72C
	public void AddNamespaceList(NamespaceList namespaceList, object particle) { }

	// RVA: 0x122A650 Offset: 0x1226650 VA: 0x122A650
	private void AddLeafNode(SyntaxTreeNode node) { }

	// RVA: 0x122A7B8 Offset: 0x12267B8 VA: 0x122A7B8
	public void AddChoice() { }

	// RVA: 0x122A898 Offset: 0x1226898 VA: 0x122A898
	public void AddSequence() { }

	// RVA: 0x122A978 Offset: 0x1226978 VA: 0x122A978
	public void AddStar() { }

	// RVA: 0x122AB24 Offset: 0x1226B24 VA: 0x122AB24
	public void AddPlus() { }

	// RVA: 0x122AB80 Offset: 0x1226B80 VA: 0x122AB80
	public void AddQMark() { }

	// RVA: 0x122ABDC Offset: 0x1226BDC VA: 0x122ABDC
	public void AddLeafRange(Decimal min, Decimal max) { }

	// RVA: 0x122A9D4 Offset: 0x12269D4 VA: 0x122A9D4
	private void Closure(InteriorNode node) { }

	// RVA: 0x122ACC4 Offset: 0x1226CC4 VA: 0x122ACC4
	public ContentValidator Finish(bool useDFA) { }

	// RVA: 0x122B210 Offset: 0x1227210 VA: 0x122B210
	private BitSet[] CalculateTotalFollowposForRangeNodes(BitSet firstpos, BitSet[] followpos, out BitSet posWithRangeTerminals) { }

	// RVA: 0x122B628 Offset: 0x1227628 VA: 0x122B628
	private void CheckCMUPAWithLeafRangeNodes(BitSet curpos) { }

	// RVA: 0x122B4B8 Offset: 0x12274B8 VA: 0x122B4B8
	private BitSet GetApplicableMinMaxFollowPos(BitSet curpos, BitSet posWithRangeTerminals, BitSet[] minmaxFollowPos) { }

	// RVA: 0x122B848 Offset: 0x1227848 VA: 0x122B848
	private void CheckUniqueParticleAttribution(BitSet firstpos, BitSet[] followpos) { }

	// RVA: 0x122BFC8 Offset: 0x1227FC8 VA: 0x122BFC8
	private void CheckUniqueParticleAttribution(BitSet curpos) { }

	// RVA: 0x122B8D0 Offset: 0x12278D0 VA: 0x122B8D0
	private int[][] BuildTransitionTable(BitSet firstpos, BitSet[] followpos, int endMarkerPos) { }
}


// Namespace: System.Xml.Schema
internal sealed class DfaContentValidator : ContentValidator // TypeDefIndex: 2898
{
	// Fields
	private int[][] transitionTable; // 0x18
	private SymbolsDictionary symbols; // 0x20

	// Methods

	// RVA: 0x122BE6C Offset: 0x1227E6C VA: 0x122BE6C
	internal void .ctor(int[][] transitionTable, SymbolsDictionary symbols, XmlSchemaContentType contentType, bool isOpen, bool isEmptiable) { }

	// RVA: 0x122C17C Offset: 0x122817C VA: 0x122C17C Slot: 5
	public override void InitValidation(ValidationState context) { }

	// RVA: 0x122C1E0 Offset: 0x12281E0 VA: 0x122C1E0 Slot: 6
	public override object ValidateElement(XmlQualifiedName name, ValidationState context, out int errorCode) { }

	// RVA: 0x122C2F0 Offset: 0x12282F0 VA: 0x122C2F0 Slot: 7
	public override bool CompleteValidation(ValidationState context) { }

	// RVA: 0x122C308 Offset: 0x1228308 VA: 0x122C308 Slot: 8
	public override ArrayList ExpectedElements(ValidationState context, bool isRequiredOnly) { }

	// RVA: 0x122C4D0 Offset: 0x12284D0 VA: 0x122C4D0 Slot: 9
	public override ArrayList ExpectedParticles(ValidationState context, bool isRequiredOnly, XmlSchemaSet schemaSet) { }
}


// Namespace: System.Xml.Schema
internal sealed class NfaContentValidator : ContentValidator // TypeDefIndex: 2899
{
	// Fields
	private BitSet firstpos; // 0x18
	private BitSet[] followpos; // 0x20
	private SymbolsDictionary symbols; // 0x28
	private Positions positions; // 0x30
	private int endMarkerPos; // 0x38

	// Methods

	// RVA: 0x122BF0C Offset: 0x1227F0C VA: 0x122BF0C
	internal void .ctor(BitSet firstpos, BitSet[] followpos, SymbolsDictionary symbols, Positions positions, int endMarkerPos, XmlSchemaContentType contentType, bool isOpen, bool isEmptiable) { }

	// RVA: 0x122C654 Offset: 0x1228654 VA: 0x122C654 Slot: 5
	public override void InitValidation(ValidationState context) { }

	// RVA: 0x122C708 Offset: 0x1228708 VA: 0x122C708 Slot: 6
	public override object ValidateElement(XmlQualifiedName name, ValidationState context, out int errorCode) { }

	// RVA: 0x122C89C Offset: 0x122889C VA: 0x122C89C Slot: 7
	public override bool CompleteValidation(ValidationState context) { }

	// RVA: 0x122C8E0 Offset: 0x12288E0 VA: 0x122C8E0 Slot: 8
	public override ArrayList ExpectedElements(ValidationState context, bool isRequiredOnly) { }

	// RVA: 0x122CAAC Offset: 0x1228AAC VA: 0x122CAAC Slot: 9
	public override ArrayList ExpectedParticles(ValidationState context, bool isRequiredOnly, XmlSchemaSet schemaSet) { }
}


// Namespace: System.Xml.Schema
internal struct RangePositionInfo // TypeDefIndex: 2900
{
	// Fields
	public BitSet curpos; // 0x0
	public Decimal[] rangeCounters; // 0x8
}


// Namespace: System.Xml.Schema
internal sealed class RangeContentValidator : ContentValidator // TypeDefIndex: 2901
{
	// Fields
	private BitSet firstpos; // 0x18
	private BitSet[] followpos; // 0x20
	private BitSet positionsWithRangeTerminals; // 0x28
	private SymbolsDictionary symbols; // 0x30
	private Positions positions; // 0x38
	private int minMaxNodesCount; // 0x40
	private int endMarkerPos; // 0x44

	// Methods

	// RVA: 0x122B788 Offset: 0x1227788 VA: 0x122B788
	internal void .ctor(BitSet firstpos, BitSet[] followpos, SymbolsDictionary symbols, Positions positions, int endMarkerPos, XmlSchemaContentType contentType, bool isEmptiable, BitSet positionsWithRangeTerminals, int minmaxNodesCount) { }

	// RVA: 0x122CC18 Offset: 0x1228C18 VA: 0x122CC18 Slot: 5
	public override void InitValidation(ValidationState context) { }

	// RVA: 0x122CDAC Offset: 0x1228DAC VA: 0x122CDAC Slot: 6
	public override object ValidateElement(XmlQualifiedName name, ValidationState context, out int errorCode) { }

	// RVA: 0x122D58C Offset: 0x122958C VA: 0x122D58C Slot: 7
	public override bool CompleteValidation(ValidationState context) { }

	// RVA: 0x122D5A4 Offset: 0x12295A4 VA: 0x122D5A4 Slot: 8
	public override ArrayList ExpectedElements(ValidationState context, bool isRequiredOnly) { }

	// RVA: 0x122D804 Offset: 0x1229804 VA: 0x122D804 Slot: 9
	public override ArrayList ExpectedParticles(ValidationState context, bool isRequiredOnly, XmlSchemaSet schemaSet) { }
}


// Namespace: System.Xml.Schema
internal sealed class AllElementsContentValidator : ContentValidator // TypeDefIndex: 2902
{
	// Fields
	private Hashtable elements; // 0x18
	private object[] particles; // 0x20
	private BitSet isRequired; // 0x28
	private int countRequired; // 0x30

	// Properties
	public override bool IsEmptiable { get; }

	// Methods

	// RVA: 0x122DA08 Offset: 0x1229A08 VA: 0x122DA08
	public void .ctor(XmlSchemaContentType contentType, int size, bool isEmptiable) { }

	// RVA: 0x122DB10 Offset: 0x1229B10 VA: 0x122DB10
	public bool AddElement(XmlQualifiedName name, object particle, bool isEmptiable) { }

	// RVA: 0x122DC58 Offset: 0x1229C58 VA: 0x122DC58 Slot: 4
	public override bool get_IsEmptiable() { }

	// RVA: 0x122DC78 Offset: 0x1229C78 VA: 0x122DC78 Slot: 5
	public override void InitValidation(ValidationState context) { }

	// RVA: 0x122DD08 Offset: 0x1229D08 VA: 0x122DD08 Slot: 6
	public override object ValidateElement(XmlQualifiedName name, ValidationState context, out int errorCode) { }

	// RVA: 0x122DE50 Offset: 0x1229E50 VA: 0x122DE50 Slot: 7
	public override bool CompleteValidation(ValidationState context) { }

	// RVA: 0x122DEA0 Offset: 0x1229EA0 VA: 0x122DEA0 Slot: 8
	public override ArrayList ExpectedElements(ValidationState context, bool isRequiredOnly) { }

	// RVA: 0x122E2D0 Offset: 0x122A2D0 VA: 0x122E2D0 Slot: 9
	public override ArrayList ExpectedParticles(ValidationState context, bool isRequiredOnly, XmlSchemaSet schemaSet) { }
}


// Namespace: System.Xml.Schema
public enum XmlSchemaDatatypeVariety // TypeDefIndex: 2903
{
	// Fields
	public int value__; // 0x0
	public const XmlSchemaDatatypeVariety Atomic = 0;
	public const XmlSchemaDatatypeVariety List = 1;
	public const XmlSchemaDatatypeVariety Union = 2;
}


// Namespace: System.Xml.Schema
internal class XsdSimpleValue // TypeDefIndex: 2904
{
	// Fields
	private XmlSchemaSimpleType xmlType; // 0x10
	private object typedValue; // 0x18

	// Methods

	// RVA: 0x122E7A8 Offset: 0x122A7A8 VA: 0x122E7A8
	public void .ctor(XmlSchemaSimpleType st, object value) { }
}


// Namespace: System.Xml.Schema
[Flags]
internal enum RestrictionFlags // TypeDefIndex: 2905
{
	// Fields
	public int value__; // 0x0
	public const RestrictionFlags Length = 1;
	public const RestrictionFlags MinLength = 2;
	public const RestrictionFlags MaxLength = 4;
	public const RestrictionFlags Pattern = 8;
	public const RestrictionFlags Enumeration = 16;
	public const RestrictionFlags WhiteSpace = 32;
	public const RestrictionFlags MaxInclusive = 64;
	public const RestrictionFlags MaxExclusive = 128;
	public const RestrictionFlags MinInclusive = 256;
	public const RestrictionFlags MinExclusive = 512;
	public const RestrictionFlags TotalDigits = 1024;
	public const RestrictionFlags FractionDigits = 2048;
}


// Namespace: System.Xml.Schema
internal enum XmlSchemaWhiteSpace // TypeDefIndex: 2906
{
	// Fields
	public int value__; // 0x0
	public const XmlSchemaWhiteSpace Preserve = 0;
	public const XmlSchemaWhiteSpace Replace = 1;
	public const XmlSchemaWhiteSpace Collapse = 2;
}


// Namespace: System.Xml.Schema
internal class RestrictionFacets // TypeDefIndex: 2907
{
	// Fields
	internal int Length; // 0x10
	internal int MinLength; // 0x14
	internal int MaxLength; // 0x18
	internal ArrayList Patterns; // 0x20
	internal ArrayList Enumeration; // 0x28
	internal XmlSchemaWhiteSpace WhiteSpace; // 0x30
	internal object MaxInclusive; // 0x38
	internal object MaxExclusive; // 0x40
	internal object MinInclusive; // 0x48
	internal object MinExclusive; // 0x50
	internal int TotalDigits; // 0x58
	internal int FractionDigits; // 0x5C
	internal RestrictionFlags Flags; // 0x60
	internal RestrictionFlags FixedFlags; // 0x64

	// Methods

	// RVA: 0x122E7D4 Offset: 0x122A7D4 VA: 0x122E7D4
	public void .ctor() { }
}


// Namespace: 
private class DatatypeImplementation.SchemaDatatypeMap : IComparable // TypeDefIndex: 2908
{
	// Fields
	private string name; // 0x10
	private DatatypeImplementation type; // 0x18
	private int parentIndex; // 0x20

	// Methods

	// RVA: 0x1232D98 Offset: 0x122ED98 VA: 0x1232D98
	internal void .ctor(string name, DatatypeImplementation type) { }

	// RVA: 0x1232DC4 Offset: 0x122EDC4 VA: 0x1232DC4
	internal void .ctor(string name, DatatypeImplementation type, int parentIndex) { }

	// RVA: 0x123501C Offset: 0x123101C VA: 0x123501C
	public static DatatypeImplementation op_Explicit(DatatypeImplementation.SchemaDatatypeMap sdm) { }

	// RVA: 0x1235034 Offset: 0x1231034 VA: 0x1235034 Slot: 4
	public int CompareTo(object obj) { }
}


// Namespace: System.Xml.Schema
internal abstract class DatatypeImplementation : XmlSchemaDatatype // TypeDefIndex: 2909
{
	// Fields
	private XmlSchemaDatatypeVariety variety; // 0x10
	private RestrictionFacets restriction; // 0x18
	private DatatypeImplementation baseType; // 0x20
	private XmlValueConverter valueConverter; // 0x28
	private XmlSchemaType parentSchemaType; // 0x30
	private static Hashtable builtinTypes; // 0x0
	private static XmlSchemaSimpleType[] enumToTypeCode; // 0x8
	private static XmlSchemaSimpleType anySimpleType; // 0x10
	private static XmlSchemaSimpleType anyAtomicType; // 0x18
	private static XmlSchemaSimpleType untypedAtomicType; // 0x20
	private static XmlSchemaSimpleType yearMonthDurationType; // 0x28
	private static XmlSchemaSimpleType dayTimeDurationType; // 0x30
	private static XmlSchemaSimpleType normalizedStringTypeV1Compat; // 0x38
	private static XmlSchemaSimpleType tokenTypeV1Compat; // 0x40
	internal static XmlQualifiedName QnAnySimpleType; // 0x48
	internal static XmlQualifiedName QnAnyType; // 0x50
	internal static FacetsChecker stringFacetsChecker; // 0x58
	internal static FacetsChecker miscFacetsChecker; // 0x60
	internal static FacetsChecker numeric2FacetsChecker; // 0x68
	internal static FacetsChecker binaryFacetsChecker; // 0x70
	internal static FacetsChecker dateTimeFacetsChecker; // 0x78
	internal static FacetsChecker durationFacetsChecker; // 0x80
	internal static FacetsChecker listFacetsChecker; // 0x88
	internal static FacetsChecker qnameFacetsChecker; // 0x90
	internal static FacetsChecker unionFacetsChecker; // 0x98
	private static readonly DatatypeImplementation c_anySimpleType; // 0xA0
	private static readonly DatatypeImplementation c_anyURI; // 0xA8
	private static readonly DatatypeImplementation c_base64Binary; // 0xB0
	private static readonly DatatypeImplementation c_boolean; // 0xB8
	private static readonly DatatypeImplementation c_byte; // 0xC0
	private static readonly DatatypeImplementation c_char; // 0xC8
	private static readonly DatatypeImplementation c_date; // 0xD0
	private static readonly DatatypeImplementation c_dateTime; // 0xD8
	private static readonly DatatypeImplementation c_dateTimeNoTz; // 0xE0
	private static readonly DatatypeImplementation c_dateTimeTz; // 0xE8
	private static readonly DatatypeImplementation c_day; // 0xF0
	private static readonly DatatypeImplementation c_decimal; // 0xF8
	private static readonly DatatypeImplementation c_double; // 0x100
	private static readonly DatatypeImplementation c_doubleXdr; // 0x108
	private static readonly DatatypeImplementation c_duration; // 0x110
	private static readonly DatatypeImplementation c_ENTITY; // 0x118
	private static readonly DatatypeImplementation c_ENTITIES; // 0x120
	private static readonly DatatypeImplementation c_ENUMERATION; // 0x128
	private static readonly DatatypeImplementation c_fixed; // 0x130
	private static readonly DatatypeImplementation c_float; // 0x138
	private static readonly DatatypeImplementation c_floatXdr; // 0x140
	private static readonly DatatypeImplementation c_hexBinary; // 0x148
	private static readonly DatatypeImplementation c_ID; // 0x150
	private static readonly DatatypeImplementation c_IDREF; // 0x158
	private static readonly DatatypeImplementation c_IDREFS; // 0x160
	private static readonly DatatypeImplementation c_int; // 0x168
	private static readonly DatatypeImplementation c_integer; // 0x170
	private static readonly DatatypeImplementation c_language; // 0x178
	private static readonly DatatypeImplementation c_long; // 0x180
	private static readonly DatatypeImplementation c_month; // 0x188
	private static readonly DatatypeImplementation c_monthDay; // 0x190
	private static readonly DatatypeImplementation c_Name; // 0x198
	private static readonly DatatypeImplementation c_NCName; // 0x1A0
	private static readonly DatatypeImplementation c_negativeInteger; // 0x1A8
	private static readonly DatatypeImplementation c_NMTOKEN; // 0x1B0
	private static readonly DatatypeImplementation c_NMTOKENS; // 0x1B8
	private static readonly DatatypeImplementation c_nonNegativeInteger; // 0x1C0
	private static readonly DatatypeImplementation c_nonPositiveInteger; // 0x1C8
	private static readonly DatatypeImplementation c_normalizedString; // 0x1D0
	private static readonly DatatypeImplementation c_NOTATION; // 0x1D8
	private static readonly DatatypeImplementation c_positiveInteger; // 0x1E0
	private static readonly DatatypeImplementation c_QName; // 0x1E8
	private static readonly DatatypeImplementation c_QNameXdr; // 0x1F0
	private static readonly DatatypeImplementation c_short; // 0x1F8
	private static readonly DatatypeImplementation c_string; // 0x200
	private static readonly DatatypeImplementation c_time; // 0x208
	private static readonly DatatypeImplementation c_timeNoTz; // 0x210
	private static readonly DatatypeImplementation c_timeTz; // 0x218
	private static readonly DatatypeImplementation c_token; // 0x220
	private static readonly DatatypeImplementation c_unsignedByte; // 0x228
	private static readonly DatatypeImplementation c_unsignedInt; // 0x230
	private static readonly DatatypeImplementation c_unsignedLong; // 0x238
	private static readonly DatatypeImplementation c_unsignedShort; // 0x240
	private static readonly DatatypeImplementation c_uuid; // 0x248
	private static readonly DatatypeImplementation c_year; // 0x250
	private static readonly DatatypeImplementation c_yearMonth; // 0x258
	internal static readonly DatatypeImplementation c_normalizedStringV1Compat; // 0x260
	internal static readonly DatatypeImplementation c_tokenV1Compat; // 0x268
	private static readonly DatatypeImplementation c_anyAtomicType; // 0x270
	private static readonly DatatypeImplementation c_dayTimeDuration; // 0x278
	private static readonly DatatypeImplementation c_untypedAtomicType; // 0x280
	private static readonly DatatypeImplementation c_yearMonthDuration; // 0x288
	private static readonly DatatypeImplementation[] c_tokenizedTypes; // 0x290
	private static readonly DatatypeImplementation[] c_tokenizedTypesXsd; // 0x298
	private static readonly DatatypeImplementation.SchemaDatatypeMap[] c_XdrTypes; // 0x2A0
	private static readonly DatatypeImplementation.SchemaDatatypeMap[] c_XsdTypes; // 0x2A8

	// Properties
	internal override FacetsChecker FacetsChecker { get; }
	internal override XmlValueConverter ValueConverter { get; }
	public override XmlTokenizedType TokenizedType { get; }
	public override Type ValueType { get; }
	public override XmlSchemaDatatypeVariety Variety { get; }
	public override XmlTypeCode TypeCode { get; }
	internal override RestrictionFacets Restriction { get; }
	internal override bool HasLexicalFacets { get; }
	internal override bool HasValueFacets { get; }
	internal abstract Type ListValueType { get; }
	internal abstract RestrictionFlags ValidRestrictionFlags { get; }
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet { get; }

	// Methods

	// RVA: 0x122E7DC Offset: 0x122A7DC VA: 0x122E7DC
	private static void .cctor() { }

	// RVA: 0x12335D0 Offset: 0x122F5D0 VA: 0x12335D0
	internal static DatatypeImplementation FromXmlTokenizedType(XmlTokenizedType token) { }

	// RVA: 0x123364C Offset: 0x122F64C VA: 0x123364C
	internal static DatatypeImplementation FromXmlTokenizedTypeXsd(XmlTokenizedType token) { }

	// RVA: 0x12336C8 Offset: 0x122F6C8 VA: 0x12336C8
	internal static DatatypeImplementation FromXdrName(string name) { }

	// RVA: 0x1233788 Offset: 0x122F788 VA: 0x1233788
	private static DatatypeImplementation FromTypeName(string name) { }

	// RVA: 0x1233848 Offset: 0x122F848 VA: 0x1233848
	internal static XmlSchemaSimpleType StartBuiltinType(XmlQualifiedName qname, XmlSchemaDatatype dataType) { }

	// RVA: 0x1233918 Offset: 0x122F918 VA: 0x1233918
	internal static void FinishBuiltinType(XmlSchemaSimpleType derivedType, XmlSchemaSimpleType baseType) { }

	// RVA: 0x1232E00 Offset: 0x122EE00 VA: 0x1232E00
	internal static void CreateBuiltinTypes() { }

	// RVA: 0x1233B14 Offset: 0x122FB14 VA: 0x1233B14
	internal static XmlSchemaSimpleType GetSimpleTypeFromTypeCode(XmlTypeCode typeCode) { }

	// RVA: 0x1233B90 Offset: 0x122FB90 VA: 0x1233B90
	internal static XmlSchemaSimpleType GetSimpleTypeFromXsdType(XmlQualifiedName qname) { }

	// RVA: 0x1233C50 Offset: 0x122FC50 VA: 0x1233C50
	internal static XmlSchemaSimpleType GetNormalizedStringTypeV1Compat() { }

	// RVA: 0x1233DBC Offset: 0x122FDBC VA: 0x1233DBC
	internal static XmlSchemaSimpleType GetTokenTypeV1Compat() { }

	// RVA: 0x1233F28 Offset: 0x122FF28 VA: 0x1233F28
	internal static XmlTypeCode GetPrimitiveTypeCode(XmlTypeCode typeCode) { }

	// RVA: 0x1234024 Offset: 0x1230024 VA: 0x1234024 Slot: 20
	internal override XmlSchemaDatatype DeriveByRestriction(XmlSchemaObjectCollection facets, XmlNameTable nameTable, XmlSchemaType schemaType) { }

	// RVA: 0x1234108 Offset: 0x1230108 VA: 0x1234108 Slot: 21
	internal override XmlSchemaDatatype DeriveByList(XmlSchemaType schemaType) { }

	// RVA: 0x1232290 Offset: 0x122E290 VA: 0x1232290
	internal XmlSchemaDatatype DeriveByList(int minSize, XmlSchemaType schemaType) { }

	// RVA: 0x1234200 Offset: 0x1230200 VA: 0x1234200
	internal static DatatypeImplementation DeriveByUnion(XmlSchemaSimpleType[] types, XmlSchemaType schemaType) { }

	// RVA: 0x1234314 Offset: 0x1230314 VA: 0x1234314 Slot: 22
	internal override void VerifySchemaValid(XmlSchemaObjectTable notations, XmlSchemaObject caller) { }

	// RVA: 0x1234318 Offset: 0x1230318 VA: 0x1234318 Slot: 9
	public override bool IsDerivedFrom(XmlSchemaDatatype datatype) { }

	// RVA: 0x12345B0 Offset: 0x12305B0 VA: 0x12345B0 Slot: 23
	internal override bool IsEqual(object o1, object o2) { }

	// RVA: 0x12345D4 Offset: 0x12305D4 VA: 0x12345D4 Slot: 24
	internal override bool IsComparable(XmlSchemaDatatype dtype) { }

	// RVA: 0x12346C0 Offset: 0x12306C0 VA: 0x12346C0 Slot: 25
	internal virtual XmlValueConverter CreateValueConverter(XmlSchemaType schemaType) { }

	// RVA: 0x12346C8 Offset: 0x12306C8 VA: 0x12346C8 Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x1234720 Offset: 0x1230720 VA: 0x1234720 Slot: 12
	internal override XmlValueConverter get_ValueConverter() { }

	// RVA: 0x1234754 Offset: 0x1230754 VA: 0x1234754 Slot: 5
	public override XmlTokenizedType get_TokenizedType() { }

	// RVA: 0x123475C Offset: 0x123075C VA: 0x123475C Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x12347C8 Offset: 0x12307C8 VA: 0x12347C8 Slot: 7
	public override XmlSchemaDatatypeVariety get_Variety() { }

	// RVA: 0x12347D0 Offset: 0x12307D0 VA: 0x12347D0 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x12347D8 Offset: 0x12307D8 VA: 0x12347D8 Slot: 13
	internal override RestrictionFacets get_Restriction() { }

	// RVA: 0x12347E0 Offset: 0x12307E0 VA: 0x12347E0 Slot: 10
	internal override bool get_HasLexicalFacets() { }

	// RVA: 0x1234808 Offset: 0x1230808 VA: 0x1234808 Slot: 11
	internal override bool get_HasValueFacets() { }

	// RVA: -1 Offset: -1 Slot: 26
	internal abstract Type get_ListValueType();

	// RVA: -1 Offset: -1 Slot: 27
	internal abstract RestrictionFlags get_ValidRestrictionFlags();

	// RVA: 0x1234830 Offset: 0x1230830 VA: 0x1234830 Slot: 19
	internal override XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() { }

	// RVA: 0x1234838 Offset: 0x1230838 VA: 0x1234838 Slot: 6
	public override object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr) { }

	// RVA: 0x1234A68 Offset: 0x1230A68 VA: 0x1234A68 Slot: 15
	internal override object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, bool createAtomicValue) { }

	// RVA: 0x1234BBC Offset: 0x1230BBC VA: 0x1234BBC Slot: 17
	internal override Exception TryParseValue(object value, XmlNameTable nameTable, IXmlNamespaceResolver namespaceResolver, out object typedValue) { }

	// RVA: 0x12349FC Offset: 0x12309FC VA: 0x12349FC
	internal string GetTypeName() { }

	// RVA: 0x1234FA0 Offset: 0x1230FA0 VA: 0x1234FA0
	protected int Compare(byte[] value1, byte[] value2) { }

	// RVA: 0x1235014 Offset: 0x1231014 VA: 0x1235014
	protected void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_List : Datatype_anySimpleType // TypeDefIndex: 2910
{
	// Fields
	private DatatypeImplementation itemType; // 0x38
	private int minListSize; // 0x40

	// Properties
	public override Type ValueType { get; }
	public override XmlTokenizedType TokenizedType { get; }
	internal override Type ListValueType { get; }
	internal override FacetsChecker FacetsChecker { get; }
	public override XmlTypeCode TypeCode { get; }
	internal override RestrictionFlags ValidRestrictionFlags { get; }

	// Methods

	// RVA: 0x12350A4 Offset: 0x12310A4 VA: 0x12350A4 Slot: 25
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType) { }

	// RVA: 0x1234190 Offset: 0x1230190 VA: 0x1234190
	internal void .ctor(DatatypeImplementation type, int minListSize) { }

	// RVA: 0x12352E0 Offset: 0x12312E0 VA: 0x12352E0 Slot: 14
	internal override int Compare(object value1, object value2) { }

	// RVA: 0x1235568 Offset: 0x1231568 VA: 0x1235568 Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x1235578 Offset: 0x1231578 VA: 0x1235578 Slot: 5
	public override XmlTokenizedType get_TokenizedType() { }

	// RVA: 0x1235598 Offset: 0x1231598 VA: 0x1235598 Slot: 26
	internal override Type get_ListValueType() { }

	// RVA: 0x12355BC Offset: 0x12315BC VA: 0x12355BC Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x1235614 Offset: 0x1231614 VA: 0x1235614 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x1235634 Offset: 0x1231634 VA: 0x1235634 Slot: 27
	internal override RestrictionFlags get_ValidRestrictionFlags() { }

	// RVA: 0x123563C Offset: 0x123163C VA: 0x123563C Slot: 17
	internal override Exception TryParseValue(object value, XmlNameTable nameTable, IXmlNamespaceResolver namespaceResolver, out object typedValue) { }

	// RVA: 0x1235C38 Offset: 0x1231C38 VA: 0x1235C38 Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }
}


// Namespace: System.Xml.Schema
internal class Datatype_union : Datatype_anySimpleType // TypeDefIndex: 2911
{
	// Fields
	private static readonly Type atomicValueType; // 0x0
	private static readonly Type listValueType; // 0x8
	private XmlSchemaSimpleType[] types; // 0x38

	// Properties
	public override Type ValueType { get; }
	public override XmlTypeCode TypeCode { get; }
	internal override FacetsChecker FacetsChecker { get; }
	internal override Type ListValueType { get; }
	internal override RestrictionFlags ValidRestrictionFlags { get; }

	// Methods

	// RVA: 0x1236050 Offset: 0x1232050 VA: 0x1236050 Slot: 25
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType) { }

	// RVA: 0x12342AC Offset: 0x12302AC VA: 0x12342AC
	internal void .ctor(XmlSchemaSimpleType[] types) { }

	// RVA: 0x123605C Offset: 0x123205C VA: 0x123605C Slot: 14
	internal override int Compare(object value1, object value2) { }

	// RVA: 0x1236160 Offset: 0x1232160 VA: 0x1236160 Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x12361B8 Offset: 0x12321B8 VA: 0x12361B8 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x12361C0 Offset: 0x12321C0 VA: 0x12361C0 Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x1236218 Offset: 0x1232218 VA: 0x1236218 Slot: 26
	internal override Type get_ListValueType() { }

	// RVA: 0x1236270 Offset: 0x1232270 VA: 0x1236270 Slot: 27
	internal override RestrictionFlags get_ValidRestrictionFlags() { }

	// RVA: 0x1234114 Offset: 0x1230114 VA: 0x1234114
	internal bool HasAtomicMembers() { }

	// RVA: 0x1234528 Offset: 0x1230528 VA: 0x1234528
	internal bool IsUnionBaseOf(DatatypeImplementation derivedType) { }

	// RVA: 0x1236278 Offset: 0x1232278 VA: 0x1236278 Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x1236464 Offset: 0x1232464 VA: 0x1236464 Slot: 17
	internal override Exception TryParseValue(object value, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x12368FC Offset: 0x12328FC VA: 0x12368FC
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_anySimpleType : DatatypeImplementation // TypeDefIndex: 2912
{
	// Fields
	private static readonly Type atomicValueType; // 0x0
	private static readonly Type listValueType; // 0x8

	// Properties
	internal override FacetsChecker FacetsChecker { get; }
	public override Type ValueType { get; }
	public override XmlTypeCode TypeCode { get; }
	internal override Type ListValueType { get; }
	public override XmlTokenizedType TokenizedType { get; }
	internal override RestrictionFlags ValidRestrictionFlags { get; }
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet { get; }

	// Methods

	// RVA: 0x12369B8 Offset: 0x12329B8 VA: 0x12369B8 Slot: 25
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType) { }

	// RVA: 0x1236A10 Offset: 0x1232A10 VA: 0x1236A10 Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x1236A68 Offset: 0x1232A68 VA: 0x1236A68 Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x1236AC0 Offset: 0x1232AC0 VA: 0x1236AC0 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x1236AC8 Offset: 0x1232AC8 VA: 0x1236AC8 Slot: 26
	internal override Type get_ListValueType() { }

	// RVA: 0x1236B20 Offset: 0x1232B20 VA: 0x1236B20 Slot: 5
	public override XmlTokenizedType get_TokenizedType() { }

	// RVA: 0x1236B28 Offset: 0x1232B28 VA: 0x1236B28 Slot: 27
	internal override RestrictionFlags get_ValidRestrictionFlags() { }

	// RVA: 0x1236B30 Offset: 0x1232B30 VA: 0x1236B30 Slot: 19
	internal override XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() { }

	// RVA: 0x1236B38 Offset: 0x1232B38 VA: 0x1236B38 Slot: 14
	internal override int Compare(object value1, object value2) { }

	// RVA: 0x1236B94 Offset: 0x1232B94 VA: 0x1236B94 Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x1231D88 Offset: 0x122DD88 VA: 0x1231D88
	public void .ctor() { }

	// RVA: 0x1236BB8 Offset: 0x1232BB8 VA: 0x1236BB8
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_anyAtomicType : Datatype_anySimpleType // TypeDefIndex: 2913
{
	// Properties
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet { get; }
	public override XmlTypeCode TypeCode { get; }

	// Methods

	// RVA: 0x1236C74 Offset: 0x1232C74 VA: 0x1236C74 Slot: 25
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType) { }

	// RVA: 0x1236CCC Offset: 0x1232CCC VA: 0x1236CCC Slot: 19
	internal override XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() { }

	// RVA: 0x1236CD4 Offset: 0x1232CD4 VA: 0x1236CD4 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x1232C98 Offset: 0x122EC98 VA: 0x1232C98
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_untypedAtomicType : Datatype_anyAtomicType // TypeDefIndex: 2914
{
	// Properties
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet { get; }
	public override XmlTypeCode TypeCode { get; }

	// Methods

	// RVA: 0x1236CDC Offset: 0x1232CDC VA: 0x1236CDC Slot: 25
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType) { }

	// RVA: 0x1236D34 Offset: 0x1232D34 VA: 0x1236D34 Slot: 19
	internal override XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() { }

	// RVA: 0x1236D3C Offset: 0x1232D3C VA: 0x1236D3C Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x1232D40 Offset: 0x122ED40 VA: 0x1232D40
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_string : Datatype_anySimpleType // TypeDefIndex: 2915
{
	// Properties
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet { get; }
	internal override FacetsChecker FacetsChecker { get; }
	public override XmlTypeCode TypeCode { get; }
	public override XmlTokenizedType TokenizedType { get; }
	internal override RestrictionFlags ValidRestrictionFlags { get; }

	// Methods

	// RVA: 0x1236D44 Offset: 0x1232D44 VA: 0x1236D44 Slot: 25
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType) { }

	// RVA: 0x1236D50 Offset: 0x1232D50 VA: 0x1236D50 Slot: 19
	internal override XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() { }

	// RVA: 0x1236D58 Offset: 0x1232D58 VA: 0x1236D58 Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x1236DB0 Offset: 0x1232DB0 VA: 0x1236DB0 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x1236DB8 Offset: 0x1232DB8 VA: 0x1236DB8 Slot: 5
	public override XmlTokenizedType get_TokenizedType() { }

	// RVA: 0x1236DC0 Offset: 0x1232DC0 VA: 0x1236DC0 Slot: 27
	internal override RestrictionFlags get_ValidRestrictionFlags() { }

	// RVA: 0x1236DC8 Offset: 0x1232DC8 VA: 0x1236DC8 Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x12328DC Offset: 0x122E8DC VA: 0x12328DC
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_boolean : Datatype_anySimpleType // TypeDefIndex: 2916
{
	// Fields
	private static readonly Type atomicValueType; // 0x0
	private static readonly Type listValueType; // 0x8

	// Properties
	internal override FacetsChecker FacetsChecker { get; }
	public override XmlTypeCode TypeCode { get; }
	public override Type ValueType { get; }
	internal override Type ListValueType { get; }
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet { get; }
	internal override RestrictionFlags ValidRestrictionFlags { get; }

	// Methods

	// RVA: 0x1236E9C Offset: 0x1232E9C VA: 0x1236E9C Slot: 25
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType) { }

	// RVA: 0x1236EA8 Offset: 0x1232EA8 VA: 0x1236EA8 Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x1236F00 Offset: 0x1232F00 VA: 0x1236F00 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x1236F08 Offset: 0x1232F08 VA: 0x1236F08 Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x1236F60 Offset: 0x1232F60 VA: 0x1236F60 Slot: 26
	internal override Type get_ListValueType() { }

	// RVA: 0x1236FB8 Offset: 0x1232FB8 VA: 0x1236FB8 Slot: 19
	internal override XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() { }

	// RVA: 0x1236FC0 Offset: 0x1232FC0 VA: 0x1236FC0 Slot: 27
	internal override RestrictionFlags get_ValidRestrictionFlags() { }

	// RVA: 0x1236FC8 Offset: 0x1232FC8 VA: 0x1236FC8 Slot: 14
	internal override int Compare(object value1, object value2) { }

	// RVA: 0x123706C Offset: 0x123306C VA: 0x123706C Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x1231E88 Offset: 0x122DE88 VA: 0x1231E88
	public void .ctor() { }

	// RVA: 0x1237174 Offset: 0x1233174 VA: 0x1237174
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_float : Datatype_anySimpleType // TypeDefIndex: 2917
{
	// Fields
	private static readonly Type atomicValueType; // 0x0
	private static readonly Type listValueType; // 0x8

	// Properties
	internal override FacetsChecker FacetsChecker { get; }
	public override XmlTypeCode TypeCode { get; }
	public override Type ValueType { get; }
	internal override Type ListValueType { get; }
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet { get; }
	internal override RestrictionFlags ValidRestrictionFlags { get; }

	// Methods

	// RVA: 0x1237230 Offset: 0x1233230 VA: 0x1237230 Slot: 25
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType) { }

	// RVA: 0x123723C Offset: 0x123323C VA: 0x123723C Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x1237294 Offset: 0x1233294 VA: 0x1237294 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x123729C Offset: 0x123329C VA: 0x123729C Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x12372F4 Offset: 0x12332F4 VA: 0x12372F4 Slot: 26
	internal override Type get_ListValueType() { }

	// RVA: 0x123734C Offset: 0x123334C VA: 0x123734C Slot: 19
	internal override XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() { }

	// RVA: 0x1237354 Offset: 0x1233354 VA: 0x1237354 Slot: 27
	internal override RestrictionFlags get_ValidRestrictionFlags() { }

	// RVA: 0x123735C Offset: 0x123335C VA: 0x123735C Slot: 14
	internal override int Compare(object value1, object value2) { }

	// RVA: 0x12373F0 Offset: 0x12333F0 VA: 0x12373F0 Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x1232468 Offset: 0x122E468 VA: 0x1232468
	public void .ctor() { }

	// RVA: 0x1237530 Offset: 0x1233530 VA: 0x1237530
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_double : Datatype_anySimpleType // TypeDefIndex: 2918
{
	// Fields
	private static readonly Type atomicValueType; // 0x0
	private static readonly Type listValueType; // 0x8

	// Properties
	internal override FacetsChecker FacetsChecker { get; }
	public override XmlTypeCode TypeCode { get; }
	public override Type ValueType { get; }
	internal override Type ListValueType { get; }
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet { get; }
	internal override RestrictionFlags ValidRestrictionFlags { get; }

	// Methods

	// RVA: 0x12375EC Offset: 0x12335EC VA: 0x12375EC Slot: 25
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType) { }

	// RVA: 0x12375F8 Offset: 0x12335F8 VA: 0x12375F8 Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x1237650 Offset: 0x1233650 VA: 0x1237650 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x1237658 Offset: 0x1233658 VA: 0x1237658 Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x12376B0 Offset: 0x12336B0 VA: 0x12376B0 Slot: 26
	internal override Type get_ListValueType() { }

	// RVA: 0x1237708 Offset: 0x1233708 VA: 0x1237708 Slot: 19
	internal override XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() { }

	// RVA: 0x1237710 Offset: 0x1233710 VA: 0x1237710 Slot: 27
	internal override RestrictionFlags get_ValidRestrictionFlags() { }

	// RVA: 0x1237718 Offset: 0x1233718 VA: 0x1237718 Slot: 14
	internal override int Compare(object value1, object value2) { }

	// RVA: 0x12377AC Offset: 0x12337AC VA: 0x12377AC Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x1232190 Offset: 0x122E190 VA: 0x1232190
	public void .ctor() { }

	// RVA: 0x12378EC Offset: 0x12338EC VA: 0x12378EC
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_decimal : Datatype_anySimpleType // TypeDefIndex: 2919
{
	// Fields
	private static readonly Type atomicValueType; // 0x0
	private static readonly Type listValueType; // 0x8
	private static readonly FacetsChecker numeric10FacetsChecker; // 0x10

	// Properties
	internal override FacetsChecker FacetsChecker { get; }
	public override XmlTypeCode TypeCode { get; }
	public override Type ValueType { get; }
	internal override Type ListValueType { get; }
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet { get; }
	internal override RestrictionFlags ValidRestrictionFlags { get; }

	// Methods

	// RVA: 0x12379A8 Offset: 0x12339A8 VA: 0x12379A8 Slot: 25
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType) { }

	// RVA: 0x12379B4 Offset: 0x12339B4 VA: 0x12379B4 Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x1237A0C Offset: 0x1233A0C VA: 0x1237A0C Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x1237A14 Offset: 0x1233A14 VA: 0x1237A14 Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x1237A6C Offset: 0x1233A6C VA: 0x1237A6C Slot: 26
	internal override Type get_ListValueType() { }

	// RVA: 0x1237AC4 Offset: 0x1233AC4 VA: 0x1237AC4 Slot: 19
	internal override XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() { }

	// RVA: 0x1237ACC Offset: 0x1233ACC VA: 0x1237ACC Slot: 27
	internal override RestrictionFlags get_ValidRestrictionFlags() { }

	// RVA: 0x1237AD4 Offset: 0x1233AD4 VA: 0x1237AD4 Slot: 14
	internal override int Compare(object value1, object value2) { }

	// RVA: 0x1237BA0 Offset: 0x1233BA0 VA: 0x1237BA0 Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x123213C Offset: 0x122E13C VA: 0x123213C
	public void .ctor() { }

	// RVA: 0x1237D04 Offset: 0x1233D04 VA: 0x1237D04
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_duration : Datatype_anySimpleType // TypeDefIndex: 2920
{
	// Fields
	private static readonly Type atomicValueType; // 0x0
	private static readonly Type listValueType; // 0x8

	// Properties
	internal override FacetsChecker FacetsChecker { get; }
	public override XmlTypeCode TypeCode { get; }
	public override Type ValueType { get; }
	internal override Type ListValueType { get; }
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet { get; }
	internal override RestrictionFlags ValidRestrictionFlags { get; }

	// Methods

	// RVA: 0x1237EC4 Offset: 0x1233EC4 VA: 0x1237EC4 Slot: 25
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType) { }

	// RVA: 0x1237ED0 Offset: 0x1233ED0 VA: 0x1237ED0 Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x1237F28 Offset: 0x1233F28 VA: 0x1237F28 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x1237F30 Offset: 0x1233F30 VA: 0x1237F30 Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x1237F88 Offset: 0x1233F88 VA: 0x1237F88 Slot: 26
	internal override Type get_ListValueType() { }

	// RVA: 0x1237FE0 Offset: 0x1233FE0 VA: 0x1237FE0 Slot: 19
	internal override XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() { }

	// RVA: 0x1237FE8 Offset: 0x1233FE8 VA: 0x1237FE8 Slot: 27
	internal override RestrictionFlags get_ValidRestrictionFlags() { }

	// RVA: 0x1237FF0 Offset: 0x1233FF0 VA: 0x1237FF0 Slot: 14
	internal override int Compare(object value1, object value2) { }

	// RVA: 0x1238094 Offset: 0x1234094 VA: 0x1238094 Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x1232238 Offset: 0x122E238 VA: 0x1232238
	public void .ctor() { }

	// RVA: 0x1238258 Offset: 0x1234258 VA: 0x1238258
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_yearMonthDuration : Datatype_duration // TypeDefIndex: 2921
{
	// Properties
	public override XmlTypeCode TypeCode { get; }

	// Methods

	// RVA: 0x1238314 Offset: 0x1234314 VA: 0x1238314 Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x12384DC Offset: 0x12344DC VA: 0x12384DC Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x1232D44 Offset: 0x122ED44 VA: 0x1232D44
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_dayTimeDuration : Datatype_duration // TypeDefIndex: 2922
{
	// Properties
	public override XmlTypeCode TypeCode { get; }

	// Methods

	// RVA: 0x12384E4 Offset: 0x12344E4 VA: 0x12384E4 Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x12386AC Offset: 0x12346AC VA: 0x12386AC Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x1232CEC Offset: 0x122ECEC VA: 0x1232CEC
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_dateTimeBase : Datatype_anySimpleType // TypeDefIndex: 2923
{
	// Fields
	private static readonly Type atomicValueType; // 0x0
	private static readonly Type listValueType; // 0x8
	private XsdDateTimeFlags dateTimeFlags; // 0x38

	// Properties
	internal override FacetsChecker FacetsChecker { get; }
	public override XmlTypeCode TypeCode { get; }
	public override Type ValueType { get; }
	internal override Type ListValueType { get; }
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet { get; }
	internal override RestrictionFlags ValidRestrictionFlags { get; }

	// Methods

	// RVA: 0x12386B4 Offset: 0x12346B4 VA: 0x12386B4 Slot: 25
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType) { }

	// RVA: 0x12386C0 Offset: 0x12346C0 VA: 0x12386C0 Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x1238718 Offset: 0x1234718 VA: 0x1238718 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x1238720 Offset: 0x1234720 VA: 0x1238720
	internal void .ctor(XsdDateTimeFlags dateTimeFlags) { }

	// RVA: 0x1238788 Offset: 0x1234788 VA: 0x1238788 Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x12387E0 Offset: 0x12347E0 VA: 0x12387E0 Slot: 26
	internal override Type get_ListValueType() { }

	// RVA: 0x1238838 Offset: 0x1234838 VA: 0x1238838 Slot: 19
	internal override XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() { }

	// RVA: 0x1238840 Offset: 0x1234840 VA: 0x1238840 Slot: 27
	internal override RestrictionFlags get_ValidRestrictionFlags() { }

	// RVA: 0x1238848 Offset: 0x1234848 VA: 0x1238848 Slot: 14
	internal override int Compare(object value1, object value2) { }

	// RVA: 0x1238990 Offset: 0x1234990 VA: 0x1238990 Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x1238CB0 Offset: 0x1234CB0 VA: 0x1238CB0
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_dateTimeNoTimeZone : Datatype_dateTimeBase // TypeDefIndex: 2924
{
	// Methods

	// RVA: 0x1232034 Offset: 0x122E034 VA: 0x1232034
	internal void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_dateTimeTimeZone : Datatype_dateTimeBase // TypeDefIndex: 2925
{
	// Methods

	// RVA: 0x123208C Offset: 0x122E08C VA: 0x123208C
	internal void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_dateTime : Datatype_dateTimeBase // TypeDefIndex: 2926
{
	// Methods

	// RVA: 0x1231FDC Offset: 0x122DFDC VA: 0x1231FDC
	internal void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_timeNoTimeZone : Datatype_dateTimeBase // TypeDefIndex: 2927
{
	// Methods

	// RVA: 0x1232988 Offset: 0x122E988 VA: 0x1232988
	internal void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_timeTimeZone : Datatype_dateTimeBase // TypeDefIndex: 2928
{
	// Methods

	// RVA: 0x12329E0 Offset: 0x122E9E0 VA: 0x12329E0
	internal void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_time : Datatype_dateTimeBase // TypeDefIndex: 2929
{
	// Properties
	public override XmlTypeCode TypeCode { get; }

	// Methods

	// RVA: 0x1238D6C Offset: 0x1234D6C VA: 0x1238D6C Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x1232930 Offset: 0x122E930 VA: 0x1232930
	internal void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_date : Datatype_dateTimeBase // TypeDefIndex: 2930
{
	// Properties
	public override XmlTypeCode TypeCode { get; }

	// Methods

	// RVA: 0x1238D74 Offset: 0x1234D74 VA: 0x1238D74 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x1231F84 Offset: 0x122DF84 VA: 0x1231F84
	internal void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_yearMonth : Datatype_dateTimeBase // TypeDefIndex: 2931
{
	// Properties
	public override XmlTypeCode TypeCode { get; }

	// Methods

	// RVA: 0x1238D7C Offset: 0x1234D7C VA: 0x1238D7C Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x1232C38 Offset: 0x122EC38 VA: 0x1232C38
	internal void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_year : Datatype_dateTimeBase // TypeDefIndex: 2932
{
	// Properties
	public override XmlTypeCode TypeCode { get; }

	// Methods

	// RVA: 0x1238D84 Offset: 0x1234D84 VA: 0x1238D84 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x1232BE0 Offset: 0x122EBE0 VA: 0x1232BE0
	internal void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_monthDay : Datatype_dateTimeBase // TypeDefIndex: 2933
{
	// Properties
	public override XmlTypeCode TypeCode { get; }

	// Methods

	// RVA: 0x1238D8C Offset: 0x1234D8C VA: 0x1238D8C Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x1232674 Offset: 0x122E674 VA: 0x1232674
	internal void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_day : Datatype_dateTimeBase // TypeDefIndex: 2934
{
	// Properties
	public override XmlTypeCode TypeCode { get; }

	// Methods

	// RVA: 0x1238D94 Offset: 0x1234D94 VA: 0x1238D94 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x12320E4 Offset: 0x122E0E4 VA: 0x12320E4
	internal void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_month : Datatype_dateTimeBase // TypeDefIndex: 2935
{
	// Properties
	public override XmlTypeCode TypeCode { get; }

	// Methods

	// RVA: 0x1238D9C Offset: 0x1234D9C VA: 0x1238D9C Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x123261C Offset: 0x122E61C VA: 0x123261C
	internal void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_hexBinary : Datatype_anySimpleType // TypeDefIndex: 2936
{
	// Fields
	private static readonly Type atomicValueType; // 0x0
	private static readonly Type listValueType; // 0x8

	// Properties
	internal override FacetsChecker FacetsChecker { get; }
	public override XmlTypeCode TypeCode { get; }
	public override Type ValueType { get; }
	internal override Type ListValueType { get; }
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet { get; }
	internal override RestrictionFlags ValidRestrictionFlags { get; }

	// Methods

	// RVA: 0x1238DA4 Offset: 0x1234DA4 VA: 0x1238DA4 Slot: 25
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType) { }

	// RVA: 0x1238DB0 Offset: 0x1234DB0 VA: 0x1238DB0 Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x1238E08 Offset: 0x1234E08 VA: 0x1238E08 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x1238E10 Offset: 0x1234E10 VA: 0x1238E10 Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x1238E68 Offset: 0x1234E68 VA: 0x1238E68 Slot: 26
	internal override Type get_ListValueType() { }

	// RVA: 0x1238EC0 Offset: 0x1234EC0 VA: 0x1238EC0 Slot: 19
	internal override XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() { }

	// RVA: 0x1238EC8 Offset: 0x1234EC8 VA: 0x1238EC8 Slot: 27
	internal override RestrictionFlags get_ValidRestrictionFlags() { }

	// RVA: 0x1238ED0 Offset: 0x1234ED0 VA: 0x1238ED0 Slot: 14
	internal override int Compare(object value1, object value2) { }

	// RVA: 0x1238F78 Offset: 0x1234F78 VA: 0x1238F78 Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x1232510 Offset: 0x122E510 VA: 0x1232510
	public void .ctor() { }

	// RVA: 0x123911C Offset: 0x123511C VA: 0x123911C
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_base64Binary : Datatype_anySimpleType // TypeDefIndex: 2937
{
	// Fields
	private static readonly Type atomicValueType; // 0x0
	private static readonly Type listValueType; // 0x8

	// Properties
	internal override FacetsChecker FacetsChecker { get; }
	public override XmlTypeCode TypeCode { get; }
	public override Type ValueType { get; }
	internal override Type ListValueType { get; }
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet { get; }
	internal override RestrictionFlags ValidRestrictionFlags { get; }

	// Methods

	// RVA: 0x12391D8 Offset: 0x12351D8 VA: 0x12391D8 Slot: 25
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType) { }

	// RVA: 0x12391E4 Offset: 0x12351E4 VA: 0x12391E4 Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x123923C Offset: 0x123523C VA: 0x123923C Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x1239244 Offset: 0x1235244 VA: 0x1239244 Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x123929C Offset: 0x123529C VA: 0x123929C Slot: 26
	internal override Type get_ListValueType() { }

	// RVA: 0x12392F4 Offset: 0x12352F4 VA: 0x12392F4 Slot: 19
	internal override XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() { }

	// RVA: 0x12392FC Offset: 0x12352FC VA: 0x12392FC Slot: 27
	internal override RestrictionFlags get_ValidRestrictionFlags() { }

	// RVA: 0x1239304 Offset: 0x1235304 VA: 0x1239304 Slot: 14
	internal override int Compare(object value1, object value2) { }

	// RVA: 0x12393AC Offset: 0x12353AC VA: 0x12393AC Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x1231E34 Offset: 0x122DE34 VA: 0x1231E34
	public void .ctor() { }

	// RVA: 0x123954C Offset: 0x123554C VA: 0x123954C
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_anyURI : Datatype_anySimpleType // TypeDefIndex: 2938
{
	// Fields
	private static readonly Type atomicValueType; // 0x0
	private static readonly Type listValueType; // 0x8

	// Properties
	internal override FacetsChecker FacetsChecker { get; }
	public override XmlTypeCode TypeCode { get; }
	public override Type ValueType { get; }
	internal override bool HasValueFacets { get; }
	internal override Type ListValueType { get; }
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet { get; }
	internal override RestrictionFlags ValidRestrictionFlags { get; }

	// Methods

	// RVA: 0x1239608 Offset: 0x1235608 VA: 0x1239608 Slot: 25
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType) { }

	// RVA: 0x1239614 Offset: 0x1235614 VA: 0x1239614 Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x123966C Offset: 0x123566C VA: 0x123966C Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x1239674 Offset: 0x1235674 VA: 0x1239674 Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x12396CC Offset: 0x12356CC VA: 0x12396CC Slot: 11
	internal override bool get_HasValueFacets() { }

	// RVA: 0x12396D4 Offset: 0x12356D4 VA: 0x12396D4 Slot: 26
	internal override Type get_ListValueType() { }

	// RVA: 0x123972C Offset: 0x123572C VA: 0x123972C Slot: 19
	internal override XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() { }

	// RVA: 0x1239734 Offset: 0x1235734 VA: 0x1239734 Slot: 27
	internal override RestrictionFlags get_ValidRestrictionFlags() { }

	// RVA: 0x123973C Offset: 0x123573C VA: 0x123973C Slot: 14
	internal override int Compare(object value1, object value2) { }

	// RVA: 0x1239800 Offset: 0x1235800 VA: 0x1239800 Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x1231DE0 Offset: 0x122DDE0 VA: 0x1231DE0
	public void .ctor() { }

	// RVA: 0x1239BA0 Offset: 0x1235BA0 VA: 0x1239BA0
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_QName : Datatype_anySimpleType // TypeDefIndex: 2939
{
	// Fields
	private static readonly Type atomicValueType; // 0x0
	private static readonly Type listValueType; // 0x8

	// Properties
	internal override FacetsChecker FacetsChecker { get; }
	public override XmlTypeCode TypeCode { get; }
	public override XmlTokenizedType TokenizedType { get; }
	internal override RestrictionFlags ValidRestrictionFlags { get; }
	public override Type ValueType { get; }
	internal override Type ListValueType { get; }
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet { get; }

	// Methods

	// RVA: 0x1239C5C Offset: 0x1235C5C VA: 0x1239C5C Slot: 25
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType) { }

	// RVA: 0x1239C68 Offset: 0x1235C68 VA: 0x1239C68 Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x1239CC0 Offset: 0x1235CC0 VA: 0x1239CC0 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x1239CC8 Offset: 0x1235CC8 VA: 0x1239CC8 Slot: 5
	public override XmlTokenizedType get_TokenizedType() { }

	// RVA: 0x1239CD0 Offset: 0x1235CD0 VA: 0x1239CD0 Slot: 27
	internal override RestrictionFlags get_ValidRestrictionFlags() { }

	// RVA: 0x1239CD8 Offset: 0x1235CD8 VA: 0x1239CD8 Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x1239D30 Offset: 0x1235D30 VA: 0x1239D30 Slot: 26
	internal override Type get_ListValueType() { }

	// RVA: 0x1239D88 Offset: 0x1235D88 VA: 0x1239D88 Slot: 19
	internal override XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() { }

	// RVA: 0x1239D90 Offset: 0x1235D90 VA: 0x1239D90 Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x12327E0 Offset: 0x122E7E0 VA: 0x12327E0
	public void .ctor() { }

	// RVA: 0x1239FC8 Offset: 0x1235FC8 VA: 0x1239FC8
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_normalizedString : Datatype_string // TypeDefIndex: 2940
{
	// Properties
	public override XmlTypeCode TypeCode { get; }
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet { get; }
	internal override bool HasValueFacets { get; }

	// Methods

	// RVA: 0x123A084 Offset: 0x1236084 VA: 0x123A084 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x123A08C Offset: 0x123608C VA: 0x123A08C Slot: 19
	internal override XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() { }

	// RVA: 0x123A094 Offset: 0x1236094 VA: 0x123A094 Slot: 11
	internal override bool get_HasValueFacets() { }

	// RVA: 0x1232734 Offset: 0x122E734 VA: 0x1232734
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_normalizedStringV1Compat : Datatype_string // TypeDefIndex: 2941
{
	// Properties
	public override XmlTypeCode TypeCode { get; }
	internal override bool HasValueFacets { get; }

	// Methods

	// RVA: 0x123A09C Offset: 0x123609C VA: 0x123A09C Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x123A0A4 Offset: 0x12360A4 VA: 0x123A0A4 Slot: 11
	internal override bool get_HasValueFacets() { }

	// RVA: 0x1232C90 Offset: 0x122EC90 VA: 0x1232C90
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_token : Datatype_normalizedString // TypeDefIndex: 2942
{
	// Properties
	public override XmlTypeCode TypeCode { get; }
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet { get; }

	// Methods

	// RVA: 0x123A0AC Offset: 0x12360AC VA: 0x123A0AC Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x123A0B4 Offset: 0x12360B4 VA: 0x123A0B4 Slot: 19
	internal override XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() { }

	// RVA: 0x1232A38 Offset: 0x122EA38 VA: 0x1232A38
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_tokenV1Compat : Datatype_normalizedStringV1Compat // TypeDefIndex: 2943
{
	// Properties
	public override XmlTypeCode TypeCode { get; }

	// Methods

	// RVA: 0x123A0BC Offset: 0x12360BC VA: 0x123A0BC Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x1232C94 Offset: 0x122EC94 VA: 0x1232C94
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_language : Datatype_token // TypeDefIndex: 2944
{
	// Properties
	public override XmlTypeCode TypeCode { get; }

	// Methods

	// RVA: 0x123A0C4 Offset: 0x12360C4 VA: 0x123A0C4 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x1232614 Offset: 0x122E614 VA: 0x1232614
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_NMTOKEN : Datatype_token // TypeDefIndex: 2945
{
	// Properties
	public override XmlTypeCode TypeCode { get; }
	public override XmlTokenizedType TokenizedType { get; }

	// Methods

	// RVA: 0x123A0CC Offset: 0x12360CC VA: 0x123A0CC Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x123A0D4 Offset: 0x12360D4 VA: 0x123A0D4 Slot: 5
	public override XmlTokenizedType get_TokenizedType() { }

	// RVA: 0x1232728 Offset: 0x122E728 VA: 0x1232728
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_Name : Datatype_token // TypeDefIndex: 2946
{
	// Properties
	public override XmlTypeCode TypeCode { get; }

	// Methods

	// RVA: 0x123A0DC Offset: 0x12360DC VA: 0x123A0DC Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x12326CC Offset: 0x122E6CC VA: 0x12326CC
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_NCName : Datatype_Name // TypeDefIndex: 2947
{
	// Properties
	public override XmlTypeCode TypeCode { get; }

	// Methods

	// RVA: 0x123A0E4 Offset: 0x12360E4 VA: 0x123A0E4 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x123A0EC Offset: 0x12360EC VA: 0x123A0EC Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x12326D0 Offset: 0x122E6D0 VA: 0x12326D0
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_ID : Datatype_NCName // TypeDefIndex: 2948
{
	// Properties
	public override XmlTypeCode TypeCode { get; }
	public override XmlTokenizedType TokenizedType { get; }

	// Methods

	// RVA: 0x123A1E8 Offset: 0x12361E8 VA: 0x123A1E8 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x123A1F0 Offset: 0x12361F0 VA: 0x123A1F0 Slot: 5
	public override XmlTokenizedType get_TokenizedType() { }

	// RVA: 0x1232564 Offset: 0x122E564 VA: 0x1232564
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_IDREF : Datatype_NCName // TypeDefIndex: 2949
{
	// Properties
	public override XmlTypeCode TypeCode { get; }
	public override XmlTokenizedType TokenizedType { get; }

	// Methods

	// RVA: 0x123A1F8 Offset: 0x12361F8 VA: 0x123A1F8 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x123A200 Offset: 0x1236200 VA: 0x123A200 Slot: 5
	public override XmlTokenizedType get_TokenizedType() { }

	// RVA: 0x1232568 Offset: 0x122E568 VA: 0x1232568
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_ENTITY : Datatype_NCName // TypeDefIndex: 2950
{
	// Properties
	public override XmlTypeCode TypeCode { get; }
	public override XmlTokenizedType TokenizedType { get; }

	// Methods

	// RVA: 0x123A208 Offset: 0x1236208 VA: 0x123A208 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x123A210 Offset: 0x1236210 VA: 0x123A210 Slot: 5
	public override XmlTokenizedType get_TokenizedType() { }

	// RVA: 0x123228C Offset: 0x122E28C VA: 0x123228C
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_NOTATION : Datatype_anySimpleType // TypeDefIndex: 2951
{
	// Fields
	private static readonly Type atomicValueType; // 0x0
	private static readonly Type listValueType; // 0x8

	// Properties
	internal override FacetsChecker FacetsChecker { get; }
	public override XmlTypeCode TypeCode { get; }
	public override XmlTokenizedType TokenizedType { get; }
	internal override RestrictionFlags ValidRestrictionFlags { get; }
	public override Type ValueType { get; }
	internal override Type ListValueType { get; }
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet { get; }

	// Methods

	// RVA: 0x123A218 Offset: 0x1236218 VA: 0x123A218 Slot: 25
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType) { }

	// RVA: 0x123A224 Offset: 0x1236224 VA: 0x123A224 Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x123A27C Offset: 0x123627C VA: 0x123A27C Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x123A284 Offset: 0x1236284 VA: 0x123A284 Slot: 5
	public override XmlTokenizedType get_TokenizedType() { }

	// RVA: 0x123A28C Offset: 0x123628C VA: 0x123A28C Slot: 27
	internal override RestrictionFlags get_ValidRestrictionFlags() { }

	// RVA: 0x123A294 Offset: 0x1236294 VA: 0x123A294 Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x123A2EC Offset: 0x12362EC VA: 0x123A2EC Slot: 26
	internal override Type get_ListValueType() { }

	// RVA: 0x123A344 Offset: 0x1236344 VA: 0x123A344 Slot: 19
	internal override XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() { }

	// RVA: 0x123A34C Offset: 0x123634C VA: 0x123A34C Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x123A584 Offset: 0x1236584 VA: 0x123A584 Slot: 22
	internal override void VerifySchemaValid(XmlSchemaObjectTable notations, XmlSchemaObject caller) { }

	// RVA: 0x1232738 Offset: 0x122E738 VA: 0x1232738
	public void .ctor() { }

	// RVA: 0x123A730 Offset: 0x1236730 VA: 0x123A730
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_integer : Datatype_decimal // TypeDefIndex: 2952
{
	// Properties
	public override XmlTypeCode TypeCode { get; }

	// Methods

	// RVA: 0x123A7EC Offset: 0x12367EC VA: 0x123A7EC Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x123A7F4 Offset: 0x12367F4 VA: 0x123A7F4 Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x12325C0 Offset: 0x122E5C0 VA: 0x12325C0
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_nonPositiveInteger : Datatype_integer // TypeDefIndex: 2953
{
	// Fields
	private static readonly FacetsChecker numeric10FacetsChecker; // 0x0

	// Properties
	internal override FacetsChecker FacetsChecker { get; }
	public override XmlTypeCode TypeCode { get; }
	internal override bool HasValueFacets { get; }

	// Methods

	// RVA: 0x123A958 Offset: 0x1236958 VA: 0x123A958 Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x123A9B0 Offset: 0x12369B0 VA: 0x123A9B0 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x123A9B8 Offset: 0x12369B8 VA: 0x123A9B8 Slot: 11
	internal override bool get_HasValueFacets() { }

	// RVA: 0x1232730 Offset: 0x122E730 VA: 0x1232730
	public void .ctor() { }

	// RVA: 0x123A9C0 Offset: 0x12369C0 VA: 0x123A9C0
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_negativeInteger : Datatype_nonPositiveInteger // TypeDefIndex: 2954
{
	// Fields
	private static readonly FacetsChecker numeric10FacetsChecker; // 0x0

	// Properties
	internal override FacetsChecker FacetsChecker { get; }
	public override XmlTypeCode TypeCode { get; }

	// Methods

	// RVA: 0x123AAC8 Offset: 0x1236AC8 VA: 0x123AAC8 Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x123AB20 Offset: 0x1236B20 VA: 0x123AB20 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x12326D4 Offset: 0x122E6D4 VA: 0x12326D4
	public void .ctor() { }

	// RVA: 0x123AB28 Offset: 0x1236B28 VA: 0x123AB28
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_long : Datatype_integer // TypeDefIndex: 2955
{
	// Fields
	private static readonly Type atomicValueType; // 0x0
	private static readonly Type listValueType; // 0x8
	private static readonly FacetsChecker numeric10FacetsChecker; // 0x10

	// Properties
	internal override FacetsChecker FacetsChecker { get; }
	internal override bool HasValueFacets { get; }
	public override XmlTypeCode TypeCode { get; }
	public override Type ValueType { get; }
	internal override Type ListValueType { get; }

	// Methods

	// RVA: 0x123AC30 Offset: 0x1236C30 VA: 0x123AC30 Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x123AC88 Offset: 0x1236C88 VA: 0x123AC88 Slot: 11
	internal override bool get_HasValueFacets() { }

	// RVA: 0x123AC90 Offset: 0x1236C90 VA: 0x123AC90 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x123AC98 Offset: 0x1236C98 VA: 0x123AC98 Slot: 14
	internal override int Compare(object value1, object value2) { }

	// RVA: 0x123AD2C Offset: 0x1236D2C VA: 0x123AD2C Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x123AD84 Offset: 0x1236D84 VA: 0x123AD84 Slot: 26
	internal override Type get_ListValueType() { }

	// RVA: 0x123ADDC Offset: 0x1236DDC VA: 0x123ADDC Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x1232618 Offset: 0x122E618 VA: 0x1232618
	public void .ctor() { }

	// RVA: 0x123AF1C Offset: 0x1236F1C VA: 0x123AF1C
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_int : Datatype_long // TypeDefIndex: 2956
{
	// Fields
	private static readonly Type atomicValueType; // 0x0
	private static readonly Type listValueType; // 0x8
	private static readonly FacetsChecker numeric10FacetsChecker; // 0x10

	// Properties
	internal override FacetsChecker FacetsChecker { get; }
	public override XmlTypeCode TypeCode { get; }
	public override Type ValueType { get; }
	internal override Type ListValueType { get; }

	// Methods

	// RVA: 0x123B07C Offset: 0x123707C VA: 0x123B07C Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x123B0D4 Offset: 0x12370D4 VA: 0x123B0D4 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x123B0DC Offset: 0x12370DC VA: 0x123B0DC Slot: 14
	internal override int Compare(object value1, object value2) { }

	// RVA: 0x123B170 Offset: 0x1237170 VA: 0x123B170 Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x123B1C8 Offset: 0x12371C8 VA: 0x123B1C8 Slot: 26
	internal override Type get_ListValueType() { }

	// RVA: 0x123B220 Offset: 0x1237220 VA: 0x123B220 Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x123256C Offset: 0x122E56C VA: 0x123256C
	public void .ctor() { }

	// RVA: 0x123B360 Offset: 0x1237360 VA: 0x123B360
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_short : Datatype_int // TypeDefIndex: 2957
{
	// Fields
	private static readonly Type atomicValueType; // 0x0
	private static readonly Type listValueType; // 0x8
	private static readonly FacetsChecker numeric10FacetsChecker; // 0x10

	// Properties
	internal override FacetsChecker FacetsChecker { get; }
	public override XmlTypeCode TypeCode { get; }
	public override Type ValueType { get; }
	internal override Type ListValueType { get; }

	// Methods

	// RVA: 0x123B4C0 Offset: 0x12374C0 VA: 0x123B4C0 Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x123B518 Offset: 0x1237518 VA: 0x123B518 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x123B520 Offset: 0x1237520 VA: 0x123B520 Slot: 14
	internal override int Compare(object value1, object value2) { }

	// RVA: 0x123B5B4 Offset: 0x12375B4 VA: 0x123B5B4 Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x123B60C Offset: 0x123760C VA: 0x123B60C Slot: 26
	internal override Type get_ListValueType() { }

	// RVA: 0x123B664 Offset: 0x1237664 VA: 0x123B664 Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x1232888 Offset: 0x122E888 VA: 0x1232888
	public void .ctor() { }

	// RVA: 0x123B7A4 Offset: 0x12377A4 VA: 0x123B7A4
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_byte : Datatype_short // TypeDefIndex: 2958
{
	// Fields
	private static readonly Type atomicValueType; // 0x0
	private static readonly Type listValueType; // 0x8
	private static readonly FacetsChecker numeric10FacetsChecker; // 0x10

	// Properties
	internal override FacetsChecker FacetsChecker { get; }
	public override XmlTypeCode TypeCode { get; }
	public override Type ValueType { get; }
	internal override Type ListValueType { get; }

	// Methods

	// RVA: 0x123B904 Offset: 0x1237904 VA: 0x123B904 Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x123B95C Offset: 0x123795C VA: 0x123B95C Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x123B964 Offset: 0x1237964 VA: 0x123B964 Slot: 14
	internal override int Compare(object value1, object value2) { }

	// RVA: 0x123B9F8 Offset: 0x12379F8 VA: 0x123B9F8 Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x123BA50 Offset: 0x1237A50 VA: 0x123BA50 Slot: 26
	internal override Type get_ListValueType() { }

	// RVA: 0x123BAA8 Offset: 0x1237AA8 VA: 0x123BAA8 Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x1231EDC Offset: 0x122DEDC VA: 0x1231EDC
	public void .ctor() { }

	// RVA: 0x123BBE8 Offset: 0x1237BE8 VA: 0x123BBE8
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_nonNegativeInteger : Datatype_integer // TypeDefIndex: 2959
{
	// Fields
	private static readonly FacetsChecker numeric10FacetsChecker; // 0x0

	// Properties
	internal override FacetsChecker FacetsChecker { get; }
	public override XmlTypeCode TypeCode { get; }
	internal override bool HasValueFacets { get; }

	// Methods

	// RVA: 0x123BD48 Offset: 0x1237D48 VA: 0x123BD48 Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x123BDA0 Offset: 0x1237DA0 VA: 0x123BDA0 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x123BDA8 Offset: 0x1237DA8 VA: 0x123BDA8 Slot: 11
	internal override bool get_HasValueFacets() { }

	// RVA: 0x123272C Offset: 0x122E72C VA: 0x123272C
	public void .ctor() { }

	// RVA: 0x123BDB0 Offset: 0x1237DB0 VA: 0x123BDB0
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_unsignedLong : Datatype_nonNegativeInteger // TypeDefIndex: 2960
{
	// Fields
	private static readonly Type atomicValueType; // 0x0
	private static readonly Type listValueType; // 0x8
	private static readonly FacetsChecker numeric10FacetsChecker; // 0x10

	// Properties
	internal override FacetsChecker FacetsChecker { get; }
	public override XmlTypeCode TypeCode { get; }
	public override Type ValueType { get; }
	internal override Type ListValueType { get; }

	// Methods

	// RVA: 0x123BEB8 Offset: 0x1237EB8 VA: 0x123BEB8 Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x123BF10 Offset: 0x1237F10 VA: 0x123BF10 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x123BF18 Offset: 0x1237F18 VA: 0x123BF18 Slot: 14
	internal override int Compare(object value1, object value2) { }

	// RVA: 0x123BFAC Offset: 0x1237FAC VA: 0x123BFAC Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x123C004 Offset: 0x1238004 VA: 0x123C004 Slot: 26
	internal override Type get_ListValueType() { }

	// RVA: 0x123C05C Offset: 0x123805C VA: 0x123C05C Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x1232AE4 Offset: 0x122EAE4 VA: 0x1232AE4
	public void .ctor() { }

	// RVA: 0x123C1E0 Offset: 0x12381E0 VA: 0x123C1E0
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_unsignedInt : Datatype_unsignedLong // TypeDefIndex: 2961
{
	// Fields
	private static readonly Type atomicValueType; // 0x0
	private static readonly Type listValueType; // 0x8
	private static readonly FacetsChecker numeric10FacetsChecker; // 0x10

	// Properties
	internal override FacetsChecker FacetsChecker { get; }
	public override XmlTypeCode TypeCode { get; }
	public override Type ValueType { get; }
	internal override Type ListValueType { get; }

	// Methods

	// RVA: 0x123C358 Offset: 0x1238358 VA: 0x123C358 Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x123C3B0 Offset: 0x12383B0 VA: 0x123C3B0 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x123C3B8 Offset: 0x12383B8 VA: 0x123C3B8 Slot: 14
	internal override int Compare(object value1, object value2) { }

	// RVA: 0x123C44C Offset: 0x123844C VA: 0x123C44C Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x123C4A4 Offset: 0x12384A4 VA: 0x123C4A4 Slot: 26
	internal override Type get_ListValueType() { }

	// RVA: 0x123C4FC Offset: 0x12384FC VA: 0x123C4FC Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x1232A90 Offset: 0x122EA90 VA: 0x1232A90
	public void .ctor() { }

	// RVA: 0x123C63C Offset: 0x123863C VA: 0x123C63C
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_unsignedShort : Datatype_unsignedInt // TypeDefIndex: 2962
{
	// Fields
	private static readonly Type atomicValueType; // 0x0
	private static readonly Type listValueType; // 0x8
	private static readonly FacetsChecker numeric10FacetsChecker; // 0x10

	// Properties
	internal override FacetsChecker FacetsChecker { get; }
	public override XmlTypeCode TypeCode { get; }
	public override Type ValueType { get; }
	internal override Type ListValueType { get; }

	// Methods

	// RVA: 0x123C7B4 Offset: 0x12387B4 VA: 0x123C7B4 Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x123C80C Offset: 0x123880C VA: 0x123C80C Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x123C814 Offset: 0x1238814 VA: 0x123C814 Slot: 14
	internal override int Compare(object value1, object value2) { }

	// RVA: 0x123C8A8 Offset: 0x12388A8 VA: 0x123C8A8 Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x123C900 Offset: 0x1238900 VA: 0x123C900 Slot: 26
	internal override Type get_ListValueType() { }

	// RVA: 0x123C958 Offset: 0x1238958 VA: 0x123C958 Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x1232B38 Offset: 0x122EB38 VA: 0x1232B38
	public void .ctor() { }

	// RVA: 0x123CA98 Offset: 0x1238A98 VA: 0x123CA98
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_unsignedByte : Datatype_unsignedShort // TypeDefIndex: 2963
{
	// Fields
	private static readonly Type atomicValueType; // 0x0
	private static readonly Type listValueType; // 0x8
	private static readonly FacetsChecker numeric10FacetsChecker; // 0x10

	// Properties
	internal override FacetsChecker FacetsChecker { get; }
	public override XmlTypeCode TypeCode { get; }
	public override Type ValueType { get; }
	internal override Type ListValueType { get; }

	// Methods

	// RVA: 0x123CC10 Offset: 0x1238C10 VA: 0x123CC10 Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x123CC68 Offset: 0x1238C68 VA: 0x123CC68 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x123CC70 Offset: 0x1238C70 VA: 0x123CC70 Slot: 14
	internal override int Compare(object value1, object value2) { }

	// RVA: 0x123CD04 Offset: 0x1238D04 VA: 0x123CD04 Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x123CD5C Offset: 0x1238D5C VA: 0x123CD5C Slot: 26
	internal override Type get_ListValueType() { }

	// RVA: 0x123CDB4 Offset: 0x1238DB4 VA: 0x123CDB4 Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x1232A3C Offset: 0x122EA3C VA: 0x1232A3C
	public void .ctor() { }

	// RVA: 0x123CEF4 Offset: 0x1238EF4 VA: 0x123CEF4
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_positiveInteger : Datatype_nonNegativeInteger // TypeDefIndex: 2964
{
	// Fields
	private static readonly FacetsChecker numeric10FacetsChecker; // 0x0

	// Properties
	internal override FacetsChecker FacetsChecker { get; }
	public override XmlTypeCode TypeCode { get; }

	// Methods

	// RVA: 0x123D06C Offset: 0x123906C VA: 0x123D06C Slot: 18
	internal override FacetsChecker get_FacetsChecker() { }

	// RVA: 0x123D0C4 Offset: 0x12390C4 VA: 0x123D0C4 Slot: 8
	public override XmlTypeCode get_TypeCode() { }

	// RVA: 0x123278C Offset: 0x122E78C VA: 0x123278C
	public void .ctor() { }

	// RVA: 0x123D0CC Offset: 0x12390CC VA: 0x123D0CC
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_doubleXdr : Datatype_double // TypeDefIndex: 2965
{
	// Methods

	// RVA: 0x123D1D4 Offset: 0x12391D4 VA: 0x123D1D4 Slot: 6
	public override object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr) { }

	// RVA: 0x12321E4 Offset: 0x122E1E4 VA: 0x12321E4
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_floatXdr : Datatype_float // TypeDefIndex: 2966
{
	// Methods

	// RVA: 0x123D3BC Offset: 0x12393BC VA: 0x123D3BC Slot: 6
	public override object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr) { }

	// RVA: 0x12324BC Offset: 0x122E4BC VA: 0x12324BC
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_QNameXdr : Datatype_anySimpleType // TypeDefIndex: 2967
{
	// Fields
	private static readonly Type atomicValueType; // 0x0
	private static readonly Type listValueType; // 0x8

	// Properties
	public override XmlTokenizedType TokenizedType { get; }
	public override Type ValueType { get; }
	internal override Type ListValueType { get; }

	// Methods

	// RVA: 0x123D5A4 Offset: 0x12395A4 VA: 0x123D5A4 Slot: 5
	public override XmlTokenizedType get_TokenizedType() { }

	// RVA: 0x123D5AC Offset: 0x12395AC VA: 0x123D5AC Slot: 6
	public override object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr) { }

	// RVA: 0x123D818 Offset: 0x1239818 VA: 0x123D818 Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x123D870 Offset: 0x1239870 VA: 0x123D870 Slot: 26
	internal override Type get_ListValueType() { }

	// RVA: 0x1232834 Offset: 0x122E834 VA: 0x1232834
	public void .ctor() { }

	// RVA: 0x123D8C8 Offset: 0x12398C8 VA: 0x123D8C8
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_ENUMERATION : Datatype_NMTOKEN // TypeDefIndex: 2968
{
	// Properties
	public override XmlTokenizedType TokenizedType { get; }

	// Methods

	// RVA: 0x123D984 Offset: 0x1239984 VA: 0x123D984 Slot: 5
	public override XmlTokenizedType get_TokenizedType() { }

	// RVA: 0x1232410 Offset: 0x122E410 VA: 0x1232410
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_char : Datatype_anySimpleType // TypeDefIndex: 2969
{
	// Fields
	private static readonly Type atomicValueType; // 0x0
	private static readonly Type listValueType; // 0x8

	// Properties
	public override Type ValueType { get; }
	internal override Type ListValueType { get; }
	internal override RestrictionFlags ValidRestrictionFlags { get; }

	// Methods

	// RVA: 0x123D98C Offset: 0x123998C VA: 0x123D98C Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x123D9E4 Offset: 0x12399E4 VA: 0x123D9E4 Slot: 26
	internal override Type get_ListValueType() { }

	// RVA: 0x123DA3C Offset: 0x1239A3C VA: 0x123DA3C Slot: 27
	internal override RestrictionFlags get_ValidRestrictionFlags() { }

	// RVA: 0x123DA44 Offset: 0x1239A44 VA: 0x123DA44 Slot: 14
	internal override int Compare(object value1, object value2) { }

	// RVA: 0x123DAE8 Offset: 0x1239AE8 VA: 0x123DAE8 Slot: 6
	public override object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr) { }

	// RVA: 0x123DCB8 Offset: 0x1239CB8 VA: 0x123DCB8 Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x1231F30 Offset: 0x122DF30 VA: 0x1231F30
	public void .ctor() { }

	// RVA: 0x123DD64 Offset: 0x1239D64 VA: 0x123DD64
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_fixed : Datatype_decimal // TypeDefIndex: 2970
{
	// Methods

	// RVA: 0x123DE20 Offset: 0x1239E20 VA: 0x123DE20 Slot: 6
	public override object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr) { }

	// RVA: 0x123E348 Offset: 0x123A348 VA: 0x123E348 Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x1232414 Offset: 0x122E414 VA: 0x1232414
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Datatype_uuid : Datatype_anySimpleType // TypeDefIndex: 2971
{
	// Fields
	private static readonly Type atomicValueType; // 0x0
	private static readonly Type listValueType; // 0x8

	// Properties
	public override Type ValueType { get; }
	internal override Type ListValueType { get; }
	internal override RestrictionFlags ValidRestrictionFlags { get; }

	// Methods

	// RVA: 0x123E4B0 Offset: 0x123A4B0 VA: 0x123E4B0 Slot: 4
	public override Type get_ValueType() { }

	// RVA: 0x123E508 Offset: 0x123A508 VA: 0x123E508 Slot: 26
	internal override Type get_ListValueType() { }

	// RVA: 0x123E560 Offset: 0x123A560 VA: 0x123E560 Slot: 27
	internal override RestrictionFlags get_ValidRestrictionFlags() { }

	// RVA: 0x123E568 Offset: 0x123A568 VA: 0x123E568 Slot: 14
	internal override int Compare(object value1, object value2) { }

	// RVA: 0x123E604 Offset: 0x123A604 VA: 0x123E604 Slot: 6
	public override object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr) { }

	// RVA: 0x123E7D4 Offset: 0x123A7D4 VA: 0x123E7D4 Slot: 16
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue) { }

	// RVA: 0x1232B8C Offset: 0x122EB8C VA: 0x1232B8C
	public void .ctor() { }

	// RVA: 0x123E888 Offset: 0x123A888 VA: 0x123E888
	private static void .cctor() { }
}


// Namespace: 
private class DtdValidator.NamespaceManager : XmlNamespaceManager // TypeDefIndex: 2972
{
	// Methods

	// RVA: 0x1240EE0 Offset: 0x123CEE0 VA: 0x1240EE0 Slot: 15
	public override string LookupNamespace(string prefix) { }

	// RVA: 0x1240ED8 Offset: 0x123CED8 VA: 0x1240ED8
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal sealed class DtdValidator : BaseValidator // TypeDefIndex: 2973
{
	// Fields
	private static DtdValidator.NamespaceManager namespaceManager; // 0x0
	private HWStack validationStack; // 0x80
	private Hashtable attPresence; // 0x88
	private XmlQualifiedName name; // 0x90
	private Hashtable IDs; // 0x98
	private IdRefNode idRefListHead; // 0xA0
	private bool processIdentityConstraints; // 0xA8

	// Properties
	public override bool PreserveWhitespace { get; }

	// Methods

	// RVA: 0x123E944 Offset: 0x123A944 VA: 0x123E944
	internal void .ctor(XmlValidatingReaderImpl reader, IValidationEventHandling eventHandling, bool processIdentityConstraints) { }

	// RVA: 0x123E9E4 Offset: 0x123A9E4 VA: 0x123E9E4
	private void Init() { }

	// RVA: 0x123EBEC Offset: 0x123ABEC VA: 0x123EBEC Slot: 5
	public override void Validate() { }

	// RVA: 0x123EEEC Offset: 0x123AEEC VA: 0x123EEEC
	private bool MeetsStandAloneConstraint() { }

	// RVA: 0x123EF8C Offset: 0x123AF8C VA: 0x123EF8C
	private void ValidatePIComment() { }

	// RVA: 0x123EDE4 Offset: 0x123ADE4 VA: 0x123EDE4
	private void ValidateElement() { }

	// RVA: 0x123F334 Offset: 0x123B334 VA: 0x123F334
	private void ValidateChildElement() { }

	// RVA: 0x123F584 Offset: 0x123B584 VA: 0x123F584
	private void ValidateStartElement() { }

	// RVA: 0x123FF50 Offset: 0x123BF50 VA: 0x123FF50
	private void ValidateEndStartElement() { }

	// RVA: 0x123F478 Offset: 0x123B478 VA: 0x123F478
	private void ProcessElement() { }

	// RVA: 0x1240124 Offset: 0x123C124 VA: 0x1240124 Slot: 6
	public override void CompleteValidation() { }

	// RVA: 0x123F190 Offset: 0x123B190 VA: 0x123F190
	private void ValidateEndElement() { }

	// RVA: 0x1240314 Offset: 0x123C314 VA: 0x1240314 Slot: 4
	public override bool get_PreserveWhitespace() { }

	// RVA: 0x124034C Offset: 0x123C34C VA: 0x124034C
	private void ProcessTokenizedType(XmlTokenizedType ttype, string name) { }

	// RVA: 0x123F9E0 Offset: 0x123B9E0 VA: 0x123F9E0
	private void CheckValue(string value, SchemaAttDef attdef) { }

	// RVA: 0x1240560 Offset: 0x123C560 VA: 0x1240560
	internal void AddID(string name, object node) { }

	// RVA: 0x12405F0 Offset: 0x123C5F0 VA: 0x12405F0 Slot: 7
	public override object FindId(string name) { }

	// RVA: 0x123F03C Offset: 0x123B03C VA: 0x123F03C
	private bool GenEntity(XmlQualifiedName qname) { }

	// RVA: 0x124060C Offset: 0x123C60C VA: 0x124060C
	private SchemaEntity GetEntity(XmlQualifiedName qname, bool fParameterEntity) { }

	// RVA: 0x1240210 Offset: 0x123C210 VA: 0x1240210
	private void CheckForwardRefs() { }

	// RVA: 0x123EB14 Offset: 0x123AB14 VA: 0x123EB14
	private void Push(XmlQualifiedName elementName) { }

	// RVA: 0x124016C Offset: 0x123C16C VA: 0x124016C
	private bool Pop() { }

	// RVA: 0x12406A0 Offset: 0x123C6A0 VA: 0x12406A0
	public static void SetDefaultTypedValue(SchemaAttDef attdef, IDtdParserAdapter readerAdapter) { }

	// RVA: 0x1240A54 Offset: 0x123CA54 VA: 0x1240A54
	public static void CheckDefaultValue(SchemaAttDef attdef, SchemaInfo sinfo, IValidationEventHandling eventHandling, string baseUriStr) { }

	// RVA: 0x1240E68 Offset: 0x123CE68 VA: 0x1240E68
	private static void .cctor() { }
}


// Namespace: 
private struct FacetsChecker.FacetsCompiler.Map // TypeDefIndex: 2974
{
	// Fields
	internal char match; // 0x0
	internal string replacement; // 0x8

	// Methods

	// RVA: 0x1244A48 Offset: 0x1240A48 VA: 0x1244A48
	internal void .ctor(char m, string r) { }
}


// Namespace: 
private struct FacetsChecker.FacetsCompiler // TypeDefIndex: 2975
{
	// Fields
	private DatatypeImplementation datatype; // 0x0
	private RestrictionFacets derivedRestriction; // 0x8
	private RestrictionFlags baseFlags; // 0x10
	private RestrictionFlags baseFixedFlags; // 0x14
	private RestrictionFlags validRestrictionFlags; // 0x18
	private XmlSchemaDatatype nonNegativeInt; // 0x20
	private XmlSchemaDatatype builtInType; // 0x28
	private XmlTypeCode builtInEnum; // 0x30
	private bool firstPattern; // 0x34
	private StringBuilder regStr; // 0x38
	private XmlSchemaPatternFacet pattern_facet; // 0x40
	private static readonly FacetsChecker.FacetsCompiler.Map[] c_map; // 0x0

	// Methods

	// RVA: 0x12415F4 Offset: 0x123D5F4 VA: 0x12415F4
	public void .ctor(DatatypeImplementation baseDatatype, RestrictionFacets restriction) { }

	// RVA: 0x1241780 Offset: 0x123D780 VA: 0x1241780
	internal void CompileLengthFacet(XmlSchemaFacet facet) { }

	// RVA: 0x1241AA4 Offset: 0x123DAA4 VA: 0x1241AA4
	internal void CompileMinLengthFacet(XmlSchemaFacet facet) { }

	// RVA: 0x1241D9C Offset: 0x123DD9C VA: 0x1241D9C
	internal void CompileMaxLengthFacet(XmlSchemaFacet facet) { }

	// RVA: 0x1242094 Offset: 0x123E094 VA: 0x1242094
	internal void CompilePatternFacet(XmlSchemaPatternFacet facet) { }

	// RVA: 0x12421F8 Offset: 0x123E1F8 VA: 0x12421F8
	internal void CompileEnumerationFacet(XmlSchemaFacet facet, IXmlNamespaceResolver nsmgr, XmlNameTable nameTable) { }

	// RVA: 0x1242340 Offset: 0x123E340 VA: 0x1242340
	internal void CompileWhitespaceFacet(XmlSchemaFacet facet) { }

	// RVA: 0x12429F0 Offset: 0x123E9F0 VA: 0x12429F0
	internal void CompileMaxInclusiveFacet(XmlSchemaFacet facet) { }

	// RVA: 0x1242BA0 Offset: 0x123EBA0 VA: 0x1242BA0
	internal void CompileMaxExclusiveFacet(XmlSchemaFacet facet) { }

	// RVA: 0x1242690 Offset: 0x123E690 VA: 0x1242690
	internal void CompileMinInclusiveFacet(XmlSchemaFacet facet) { }

	// RVA: 0x1242840 Offset: 0x123E840 VA: 0x1242840
	internal void CompileMinExclusiveFacet(XmlSchemaFacet facet) { }

	// RVA: 0x1242D50 Offset: 0x123ED50 VA: 0x1242D50
	internal void CompileTotalDigitsFacet(XmlSchemaFacet facet) { }

	// RVA: 0x1243050 Offset: 0x123F050 VA: 0x1243050
	internal void CompileFractionDigitsFacet(XmlSchemaFacet facet) { }

	// RVA: 0x12432F8 Offset: 0x123F2F8 VA: 0x12432F8
	internal void FinishFacetCompile() { }

	// RVA: 0x1243DD8 Offset: 0x123FDD8 VA: 0x1243DD8
	private void CheckValue(object value, XmlSchemaFacet facet) { }

	// RVA: 0x1243660 Offset: 0x123F660 VA: 0x1243660
	internal void CompileFacetCombinations() { }

	// RVA: 0x124448C Offset: 0x124048C VA: 0x124448C
	private void CopyFacetsFromBaseType() { }

	// RVA: 0x1243C58 Offset: 0x123FC58 VA: 0x1243C58
	private object ParseFacetValue(XmlSchemaDatatype datatype, XmlSchemaFacet facet, string code, IXmlNamespaceResolver nsmgr, XmlNameTable nameTable) { }

	// RVA: 0x1244230 Offset: 0x1240230 VA: 0x1244230
	private static string Preprocess(string pattern) { }

	// RVA: 0x1243B5C Offset: 0x123FB5C VA: 0x1243B5C
	private void CheckProhibitedFlag(XmlSchemaFacet facet, RestrictionFlags flag, string errorCode) { }

	// RVA: 0x1243BE8 Offset: 0x123FBE8 VA: 0x1243BE8
	private void CheckDupFlag(XmlSchemaFacet facet, RestrictionFlags flag, string errorCode) { }

	// RVA: 0x1243D9C Offset: 0x123FD9C VA: 0x1243D9C
	private void SetFlag(XmlSchemaFacet facet, RestrictionFlags flag) { }

	// RVA: 0x1244858 Offset: 0x1240858 VA: 0x1244858
	private void SetFlag(RestrictionFlags flag) { }

	// RVA: 0x1244894 Offset: 0x1240894 VA: 0x1244894
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal abstract class FacetsChecker // TypeDefIndex: 2976
{
	// Methods

	// RVA: 0x1240EE8 Offset: 0x123CEE8 VA: 0x1240EE8 Slot: 4
	internal virtual Exception CheckLexicalFacets(ref string parseString, XmlSchemaDatatype datatype) { }

	// RVA: 0x1241170 Offset: 0x123D170 VA: 0x1241170 Slot: 5
	internal virtual Exception CheckValueFacets(object value, XmlSchemaDatatype datatype) { }

	// RVA: 0x1241178 Offset: 0x123D178 VA: 0x1241178 Slot: 6
	internal virtual Exception CheckValueFacets(Decimal value, XmlSchemaDatatype datatype) { }

	// RVA: 0x1241180 Offset: 0x123D180 VA: 0x1241180 Slot: 7
	internal virtual Exception CheckValueFacets(long value, XmlSchemaDatatype datatype) { }

	// RVA: 0x1241188 Offset: 0x123D188 VA: 0x1241188 Slot: 8
	internal virtual Exception CheckValueFacets(int value, XmlSchemaDatatype datatype) { }

	// RVA: 0x1241190 Offset: 0x123D190 VA: 0x1241190 Slot: 9
	internal virtual Exception CheckValueFacets(short value, XmlSchemaDatatype datatype) { }

	// RVA: 0x1241198 Offset: 0x123D198 VA: 0x1241198 Slot: 10
	internal virtual Exception CheckValueFacets(DateTime value, XmlSchemaDatatype datatype) { }

	// RVA: 0x12411A0 Offset: 0x123D1A0 VA: 0x12411A0 Slot: 11
	internal virtual Exception CheckValueFacets(double value, XmlSchemaDatatype datatype) { }

	// RVA: 0x12411A8 Offset: 0x123D1A8 VA: 0x12411A8 Slot: 12
	internal virtual Exception CheckValueFacets(float value, XmlSchemaDatatype datatype) { }

	// RVA: 0x12411B0 Offset: 0x123D1B0 VA: 0x12411B0 Slot: 13
	internal virtual Exception CheckValueFacets(string value, XmlSchemaDatatype datatype) { }

	// RVA: 0x12411B8 Offset: 0x123D1B8 VA: 0x12411B8 Slot: 14
	internal virtual Exception CheckValueFacets(byte[] value, XmlSchemaDatatype datatype) { }

	// RVA: 0x12411C0 Offset: 0x123D1C0 VA: 0x12411C0 Slot: 15
	internal virtual Exception CheckValueFacets(TimeSpan value, XmlSchemaDatatype datatype) { }

	// RVA: 0x12411C8 Offset: 0x123D1C8 VA: 0x12411C8 Slot: 16
	internal virtual Exception CheckValueFacets(XmlQualifiedName value, XmlSchemaDatatype datatype) { }

	// RVA: 0x1240F2C Offset: 0x123CF2C VA: 0x1240F2C
	internal void CheckWhitespaceFacets(ref string s, XmlSchemaDatatype datatype) { }

	// RVA: 0x1241014 Offset: 0x123D014 VA: 0x1241014
	internal Exception CheckPatternFacets(RestrictionFacets restriction, string value) { }

	// RVA: 0x12411D0 Offset: 0x123D1D0 VA: 0x12411D0 Slot: 17
	internal virtual bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype) { }

	// RVA: 0x12411D8 Offset: 0x123D1D8 VA: 0x12411D8 Slot: 18
	internal virtual RestrictionFacets ConstructRestriction(DatatypeImplementation datatype, XmlSchemaObjectCollection facets, XmlNameTable nameTable) { }

	// RVA: 0x1243A28 Offset: 0x123FA28 VA: 0x1243A28
	internal static Decimal Power(int x, int y) { }

	// RVA: 0x1243B54 Offset: 0x123FB54 VA: 0x1243B54
	protected void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class Numeric10FacetsChecker : FacetsChecker // TypeDefIndex: 2977
{
	// Fields
	private static readonly char[] signs; // 0x0
	private Decimal maxValue; // 0x10
	private Decimal minValue; // 0x20

	// Methods

	// RVA: 0x1237E84 Offset: 0x1233E84 VA: 0x1237E84
	internal void .ctor(Decimal minVal, Decimal maxVal) { }

	// RVA: 0x1244A54 Offset: 0x1240A54 VA: 0x1244A54 Slot: 5
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype) { }

	// RVA: 0x1244AC4 Offset: 0x1240AC4 VA: 0x1244AC4 Slot: 6
	internal override Exception CheckValueFacets(Decimal value, XmlSchemaDatatype datatype) { }

	// RVA: 0x1245198 Offset: 0x1241198 VA: 0x1245198 Slot: 7
	internal override Exception CheckValueFacets(long value, XmlSchemaDatatype datatype) { }

	// RVA: 0x1245224 Offset: 0x1241224 VA: 0x1245224 Slot: 8
	internal override Exception CheckValueFacets(int value, XmlSchemaDatatype datatype) { }

	// RVA: 0x12452B0 Offset: 0x12412B0 VA: 0x12452B0 Slot: 9
	internal override Exception CheckValueFacets(short value, XmlSchemaDatatype datatype) { }

	// RVA: 0x124533C Offset: 0x124133C VA: 0x124533C Slot: 17
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype) { }

	// RVA: 0x1245074 Offset: 0x1241074 VA: 0x1245074
	internal bool MatchEnumeration(Decimal value, ArrayList enumeration, XmlValueConverter valueConverter) { }

	// RVA: 0x123E0D8 Offset: 0x123A0D8 VA: 0x123E0D8
	internal Exception CheckTotalAndFractionDigits(Decimal value, int totalDigits, int fractionDigits, bool checkTotal, bool checkFraction) { }

	// RVA: 0x12453C0 Offset: 0x12413C0 VA: 0x12453C0
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class Numeric2FacetsChecker : FacetsChecker // TypeDefIndex: 2978
{
	// Methods

	// RVA: 0x1245454 Offset: 0x1241454 VA: 0x1245454 Slot: 5
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype) { }

	// RVA: 0x12454B4 Offset: 0x12414B4 VA: 0x12454B4 Slot: 11
	internal override Exception CheckValueFacets(double value, XmlSchemaDatatype datatype) { }

	// RVA: 0x1245830 Offset: 0x1241830 VA: 0x1245830 Slot: 12
	internal override Exception CheckValueFacets(float value, XmlSchemaDatatype datatype) { }

	// RVA: 0x1245840 Offset: 0x1241840 VA: 0x1245840 Slot: 17
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype) { }

	// RVA: 0x124576C Offset: 0x124176C VA: 0x124576C
	private bool MatchEnumeration(double value, ArrayList enumeration, XmlValueConverter valueConverter) { }

	// RVA: 0x1231D50 Offset: 0x122DD50 VA: 0x1231D50
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class DurationFacetsChecker : FacetsChecker // TypeDefIndex: 2979
{
	// Methods

	// RVA: 0x12458B8 Offset: 0x12418B8 VA: 0x12458B8 Slot: 5
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype) { }

	// RVA: 0x12459CC Offset: 0x12419CC VA: 0x12459CC Slot: 15
	internal override Exception CheckValueFacets(TimeSpan value, XmlSchemaDatatype datatype) { }

	// RVA: 0x1245E44 Offset: 0x1241E44 VA: 0x1245E44 Slot: 17
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype) { }

	// RVA: 0x1245D2C Offset: 0x1241D2C VA: 0x1245D2C
	private bool MatchEnumeration(TimeSpan value, ArrayList enumeration) { }

	// RVA: 0x1231D68 Offset: 0x122DD68 VA: 0x1231D68
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class DateTimeFacetsChecker : FacetsChecker // TypeDefIndex: 2980
{
	// Methods

	// RVA: 0x1245EBC Offset: 0x1241EBC VA: 0x1245EBC Slot: 5
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype) { }

	// RVA: 0x1245F20 Offset: 0x1241F20 VA: 0x1245F20 Slot: 10
	internal override Exception CheckValueFacets(DateTime value, XmlSchemaDatatype datatype) { }

	// RVA: 0x1246454 Offset: 0x1242454 VA: 0x1246454 Slot: 17
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype) { }

	// RVA: 0x1246314 Offset: 0x1242314 VA: 0x1246314
	private bool MatchEnumeration(DateTime value, ArrayList enumeration, XmlSchemaDatatype datatype) { }

	// RVA: 0x1231D60 Offset: 0x122DD60 VA: 0x1231D60
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class StringFacetsChecker : FacetsChecker // TypeDefIndex: 2981
{
	// Fields
	private static Regex languagePattern; // 0x0

	// Properties
	private static Regex LanguagePattern { get; }

	// Methods

	// RVA: 0x12464B0 Offset: 0x12424B0 VA: 0x12464B0
	private static Regex get_LanguagePattern() { }

	// RVA: 0x1246560 Offset: 0x1242560 VA: 0x1246560 Slot: 5
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype) { }

	// RVA: 0x12465C0 Offset: 0x12425C0 VA: 0x12465C0 Slot: 13
	internal override Exception CheckValueFacets(string value, XmlSchemaDatatype datatype) { }

	// RVA: 0x123996C Offset: 0x123596C VA: 0x123996C
	internal Exception CheckValueFacets(string value, XmlSchemaDatatype datatype, bool verifyUri) { }

	// RVA: 0x12469EC Offset: 0x12429EC VA: 0x12469EC Slot: 17
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype) { }

	// RVA: 0x1246810 Offset: 0x1242810 VA: 0x1246810
	private bool MatchEnumeration(string value, ArrayList enumeration, XmlSchemaDatatype datatype) { }

	// RVA: 0x12465C8 Offset: 0x12425C8 VA: 0x12465C8
	private Exception CheckBuiltInFacets(string s, XmlTypeCode typeCode, bool verifyUri) { }

	// RVA: 0x1231D40 Offset: 0x122DD40 VA: 0x1231D40
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class QNameFacetsChecker : FacetsChecker // TypeDefIndex: 2982
{
	// Methods

	// RVA: 0x1246A48 Offset: 0x1242A48 VA: 0x1246A48 Slot: 5
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype) { }

	// RVA: 0x1246B74 Offset: 0x1242B74 VA: 0x1246B74 Slot: 16
	internal override Exception CheckValueFacets(XmlQualifiedName value, XmlSchemaDatatype datatype) { }

	// RVA: 0x1246E68 Offset: 0x1242E68 VA: 0x1246E68 Slot: 17
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype) { }

	// RVA: 0x1246D54 Offset: 0x1242D54 VA: 0x1246D54
	private bool MatchEnumeration(XmlQualifiedName value, ArrayList enumeration) { }

	// RVA: 0x1231D78 Offset: 0x122DD78 VA: 0x1231D78
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class MiscFacetsChecker : FacetsChecker // TypeDefIndex: 2983
{
	// Methods

	// RVA: 0x1231D48 Offset: 0x122DD48 VA: 0x1231D48
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class BinaryFacetsChecker : FacetsChecker // TypeDefIndex: 2984
{
	// Methods

	// RVA: 0x1246F7C Offset: 0x1242F7C VA: 0x1246F7C Slot: 5
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype) { }

	// RVA: 0x124700C Offset: 0x124300C VA: 0x124700C Slot: 14
	internal override Exception CheckValueFacets(byte[] value, XmlSchemaDatatype datatype) { }

	// RVA: 0x12472FC Offset: 0x12432FC VA: 0x12472FC Slot: 17
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype) { }

	// RVA: 0x12471D8 Offset: 0x12431D8 VA: 0x12471D8
	private bool MatchEnumeration(byte[] value, ArrayList enumeration, XmlSchemaDatatype datatype) { }

	// RVA: 0x1231D58 Offset: 0x122DD58 VA: 0x1231D58
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class ListFacetsChecker : FacetsChecker // TypeDefIndex: 2985
{
	// Methods

	// RVA: 0x1247380 Offset: 0x1243380 VA: 0x1247380 Slot: 5
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype) { }

	// RVA: 0x12475D0 Offset: 0x12435D0 VA: 0x12475D0 Slot: 17
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype) { }

	// RVA: 0x1231D70 Offset: 0x122DD70 VA: 0x1231D70
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class UnionFacetsChecker : FacetsChecker // TypeDefIndex: 2986
{
	// Methods

	// RVA: 0x124768C Offset: 0x124368C VA: 0x124768C Slot: 5
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype) { }

	// RVA: 0x1247784 Offset: 0x1243784 VA: 0x1247784 Slot: 17
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype) { }

	// RVA: 0x1231D80 Offset: 0x122DD80 VA: 0x1231D80
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public interface IXmlSchemaInfo // TypeDefIndex: 2987
{
	// Properties
	public abstract XmlSchemaValidity Validity { get; }
	public abstract bool IsDefault { get; }
	public abstract bool IsNil { get; }
	public abstract XmlSchemaSimpleType MemberType { get; }
	public abstract XmlSchemaType SchemaType { get; }
	public abstract XmlSchemaElement SchemaElement { get; }
	public abstract XmlSchemaAttribute SchemaAttribute { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract XmlSchemaValidity get_Validity();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract bool get_IsDefault();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract bool get_IsNil();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract XmlSchemaSimpleType get_MemberType();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract XmlSchemaType get_SchemaType();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract XmlSchemaElement get_SchemaElement();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract XmlSchemaAttribute get_SchemaAttribute();
}


// Namespace: 
public enum XmlSchemaInference.InferenceOption // TypeDefIndex: 2988
{
	// Fields
	public int value__; // 0x0
	public const XmlSchemaInference.InferenceOption Restricted = 0;
	public const XmlSchemaInference.InferenceOption Relaxed = 1;
}


// Namespace: System.Xml.Schema
public sealed class XmlSchemaInference // TypeDefIndex: 2989
{
	// Fields
	internal static XmlQualifiedName ST_boolean; // 0x0
	internal static XmlQualifiedName ST_byte; // 0x8
	internal static XmlQualifiedName ST_unsignedByte; // 0x10
	internal static XmlQualifiedName ST_short; // 0x18
	internal static XmlQualifiedName ST_unsignedShort; // 0x20
	internal static XmlQualifiedName ST_int; // 0x28
	internal static XmlQualifiedName ST_unsignedInt; // 0x30
	internal static XmlQualifiedName ST_long; // 0x38
	internal static XmlQualifiedName ST_unsignedLong; // 0x40
	internal static XmlQualifiedName ST_integer; // 0x48
	internal static XmlQualifiedName ST_decimal; // 0x50
	internal static XmlQualifiedName ST_float; // 0x58
	internal static XmlQualifiedName ST_double; // 0x60
	internal static XmlQualifiedName ST_duration; // 0x68
	internal static XmlQualifiedName ST_dateTime; // 0x70
	internal static XmlQualifiedName ST_time; // 0x78
	internal static XmlQualifiedName ST_date; // 0x80
	internal static XmlQualifiedName ST_gYearMonth; // 0x88
	internal static XmlQualifiedName ST_string; // 0x90
	internal static XmlQualifiedName ST_anySimpleType; // 0x98
	internal static XmlQualifiedName[] SimpleTypes; // 0xA0
	private XmlSchema rootSchema; // 0x10
	private XmlSchemaSet schemaSet; // 0x18
	private XmlReader xtr; // 0x20
	private NameTable nametable; // 0x28
	private string TargetNamespace; // 0x30
	private XmlNamespaceManager NamespaceManager; // 0x38
	private ArrayList schemaList; // 0x40
	private XmlSchemaInference.InferenceOption occurrence; // 0x48
	private XmlSchemaInference.InferenceOption typeInference; // 0x4C

	// Properties
	public XmlSchemaInference.InferenceOption TypeInference { set; }

	// Methods

	// RVA: 0x1247840 Offset: 0x1243840 VA: 0x1247840
	public void set_TypeInference(XmlSchemaInference.InferenceOption value) { }

	// RVA: 0x1247848 Offset: 0x1243848 VA: 0x1247848
	public void .ctor() { }

	// RVA: 0x1247958 Offset: 0x1243958 VA: 0x1247958
	public XmlSchemaSet InferSchema(XmlReader instanceDocument) { }

	// RVA: 0x12479CC Offset: 0x12439CC VA: 0x12479CC
	internal XmlSchemaSet InferSchema1(XmlReader instanceDocument, XmlSchemaSet schemas) { }

	// RVA: 0x1249CBC Offset: 0x1245CBC VA: 0x1249CBC
	private XmlSchemaAttribute AddAttribute(string localName, string prefix, string childURI, string attrValue, bool bCreatingNewType, XmlSchema parentSchema, XmlSchemaObjectCollection addLocation, XmlSchemaObjectTable compiledAttributes) { }

	// RVA: 0x124C500 Offset: 0x1248500 VA: 0x124C500
	private XmlSchema CreateXmlSchema(string targetNS) { }

	// RVA: 0x12483A4 Offset: 0x12443A4 VA: 0x12483A4
	private XmlSchemaElement AddElement(string localName, string prefix, string childURI, XmlSchema parentSchema, XmlSchemaObjectCollection addLocation, int positionWithinCollection) { }

	// RVA: 0x1248980 Offset: 0x1244980 VA: 0x1248980
	internal void InferElement(XmlSchemaElement xse, bool bCreatingNewType, XmlSchema parentSchema) { }

	// RVA: 0x124D194 Offset: 0x1249194 VA: 0x124D194
	private XmlSchemaSimpleContentExtension CheckSimpleContentExtension(XmlSchemaComplexType ct) { }

	// RVA: 0x124C918 Offset: 0x1248918 VA: 0x124C918
	private XmlSchemaType GetEffectiveSchemaType(XmlSchemaElement elem, bool bCreatingNewType) { }

	// RVA: 0x124D75C Offset: 0x124975C VA: 0x124D75C
	internal XmlSchemaElement FindMatchingElement(bool bCreatingNewType, XmlReader xtr, XmlSchemaComplexType ct, ref int lastUsedSeqItem, ref bool bParticleChanged, XmlSchema parentSchema, bool setMaxoccurs) { }

	// RVA: 0x124CA50 Offset: 0x1248A50 VA: 0x124CA50
	internal void ProcessAttributes(ref XmlSchemaElement xse, XmlSchemaType effectiveSchemaType, bool bCreatingNewType, XmlSchema parentSchema) { }

	// RVA: 0x124D6C0 Offset: 0x12496C0 VA: 0x124D6C0
	private void MoveAttributes(XmlSchemaSimpleContentExtension scExtension, XmlSchemaComplexType ct) { }

	// RVA: 0x124D2CC Offset: 0x12492CC VA: 0x124D2CC
	private void MoveAttributes(XmlSchemaComplexType ct, XmlSchemaSimpleContentExtension simpleContentExtension, bool bCreatingNewType) { }

	// RVA: 0x124A858 Offset: 0x1246858 VA: 0x124A858
	internal XmlSchemaAttribute FindAttribute(ICollection attributes, string attrName) { }

	// RVA: 0x124C590 Offset: 0x1248590 VA: 0x124C590
	internal XmlSchemaElement FindGlobalElement(string namespaceURI, string localName, out XmlSchema parentSchema) { }

	// RVA: 0x124E780 Offset: 0x124A780 VA: 0x124E780
	internal XmlSchemaElement FindElement(XmlSchemaObjectCollection elements, string elementName) { }

	// RVA: 0x124A490 Offset: 0x1246490 VA: 0x124A490
	internal XmlSchemaAttribute FindAttributeRef(ICollection attributes, string attributeName, string nsURI) { }

	// RVA: 0x124E8B0 Offset: 0x124A8B0 VA: 0x124E8B0
	internal XmlSchemaElement FindElementRef(XmlSchemaObjectCollection elements, string elementName, string nsURI) { }

	// RVA: 0x124D100 Offset: 0x1249100 VA: 0x124D100
	internal void MakeExistingAttributesOptional(XmlSchemaComplexType ct, XmlSchemaObjectCollection attributesInInstance) { }

	// RVA: 0x124EBD8 Offset: 0x124ABD8 VA: 0x124EBD8
	private void SwitchUseToOptional(XmlSchemaObjectCollection attributes, XmlSchemaObjectCollection attributesInInstance) { }

	// RVA: 0x124ABDC Offset: 0x1246BDC VA: 0x124ABDC
	internal XmlQualifiedName RefineSimpleType(string s, ref int iTypeFlags) { }

	// RVA: 0x124ECFC Offset: 0x124ACFC VA: 0x124ECFC
	internal static int InferSimpleType(string s, ref bool bNeedsRangeCheck) { }

	// RVA: 0x12502A4 Offset: 0x124C2A4 VA: 0x12502A4
	internal static int DateTime(string s, bool bDate, bool bTime) { }

	// RVA: 0x124EA10 Offset: 0x124AA10 VA: 0x124EA10
	private XmlSchemaElement CreateNewElementforChoice(XmlSchemaElement copyElement) { }

	// RVA: 0x124BD28 Offset: 0x1247D28 VA: 0x124BD28
	private static int GetSchemaType(XmlQualifiedName qname) { }

	// RVA: 0x124E5F4 Offset: 0x124A5F4 VA: 0x124E5F4
	internal void SetMinMaxOccurs(XmlSchemaElement el, bool setMaxOccurs) { }

	// RVA: 0x12503B8 Offset: 0x124C3B8 VA: 0x12503B8
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
[Serializable]
public class XmlSchemaInferenceException : XmlSchemaException // TypeDefIndex: 2990
{
	// Methods

	// RVA: 0x10FDA10 Offset: 0x10F9A10 VA: 0x10FDA10
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x10FDA18 Offset: 0x10F9A18 VA: 0x10FDA18 Slot: 10
	public override void GetObjectData(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x10FDA20 Offset: 0x10F9A20 VA: 0x10FDA20
	public void .ctor() { }

	// RVA: 0x10FDA2C Offset: 0x10F9A2C VA: 0x10FDA2C
	internal void .ctor(string res, string arg) { }

	// RVA: 0x10FDAD0 Offset: 0x10F9AD0 VA: 0x10FDAD0
	internal void .ctor(string res, int lineNumber, int linePosition) { }
}


// Namespace: 
public enum NamespaceList.ListType // TypeDefIndex: 2991
{
	// Fields
	public int value__; // 0x0
	public const NamespaceList.ListType Any = 0;
	public const NamespaceList.ListType Other = 1;
	public const NamespaceList.ListType Set = 2;
}


// Namespace: System.Xml.Schema
internal class NamespaceList // TypeDefIndex: 2992
{
	// Fields
	private NamespaceList.ListType type; // 0x10
	private Hashtable set; // 0x18
	private string targetNamespace; // 0x20

	// Properties
	public ICollection Enumerate { get; }

	// Methods

	// RVA: 0x10FDB04 Offset: 0x10F9B04 VA: 0x10FDB04
	public void .ctor() { }

	// RVA: 0x10FDB0C Offset: 0x10F9B0C VA: 0x10FDB0C
	public void .ctor(string namespaces, string targetNamespace) { }

	// RVA: 0x10FDDA8 Offset: 0x10F9DA8 VA: 0x10FDDA8
	public NamespaceList Clone() { }

	// RVA: 0x10FDED0 Offset: 0x10F9ED0 VA: 0x10FDED0
	public ICollection get_Enumerate() { }

	// RVA: 0x10FDF34 Offset: 0x10F9F34 VA: 0x10FDF34 Slot: 4
	public virtual bool Allows(string ns) { }

	// RVA: 0x10FDFB8 Offset: 0x10F9FB8 VA: 0x10FDFB8
	public bool Allows(XmlQualifiedName qname) { }

	// RVA: 0x10FDFD8 Offset: 0x10F9FD8 VA: 0x10FDFD8 Slot: 3
	public override string ToString() { }

	// RVA: 0x10FE4E0 Offset: 0x10FA4E0 VA: 0x10FE4E0
	public static bool IsSubset(NamespaceList sub, NamespaceList super) { }

	// RVA: 0x10FE8C4 Offset: 0x10FA8C4 VA: 0x10FE8C4
	public static NamespaceList Union(NamespaceList o1, NamespaceList o2, bool v1Compat) { }

	// RVA: 0x10FEE5C Offset: 0x10FAE5C VA: 0x10FEE5C
	private NamespaceList CompareSetToOther(NamespaceList other) { }

	// RVA: 0x10FEF88 Offset: 0x10FAF88 VA: 0x10FEF88
	public static NamespaceList Intersection(NamespaceList o1, NamespaceList o2, bool v1Compat) { }

	// RVA: 0x10FF4D0 Offset: 0x10FB4D0 VA: 0x10FF4D0
	private void RemoveNamespace(string tns) { }
}


// Namespace: System.Xml.Schema
internal class NamespaceListV1Compat : NamespaceList // TypeDefIndex: 2993
{
	// Methods

	// RVA: 0x10FF530 Offset: 0x10FB530 VA: 0x10FF530
	public void .ctor(string namespaces, string targetNamespace) { }

	// RVA: 0x10FF534 Offset: 0x10FB534 VA: 0x10FF534 Slot: 4
	public override bool Allows(string ns) { }
}


// Namespace: System.Xml.Schema
internal sealed class Parser // TypeDefIndex: 2994
{
	// Fields
	private SchemaType schemaType; // 0x10
	private XmlNameTable nameTable; // 0x18
	private SchemaNames schemaNames; // 0x20
	private ValidationEventHandler eventHandler; // 0x28
	private XmlNamespaceManager namespaceManager; // 0x30
	private XmlReader reader; // 0x38
	private PositionInfo positionInfo; // 0x40
	private bool isProcessNamespaces; // 0x48
	private int schemaXmlDepth; // 0x4C
	private int markupDepth; // 0x50
	private SchemaBuilder builder; // 0x58
	private XmlSchema schema; // 0x60
	private SchemaInfo xdrSchema; // 0x68
	private XmlResolver xmlResolver; // 0x70
	private XmlDocument dummyDocument; // 0x78
	private bool processMarkup; // 0x80
	private XmlNode parentNode; // 0x88
	private XmlNamespaceManager annotationNSManager; // 0x90
	private string xmlns; // 0x98
	private XmlCharType xmlCharType; // 0xA0

	// Methods

	// RVA: 0x10FF558 Offset: 0x10FB558 VA: 0x10FF558
	public void .ctor(SchemaType schemaType, XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventHandler) { }

	// RVA: 0x10FF608 Offset: 0x10FB608 VA: 0x10FF608
	public SchemaType Parse(XmlReader reader, string targetNamespace) { }

	// RVA: 0x10FF658 Offset: 0x10FB658 VA: 0x10FF658
	public void StartParsing(XmlReader reader, string targetNamespace) { }

	// RVA: 0x1100084 Offset: 0x10FC084 VA: 0x1100084
	private bool CheckSchemaRoot(SchemaType rootType, out string code) { }

	// RVA: 0x10FFA08 Offset: 0x10FBA08 VA: 0x10FFA08
	public bool ParseReaderNode() { }

	// RVA: 0x1100184 Offset: 0x10FC184 VA: 0x1100184
	private void ProcessAppInfoDocMarkup(bool root) { }

	// RVA: 0x11003A4 Offset: 0x10FC3A4 VA: 0x11003A4
	private XmlElement LoadElementNode(bool root) { }

	// RVA: 0x11008F0 Offset: 0x10FC8F0 VA: 0x11008F0
	private XmlAttribute CreateXmlNsAttribute(string prefix, string value) { }

	// RVA: 0x110077C Offset: 0x10FC77C VA: 0x110077C
	private XmlAttribute LoadAttributeNode() { }

	// RVA: 0x1100A0C Offset: 0x10FCA0C VA: 0x1100A0C
	private XmlEntityReference LoadEntityReferenceInAttribute() { }
}


// Namespace: System.Xml.Schema
internal enum Compositor // TypeDefIndex: 2995
{
	// Fields
	public int value__; // 0x0
	public const Compositor Root = 0;
	public const Compositor Include = 1;
	public const Compositor Import = 2;
	public const Compositor Redefine = 3;
}


// Namespace: System.Xml.Schema
internal class RedefineEntry // TypeDefIndex: 2996
{
	// Fields
	internal XmlSchemaRedefine redefine; // 0x10
	internal XmlSchema schemaToUpdate; // 0x18

	// Methods

	// RVA: 0x1100C14 Offset: 0x10FCC14 VA: 0x1100C14
	public void .ctor(XmlSchemaRedefine external, XmlSchema schema) { }
}


// Namespace: System.Xml.Schema
internal sealed class Preprocessor : BaseProcessor // TypeDefIndex: 2997
{
	// Fields
	private string Xmlns; // 0x40
	private string NsXsi; // 0x48
	private string targetNamespace; // 0x50
	private XmlSchema rootSchema; // 0x58
	private XmlSchema currentSchema; // 0x60
	private XmlSchemaForm elementFormDefault; // 0x68
	private XmlSchemaForm attributeFormDefault; // 0x6C
	private XmlSchemaDerivationMethod blockDefault; // 0x70
	private XmlSchemaDerivationMethod finalDefault; // 0x74
	private Hashtable schemaLocations; // 0x78
	private Hashtable chameleonSchemas; // 0x80
	private Hashtable referenceNamespaces; // 0x88
	private Hashtable processedExternals; // 0x90
	private SortedList lockList; // 0x98
	private XmlReaderSettings readerSettings; // 0xA0
	private XmlSchema rootSchemaForRedefine; // 0xA8
	private ArrayList redefinedList; // 0xB0
	private static XmlSchema builtInSchemaForXmlNS; // 0x0
	private XmlResolver xmlResolver; // 0xB8

	// Methods

	// RVA: 0x1100C40 Offset: 0x10FCC40 VA: 0x1100C40
	public void .ctor(XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventHandler, XmlSchemaCompilationSettings compilationSettings) { }

	// RVA: 0x1100D20 Offset: 0x10FCD20 VA: 0x1100D20
	public bool Execute(XmlSchema schema, string targetNamespace, bool loadExternals) { }

	// RVA: 0x1103DB4 Offset: 0x10FFDB4 VA: 0x1103DB4
	private void Cleanup(XmlSchema schema) { }

	// RVA: 0x1104430 Offset: 0x1100430 VA: 0x1104430
	private void CleanupRedefine(XmlSchemaExternal include) { }

	// RVA: 0x1101FB0 Offset: 0x10FDFB0 VA: 0x1101FB0
	private void BuildSchemaList(XmlSchema schema) { }

	// RVA: 0x110130C Offset: 0x10FD30C VA: 0x110130C
	private void LoadExternals(XmlSchema schema) { }

	// RVA: 0x1103E88 Offset: 0x10FFE88 VA: 0x1103E88
	internal static XmlSchema GetBuildInSchema() { }

	// RVA: 0x1104538 Offset: 0x1100538 VA: 0x1104538
	private void BuildRefNamespaces(XmlSchema schema) { }

	// RVA: 0x1104758 Offset: 0x1100758 VA: 0x1104758
	private void ParseUri(string uri, string code, XmlSchemaObject sourceSchemaObject) { }

	// RVA: 0x1102128 Offset: 0x10FE128 VA: 0x1102128
	private void Preprocess(XmlSchema schema, string targetNamespace, ArrayList imports) { }

	// RVA: 0x1104D4C Offset: 0x1100D4C VA: 0x1104D4C
	private void CopyIncludedComponents(XmlSchema includedSchema, XmlSchema schema) { }

	// RVA: 0x11032B4 Offset: 0x10FF2B4 VA: 0x11032B4
	private void PreprocessRedefine(RedefineEntry redefineEntry) { }

	// RVA: 0x11076A0 Offset: 0x11036A0 VA: 0x11076A0
	private void GetIncludedSet(XmlSchema schema, ArrayList includesList) { }

	// RVA: 0x110760C Offset: 0x110360C VA: 0x110760C
	internal static XmlSchema GetParentSchema(XmlSchemaObject currentSchemaObject) { }

	// RVA: 0x1104C40 Offset: 0x1100C40 VA: 0x1104C40
	private void SetSchemaDefaults(XmlSchema schema) { }

	// RVA: 0x1107D2C Offset: 0x1103D2C VA: 0x1107D2C
	private int CountGroupSelfReference(XmlSchemaObjectCollection items, XmlQualifiedName name, XmlSchemaGroup redefined) { }

	// RVA: 0x11077CC Offset: 0x11037CC VA: 0x11077CC
	private void CheckRefinedGroup(XmlSchemaGroup group) { }

	// RVA: 0x110786C Offset: 0x110386C VA: 0x110786C
	private void CheckRefinedAttributeGroup(XmlSchemaAttributeGroup attributeGroup) { }

	// RVA: 0x1107C20 Offset: 0x1103C20 VA: 0x1107C20
	private void CheckRefinedSimpleType(XmlSchemaSimpleType stype) { }

	// RVA: 0x11079C4 Offset: 0x11039C4 VA: 0x11079C4
	private void CheckRefinedComplexType(XmlSchemaComplexType ctype) { }

	// RVA: 0x1106010 Offset: 0x1102010 VA: 0x1106010
	private void PreprocessAttribute(XmlSchemaAttribute attribute) { }

	// RVA: 0x11084E0 Offset: 0x11044E0 VA: 0x11084E0
	private void PreprocessLocalAttribute(XmlSchemaAttribute attribute) { }

	// RVA: 0x11082B8 Offset: 0x11042B8 VA: 0x11082B8
	private void PreprocessAttributeContent(XmlSchemaAttribute attribute) { }

	// RVA: 0x1106174 Offset: 0x1102174 VA: 0x1106174
	private void PreprocessAttributeGroup(XmlSchemaAttributeGroup attributeGroup) { }

	// RVA: 0x1106F3C Offset: 0x1102F3C VA: 0x1106F3C
	private void PreprocessElement(XmlSchemaElement element) { }

	// RVA: 0x1108F58 Offset: 0x1104F58 VA: 0x1108F58
	private void PreprocessLocalElement(XmlSchemaElement element) { }

	// RVA: 0x1108C34 Offset: 0x1104C34 VA: 0x1108C34
	private void PreprocessElementContent(XmlSchemaElement element) { }

	// RVA: 0x11092E8 Offset: 0x11052E8 VA: 0x11092E8
	private void PreprocessIdentityConstraint(XmlSchemaIdentityConstraint constraint) { }

	// RVA: 0x11069B4 Offset: 0x11029B4 VA: 0x11069B4
	private void PreprocessSimpleType(XmlSchemaSimpleType simpleType, bool local) { }

	// RVA: 0x110626C Offset: 0x110226C VA: 0x110626C
	private void PreprocessComplexType(XmlSchemaComplexType complexType, bool local) { }

	// RVA: 0x1107184 Offset: 0x1103184 VA: 0x1107184
	private void PreprocessGroup(XmlSchemaGroup group) { }

	// RVA: 0x1107348 Offset: 0x1103348 VA: 0x1107348
	private void PreprocessNotation(XmlSchemaNotation notation) { }

	// RVA: 0x110962C Offset: 0x110562C VA: 0x110962C
	private void PreprocessParticle(XmlSchemaParticle particle) { }

	// RVA: 0x11088D0 Offset: 0x11048D0 VA: 0x11088D0
	private void PreprocessAttributes(XmlSchemaObjectCollection attributes, XmlSchemaAnyAttribute anyAttribute, XmlSchemaObject parent) { }

	// RVA: 0x1104940 Offset: 0x1100940 VA: 0x1104940
	private void ValidateIdAttribute(XmlSchemaObject xso) { }

	// RVA: 0x1108010 Offset: 0x1104010 VA: 0x1108010
	private void ValidateNameAttribute(XmlSchemaObject xso) { }

	// RVA: 0x11086BC Offset: 0x11046BC VA: 0x11086BC
	private void ValidateQNameAttribute(XmlSchemaObject xso, string attributeName, XmlQualifiedName value) { }

	// RVA: 0x11044D0 Offset: 0x11004D0 VA: 0x11044D0
	private Uri ResolveSchemaLocationUri(XmlSchema enclosingSchema, string location) { }

	// RVA: 0x1104510 Offset: 0x1100510 VA: 0x1104510
	private object GetSchemaEntity(Uri ruri) { }

	// RVA: 0x11011DC Offset: 0x10FD1DC VA: 0x11011DC
	private XmlSchema GetChameleonSchema(string targetNamespace, XmlSchema schema) { }

	// RVA: 0x110489C Offset: 0x110089C VA: 0x110489C
	private void SetParent(XmlSchemaObject child, XmlSchemaObject parent) { }

	// RVA: 0x11048B4 Offset: 0x11008B4 VA: 0x11048B4
	private void PreprocessAnnotation(XmlSchemaObject schemaObject) { }

	// RVA: 0x110759C Offset: 0x110359C VA: 0x110759C
	private void PreprocessAnnotation(XmlSchemaAnnotation annotation) { }
}


// Namespace: 
internal enum SchemaAttDef.Reserve // TypeDefIndex: 2998
{
	// Fields
	public int value__; // 0x0
	public const SchemaAttDef.Reserve None = 0;
	public const SchemaAttDef.Reserve XmlSpace = 1;
	public const SchemaAttDef.Reserve XmlLang = 2;
}


// Namespace: System.Xml.Schema
internal sealed class SchemaAttDef : SchemaDeclBase, IDtdDefaultAttributeInfo, IDtdAttributeInfo // TypeDefIndex: 2999
{
	// Fields
	private string defExpanded; // 0x60
	private int lineNum; // 0x68
	private int linePos; // 0x6C
	private int valueLineNum; // 0x70
	private int valueLinePos; // 0x74
	private SchemaAttDef.Reserve reserved; // 0x78
	private bool defaultValueChecked; // 0x7C
	private XmlSchemaAttribute schemaAttribute; // 0x80
	public static readonly SchemaAttDef Empty; // 0x0

	// Properties
	private string System.Xml.IDtdAttributeInfo.Prefix { get; }
	private string System.Xml.IDtdAttributeInfo.LocalName { get; }
	private int System.Xml.IDtdAttributeInfo.LineNumber { get; }
	private int System.Xml.IDtdAttributeInfo.LinePosition { get; }
	private bool System.Xml.IDtdAttributeInfo.IsNonCDataType { get; }
	private bool System.Xml.IDtdAttributeInfo.IsDeclaredInExternal { get; }
	private bool System.Xml.IDtdAttributeInfo.IsXmlAttribute { get; }
	private string System.Xml.IDtdDefaultAttributeInfo.DefaultValueExpanded { get; }
	private object System.Xml.IDtdDefaultAttributeInfo.DefaultValueTyped { get; }
	private int System.Xml.IDtdDefaultAttributeInfo.ValueLineNumber { get; }
	private int System.Xml.IDtdDefaultAttributeInfo.ValueLinePosition { get; }
	internal string DefaultValueExpanded { get; }
	internal XmlTokenizedType TokenizedType { get; set; }

	// Methods

	// RVA: 0x1109ECC Offset: 0x1105ECC VA: 0x1109ECC
	public void .ctor(XmlQualifiedName name, string prefix) { }

	// RVA: 0x1109ED4 Offset: 0x1105ED4 VA: 0x1109ED4
	public void .ctor(XmlQualifiedName name) { }

	// RVA: 0x1109EE0 Offset: 0x1105EE0 VA: 0x1109EE0
	private void .ctor() { }

	// RVA: 0x1109EE8 Offset: 0x1105EE8 VA: 0x1109EE8 Slot: 8
	private string System.Xml.IDtdAttributeInfo.get_Prefix() { }

	// RVA: 0x1109EF0 Offset: 0x1105EF0 VA: 0x1109EF0 Slot: 9
	private string System.Xml.IDtdAttributeInfo.get_LocalName() { }

	// RVA: 0x1109F0C Offset: 0x1105F0C VA: 0x1109F0C Slot: 10
	private int System.Xml.IDtdAttributeInfo.get_LineNumber() { }

	// RVA: 0x1109F14 Offset: 0x1105F14 VA: 0x1109F14 Slot: 11
	private int System.Xml.IDtdAttributeInfo.get_LinePosition() { }

	// RVA: 0x1109F1C Offset: 0x1105F1C VA: 0x1109F1C Slot: 12
	private bool System.Xml.IDtdAttributeInfo.get_IsNonCDataType() { }

	// RVA: 0x1109F68 Offset: 0x1105F68 VA: 0x1109F68 Slot: 13
	private bool System.Xml.IDtdAttributeInfo.get_IsDeclaredInExternal() { }

	// RVA: 0x1109F70 Offset: 0x1105F70 VA: 0x1109F70 Slot: 14
	private bool System.Xml.IDtdAttributeInfo.get_IsXmlAttribute() { }

	// RVA: 0x1109F80 Offset: 0x1105F80 VA: 0x1109F80 Slot: 4
	private string System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueExpanded() { }

	// RVA: 0x110A028 Offset: 0x1106028 VA: 0x110A028 Slot: 5
	private object System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueTyped() { }

	// RVA: 0x110A030 Offset: 0x1106030 VA: 0x110A030 Slot: 6
	private int System.Xml.IDtdDefaultAttributeInfo.get_ValueLineNumber() { }

	// RVA: 0x110A038 Offset: 0x1106038 VA: 0x110A038 Slot: 7
	private int System.Xml.IDtdDefaultAttributeInfo.get_ValueLinePosition() { }

	// RVA: 0x1109FD4 Offset: 0x1105FD4 VA: 0x1109FD4
	internal string get_DefaultValueExpanded() { }

	// RVA: 0x1109F48 Offset: 0x1105F48 VA: 0x1109F48
	internal XmlTokenizedType get_TokenizedType() { }

	// RVA: 0x110A040 Offset: 0x1106040 VA: 0x110A040
	internal void set_TokenizedType(XmlTokenizedType value) { }

	// RVA: 0x110A060 Offset: 0x1106060 VA: 0x110A060
	internal void CheckXmlSpace(IValidationEventHandling validationEventHandling) { }

	// RVA: 0x110A2D4 Offset: 0x11062D4 VA: 0x110A2D4
	internal SchemaAttDef Clone() { }

	// RVA: 0x110A338 Offset: 0x1106338 VA: 0x110A338
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal abstract class SchemaBuilder // TypeDefIndex: 3000
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	internal abstract bool ProcessElement(string prefix, string name, string ns);

	// RVA: -1 Offset: -1 Slot: 5
	internal abstract void ProcessAttribute(string prefix, string name, string ns, string value);

	// RVA: -1 Offset: -1 Slot: 6
	internal abstract bool IsContentParsed();

	// RVA: -1 Offset: -1 Slot: 7
	internal abstract void ProcessMarkup(XmlNode[] markup);

	// RVA: -1 Offset: -1 Slot: 8
	internal abstract void ProcessCData(string value);

	// RVA: -1 Offset: -1 Slot: 9
	internal abstract void StartChildren();

	// RVA: -1 Offset: -1 Slot: 10
	internal abstract void EndChildren();

	// RVA: 0x110A394 Offset: 0x1106394 VA: 0x110A394
	protected void .ctor() { }
}


// Namespace: System.Xml.Schema
internal sealed class SchemaCollectionCompiler : BaseProcessor // TypeDefIndex: 3001
{
	// Fields
	private bool compileContentModel; // 0x40
	private XmlSchemaObjectTable examplars; // 0x48
	private Stack complexTypeStack; // 0x50
	private XmlSchema schema; // 0x58

	// Methods

	// RVA: 0x110A39C Offset: 0x110639C VA: 0x110A39C
	public void .ctor(XmlNameTable nameTable, ValidationEventHandler eventHandler) { }

	// RVA: 0x110A44C Offset: 0x110644C VA: 0x110A44C
	public bool Execute(XmlSchema schema, SchemaInfo schemaInfo, bool compileContentModel) { }

	// RVA: 0x110A4B8 Offset: 0x11064B8 VA: 0x110A4B8
	private void Prepare() { }

	// RVA: 0x110A930 Offset: 0x1106930 VA: 0x110A930
	private void Cleanup() { }

	// RVA: 0x110ECF4 Offset: 0x110ACF4 VA: 0x110ECF4
	internal static void Cleanup(XmlSchema schema) { }

	// RVA: 0x110B82C Offset: 0x110782C VA: 0x110B82C
	private void Compile() { }

	// RVA: 0x110D854 Offset: 0x1109854 VA: 0x110D854
	private void Output(SchemaInfo schemaInfo) { }

	// RVA: 0x110ECC4 Offset: 0x110ACC4 VA: 0x110ECC4
	private static void CleanupAttribute(XmlSchemaAttribute attribute) { }

	// RVA: 0x110E884 Offset: 0x110A884 VA: 0x110E884
	private static void CleanupAttributeGroup(XmlSchemaAttributeGroup attributeGroup) { }

	// RVA: 0x110E8C0 Offset: 0x110A8C0 VA: 0x110E8C0
	private static void CleanupComplexType(XmlSchemaComplexType complexType) { }

	// RVA: 0x110EB2C Offset: 0x110AB2C VA: 0x110EB2C
	private static void CleanupSimpleType(XmlSchemaSimpleType simpleType) { }

	// RVA: 0x110EB44 Offset: 0x110AB44 VA: 0x110EB44
	private static void CleanupElement(XmlSchemaElement element) { }

	// RVA: 0x11130C0 Offset: 0x110F0C0 VA: 0x11130C0
	private static void CleanupAttributes(XmlSchemaObjectCollection attributes) { }

	// RVA: 0x110E860 Offset: 0x110A860 VA: 0x110E860
	private static void CleanupGroup(XmlSchemaGroup group) { }

	// RVA: 0x1113184 Offset: 0x110F184 VA: 0x1113184
	private static void CleanupParticle(XmlSchemaParticle particle) { }

	// RVA: 0x110F304 Offset: 0x110B304 VA: 0x110F304
	private void CompileSubstitutionGroup(XmlSchemaSubstitutionGroupV1Compat substitutionGroup) { }

	// RVA: 0x1112EEC Offset: 0x110EEEC VA: 0x1112EEC
	private void CheckSubstitutionGroup(XmlSchemaSubstitutionGroup substitutionGroup) { }

	// RVA: 0x110F740 Offset: 0x110B740 VA: 0x110F740
	private void CompileGroup(XmlSchemaGroup group) { }

	// RVA: 0x1110AC8 Offset: 0x110CAC8 VA: 0x1110AC8
	private void CompileSimpleType(XmlSchemaSimpleType simpleType) { }

	// RVA: 0x111367C Offset: 0x110F67C VA: 0x111367C
	private XmlSchemaSimpleType[] CompileBaseMemberTypes(XmlSchemaSimpleType simpleType) { }

	// RVA: 0x1113A30 Offset: 0x110FA30 VA: 0x1113A30
	private void CheckUnionType(XmlSchemaSimpleType unionMember, ArrayList memberTypeDefinitions, XmlSchemaSimpleType parentType) { }

	// RVA: 0x110FF58 Offset: 0x110BF58 VA: 0x110FF58
	private void CompileComplexType(XmlSchemaComplexType complexType) { }

	// RVA: 0x1113B48 Offset: 0x110FB48 VA: 0x1113B48
	private void CompileSimpleContentExtension(XmlSchemaComplexType complexType, XmlSchemaSimpleContentExtension simpleExtension) { }

	// RVA: 0x1113D80 Offset: 0x110FD80 VA: 0x1113D80
	private void CompileSimpleContentRestriction(XmlSchemaComplexType complexType, XmlSchemaSimpleContentRestriction simpleRestriction) { }

	// RVA: 0x111415C Offset: 0x111015C VA: 0x111415C
	private void CompileComplexContentExtension(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaComplexContentExtension complexExtension) { }

	// RVA: 0x11144E4 Offset: 0x11104E4 VA: 0x11144E4
	private void CompileComplexContentRestriction(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaComplexContentRestriction complexRestriction) { }

	// RVA: 0x1112DE8 Offset: 0x110EDE8 VA: 0x1112DE8
	private void CheckParticleDerivation(XmlSchemaComplexType complexType) { }

	// RVA: 0x1115C40 Offset: 0x1111C40 VA: 0x1115C40
	private XmlSchemaParticle CompileContentTypeParticle(XmlSchemaParticle particle, bool substitution) { }

	// RVA: 0x11132E8 Offset: 0x110F2E8 VA: 0x11132E8
	private XmlSchemaParticle CannonicalizeParticle(XmlSchemaParticle particle, bool root, bool substitution) { }

	// RVA: 0x1116F90 Offset: 0x1112F90 VA: 0x1116F90
	private XmlSchemaParticle CannonicalizeElement(XmlSchemaElement element, bool substitution) { }

	// RVA: 0x11170DC Offset: 0x11130DC VA: 0x11170DC
	private XmlSchemaParticle CannonicalizeGroupRef(XmlSchemaGroupRef groupRef, bool root, bool substitution) { }

	// RVA: 0x1117624 Offset: 0x1113624 VA: 0x1117624
	private XmlSchemaParticle CannonicalizeAll(XmlSchemaAll all, bool root, bool substitution) { }

	// RVA: 0x1117A14 Offset: 0x1113A14 VA: 0x1117A14
	private XmlSchemaParticle CannonicalizeChoice(XmlSchemaChoice choice, bool root, bool substitution) { }

	// RVA: 0x1117E54 Offset: 0x1113E54 VA: 0x1117E54
	private XmlSchemaParticle CannonicalizeSequence(XmlSchemaSequence sequence, bool root, bool substitution) { }

	// RVA: 0x11169C8 Offset: 0x11129C8 VA: 0x11169C8
	private bool IsValidRestriction(XmlSchemaParticle derivedParticle, XmlSchemaParticle baseParticle) { }

	// RVA: 0x11182F8 Offset: 0x11142F8 VA: 0x11182F8
	private bool IsElementFromElement(XmlSchemaElement derivedElement, XmlSchemaElement baseElement) { }

	// RVA: 0x11183FC Offset: 0x11143FC VA: 0x11183FC
	private bool IsElementFromAny(XmlSchemaElement derivedElement, XmlSchemaAny baseAny) { }

	// RVA: 0x1118458 Offset: 0x1114458 VA: 0x1118458
	private bool IsAnyFromAny(XmlSchemaAny derivedAny, XmlSchemaAny baseAny) { }

	// RVA: 0x11184A0 Offset: 0x11144A0 VA: 0x11184A0
	private bool IsGroupBaseFromAny(XmlSchemaGroupBase derivedGroupBase, XmlSchemaAny baseAny) { }

	// RVA: 0x11186A8 Offset: 0x11146A8 VA: 0x11186A8
	private bool IsElementFromGroupBase(XmlSchemaElement derivedElement, XmlSchemaGroupBase baseGroupBase, bool skipEmptableOnly) { }

	// RVA: 0x1118A10 Offset: 0x1114A10 VA: 0x1118A10
	private bool IsGroupBaseFromGroupBase(XmlSchemaGroupBase derivedGroupBase, XmlSchemaGroupBase baseGroupBase, bool skipEmptableOnly) { }

	// RVA: 0x1118C84 Offset: 0x1114C84 VA: 0x1118C84
	private bool IsSequenceFromAll(XmlSchemaSequence derivedSequence, XmlSchemaAll baseAll) { }

	// RVA: 0x1118EE4 Offset: 0x1114EE4 VA: 0x1118EE4
	private bool IsSequenceFromChoice(XmlSchemaSequence derivedSequence, XmlSchemaChoice baseChoice) { }

	// RVA: 0x1119A38 Offset: 0x1115A38 VA: 0x1119A38
	private void CalculateSequenceRange(XmlSchemaSequence sequence, out Decimal minOccurs, out Decimal maxOccurs) { }

	// RVA: 0x111907C Offset: 0x111507C VA: 0x111907C
	private bool IsValidOccurrenceRangeRestriction(XmlSchemaParticle derivedParticle, XmlSchemaParticle baseParticle) { }

	// RVA: 0x111985C Offset: 0x111585C VA: 0x111985C
	private bool IsValidOccurrenceRangeRestriction(Decimal minOccurs, Decimal maxOccurs, Decimal baseMinOccurs, Decimal baseMaxOccurs) { }

	// RVA: 0x1119944 Offset: 0x1115944 VA: 0x1119944
	private int GetMappingParticle(XmlSchemaParticle particle, XmlSchemaObjectCollection collection) { }

	// RVA: 0x1118234 Offset: 0x1114234 VA: 0x1118234
	private bool IsParticleEmptiable(XmlSchemaParticle particle) { }

	// RVA: 0x11190BC Offset: 0x11150BC VA: 0x11190BC
	private void CalculateEffectiveTotalRange(XmlSchemaParticle particle, out Decimal minOccurs, out Decimal maxOccurs) { }

	// RVA: 0x1119DC4 Offset: 0x1115DC4 VA: 0x1119DC4
	private void PushComplexType(XmlSchemaComplexType complexType) { }

	// RVA: 0x1115D98 Offset: 0x1111D98 VA: 0x1115D98
	private XmlSchemaContentType GetSchemaContentType(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaParticle particle) { }

	// RVA: 0x110F80C Offset: 0x110B80C VA: 0x110F80C
	private void CompileAttributeGroup(XmlSchemaAttributeGroup attributeGroup) { }

	// RVA: 0x11147B0 Offset: 0x11107B0 VA: 0x11147B0
	private void CompileLocalAttributes(XmlSchemaComplexType baseType, XmlSchemaComplexType derivedType, XmlSchemaObjectCollection attributes, XmlSchemaAnyAttribute anyAttribute, XmlSchemaDerivationMethod derivedBy) { }

	// RVA: 0x1119E7C Offset: 0x1115E7C VA: 0x1119E7C
	private XmlSchemaAnyAttribute CompileAnyAttributeUnion(XmlSchemaAnyAttribute a, XmlSchemaAnyAttribute b) { }

	// RVA: 0x1119DE8 Offset: 0x1115DE8 VA: 0x1119DE8
	private XmlSchemaAnyAttribute CompileAnyAttributeIntersection(XmlSchemaAnyAttribute a, XmlSchemaAnyAttribute b) { }

	// RVA: 0x1111E1C Offset: 0x110DE1C VA: 0x1111E1C
	private void CompileAttribute(XmlSchemaAttribute xa) { }

	// RVA: 0x111269C Offset: 0x110E69C VA: 0x111269C
	private void CompileIdentityConstraint(XmlSchemaIdentityConstraint xi) { }

	// RVA: 0x11112F0 Offset: 0x110D2F0 VA: 0x11112F0
	private void CompileElement(XmlSchemaElement xe) { }

	// RVA: 0x1115E00 Offset: 0x1111E00 VA: 0x1115E00
	private ContentValidator CompileComplexContent(XmlSchemaComplexType complexType) { }

	// RVA: 0x1119F10 Offset: 0x1115F10 VA: 0x1119F10
	private void BuildParticleContentModel(ParticleContentValidator contentValidator, XmlSchemaParticle particle) { }

	// RVA: 0x111A404 Offset: 0x1116404 VA: 0x111A404
	private void CompileParticleElements(XmlSchemaComplexType complexType, XmlSchemaParticle particle) { }

	// RVA: 0x1112D14 Offset: 0x110ED14 VA: 0x1112D14
	private void CompileCompexTypeElements(XmlSchemaComplexType complexType) { }

	// RVA: 0x1113530 Offset: 0x110F530 VA: 0x1113530
	private XmlSchemaSimpleType GetSimpleType(XmlQualifiedName name) { }

	// RVA: 0x1116914 Offset: 0x1112914 VA: 0x1116914
	private XmlSchemaComplexType GetComplexType(XmlQualifiedName name) { }

	// RVA: 0x11167B0 Offset: 0x11127B0 VA: 0x11167B0
	private XmlSchemaType GetAnySchemaType(XmlQualifiedName name) { }
}


// Namespace: 
private enum SchemaCollectionPreprocessor.Compositor // TypeDefIndex: 3002
{
	// Fields
	public int value__; // 0x0
	public const SchemaCollectionPreprocessor.Compositor Root = 0;
	public const SchemaCollectionPreprocessor.Compositor Include = 1;
	public const SchemaCollectionPreprocessor.Compositor Import = 2;
}


// Namespace: System.Xml.Schema
internal sealed class SchemaCollectionPreprocessor : BaseProcessor // TypeDefIndex: 3003
{
	// Fields
	private XmlSchema schema; // 0x40
	private string targetNamespace; // 0x48
	private bool buildinIncluded; // 0x50
	private XmlSchemaForm elementFormDefault; // 0x54
	private XmlSchemaForm attributeFormDefault; // 0x58
	private XmlSchemaDerivationMethod blockDefault; // 0x5C
	private XmlSchemaDerivationMethod finalDefault; // 0x60
	private Hashtable schemaLocations; // 0x68
	private Hashtable referenceNamespaces; // 0x70
	private string Xmlns; // 0x78
	private XmlResolver xmlResolver; // 0x80

	// Methods

	// RVA: 0x111A658 Offset: 0x1116658 VA: 0x111A658
	public void .ctor(XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventHandler) { }

	// RVA: 0x111A660 Offset: 0x1116660 VA: 0x111A660
	public bool Execute(XmlSchema schema, string targetNamespace, bool loadExternals, XmlSchemaCollection xsc) { }

	// RVA: 0x111A880 Offset: 0x1116880 VA: 0x111A880
	private void Cleanup(XmlSchema schema) { }

	// RVA: 0x111AA9C Offset: 0x1116A9C VA: 0x111AA9C
	private void LoadExternals(XmlSchema schema, XmlSchemaCollection xsc) { }

	// RVA: 0x111DD10 Offset: 0x1119D10 VA: 0x111DD10
	private void BuildRefNamespaces(XmlSchema schema) { }

	// RVA: 0x111B658 Offset: 0x1117658 VA: 0x111B658
	private void Preprocess(XmlSchema schema, string targetNamespace, SchemaCollectionPreprocessor.Compositor compositor) { }

	// RVA: 0x111E000 Offset: 0x111A000 VA: 0x111E000
	private void PreprocessRedefine(XmlSchemaRedefine redefine) { }

	// RVA: 0x1120CD0 Offset: 0x111CCD0 VA: 0x1120CD0
	private int CountGroupSelfReference(XmlSchemaObjectCollection items, XmlQualifiedName name) { }

	// RVA: 0x1120768 Offset: 0x111C768 VA: 0x1120768
	private void CheckRefinedGroup(XmlSchemaGroup group) { }

	// RVA: 0x1120800 Offset: 0x111C800 VA: 0x1120800
	private void CheckRefinedAttributeGroup(XmlSchemaAttributeGroup attributeGroup) { }

	// RVA: 0x1120BC4 Offset: 0x111CBC4 VA: 0x1120BC4
	private void CheckRefinedSimpleType(XmlSchemaSimpleType stype) { }

	// RVA: 0x1120968 Offset: 0x111C968 VA: 0x1120968
	private void CheckRefinedComplexType(XmlSchemaComplexType ctype) { }

	// RVA: 0x111F188 Offset: 0x111B188 VA: 0x111F188
	private void PreprocessAttribute(XmlSchemaAttribute attribute) { }

	// RVA: 0x112147C Offset: 0x111D47C VA: 0x112147C
	private void PreprocessLocalAttribute(XmlSchemaAttribute attribute) { }

	// RVA: 0x1121244 Offset: 0x111D244 VA: 0x1121244
	private void PreprocessAttributeContent(XmlSchemaAttribute attribute) { }

	// RVA: 0x111F2EC Offset: 0x111B2EC VA: 0x111F2EC
	private void PreprocessAttributeGroup(XmlSchemaAttributeGroup attributeGroup) { }

	// RVA: 0x11200C0 Offset: 0x111C0C0 VA: 0x11200C0
	private void PreprocessElement(XmlSchemaElement element) { }

	// RVA: 0x1121E34 Offset: 0x111DE34 VA: 0x1121E34
	private void PreprocessLocalElement(XmlSchemaElement element) { }

	// RVA: 0x1121AEC Offset: 0x111DAEC VA: 0x1121AEC
	private void PreprocessElementContent(XmlSchemaElement element) { }

	// RVA: 0x11221C0 Offset: 0x111E1C0 VA: 0x11221C0
	private void PreprocessIdentityConstraint(XmlSchemaIdentityConstraint constraint) { }

	// RVA: 0x111FB1C Offset: 0x111BB1C VA: 0x111FB1C
	private void PreprocessSimpleType(XmlSchemaSimpleType simpleType, bool local) { }

	// RVA: 0x111F3E0 Offset: 0x111B3E0 VA: 0x111F3E0
	private void PreprocessComplexType(XmlSchemaComplexType complexType, bool local) { }

	// RVA: 0x1120308 Offset: 0x111C308 VA: 0x1120308
	private void PreprocessGroup(XmlSchemaGroup group) { }

	// RVA: 0x11204C8 Offset: 0x111C4C8 VA: 0x11204C8
	private void PreprocessNotation(XmlSchemaNotation notation) { }

	// RVA: 0x1122500 Offset: 0x111E500 VA: 0x1122500
	private void PreprocessParticle(XmlSchemaParticle particle) { }

	// RVA: 0x11217DC Offset: 0x111D7DC VA: 0x11217DC
	private void PreprocessAttributes(XmlSchemaObjectCollection attributes, XmlSchemaAnyAttribute anyAttribute, XmlSchemaObject parent) { }

	// RVA: 0x111B3FC Offset: 0x11173FC VA: 0x111B3FC
	private void ValidateIdAttribute(XmlSchemaObject xso) { }

	// RVA: 0x1120F9C Offset: 0x111CF9C VA: 0x1120F9C
	private void ValidateNameAttribute(XmlSchemaObject xso) { }

	// RVA: 0x1121654 Offset: 0x111D654 VA: 0x1121654
	private void ValidateQNameAttribute(XmlSchemaObject xso, string attributeName, XmlQualifiedName value) { }

	// RVA: 0x111DF14 Offset: 0x1119F14 VA: 0x111DF14
	private void SetParent(XmlSchemaObject child, XmlSchemaObject parent) { }

	// RVA: 0x111DF2C Offset: 0x1119F2C VA: 0x111DF2C
	private void PreprocessAnnotation(XmlSchemaObject schemaObject) { }

	// RVA: 0x111DB50 Offset: 0x1119B50 VA: 0x111DB50
	private Uri ResolveSchemaLocationUri(XmlSchema enclosingSchema, string location) { }

	// RVA: 0x111DBFC Offset: 0x1119BFC VA: 0x111DBFC
	private Stream GetSchemaEntity(Uri ruri) { }
}


// Namespace: 
internal enum SchemaDeclBase.Use // TypeDefIndex: 3004
{
	// Fields
	public int value__; // 0x0
	public const SchemaDeclBase.Use Default = 0;
	public const SchemaDeclBase.Use Required = 1;
	public const SchemaDeclBase.Use Implied = 2;
	public const SchemaDeclBase.Use Fixed = 3;
	public const SchemaDeclBase.Use RequiredFixed = 4;
}


// Namespace: System.Xml.Schema
internal abstract class SchemaDeclBase // TypeDefIndex: 3005
{
	// Fields
	protected XmlQualifiedName name; // 0x10
	protected string prefix; // 0x18
	protected bool isDeclaredInExternal; // 0x20
	protected SchemaDeclBase.Use presence; // 0x24
	protected XmlSchemaType schemaType; // 0x28
	protected XmlSchemaDatatype datatype; // 0x30
	protected string defaultValueRaw; // 0x38
	protected object defaultValueTyped; // 0x40
	protected long maxLength; // 0x48
	protected long minLength; // 0x50
	protected List<string> values; // 0x58

	// Properties
	internal string Prefix { get; }
	internal string DefaultValueRaw { get; }

	// Methods

	// RVA: 0x1122D04 Offset: 0x111ED04 VA: 0x1122D04
	protected void .ctor(XmlQualifiedName name, string prefix) { }

	// RVA: 0x1122D8C Offset: 0x111ED8C VA: 0x1122D8C
	protected void .ctor() { }

	// RVA: 0x1122DF4 Offset: 0x111EDF4 VA: 0x1122DF4
	internal string get_Prefix() { }

	// RVA: 0x1122E48 Offset: 0x111EE48 VA: 0x1122E48
	internal void AddValue(string value) { }

	// RVA: 0x1122EE8 Offset: 0x111EEE8 VA: 0x1122EE8
	internal string get_DefaultValueRaw() { }

	// RVA: 0x1122F3C Offset: 0x111EF3C VA: 0x1122F3C
	internal bool CheckEnumeration(object pVal) { }

	// RVA: 0x1122FF4 Offset: 0x111EFF4 VA: 0x1122FF4
	internal bool CheckValue(object pVal) { }
}


// Namespace: System.Xml.Schema
internal sealed class SchemaElementDecl : SchemaDeclBase, IDtdAttributeListInfo // TypeDefIndex: 3006
{
	// Fields
	private Dictionary<XmlQualifiedName, SchemaAttDef> attdefs; // 0x60
	private List<IDtdDefaultAttributeInfo> defaultAttdefs; // 0x68
	private bool isIdDeclared; // 0x70
	private bool hasNonCDataAttribute; // 0x71
	private bool isAbstract; // 0x72
	private bool isNillable; // 0x73
	private bool hasRequiredAttribute; // 0x74
	private bool isNotationDeclared; // 0x75
	private Dictionary<XmlQualifiedName, XmlQualifiedName> prohibitedAttributes; // 0x78
	private ContentValidator contentValidator; // 0x80
	private XmlSchemaAnyAttribute anyAttribute; // 0x88
	private XmlSchemaDerivationMethod block; // 0x90
	private CompiledIdentityConstraint[] constraints; // 0x98
	private XmlSchemaElement schemaElement; // 0xA0
	internal static readonly SchemaElementDecl Empty; // 0x0

	// Properties
	private bool System.Xml.IDtdAttributeListInfo.HasNonCDataAttributes { get; }
	internal bool HasNonCDataAttribute { get; }
	internal bool HasDefaultAttribute { get; }
	internal IList<IDtdDefaultAttributeInfo> DefaultAttDefs { get; }

	// Methods

	// RVA: 0x1123044 Offset: 0x111F044 VA: 0x1123044
	internal void .ctor() { }

	// RVA: 0x1123104 Offset: 0x111F104 VA: 0x1123104
	internal void .ctor(XmlSchemaDatatype dtype) { }

	// RVA: 0x112320C Offset: 0x111F20C VA: 0x112320C
	internal void .ctor(XmlQualifiedName name, string prefix) { }

	// RVA: 0x11232E4 Offset: 0x111F2E4 VA: 0x11232E4
	internal static SchemaElementDecl CreateAnyTypeElementDecl() { }

	// RVA: 0x1123378 Offset: 0x111F378 VA: 0x1123378 Slot: 4
	private bool System.Xml.IDtdAttributeListInfo.get_HasNonCDataAttributes() { }

	// RVA: 0x1123380 Offset: 0x111F380 VA: 0x1123380 Slot: 5
	private IDtdAttributeInfo System.Xml.IDtdAttributeListInfo.LookupAttribute(string prefix, string localName) { }

	// RVA: 0x1123434 Offset: 0x111F434 VA: 0x1123434 Slot: 6
	private IEnumerable<IDtdDefaultAttributeInfo> System.Xml.IDtdAttributeListInfo.LookupDefaultAttributes() { }

	// RVA: 0x112343C Offset: 0x111F43C VA: 0x112343C
	internal bool get_HasNonCDataAttribute() { }

	// RVA: 0x1123444 Offset: 0x111F444 VA: 0x1123444
	internal SchemaElementDecl Clone() { }

	// RVA: 0x11234A8 Offset: 0x111F4A8 VA: 0x11234A8
	internal bool get_HasDefaultAttribute() { }

	// RVA: 0x11234B8 Offset: 0x111F4B8 VA: 0x11234B8
	internal void AddAttDef(SchemaAttDef attdef) { }

	// RVA: 0x11235C8 Offset: 0x111F5C8 VA: 0x11235C8
	internal SchemaAttDef GetAttDef(XmlQualifiedName qname) { }

	// RVA: 0x1123640 Offset: 0x111F640 VA: 0x1123640
	internal IList<IDtdDefaultAttributeInfo> get_DefaultAttDefs() { }

	// RVA: 0x1123648 Offset: 0x111F648 VA: 0x1123648
	internal void CheckAttributes(Hashtable presence, bool standalone) { }

	// RVA: 0x11237F8 Offset: 0x111F7F8 VA: 0x11237F8
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal sealed class SchemaEntity : IDtdEntityInfo // TypeDefIndex: 3007
{
	// Fields
	private XmlQualifiedName qname; // 0x10
	private string url; // 0x18
	private string pubid; // 0x20
	private string text; // 0x28
	private XmlQualifiedName ndata; // 0x30
	private int lineNumber; // 0x38
	private int linePosition; // 0x3C
	private bool isParameter; // 0x40
	private bool isExternal; // 0x41
	private bool parsingInProgress; // 0x42
	private bool isDeclaredInExternal; // 0x43
	private string baseURI; // 0x48
	private string declaredURI; // 0x50

	// Properties
	private string System.Xml.IDtdEntityInfo.Name { get; }
	private bool System.Xml.IDtdEntityInfo.IsExternal { get; }
	private bool System.Xml.IDtdEntityInfo.IsDeclaredInExternal { get; }
	private bool System.Xml.IDtdEntityInfo.IsUnparsedEntity { get; }
	private bool System.Xml.IDtdEntityInfo.IsParameterEntity { get; }
	private string System.Xml.IDtdEntityInfo.BaseUriString { get; }
	private string System.Xml.IDtdEntityInfo.DeclaredUriString { get; }
	private string System.Xml.IDtdEntityInfo.SystemId { get; }
	private string System.Xml.IDtdEntityInfo.PublicId { get; }
	private string System.Xml.IDtdEntityInfo.Text { get; }
	private int System.Xml.IDtdEntityInfo.LineNumber { get; }
	private int System.Xml.IDtdEntityInfo.LinePosition { get; }
	internal string Url { set; }
	internal string Text { set; }
	internal string BaseURI { get; }
	internal string DeclaredURI { get; set; }

	// Methods

	// RVA: 0x1123850 Offset: 0x111F850 VA: 0x1123850
	internal void .ctor(XmlQualifiedName qname, bool isParameter) { }

	// RVA: 0x11238D8 Offset: 0x111F8D8 VA: 0x11238D8 Slot: 4
	private string System.Xml.IDtdEntityInfo.get_Name() { }

	// RVA: 0x11238F4 Offset: 0x111F8F4 VA: 0x11238F4 Slot: 5
	private bool System.Xml.IDtdEntityInfo.get_IsExternal() { }

	// RVA: 0x11238FC Offset: 0x111F8FC VA: 0x11238FC Slot: 6
	private bool System.Xml.IDtdEntityInfo.get_IsDeclaredInExternal() { }

	// RVA: 0x1123904 Offset: 0x111F904 VA: 0x1123904 Slot: 7
	private bool System.Xml.IDtdEntityInfo.get_IsUnparsedEntity() { }

	// RVA: 0x112392C Offset: 0x111F92C VA: 0x112392C Slot: 8
	private bool System.Xml.IDtdEntityInfo.get_IsParameterEntity() { }

	// RVA: 0x1123934 Offset: 0x111F934 VA: 0x1123934 Slot: 9
	private string System.Xml.IDtdEntityInfo.get_BaseUriString() { }

	// RVA: 0x11239DC Offset: 0x111F9DC VA: 0x11239DC Slot: 10
	private string System.Xml.IDtdEntityInfo.get_DeclaredUriString() { }

	// RVA: 0x1123A84 Offset: 0x111FA84 VA: 0x1123A84 Slot: 11
	private string System.Xml.IDtdEntityInfo.get_SystemId() { }

	// RVA: 0x1123A8C Offset: 0x111FA8C VA: 0x1123A8C Slot: 12
	private string System.Xml.IDtdEntityInfo.get_PublicId() { }

	// RVA: 0x1123A94 Offset: 0x111FA94 VA: 0x1123A94 Slot: 13
	private string System.Xml.IDtdEntityInfo.get_Text() { }

	// RVA: 0x1123A9C Offset: 0x111FA9C VA: 0x1123A9C Slot: 14
	private int System.Xml.IDtdEntityInfo.get_LineNumber() { }

	// RVA: 0x1123AA4 Offset: 0x111FAA4 VA: 0x1123AA4 Slot: 15
	private int System.Xml.IDtdEntityInfo.get_LinePosition() { }

	// RVA: 0x1123AAC Offset: 0x111FAAC VA: 0x1123AAC
	internal static bool IsPredefinedEntity(string n) { }

	// RVA: 0x1123BA8 Offset: 0x111FBA8 VA: 0x1123BA8
	internal void set_Url(string value) { }

	// RVA: 0x1123BB8 Offset: 0x111FBB8 VA: 0x1123BB8
	internal void set_Text(string value) { }

	// RVA: 0x1123988 Offset: 0x111F988 VA: 0x1123988
	internal string get_BaseURI() { }

	// RVA: 0x1123A30 Offset: 0x111FA30 VA: 0x1123A30
	internal string get_DeclaredURI() { }

	// RVA: 0x1123BC4 Offset: 0x111FBC4 VA: 0x1123BC4
	internal void set_DeclaredURI(string value) { }
}


// Namespace: System.Xml.Schema
internal enum AttributeMatchState // TypeDefIndex: 3008
{
	// Fields
	public int value__; // 0x0
	public const AttributeMatchState AttributeFound = 0;
	public const AttributeMatchState AnyIdAttributeFound = 1;
	public const AttributeMatchState UndeclaredElementAndAttribute = 2;
	public const AttributeMatchState UndeclaredAttribute = 3;
	public const AttributeMatchState AnyAttributeLax = 4;
	public const AttributeMatchState AnyAttributeSkip = 5;
	public const AttributeMatchState ProhibitedAnyAttribute = 6;
	public const AttributeMatchState ProhibitedAttribute = 7;
	public const AttributeMatchState AttributeNameMismatch = 8;
	public const AttributeMatchState ValidateAttributeInvalidCall = 9;
}


// Namespace: System.Xml.Schema
internal class SchemaInfo : IDtdInfo // TypeDefIndex: 3009
{
	// Fields
	private Dictionary<XmlQualifiedName, SchemaElementDecl> elementDecls; // 0x10
	private Dictionary<XmlQualifiedName, SchemaElementDecl> undeclaredElementDecls; // 0x18
	private Dictionary<XmlQualifiedName, SchemaEntity> generalEntities; // 0x20
	private Dictionary<XmlQualifiedName, SchemaEntity> parameterEntities; // 0x28
	private XmlQualifiedName docTypeName; // 0x30
	private string internalDtdSubset; // 0x38
	private bool hasNonCDataAttributes; // 0x40
	private bool hasDefaultAttributes; // 0x41
	private Dictionary<string, bool> targetNamespaces; // 0x48
	private Dictionary<XmlQualifiedName, SchemaAttDef> attributeDecls; // 0x50
	private int errorCount; // 0x58
	private SchemaType schemaType; // 0x5C
	private Dictionary<XmlQualifiedName, SchemaElementDecl> elementDeclsByType; // 0x60
	private Dictionary<string, SchemaNotation> notations; // 0x68

	// Properties
	internal Dictionary<XmlQualifiedName, SchemaEntity> GeneralEntities { get; }
	internal Dictionary<XmlQualifiedName, SchemaEntity> ParameterEntities { get; }
	internal Dictionary<string, SchemaNotation> Notations { get; }
	private bool System.Xml.IDtdInfo.HasDefaultAttributes { get; }
	private bool System.Xml.IDtdInfo.HasNonCDataAttributes { get; }
	private XmlQualifiedName System.Xml.IDtdInfo.Name { get; }
	private string System.Xml.IDtdInfo.InternalDtdSubset { get; }

	// Methods

	// RVA: 0x1123BCC Offset: 0x111FBCC VA: 0x1123BCC
	internal void .ctor() { }

	// RVA: 0x1123D70 Offset: 0x111FD70 VA: 0x1123D70
	internal Dictionary<XmlQualifiedName, SchemaEntity> get_GeneralEntities() { }

	// RVA: 0x1123DE8 Offset: 0x111FDE8 VA: 0x1123DE8
	internal Dictionary<XmlQualifiedName, SchemaEntity> get_ParameterEntities() { }

	// RVA: 0x1123E60 Offset: 0x111FE60 VA: 0x1123E60
	internal Dictionary<string, SchemaNotation> get_Notations() { }

	// RVA: 0x1123ED8 Offset: 0x111FED8 VA: 0x1123ED8
	internal SchemaElementDecl GetElementDecl(XmlQualifiedName qname) { }

	// RVA: 0x1123F50 Offset: 0x111FF50 VA: 0x1123F50
	internal SchemaElementDecl GetTypeDecl(XmlQualifiedName qname) { }

	// RVA: 0x1123FC8 Offset: 0x111FFC8 VA: 0x1123FC8
	internal XmlSchemaElement GetElement(XmlQualifiedName qname) { }

	// RVA: 0x1123FE0 Offset: 0x111FFE0 VA: 0x1123FE0
	internal bool HasSchema(string ns) { }

	// RVA: 0x1124038 Offset: 0x1120038 VA: 0x1124038
	internal bool Contains(string ns) { }

	// RVA: 0x1124090 Offset: 0x1120090 VA: 0x1124090
	internal SchemaAttDef GetAttributeXdr(SchemaElementDecl ed, XmlQualifiedName qname) { }

	// RVA: 0x11241DC Offset: 0x11201DC VA: 0x11241DC
	internal SchemaAttDef GetAttributeXsd(SchemaElementDecl ed, XmlQualifiedName qname, XmlSchemaObject partialValidationType, out AttributeMatchState attributeMatchState) { }

	// RVA: 0x11243FC Offset: 0x11203FC VA: 0x11243FC
	internal SchemaAttDef GetAttributeXsd(SchemaElementDecl ed, XmlQualifiedName qname, ref bool skip) { }

	// RVA: 0x11244F4 Offset: 0x11204F4 VA: 0x11244F4
	internal void Add(SchemaInfo sinfo, ValidationEventHandler eventhandler) { }

	// RVA: 0x1124A68 Offset: 0x1120A68 VA: 0x1124A68
	internal void Finish() { }

	// RVA: 0x1124B7C Offset: 0x1120B7C VA: 0x1124B7C Slot: 6
	private bool System.Xml.IDtdInfo.get_HasDefaultAttributes() { }

	// RVA: 0x1124B84 Offset: 0x1120B84 VA: 0x1124B84 Slot: 7
	private bool System.Xml.IDtdInfo.get_HasNonCDataAttributes() { }

	// RVA: 0x1124B8C Offset: 0x1120B8C VA: 0x1124B8C Slot: 8
	private IDtdAttributeListInfo System.Xml.IDtdInfo.LookupAttributeList(string prefix, string localName) { }

	// RVA: 0x1124C54 Offset: 0x1120C54 VA: 0x1124C54 Slot: 9
	private IDtdEntityInfo System.Xml.IDtdInfo.LookupEntity(string name) { }

	// RVA: 0x1124D04 Offset: 0x1120D04 VA: 0x1124D04 Slot: 4
	private XmlQualifiedName System.Xml.IDtdInfo.get_Name() { }

	// RVA: 0x1124D0C Offset: 0x1120D0C VA: 0x1124D0C Slot: 5
	private string System.Xml.IDtdInfo.get_InternalDtdSubset() { }
}


// Namespace: 
public enum SchemaNames.Token // TypeDefIndex: 3010
{
	// Fields
	public int value__; // 0x0
	public const SchemaNames.Token Empty = 0;
	public const SchemaNames.Token SchemaName = 1;
	public const SchemaNames.Token SchemaType = 2;
	public const SchemaNames.Token SchemaMaxOccurs = 3;
	public const SchemaNames.Token SchemaMinOccurs = 4;
	public const SchemaNames.Token SchemaInfinite = 5;
	public const SchemaNames.Token SchemaModel = 6;
	public const SchemaNames.Token SchemaOpen = 7;
	public const SchemaNames.Token SchemaClosed = 8;
	public const SchemaNames.Token SchemaContent = 9;
	public const SchemaNames.Token SchemaMixed = 10;
	public const SchemaNames.Token SchemaEmpty = 11;
	public const SchemaNames.Token SchemaElementOnly = 12;
	public const SchemaNames.Token SchemaTextOnly = 13;
	public const SchemaNames.Token SchemaOrder = 14;
	public const SchemaNames.Token SchemaSeq = 15;
	public const SchemaNames.Token SchemaOne = 16;
	public const SchemaNames.Token SchemaMany = 17;
	public const SchemaNames.Token SchemaRequired = 18;
	public const SchemaNames.Token SchemaYes = 19;
	public const SchemaNames.Token SchemaNo = 20;
	public const SchemaNames.Token SchemaString = 21;
	public const SchemaNames.Token SchemaId = 22;
	public const SchemaNames.Token SchemaIdref = 23;
	public const SchemaNames.Token SchemaIdrefs = 24;
	public const SchemaNames.Token SchemaEntity = 25;
	public const SchemaNames.Token SchemaEntities = 26;
	public const SchemaNames.Token SchemaNmtoken = 27;
	public const SchemaNames.Token SchemaNmtokens = 28;
	public const SchemaNames.Token SchemaEnumeration = 29;
	public const SchemaNames.Token SchemaDefault = 30;
	public const SchemaNames.Token XdrRoot = 31;
	public const SchemaNames.Token XdrElementType = 32;
	public const SchemaNames.Token XdrElement = 33;
	public const SchemaNames.Token XdrGroup = 34;
	public const SchemaNames.Token XdrAttributeType = 35;
	public const SchemaNames.Token XdrAttribute = 36;
	public const SchemaNames.Token XdrDatatype = 37;
	public const SchemaNames.Token XdrDescription = 38;
	public const SchemaNames.Token XdrExtends = 39;
	public const SchemaNames.Token SchemaXdrRootAlias = 40;
	public const SchemaNames.Token SchemaDtType = 41;
	public const SchemaNames.Token SchemaDtValues = 42;
	public const SchemaNames.Token SchemaDtMaxLength = 43;
	public const SchemaNames.Token SchemaDtMinLength = 44;
	public const SchemaNames.Token SchemaDtMax = 45;
	public const SchemaNames.Token SchemaDtMin = 46;
	public const SchemaNames.Token SchemaDtMinExclusive = 47;
	public const SchemaNames.Token SchemaDtMaxExclusive = 48;
	public const SchemaNames.Token SchemaTargetNamespace = 49;
	public const SchemaNames.Token SchemaVersion = 50;
	public const SchemaNames.Token SchemaFinalDefault = 51;
	public const SchemaNames.Token SchemaBlockDefault = 52;
	public const SchemaNames.Token SchemaFixed = 53;
	public const SchemaNames.Token SchemaAbstract = 54;
	public const SchemaNames.Token SchemaBlock = 55;
	public const SchemaNames.Token SchemaSubstitutionGroup = 56;
	public const SchemaNames.Token SchemaFinal = 57;
	public const SchemaNames.Token SchemaNillable = 58;
	public const SchemaNames.Token SchemaRef = 59;
	public const SchemaNames.Token SchemaBase = 60;
	public const SchemaNames.Token SchemaDerivedBy = 61;
	public const SchemaNames.Token SchemaNamespace = 62;
	public const SchemaNames.Token SchemaProcessContents = 63;
	public const SchemaNames.Token SchemaRefer = 64;
	public const SchemaNames.Token SchemaPublic = 65;
	public const SchemaNames.Token SchemaSystem = 66;
	public const SchemaNames.Token SchemaSchemaLocation = 67;
	public const SchemaNames.Token SchemaValue = 68;
	public const SchemaNames.Token SchemaSource = 69;
	public const SchemaNames.Token SchemaAttributeFormDefault = 70;
	public const SchemaNames.Token SchemaElementFormDefault = 71;
	public const SchemaNames.Token SchemaUse = 72;
	public const SchemaNames.Token SchemaForm = 73;
	public const SchemaNames.Token XsdSchema = 74;
	public const SchemaNames.Token XsdAnnotation = 75;
	public const SchemaNames.Token XsdInclude = 76;
	public const SchemaNames.Token XsdImport = 77;
	public const SchemaNames.Token XsdElement = 78;
	public const SchemaNames.Token XsdAttribute = 79;
	public const SchemaNames.Token xsdAttributeGroup = 80;
	public const SchemaNames.Token XsdAnyAttribute = 81;
	public const SchemaNames.Token XsdGroup = 82;
	public const SchemaNames.Token XsdAll = 83;
	public const SchemaNames.Token XsdChoice = 84;
	public const SchemaNames.Token XsdSequence = 85;
	public const SchemaNames.Token XsdAny = 86;
	public const SchemaNames.Token XsdNotation = 87;
	public const SchemaNames.Token XsdSimpleType = 88;
	public const SchemaNames.Token XsdComplexType = 89;
	public const SchemaNames.Token XsdUnique = 90;
	public const SchemaNames.Token XsdKey = 91;
	public const SchemaNames.Token XsdKeyref = 92;
	public const SchemaNames.Token XsdSelector = 93;
	public const SchemaNames.Token XsdField = 94;
	public const SchemaNames.Token XsdMinExclusive = 95;
	public const SchemaNames.Token XsdMinInclusive = 96;
	public const SchemaNames.Token XsdMaxExclusive = 97;
	public const SchemaNames.Token XsdMaxInclusive = 98;
	public const SchemaNames.Token XsdTotalDigits = 99;
	public const SchemaNames.Token XsdFractionDigits = 100;
	public const SchemaNames.Token XsdLength = 101;
	public const SchemaNames.Token XsdMinLength = 102;
	public const SchemaNames.Token XsdMaxLength = 103;
	public const SchemaNames.Token XsdEnumeration = 104;
	public const SchemaNames.Token XsdPattern = 105;
	public const SchemaNames.Token XsdDocumentation = 106;
	public const SchemaNames.Token XsdAppInfo = 107;
	public const SchemaNames.Token XsdComplexContent = 108;
	public const SchemaNames.Token XsdComplexContentExtension = 109;
	public const SchemaNames.Token XsdComplexContentRestriction = 110;
	public const SchemaNames.Token XsdSimpleContent = 111;
	public const SchemaNames.Token XsdSimpleContentExtension = 112;
	public const SchemaNames.Token XsdSimpleContentRestriction = 113;
	public const SchemaNames.Token XsdSimpleTypeList = 114;
	public const SchemaNames.Token XsdSimpleTypeRestriction = 115;
	public const SchemaNames.Token XsdSimpleTypeUnion = 116;
	public const SchemaNames.Token XsdWhitespace = 117;
	public const SchemaNames.Token XsdRedefine = 118;
	public const SchemaNames.Token SchemaItemType = 119;
	public const SchemaNames.Token SchemaMemberTypes = 120;
	public const SchemaNames.Token SchemaXPath = 121;
	public const SchemaNames.Token XmlLang = 122;
}


// Namespace: System.Xml.Schema
internal sealed class SchemaNames // TypeDefIndex: 3011
{
	// Fields
	private XmlNameTable nameTable; // 0x10
	public string NsDataType; // 0x18
	public string NsDataTypeAlias; // 0x20
	public string NsDataTypeOld; // 0x28
	public string NsXml; // 0x30
	public string NsXmlNs; // 0x38
	public string NsXdr; // 0x40
	public string NsXdrAlias; // 0x48
	public string NsXs; // 0x50
	public string NsXsi; // 0x58
	public string XsiType; // 0x60
	public string XsiNil; // 0x68
	public string XsiSchemaLocation; // 0x70
	public string XsiNoNamespaceSchemaLocation; // 0x78
	public string XsdSchema; // 0x80
	public string XdrSchema; // 0x88
	public XmlQualifiedName QnPCData; // 0x90
	public XmlQualifiedName QnXml; // 0x98
	public XmlQualifiedName QnXmlNs; // 0xA0
	public XmlQualifiedName QnDtDt; // 0xA8
	public XmlQualifiedName QnXmlLang; // 0xB0
	public XmlQualifiedName QnName; // 0xB8
	public XmlQualifiedName QnType; // 0xC0
	public XmlQualifiedName QnMaxOccurs; // 0xC8
	public XmlQualifiedName QnMinOccurs; // 0xD0
	public XmlQualifiedName QnInfinite; // 0xD8
	public XmlQualifiedName QnModel; // 0xE0
	public XmlQualifiedName QnOpen; // 0xE8
	public XmlQualifiedName QnClosed; // 0xF0
	public XmlQualifiedName QnContent; // 0xF8
	public XmlQualifiedName QnMixed; // 0x100
	public XmlQualifiedName QnEmpty; // 0x108
	public XmlQualifiedName QnEltOnly; // 0x110
	public XmlQualifiedName QnTextOnly; // 0x118
	public XmlQualifiedName QnOrder; // 0x120
	public XmlQualifiedName QnSeq; // 0x128
	public XmlQualifiedName QnOne; // 0x130
	public XmlQualifiedName QnMany; // 0x138
	public XmlQualifiedName QnRequired; // 0x140
	public XmlQualifiedName QnYes; // 0x148
	public XmlQualifiedName QnNo; // 0x150
	public XmlQualifiedName QnString; // 0x158
	public XmlQualifiedName QnID; // 0x160
	public XmlQualifiedName QnIDRef; // 0x168
	public XmlQualifiedName QnIDRefs; // 0x170
	public XmlQualifiedName QnEntity; // 0x178
	public XmlQualifiedName QnEntities; // 0x180
	public XmlQualifiedName QnNmToken; // 0x188
	public XmlQualifiedName QnNmTokens; // 0x190
	public XmlQualifiedName QnEnumeration; // 0x198
	public XmlQualifiedName QnDefault; // 0x1A0
	public XmlQualifiedName QnXdrSchema; // 0x1A8
	public XmlQualifiedName QnXdrElementType; // 0x1B0
	public XmlQualifiedName QnXdrElement; // 0x1B8
	public XmlQualifiedName QnXdrGroup; // 0x1C0
	public XmlQualifiedName QnXdrAttributeType; // 0x1C8
	public XmlQualifiedName QnXdrAttribute; // 0x1D0
	public XmlQualifiedName QnXdrDataType; // 0x1D8
	public XmlQualifiedName QnXdrDescription; // 0x1E0
	public XmlQualifiedName QnXdrExtends; // 0x1E8
	public XmlQualifiedName QnXdrAliasSchema; // 0x1F0
	public XmlQualifiedName QnDtType; // 0x1F8
	public XmlQualifiedName QnDtValues; // 0x200
	public XmlQualifiedName QnDtMaxLength; // 0x208
	public XmlQualifiedName QnDtMinLength; // 0x210
	public XmlQualifiedName QnDtMax; // 0x218
	public XmlQualifiedName QnDtMin; // 0x220
	public XmlQualifiedName QnDtMinExclusive; // 0x228
	public XmlQualifiedName QnDtMaxExclusive; // 0x230
	public XmlQualifiedName QnTargetNamespace; // 0x238
	public XmlQualifiedName QnVersion; // 0x240
	public XmlQualifiedName QnFinalDefault; // 0x248
	public XmlQualifiedName QnBlockDefault; // 0x250
	public XmlQualifiedName QnFixed; // 0x258
	public XmlQualifiedName QnAbstract; // 0x260
	public XmlQualifiedName QnBlock; // 0x268
	public XmlQualifiedName QnSubstitutionGroup; // 0x270
	public XmlQualifiedName QnFinal; // 0x278
	public XmlQualifiedName QnNillable; // 0x280
	public XmlQualifiedName QnRef; // 0x288
	public XmlQualifiedName QnBase; // 0x290
	public XmlQualifiedName QnDerivedBy; // 0x298
	public XmlQualifiedName QnNamespace; // 0x2A0
	public XmlQualifiedName QnProcessContents; // 0x2A8
	public XmlQualifiedName QnRefer; // 0x2B0
	public XmlQualifiedName QnPublic; // 0x2B8
	public XmlQualifiedName QnSystem; // 0x2C0
	public XmlQualifiedName QnSchemaLocation; // 0x2C8
	public XmlQualifiedName QnValue; // 0x2D0
	public XmlQualifiedName QnUse; // 0x2D8
	public XmlQualifiedName QnForm; // 0x2E0
	public XmlQualifiedName QnElementFormDefault; // 0x2E8
	public XmlQualifiedName QnAttributeFormDefault; // 0x2F0
	public XmlQualifiedName QnItemType; // 0x2F8
	public XmlQualifiedName QnMemberTypes; // 0x300
	public XmlQualifiedName QnXPath; // 0x308
	public XmlQualifiedName QnXsdSchema; // 0x310
	public XmlQualifiedName QnXsdAnnotation; // 0x318
	public XmlQualifiedName QnXsdInclude; // 0x320
	public XmlQualifiedName QnXsdImport; // 0x328
	public XmlQualifiedName QnXsdElement; // 0x330
	public XmlQualifiedName QnXsdAttribute; // 0x338
	public XmlQualifiedName QnXsdAttributeGroup; // 0x340
	public XmlQualifiedName QnXsdAnyAttribute; // 0x348
	public XmlQualifiedName QnXsdGroup; // 0x350
	public XmlQualifiedName QnXsdAll; // 0x358
	public XmlQualifiedName QnXsdChoice; // 0x360
	public XmlQualifiedName QnXsdSequence; // 0x368
	public XmlQualifiedName QnXsdAny; // 0x370
	public XmlQualifiedName QnXsdNotation; // 0x378
	public XmlQualifiedName QnXsdSimpleType; // 0x380
	public XmlQualifiedName QnXsdComplexType; // 0x388
	public XmlQualifiedName QnXsdUnique; // 0x390
	public XmlQualifiedName QnXsdKey; // 0x398
	public XmlQualifiedName QnXsdKeyRef; // 0x3A0
	public XmlQualifiedName QnXsdSelector; // 0x3A8
	public XmlQualifiedName QnXsdField; // 0x3B0
	public XmlQualifiedName QnXsdMinExclusive; // 0x3B8
	public XmlQualifiedName QnXsdMinInclusive; // 0x3C0
	public XmlQualifiedName QnXsdMaxInclusive; // 0x3C8
	public XmlQualifiedName QnXsdMaxExclusive; // 0x3D0
	public XmlQualifiedName QnXsdTotalDigits; // 0x3D8
	public XmlQualifiedName QnXsdFractionDigits; // 0x3E0
	public XmlQualifiedName QnXsdLength; // 0x3E8
	public XmlQualifiedName QnXsdMinLength; // 0x3F0
	public XmlQualifiedName QnXsdMaxLength; // 0x3F8
	public XmlQualifiedName QnXsdEnumeration; // 0x400
	public XmlQualifiedName QnXsdPattern; // 0x408
	public XmlQualifiedName QnXsdDocumentation; // 0x410
	public XmlQualifiedName QnXsdAppinfo; // 0x418
	public XmlQualifiedName QnSource; // 0x420
	public XmlQualifiedName QnXsdComplexContent; // 0x428
	public XmlQualifiedName QnXsdSimpleContent; // 0x430
	public XmlQualifiedName QnXsdRestriction; // 0x438
	public XmlQualifiedName QnXsdExtension; // 0x440
	public XmlQualifiedName QnXsdUnion; // 0x448
	public XmlQualifiedName QnXsdList; // 0x450
	public XmlQualifiedName QnXsdWhiteSpace; // 0x458
	public XmlQualifiedName QnXsdRedefine; // 0x460
	public XmlQualifiedName QnXsdAnyType; // 0x468
	internal XmlQualifiedName[] TokenToQName; // 0x470

	// Methods

	// RVA: 0x1124D14 Offset: 0x1120D14 VA: 0x1124D14
	public void .ctor(XmlNameTable nameTable) { }

	// RVA: 0x11275EC Offset: 0x11235EC VA: 0x11275EC
	public void CreateTokenToQNameTable() { }

	// RVA: 0x1128F58 Offset: 0x1124F58 VA: 0x1128F58
	public SchemaType SchemaTypeFromRoot(string localName, string ns) { }

	// RVA: 0x1128FB8 Offset: 0x1124FB8 VA: 0x1128FB8
	public bool IsXSDRoot(string localName, string ns) { }

	// RVA: 0x1129008 Offset: 0x1125008 VA: 0x1129008
	public bool IsXDRRoot(string localName, string ns) { }
}


// Namespace: System.Xml.Schema
internal class SchemaNamespaceManager : XmlNamespaceManager // TypeDefIndex: 3012
{
	// Fields
	private XmlSchemaObject node; // 0x50

	// Methods

	// RVA: 0x1129058 Offset: 0x1125058 VA: 0x1129058
	public void .ctor(XmlSchemaObject node) { }

	// RVA: 0x1129080 Offset: 0x1125080 VA: 0x1129080 Slot: 15
	public override string LookupNamespace(string prefix) { }

	// RVA: 0x11291B0 Offset: 0x11251B0 VA: 0x11291B0 Slot: 16
	public override string LookupPrefix(string ns) { }
}


// Namespace: System.Xml.Schema
internal sealed class SchemaNotation // TypeDefIndex: 3013
{
	// Fields
	private XmlQualifiedName name; // 0x10
	private string systemLiteral; // 0x18
	private string pubid; // 0x20

	// Methods

	// RVA: 0x11295AC Offset: 0x11255AC VA: 0x11295AC
	internal void .ctor(XmlQualifiedName name) { }
}


// Namespace: System.Xml.Schema
internal sealed class Compiler : BaseProcessor // TypeDefIndex: 3014
{
	// Fields
	private string restrictionErrorMsg; // 0x40
	private XmlSchemaObjectTable attributes; // 0x48
	private XmlSchemaObjectTable attributeGroups; // 0x50
	private XmlSchemaObjectTable elements; // 0x58
	private XmlSchemaObjectTable schemaTypes; // 0x60
	private XmlSchemaObjectTable groups; // 0x68
	private XmlSchemaObjectTable notations; // 0x70
	private XmlSchemaObjectTable examplars; // 0x78
	private XmlSchemaObjectTable identityConstraints; // 0x80
	private Stack complexTypeStack; // 0x88
	private Hashtable schemasToCompile; // 0x90
	private Hashtable importedSchemas; // 0x98
	private XmlSchema schemaForSchema; // 0xA0

	// Methods

	// RVA: 0x11295D4 Offset: 0x11255D4 VA: 0x11295D4
	public void .ctor(XmlNameTable nameTable, ValidationEventHandler eventHandler, XmlSchema schemaForSchema, XmlSchemaCompilationSettings compilationSettings) { }

	// RVA: 0x112978C Offset: 0x112578C VA: 0x112978C
	public bool Execute(XmlSchemaSet schemaSet, SchemaInfo schemaCompiledInfo) { }

	// RVA: 0x112C878 Offset: 0x1128878 VA: 0x112C878
	internal void Prepare(XmlSchema schema, bool cleanup) { }

	// RVA: 0x112E5D8 Offset: 0x112A5D8 VA: 0x112E5D8
	private void UpdateSForSSimpleTypes() { }

	// RVA: 0x112B7B8 Offset: 0x11277B8 VA: 0x112B7B8
	private void Output(SchemaInfo schemaInfo) { }

	// RVA: 0x112E6F8 Offset: 0x112A6F8 VA: 0x112E6F8
	internal void ImportAllCompiledSchemas(XmlSchemaSet schemaSet) { }

	// RVA: 0x1129808 Offset: 0x1125808 VA: 0x1129808
	internal bool Compile() { }

	// RVA: 0x112E104 Offset: 0x112A104 VA: 0x112E104
	private void CleanupAttribute(XmlSchemaAttribute attribute) { }

	// RVA: 0x112E168 Offset: 0x112A168 VA: 0x112E168
	private void CleanupAttributeGroup(XmlSchemaAttributeGroup attributeGroup) { }

	// RVA: 0x112E1BC Offset: 0x112A1BC VA: 0x112E1BC
	private void CleanupComplexType(XmlSchemaComplexType complexType) { }

	// RVA: 0x112E524 Offset: 0x112A524 VA: 0x112E524
	private void CleanupSimpleType(XmlSchemaSimpleType simpleType) { }

	// RVA: 0x112DF74 Offset: 0x1129F74 VA: 0x112DF74
	private void CleanupElement(XmlSchemaElement element) { }

	// RVA: 0x1132CC4 Offset: 0x112ECC4 VA: 0x1132CC4
	private void CleanupAttributes(XmlSchemaObjectCollection attributes) { }

	// RVA: 0x112E12C Offset: 0x112A12C VA: 0x112E12C
	private void CleanupGroup(XmlSchemaGroup group) { }

	// RVA: 0x1132D9C Offset: 0x112ED9C VA: 0x1132D9C
	private void CleanupParticle(XmlSchemaParticle particle) { }

	// RVA: 0x1131D9C Offset: 0x112DD9C VA: 0x1131D9C
	private void ProcessSubstitutionGroups() { }

	// RVA: 0x1132F38 Offset: 0x112EF38 VA: 0x1132F38
	private void CompileSubstitutionGroup(XmlSchemaSubstitutionGroup substitutionGroup) { }

	// RVA: 0x1132B9C Offset: 0x112EB9C VA: 0x1132B9C
	private void RecursivelyCheckRedefinedGroups(XmlSchemaGroup redefinedGroup, XmlSchemaGroup baseGroup) { }

	// RVA: 0x1132C4C Offset: 0x112EC4C VA: 0x1132C4C
	private void RecursivelyCheckRedefinedAttributeGroups(XmlSchemaAttributeGroup attributeGroup, XmlSchemaAttributeGroup baseAttributeGroup) { }

	// RVA: 0x112E800 Offset: 0x112A800 VA: 0x112E800
	private void CompileGroup(XmlSchemaGroup group) { }

	// RVA: 0x112FA5C Offset: 0x112BA5C VA: 0x112FA5C
	private void CompileSimpleType(XmlSchemaSimpleType simpleType) { }

	// RVA: 0x1134338 Offset: 0x1130338 VA: 0x1134338
	private XmlSchemaSimpleType[] CompileBaseMemberTypes(XmlSchemaSimpleType simpleType) { }

	// RVA: 0x11346EC Offset: 0x11306EC VA: 0x11346EC
	private void CheckUnionType(XmlSchemaSimpleType unionMember, ArrayList memberTypeDefinitions, XmlSchemaSimpleType parentType) { }

	// RVA: 0x112F148 Offset: 0x112B148 VA: 0x112F148
	private void CompileComplexType(XmlSchemaComplexType complexType) { }

	// RVA: 0x1134804 Offset: 0x1130804 VA: 0x1134804
	private void CompileSimpleContentExtension(XmlSchemaComplexType complexType, XmlSchemaSimpleContentExtension simpleExtension) { }

	// RVA: 0x1134A3C Offset: 0x1130A3C VA: 0x1134A3C
	private void CompileSimpleContentRestriction(XmlSchemaComplexType complexType, XmlSchemaSimpleContentRestriction simpleRestriction) { }

	// RVA: 0x1134E18 Offset: 0x1130E18 VA: 0x1134E18
	private void CompileComplexContentExtension(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaComplexContentExtension complexExtension) { }

	// RVA: 0x1135140 Offset: 0x1131140 VA: 0x1135140
	private void CompileComplexContentRestriction(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaComplexContentRestriction complexRestriction) { }

	// RVA: 0x1132608 Offset: 0x112E608 VA: 0x1132608
	private void CheckParticleDerivation(XmlSchemaComplexType complexType) { }

	// RVA: 0x11337E0 Offset: 0x112F7E0 VA: 0x11337E0
	private void CheckParticleDerivation(XmlSchemaParticle derivedParticle, XmlSchemaParticle baseParticle) { }

	// RVA: 0x113690C Offset: 0x113290C VA: 0x113690C
	private XmlSchemaParticle CompileContentTypeParticle(XmlSchemaParticle particle) { }

	// RVA: 0x1133440 Offset: 0x112F440 VA: 0x1133440
	private XmlSchemaParticle CannonicalizeParticle(XmlSchemaParticle particle, bool root) { }

	// RVA: 0x1139278 Offset: 0x1135278 VA: 0x1139278
	private XmlSchemaParticle CannonicalizeElement(XmlSchemaElement element) { }

	// RVA: 0x113831C Offset: 0x113431C VA: 0x113831C
	private XmlSchemaParticle CannonicalizeGroupRef(XmlSchemaGroupRef groupRef, bool root) { }

	// RVA: 0x1138830 Offset: 0x1134830 VA: 0x1138830
	private XmlSchemaParticle CannonicalizeAll(XmlSchemaAll all, bool root) { }

	// RVA: 0x1138A54 Offset: 0x1134A54 VA: 0x1138A54
	private XmlSchemaParticle CannonicalizeChoice(XmlSchemaChoice choice, bool root) { }

	// RVA: 0x1138E88 Offset: 0x1134E88 VA: 0x1138E88
	private XmlSchemaParticle CannonicalizeSequence(XmlSchemaSequence sequence, bool root) { }

	// RVA: 0x1137698 Offset: 0x1133698 VA: 0x1137698
	private XmlSchemaParticle CannonicalizePointlessRoot(XmlSchemaParticle particle) { }

	// RVA: 0x11378E4 Offset: 0x11338E4 VA: 0x11378E4
	private bool IsValidRestriction(XmlSchemaParticle derivedParticle, XmlSchemaParticle baseParticle) { }

	// RVA: 0x1139564 Offset: 0x1135564 VA: 0x1139564
	private bool IsElementFromElement(XmlSchemaElement derivedElement, XmlSchemaElement baseElement) { }

	// RVA: 0x1139750 Offset: 0x1135750 VA: 0x1139750
	private bool IsElementFromAny(XmlSchemaElement derivedElement, XmlSchemaAny baseAny) { }

	// RVA: 0x11398E0 Offset: 0x11358E0 VA: 0x11398E0
	private bool IsAnyFromAny(XmlSchemaAny derivedAny, XmlSchemaAny baseAny) { }

	// RVA: 0x11399D8 Offset: 0x11359D8 VA: 0x11399D8
	private bool IsGroupBaseFromAny(XmlSchemaGroupBase derivedGroupBase, XmlSchemaAny baseAny) { }

	// RVA: 0x1139DA0 Offset: 0x1135DA0 VA: 0x1139DA0
	private bool IsElementFromGroupBase(XmlSchemaElement derivedElement, XmlSchemaGroupBase baseGroupBase) { }

	// RVA: 0x113AAA8 Offset: 0x1136AA8 VA: 0x113AAA8
	private bool IsChoiceFromChoiceSubstGroup(XmlSchemaChoice derivedChoice, XmlSchemaChoice baseChoice) { }

	// RVA: 0x113A578 Offset: 0x1136578 VA: 0x113A578
	private bool IsGroupBaseFromGroupBase(XmlSchemaGroupBase derivedGroupBase, XmlSchemaGroupBase baseGroupBase, bool skipEmptableOnly) { }

	// RVA: 0x113A848 Offset: 0x1136848 VA: 0x113A848
	private bool IsSequenceFromAll(XmlSchemaSequence derivedSequence, XmlSchemaAll baseAll) { }

	// RVA: 0x113ABF0 Offset: 0x1136BF0 VA: 0x113ABF0
	private bool IsSequenceFromChoice(XmlSchemaSequence derivedSequence, XmlSchemaChoice baseChoice) { }

	// RVA: 0x113AEB4 Offset: 0x1136EB4 VA: 0x113AEB4
	private bool IsValidOccurrenceRangeRestriction(XmlSchemaParticle derivedParticle, XmlSchemaParticle baseParticle) { }

	// RVA: 0x113B7F0 Offset: 0x11377F0 VA: 0x113B7F0
	private bool IsValidOccurrenceRangeRestriction(Decimal minOccurs, Decimal maxOccurs, Decimal baseMinOccurs, Decimal baseMaxOccurs) { }

	// RVA: 0x113B8D8 Offset: 0x11378D8 VA: 0x113B8D8
	private int GetMappingParticle(XmlSchemaParticle particle, XmlSchemaObjectCollection collection) { }

	// RVA: 0x11394A0 Offset: 0x11354A0 VA: 0x11394A0
	private bool IsParticleEmptiable(XmlSchemaParticle particle) { }

	// RVA: 0x113B050 Offset: 0x1137050 VA: 0x113B050
	private void CalculateEffectiveTotalRange(XmlSchemaParticle particle, out Decimal minOccurs, out Decimal maxOccurs) { }

	// RVA: 0x113B9CC Offset: 0x11379CC VA: 0x113B9CC
	private void PushComplexType(XmlSchemaComplexType complexType) { }

	// RVA: 0x1136A5C Offset: 0x1132A5C VA: 0x1136A5C
	private XmlSchemaContentType GetSchemaContentType(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaParticle particle) { }

	// RVA: 0x112E8C8 Offset: 0x112A8C8 VA: 0x112E8C8
	private void CompileAttributeGroup(XmlSchemaAttributeGroup attributeGroup) { }

	// RVA: 0x11353E8 Offset: 0x11313E8 VA: 0x11353E8
	private void CompileLocalAttributes(XmlSchemaComplexType baseType, XmlSchemaComplexType derivedType, XmlSchemaObjectCollection attributes, XmlSchemaAnyAttribute anyAttribute, XmlSchemaDerivationMethod derivedBy) { }

	// RVA: 0x11338B8 Offset: 0x112F8B8 VA: 0x11338B8
	private void CheckAtrributeGroupRestriction(XmlSchemaAttributeGroup baseAttributeGroup, XmlSchemaAttributeGroup derivedAttributeGroup) { }

	// RVA: 0x113BB18 Offset: 0x1137B18 VA: 0x113BB18
	private bool IsProcessContentsRestricted(XmlSchemaComplexType baseType, XmlSchemaAnyAttribute derivedAttributeWildcard, XmlSchemaAnyAttribute baseAttributeWildcard) { }

	// RVA: 0x113BA84 Offset: 0x1137A84 VA: 0x113BA84
	private XmlSchemaAnyAttribute CompileAnyAttributeUnion(XmlSchemaAnyAttribute a, XmlSchemaAnyAttribute b) { }

	// RVA: 0x113B9F0 Offset: 0x11379F0 VA: 0x113B9F0
	private XmlSchemaAnyAttribute CompileAnyAttributeIntersection(XmlSchemaAnyAttribute a, XmlSchemaAnyAttribute b) { }

	// RVA: 0x1130EEC Offset: 0x112CEEC VA: 0x1130EEC
	private void CompileAttribute(XmlSchemaAttribute xa) { }

	// RVA: 0x113BBC4 Offset: 0x1137BC4 VA: 0x113BBC4
	private void SetDefaultFixed(XmlSchemaAttribute xa, SchemaAttDef decl) { }

	// RVA: 0x1131618 Offset: 0x112D618 VA: 0x1131618
	private void CompileIdentityConstraint(XmlSchemaIdentityConstraint xi) { }

	// RVA: 0x11302BC Offset: 0x112C2BC VA: 0x11302BC
	private void CompileElement(XmlSchemaElement xe) { }

	// RVA: 0x1136AC4 Offset: 0x1132AC4 VA: 0x1136AC4
	private ContentValidator CompileComplexContent(XmlSchemaComplexType complexType) { }

	// RVA: 0x113BD68 Offset: 0x1137D68 VA: 0x113BD68
	private bool BuildParticleContentModel(ParticleContentValidator contentValidator, XmlSchemaParticle particle) { }

	// RVA: 0x113C268 Offset: 0x1138268 VA: 0x113C268
	private void CompileParticleElements(XmlSchemaComplexType complexType, XmlSchemaParticle particle) { }

	// RVA: 0x1133658 Offset: 0x112F658 VA: 0x1133658
	private void CompileParticleElements(XmlSchemaParticle particle) { }

	// RVA: 0x1131C80 Offset: 0x112DC80 VA: 0x1131C80
	private void CompileComplexTypeElements(XmlSchemaComplexType complexType) { }

	// RVA: 0x1134260 Offset: 0x1130260 VA: 0x1134260
	private XmlSchemaSimpleType GetSimpleType(XmlQualifiedName name) { }

	// RVA: 0x11375F0 Offset: 0x11335F0 VA: 0x11375F0
	private XmlSchemaComplexType GetComplexType(XmlQualifiedName name) { }

	// RVA: 0x1137498 Offset: 0x1133498 VA: 0x1137498
	private XmlSchemaType GetAnySchemaType(XmlQualifiedName name) { }

	// RVA: 0x1139464 Offset: 0x1135464 VA: 0x1139464
	private void CopyPosition(XmlSchemaAnnotated to, XmlSchemaAnnotated from, bool copyParent) { }

	// RVA: 0x113AEF4 Offset: 0x1136EF4 VA: 0x113AEF4
	private bool IsFixedEqual(SchemaDeclBase baseDecl, SchemaDeclBase derivedDecl) { }
}


// Namespace: System.Xml.Schema
internal enum SchemaType // TypeDefIndex: 3015
{
	// Fields
	public int value__; // 0x0
	public const SchemaType None = 0;
	public const SchemaType DTD = 1;
	public const SchemaType XDR = 2;
	public const SchemaType XSD = 3;
}


// Namespace: System.Xml.Schema
public class ValidationEventArgs : EventArgs // TypeDefIndex: 3016
{
	// Fields
	private XmlSchemaException ex; // 0x10
	private XmlSeverityType severity; // 0x18

	// Methods

	// RVA: 0x113C4BC Offset: 0x11384BC VA: 0x113C4BC
	internal void .ctor(XmlSchemaException ex) { }

	// RVA: 0x113C52C Offset: 0x113852C VA: 0x113C52C
	internal void .ctor(XmlSchemaException ex, XmlSeverityType severity) { }
}


// Namespace: System.Xml.Schema
public sealed class ValidationEventHandler : MulticastDelegate // TypeDefIndex: 3017
{
	// Methods

	// RVA: 0x113C5A0 Offset: 0x11385A0 VA: 0x113C5A0
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x113C6A4 Offset: 0x11386A4 VA: 0x113C6A4 Slot: 12
	public virtual void Invoke(object sender, ValidationEventArgs e) { }
}


// Namespace: System.Xml.Schema
internal struct StateUnion // TypeDefIndex: 3018
{
	// Fields
	public int State; // 0x0
	public int AllElementsRequired; // 0x0
	public int CurPosIndex; // 0x0
	public int NumberOfRunningPos; // 0x0
}


// Namespace: System.Xml.Schema
internal sealed class ValidationState // TypeDefIndex: 3019
{
	// Fields
	public bool IsNill; // 0x10
	public bool IsDefault; // 0x11
	public bool NeedValidateChildren; // 0x12
	public bool CheckRequiredAttribute; // 0x13
	public bool ValidationSkipped; // 0x14
	public XmlSchemaContentProcessing ProcessContents; // 0x18
	public XmlSchemaValidity Validity; // 0x1C
	public SchemaElementDecl ElementDecl; // 0x20
	public SchemaElementDecl ElementDeclBeforeXsi; // 0x28
	public string LocalName; // 0x30
	public string Namespace; // 0x38
	public ConstraintStruct[] Constr; // 0x40
	public StateUnion CurrentState; // 0x48
	public bool HasMatched; // 0x4C
	public BitSet[] CurPos; // 0x50
	public BitSet AllElementsSet; // 0x58
	public List<RangePositionInfo> RunningPositions; // 0x60
	public bool TooComplex; // 0x68

	// Methods

	// RVA: 0x113C6B8 Offset: 0x11386B8 VA: 0x113C6B8
	public void .ctor() { }
}


// Namespace: 
private sealed class XdrBuilder.DeclBaseInfo // TypeDefIndex: 3020
{
	// Fields
	internal XmlQualifiedName _Name; // 0x10
	internal string _Prefix; // 0x18
	internal XmlQualifiedName _TypeName; // 0x20
	internal string _TypePrefix; // 0x28
	internal object _Default; // 0x30
	internal object _Revises; // 0x38
	internal uint _MaxOccurs; // 0x40
	internal uint _MinOccurs; // 0x44
	internal bool _Checking; // 0x48
	internal SchemaElementDecl _ElementDecl; // 0x50
	internal SchemaAttDef _Attdef; // 0x58
	internal XdrBuilder.DeclBaseInfo _Next; // 0x60

	// Methods

	// RVA: 0x1140C6C Offset: 0x113CC6C VA: 0x1140C6C
	internal void .ctor() { }

	// RVA: 0x11410C0 Offset: 0x113D0C0 VA: 0x11410C0
	internal void Reset() { }
}


// Namespace: 
private sealed class XdrBuilder.GroupContent // TypeDefIndex: 3021
{
	// Fields
	internal uint _MinVal; // 0x10
	internal uint _MaxVal; // 0x14
	internal bool _HasMaxAttr; // 0x18
	internal bool _HasMinAttr; // 0x19
	internal int _Order; // 0x1C

	// Methods

	// RVA: 0x114389C Offset: 0x113F89C VA: 0x114389C
	internal static void Copy(XdrBuilder.GroupContent from, XdrBuilder.GroupContent to) { }

	// RVA: 0x113DCC4 Offset: 0x1139CC4 VA: 0x113DCC4
	internal static XdrBuilder.GroupContent Copy(XdrBuilder.GroupContent other) { }

	// RVA: 0x113C90C Offset: 0x113890C VA: 0x113C90C
	public void .ctor() { }
}


// Namespace: 
private sealed class XdrBuilder.ElementContent // TypeDefIndex: 3022
{
	// Fields
	internal SchemaElementDecl _ElementDecl; // 0x10
	internal int _ContentAttr; // 0x18
	internal int _OrderAttr; // 0x1C
	internal bool _MasterGroupRequired; // 0x20
	internal bool _ExistTerminal; // 0x21
	internal bool _AllowDataType; // 0x22
	internal bool _HasDataType; // 0x23
	internal bool _HasType; // 0x24
	internal bool _EnumerationRequired; // 0x25
	internal uint _MinVal; // 0x28
	internal uint _MaxVal; // 0x2C
	internal uint _MaxLength; // 0x30
	internal uint _MinLength; // 0x34
	internal Hashtable _AttDefList; // 0x38

	// Methods

	// RVA: 0x113C8FC Offset: 0x11388FC VA: 0x113C8FC
	public void .ctor() { }
}


// Namespace: 
private sealed class XdrBuilder.AttributeContent // TypeDefIndex: 3023
{
	// Fields
	internal SchemaAttDef _AttDef; // 0x10
	internal XmlQualifiedName _Name; // 0x18
	internal string _Prefix; // 0x20
	internal bool _Required; // 0x28
	internal uint _MinVal; // 0x2C
	internal uint _MaxVal; // 0x30
	internal uint _MaxLength; // 0x34
	internal uint _MinLength; // 0x38
	internal bool _EnumerationRequired; // 0x3C
	internal bool _HasDataType; // 0x3D
	internal bool _Global; // 0x3E
	internal object _Default; // 0x40

	// Methods

	// RVA: 0x113C904 Offset: 0x1138904 VA: 0x113C904
	public void .ctor() { }
}


// Namespace: 
private sealed class XdrBuilder.XdrBuildFunction : MulticastDelegate // TypeDefIndex: 3024
{
	// Methods

	// RVA: 0x1143528 Offset: 0x113F528 VA: 0x1143528
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x11438C4 Offset: 0x113F8C4 VA: 0x11438C4 Slot: 12
	public virtual void Invoke(XdrBuilder builder, object obj, string prefix) { }
}


// Namespace: 
private sealed class XdrBuilder.XdrInitFunction : MulticastDelegate // TypeDefIndex: 3025
{
	// Methods

	// RVA: 0x11436C4 Offset: 0x113F6C4 VA: 0x11436C4
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x11438D8 Offset: 0x113F8D8 VA: 0x11438D8 Slot: 12
	public virtual void Invoke(XdrBuilder builder, object obj) { }
}


// Namespace: 
private sealed class XdrBuilder.XdrBeginChildFunction : MulticastDelegate // TypeDefIndex: 3026
{
	// Methods

	// RVA: 0x1143764 Offset: 0x113F764 VA: 0x1143764
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x11438EC Offset: 0x113F8EC VA: 0x11438EC Slot: 12
	public virtual void Invoke(XdrBuilder builder) { }
}


// Namespace: 
private sealed class XdrBuilder.XdrEndChildFunction : MulticastDelegate // TypeDefIndex: 3027
{
	// Methods

	// RVA: 0x1143800 Offset: 0x113F800 VA: 0x1143800
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x1143900 Offset: 0x113F900 VA: 0x1143900 Slot: 12
	public virtual void Invoke(XdrBuilder builder) { }
}


// Namespace: 
private sealed class XdrBuilder.XdrAttributeEntry // TypeDefIndex: 3028
{
	// Fields
	internal SchemaNames.Token _Attribute; // 0x10
	internal int _SchemaFlags; // 0x14
	internal XmlSchemaDatatype _Datatype; // 0x18
	internal XdrBuilder.XdrBuildFunction _BuildFunc; // 0x20

	// Methods

	// RVA: 0x11435C8 Offset: 0x113F5C8 VA: 0x11435C8
	internal void .ctor(SchemaNames.Token a, XmlTokenizedType ttype, XdrBuilder.XdrBuildFunction build) { }

	// RVA: 0x1143610 Offset: 0x113F610 VA: 0x1143610
	internal void .ctor(SchemaNames.Token a, XmlTokenizedType ttype, int schemaFlags, XdrBuilder.XdrBuildFunction build) { }
}


// Namespace: 
private sealed class XdrBuilder.XdrEntry // TypeDefIndex: 3029
{
	// Fields
	internal SchemaNames.Token _Name; // 0x10
	internal int[] _NextStates; // 0x18
	internal XdrBuilder.XdrAttributeEntry[] _Attributes; // 0x20
	internal XdrBuilder.XdrInitFunction _InitFunc; // 0x28
	internal XdrBuilder.XdrBeginChildFunction _BeginChildFunc; // 0x30
	internal XdrBuilder.XdrEndChildFunction _EndChildFunc; // 0x38
	internal bool _AllowText; // 0x40

	// Methods

	// RVA: 0x114365C Offset: 0x113F65C VA: 0x114365C
	internal void .ctor(SchemaNames.Token n, int[] states, XdrBuilder.XdrAttributeEntry[] attributes, XdrBuilder.XdrInitFunction init, XdrBuilder.XdrBeginChildFunction begin, XdrBuilder.XdrEndChildFunction end, bool fText) { }
}


// Namespace: System.Xml.Schema
internal sealed class XdrBuilder : SchemaBuilder // TypeDefIndex: 3030
{
	// Fields
	private static readonly int[] S_XDR_Root_Element; // 0x0
	private static readonly int[] S_XDR_Root_SubElements; // 0x8
	private static readonly int[] S_XDR_ElementType_SubElements; // 0x10
	private static readonly int[] S_XDR_AttributeType_SubElements; // 0x18
	private static readonly int[] S_XDR_Group_SubElements; // 0x20
	private static readonly XdrBuilder.XdrAttributeEntry[] S_XDR_Root_Attributes; // 0x28
	private static readonly XdrBuilder.XdrAttributeEntry[] S_XDR_ElementType_Attributes; // 0x30
	private static readonly XdrBuilder.XdrAttributeEntry[] S_XDR_AttributeType_Attributes; // 0x38
	private static readonly XdrBuilder.XdrAttributeEntry[] S_XDR_Element_Attributes; // 0x40
	private static readonly XdrBuilder.XdrAttributeEntry[] S_XDR_Attribute_Attributes; // 0x48
	private static readonly XdrBuilder.XdrAttributeEntry[] S_XDR_Group_Attributes; // 0x50
	private static readonly XdrBuilder.XdrAttributeEntry[] S_XDR_ElementDataType_Attributes; // 0x58
	private static readonly XdrBuilder.XdrAttributeEntry[] S_XDR_AttributeDataType_Attributes; // 0x60
	private static readonly XdrBuilder.XdrEntry[] S_SchemaEntries; // 0x68
	private SchemaInfo _SchemaInfo; // 0x10
	private string _TargetNamespace; // 0x18
	private XmlReader _reader; // 0x20
	private PositionInfo positionInfo; // 0x28
	private ParticleContentValidator _contentValidator; // 0x30
	private XdrBuilder.XdrEntry _CurState; // 0x38
	private XdrBuilder.XdrEntry _NextState; // 0x40
	private HWStack _StateHistory; // 0x48
	private HWStack _GroupStack; // 0x50
	private string _XdrName; // 0x58
	private string _XdrPrefix; // 0x60
	private XdrBuilder.ElementContent _ElementDef; // 0x68
	private XdrBuilder.GroupContent _GroupDef; // 0x70
	private XdrBuilder.AttributeContent _AttributeDef; // 0x78
	private XdrBuilder.DeclBaseInfo _UndefinedAttributeTypes; // 0x80
	private XdrBuilder.DeclBaseInfo _BaseDecl; // 0x88
	private XmlNameTable _NameTable; // 0x90
	private SchemaNames _SchemaNames; // 0x98
	private XmlNamespaceManager _CurNsMgr; // 0xA0
	private string _Text; // 0xA8
	private ValidationEventHandler validationEventHandler; // 0xB0
	private Hashtable _UndeclaredElements; // 0xB8
	private XmlResolver xmlResolver; // 0xC0

	// Methods

	// RVA: 0x113C710 Offset: 0x1138710 VA: 0x113C710
	internal void .ctor(XmlReader reader, XmlNamespaceManager curmgr, SchemaInfo sinfo, string targetNamspace, XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventhandler) { }

	// RVA: 0x113C914 Offset: 0x1138914 VA: 0x113C914 Slot: 4
	internal override bool ProcessElement(string prefix, string name, string ns) { }

	// RVA: 0x113CF88 Offset: 0x1138F88 VA: 0x113CF88 Slot: 5
	internal override void ProcessAttribute(string prefix, string name, string ns, string value) { }

	// RVA: 0x113D3C4 Offset: 0x11393C4 VA: 0x113D3C4
	private bool LoadSchema(string uri) { }

	// RVA: 0x113D30C Offset: 0x113930C VA: 0x113D30C
	internal static bool IsXdrSchema(string uri) { }

	// RVA: 0x113DAAC Offset: 0x1139AAC VA: 0x113DAAC Slot: 6
	internal override bool IsContentParsed() { }

	// RVA: 0x113DAB4 Offset: 0x1139AB4 VA: 0x113DAB4 Slot: 7
	internal override void ProcessMarkup(XmlNode[] markup) { }

	// RVA: 0x113DB0C Offset: 0x1139B0C VA: 0x113DB0C Slot: 8
	internal override void ProcessCData(string value) { }

	// RVA: 0x113DB80 Offset: 0x1139B80 VA: 0x113DB80 Slot: 9
	internal override void StartChildren() { }

	// RVA: 0x113DBB8 Offset: 0x1139BB8 VA: 0x113DBB8 Slot: 10
	internal override void EndChildren() { }

	// RVA: 0x113CD9C Offset: 0x1138D9C VA: 0x113CD9C
	private void Push() { }

	// RVA: 0x113DBF4 Offset: 0x1139BF4 VA: 0x113DBF4
	private void Pop() { }

	// RVA: 0x113DC74 Offset: 0x1139C74 VA: 0x113DC74
	private void PushGroupInfo() { }

	// RVA: 0x113DD28 Offset: 0x1139D28 VA: 0x113DD28
	private void PopGroupInfo() { }

	// RVA: 0x113DDA8 Offset: 0x1139DA8 VA: 0x113DDA8
	private static void XDR_InitRoot(XdrBuilder builder, object obj) { }

	// RVA: 0x113DDE8 Offset: 0x1139DE8 VA: 0x113DDE8
	private static void XDR_BuildRoot_Name(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x113DE74 Offset: 0x1139E74 VA: 0x113DE74
	private static void XDR_BuildRoot_ID(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x113DE78 Offset: 0x1139E78 VA: 0x113DE78
	private static void XDR_BeginRoot(XdrBuilder builder) { }

	// RVA: 0x113DF5C Offset: 0x1139F5C VA: 0x113DF5C
	private static void XDR_EndRoot(XdrBuilder builder) { }

	// RVA: 0x113E4B0 Offset: 0x113A4B0 VA: 0x113E4B0
	private static void XDR_InitElementType(XdrBuilder builder, object obj) { }

	// RVA: 0x113E5A8 Offset: 0x113A5A8 VA: 0x113E5A8
	private static void XDR_BuildElementType_Name(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x113E744 Offset: 0x113A744 VA: 0x113E744
	private static void XDR_BuildElementType_Content(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x113E968 Offset: 0x113A968 VA: 0x113E968
	private static void XDR_BuildElementType_Model(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x113EAE4 Offset: 0x113AAE4 VA: 0x113EAE4
	private static void XDR_BuildElementType_Order(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x113ECB4 Offset: 0x113ACB4 VA: 0x113ECB4
	private static void XDR_BuildElementType_DtType(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x113EE6C Offset: 0x113AE6C VA: 0x113EE6C
	private static void XDR_BuildElementType_DtValues(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x113EF48 Offset: 0x113AF48 VA: 0x113EF48
	private static void XDR_BuildElementType_DtMaxLength(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x113F0F0 Offset: 0x113B0F0 VA: 0x113F0F0
	private static void XDR_BuildElementType_DtMinLength(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x113F298 Offset: 0x113B298 VA: 0x113F298
	private static void XDR_BeginElementType(XdrBuilder builder) { }

	// RVA: 0x113F574 Offset: 0x113B574 VA: 0x113F574
	private static void XDR_EndElementType(XdrBuilder builder) { }

	// RVA: 0x113F928 Offset: 0x113B928 VA: 0x113F928
	private static void XDR_InitAttributeType(XdrBuilder builder, object obj) { }

	// RVA: 0x113FA0C Offset: 0x113BA0C VA: 0x113FA0C
	private static void XDR_BuildAttributeType_Name(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x113FC30 Offset: 0x113BC30 VA: 0x113FC30
	private static void XDR_BuildAttributeType_Required(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x113FDA8 Offset: 0x113BDA8 VA: 0x113FDA8
	private static void XDR_BuildAttributeType_Default(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x113FDC8 Offset: 0x113BDC8 VA: 0x113FDC8
	private static void XDR_BuildAttributeType_DtType(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x113FFBC Offset: 0x113BFBC VA: 0x113FFBC
	private static void XDR_BuildAttributeType_DtValues(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x1140098 Offset: 0x113C098 VA: 0x1140098
	private static void XDR_BuildAttributeType_DtMaxLength(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x1140108 Offset: 0x113C108 VA: 0x1140108
	private static void XDR_BuildAttributeType_DtMinLength(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x1140178 Offset: 0x113C178 VA: 0x1140178
	private static void XDR_BeginAttributeType(XdrBuilder builder) { }

	// RVA: 0x11401F0 Offset: 0x113C1F0 VA: 0x11401F0
	private static void XDR_EndAttributeType(XdrBuilder builder) { }

	// RVA: 0x114054C Offset: 0x113C54C VA: 0x114054C
	private static void XDR_InitElement(XdrBuilder builder, object obj) { }

	// RVA: 0x11405D8 Offset: 0x113C5D8 VA: 0x11405D8
	private static void XDR_BuildElement_Type(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x1140818 Offset: 0x113C818 VA: 0x1140818
	private static void XDR_BuildElement_MinOccurs(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x1140984 Offset: 0x113C984 VA: 0x1140984
	private static void XDR_BuildElement_MaxOccurs(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x1140B20 Offset: 0x113CB20 VA: 0x1140B20
	private static void XDR_EndElement(XdrBuilder builder) { }

	// RVA: 0x1140BF4 Offset: 0x113CBF4 VA: 0x1140BF4
	private static void XDR_InitAttribute(XdrBuilder builder, object obj) { }

	// RVA: 0x1140C88 Offset: 0x113CC88 VA: 0x1140C88
	private static void XDR_BuildAttribute_Type(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x1140D4C Offset: 0x113CD4C VA: 0x1140D4C
	private static void XDR_BuildAttribute_Required(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x1140DD0 Offset: 0x113CDD0 VA: 0x1140DD0
	private static void XDR_BuildAttribute_Default(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x1140DF0 Offset: 0x113CDF0 VA: 0x1140DF0
	private static void XDR_BeginAttribute(XdrBuilder builder) { }

	// RVA: 0x11410A4 Offset: 0x113D0A4 VA: 0x11410A4
	private static void XDR_EndAttribute(XdrBuilder builder) { }

	// RVA: 0x114113C Offset: 0x113D13C VA: 0x114113C
	private static void XDR_InitGroup(XdrBuilder builder, object obj) { }

	// RVA: 0x11411F4 Offset: 0x113D1F4 VA: 0x11411F4
	private static void XDR_BuildGroup_Order(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x11412E0 Offset: 0x113D2E0 VA: 0x11412E0
	private static void XDR_BuildGroup_MinOccurs(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x1141364 Offset: 0x113D364 VA: 0x1141364
	private static void XDR_BuildGroup_MaxOccurs(XdrBuilder builder, object obj, string prefix) { }

	// RVA: 0x11413E8 Offset: 0x113D3E8 VA: 0x11413E8
	private static void XDR_EndGroup(XdrBuilder builder) { }

	// RVA: 0x1141518 Offset: 0x113D518 VA: 0x1141518
	private static void XDR_InitElementDtType(XdrBuilder builder, object obj) { }

	// RVA: 0x11415B4 Offset: 0x113D5B4 VA: 0x11415B4
	private static void XDR_EndElementDtType(XdrBuilder builder) { }

	// RVA: 0x1141674 Offset: 0x113D674 VA: 0x1141674
	private static void XDR_InitAttributeDtType(XdrBuilder builder, object obj) { }

	// RVA: 0x11416E0 Offset: 0x113D6E0 VA: 0x11416E0
	private static void XDR_EndAttributeDtType(XdrBuilder builder) { }

	// RVA: 0x113CC00 Offset: 0x1138C00 VA: 0x113CC00
	private bool GetNextState(XmlQualifiedName qname) { }

	// RVA: 0x113CDE4 Offset: 0x1138DE4 VA: 0x113CDE4
	private bool IsSkipableElement(XmlQualifiedName qname) { }

	// RVA: 0x113D860 Offset: 0x1139860 VA: 0x113D860
	private bool IsSkipableAttribute(XmlQualifiedName qname) { }

	// RVA: 0x113EB90 Offset: 0x113AB90 VA: 0x113EB90
	private int GetOrder(XmlQualifiedName qname) { }

	// RVA: 0x114075C Offset: 0x113C75C VA: 0x114075C
	private void AddOrder() { }

	// RVA: 0x113FCA8 Offset: 0x113BCA8 VA: 0x113FCA8
	private static bool IsYes(object obj, XdrBuilder builder) { }

	// RVA: 0x114088C Offset: 0x113C88C VA: 0x114088C
	private static uint ParseMinOccurs(object obj, XdrBuilder builder) { }

	// RVA: 0x11409F8 Offset: 0x113C9F8 VA: 0x11409F8
	private static uint ParseMaxOccurs(object obj, XdrBuilder builder) { }

	// RVA: 0x1140BC4 Offset: 0x113CBC4 VA: 0x1140BC4
	private static void HandleMinMax(ParticleContentValidator pContent, uint cMin, uint cMax) { }

	// RVA: 0x113EFB8 Offset: 0x113AFB8 VA: 0x113EFB8
	private static void ParseDtMaxLength(ref uint cVal, object obj, XdrBuilder builder) { }

	// RVA: 0x113F160 Offset: 0x113B160 VA: 0x113F160
	private static void ParseDtMinLength(ref uint cVal, object obj, XdrBuilder builder) { }

	// RVA: 0x113F8A8 Offset: 0x113B8A8 VA: 0x113F8A8
	private static void CompareMinMaxLength(uint cMin, uint cMax, XdrBuilder builder) { }

	// RVA: 0x11417C0 Offset: 0x113D7C0 VA: 0x11417C0
	private static bool ParseInteger(string str, ref uint n) { }

	// RVA: 0x113E40C Offset: 0x113A40C VA: 0x113E40C
	private void XDR_CheckAttributeDefault(XdrBuilder.DeclBaseInfo decl, SchemaAttDef pAttdef) { }

	// RVA: 0x11404FC Offset: 0x113C4FC VA: 0x11404FC
	private void SetAttributePresence(SchemaAttDef pAttdef, bool fRequired) { }

	// RVA: 0x113E7E0 Offset: 0x113A7E0 VA: 0x113E7E0
	private int GetContent(XmlQualifiedName qname) { }

	// RVA: 0x113EA08 Offset: 0x113AA08 VA: 0x113EA08
	private bool GetModel(XmlQualifiedName qname) { }

	// RVA: 0x113FE78 Offset: 0x113BE78 VA: 0x113FE78
	private XmlSchemaDatatype CheckDatatype(string str) { }

	// RVA: 0x114040C Offset: 0x113C40C VA: 0x114040C
	private void CheckDefaultAttValue(SchemaAttDef attDef) { }

	// RVA: 0x113D300 Offset: 0x1139300 VA: 0x113D300
	private bool IsGlobal(int flags) { }

	// RVA: 0x113D998 Offset: 0x1139998 VA: 0x113D998
	private void SendValidationEvent(string code, string[] args, XmlSeverityType severity) { }

	// RVA: 0x113EDB4 Offset: 0x113ADB4 VA: 0x113EDB4
	private void SendValidationEvent(string code) { }

	// RVA: 0x113CEA4 Offset: 0x1138EA4 VA: 0x113CEA4
	private void SendValidationEvent(string code, string msg) { }

	// RVA: 0x1141CCC Offset: 0x113DCCC VA: 0x1141CCC
	private void SendValidationEvent(XmlSchemaException e, XmlSeverityType severity) { }

	// RVA: 0x1141E64 Offset: 0x113DE64 VA: 0x1141E64
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal sealed class XdrValidator : BaseValidator // TypeDefIndex: 3031
{
	// Fields
	private HWStack validationStack; // 0x80
	private Hashtable attPresence; // 0x88
	private XmlQualifiedName name; // 0x90
	private XmlNamespaceManager nsManager; // 0x98
	private bool isProcessContents; // 0xA0
	private Hashtable IDs; // 0xA8
	private IdRefNode idRefListHead; // 0xB0
	private Parser inlineSchemaParser; // 0xB8

	// Properties
	private bool IsInlineSchemaStarted { get; }
	private bool HasSchema { get; }
	public override bool PreserveWhitespace { get; }

	// Methods

	// RVA: 0x1143914 Offset: 0x113F914 VA: 0x1143914
	internal void .ctor(BaseValidator validator) { }

	// RVA: 0x1143B30 Offset: 0x113FB30 VA: 0x1143B30
	internal void .ctor(XmlValidatingReaderImpl reader, XmlSchemaCollection schemaCollection, IValidationEventHandling eventHandling) { }

	// RVA: 0x1143994 Offset: 0x113F994 VA: 0x1143994
	private void Init() { }

	// RVA: 0x1143C9C Offset: 0x113FC9C VA: 0x1143C9C Slot: 5
	public override void Validate() { }

	// RVA: 0x1143EAC Offset: 0x113FEAC VA: 0x1143EAC
	private void ValidateElement() { }

	// RVA: 0x11441FC Offset: 0x11401FC VA: 0x11441FC
	private void ValidateChildElement() { }

	// RVA: 0x1143D54 Offset: 0x113FD54 VA: 0x1143D54
	private bool get_IsInlineSchemaStarted() { }

	// RVA: 0x1143D64 Offset: 0x113FD64 VA: 0x1143D64
	private void ProcessInlineSchema() { }

	// RVA: 0x1144340 Offset: 0x1140340 VA: 0x1144340
	private void ProcessElement() { }

	// RVA: 0x114403C Offset: 0x114003C VA: 0x114403C
	private void ValidateEndElement() { }

	// RVA: 0x11443F4 Offset: 0x11403F4 VA: 0x11443F4
	private SchemaElementDecl ThoroughGetElementDecl() { }

	// RVA: 0x1144720 Offset: 0x1140720 VA: 0x1144720
	private void ValidateStartElement() { }

	// RVA: 0x1144B08 Offset: 0x1140B08 VA: 0x1144B08
	private void ValidateEndStartElement() { }

	// RVA: 0x1145720 Offset: 0x1141720 VA: 0x1145720
	private void LoadSchemaFromLocation(string uri) { }

	// RVA: 0x11454EC Offset: 0x11414EC VA: 0x11454EC
	private void LoadSchema(string uri) { }

	// RVA: 0x1145D70 Offset: 0x1141D70 VA: 0x1145D70
	private bool get_HasSchema() { }

	// RVA: 0x1145D94 Offset: 0x1141D94 VA: 0x1145D94 Slot: 4
	public override bool get_PreserveWhitespace() { }

	// RVA: 0x1145DCC Offset: 0x1141DCC VA: 0x1145DCC
	private void ProcessTokenizedType(XmlTokenizedType ttype, string name) { }

	// RVA: 0x1146060 Offset: 0x1142060 VA: 0x1146060 Slot: 6
	public override void CompleteValidation() { }

	// RVA: 0x1144E64 Offset: 0x1140E64 VA: 0x1144E64
	private void CheckValue(string value, SchemaAttDef attdef) { }

	// RVA: 0x11417F8 Offset: 0x113D7F8 VA: 0x11417F8
	public static void CheckDefaultValue(string value, SchemaAttDef attdef, SchemaInfo sinfo, XmlNamespaceManager nsManager, XmlNameTable NameTable, object sender, ValidationEventHandler eventhandler, string baseUri, int lineNo, int linePos) { }

	// RVA: 0x1145FD0 Offset: 0x1141FD0 VA: 0x1145FD0
	internal void AddID(string name, object node) { }

	// RVA: 0x11462D0 Offset: 0x11422D0 VA: 0x11462D0 Slot: 7
	public override object FindId(string name) { }

	// RVA: 0x1143BC8 Offset: 0x113FBC8 VA: 0x1143BC8
	private void Push(XmlQualifiedName elementName) { }

	// RVA: 0x1145450 Offset: 0x1141450 VA: 0x1145450
	private void Pop() { }

	// RVA: 0x1146120 Offset: 0x1142120 VA: 0x1146120
	private void CheckForwardRefs() { }

	// RVA: 0x114567C Offset: 0x114167C VA: 0x114567C
	private XmlQualifiedName QualifiedName(string name, string ns) { }
}


// Namespace: 
private struct XmlAtomicValue.Union // TypeDefIndex: 3032
{
	// Fields
	public bool boolVal; // 0x0
	public double dblVal; // 0x0
	public long i64Val; // 0x0
	public int i32Val; // 0x0
	public DateTime dtVal; // 0x0
}


// Namespace: 
private class XmlAtomicValue.NamespacePrefixForQName : IXmlNamespaceResolver // TypeDefIndex: 3033
{
	// Fields
	public string prefix; // 0x10
	public string ns; // 0x18

	// Methods

	// RVA: 0x11468A0 Offset: 0x11428A0 VA: 0x11468A0
	public void .ctor(string prefix, string ns) { }

	// RVA: 0x11474D0 Offset: 0x11434D0 VA: 0x11474D0 Slot: 5
	public string LookupNamespace(string prefix) { }

	// RVA: 0x1147504 Offset: 0x1143504 VA: 0x1147504 Slot: 6
	public string LookupPrefix(string namespaceName) { }

	// RVA: 0x1147530 Offset: 0x1143530 VA: 0x1147530 Slot: 4
	public IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope) { }
}


// Namespace: System.Xml.Schema
public sealed class XmlAtomicValue : XPathItem, ICloneable // TypeDefIndex: 3034
{
	// Fields
	private XmlSchemaType xmlType; // 0x10
	private object objVal; // 0x18
	private TypeCode clrType; // 0x20
	private XmlAtomicValue.Union unionVal; // 0x28
	private XmlAtomicValue.NamespacePrefixForQName nsPrefix; // 0x30

	// Properties
	public override Type ValueType { get; }
	public override object TypedValue { get; }
	public override bool ValueAsBoolean { get; }
	public override DateTime ValueAsDateTime { get; }
	public override double ValueAsDouble { get; }
	public override int ValueAsInt { get; }
	public override long ValueAsLong { get; }
	public override string Value { get; }

	// Methods

	// RVA: 0x11462EC Offset: 0x11422EC VA: 0x11462EC
	internal void .ctor(XmlSchemaType xmlType, bool value) { }

	// RVA: 0x1146374 Offset: 0x1142374 VA: 0x1146374
	internal void .ctor(XmlSchemaType xmlType, DateTime value) { }

	// RVA: 0x11463F8 Offset: 0x11423F8 VA: 0x11463F8
	internal void .ctor(XmlSchemaType xmlType, double value) { }

	// RVA: 0x1146484 Offset: 0x1142484 VA: 0x1146484
	internal void .ctor(XmlSchemaType xmlType, int value) { }

	// RVA: 0x1146508 Offset: 0x1142508 VA: 0x1146508
	internal void .ctor(XmlSchemaType xmlType, long value) { }

	// RVA: 0x114658C Offset: 0x114258C VA: 0x114658C
	internal void .ctor(XmlSchemaType xmlType, string value) { }

	// RVA: 0x1146628 Offset: 0x1142628 VA: 0x1146628
	internal void .ctor(XmlSchemaType xmlType, string value, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x11468CC Offset: 0x11428CC VA: 0x11468CC
	internal void .ctor(XmlSchemaType xmlType, object value) { }

	// RVA: 0x1146968 Offset: 0x1142968 VA: 0x1146968
	internal void .ctor(XmlSchemaType xmlType, object value, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x1146B54 Offset: 0x1142B54 VA: 0x1146B54 Slot: 14
	private object System.ICloneable.Clone() { }

	// RVA: 0x1146B58 Offset: 0x1142B58 VA: 0x1146B58 Slot: 6
	public override Type get_ValueType() { }

	// RVA: 0x1146B80 Offset: 0x1142B80 VA: 0x1146B80 Slot: 5
	public override object get_TypedValue() { }

	// RVA: 0x1146D48 Offset: 0x1142D48 VA: 0x1146D48 Slot: 7
	public override bool get_ValueAsBoolean() { }

	// RVA: 0x1146E18 Offset: 0x1142E18 VA: 0x1146E18 Slot: 8
	public override DateTime get_ValueAsDateTime() { }

	// RVA: 0x1146EFC Offset: 0x1142EFC VA: 0x1146EFC Slot: 9
	public override double get_ValueAsDouble() { }

	// RVA: 0x1146FDC Offset: 0x1142FDC VA: 0x1146FDC Slot: 10
	public override int get_ValueAsInt() { }

	// RVA: 0x11470B4 Offset: 0x11430B4 VA: 0x11470B4 Slot: 11
	public override long get_ValueAsLong() { }

	// RVA: 0x1147198 Offset: 0x1143198 VA: 0x1147198 Slot: 13
	public override object ValueAs(Type type, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x11473CC Offset: 0x11433CC VA: 0x11473CC Slot: 4
	public override string get_Value() { }

	// RVA: 0x11474C4 Offset: 0x11434C4 VA: 0x11474C4 Slot: 3
	public override string ToString() { }

	// RVA: 0x11467D4 Offset: 0x11427D4 VA: 0x11467D4
	private string GetPrefixFromQName(string value) { }
}


// Namespace: System.Xml.Schema
[XmlRoot("schema", Namespace = "http://www.w3.org/2001/XMLSchema")]
public class XmlSchema : XmlSchemaObject // TypeDefIndex: 3035
{
	// Fields
	private XmlSchemaForm attributeFormDefault; // 0x34
	private XmlSchemaForm elementFormDefault; // 0x38
	private XmlSchemaDerivationMethod blockDefault; // 0x3C
	private XmlSchemaDerivationMethod finalDefault; // 0x40
	private string targetNs; // 0x48
	private string version; // 0x50
	private XmlSchemaObjectCollection includes; // 0x58
	private XmlSchemaObjectCollection items; // 0x60
	private string id; // 0x68
	private XmlAttribute[] moreAttributes; // 0x70
	private bool isCompiled; // 0x78
	private bool isCompiledBySet; // 0x79
	private bool isPreprocessed; // 0x7A
	private bool isRedefined; // 0x7B
	private int errorCount; // 0x7C
	private XmlSchemaObjectTable attributes; // 0x80
	private XmlSchemaObjectTable attributeGroups; // 0x88
	private XmlSchemaObjectTable elements; // 0x90
	private XmlSchemaObjectTable types; // 0x98
	private XmlSchemaObjectTable groups; // 0xA0
	private XmlSchemaObjectTable notations; // 0xA8
	private XmlSchemaObjectTable identityConstraints; // 0xB0
	private static int globalIdCounter; // 0x0
	private ArrayList importedSchemas; // 0xB8
	private ArrayList importedNamespaces; // 0xC0
	private int schemaId; // 0xC8
	private Uri baseUri; // 0xD0
	private bool isChameleon; // 0xD8
	private Hashtable ids; // 0xE0
	private XmlDocument document; // 0xE8

	// Properties
	[XmlIgnore]
	public XmlSchemaObjectTable Attributes { get; }
	[XmlIgnore]
	public XmlSchemaObjectTable AttributeGroups { get; }
	[XmlIgnore]
	public XmlSchemaObjectTable SchemaTypes { get; }
	[XmlIgnore]
	public XmlSchemaObjectTable Elements { get; }
	[XmlIgnore]
	internal Uri BaseUri { get; }
	[XmlIgnore]
	internal int SchemaId { get; }
	[XmlIgnore]
	internal XmlDocument Document { get; }
	[XmlIgnore]
	internal override string IdAttribute { get; set; }
	internal ArrayList ImportedSchemas { get; }
	internal ArrayList ImportedNamespaces { get; }

	// Methods

	// RVA: 0x11475D4 Offset: 0x11435D4 VA: 0x11475D4
	public void .ctor() { }

	// RVA: 0x11477F0 Offset: 0x11437F0 VA: 0x11477F0
	public static XmlSchema Read(XmlReader reader, ValidationEventHandler validationEventHandler) { }

	// RVA: 0x11479A4 Offset: 0x11439A4 VA: 0x11479A4
	internal bool CompileSchema(XmlSchemaCollection xsc, XmlResolver resolver, SchemaInfo schemaInfo, string ns, ValidationEventHandler validationEventHandler, XmlNameTable nameTable, bool CompileContentModel) { }

	// RVA: 0x1147B80 Offset: 0x1143B80 VA: 0x1147B80
	internal void CompileSchemaInSet(XmlNameTable nameTable, ValidationEventHandler eventHandler, XmlSchemaCompilationSettings compilationSettings) { }

	// RVA: 0x1147C30 Offset: 0x1143C30 VA: 0x1147C30
	public XmlSchemaObjectTable get_Attributes() { }

	// RVA: 0x1147C90 Offset: 0x1143C90 VA: 0x1147C90
	public XmlSchemaObjectTable get_AttributeGroups() { }

	// RVA: 0x1147CF0 Offset: 0x1143CF0 VA: 0x1147CF0
	public XmlSchemaObjectTable get_SchemaTypes() { }

	// RVA: 0x1147D50 Offset: 0x1143D50 VA: 0x1147D50
	public XmlSchemaObjectTable get_Elements() { }

	// RVA: 0x1147DB0 Offset: 0x1143DB0 VA: 0x1147DB0
	internal Uri get_BaseUri() { }

	// RVA: 0x1147DB8 Offset: 0x1143DB8 VA: 0x1147DB8
	internal int get_SchemaId() { }

	// RVA: 0x1147E28 Offset: 0x1143E28 VA: 0x1147E28
	internal XmlDocument get_Document() { }

	// RVA: 0x1147E8C Offset: 0x1143E8C VA: 0x1147E8C
	internal XmlSchema Clone() { }

	// RVA: 0x1147F8C Offset: 0x1143F8C VA: 0x1147F8C
	internal XmlSchema DeepClone() { }

	// RVA: 0x1148C44 Offset: 0x1144C44 VA: 0x1148C44 Slot: 4
	internal override string get_IdAttribute() { }

	// RVA: 0x1148C4C Offset: 0x1144C4C VA: 0x1148C4C Slot: 5
	internal override void set_IdAttribute(string value) { }

	// RVA: 0x1148C54 Offset: 0x1144C54 VA: 0x1148C54 Slot: 6
	internal override void SetUnhandledAttributes(XmlAttribute[] moreAttributes) { }

	// RVA: 0x1148C5C Offset: 0x1144C5C VA: 0x1148C5C Slot: 7
	internal override void AddAnnotation(XmlSchemaAnnotation annotation) { }

	// RVA: 0x1148C74 Offset: 0x1144C74 VA: 0x1148C74
	internal ArrayList get_ImportedSchemas() { }

	// RVA: 0x1148CD8 Offset: 0x1144CD8 VA: 0x1148CD8
	internal ArrayList get_ImportedNamespaces() { }

	// RVA: 0x1148D3C Offset: 0x1144D3C VA: 0x1148D3C
	internal void GetExternalSchemasList(IList extList, XmlSchema schema) { }

	// RVA: 0x1148EFC Offset: 0x1144EFC VA: 0x1148EFC
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaAll : XmlSchemaGroupBase // TypeDefIndex: 3036
{
	// Fields
	private XmlSchemaObjectCollection items; // 0x78

	// Properties
	[XmlElement("element", typeof(XmlSchemaElement))]
	public override XmlSchemaObjectCollection Items { get; }
	internal override bool IsEmpty { get; }

	// Methods

	// RVA: 0x1148F48 Offset: 0x1144F48 VA: 0x1148F48 Slot: 13
	public override XmlSchemaObjectCollection get_Items() { }

	// RVA: 0x1148F50 Offset: 0x1144F50 VA: 0x1148F50 Slot: 11
	internal override bool get_IsEmpty() { }

	// RVA: 0x1148FF8 Offset: 0x1144FF8 VA: 0x1148FF8 Slot: 14
	internal override void SetItems(XmlSchemaObjectCollection newItems) { }

	// RVA: 0x1149000 Offset: 0x1145000 VA: 0x1149000
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaAnnotated : XmlSchemaObject // TypeDefIndex: 3037
{
	// Fields
	private string id; // 0x38
	private XmlSchemaAnnotation annotation; // 0x40
	private XmlAttribute[] moreAttributes; // 0x48

	// Properties
	[XmlIgnore]
	internal override string IdAttribute { get; set; }

	// Methods

	// RVA: 0x11490B0 Offset: 0x11450B0 VA: 0x11490B0 Slot: 4
	internal override string get_IdAttribute() { }

	// RVA: 0x11490B8 Offset: 0x11450B8 VA: 0x11490B8 Slot: 5
	internal override void set_IdAttribute(string value) { }

	// RVA: 0x11490C0 Offset: 0x11450C0 VA: 0x11490C0 Slot: 6
	internal override void SetUnhandledAttributes(XmlAttribute[] moreAttributes) { }

	// RVA: 0x11490C8 Offset: 0x11450C8 VA: 0x11490C8 Slot: 7
	internal override void AddAnnotation(XmlSchemaAnnotation annotation) { }

	// RVA: 0x11490D0 Offset: 0x11450D0 VA: 0x11490D0
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaAnnotation : XmlSchemaObject // TypeDefIndex: 3038
{
	// Fields
	private string id; // 0x38
	private XmlSchemaObjectCollection items; // 0x40
	private XmlAttribute[] moreAttributes; // 0x48

	// Properties
	[XmlIgnore]
	internal override string IdAttribute { get; set; }

	// Methods

	// RVA: 0x11490D8 Offset: 0x11450D8 VA: 0x11490D8 Slot: 4
	internal override string get_IdAttribute() { }

	// RVA: 0x11490E0 Offset: 0x11450E0 VA: 0x11490E0 Slot: 5
	internal override void set_IdAttribute(string value) { }

	// RVA: 0x11490E8 Offset: 0x11450E8 VA: 0x11490E8 Slot: 6
	internal override void SetUnhandledAttributes(XmlAttribute[] moreAttributes) { }

	// RVA: 0x11490F0 Offset: 0x11450F0 VA: 0x11490F0
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaAny : XmlSchemaParticle // TypeDefIndex: 3039
{
	// Fields
	private string ns; // 0x78
	private XmlSchemaContentProcessing processContents; // 0x80
	private NamespaceList namespaceList; // 0x88

	// Properties
	[XmlIgnore]
	internal string ResolvedNamespace { get; }
	[XmlIgnore]
	internal XmlSchemaContentProcessing ProcessContentsCorrect { get; }
	internal override string NameString { get; }

	// Methods

	// RVA: 0x1149150 Offset: 0x1145150 VA: 0x1149150
	internal string get_ResolvedNamespace() { }

	// RVA: 0x11491A8 Offset: 0x11451A8 VA: 0x11491A8
	internal XmlSchemaContentProcessing get_ProcessContentsCorrect() { }

	// RVA: 0x11491BC Offset: 0x11451BC VA: 0x11491BC Slot: 12
	internal override string get_NameString() { }

	// RVA: 0x11496D4 Offset: 0x11456D4 VA: 0x11496D4
	internal void BuildNamespaceList(string targetNamespace) { }

	// RVA: 0x1149754 Offset: 0x1145754 VA: 0x1149754
	internal void BuildNamespaceListV1Compat(string targetNamespace) { }

	// RVA: 0x11497F4 Offset: 0x11457F4 VA: 0x11497F4
	internal bool Allows(XmlQualifiedName qname) { }

	// RVA: 0x114981C Offset: 0x114581C VA: 0x114981C
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaAnyAttribute : XmlSchemaAnnotated // TypeDefIndex: 3040
{
	// Fields
	private string ns; // 0x50
	private XmlSchemaContentProcessing processContents; // 0x58
	private NamespaceList namespaceList; // 0x60

	// Properties
	[XmlIgnore]
	internal XmlSchemaContentProcessing ProcessContentsCorrect { get; }

	// Methods

	// RVA: 0x11498E4 Offset: 0x11458E4 VA: 0x11498E4
	internal XmlSchemaContentProcessing get_ProcessContentsCorrect() { }

	// RVA: 0x11498F8 Offset: 0x11458F8 VA: 0x11498F8
	internal void BuildNamespaceList(string targetNamespace) { }

	// RVA: 0x1149978 Offset: 0x1145978 VA: 0x1149978
	internal void BuildNamespaceListV1Compat(string targetNamespace) { }

	// RVA: 0x1149A18 Offset: 0x1145A18 VA: 0x1149A18
	internal bool Allows(XmlQualifiedName qname) { }

	// RVA: 0x1149A40 Offset: 0x1145A40 VA: 0x1149A40
	internal static bool IsSubset(XmlSchemaAnyAttribute sub, XmlSchemaAnyAttribute super) { }

	// RVA: 0x1149A64 Offset: 0x1145A64 VA: 0x1149A64
	internal static XmlSchemaAnyAttribute Intersection(XmlSchemaAnyAttribute o1, XmlSchemaAnyAttribute o2, bool v1Compat) { }

	// RVA: 0x1149B1C Offset: 0x1145B1C VA: 0x1149B1C
	internal static XmlSchemaAnyAttribute Union(XmlSchemaAnyAttribute o1, XmlSchemaAnyAttribute o2, bool v1Compat) { }

	// RVA: 0x1149B14 Offset: 0x1145B14 VA: 0x1149B14
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaAppInfo : XmlSchemaObject // TypeDefIndex: 3041
{
	// Fields
	private string source; // 0x38
	private XmlNode[] markup; // 0x40

	// Methods

	// RVA: 0x1149BCC Offset: 0x1145BCC VA: 0x1149BCC
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaAttribute : XmlSchemaAnnotated // TypeDefIndex: 3042
{
	// Fields
	private string defaultValue; // 0x50
	private string fixedValue; // 0x58
	private string name; // 0x60
	private XmlSchemaForm form; // 0x68
	private XmlSchemaUse use; // 0x6C
	private XmlQualifiedName refName; // 0x70
	private XmlQualifiedName typeName; // 0x78
	private XmlQualifiedName qualifiedName; // 0x80
	private XmlSchemaSimpleType type; // 0x88
	private XmlSchemaSimpleType attributeType; // 0x90
	private SchemaAttDef attDef; // 0x98

	// Properties
	[Xml("ref")]
	public XmlQualifiedName RefName { set; }
	[Xml("type")]
	public XmlQualifiedName SchemaTypeName { set; }
	[XmlIgnore]
	internal XmlSchemaDatatype Datatype { get; }
	[XmlIgnore]
	internal override string NameAttribute { get; set; }

	// Methods

	// RVA: 0x1149BD4 Offset: 0x1145BD4 VA: 0x1149BD4
	public void set_RefName(XmlQualifiedName value) { }

	// RVA: 0x1149C6C Offset: 0x1145C6C VA: 0x1149C6C
	public void set_SchemaTypeName(XmlQualifiedName value) { }

	// RVA: 0x1149D04 Offset: 0x1145D04 VA: 0x1149D04
	internal XmlSchemaDatatype get_Datatype() { }

	// RVA: 0x1149D1C Offset: 0x1145D1C VA: 0x1149D1C
	internal void SetQualifiedName(XmlQualifiedName value) { }

	// RVA: 0x1149D24 Offset: 0x1145D24 VA: 0x1149D24 Slot: 8
	internal override string get_NameAttribute() { }

	// RVA: 0x1149D2C Offset: 0x1145D2C VA: 0x1149D2C Slot: 9
	internal override void set_NameAttribute(string value) { }

	// RVA: 0x1149D34 Offset: 0x1145D34 VA: 0x1149D34 Slot: 10
	internal override XmlSchemaObject Clone() { }

	// RVA: 0x1149E04 Offset: 0x1145E04 VA: 0x1149E04
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaAttributeGroup : XmlSchemaAnnotated // TypeDefIndex: 3043
{
	// Fields
	private string name; // 0x50
	private XmlSchemaObjectCollection attributes; // 0x58
	private XmlSchemaAnyAttribute anyAttribute; // 0x60
	private XmlQualifiedName qname; // 0x68
	private XmlSchemaAttributeGroup redefined; // 0x70
	private XmlSchemaObjectTable attributeUses; // 0x78
	private XmlSchemaAnyAttribute attributeWildcard; // 0x80
	private int selfReferenceCount; // 0x88

	// Properties
	[XmlIgnore]
	internal XmlSchemaObjectTable AttributeUses { get; }
	[XmlIgnore]
	internal override string NameAttribute { get; set; }

	// Methods

	// RVA: 0x1149E70 Offset: 0x1145E70 VA: 0x1149E70
	internal XmlSchemaObjectTable get_AttributeUses() { }

	// RVA: 0x1149ED0 Offset: 0x1145ED0 VA: 0x1149ED0 Slot: 8
	internal override string get_NameAttribute() { }

	// RVA: 0x1149ED8 Offset: 0x1145ED8 VA: 0x1149ED8 Slot: 9
	internal override void set_NameAttribute(string value) { }

	// RVA: 0x1149EE0 Offset: 0x1145EE0 VA: 0x1149EE0 Slot: 10
	internal override XmlSchemaObject Clone() { }

	// RVA: 0x114A358 Offset: 0x1146358 VA: 0x114A358
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaAttributeGroupRef : XmlSchemaAnnotated // TypeDefIndex: 3044
{
	// Fields
	private XmlQualifiedName refName; // 0x50

	// Properties
	[Xml("ref")]
	public XmlQualifiedName RefName { set; }

	// Methods

	// RVA: 0x114A3F4 Offset: 0x11463F4 VA: 0x114A3F4
	public void set_RefName(XmlQualifiedName value) { }

	// RVA: 0x114A48C Offset: 0x114648C VA: 0x114A48C
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaChoice : XmlSchemaGroupBase // TypeDefIndex: 3045
{
	// Fields
	private XmlSchemaObjectCollection items; // 0x78

	// Properties
	[XmlElement("sequence", typeof(XmlSchemaSequence))]
	[XmlElement("choice", typeof(XmlSchemaChoice))]
	[XmlElement("any", typeof(XmlSchemaAny))]
	[XmlElement("element", typeof(XmlSchemaElement))]
	[XmlElement("group", typeof(XmlSchemaGroupRef))]
	public override XmlSchemaObjectCollection Items { get; }
	internal override bool IsEmpty { get; }

	// Methods

	// RVA: 0x114A4F4 Offset: 0x11464F4 VA: 0x114A4F4 Slot: 13
	public override XmlSchemaObjectCollection get_Items() { }

	// RVA: 0x114A4FC Offset: 0x11464FC VA: 0x114A4FC Slot: 11
	internal override bool get_IsEmpty() { }

	// RVA: 0x114A500 Offset: 0x1146500 VA: 0x114A500 Slot: 14
	internal override void SetItems(XmlSchemaObjectCollection newItems) { }

	// RVA: 0x114A508 Offset: 0x1146508 VA: 0x114A508
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
[Obsolete("Use System.Xml.Schema.XmlSchemaSet for schema compilation and validation. https://go.microsoft.com/fwlink/?linkid=14202")]
[DefaultMember("Item")]
public sealed class XmlSchemaCollection : ICollection, IEnumerable // TypeDefIndex: 3046
{
	// Fields
	private Hashtable collection; // 0x10
	private XmlNameTable nameTable; // 0x18
	private SchemaNames schemaNames; // 0x20
	private ReaderWriterLock wLock; // 0x28
	private int timeout; // 0x30
	private bool isThreadSafe; // 0x34
	private ValidationEventHandler validationEventHandler; // 0x38
	private XmlResolver xmlResolver; // 0x40

	// Properties
	public int Count { get; }
	public XmlSchema Item { get; }
	private bool System.Collections.ICollection.IsSynchronized { get; }
	private object System.Collections.ICollection.SyncRoot { get; }
	private int System.Collections.ICollection.Count { get; }

	// Methods

	// RVA: 0x114A564 Offset: 0x1146564 VA: 0x114A564
	public void .ctor(XmlNameTable nametable) { }

	// RVA: 0x114A67C Offset: 0x114667C VA: 0x114A67C
	public int get_Count() { }

	// RVA: 0x114A6A0 Offset: 0x11466A0 VA: 0x114A6A0
	public XmlSchema get_Item(string ns) { }

	// RVA: 0x114A744 Offset: 0x1146744 VA: 0x114A744 Slot: 8
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	// RVA: 0x114A7E4 Offset: 0x11467E4 VA: 0x114A7E4
	public XmlSchemaCollectionEnumerator GetEnumerator() { }

	// RVA: 0x114A840 Offset: 0x1146840 VA: 0x114A840 Slot: 4
	private void System.Collections.ICollection.CopyTo(Array array, int index) { }

	// RVA: 0x114AABC Offset: 0x1146ABC VA: 0x114AABC Slot: 7
	private bool System.Collections.ICollection.get_IsSynchronized() { }

	// RVA: 0x114AAC4 Offset: 0x1146AC4 VA: 0x114AAC4 Slot: 6
	private object System.Collections.ICollection.get_SyncRoot() { }

	// RVA: 0x114AAC8 Offset: 0x1146AC8 VA: 0x114AAC8 Slot: 5
	private int System.Collections.ICollection.get_Count() { }

	// RVA: 0x1145CCC Offset: 0x1141CCC VA: 0x1145CCC
	internal SchemaInfo GetSchemaInfo(string ns) { }

	// RVA: 0x114AAEC Offset: 0x1146AEC VA: 0x114AAEC
	internal SchemaNames GetSchemaNames(XmlNameTable nt) { }

	// RVA: 0x11443E8 Offset: 0x11403E8 VA: 0x11443E8
	internal XmlSchema Add(string ns, SchemaInfo schemaInfo, XmlSchema schema, bool compile) { }

	// RVA: 0x114AB84 Offset: 0x1146B84 VA: 0x114AB84
	private XmlSchema Add(string ns, SchemaInfo schemaInfo, XmlSchema schema, bool compile, XmlResolver resolver) { }

	// RVA: 0x114ACD4 Offset: 0x1146CD4 VA: 0x114ACD4
	private void Add(string ns, XmlSchemaCollectionNode node) { }
}


// Namespace: System.Xml.Schema
internal sealed class XmlSchemaCollectionNode // TypeDefIndex: 3047
{
	// Fields
	private string namespaceUri; // 0x10
	private SchemaInfo schemaInfo; // 0x18
	private XmlSchema schema; // 0x20

	// Methods

	// RVA: 0x114ACCC Offset: 0x1146CCC VA: 0x114ACCC
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public sealed class XmlSchemaCollectionEnumerator : IEnumerator // TypeDefIndex: 3048
{
	// Fields
	private IDictionaryEnumerator enumerator; // 0x10

	// Properties
	private object System.Collections.IEnumerator.Current { get; }
	public XmlSchema Current { get; }
	internal XmlSchemaCollectionNode CurrentNode { get; }

	// Methods

	// RVA: 0x114A7A0 Offset: 0x11467A0 VA: 0x114A7A0
	internal void .ctor(Hashtable collection) { }

	// RVA: 0x114AE10 Offset: 0x1146E10 VA: 0x114AE10 Slot: 6
	private void System.Collections.IEnumerator.Reset() { }

	// RVA: 0x114AEB4 Offset: 0x1146EB4 VA: 0x114AEB4 Slot: 4
	private bool System.Collections.IEnumerator.MoveNext() { }

	// RVA: 0x114AA1C Offset: 0x1146A1C VA: 0x114AA1C
	public bool MoveNext() { }

	// RVA: 0x114AF54 Offset: 0x1146F54 VA: 0x114AF54 Slot: 5
	private object System.Collections.IEnumerator.get_Current() { }

	// RVA: 0x114A944 Offset: 0x1146944 VA: 0x114A944
	public XmlSchema get_Current() { }

	// RVA: 0x114AF58 Offset: 0x1146F58 VA: 0x114AF58
	internal XmlSchemaCollectionNode get_CurrentNode() { }
}


// Namespace: System.Xml.Schema
public sealed class XmlSchemaCompilationSettings // TypeDefIndex: 3049
{
	// Fields
	private bool enableUpaCheck; // 0x10

	// Methods

	// RVA: 0x114B02C Offset: 0x114702C VA: 0x114B02C
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaComplexContent : XmlSchemaContentModel // TypeDefIndex: 3050
{
	// Fields
	private XmlSchemaContent content; // 0x50
	private bool isMixed; // 0x58
	private bool hasMixedAttribute; // 0x59

	// Properties
	[Xml("mixed")]
	public bool IsMixed { set; }
	[XmlElement("restriction", typeof(XmlSchemaComplexContentRestriction))]
	[XmlElement("extension", typeof(XmlSchemaComplexContentExtension))]
	public override XmlSchemaContent Content { get; }

	// Methods

	// RVA: 0x114B04C Offset: 0x114704C VA: 0x114B04C
	public void set_IsMixed(bool value) { }

	// RVA: 0x114B060 Offset: 0x1147060 VA: 0x114B060 Slot: 11
	public override XmlSchemaContent get_Content() { }

	// RVA: 0x114B068 Offset: 0x1147068 VA: 0x114B068
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaComplexContentExtension : XmlSchemaContent // TypeDefIndex: 3051
{
	// Fields
	private XmlSchemaParticle particle; // 0x50
	private XmlSchemaObjectCollection attributes; // 0x58
	private XmlSchemaAnyAttribute anyAttribute; // 0x60
	private XmlQualifiedName baseTypeName; // 0x68

	// Properties
	[Xml("base")]
	public XmlQualifiedName BaseTypeName { set; }

	// Methods

	// RVA: 0x114B078 Offset: 0x1147078 VA: 0x114B078
	public void set_BaseTypeName(XmlQualifiedName value) { }

	// RVA: 0x114B110 Offset: 0x1147110 VA: 0x114B110
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaComplexContentRestriction : XmlSchemaContent // TypeDefIndex: 3052
{
	// Fields
	private XmlSchemaParticle particle; // 0x50
	private XmlSchemaObjectCollection attributes; // 0x58
	private XmlSchemaAnyAttribute anyAttribute; // 0x60
	private XmlQualifiedName baseTypeName; // 0x68

	// Properties
	[Xml("base")]
	public XmlQualifiedName BaseTypeName { set; }

	// Methods

	// RVA: 0x114B1B4 Offset: 0x11471B4 VA: 0x114B1B4
	public void set_BaseTypeName(XmlQualifiedName value) { }

	// RVA: 0x114B24C Offset: 0x114724C VA: 0x114B24C
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaComplexType : XmlSchemaType // TypeDefIndex: 3053
{
	// Fields
	private XmlSchemaDerivationMethod block; // 0x94
	private XmlSchemaContentModel contentModel; // 0x98
	private XmlSchemaParticle particle; // 0xA0
	private XmlSchemaObjectCollection attributes; // 0xA8
	private XmlSchemaAnyAttribute anyAttribute; // 0xB0
	private XmlSchemaParticle contentTypeParticle; // 0xB8
	private XmlSchemaDerivationMethod blockResolved; // 0xC0
	private XmlSchemaObjectTable localElements; // 0xC8
	private XmlSchemaObjectTable attributeUses; // 0xD0
	private XmlSchemaAnyAttribute attributeWildcard; // 0xD8
	private static XmlSchemaComplexType anyTypeLax; // 0x0
	private static XmlSchemaComplexType anyTypeSkip; // 0x8
	private static XmlSchemaComplexType untypedAnyType; // 0x10
	private byte pvFlags; // 0xE0

	// Properties
	internal static ContentValidator AnyTypeContentValidator { get; }
	[Xml("abstract")]
	[DefaultValue(False)]
	public bool IsAbstract { get; set; }
	[DefaultValue(False)]
	[Xml("mixed")]
	public override bool IsMixed { get; set; }
	[XmlElement("attributeGroup", typeof(XmlSchemaAttributeGroupRef))]
	[XmlElement("attribute", typeof(XmlSchemaAttribute))]
	public XmlSchemaObjectCollection Attributes { get; }
	[XmlIgnore]
	public XmlSchemaObjectTable AttributeUses { get; }
	[XmlIgnore]
	internal XmlSchemaObjectTable LocalElements { get; }
	internal bool HasWildCard { set; }

	// Methods

	// RVA: 0x114B2E8 Offset: 0x11472E8 VA: 0x114B2E8
	private static void .cctor() { }

	// RVA: 0x114B4B0 Offset: 0x11474B0 VA: 0x114B4B0
	private static XmlSchemaComplexType CreateAnyType(XmlSchemaContentProcessing processContents) { }

	// RVA: 0x114B7A8 Offset: 0x11477A8 VA: 0x114B7A8
	public void .ctor() { }

	// RVA: 0x114B818 Offset: 0x1147818 VA: 0x114B818
	internal static ContentValidator get_AnyTypeContentValidator() { }

	// RVA: 0x114BB10 Offset: 0x1147B10 VA: 0x114BB10
	public bool get_IsAbstract() { }

	// RVA: 0x114BB1C Offset: 0x1147B1C VA: 0x114BB1C
	public void set_IsAbstract(bool value) { }

	// RVA: 0x114BB3C Offset: 0x1147B3C VA: 0x114BB3C Slot: 11
	public override bool get_IsMixed() { }

	// RVA: 0x114BB48 Offset: 0x1147B48 VA: 0x114BB48 Slot: 12
	public override void set_IsMixed(bool value) { }

	// RVA: 0x114BB68 Offset: 0x1147B68 VA: 0x114BB68
	public XmlSchemaObjectCollection get_Attributes() { }

	// RVA: 0x114BBCC Offset: 0x1147BCC VA: 0x114BBCC
	public XmlSchemaObjectTable get_AttributeUses() { }

	// RVA: 0x114BC2C Offset: 0x1147C2C VA: 0x114BC2C
	internal XmlSchemaObjectTable get_LocalElements() { }

	// RVA: 0x114BC8C Offset: 0x1147C8C VA: 0x114BC8C
	internal void set_HasWildCard(bool value) { }

	// RVA: 0x114BC9C Offset: 0x1147C9C VA: 0x114BC9C
	internal bool ContainsIdAttribute(bool findAll) { }

	// RVA: 0x114C0C8 Offset: 0x11480C8 VA: 0x114C0C8 Slot: 10
	internal override XmlSchemaObject Clone() { }

	// RVA: 0x1148284 Offset: 0x1144284 VA: 0x1148284
	internal XmlSchemaObject Clone(XmlSchema parentSchema) { }

	// RVA: 0x114C604 Offset: 0x1148604 VA: 0x114C604
	private void ClearCompiledState() { }

	// RVA: 0x114A130 Offset: 0x1146130 VA: 0x114A130
	internal static XmlSchemaObjectCollection CloneAttributes(XmlSchemaObjectCollection attributes) { }

	// RVA: 0x114C6F4 Offset: 0x11486F4 VA: 0x114C6F4
	private static XmlSchemaObjectCollection CloneGroupBaseParticles(XmlSchemaObjectCollection groupBaseParticles, XmlSchema parentSchema) { }

	// RVA: 0x114C358 Offset: 0x1148358 VA: 0x114C358
	internal static XmlSchemaParticle CloneParticle(XmlSchemaParticle particle, XmlSchema parentSchema) { }

	// RVA: 0x114C8CC Offset: 0x11488CC VA: 0x114C8CC
	private static XmlSchemaForm GetResolvedElementForm(XmlSchema parentSchema, XmlSchemaElement element) { }

	// RVA: 0x114C0D0 Offset: 0x11480D0 VA: 0x114C0D0
	internal static bool HasParticleRef(XmlSchemaParticle particle, XmlSchema parentSchema) { }

	// RVA: 0x1149FD4 Offset: 0x1145FD4 VA: 0x1149FD4
	internal static bool HasAttributeQNameRef(XmlSchemaObjectCollection attributes) { }
}


// Namespace: System.Xml.Schema
public abstract class XmlSchemaContent : XmlSchemaAnnotated // TypeDefIndex: 3054
{
	// Methods

	// RVA: 0x114B1AC Offset: 0x11471AC VA: 0x114B1AC
	protected void .ctor() { }
}


// Namespace: System.Xml.Schema
public abstract class XmlSchemaContentModel : XmlSchemaAnnotated // TypeDefIndex: 3055
{
	// Properties
	[XmlIgnore]
	public abstract XmlSchemaContent Content { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 11
	public abstract XmlSchemaContent get_Content();

	// RVA: 0x114B070 Offset: 0x1147070 VA: 0x114B070
	protected void .ctor() { }
}


// Namespace: System.Xml.Schema
public enum XmlSchemaContentProcessing // TypeDefIndex: 3056
{
	// Fields
	public int value__; // 0x0
	[XmlIgnore]
	public const XmlSchemaContentProcessing None = 0;
	[XmlEnum("skip")]
	public const XmlSchemaContentProcessing Skip = 1;
	[XmlEnum("lax")]
	public const XmlSchemaContentProcessing Lax = 2;
	[XmlEnum("strict")]
	public const XmlSchemaContentProcessing Strict = 3;
}


// Namespace: System.Xml.Schema
public enum XmlSchemaContentType // TypeDefIndex: 3057
{
	// Fields
	public int value__; // 0x0
	public const XmlSchemaContentType TextOnly = 0;
	public const XmlSchemaContentType Empty = 1;
	public const XmlSchemaContentType ElementOnly = 2;
	public const XmlSchemaContentType Mixed = 3;
}


// Namespace: System.Xml.Schema
public abstract class XmlSchemaDatatype // TypeDefIndex: 3058
{
	// Properties
	public abstract Type ValueType { get; }
	public abstract XmlTokenizedType TokenizedType { get; }
	public virtual XmlSchemaDatatypeVariety Variety { get; }
	public virtual XmlTypeCode TypeCode { get; }
	internal abstract bool HasLexicalFacets { get; }
	internal abstract bool HasValueFacets { get; }
	internal abstract XmlValueConverter ValueConverter { get; }
	internal abstract RestrictionFacets Restriction { get; }
	internal abstract FacetsChecker FacetsChecker { get; }
	internal abstract XmlSchemaWhiteSpace BuiltInWhitespaceFacet { get; }
	internal string TypeCodeString { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public abstract Type get_ValueType();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract XmlTokenizedType get_TokenizedType();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr);

	// RVA: 0x114C8F8 Offset: 0x11488F8 VA: 0x114C8F8 Slot: 7
	public virtual XmlSchemaDatatypeVariety get_Variety() { }

	// RVA: 0x114C900 Offset: 0x1148900 VA: 0x114C900 Slot: 8
	public virtual XmlTypeCode get_TypeCode() { }

	// RVA: 0x114C908 Offset: 0x1148908 VA: 0x114C908 Slot: 9
	public virtual bool IsDerivedFrom(XmlSchemaDatatype datatype) { }

	// RVA: -1 Offset: -1 Slot: 10
	internal abstract bool get_HasLexicalFacets();

	// RVA: -1 Offset: -1 Slot: 11
	internal abstract bool get_HasValueFacets();

	// RVA: -1 Offset: -1 Slot: 12
	internal abstract XmlValueConverter get_ValueConverter();

	// RVA: -1 Offset: -1 Slot: 13
	internal abstract RestrictionFacets get_Restriction();

	// RVA: -1 Offset: -1 Slot: 14
	internal abstract int Compare(object value1, object value2);

	// RVA: -1 Offset: -1 Slot: 15
	internal abstract object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, bool createAtomicValue);

	// RVA: -1 Offset: -1 Slot: 16
	internal abstract Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue);

	// RVA: -1 Offset: -1 Slot: 17
	internal abstract Exception TryParseValue(object value, XmlNameTable nameTable, IXmlNamespaceResolver namespaceResolver, out object typedValue);

	// RVA: -1 Offset: -1 Slot: 18
	internal abstract FacetsChecker get_FacetsChecker();

	// RVA: -1 Offset: -1 Slot: 19
	internal abstract XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet();

	// RVA: -1 Offset: -1 Slot: 20
	internal abstract XmlSchemaDatatype DeriveByRestriction(XmlSchemaObjectCollection facets, XmlNameTable nameTable, XmlSchemaType schemaType);

	// RVA: -1 Offset: -1 Slot: 21
	internal abstract XmlSchemaDatatype DeriveByList(XmlSchemaType schemaType);

	// RVA: -1 Offset: -1 Slot: 22
	internal abstract void VerifySchemaValid(XmlSchemaObjectTable notations, XmlSchemaObject caller);

	// RVA: -1 Offset: -1 Slot: 23
	internal abstract bool IsEqual(object o1, object o2);

	// RVA: -1 Offset: -1 Slot: 24
	internal abstract bool IsComparable(XmlSchemaDatatype dtype);

	// RVA: 0x114C910 Offset: 0x1148910 VA: 0x114C910
	internal string get_TypeCodeString() { }

	// RVA: 0x114CA38 Offset: 0x1148A38 VA: 0x114CA38
	internal string TypeCodeToString(XmlTypeCode typeCode) { }

	// RVA: 0x114CEE4 Offset: 0x1148EE4 VA: 0x114CEE4
	internal static string ConcatenatedToString(object value) { }

	// RVA: 0x11403B4 Offset: 0x113C3B4 VA: 0x11403B4
	internal static XmlSchemaDatatype FromXmlTokenizedType(XmlTokenizedType token) { }

	// RVA: 0x114D5B8 Offset: 0x11495B8 VA: 0x114D5B8
	internal static XmlSchemaDatatype FromXmlTokenizedTypeXsd(XmlTokenizedType token) { }

	// RVA: 0x113EE14 Offset: 0x113AE14 VA: 0x113EE14
	internal static XmlSchemaDatatype FromXdrName(string name) { }

	// RVA: 0x114D610 Offset: 0x1149610 VA: 0x114D610
	internal static XmlSchemaDatatype DeriveByUnion(XmlSchemaSimpleType[] types, XmlSchemaType schemaType) { }

	// RVA: 0x113CA44 Offset: 0x1138A44 VA: 0x113CA44
	internal static string XdrCanonizeUri(string uri, XmlNameTable nameTable, SchemaNames schemaNames) { }

	// RVA: 0x114D678 Offset: 0x1149678 VA: 0x114D678
	protected void .ctor() { }
}


// Namespace: System.Xml.Schema
[Flags]
public enum XmlSchemaDerivationMethod // TypeDefIndex: 3059
{
	// Fields
	public int value__; // 0x0
	[XmlEnum("")]
	public const XmlSchemaDerivationMethod Empty = 0;
	[XmlEnum("substitution")]
	public const XmlSchemaDerivationMethod Substitution = 1;
	[XmlEnum("extension")]
	public const XmlSchemaDerivationMethod Extension = 2;
	[XmlEnum("restriction")]
	public const XmlSchemaDerivationMethod Restriction = 4;
	[XmlEnum("list")]
	public const XmlSchemaDerivationMethod List = 8;
	[XmlEnum("union")]
	public const XmlSchemaDerivationMethod Union = 16;
	[XmlEnum("#all")]
	public const XmlSchemaDerivationMethod All = 255;
	[XmlIgnore]
	public const XmlSchemaDerivationMethod None = 256;
}


// Namespace: System.Xml.Schema
public class XmlSchemaDocumentation : XmlSchemaObject // TypeDefIndex: 3060
{
	// Fields
	private string source; // 0x38
	private string language; // 0x40
	private XmlNode[] markup; // 0x48
	private static XmlSchemaSimpleType languageType; // 0x0

	// Properties
	[Xml("xml:lang")]
	public string Language { set; }

	// Methods

	// RVA: 0x114D680 Offset: 0x1149680 VA: 0x114D680
	public void set_Language(string value) { }

	// RVA: 0x114D750 Offset: 0x1149750 VA: 0x114D750
	public void .ctor() { }

	// RVA: 0x114D758 Offset: 0x1149758 VA: 0x114D758
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaElement : XmlSchemaParticle // TypeDefIndex: 3061
{
	// Fields
	private bool isAbstract; // 0x74
	private bool hasAbstractAttribute; // 0x75
	private bool isNillable; // 0x76
	private bool hasNillableAttribute; // 0x77
	private bool isLocalTypeDerivationChecked; // 0x78
	private XmlSchemaDerivationMethod block; // 0x7C
	private XmlSchemaDerivationMethod final; // 0x80
	private XmlSchemaForm form; // 0x84
	private string defaultValue; // 0x88
	private string fixedValue; // 0x90
	private string name; // 0x98
	private XmlQualifiedName refName; // 0xA0
	private XmlQualifiedName substitutionGroup; // 0xA8
	private XmlQualifiedName typeName; // 0xB0
	private XmlSchemaType type; // 0xB8
	private XmlQualifiedName qualifiedName; // 0xC0
	private XmlSchemaType elementType; // 0xC8
	private XmlSchemaDerivationMethod blockResolved; // 0xD0
	private XmlSchemaDerivationMethod finalResolved; // 0xD4
	private XmlSchemaObjectCollection constraints; // 0xD8
	private SchemaElementDecl elementDecl; // 0xE0

	// Properties
	[Xml("abstract")]
	[DefaultValue(False)]
	public bool IsAbstract { set; }
	[Xml("nillable")]
	[DefaultValue(False)]
	public bool IsNillable { set; }
	[Xml("ref")]
	public XmlQualifiedName RefName { set; }
	[Xml("substitutionGroup")]
	public XmlQualifiedName SubstitutionGroup { set; }
	[Xml("type")]
	public XmlQualifiedName SchemaTypeName { set; }
	[XmlElement("keyref", typeof(XmlSchemaKeyref))]
	[XmlElement("unique", typeof(XmlSchemaUnique))]
	[XmlElement("key", typeof(XmlSchemaKey))]
	public XmlSchemaObjectCollection Constraints { get; }
	internal bool HasConstraints { get; }
	[XmlIgnore]
	internal override string NameAttribute { get; set; }
	[XmlIgnore]
	internal override string NameString { get; }

	// Methods

	// RVA: 0x114D830 Offset: 0x1149830 VA: 0x114D830
	public void set_IsAbstract(bool value) { }

	// RVA: 0x114D844 Offset: 0x1149844 VA: 0x114D844
	public void set_IsNillable(bool value) { }

	// RVA: 0x114D858 Offset: 0x1149858 VA: 0x114D858
	public void set_RefName(XmlQualifiedName value) { }

	// RVA: 0x114D8F0 Offset: 0x11498F0 VA: 0x114D8F0
	public void set_SubstitutionGroup(XmlQualifiedName value) { }

	// RVA: 0x114D988 Offset: 0x1149988 VA: 0x114D988
	public void set_SchemaTypeName(XmlQualifiedName value) { }

	// RVA: 0x114DA20 Offset: 0x1149A20 VA: 0x114DA20
	public XmlSchemaObjectCollection get_Constraints() { }

	// RVA: 0x114DA84 Offset: 0x1149A84 VA: 0x114DA84
	internal void SetQualifiedName(XmlQualifiedName value) { }

	// RVA: 0x114DA8C Offset: 0x1149A8C VA: 0x114DA8C
	internal bool get_HasConstraints() { }

	// RVA: 0x114DAB0 Offset: 0x1149AB0 VA: 0x114DAB0 Slot: 8
	internal override string get_NameAttribute() { }

	// RVA: 0x114DAB8 Offset: 0x1149AB8 VA: 0x114DAB8 Slot: 9
	internal override void set_NameAttribute(string value) { }

	// RVA: 0x114DAC0 Offset: 0x1149AC0 VA: 0x114DAC0 Slot: 12
	internal override string get_NameString() { }

	// RVA: 0x114DAE0 Offset: 0x1149AE0 VA: 0x114DAE0 Slot: 10
	internal override XmlSchemaObject Clone() { }

	// RVA: 0x1148840 Offset: 0x1144840 VA: 0x1148840
	internal XmlSchemaObject Clone(XmlSchema parentSchema) { }

	// RVA: 0x114DAE8 Offset: 0x1149AE8 VA: 0x114DAE8
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
[Serializable]
public class XmlSchemaException : SystemException // TypeDefIndex: 3062
{
	// Fields
	private string res; // 0x90
	private string[] args; // 0x98
	private string sourceUri; // 0xA0
	private int lineNumber; // 0xA8
	private int linePosition; // 0xAC
	private XmlSchemaObject sourceSchemaObject; // 0xB0
	private string message; // 0xB8

	// Properties
	public override string Message { get; }

	// Methods

	// RVA: 0x114DB80 Offset: 0x1149B80 VA: 0x114DB80
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x114DFFC Offset: 0x1149FFC VA: 0x114DFFC Slot: 10
	public override void GetObjectData(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x114E16C Offset: 0x114A16C VA: 0x114E16C
	public void .ctor() { }

	// RVA: 0x114E180 Offset: 0x114A180 VA: 0x114E180
	public void .ctor(string message) { }

	// RVA: 0x114E290 Offset: 0x114A290 VA: 0x114E290
	public void .ctor(string message, Exception innerException) { }

	// RVA: 0x114E190 Offset: 0x114A190 VA: 0x114E190
	public void .ctor(string message, Exception innerException, int lineNumber, int linePosition) { }

	// RVA: 0x114E324 Offset: 0x114A324 VA: 0x114E324
	internal void .ctor(string res, string[] args) { }

	// RVA: 0x1146220 Offset: 0x1142220 VA: 0x1146220
	internal void .ctor(string res, string arg) { }

	// RVA: 0x1141D94 Offset: 0x113DD94 VA: 0x1141D94
	internal void .ctor(string res, string arg, string sourceUri, int lineNumber, int linePosition) { }

	// RVA: 0x114E37C Offset: 0x114A37C VA: 0x114E37C
	internal void .ctor(string res, string sourceUri, int lineNumber, int linePosition) { }

	// RVA: 0x1141C54 Offset: 0x113DC54 VA: 0x1141C54
	internal void .ctor(string res, string[] args, string sourceUri, int lineNumber, int linePosition) { }

	// RVA: 0x114E3E8 Offset: 0x114A3E8 VA: 0x114E3E8
	internal void .ctor(string res, XmlSchemaObject source) { }

	// RVA: 0x114E474 Offset: 0x114A474 VA: 0x114E474
	internal void .ctor(string res, string arg, XmlSchemaObject source) { }

	// RVA: 0x114E3F4 Offset: 0x114A3F4 VA: 0x114E3F4
	internal void .ctor(string res, string[] args, XmlSchemaObject source) { }

	// RVA: 0x114E29C Offset: 0x114A29C VA: 0x114E29C
	internal void .ctor(string res, string[] args, Exception innerException, string sourceUri, int lineNumber, int linePosition, XmlSchemaObject source) { }

	// RVA: 0x114DF38 Offset: 0x1149F38 VA: 0x114DF38
	internal static string CreateMessage(string res, string[] args) { }

	// RVA: 0x1145714 Offset: 0x1141714 VA: 0x1145714
	internal void SetSource(string sourceUri, int lineNumber, int linePosition) { }

	// RVA: 0x114E504 Offset: 0x114A504 VA: 0x114E504
	internal void SetSource(XmlSchemaObject source) { }

	// RVA: 0x114E52C Offset: 0x114A52C VA: 0x114E52C Slot: 5
	public override string get_Message() { }
}


// Namespace: System.Xml.Schema
public abstract class XmlSchemaExternal : XmlSchemaObject // TypeDefIndex: 3063
{
	// Fields
	private string location; // 0x38
	private Uri baseUri; // 0x40
	private XmlSchema schema; // 0x48
	private string id; // 0x50
	private XmlAttribute[] moreAttributes; // 0x58
	private Compositor compositor; // 0x60

	// Properties
	[XmlIgnore]
	internal override string IdAttribute { get; set; }

	// Methods

	// RVA: 0x114E544 Offset: 0x114A544 VA: 0x114E544 Slot: 4
	internal override string get_IdAttribute() { }

	// RVA: 0x114E54C Offset: 0x114A54C VA: 0x114E54C Slot: 5
	internal override void set_IdAttribute(string value) { }

	// RVA: 0x114E554 Offset: 0x114A554 VA: 0x114E554 Slot: 6
	internal override void SetUnhandledAttributes(XmlAttribute[] moreAttributes) { }

	// RVA: 0x114E55C Offset: 0x114A55C VA: 0x114E55C
	protected void .ctor() { }
}


// Namespace: System.Xml.Schema
internal enum FacetType // TypeDefIndex: 3064
{
	// Fields
	public int value__; // 0x0
	public const FacetType None = 0;
	public const FacetType Length = 1;
	public const FacetType MinLength = 2;
	public const FacetType MaxLength = 3;
	public const FacetType Pattern = 4;
	public const FacetType Whitespace = 5;
	public const FacetType Enumeration = 6;
	public const FacetType MinExclusive = 7;
	public const FacetType MinInclusive = 8;
	public const FacetType MaxExclusive = 9;
	public const FacetType MaxInclusive = 10;
	public const FacetType TotalDigits = 11;
	public const FacetType FractionDigits = 12;
}


// Namespace: System.Xml.Schema
public abstract class XmlSchemaFacet : XmlSchemaAnnotated // TypeDefIndex: 3065
{
	// Fields
	private string value; // 0x50
	private bool isFixed; // 0x58
	private FacetType facetType; // 0x5C

	// Properties
	[DefaultValue(False)]
	[Xml("fixed")]
	public virtual bool IsFixed { set; }

	// Methods

	// RVA: 0x114E564 Offset: 0x114A564 VA: 0x114E564 Slot: 11
	public virtual void set_IsFixed(bool value) { }

	// RVA: 0x114E618 Offset: 0x114A618 VA: 0x114E618
	protected void .ctor() { }
}


// Namespace: System.Xml.Schema
public abstract class XmlSchemaNumericFacet : XmlSchemaFacet // TypeDefIndex: 3066
{
	// Methods

	// RVA: 0x114E620 Offset: 0x114A620 VA: 0x114E620
	protected void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaLengthFacet : XmlSchemaNumericFacet // TypeDefIndex: 3067
{
	// Methods

	// RVA: 0x114E628 Offset: 0x114A628 VA: 0x114E628
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaMinLengthFacet : XmlSchemaNumericFacet // TypeDefIndex: 3068
{
	// Methods

	// RVA: 0x114E648 Offset: 0x114A648 VA: 0x114E648
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaMaxLengthFacet : XmlSchemaNumericFacet // TypeDefIndex: 3069
{
	// Methods

	// RVA: 0x114E668 Offset: 0x114A668 VA: 0x114E668
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaPatternFacet : XmlSchemaFacet // TypeDefIndex: 3070
{
	// Methods

	// RVA: 0x114E688 Offset: 0x114A688 VA: 0x114E688
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaEnumerationFacet : XmlSchemaFacet // TypeDefIndex: 3071
{
	// Methods

	// RVA: 0x114E6A8 Offset: 0x114A6A8 VA: 0x114E6A8
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaMinExclusiveFacet : XmlSchemaFacet // TypeDefIndex: 3072
{
	// Methods

	// RVA: 0x114E6C8 Offset: 0x114A6C8 VA: 0x114E6C8
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaMinInclusiveFacet : XmlSchemaFacet // TypeDefIndex: 3073
{
	// Methods

	// RVA: 0x114E6E8 Offset: 0x114A6E8 VA: 0x114E6E8
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaMaxExclusiveFacet : XmlSchemaFacet // TypeDefIndex: 3074
{
	// Methods

	// RVA: 0x114E708 Offset: 0x114A708 VA: 0x114E708
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaMaxInclusiveFacet : XmlSchemaFacet // TypeDefIndex: 3075
{
	// Methods

	// RVA: 0x114E728 Offset: 0x114A728 VA: 0x114E728
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaTotalDigitsFacet : XmlSchemaNumericFacet // TypeDefIndex: 3076
{
	// Methods

	// RVA: 0x114E748 Offset: 0x114A748 VA: 0x114E748
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaFractionDigitsFacet : XmlSchemaNumericFacet // TypeDefIndex: 3077
{
	// Methods

	// RVA: 0x114E768 Offset: 0x114A768 VA: 0x114E768
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaWhiteSpaceFacet : XmlSchemaFacet // TypeDefIndex: 3078
{
	// Methods

	// RVA: 0x114E788 Offset: 0x114A788 VA: 0x114E788
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public enum XmlSchemaForm // TypeDefIndex: 3079
{
	// Fields
	public int value__; // 0x0
	[XmlIgnore]
	public const XmlSchemaForm None = 0;
	[XmlEnum("qualified")]
	public const XmlSchemaForm Qualified = 1;
	[XmlEnum("unqualified")]
	public const XmlSchemaForm Unqualified = 2;
}


// Namespace: System.Xml.Schema
public class XmlSchemaGroup : XmlSchemaAnnotated // TypeDefIndex: 3080
{
	// Fields
	private string name; // 0x50
	private XmlSchemaGroupBase particle; // 0x58
	private XmlSchemaParticle canonicalParticle; // 0x60
	private XmlQualifiedName qname; // 0x68
	private XmlSchemaGroup redefined; // 0x70
	private int selfReferenceCount; // 0x78

	// Properties
	[XmlIgnore]
	internal override string NameAttribute { get; set; }

	// Methods

	// RVA: 0x114E7A8 Offset: 0x114A7A8 VA: 0x114E7A8 Slot: 8
	internal override string get_NameAttribute() { }

	// RVA: 0x114E7B0 Offset: 0x114A7B0 VA: 0x114E7B0 Slot: 9
	internal override void set_NameAttribute(string value) { }

	// RVA: 0x114E7B8 Offset: 0x114A7B8 VA: 0x114E7B8 Slot: 10
	internal override XmlSchemaObject Clone() { }

	// RVA: 0x1148A0C Offset: 0x1144A0C VA: 0x1148A0C
	internal XmlSchemaObject Clone(XmlSchema parentSchema) { }

	// RVA: 0x114E7C0 Offset: 0x114A7C0 VA: 0x114E7C0
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public abstract class XmlSchemaGroupBase : XmlSchemaParticle // TypeDefIndex: 3081
{
	// Properties
	[XmlIgnore]
	public abstract XmlSchemaObjectCollection Items { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 13
	public abstract XmlSchemaObjectCollection get_Items();

	// RVA: -1 Offset: -1 Slot: 14
	internal abstract void SetItems(XmlSchemaObjectCollection newItems);

	// RVA: 0x114905C Offset: 0x114505C VA: 0x114905C
	protected void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaGroupRef : XmlSchemaParticle // TypeDefIndex: 3082
{
	// Fields
	private XmlQualifiedName refName; // 0x78
	private XmlSchemaGroupBase particle; // 0x80
	private XmlSchemaGroup refined; // 0x88

	// Properties
	[Xml("ref")]
	public XmlQualifiedName RefName { set; }

	// Methods

	// RVA: 0x114C834 Offset: 0x1148834 VA: 0x114C834
	public void set_RefName(XmlQualifiedName value) { }

	// RVA: 0x114E828 Offset: 0x114A828 VA: 0x114E828
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaIdentityConstraint : XmlSchemaAnnotated // TypeDefIndex: 3083
{
	// Fields
	private string name; // 0x50
	private XmlSchemaXPath selector; // 0x58
	private XmlSchemaObjectCollection fields; // 0x60
	private XmlQualifiedName qualifiedName; // 0x68
	private CompiledIdentityConstraint compiledConstraint; // 0x70

	// Properties
	[XmlIgnore]
	internal override string NameAttribute { get; set; }

	// Methods

	// RVA: 0x114E8B0 Offset: 0x114A8B0 VA: 0x114E8B0 Slot: 8
	internal override string get_NameAttribute() { }

	// RVA: 0x114E8B8 Offset: 0x114A8B8 VA: 0x114E8B8 Slot: 9
	internal override void set_NameAttribute(string value) { }

	// RVA: 0x114E8C0 Offset: 0x114A8C0 VA: 0x114E8C0
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaXPath : XmlSchemaAnnotated // TypeDefIndex: 3084
{
	// Fields
	private string xpath; // 0x50

	// Methods

	// RVA: 0x114E95C Offset: 0x114A95C VA: 0x114E95C
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaUnique : XmlSchemaIdentityConstraint // TypeDefIndex: 3085
{
	// Methods

	// RVA: 0x114E964 Offset: 0x114A964 VA: 0x114E964
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaKey : XmlSchemaIdentityConstraint // TypeDefIndex: 3086
{
	// Methods

	// RVA: 0x114E968 Offset: 0x114A968 VA: 0x114E968
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaKeyref : XmlSchemaIdentityConstraint // TypeDefIndex: 3087
{
	// Fields
	private XmlQualifiedName refer; // 0x78

	// Properties
	[Xml("refer")]
	public XmlQualifiedName Refer { set; }

	// Methods

	// RVA: 0x114E96C Offset: 0x114A96C VA: 0x114E96C
	public void set_Refer(XmlQualifiedName value) { }

	// RVA: 0x114EA04 Offset: 0x114AA04 VA: 0x114EA04
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaImport : XmlSchemaExternal // TypeDefIndex: 3088
{
	// Fields
	private string ns; // 0x68
	private XmlSchemaAnnotation annotation; // 0x70

	// Methods

	// RVA: 0x114EA68 Offset: 0x114AA68 VA: 0x114EA68
	public void .ctor() { }

	// RVA: 0x114EA88 Offset: 0x114AA88 VA: 0x114EA88 Slot: 7
	internal override void AddAnnotation(XmlSchemaAnnotation annotation) { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaInclude : XmlSchemaExternal // TypeDefIndex: 3089
{
	// Fields
	private XmlSchemaAnnotation annotation; // 0x68

	// Methods

	// RVA: 0x114EA90 Offset: 0x114AA90 VA: 0x114EA90
	public void .ctor() { }

	// RVA: 0x114EAB0 Offset: 0x114AAB0 VA: 0x114EAB0 Slot: 7
	internal override void AddAnnotation(XmlSchemaAnnotation annotation) { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaInfo : IXmlSchemaInfo // TypeDefIndex: 3090
{
	// Fields
	private bool isDefault; // 0x10
	private bool isNil; // 0x11
	private XmlSchemaElement schemaElement; // 0x18
	private XmlSchemaAttribute schemaAttribute; // 0x20
	private XmlSchemaType schemaType; // 0x28
	private XmlSchemaSimpleType memberType; // 0x30
	private XmlSchemaValidity validity; // 0x38
	private XmlSchemaContentType contentType; // 0x3C

	// Properties
	public XmlSchemaValidity Validity { get; }
	public bool IsDefault { get; }
	public bool IsNil { get; }
	public XmlSchemaSimpleType MemberType { get; }
	public XmlSchemaType SchemaType { get; set; }
	public XmlSchemaElement SchemaElement { get; set; }
	public XmlSchemaAttribute SchemaAttribute { get; set; }
	internal XmlSchemaType XmlType { get; }
	internal bool HasDefaultValue { get; }
	internal bool IsUnionType { get; }

	// Methods

	// RVA: 0x114EAB8 Offset: 0x114AAB8 VA: 0x114EAB8
	public void .ctor() { }

	// RVA: 0x114EB04 Offset: 0x114AB04 VA: 0x114EB04
	internal void .ctor(XmlSchemaValidity validity) { }

	// RVA: 0x114EB40 Offset: 0x114AB40 VA: 0x114EB40 Slot: 4
	public XmlSchemaValidity get_Validity() { }

	// RVA: 0x114EB48 Offset: 0x114AB48 VA: 0x114EB48 Slot: 5
	public bool get_IsDefault() { }

	// RVA: 0x114EB50 Offset: 0x114AB50 VA: 0x114EB50 Slot: 6
	public bool get_IsNil() { }

	// RVA: 0x114EB58 Offset: 0x114AB58 VA: 0x114EB58 Slot: 7
	public XmlSchemaSimpleType get_MemberType() { }

	// RVA: 0x114EB60 Offset: 0x114AB60 VA: 0x114EB60 Slot: 8
	public XmlSchemaType get_SchemaType() { }

	// RVA: 0x114EB68 Offset: 0x114AB68 VA: 0x114EB68
	public void set_SchemaType(XmlSchemaType value) { }

	// RVA: 0x114EB84 Offset: 0x114AB84 VA: 0x114EB84 Slot: 9
	public XmlSchemaElement get_SchemaElement() { }

	// RVA: 0x114EB8C Offset: 0x114AB8C VA: 0x114EB8C
	public void set_SchemaElement(XmlSchemaElement value) { }

	// RVA: 0x114EB9C Offset: 0x114AB9C VA: 0x114EB9C Slot: 10
	public XmlSchemaAttribute get_SchemaAttribute() { }

	// RVA: 0x114EBA4 Offset: 0x114ABA4 VA: 0x114EBA4
	public void set_SchemaAttribute(XmlSchemaAttribute value) { }

	// RVA: 0x114EBB4 Offset: 0x114ABB4 VA: 0x114EBB4
	internal XmlSchemaType get_XmlType() { }

	// RVA: 0x114EBD0 Offset: 0x114ABD0 VA: 0x114EBD0
	internal bool get_HasDefaultValue() { }

	// RVA: 0x114EC04 Offset: 0x114AC04 VA: 0x114EC04
	internal bool get_IsUnionType() { }

	// RVA: 0x114EAE8 Offset: 0x114AAE8 VA: 0x114EAE8
	internal void Clear() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaNotation : XmlSchemaAnnotated // TypeDefIndex: 3091
{
	// Fields
	private string name; // 0x50
	private string publicId; // 0x58
	private string systemId; // 0x60
	private XmlQualifiedName qname; // 0x68

	// Properties
	[XmlIgnore]
	internal override string NameAttribute { get; set; }

	// Methods

	// RVA: 0x114EC3C Offset: 0x114AC3C VA: 0x114EC3C Slot: 8
	internal override string get_NameAttribute() { }

	// RVA: 0x114EC44 Offset: 0x114AC44 VA: 0x114EC44 Slot: 9
	internal override void set_NameAttribute(string value) { }

	// RVA: 0x114EC4C Offset: 0x114AC4C VA: 0x114EC4C
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public abstract class XmlSchemaObject // TypeDefIndex: 3092
{
	// Fields
	private int lineNum; // 0x10
	private int linePos; // 0x14
	private string sourceUri; // 0x18
	private XmlSerializerNamespaces namespaces; // 0x20
	private XmlSchemaObject parent; // 0x28
	private bool isProcessing; // 0x30

	// Properties
	[XmlNamespaceDeclarations]
	public XmlSerializerNamespaces Namespaces { get; }
	[XmlIgnore]
	internal virtual string IdAttribute { get; set; }
	[XmlIgnore]
	internal virtual string NameAttribute { get; set; }

	// Methods

	// RVA: 0x1147F28 Offset: 0x1143F28 VA: 0x1147F28
	public XmlSerializerNamespaces get_Namespaces() { }

	// RVA: 0x114ECB4 Offset: 0x114ACB4 VA: 0x114ECB4 Slot: 4
	internal virtual string get_IdAttribute() { }

	// RVA: 0x114ECBC Offset: 0x114ACBC VA: 0x114ECBC Slot: 5
	internal virtual void set_IdAttribute(string value) { }

	// RVA: 0x114ECC0 Offset: 0x114ACC0 VA: 0x114ECC0 Slot: 6
	internal virtual void SetUnhandledAttributes(XmlAttribute[] moreAttributes) { }

	// RVA: 0x114ECC4 Offset: 0x114ACC4 VA: 0x114ECC4 Slot: 7
	internal virtual void AddAnnotation(XmlSchemaAnnotation annotation) { }

	// RVA: 0x114ECC8 Offset: 0x114ACC8 VA: 0x114ECC8 Slot: 8
	internal virtual string get_NameAttribute() { }

	// RVA: 0x114ECD0 Offset: 0x114ACD0 VA: 0x114ECD0 Slot: 9
	internal virtual void set_NameAttribute(string value) { }

	// RVA: 0x114ECD4 Offset: 0x114ACD4 VA: 0x114ECD4 Slot: 10
	internal virtual XmlSchemaObject Clone() { }

	// RVA: 0x11477E8 Offset: 0x11437E8 VA: 0x11477E8
	protected void .ctor() { }
}


// Namespace: System.Xml.Schema
[DefaultMember("Item")]
public class XmlSchemaObjectCollection : CollectionBase // TypeDefIndex: 3093
{
	// Fields
	private XmlSchemaObject parent; // 0x18

	// Properties
	public virtual XmlSchemaObject Item { get; set; }

	// Methods

	// RVA: 0x114771C Offset: 0x114371C VA: 0x114771C
	public void .ctor() { }

	// RVA: 0x114ED54 Offset: 0x114AD54 VA: 0x114ED54 Slot: 25
	public virtual XmlSchemaObject get_Item(int index) { }

	// RVA: 0x114EE54 Offset: 0x114AE54 VA: 0x114EE54 Slot: 26
	public virtual void set_Item(int index, XmlSchemaObject value) { }

	// RVA: 0x114EF1C Offset: 0x114AF1C VA: 0x114EF1C
	public XmlSchemaObjectEnumerator GetEnumerator() { }

	// RVA: 0x1148B8C Offset: 0x1144B8C VA: 0x1148B8C
	public int Add(XmlSchemaObject item) { }

	// RVA: 0x114EFC4 Offset: 0x114AFC4 VA: 0x114EFC4
	public void Insert(int index, XmlSchemaObject item) { }

	// RVA: 0x114F08C Offset: 0x114B08C VA: 0x114F08C
	public void Remove(XmlSchemaObject item) { }

	// RVA: 0x114F144 Offset: 0x114B144 VA: 0x114F144 Slot: 21
	protected override void OnInsert(int index, object item) { }

	// RVA: 0x114F148 Offset: 0x114B148 VA: 0x114F148 Slot: 20
	protected override void OnSet(int index, object oldValue, object newValue) { }

	// RVA: 0x114F14C Offset: 0x114B14C VA: 0x114F14C Slot: 22
	protected override void OnClear() { }

	// RVA: 0x114F150 Offset: 0x114B150 VA: 0x114F150 Slot: 23
	protected override void OnRemove(int index, object item) { }

	// RVA: 0x114C674 Offset: 0x1148674 VA: 0x114C674
	internal XmlSchemaObjectCollection Clone() { }

	// RVA: 0x114F154 Offset: 0x114B154 VA: 0x114F154
	private void Add(XmlSchemaObjectCollection collToAdd) { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaObjectEnumerator : IEnumerator // TypeDefIndex: 3094
{
	// Fields
	private IEnumerator enumerator; // 0x10

	// Properties
	public XmlSchemaObject Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	// RVA: 0x114EF9C Offset: 0x114AF9C VA: 0x114EF9C
	internal void .ctor(IEnumerator enumerator) { }

	// RVA: 0x114F180 Offset: 0x114B180 VA: 0x114F180
	public bool MoveNext() { }

	// RVA: 0x114F220 Offset: 0x114B220 VA: 0x114F220
	public XmlSchemaObject get_Current() { }

	// RVA: 0x114F310 Offset: 0x114B310 VA: 0x114F310 Slot: 6
	private void System.Collections.IEnumerator.Reset() { }

	// RVA: 0x114F3B4 Offset: 0x114B3B4 VA: 0x114F3B4 Slot: 4
	private bool System.Collections.IEnumerator.MoveNext() { }

	// RVA: 0x114F454 Offset: 0x114B454 VA: 0x114F454 Slot: 5
	private object System.Collections.IEnumerator.get_Current() { }
}


// Namespace: 
internal enum XmlSchemaObjectTable.EnumeratorType // TypeDefIndex: 3095
{
	// Fields
	public int value__; // 0x0
	public const XmlSchemaObjectTable.EnumeratorType Keys = 0;
	public const XmlSchemaObjectTable.EnumeratorType Values = 1;
	public const XmlSchemaObjectTable.EnumeratorType DictionaryEntry = 2;
}


// Namespace: 
internal struct XmlSchemaObjectTable.XmlSchemaObjectEntry // TypeDefIndex: 3096
{
	// Fields
	internal XmlQualifiedName qname; // 0x0
	internal XmlSchemaObject xso; // 0x8

	// Methods

	// RVA: 0x114F598 Offset: 0x114B598 VA: 0x114F598
	public void .ctor(XmlQualifiedName name, XmlSchemaObject value) { }
}


// Namespace: 
internal class XmlSchemaObjectTable.ValuesCollection : ICollection, IEnumerable // TypeDefIndex: 3097
{
	// Fields
	private List<XmlSchemaObjectTable.XmlSchemaObjectEntry> entries; // 0x10
	private int size; // 0x18

	// Properties
	public int Count { get; }
	public object SyncRoot { get; }
	public bool IsSynchronized { get; }

	// Methods

	// RVA: 0x114FAD4 Offset: 0x114BAD4 VA: 0x114FAD4
	internal void .ctor(List<XmlSchemaObjectTable.XmlSchemaObjectEntry> entries, int size) { }

	// RVA: 0x114FBE8 Offset: 0x114BBE8 VA: 0x114FBE8 Slot: 5
	public int get_Count() { }

	// RVA: 0x114FBF0 Offset: 0x114BBF0 VA: 0x114FBF0 Slot: 6
	public object get_SyncRoot() { }

	// RVA: 0x114FC94 Offset: 0x114BC94 VA: 0x114FC94 Slot: 7
	public bool get_IsSynchronized() { }

	// RVA: 0x114FC9C Offset: 0x114BC9C VA: 0x114FC9C Slot: 4
	public void CopyTo(Array array, int arrayIndex) { }

	// RVA: 0x114FDD4 Offset: 0x114BDD4 VA: 0x114FDD4 Slot: 8
	public IEnumerator GetEnumerator() { }
}


// Namespace: 
internal class XmlSchemaObjectTable.XSOEnumerator : IEnumerator // TypeDefIndex: 3098
{
	// Fields
	private List<XmlSchemaObjectTable.XmlSchemaObjectEntry> entries; // 0x10
	private XmlSchemaObjectTable.EnumeratorType enumType; // 0x18
	protected int currentIndex; // 0x1C
	protected int size; // 0x20
	protected XmlQualifiedName currentKey; // 0x28
	protected XmlSchemaObject currentValue; // 0x30

	// Properties
	public object Current { get; }

	// Methods

	// RVA: 0x114FE50 Offset: 0x114BE50 VA: 0x114FE50
	internal void .ctor(List<XmlSchemaObjectTable.XmlSchemaObjectEntry> entries, int size, XmlSchemaObjectTable.EnumeratorType enumType) { }

	// RVA: 0x114FE94 Offset: 0x114BE94 VA: 0x114FE94 Slot: 5
	public object get_Current() { }

	// RVA: 0x115004C Offset: 0x114C04C VA: 0x115004C Slot: 4
	public bool MoveNext() { }

	// RVA: 0x1150104 Offset: 0x114C104 VA: 0x1150104 Slot: 6
	public void Reset() { }
}


// Namespace: 
internal class XmlSchemaObjectTable.XSODictionaryEnumerator : XmlSchemaObjectTable.XSOEnumerator, IDictionaryEnumerator, IEnumerator // TypeDefIndex: 3099
{
	// Properties
	public DictionaryEntry Entry { get; }
	public object Key { get; }
	public object Value { get; }

	// Methods

	// RVA: 0x114FBA4 Offset: 0x114BBA4 VA: 0x114FBA4
	internal void .ctor(List<XmlSchemaObjectTable.XmlSchemaObjectEntry> entries, int size, XmlSchemaObjectTable.EnumeratorType enumType) { }

	// RVA: 0x1150114 Offset: 0x114C114 VA: 0x1150114 Slot: 9
	public DictionaryEntry get_Entry() { }

	// RVA: 0x1150260 Offset: 0x114C260 VA: 0x1150260 Slot: 7
	public object get_Key() { }

	// RVA: 0x1150390 Offset: 0x114C390 VA: 0x1150390 Slot: 8
	public object get_Value() { }
}


// Namespace: System.Xml.Schema
[DefaultMember("Item")]
public class XmlSchemaObjectTable // TypeDefIndex: 3100
{
	// Fields
	private Dictionary<XmlQualifiedName, XmlSchemaObject> table; // 0x10
	private List<XmlSchemaObjectTable.XmlSchemaObjectEntry> entries; // 0x18

	// Properties
	public int Count { get; }
	public XmlSchemaObject Item { get; }
	public ICollection Values { get; }

	// Methods

	// RVA: 0x1147724 Offset: 0x1143724 VA: 0x1147724
	internal void .ctor() { }

	// RVA: 0x114F4F8 Offset: 0x114B4F8 VA: 0x114F4F8
	internal void Add(XmlQualifiedName name, XmlSchemaObject value) { }

	// RVA: 0x114F5A0 Offset: 0x114B5A0 VA: 0x114F5A0
	internal void Insert(XmlQualifiedName name, XmlSchemaObject value) { }

	// RVA: 0x114F73C Offset: 0x114B73C VA: 0x114F73C
	internal void Replace(XmlQualifiedName name, XmlSchemaObject value) { }

	// RVA: 0x114F824 Offset: 0x114B824 VA: 0x114F824
	internal void Clear() { }

	// RVA: 0x114F8E4 Offset: 0x114B8E4 VA: 0x114F8E4
	internal void Remove(XmlQualifiedName name) { }

	// RVA: 0x114F69C Offset: 0x114B69C VA: 0x114F69C
	private int FindIndexByValue(XmlSchemaObject xso) { }

	// RVA: 0x114F9B4 Offset: 0x114B9B4 VA: 0x114F9B4
	public int get_Count() { }

	// RVA: 0x114FA04 Offset: 0x114BA04 VA: 0x114FA04
	public bool Contains(XmlQualifiedName name) { }

	// RVA: 0x114FA5C Offset: 0x114BA5C VA: 0x114FA5C
	public XmlSchemaObject get_Item(XmlQualifiedName name) { }

	// RVA: 0x114C034 Offset: 0x1148034 VA: 0x114C034
	public ICollection get_Values() { }

	// RVA: 0x114FB04 Offset: 0x114BB04 VA: 0x114FB04
	public IDictionaryEnumerator GetEnumerator() { }
}


// Namespace: 
[Flags]
private enum XmlSchemaParticle.Occurs // TypeDefIndex: 3101
{
	// Fields
	public int value__; // 0x0
	public const XmlSchemaParticle.Occurs None = 0;
	public const XmlSchemaParticle.Occurs Min = 1;
	public const XmlSchemaParticle.Occurs Max = 2;
}


// Namespace: 
private class XmlSchemaParticle.EmptyParticle : XmlSchemaParticle // TypeDefIndex: 3102
{
	// Properties
	internal override bool IsEmpty { get; }

	// Methods

	// RVA: 0x1150BFC Offset: 0x114CBFC VA: 0x1150BFC Slot: 11
	internal override bool get_IsEmpty() { }

	// RVA: 0x1150C04 Offset: 0x114CC04 VA: 0x1150C04
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public abstract class XmlSchemaParticle : XmlSchemaAnnotated // TypeDefIndex: 3103
{
	// Fields
	private Decimal minOccurs; // 0x50
	private Decimal maxOccurs; // 0x60
	private XmlSchemaParticle.Occurs flags; // 0x70
	internal static readonly XmlSchemaParticle Empty; // 0x0

	// Properties
	[Xml("minOccurs")]
	public string MinOccursString { get; set; }
	[Xml("maxOccurs")]
	public string MaxOccursString { get; set; }
	[XmlIgnore]
	public Decimal MinOccurs { set; }
	[XmlIgnore]
	public Decimal MaxOccurs { set; }
	internal virtual bool IsEmpty { get; }
	internal virtual string NameString { get; }

	// Methods

	// RVA: 0x11504C0 Offset: 0x114C4C0 VA: 0x11504C0
	public string get_MinOccursString() { }

	// RVA: 0x1150538 Offset: 0x114C538 VA: 0x1150538
	public void set_MinOccursString(string value) { }

	// RVA: 0x1150688 Offset: 0x114C688 VA: 0x1150688
	public string get_MaxOccursString() { }

	// RVA: 0x11507AC Offset: 0x114C7AC VA: 0x11507AC
	public void set_MaxOccursString(string value) { }

	// RVA: 0x114B888 Offset: 0x1147888 VA: 0x114B888
	public void set_MinOccurs(Decimal value) { }

	// RVA: 0x114B9B0 Offset: 0x11479B0 VA: 0x114B9B0
	public void set_MaxOccurs(Decimal value) { }

	// RVA: 0x1148F8C Offset: 0x1144F8C VA: 0x1148F8C Slot: 11
	internal virtual bool get_IsEmpty() { }

	// RVA: 0x11509C4 Offset: 0x114C9C4 VA: 0x11509C4 Slot: 12
	internal virtual string get_NameString() { }

	// RVA: 0x1150A0C Offset: 0x114CA0C VA: 0x1150A0C
	internal XmlQualifiedName GetQualifiedName() { }

	// RVA: 0x1149870 Offset: 0x1145870 VA: 0x1149870
	protected void .ctor() { }

	// RVA: 0x1150B8C Offset: 0x114CB8C VA: 0x1150B8C
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaRedefine : XmlSchemaExternal // TypeDefIndex: 3104
{
	// Fields
	private XmlSchemaObjectCollection items; // 0x68
	private XmlSchemaObjectTable attributeGroups; // 0x70
	private XmlSchemaObjectTable types; // 0x78
	private XmlSchemaObjectTable groups; // 0x80

	// Methods

	// RVA: 0x1150C5C Offset: 0x114CC5C VA: 0x1150C5C
	public void .ctor() { }

	// RVA: 0x1150D2C Offset: 0x114CD2C VA: 0x1150D2C Slot: 7
	internal override void AddAnnotation(XmlSchemaAnnotation annotation) { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaSequence : XmlSchemaGroupBase // TypeDefIndex: 3105
{
	// Fields
	private XmlSchemaObjectCollection items; // 0x78

	// Properties
	[XmlElement("group", typeof(XmlSchemaGroupRef))]
	[XmlElement("any", typeof(XmlSchemaAny))]
	[XmlElement("sequence", typeof(XmlSchemaSequence))]
	[XmlElement("choice", typeof(XmlSchemaChoice))]
	[XmlElement("element", typeof(XmlSchemaElement))]
	public override XmlSchemaObjectCollection Items { get; }
	internal override bool IsEmpty { get; }

	// Methods

	// RVA: 0x1150D48 Offset: 0x114CD48 VA: 0x1150D48 Slot: 13
	public override XmlSchemaObjectCollection get_Items() { }

	// RVA: 0x1150D50 Offset: 0x114CD50 VA: 0x1150D50 Slot: 11
	internal override bool get_IsEmpty() { }

	// RVA: 0x1150D90 Offset: 0x114CD90 VA: 0x1150D90 Slot: 14
	internal override void SetItems(XmlSchemaObjectCollection newItems) { }

	// RVA: 0x1150D98 Offset: 0x114CD98 VA: 0x1150D98
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaSet // TypeDefIndex: 3106
{
	// Fields
	private XmlNameTable nameTable; // 0x10
	private SchemaNames schemaNames; // 0x18
	private SortedList schemas; // 0x20
	private ValidationEventHandler internalEventHandler; // 0x28
	private ValidationEventHandler eventHandler; // 0x30
	private bool isCompiled; // 0x38
	private Hashtable schemaLocations; // 0x40
	private Hashtable chameleonSchemas; // 0x48
	private Hashtable targetNamespaces; // 0x50
	private bool compileAll; // 0x58
	private SchemaInfo cachedCompiledInfo; // 0x60
	private XmlReaderSettings readerSettings; // 0x68
	private XmlSchema schemaForSchema; // 0x70
	private XmlSchemaCompilationSettings compilationSettings; // 0x78
	internal XmlSchemaObjectTable elements; // 0x80
	internal XmlSchemaObjectTable attributes; // 0x88
	internal XmlSchemaObjectTable schemaTypes; // 0x90
	internal XmlSchemaObjectTable substitutionGroups; // 0x98
	private XmlSchemaObjectTable typeExtensions; // 0xA0
	private object internalSyncObject; // 0xA8

	// Properties
	internal object InternalSyncObject { get; }
	public XmlResolver XmlResolver { set; }
	public int Count { get; }
	public XmlSchemaObjectTable GlobalElements { get; }
	public XmlSchemaObjectTable GlobalAttributes { get; }
	public XmlSchemaObjectTable GlobalTypes { get; }
	internal XmlSchemaObjectTable SubstitutionGroups { get; }
	internal XmlSchemaObjectTable TypeExtensions { get; }

	// Methods

	// RVA: 0x1150DF8 Offset: 0x114CDF8 VA: 0x1150DF8
	internal object get_InternalSyncObject() { }

	// RVA: 0x1150E68 Offset: 0x114CE68 VA: 0x1150E68
	public void .ctor() { }

	// RVA: 0x1150EC4 Offset: 0x114CEC4 VA: 0x1150EC4
	public void .ctor(XmlNameTable nameTable) { }

	// RVA: 0x1151134 Offset: 0x114D134 VA: 0x1151134
	public void add_ValidationEventHandler(ValidationEventHandler value) { }

	// RVA: 0x11511FC Offset: 0x114D1FC VA: 0x11511FC
	public void remove_ValidationEventHandler(ValidationEventHandler value) { }

	// RVA: 0x1151280 Offset: 0x114D280 VA: 0x1151280
	public void set_XmlResolver(XmlResolver value) { }

	// RVA: 0x115129C Offset: 0x114D29C VA: 0x115129C
	public int get_Count() { }

	// RVA: 0x11512C0 Offset: 0x114D2C0 VA: 0x11512C0
	public XmlSchemaObjectTable get_GlobalElements() { }

	// RVA: 0x1151324 Offset: 0x114D324 VA: 0x1151324
	public XmlSchemaObjectTable get_GlobalAttributes() { }

	// RVA: 0x1151388 Offset: 0x114D388 VA: 0x1151388
	public XmlSchemaObjectTable get_GlobalTypes() { }

	// RVA: 0x11513EC Offset: 0x114D3EC VA: 0x11513EC
	internal XmlSchemaObjectTable get_SubstitutionGroups() { }

	// RVA: 0x1151450 Offset: 0x114D450 VA: 0x1151450
	internal XmlSchemaObjectTable get_TypeExtensions() { }

	// RVA: 0x11514B4 Offset: 0x114D4B4 VA: 0x11514B4
	public void Add(XmlSchemaSet schemas) { }

	// RVA: 0x1153BF8 Offset: 0x114FBF8 VA: 0x1153BF8
	public XmlSchema Add(XmlSchema schema) { }

	// RVA: 0x1153D9C Offset: 0x114FD9C VA: 0x1153D9C
	public bool RemoveRecursive(XmlSchema schemaToRemove) { }

	// RVA: 0x1154C48 Offset: 0x1150C48 VA: 0x1154C48
	public bool Contains(string targetNamespace) { }

	// RVA: 0x1154CC4 Offset: 0x1150CC4 VA: 0x1154CC4
	public void Compile() { }

	// RVA: 0x11551E4 Offset: 0x11511E4 VA: 0x11551E4
	public XmlSchema Reprocess(XmlSchema schema) { }

	// RVA: 0x1156C14 Offset: 0x1152C14 VA: 0x1156C14
	public void CopyTo(XmlSchema[] schemas, int index) { }

	// RVA: 0x1156D78 Offset: 0x1152D78 VA: 0x1156D78
	public ICollection Schemas() { }

	// RVA: 0x11569C4 Offset: 0x11529C4 VA: 0x11569C4
	public ICollection Schemas(string targetNamespace) { }

	// RVA: 0x1153B9C Offset: 0x114FB9C VA: 0x1153B9C
	private XmlSchema Add(string targetNamespace, XmlSchema schema) { }

	// RVA: 0x1157118 Offset: 0x1153118 VA: 0x1157118
	internal void Add(string targetNamespace, XmlReader reader, Hashtable validatedNamespaces) { }

	// RVA: 0x115391C Offset: 0x114F91C VA: 0x115391C
	internal XmlSchema FindSchemaByNSAndUrl(Uri schemaUri, string ns, DictionaryEntry[] locationsTable) { }

	// RVA: 0x1156D9C Offset: 0x1152D9C VA: 0x1156D9C
	private void AddSchemaToSet(XmlSchema schema) { }

	// RVA: 0x115789C Offset: 0x115389C VA: 0x115789C
	private void ProcessNewSubstitutionGroups(XmlSchemaObjectTable substitutionGroupsTable, bool resolve) { }

	// RVA: 0x1157D7C Offset: 0x1153D7C VA: 0x1157D7C
	private void ResolveSubstitutionGroup(XmlSchemaSubstitutionGroup substitutionGroup, XmlSchemaObjectTable substTable) { }

	// RVA: 0x11548E8 Offset: 0x11508E8 VA: 0x11548E8
	internal XmlSchema Remove(XmlSchema schema, bool forceCompile) { }

	// RVA: 0x1155174 Offset: 0x1151174 VA: 0x1155174
	private void ClearTables() { }

	// RVA: 0x1156B28 Offset: 0x1152B28 VA: 0x1156B28
	internal bool PreprocessSchema(ref XmlSchema schema, string targetNamespace) { }

	// RVA: 0x1157734 Offset: 0x1153734 VA: 0x1157734
	internal XmlSchema ParseSchema(string targetNamespace, XmlReader reader) { }

	// RVA: 0x1151E24 Offset: 0x114DE24 VA: 0x1151E24
	internal void CopyFromCompiledSet(XmlSchemaSet otherSet) { }

	// RVA: 0x1158568 Offset: 0x1154568 VA: 0x1158568
	internal XmlResolver GetResolver() { }

	// RVA: 0x11583E0 Offset: 0x11543E0 VA: 0x11583E0
	internal SchemaNames GetSchemaNames(XmlNameTable nt) { }

	// RVA: 0x11574B8 Offset: 0x11534B8 VA: 0x11574B8
	internal bool IsSchemaLoaded(Uri schemaUri, string targetNamespace, out XmlSchema schema) { }

	// RVA: 0x1158584 Offset: 0x1154584 VA: 0x1158584
	internal bool GetSchemaByUri(Uri schemaUri, out XmlSchema schema) { }

	// RVA: 0x11547EC Offset: 0x11507EC VA: 0x11547EC
	internal string GetTargetNamespace(XmlSchema schema) { }

	// RVA: 0x115639C Offset: 0x115239C VA: 0x115639C
	private void RemoveSchemaFromCaches(XmlSchema schema) { }

	// RVA: 0x11558E8 Offset: 0x11518E8 VA: 0x11558E8
	private void RemoveSchemaFromGlobalTables(XmlSchema schema) { }

	// RVA: 0x11580F0 Offset: 0x11540F0 VA: 0x11580F0
	private bool AddToTable(XmlSchemaObjectTable table, XmlQualifiedName qname, XmlSchemaObject item) { }

	// RVA: 0x1158478 Offset: 0x1154478 VA: 0x1158478
	private void VerifyTables() { }

	// RVA: 0x11586C4 Offset: 0x11546C4 VA: 0x11586C4
	private void InternalValidationCallback(object sender, ValidationEventArgs e) { }

	// RVA: 0x1154848 Offset: 0x1150848 VA: 0x1154848
	private void SendValidationEvent(XmlSchemaException e, XmlSeverityType severity) { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaSimpleContent : XmlSchemaContentModel // TypeDefIndex: 3107
{
	// Fields
	private XmlSchemaContent content; // 0x50

	// Properties
	[XmlElement("extension", typeof(XmlSchemaSimpleContentExtension))]
	[XmlElement("restriction", typeof(XmlSchemaSimpleContentRestriction))]
	public override XmlSchemaContent Content { get; }

	// Methods

	// RVA: 0x1158708 Offset: 0x1154708 VA: 0x1158708 Slot: 11
	public override XmlSchemaContent get_Content() { }

	// RVA: 0x1158710 Offset: 0x1154710 VA: 0x1158710
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaSimpleContentExtension : XmlSchemaContent // TypeDefIndex: 3108
{
	// Fields
	private XmlSchemaObjectCollection attributes; // 0x50
	private XmlSchemaAnyAttribute anyAttribute; // 0x58
	private XmlQualifiedName baseTypeName; // 0x60

	// Properties
	[Xml("base")]
	public XmlQualifiedName BaseTypeName { set; }

	// Methods

	// RVA: 0x1158718 Offset: 0x1154718 VA: 0x1158718
	public void set_BaseTypeName(XmlQualifiedName value) { }

	// RVA: 0x11587B0 Offset: 0x11547B0 VA: 0x11587B0
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaSimpleContentRestriction : XmlSchemaContent // TypeDefIndex: 3109
{
	// Fields
	private XmlQualifiedName baseTypeName; // 0x50
	private XmlSchemaSimpleType baseType; // 0x58
	private XmlSchemaObjectCollection facets; // 0x60
	private XmlSchemaObjectCollection attributes; // 0x68
	private XmlSchemaAnyAttribute anyAttribute; // 0x70

	// Properties
	[Xml("base")]
	public XmlQualifiedName BaseTypeName { set; }

	// Methods

	// RVA: 0x115884C Offset: 0x115484C VA: 0x115884C
	public void set_BaseTypeName(XmlQualifiedName value) { }

	// RVA: 0x11588E4 Offset: 0x11548E4 VA: 0x11588E4
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaSimpleType : XmlSchemaType // TypeDefIndex: 3110
{
	// Fields
	private XmlSchemaSimpleTypeContent content; // 0x98

	// Methods

	// RVA: 0x1158990 Offset: 0x1154990 VA: 0x1158990
	public void .ctor() { }

	// RVA: 0x1158A08 Offset: 0x1154A08 VA: 0x1158A08 Slot: 10
	internal override XmlSchemaObject Clone() { }
}


// Namespace: System.Xml.Schema
public abstract class XmlSchemaSimpleTypeContent : XmlSchemaAnnotated // TypeDefIndex: 3111
{
	// Methods

	// RVA: 0x1158B20 Offset: 0x1154B20 VA: 0x1158B20
	protected void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaSimpleTypeList : XmlSchemaSimpleTypeContent // TypeDefIndex: 3112
{
	// Fields
	private XmlQualifiedName itemTypeName; // 0x50
	private XmlSchemaSimpleType itemType; // 0x58
	private XmlSchemaSimpleType baseItemType; // 0x60

	// Properties
	[Xml("itemType")]
	public XmlQualifiedName ItemTypeName { set; }

	// Methods

	// RVA: 0x1158B28 Offset: 0x1154B28 VA: 0x1158B28
	public void set_ItemTypeName(XmlQualifiedName value) { }

	// RVA: 0x1158BC0 Offset: 0x1154BC0 VA: 0x1158BC0 Slot: 10
	internal override XmlSchemaObject Clone() { }

	// RVA: 0x1158C70 Offset: 0x1154C70 VA: 0x1158C70
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaSimpleTypeRestriction : XmlSchemaSimpleTypeContent // TypeDefIndex: 3113
{
	// Fields
	private XmlQualifiedName baseTypeName; // 0x50
	private XmlSchemaSimpleType baseType; // 0x58
	private XmlSchemaObjectCollection facets; // 0x60

	// Properties
	[Xml("base")]
	public XmlQualifiedName BaseTypeName { set; }

	// Methods

	// RVA: 0x1158CD8 Offset: 0x1154CD8 VA: 0x1158CD8
	public void set_BaseTypeName(XmlQualifiedName value) { }

	// RVA: 0x1158D70 Offset: 0x1154D70 VA: 0x1158D70 Slot: 10
	internal override XmlSchemaObject Clone() { }

	// RVA: 0x1158E20 Offset: 0x1154E20 VA: 0x1158E20
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaSimpleTypeUnion : XmlSchemaSimpleTypeContent // TypeDefIndex: 3114
{
	// Fields
	private XmlSchemaObjectCollection baseTypes; // 0x50
	private XmlQualifiedName[] memberTypes; // 0x58
	private XmlSchemaSimpleType[] baseMemberTypes; // 0x60

	// Methods

	// RVA: 0x1158EB4 Offset: 0x1154EB4 VA: 0x1158EB4 Slot: 10
	internal override XmlSchemaObject Clone() { }

	// RVA: 0x115901C Offset: 0x115501C VA: 0x115901C
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class XmlSchemaSubstitutionGroup : XmlSchemaObject // TypeDefIndex: 3115
{
	// Fields
	private ArrayList membersList; // 0x38
	private XmlQualifiedName examplar; // 0x40

	// Methods

	// RVA: 0x115907C Offset: 0x115507C VA: 0x115907C
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
internal class XmlSchemaSubstitutionGroupV1Compat : XmlSchemaSubstitutionGroup // TypeDefIndex: 3116
{
	// Fields
	private XmlSchemaChoice choice; // 0x48

	// Methods

	// RVA: 0x1159118 Offset: 0x1155118 VA: 0x1159118
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public class XmlSchemaType : XmlSchemaAnnotated // TypeDefIndex: 3117
{
	// Fields
	private string name; // 0x50
	private XmlSchemaDerivationMethod final; // 0x58
	private XmlSchemaDerivationMethod derivedBy; // 0x5C
	private XmlSchemaType baseSchemaType; // 0x60
	private XmlSchemaDatatype datatype; // 0x68
	private XmlSchemaDerivationMethod finalResolved; // 0x70
	private SchemaElementDecl elementDecl; // 0x78
	private XmlQualifiedName qname; // 0x80
	private XmlSchemaType redefined; // 0x88
	private XmlSchemaContentType contentType; // 0x90

	// Properties
	[XmlIgnore]
	public XmlQualifiedName QualifiedName { get; }
	[XmlIgnore]
	public virtual bool IsMixed { get; set; }
	[XmlIgnore]
	public XmlTypeCode TypeCode { get; }
	[XmlIgnore]
	internal XmlValueConverter ValueConverter { get; }
	internal SchemaElementDecl ElementDecl { get; set; }
	[XmlIgnore]
	internal override string NameAttribute { get; set; }

	// Methods

	// RVA: 0x1159174 Offset: 0x1155174 VA: 0x1159174
	public static XmlSchemaSimpleType GetBuiltInSimpleType(XmlQualifiedName qualifiedName) { }

	// RVA: 0x115924C Offset: 0x115524C VA: 0x115924C
	public static XmlSchemaSimpleType GetBuiltInSimpleType(XmlTypeCode typeCode) { }

	// RVA: 0x11592A4 Offset: 0x11552A4 VA: 0x11592A4
	public static XmlSchemaComplexType GetBuiltInComplexType(XmlQualifiedName qualifiedName) { }

	// RVA: 0x1158550 Offset: 0x1154550 VA: 0x1158550
	public XmlQualifiedName get_QualifiedName() { }

	// RVA: 0x115941C Offset: 0x115541C VA: 0x115941C Slot: 11
	public virtual bool get_IsMixed() { }

	// RVA: 0x1159424 Offset: 0x1155424 VA: 0x1159424 Slot: 12
	public virtual void set_IsMixed(bool value) { }

	// RVA: 0x1159428 Offset: 0x1155428 VA: 0x1159428
	public XmlTypeCode get_TypeCode() { }

	// RVA: 0x11594AC Offset: 0x11554AC VA: 0x11594AC
	internal XmlValueConverter get_ValueConverter() { }

	// RVA: 0x1159524 Offset: 0x1155524 VA: 0x1159524
	internal void SetQualifiedName(XmlQualifiedName value) { }

	// RVA: 0x1159548 Offset: 0x1155548 VA: 0x1159548
	internal SchemaElementDecl get_ElementDecl() { }

	// RVA: 0x1159560 Offset: 0x1155560 VA: 0x1159560
	internal void set_ElementDecl(SchemaElementDecl value) { }

	// RVA: 0x1159584 Offset: 0x1155584 VA: 0x1159584
	public static bool IsDerivedFrom(XmlSchemaType derivedType, XmlSchemaType baseType, XmlSchemaDerivationMethod except) { }

	// RVA: 0x1159710 Offset: 0x1155710 VA: 0x1159710
	internal static bool IsDerivedFromDatatype(XmlSchemaDatatype derivedDataType, XmlSchemaDatatype baseDataType, XmlSchemaDerivationMethod except) { }

	// RVA: 0x11597B4 Offset: 0x11557B4 VA: 0x11597B4 Slot: 8
	internal override string get_NameAttribute() { }

	// RVA: 0x11597BC Offset: 0x11557BC VA: 0x11597BC Slot: 9
	internal override void set_NameAttribute(string value) { }

	// RVA: 0x1158994 Offset: 0x1154994 VA: 0x1158994
	public void .ctor() { }
}


// Namespace: System.Xml.Schema
public enum XmlSchemaUse // TypeDefIndex: 3118
{
	// Fields
	public int value__; // 0x0
	[XmlIgnore]
	public const XmlSchemaUse None = 0;
	[XmlEnum("optional")]
	public const XmlSchemaUse Optional = 1;
	[XmlEnum("prohibited")]
	public const XmlSchemaUse Prohibited = 2;
	[XmlEnum("required")]
	public const XmlSchemaUse Required = 3;
}


// Namespace: System.Xml.Schema
[Serializable]
public class XmlSchemaValidationException : XmlSchemaException // TypeDefIndex: 3119
{
	// Methods

	// RVA: 0x11597C4 Offset: 0x11557C4 VA: 0x11597C4
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x11597CC Offset: 0x11557CC VA: 0x11597CC Slot: 10
	public override void GetObjectData(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x11597D4 Offset: 0x11557D4 VA: 0x11597D4
	public void .ctor() { }

	// RVA: 0x11597E0 Offset: 0x11557E0 VA: 0x11597E0
	internal void .ctor(string res, string arg, string sourceUri, int lineNumber, int linePosition) { }

	// RVA: 0x11598A0 Offset: 0x11558A0 VA: 0x11598A0
	internal void .ctor(string res, string[] args, string sourceUri, int lineNumber, int linePosition) { }

	// RVA: 0x11598D0 Offset: 0x11558D0 VA: 0x11598D0
	internal void .ctor(string res, string[] args, Exception innerException, string sourceUri, int lineNumber, int linePosition) { }
}


// Namespace: System.Xml.Schema
public sealed class XmlValueGetter : MulticastDelegate // TypeDefIndex: 3120
{
	// Methods

	// RVA: 0x11598F0 Offset: 0x11558F0 VA: 0x11598F0
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x1159978 Offset: 0x1155978 VA: 0x1159978 Slot: 12
	public virtual object Invoke() { }
}


// Namespace: System.Xml.Schema
[Flags]
public enum XmlSchemaValidationFlags // TypeDefIndex: 3121
{
	// Fields
	public int value__; // 0x0
	public const XmlSchemaValidationFlags None = 0;
	public const XmlSchemaValidationFlags ProcessInlineSchema = 1;
	public const XmlSchemaValidationFlags ProcessSchemaLocation = 2;
	public const XmlSchemaValidationFlags ReportValidationWarnings = 4;
	public const XmlSchemaValidationFlags ProcessIdentityConstraints = 8;
	public const XmlSchemaValidationFlags AllowXmlAttributes = 16;
}


// Namespace: System.Xml.Schema
internal enum ValidatorState // TypeDefIndex: 3122
{
	// Fields
	public int value__; // 0x0
	public const ValidatorState None = 0;
	public const ValidatorState Start = 1;
	public const ValidatorState TopLevelAttribute = 2;
	public const ValidatorState TopLevelTextOrWS = 3;
	public const ValidatorState Element = 4;
	public const ValidatorState Attribute = 5;
	public const ValidatorState EndOfAttributes = 6;
	public const ValidatorState Text = 7;
	public const ValidatorState Whitespace = 8;
	public const ValidatorState EndElement = 9;
	public const ValidatorState SkipToEndElement = 10;
	public const ValidatorState Finish = 11;
}


// Namespace: System.Xml.Schema
internal class IdRefNode // TypeDefIndex: 3123
{
	// Fields
	internal string Id; // 0x10
	internal int LineNo; // 0x18
	internal int LinePos; // 0x1C
	internal IdRefNode Next; // 0x20

	// Methods

	// RVA: 0x115998C Offset: 0x115598C VA: 0x115998C
	internal void .ctor(IdRefNode next, string id, int lineNo, int linePos) { }
}


// Namespace: System.Xml.Schema
public sealed class XmlSchemaValidator // TypeDefIndex: 3124
{
	// Fields
	private XmlSchemaSet schemaSet; // 0x10
	private XmlSchemaValidationFlags validationFlags; // 0x18
	private int startIDConstraint; // 0x1C
	private bool isRoot; // 0x20
	private bool rootHasSchema; // 0x21
	private bool attrValid; // 0x22
	private bool checkEntity; // 0x23
	private SchemaInfo compiledSchemaInfo; // 0x28
	private IDtdInfo dtdSchemaInfo; // 0x30
	private Hashtable validatedNamespaces; // 0x38
	private HWStack validationStack; // 0x40
	private ValidationState context; // 0x48
	private ValidatorState currentState; // 0x50
	private Hashtable attPresence; // 0x58
	private SchemaAttDef wildID; // 0x60
	private Hashtable IDs; // 0x68
	private IdRefNode idRefListHead; // 0x70
	private XmlQualifiedName contextQName; // 0x78
	private string NsXs; // 0x80
	private string NsXsi; // 0x88
	private string NsXmlNs; // 0x90
	private string NsXml; // 0x98
	private XmlSchemaObject partialValidationType; // 0xA0
	private StringBuilder textValue; // 0xA8
	private ValidationEventHandler eventHandler; // 0xB0
	private object validationEventSender; // 0xB8
	private XmlNameTable nameTable; // 0xC0
	private IXmlLineInfo positionInfo; // 0xC8
	private IXmlLineInfo dummyPositionInfo; // 0xD0
	private XmlResolver xmlResolver; // 0xD8
	private Uri sourceUri; // 0xE0
	private string sourceUriString; // 0xE8
	private IXmlNamespaceResolver nsResolver; // 0xF0
	private XmlSchemaContentProcessing processContents; // 0xF8
	private string xsiTypeString; // 0x100
	private string xsiNilString; // 0x108
	private string xsiSchemaLocationString; // 0x110
	private string xsiNoNamespaceSchemaLocationString; // 0x118
	private static readonly XmlSchemaDatatype dtQName; // 0x0
	private static readonly XmlSchemaDatatype dtCDATA; // 0x8
	private static readonly XmlSchemaDatatype dtStringArray; // 0x10
	private static XmlSchemaParticle[] EmptyParticleArray; // 0x18
	private static XmlSchemaAttribute[] EmptyAttributeArray; // 0x20
	private XmlCharType xmlCharType; // 0x120
	internal static bool[,] ValidStates; // 0x28
	private static string[] MethodNames; // 0x30

	// Properties
	public IXmlLineInfo LineInfoProvider { set; }
	public Uri SourceUri { set; }
	internal XmlSchemaContentType CurrentContentType { get; }
	private bool StrictlyAssessed { get; }
	private bool HasSchema { get; }
	private bool HasIdentityConstraints { get; }
	internal bool ProcessIdentityConstraints { get; }
	internal bool ReportValidationWarnings { get; }
	internal bool ProcessSchemaHints { get; }

	// Methods

	// RVA: 0x11599D0 Offset: 0x11559D0 VA: 0x11599D0
	public void .ctor(XmlNameTable nameTable, XmlSchemaSet schemas, IXmlNamespaceResolver namespaceResolver, XmlSchemaValidationFlags validationFlags) { }

	// RVA: 0x1159BA0 Offset: 0x1155BA0 VA: 0x1159BA0
	private void Init() { }

	// RVA: 0x1159F98 Offset: 0x1155F98 VA: 0x1159F98
	private void Reset() { }

	// RVA: 0x115A0F4 Offset: 0x11560F4 VA: 0x115A0F4
	public void set_LineInfoProvider(IXmlLineInfo value) { }

	// RVA: 0x115A104 Offset: 0x1156104 VA: 0x115A104
	public void set_SourceUri(Uri value) { }

	// RVA: 0x115A138 Offset: 0x1156138 VA: 0x115A138
	public void add_ValidationEventHandler(ValidationEventHandler value) { }

	// RVA: 0x115A1B8 Offset: 0x11561B8 VA: 0x115A1B8
	public void remove_ValidationEventHandler(ValidationEventHandler value) { }

	// RVA: 0x115A238 Offset: 0x1156238 VA: 0x115A238
	public void AddSchema(XmlSchema schema) { }

	// RVA: 0x115A980 Offset: 0x1156980 VA: 0x115A980
	public void Initialize() { }

	// RVA: 0x115AAC0 Offset: 0x1156AC0 VA: 0x115AAC0
	public void Initialize(XmlSchemaObject partialValidationType) { }

	// RVA: 0x115AD58 Offset: 0x1156D58 VA: 0x115AD58
	public void ValidateElement(string localName, string namespaceUri, XmlSchemaInfo schemaInfo, string xsiType, string xsiNil, string xsiSchemaLocation, string xsiNoNamespaceSchemaLocation) { }

	// RVA: 0x115C544 Offset: 0x1158544 VA: 0x115C544
	public object ValidateAttribute(string localName, string namespaceUri, XmlValueGetter attributeValue, XmlSchemaInfo schemaInfo) { }

	// RVA: 0x115C5A0 Offset: 0x11585A0 VA: 0x115C5A0
	private object ValidateAttribute(string lName, string ns, XmlValueGetter attributeValueGetter, string attributeStringValue, XmlSchemaInfo schemaInfo) { }

	// RVA: 0x115D960 Offset: 0x1159960 VA: 0x115D960
	public void ValidateEndOfAttributes(XmlSchemaInfo schemaInfo) { }

	// RVA: 0x115DB68 Offset: 0x1159B68 VA: 0x115DB68
	public void ValidateText(XmlValueGetter elementValue) { }

	// RVA: 0x115DBC4 Offset: 0x1159BC4 VA: 0x115DBC4
	private void ValidateText(string elementStringValue, XmlValueGetter elementValueGetter) { }

	// RVA: 0x115E4BC Offset: 0x115A4BC VA: 0x115E4BC
	public void ValidateWhitespace(XmlValueGetter elementValue) { }

	// RVA: 0x115E518 Offset: 0x115A518 VA: 0x115E518
	private void ValidateWhitespace(string elementStringValue, XmlValueGetter elementValueGetter) { }

	// RVA: 0x115E6E4 Offset: 0x115A6E4 VA: 0x115E6E4
	public object ValidateEndElement(XmlSchemaInfo schemaInfo) { }

	// RVA: 0x115EBD8 Offset: 0x115ABD8 VA: 0x115EBD8
	public void SkipToEndElement(XmlSchemaInfo schemaInfo) { }

	// RVA: 0x115EEE4 Offset: 0x115AEE4 VA: 0x115EEE4
	public void EndValidation() { }

	// RVA: 0x115F0B8 Offset: 0x115B0B8 VA: 0x115F0B8
	internal void GetUnspecifiedDefaultAttributes(ArrayList defaultAttributes, bool createNodeData) { }

	// RVA: 0x115F9D0 Offset: 0x115B9D0 VA: 0x115F9D0
	internal XmlSchemaContentType get_CurrentContentType() { }

	// RVA: 0x115FA04 Offset: 0x115BA04 VA: 0x115FA04
	internal void SetDtdSchemaInfo(IDtdInfo dtdSchemaInfo) { }

	// RVA: 0x115FA14 Offset: 0x115BA14 VA: 0x115FA14
	private bool get_StrictlyAssessed() { }

	// RVA: 0x115FA58 Offset: 0x115BA58 VA: 0x115FA58
	private bool get_HasSchema() { }

	// RVA: 0x115FAA0 Offset: 0x115BAA0 VA: 0x115FAA0
	internal string GetConcatenatedValue() { }

	// RVA: 0x115E6EC Offset: 0x115A6EC VA: 0x115E6EC
	private object InternalValidateEndElement(XmlSchemaInfo schemaInfo, object typedValue) { }

	// RVA: 0x115B9B0 Offset: 0x11579B0 VA: 0x115B9B0
	private void ProcessSchemaLocations(string xsiSchemaLocation, string xsiNoNamespaceSchemaLocation) { }

	// RVA: 0x115B330 Offset: 0x1157330 VA: 0x115B330
	private object ValidateElementContext(XmlQualifiedName elementName, out bool invalidElementInContext) { }

	// RVA: 0x11614A0 Offset: 0x115D4A0 VA: 0x11614A0
	private XmlSchemaElement GetSubstitutionGroupHead(XmlQualifiedName member) { }

	// RVA: 0x115FAC0 Offset: 0x115BAC0 VA: 0x115FAC0
	private object ValidateAtomicValue(string stringValue, out XmlSchemaSimpleType memberType) { }

	// RVA: 0x115FD14 Offset: 0x115BD14 VA: 0x115FD14
	private object ValidateAtomicValue(object parsedValue, out XmlSchemaSimpleType memberType) { }

	// RVA: 0x1162064 Offset: 0x115E064 VA: 0x1162064
	private string GetTypeName(SchemaDeclBase decl) { }

	// RVA: 0x115DF70 Offset: 0x1159F70 VA: 0x115DF70
	private void SaveTextValue(object value) { }

	// RVA: 0x1159EA8 Offset: 0x1155EA8 VA: 0x1159EA8
	private void Push(XmlQualifiedName elementName) { }

	// RVA: 0x115EDD4 Offset: 0x115ADD4 VA: 0x115EDD4
	private void Pop() { }

	// RVA: 0x115B760 Offset: 0x1157760 VA: 0x115B760
	private SchemaElementDecl FastGetElementDecl(XmlQualifiedName elementName, object particle) { }

	// RVA: 0x115BCA0 Offset: 0x1157CA0 VA: 0x115BCA0
	private SchemaElementDecl CheckXsiTypeAndNil(SchemaElementDecl elementDecl, string xsiType, string xsiNil, ref bool declFound) { }

	// RVA: 0x115C1EC Offset: 0x11581EC VA: 0x115C1EC
	private void ThrowDeclNotFoundWarningOrError(bool declFound) { }

	// RVA: 0x115C32C Offset: 0x115832C VA: 0x115C32C
	private void CheckElementProperties() { }

	// RVA: 0x115C3E0 Offset: 0x11583E0 VA: 0x115C3E0
	private void ValidateStartElementIdentityConstraints() { }

	// RVA: 0x115D0B4 Offset: 0x11590B4 VA: 0x115D0B4
	private SchemaAttDef CheckIsXmlAttribute(XmlQualifiedName attQName) { }

	// RVA: 0x11628BC Offset: 0x115E8BC VA: 0x11628BC
	private void AddXmlNamespaceSchema() { }

	// RVA: 0x115FFD0 Offset: 0x115BFD0 VA: 0x115FFD0
	internal object CheckMixedValueConstraint(string elementValue) { }

	// RVA: 0x1160FC8 Offset: 0x115CFC8 VA: 0x1160FC8
	private void LoadSchema(string uri, string url) { }

	// RVA: 0x115A024 Offset: 0x1156024 VA: 0x115A024
	internal void RecompileSchemaSet() { }

	// RVA: 0x1162B0C Offset: 0x115EB0C VA: 0x1162B0C
	private void ProcessTokenizedType(XmlTokenizedType ttype, string name, bool attrValue) { }

	// RVA: 0x115D308 Offset: 0x1159308 VA: 0x115D308
	private object CheckAttributeValue(object value, SchemaAttDef attdef) { }

	// RVA: 0x1161E88 Offset: 0x115DE88 VA: 0x1161E88
	private object CheckElementValue(string stringValue) { }

	// RVA: 0x115D510 Offset: 0x1159510 VA: 0x115D510
	private void CheckTokenizedTypes(XmlSchemaDatatype dtype, object typedValue, bool attrValue) { }

	// RVA: 0x1162DA8 Offset: 0x115EDA8 VA: 0x1162DA8
	private object FindId(string name) { }

	// RVA: 0x115EFD0 Offset: 0x115AFD0 VA: 0x115EFD0
	private void CheckForwardRefs() { }

	// RVA: 0x115D69C Offset: 0x115969C VA: 0x115D69C
	private bool get_HasIdentityConstraints() { }

	// RVA: 0x116212C Offset: 0x115E12C VA: 0x116212C
	internal bool get_ProcessIdentityConstraints() { }

	// RVA: 0x1163054 Offset: 0x115F054 VA: 0x1163054
	internal bool get_ReportValidationWarnings() { }

	// RVA: 0x115A0E4 Offset: 0x11560E4 VA: 0x115A0E4
	internal bool get_ProcessSchemaHints() { }

	// RVA: 0x115B0D4 Offset: 0x11570D4 VA: 0x115B0D4
	private void CheckStateTransition(ValidatorState toState, string methodName) { }

	// RVA: 0x115B2EC Offset: 0x11572EC VA: 0x115B2EC
	private void ClearPSVI() { }

	// RVA: 0x115DA28 Offset: 0x1159A28 VA: 0x115DA28
	private void CheckRequiredAttributes(SchemaElementDecl currentElementDecl) { }

	// RVA: 0x115C43C Offset: 0x115843C VA: 0x115C43C
	private XmlSchemaElement GetSchemaElement() { }

	// RVA: 0x115F61C Offset: 0x115B61C VA: 0x115F61C
	internal string GetDefaultAttributePrefix(string attributeNS) { }

	// RVA: 0x1162138 Offset: 0x115E138 VA: 0x1162138
	private void AddIdentityConstraints() { }

	// RVA: 0x116250C Offset: 0x115E50C VA: 0x116250C
	private void ElementIdentityConstraints() { }

	// RVA: 0x115D6BC Offset: 0x11596BC VA: 0x115D6BC
	private void AttributeIdentityConstraints(string name, string ns, object obj, string sobj, XmlSchemaDatatype datatype) { }

	// RVA: 0x1160464 Offset: 0x115C464 VA: 0x1160464
	private void EndElementIdentityConstraints(object typedValue, string stringValue, XmlSchemaDatatype datatype) { }

	// RVA: 0x116188C Offset: 0x115D88C VA: 0x116188C
	internal static void ElementValidationError(XmlQualifiedName name, ValidationState context, ValidationEventHandler eventHandler, object sender, string sourceUri, int lineNo, int linePos, XmlSchemaSet schemaSet) { }

	// RVA: 0x11600AC Offset: 0x115C0AC VA: 0x11600AC
	internal static void CompleteValidationError(ValidationState context, ValidationEventHandler eventHandler, object sender, string sourceUri, int lineNo, int linePos, XmlSchemaSet schemaSet) { }

	// RVA: 0x115E0DC Offset: 0x115A0DC VA: 0x115E0DC
	internal static string PrintExpectedElements(ArrayList expected, bool getParticles) { }

	// RVA: 0x11635A4 Offset: 0x115F5A4 VA: 0x11635A4
	private static string PrintNames(ArrayList expected) { }

	// RVA: 0x116311C Offset: 0x115F11C VA: 0x116311C
	private static void PrintNamesWithNS(ArrayList expected, StringBuilder builder) { }

	// RVA: 0x1163720 Offset: 0x115F720 VA: 0x1163720
	private static void EnumerateAny(StringBuilder builder, string namespaces) { }

	// RVA: 0x115DEFC Offset: 0x1159EFC VA: 0x115DEFC
	internal static string QNameString(string localName, string ns) { }

	// RVA: 0x1161654 Offset: 0x115D654 VA: 0x1161654
	internal static string BuildElementName(XmlQualifiedName qname) { }

	// RVA: 0x115DFB0 Offset: 0x1159FB0 VA: 0x115DFB0
	internal static string BuildElementName(string localName, string ns) { }

	// RVA: 0x1162DC4 Offset: 0x115EDC4 VA: 0x1162DC4
	private void ProcessEntity(string name) { }

	// RVA: 0x11620CC Offset: 0x115E0CC VA: 0x11620CC
	private void SendValidationEvent(string code) { }

	// RVA: 0x115D17C Offset: 0x115917C VA: 0x115D17C
	private void SendValidationEvent(string code, string[] args) { }

	// RVA: 0x115CF3C Offset: 0x1158F3C VA: 0x115CF3C
	private void SendValidationEvent(string code, string arg) { }

	// RVA: 0x11616B8 Offset: 0x115D6B8 VA: 0x11616B8
	private void SendValidationEvent(string code, string arg1, string arg2) { }

	// RVA: 0x1162944 Offset: 0x115E944 VA: 0x1162944
	private void SendValidationEvent(string code, string[] args, Exception innerException, XmlSeverityType severity) { }

	// RVA: 0x115A7E8 Offset: 0x11567E8 VA: 0x115A7E8
	private void SendValidationEvent(string code, string[] args, Exception innerException) { }

	// RVA: 0x1163060 Offset: 0x115F060 VA: 0x1163060
	private void SendValidationEvent(XmlSchemaValidationException e) { }

	// RVA: 0x11613F4 Offset: 0x115D3F4 VA: 0x11613F4
	private void SendValidationEvent(XmlSchemaException e) { }

	// RVA: 0x115A63C Offset: 0x115663C VA: 0x115A63C
	private void SendValidationEvent(string code, string msg, XmlSeverityType severity) { }

	// RVA: 0x1162F38 Offset: 0x115EF38 VA: 0x1162F38
	private void SendValidationEvent(XmlSchemaValidationException e, XmlSeverityType severity) { }

	// RVA: 0x1163068 Offset: 0x115F068 VA: 0x1163068
	internal static void SendValidationEvent(ValidationEventHandler eventHandler, object sender, XmlSchemaValidationException e, XmlSeverityType severity) { }

	// RVA: 0x1163954 Offset: 0x115F954 VA: 0x1163954
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
public enum XmlSchemaValidity // TypeDefIndex: 3125
{
	// Fields
	public int value__; // 0x0
	public const XmlSchemaValidity NotKnown = 0;
	public const XmlSchemaValidity Valid = 1;
	public const XmlSchemaValidity Invalid = 2;
}


// Namespace: System.Xml.Schema
public enum XmlSeverityType // TypeDefIndex: 3126
{
	// Fields
	public int value__; // 0x0
	public const XmlSeverityType Error = 0;
	public const XmlSeverityType Warning = 1;
}


// Namespace: System.Xml.Schema
public enum XmlTypeCode // TypeDefIndex: 3127
{
	// Fields
	public int value__; // 0x0
	public const XmlTypeCode None = 0;
	public const XmlTypeCode Item = 1;
	public const XmlTypeCode Node = 2;
	public const XmlTypeCode Document = 3;
	public const XmlTypeCode Element = 4;
	public const XmlTypeCode Attribute = 5;
	public const XmlTypeCode Namespace = 6;
	public const XmlTypeCode ProcessingInstruction = 7;
	public const XmlTypeCode Comment = 8;
	public const XmlTypeCode Text = 9;
	public const XmlTypeCode AnyAtomicType = 10;
	public const XmlTypeCode UntypedAtomic = 11;
	public const XmlTypeCode String = 12;
	public const XmlTypeCode Boolean = 13;
	public const XmlTypeCode Decimal = 14;
	public const XmlTypeCode Float = 15;
	public const XmlTypeCode Double = 16;
	public const XmlTypeCode Duration = 17;
	public const XmlTypeCode DateTime = 18;
	public const XmlTypeCode Time = 19;
	public const XmlTypeCode Date = 20;
	public const XmlTypeCode GYearMonth = 21;
	public const XmlTypeCode GYear = 22;
	public const XmlTypeCode GMonthDay = 23;
	public const XmlTypeCode GDay = 24;
	public const XmlTypeCode GMonth = 25;
	public const XmlTypeCode HexBinary = 26;
	public const XmlTypeCode Base64Binary = 27;
	public const XmlTypeCode AnyUri = 28;
	public const XmlTypeCode QName = 29;
	public const XmlTypeCode Notation = 30;
	public const XmlTypeCode NormalizedString = 31;
	public const XmlTypeCode Token = 32;
	public const XmlTypeCode Language = 33;
	public const XmlTypeCode NmToken = 34;
	public const XmlTypeCode Name = 35;
	public const XmlTypeCode NCName = 36;
	public const XmlTypeCode Id = 37;
	public const XmlTypeCode Idref = 38;
	public const XmlTypeCode Entity = 39;
	public const XmlTypeCode Integer = 40;
	public const XmlTypeCode NonPositiveInteger = 41;
	public const XmlTypeCode NegativeInteger = 42;
	public const XmlTypeCode Long = 43;
	public const XmlTypeCode Int = 44;
	public const XmlTypeCode Short = 45;
	public const XmlTypeCode Byte = 46;
	public const XmlTypeCode NonNegativeInteger = 47;
	public const XmlTypeCode UnsignedLong = 48;
	public const XmlTypeCode UnsignedInt = 49;
	public const XmlTypeCode UnsignedShort = 50;
	public const XmlTypeCode UnsignedByte = 51;
	public const XmlTypeCode PositiveInteger = 52;
	public const XmlTypeCode YearMonthDuration = 53;
	public const XmlTypeCode DayTimeDuration = 54;
}


// Namespace: System.Xml.Schema
internal abstract class XmlValueConverter // TypeDefIndex: 3128
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public abstract bool ToBoolean(long value);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract bool ToBoolean(int value);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract bool ToBoolean(double value);

	// RVA: -1 Offset: -1 Slot: 7
	public abstract bool ToBoolean(DateTime value);

	// RVA: -1 Offset: -1 Slot: 8
	public abstract bool ToBoolean(string value);

	// RVA: -1 Offset: -1 Slot: 9
	public abstract bool ToBoolean(object value);

	// RVA: -1 Offset: -1 Slot: 10
	public abstract int ToInt32(bool value);

	// RVA: -1 Offset: -1 Slot: 11
	public abstract int ToInt32(long value);

	// RVA: -1 Offset: -1 Slot: 12
	public abstract int ToInt32(double value);

	// RVA: -1 Offset: -1 Slot: 13
	public abstract int ToInt32(DateTime value);

	// RVA: -1 Offset: -1 Slot: 14
	public abstract int ToInt32(string value);

	// RVA: -1 Offset: -1 Slot: 15
	public abstract int ToInt32(object value);

	// RVA: -1 Offset: -1 Slot: 16
	public abstract long ToInt64(bool value);

	// RVA: -1 Offset: -1 Slot: 17
	public abstract long ToInt64(int value);

	// RVA: -1 Offset: -1 Slot: 18
	public abstract long ToInt64(double value);

	// RVA: -1 Offset: -1 Slot: 19
	public abstract long ToInt64(DateTime value);

	// RVA: -1 Offset: -1 Slot: 20
	public abstract long ToInt64(string value);

	// RVA: -1 Offset: -1 Slot: 21
	public abstract long ToInt64(object value);

	// RVA: -1 Offset: -1 Slot: 22
	public abstract Decimal ToDecimal(string value);

	// RVA: -1 Offset: -1 Slot: 23
	public abstract Decimal ToDecimal(object value);

	// RVA: -1 Offset: -1 Slot: 24
	public abstract double ToDouble(bool value);

	// RVA: -1 Offset: -1 Slot: 25
	public abstract double ToDouble(int value);

	// RVA: -1 Offset: -1 Slot: 26
	public abstract double ToDouble(long value);

	// RVA: -1 Offset: -1 Slot: 27
	public abstract double ToDouble(DateTime value);

	// RVA: -1 Offset: -1 Slot: 28
	public abstract double ToDouble(string value);

	// RVA: -1 Offset: -1 Slot: 29
	public abstract double ToDouble(object value);

	// RVA: -1 Offset: -1 Slot: 30
	public abstract float ToSingle(double value);

	// RVA: -1 Offset: -1 Slot: 31
	public abstract float ToSingle(string value);

	// RVA: -1 Offset: -1 Slot: 32
	public abstract float ToSingle(object value);

	// RVA: -1 Offset: -1 Slot: 33
	public abstract DateTime ToDateTime(bool value);

	// RVA: -1 Offset: -1 Slot: 34
	public abstract DateTime ToDateTime(int value);

	// RVA: -1 Offset: -1 Slot: 35
	public abstract DateTime ToDateTime(long value);

	// RVA: -1 Offset: -1 Slot: 36
	public abstract DateTime ToDateTime(double value);

	// RVA: -1 Offset: -1 Slot: 37
	public abstract DateTime ToDateTime(DateTimeOffset value);

	// RVA: -1 Offset: -1 Slot: 38
	public abstract DateTime ToDateTime(string value);

	// RVA: -1 Offset: -1 Slot: 39
	public abstract DateTime ToDateTime(object value);

	// RVA: -1 Offset: -1 Slot: 40
	public abstract DateTimeOffset ToDateTimeOffset(DateTime value);

	// RVA: -1 Offset: -1 Slot: 41
	public abstract DateTimeOffset ToDateTimeOffset(string value);

	// RVA: -1 Offset: -1 Slot: 42
	public abstract DateTimeOffset ToDateTimeOffset(object value);

	// RVA: -1 Offset: -1 Slot: 43
	public abstract string ToString(bool value);

	// RVA: -1 Offset: -1 Slot: 44
	public abstract string ToString(int value);

	// RVA: -1 Offset: -1 Slot: 45
	public abstract string ToString(long value);

	// RVA: -1 Offset: -1 Slot: 46
	public abstract string ToString(Decimal value);

	// RVA: -1 Offset: -1 Slot: 47
	public abstract string ToString(float value);

	// RVA: -1 Offset: -1 Slot: 48
	public abstract string ToString(double value);

	// RVA: -1 Offset: -1 Slot: 49
	public abstract string ToString(DateTime value);

	// RVA: -1 Offset: -1 Slot: 50
	public abstract string ToString(DateTimeOffset value);

	// RVA: -1 Offset: -1 Slot: 51
	public abstract string ToString(object value);

	// RVA: -1 Offset: -1 Slot: 52
	public abstract string ToString(object value, IXmlNamespaceResolver nsResolver);

	// RVA: -1 Offset: -1 Slot: 53
	public abstract object ChangeType(bool value, Type destinationType);

	// RVA: -1 Offset: -1 Slot: 54
	public abstract object ChangeType(int value, Type destinationType);

	// RVA: -1 Offset: -1 Slot: 55
	public abstract object ChangeType(long value, Type destinationType);

	// RVA: -1 Offset: -1 Slot: 56
	public abstract object ChangeType(Decimal value, Type destinationType);

	// RVA: -1 Offset: -1 Slot: 57
	public abstract object ChangeType(double value, Type destinationType);

	// RVA: -1 Offset: -1 Slot: 58
	public abstract object ChangeType(DateTime value, Type destinationType);

	// RVA: -1 Offset: -1 Slot: 59
	public abstract object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver);

	// RVA: -1 Offset: -1 Slot: 60
	public abstract object ChangeType(object value, Type destinationType);

	// RVA: -1 Offset: -1 Slot: 61
	public abstract object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver);

	// RVA: 0x1163C9C Offset: 0x115FC9C VA: 0x1163C9C
	protected void .ctor() { }
}


// Namespace: System.Xml.Schema
internal abstract class XmlBaseConverter : XmlValueConverter // TypeDefIndex: 3129
{
	// Fields
	private XmlSchemaType schemaType; // 0x10
	private XmlTypeCode typeCode; // 0x18
	private Type clrTypeDefault; // 0x20
	protected static readonly Type ICollectionType; // 0x0
	protected static readonly Type IEnumerableType; // 0x8
	protected static readonly Type IListType; // 0x10
	protected static readonly Type ObjectArrayType; // 0x18
	protected static readonly Type StringArrayType; // 0x20
	protected static readonly Type XmlAtomicValueArrayType; // 0x28
	protected static readonly Type DecimalType; // 0x30
	protected static readonly Type Int32Type; // 0x38
	protected static readonly Type Int64Type; // 0x40
	protected static readonly Type StringType; // 0x48
	protected static readonly Type XmlAtomicValueType; // 0x50
	protected static readonly Type ObjectType; // 0x58
	protected static readonly Type ByteType; // 0x60
	protected static readonly Type Int16Type; // 0x68
	protected static readonly Type SByteType; // 0x70
	protected static readonly Type UInt16Type; // 0x78
	protected static readonly Type UInt32Type; // 0x80
	protected static readonly Type UInt64Type; // 0x88
	protected static readonly Type XPathItemType; // 0x90
	protected static readonly Type DoubleType; // 0x98
	protected static readonly Type SingleType; // 0xA0
	protected static readonly Type DateTimeType; // 0xA8
	protected static readonly Type DateTimeOffsetType; // 0xB0
	protected static readonly Type BooleanType; // 0xB8
	protected static readonly Type ByteArrayType; // 0xC0
	protected static readonly Type XmlQualifiedNameType; // 0xC8
	protected static readonly Type UriType; // 0xD0
	protected static readonly Type TimeSpanType; // 0xD8
	protected static readonly Type XPathNavigatorType; // 0xE0

	// Properties
	protected string XmlTypeName { get; }

	// Methods

	// RVA: 0x1163CA4 Offset: 0x115FCA4 VA: 0x1163CA4
	protected void .ctor(XmlSchemaType schemaType) { }

	// RVA: 0x1163D80 Offset: 0x115FD80 VA: 0x1163D80
	protected void .ctor(XmlTypeCode typeCode) { }

	// RVA: 0x1163E58 Offset: 0x115FE58 VA: 0x1163E58
	protected void .ctor(XmlBaseConverter converterAtomic) { }

	// RVA: 0x1163EB4 Offset: 0x115FEB4 VA: 0x1163EB4
	protected void .ctor(XmlBaseConverter converterAtomic, Type clrTypeDefault) { }

	// RVA: 0x1163EF8 Offset: 0x115FEF8 VA: 0x1163EF8 Slot: 7
	public override bool ToBoolean(DateTime value) { }

	// RVA: 0x1163FF0 Offset: 0x115FFF0 VA: 0x1163FF0 Slot: 6
	public override bool ToBoolean(double value) { }

	// RVA: 0x11640F0 Offset: 0x11600F0 VA: 0x11640F0 Slot: 5
	public override bool ToBoolean(int value) { }

	// RVA: 0x11641E8 Offset: 0x11601E8 VA: 0x11641E8 Slot: 4
	public override bool ToBoolean(long value) { }

	// RVA: 0x11642E0 Offset: 0x11602E0 VA: 0x11642E0 Slot: 8
	public override bool ToBoolean(string value) { }

	// RVA: 0x11643A4 Offset: 0x11603A4 VA: 0x11643A4 Slot: 9
	public override bool ToBoolean(object value) { }

	// RVA: 0x1164468 Offset: 0x1160468 VA: 0x1164468 Slot: 33
	public override DateTime ToDateTime(bool value) { }

	// RVA: 0x1164564 Offset: 0x1160564 VA: 0x1164564 Slot: 37
	public override DateTime ToDateTime(DateTimeOffset value) { }

	// RVA: 0x1164668 Offset: 0x1160668 VA: 0x1164668 Slot: 36
	public override DateTime ToDateTime(double value) { }

	// RVA: 0x1164768 Offset: 0x1160768 VA: 0x1164768 Slot: 34
	public override DateTime ToDateTime(int value) { }

	// RVA: 0x1164860 Offset: 0x1160860 VA: 0x1164860 Slot: 35
	public override DateTime ToDateTime(long value) { }

	// RVA: 0x1164958 Offset: 0x1160958 VA: 0x1164958 Slot: 38
	public override DateTime ToDateTime(string value) { }

	// RVA: 0x1164A1C Offset: 0x1160A1C VA: 0x1164A1C Slot: 39
	public override DateTime ToDateTime(object value) { }

	// RVA: 0x1164AE0 Offset: 0x1160AE0 VA: 0x1164AE0 Slot: 40
	public override DateTimeOffset ToDateTimeOffset(DateTime value) { }

	// RVA: 0x1164BDC Offset: 0x1160BDC VA: 0x1164BDC Slot: 41
	public override DateTimeOffset ToDateTimeOffset(string value) { }

	// RVA: 0x1164CA4 Offset: 0x1160CA4 VA: 0x1164CA4 Slot: 42
	public override DateTimeOffset ToDateTimeOffset(object value) { }

	// RVA: 0x1164D6C Offset: 0x1160D6C VA: 0x1164D6C Slot: 22
	public override Decimal ToDecimal(string value) { }

	// RVA: 0x1164E34 Offset: 0x1160E34 VA: 0x1164E34 Slot: 23
	public override Decimal ToDecimal(object value) { }

	// RVA: 0x1164EFC Offset: 0x1160EFC VA: 0x1164EFC Slot: 24
	public override double ToDouble(bool value) { }

	// RVA: 0x1164FF8 Offset: 0x1160FF8 VA: 0x1164FF8 Slot: 27
	public override double ToDouble(DateTime value) { }

	// RVA: 0x11650F0 Offset: 0x11610F0 VA: 0x11650F0 Slot: 25
	public override double ToDouble(int value) { }

	// RVA: 0x11651E8 Offset: 0x11611E8 VA: 0x11651E8 Slot: 26
	public override double ToDouble(long value) { }

	// RVA: 0x11652E0 Offset: 0x11612E0 VA: 0x11652E0 Slot: 28
	public override double ToDouble(string value) { }

	// RVA: 0x11653A4 Offset: 0x11613A4 VA: 0x11653A4 Slot: 29
	public override double ToDouble(object value) { }

	// RVA: 0x1165468 Offset: 0x1161468 VA: 0x1165468 Slot: 10
	public override int ToInt32(bool value) { }

	// RVA: 0x1165564 Offset: 0x1161564 VA: 0x1165564 Slot: 13
	public override int ToInt32(DateTime value) { }

	// RVA: 0x116565C Offset: 0x116165C VA: 0x116565C Slot: 12
	public override int ToInt32(double value) { }

	// RVA: 0x116575C Offset: 0x116175C VA: 0x116575C Slot: 11
	public override int ToInt32(long value) { }

	// RVA: 0x1165854 Offset: 0x1161854 VA: 0x1165854 Slot: 14
	public override int ToInt32(string value) { }

	// RVA: 0x1165918 Offset: 0x1161918 VA: 0x1165918 Slot: 15
	public override int ToInt32(object value) { }

	// RVA: 0x11659DC Offset: 0x11619DC VA: 0x11659DC Slot: 16
	public override long ToInt64(bool value) { }

	// RVA: 0x1165AD8 Offset: 0x1161AD8 VA: 0x1165AD8 Slot: 19
	public override long ToInt64(DateTime value) { }

	// RVA: 0x1165BD0 Offset: 0x1161BD0 VA: 0x1165BD0 Slot: 18
	public override long ToInt64(double value) { }

	// RVA: 0x1165CD0 Offset: 0x1161CD0 VA: 0x1165CD0 Slot: 17
	public override long ToInt64(int value) { }

	// RVA: 0x1165DC8 Offset: 0x1161DC8 VA: 0x1165DC8 Slot: 20
	public override long ToInt64(string value) { }

	// RVA: 0x1165E8C Offset: 0x1161E8C VA: 0x1165E8C Slot: 21
	public override long ToInt64(object value) { }

	// RVA: 0x1165F50 Offset: 0x1161F50 VA: 0x1165F50 Slot: 30
	public override float ToSingle(double value) { }

	// RVA: 0x1166050 Offset: 0x1162050 VA: 0x1166050 Slot: 31
	public override float ToSingle(string value) { }

	// RVA: 0x1166114 Offset: 0x1162114 VA: 0x1166114 Slot: 32
	public override float ToSingle(object value) { }

	// RVA: 0x11661D8 Offset: 0x11621D8 VA: 0x11661D8 Slot: 43
	public override string ToString(bool value) { }

	// RVA: 0x11662C0 Offset: 0x11622C0 VA: 0x11662C0 Slot: 49
	public override string ToString(DateTime value) { }

	// RVA: 0x11663A4 Offset: 0x11623A4 VA: 0x11663A4 Slot: 50
	public override string ToString(DateTimeOffset value) { }

	// RVA: 0x1166494 Offset: 0x1162494 VA: 0x1166494 Slot: 46
	public override string ToString(Decimal value) { }

	// RVA: 0x11665A4 Offset: 0x11625A4 VA: 0x11665A4 Slot: 48
	public override string ToString(double value) { }

	// RVA: 0x1166690 Offset: 0x1162690 VA: 0x1166690 Slot: 44
	public override string ToString(int value) { }

	// RVA: 0x1166774 Offset: 0x1162774 VA: 0x1166774 Slot: 45
	public override string ToString(long value) { }

	// RVA: 0x1166858 Offset: 0x1162858 VA: 0x1166858 Slot: 47
	public override string ToString(float value) { }

	// RVA: 0x1166944 Offset: 0x1162944 VA: 0x1166944 Slot: 52
	public override string ToString(object value, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x11669F8 Offset: 0x11629F8 VA: 0x11669F8 Slot: 51
	public override string ToString(object value) { }

	// RVA: 0x1166A0C Offset: 0x1162A0C VA: 0x1166A0C Slot: 53
	public override object ChangeType(bool value, Type destinationType) { }

	// RVA: 0x1166A98 Offset: 0x1162A98 VA: 0x1166A98 Slot: 58
	public override object ChangeType(DateTime value, Type destinationType) { }

	// RVA: 0x1166B20 Offset: 0x1162B20 VA: 0x1166B20 Slot: 56
	public override object ChangeType(Decimal value, Type destinationType) { }

	// RVA: 0x1166BD4 Offset: 0x1162BD4 VA: 0x1166BD4 Slot: 57
	public override object ChangeType(double value, Type destinationType) { }

	// RVA: 0x1166C64 Offset: 0x1162C64 VA: 0x1166C64 Slot: 54
	public override object ChangeType(int value, Type destinationType) { }

	// RVA: 0x1166CEC Offset: 0x1162CEC VA: 0x1166CEC Slot: 55
	public override object ChangeType(long value, Type destinationType) { }

	// RVA: 0x1166D74 Offset: 0x1162D74 VA: 0x1166D74 Slot: 59
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x1166D84 Offset: 0x1162D84 VA: 0x1166D84 Slot: 60
	public override object ChangeType(object value, Type destinationType) { }

	// RVA: 0x1166D98 Offset: 0x1162D98 VA: 0x1166D98
	protected string get_XmlTypeName() { }

	// RVA: 0x1166FAC Offset: 0x1162FAC VA: 0x1166FAC
	protected static bool IsDerivedFrom(Type derivedType, Type baseType) { }

	// RVA: 0x116706C Offset: 0x116306C VA: 0x116706C
	protected Exception CreateInvalidClrMappingException(Type sourceType, Type destinationType) { }

	// RVA: 0x1166E8C Offset: 0x1162E8C VA: 0x1166E8C
	protected static string QNameToString(XmlQualifiedName name) { }

	// RVA: 0x11672C8 Offset: 0x11632C8 VA: 0x11672C8 Slot: 62
	protected virtual object ChangeListType(object value, Type destinationType, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x116731C Offset: 0x116331C VA: 0x116731C
	protected static byte[] StringToBase64Binary(string value) { }

	// RVA: 0x11673AC Offset: 0x11633AC VA: 0x11673AC
	protected static DateTime StringToDate(string value) { }

	// RVA: 0x1167428 Offset: 0x1163428 VA: 0x1167428
	protected static DateTime StringToDateTime(string value) { }

	// RVA: 0x11674A4 Offset: 0x11634A4 VA: 0x11674A4
	protected static TimeSpan StringToDayTimeDuration(string value) { }

	// RVA: 0x1167504 Offset: 0x1163504 VA: 0x1167504
	protected static TimeSpan StringToDuration(string value) { }

	// RVA: 0x1167564 Offset: 0x1163564 VA: 0x1167564
	protected static DateTime StringToGDay(string value) { }

	// RVA: 0x11675E0 Offset: 0x11635E0 VA: 0x11675E0
	protected static DateTime StringToGMonth(string value) { }

	// RVA: 0x116765C Offset: 0x116365C VA: 0x116765C
	protected static DateTime StringToGMonthDay(string value) { }

	// RVA: 0x11676D8 Offset: 0x11636D8 VA: 0x11676D8
	protected static DateTime StringToGYear(string value) { }

	// RVA: 0x1167754 Offset: 0x1163754 VA: 0x1167754
	protected static DateTime StringToGYearMonth(string value) { }

	// RVA: 0x11677D0 Offset: 0x11637D0 VA: 0x11677D0
	protected static DateTimeOffset StringToDateOffset(string value) { }

	// RVA: 0x116784C Offset: 0x116384C VA: 0x116784C
	protected static DateTimeOffset StringToDateTimeOffset(string value) { }

	// RVA: 0x11678C8 Offset: 0x11638C8 VA: 0x11678C8
	protected static DateTimeOffset StringToGDayOffset(string value) { }

	// RVA: 0x1167944 Offset: 0x1163944 VA: 0x1167944
	protected static DateTimeOffset StringToGMonthOffset(string value) { }

	// RVA: 0x11679C0 Offset: 0x11639C0 VA: 0x11679C0
	protected static DateTimeOffset StringToGMonthDayOffset(string value) { }

	// RVA: 0x1167A3C Offset: 0x1163A3C VA: 0x1167A3C
	protected static DateTimeOffset StringToGYearOffset(string value) { }

	// RVA: 0x1167AB8 Offset: 0x1163AB8 VA: 0x1167AB8
	protected static DateTimeOffset StringToGYearMonthOffset(string value) { }

	// RVA: 0x1167B34 Offset: 0x1163B34 VA: 0x1167B34
	protected static byte[] StringToHexBinary(string value) { }

	// RVA: 0x1167C68 Offset: 0x1163C68 VA: 0x1167C68
	protected static XmlQualifiedName StringToQName(string value, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x1167F18 Offset: 0x1163F18 VA: 0x1167F18
	protected static DateTime StringToTime(string value) { }

	// RVA: 0x1167F94 Offset: 0x1163F94 VA: 0x1167F94
	protected static DateTimeOffset StringToTimeOffset(string value) { }

	// RVA: 0x1168010 Offset: 0x1164010 VA: 0x1168010
	protected static TimeSpan StringToYearMonthDuration(string value) { }

	// RVA: 0x1168070 Offset: 0x1164070 VA: 0x1168070
	protected static string AnyUriToString(Uri value) { }

	// RVA: 0x1168084 Offset: 0x1164084 VA: 0x1168084
	protected static string Base64BinaryToString(byte[] value) { }

	// RVA: 0x11680DC Offset: 0x11640DC VA: 0x11680DC
	protected static string DateToString(DateTime value) { }

	// RVA: 0x1168164 Offset: 0x1164164 VA: 0x1168164
	protected static string DateTimeToString(DateTime value) { }

	// RVA: 0x11681EC Offset: 0x11641EC VA: 0x11681EC
	protected static string DayTimeDurationToString(TimeSpan value) { }

	// RVA: 0x116824C Offset: 0x116424C VA: 0x116824C
	protected static string DurationToString(TimeSpan value) { }

	// RVA: 0x11682AC Offset: 0x11642AC VA: 0x11682AC
	protected static string GDayToString(DateTime value) { }

	// RVA: 0x1168334 Offset: 0x1164334 VA: 0x1168334
	protected static string GMonthToString(DateTime value) { }

	// RVA: 0x11683BC Offset: 0x11643BC VA: 0x11683BC
	protected static string GMonthDayToString(DateTime value) { }

	// RVA: 0x1168444 Offset: 0x1164444 VA: 0x1168444
	protected static string GYearToString(DateTime value) { }

	// RVA: 0x11684CC Offset: 0x11644CC VA: 0x11684CC
	protected static string GYearMonthToString(DateTime value) { }

	// RVA: 0x1168554 Offset: 0x1164554 VA: 0x1168554
	protected static string DateOffsetToString(DateTimeOffset value) { }

	// RVA: 0x11685EC Offset: 0x11645EC VA: 0x11685EC
	protected static string DateTimeOffsetToString(DateTimeOffset value) { }

	// RVA: 0x1168684 Offset: 0x1164684 VA: 0x1168684
	protected static string GDayOffsetToString(DateTimeOffset value) { }

	// RVA: 0x116871C Offset: 0x116471C VA: 0x116871C
	protected static string GMonthOffsetToString(DateTimeOffset value) { }

	// RVA: 0x11687B4 Offset: 0x11647B4 VA: 0x11687B4
	protected static string GMonthDayOffsetToString(DateTimeOffset value) { }

	// RVA: 0x116884C Offset: 0x116484C VA: 0x116884C
	protected static string GYearOffsetToString(DateTimeOffset value) { }

	// RVA: 0x11688E4 Offset: 0x11648E4 VA: 0x11688E4
	protected static string GYearMonthOffsetToString(DateTimeOffset value) { }

	// RVA: 0x116897C Offset: 0x116497C VA: 0x116897C
	protected static string QNameToString(XmlQualifiedName qname, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x1168B90 Offset: 0x1164B90 VA: 0x1168B90
	protected static string TimeToString(DateTime value) { }

	// RVA: 0x1168C18 Offset: 0x1164C18 VA: 0x1168C18
	protected static string TimeOffsetToString(DateTimeOffset value) { }

	// RVA: 0x1168CB0 Offset: 0x1164CB0 VA: 0x1168CB0
	protected static string YearMonthDurationToString(TimeSpan value) { }

	// RVA: 0x1168D10 Offset: 0x1164D10 VA: 0x1168D10
	internal static DateTime DateTimeOffsetToDateTime(DateTimeOffset value) { }

	// RVA: 0x1168D74 Offset: 0x1164D74 VA: 0x1168D74
	internal static int DecimalToInt32(Decimal value) { }

	// RVA: 0x1168F4C Offset: 0x1164F4C VA: 0x1168F4C
	protected static long DecimalToInt64(Decimal value) { }

	// RVA: 0x1169124 Offset: 0x1165124 VA: 0x1169124
	protected static ulong DecimalToUInt64(Decimal value) { }

	// RVA: 0x11692F0 Offset: 0x11652F0 VA: 0x11692F0
	protected static byte Int32ToByte(int value) { }

	// RVA: 0x11693D4 Offset: 0x11653D4 VA: 0x11693D4
	protected static short Int32ToInt16(int value) { }

	// RVA: 0x11694B8 Offset: 0x11654B8 VA: 0x11694B8
	protected static sbyte Int32ToSByte(int value) { }

	// RVA: 0x116959C Offset: 0x116559C VA: 0x116959C
	protected static ushort Int32ToUInt16(int value) { }

	// RVA: 0x1169680 Offset: 0x1165680 VA: 0x1169680
	protected static int Int64ToInt32(long value) { }

	// RVA: 0x1169764 Offset: 0x1165764 VA: 0x1169764
	protected static uint Int64ToUInt32(long value) { }

	// RVA: 0x1169848 Offset: 0x1165848 VA: 0x1169848
	protected static DateTime UntypedAtomicToDateTime(string value) { }

	// RVA: 0x11698C4 Offset: 0x11658C4 VA: 0x11698C4
	protected static DateTimeOffset UntypedAtomicToDateTimeOffset(string value) { }

	// RVA: 0x1169940 Offset: 0x1165940 VA: 0x1169940
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class XmlNumeric10Converter : XmlBaseConverter // TypeDefIndex: 3130
{
	// Methods

	// RVA: 0x1169EC8 Offset: 0x1165EC8 VA: 0x1169EC8
	protected void .ctor(XmlSchemaType schemaType) { }

	// RVA: 0x1169F2C Offset: 0x1165F2C VA: 0x1169F2C
	public static XmlValueConverter Create(XmlSchemaType schemaType) { }

	// RVA: 0x1169F84 Offset: 0x1165F84 VA: 0x1169F84 Slot: 22
	public override Decimal ToDecimal(string value) { }

	// RVA: 0x116A048 Offset: 0x1166048 VA: 0x116A048 Slot: 23
	public override Decimal ToDecimal(object value) { }

	// RVA: 0x116A89C Offset: 0x116689C VA: 0x116A89C Slot: 11
	public override int ToInt32(long value) { }

	// RVA: 0x116A8F0 Offset: 0x11668F0 VA: 0x116A8F0 Slot: 14
	public override int ToInt32(string value) { }

	// RVA: 0x116A9EC Offset: 0x11669EC VA: 0x116A9EC Slot: 15
	public override int ToInt32(object value) { }

	// RVA: 0x116ADD4 Offset: 0x1166DD4 VA: 0x116ADD4 Slot: 17
	public override long ToInt64(int value) { }

	// RVA: 0x116ADDC Offset: 0x1166DDC VA: 0x116ADDC Slot: 20
	public override long ToInt64(string value) { }

	// RVA: 0x116AED8 Offset: 0x1166ED8 VA: 0x116AED8 Slot: 21
	public override long ToInt64(object value) { }

	// RVA: 0x116B2A8 Offset: 0x11672A8 VA: 0x116B2A8 Slot: 46
	public override string ToString(Decimal value) { }

	// RVA: 0x116B364 Offset: 0x1167364 VA: 0x116B364 Slot: 44
	public override string ToString(int value) { }

	// RVA: 0x116B3BC Offset: 0x11673BC VA: 0x116B3BC Slot: 45
	public override string ToString(long value) { }

	// RVA: 0x116B414 Offset: 0x1167414 VA: 0x116B414 Slot: 52
	public override string ToString(object value, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x116B80C Offset: 0x116780C VA: 0x116B80C Slot: 56
	public override object ChangeType(Decimal value, Type destinationType) { }

	// RVA: 0x116C08C Offset: 0x116808C VA: 0x116C08C Slot: 54
	public override object ChangeType(int value, Type destinationType) { }

	// RVA: 0x116C4A8 Offset: 0x11684A8 VA: 0x116C4A8 Slot: 55
	public override object ChangeType(long value, Type destinationType) { }

	// RVA: 0x116C8D0 Offset: 0x11688D0 VA: 0x116C8D0 Slot: 59
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x116CCF0 Offset: 0x1168CF0 VA: 0x116CCF0 Slot: 61
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x116A43C Offset: 0x116643C VA: 0x116A43C
	private object ChangeTypeWildcardDestination(object value, Type destinationType, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x116BC44 Offset: 0x1167C44 VA: 0x116BC44
	private object ChangeTypeWildcardSource(object value, Type destinationType, IXmlNamespaceResolver nsResolver) { }
}


// Namespace: System.Xml.Schema
internal class XmlNumeric2Converter : XmlBaseConverter // TypeDefIndex: 3131
{
	// Methods

	// RVA: 0x116DBDC Offset: 0x1169BDC VA: 0x116DBDC
	protected void .ctor(XmlSchemaType schemaType) { }

	// RVA: 0x116DC44 Offset: 0x1169C44 VA: 0x116DC44
	public static XmlValueConverter Create(XmlSchemaType schemaType) { }

	// RVA: 0x116DC9C Offset: 0x1169C9C VA: 0x116DC9C Slot: 28
	public override double ToDouble(string value) { }

	// RVA: 0x116DD68 Offset: 0x1169D68 VA: 0x116DD68 Slot: 29
	public override double ToDouble(object value) { }

	// RVA: 0x116E0AC Offset: 0x116A0AC VA: 0x116E0AC Slot: 30
	public override float ToSingle(double value) { }

	// RVA: 0x116E0B4 Offset: 0x116A0B4 VA: 0x116E0B4 Slot: 31
	public override float ToSingle(string value) { }

	// RVA: 0x116E180 Offset: 0x116A180 VA: 0x116E180 Slot: 32
	public override float ToSingle(object value) { }

	// RVA: 0x116E4C8 Offset: 0x116A4C8 VA: 0x116E4C8 Slot: 48
	public override string ToString(double value) { }

	// RVA: 0x116E57C Offset: 0x116A57C VA: 0x116E57C Slot: 47
	public override string ToString(float value) { }

	// RVA: 0x116E604 Offset: 0x116A604 VA: 0x116E604 Slot: 52
	public override string ToString(object value, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x116E944 Offset: 0x116A944 VA: 0x116E944 Slot: 57
	public override object ChangeType(double value, Type destinationType) { }

	// RVA: 0x116ECA0 Offset: 0x116ACA0 VA: 0x116ECA0 Slot: 59
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x116F030 Offset: 0x116B030 VA: 0x116F030 Slot: 61
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver) { }
}


// Namespace: System.Xml.Schema
internal class XmlDateTimeConverter : XmlBaseConverter // TypeDefIndex: 3132
{
	// Methods

	// RVA: 0x116F6F8 Offset: 0x116B6F8 VA: 0x116F6F8
	protected void .ctor(XmlSchemaType schemaType) { }

	// RVA: 0x116F760 Offset: 0x116B760 VA: 0x116F760
	public static XmlValueConverter Create(XmlSchemaType schemaType) { }

	// RVA: 0x116F7B8 Offset: 0x116B7B8 VA: 0x116F7B8 Slot: 37
	public override DateTime ToDateTime(DateTimeOffset value) { }

	// RVA: 0x116F820 Offset: 0x116B820 VA: 0x116F820 Slot: 38
	public override DateTime ToDateTime(string value) { }

	// RVA: 0x116FA24 Offset: 0x116BA24 VA: 0x116FA24 Slot: 39
	public override DateTime ToDateTime(object value) { }

	// RVA: 0x116FD84 Offset: 0x116BD84 VA: 0x116FD84 Slot: 40
	public override DateTimeOffset ToDateTimeOffset(DateTime value) { }

	// RVA: 0x116FDAC Offset: 0x116BDAC VA: 0x116FDAC Slot: 41
	public override DateTimeOffset ToDateTimeOffset(string value) { }

	// RVA: 0x116FFB0 Offset: 0x116BFB0 VA: 0x116FFB0 Slot: 42
	public override DateTimeOffset ToDateTimeOffset(object value) { }

	// RVA: 0x117031C Offset: 0x116C31C VA: 0x117031C Slot: 49
	public override string ToString(DateTime value) { }

	// RVA: 0x11704D4 Offset: 0x116C4D4 VA: 0x11704D4 Slot: 50
	public override string ToString(DateTimeOffset value) { }

	// RVA: 0x11706D4 Offset: 0x116C6D4 VA: 0x11706D4 Slot: 52
	public override string ToString(object value, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x1170A14 Offset: 0x116CA14 VA: 0x1170A14 Slot: 58
	public override object ChangeType(DateTime value, Type destinationType) { }

	// RVA: 0x1170D9C Offset: 0x116CD9C VA: 0x1170D9C Slot: 59
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x117112C Offset: 0x116D12C VA: 0x117112C Slot: 61
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver) { }
}


// Namespace: System.Xml.Schema
internal class XmlBooleanConverter : XmlBaseConverter // TypeDefIndex: 3133
{
	// Methods

	// RVA: 0x1171838 Offset: 0x116D838 VA: 0x1171838
	protected void .ctor(XmlSchemaType schemaType) { }

	// RVA: 0x11718A0 Offset: 0x116D8A0 VA: 0x11718A0
	public static XmlValueConverter Create(XmlSchemaType schemaType) { }

	// RVA: 0x11718F8 Offset: 0x116D8F8 VA: 0x11718F8 Slot: 8
	public override bool ToBoolean(string value) { }

	// RVA: 0x117199C Offset: 0x116D99C VA: 0x117199C Slot: 9
	public override bool ToBoolean(object value) { }

	// RVA: 0x1171C7C Offset: 0x116DC7C VA: 0x1171C7C Slot: 43
	public override string ToString(bool value) { }

	// RVA: 0x1171CD4 Offset: 0x116DCD4 VA: 0x1171CD4 Slot: 52
	public override string ToString(object value, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x1171F8C Offset: 0x116DF8C VA: 0x1171F8C Slot: 53
	public override object ChangeType(bool value, Type destinationType) { }

	// RVA: 0x11722AC Offset: 0x116E2AC VA: 0x11722AC Slot: 59
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x11725E0 Offset: 0x116E5E0 VA: 0x11725E0 Slot: 61
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver) { }
}


// Namespace: System.Xml.Schema
internal class XmlMiscConverter : XmlBaseConverter // TypeDefIndex: 3134
{
	// Methods

	// RVA: 0x1172B6C Offset: 0x116EB6C VA: 0x1172B6C
	protected void .ctor(XmlSchemaType schemaType) { }

	// RVA: 0x1172BD4 Offset: 0x116EBD4 VA: 0x1172BD4
	public static XmlValueConverter Create(XmlSchemaType schemaType) { }

	// RVA: 0x1172C2C Offset: 0x116EC2C VA: 0x1172C2C Slot: 52
	public override string ToString(object value, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x11732A4 Offset: 0x116F2A4 VA: 0x11732A4 Slot: 59
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x117390C Offset: 0x116F90C VA: 0x117390C Slot: 61
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x1173168 Offset: 0x116F168 VA: 0x1173168
	private object ChangeTypeWildcardDestination(object value, Type destinationType, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x11737A8 Offset: 0x116F7A8 VA: 0x11737A8
	private object ChangeTypeWildcardSource(object value, Type destinationType, IXmlNamespaceResolver nsResolver) { }
}


// Namespace: System.Xml.Schema
internal class XmlStringConverter : XmlBaseConverter // TypeDefIndex: 3135
{
	// Methods

	// RVA: 0x1174638 Offset: 0x1170638 VA: 0x1174638
	protected void .ctor(XmlSchemaType schemaType) { }

	// RVA: 0x11746A0 Offset: 0x11706A0 VA: 0x11746A0
	public static XmlValueConverter Create(XmlSchemaType schemaType) { }

	// RVA: 0x11746F8 Offset: 0x11706F8 VA: 0x11746F8 Slot: 52
	public override string ToString(object value, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x11748F8 Offset: 0x11708F8 VA: 0x11748F8 Slot: 59
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x1174B78 Offset: 0x1170B78 VA: 0x1174B78 Slot: 61
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver) { }
}


// Namespace: System.Xml.Schema
internal class XmlUntypedConverter : XmlListConverter // TypeDefIndex: 3136
{
	// Fields
	private bool allowListToList; // 0x30
	public static readonly XmlValueConverter Untyped; // 0x0
	public static readonly XmlValueConverter UntypedList; // 0x8

	// Methods

	// RVA: 0x1174F9C Offset: 0x1170F9C VA: 0x1174F9C
	protected void .ctor() { }

	// RVA: 0x1175064 Offset: 0x1171064 VA: 0x1175064
	protected void .ctor(XmlUntypedConverter atomicConverter, bool allowListToList) { }

	// RVA: 0x1175168 Offset: 0x1171168 VA: 0x1175168 Slot: 8
	public override bool ToBoolean(string value) { }

	// RVA: 0x117520C Offset: 0x117120C VA: 0x117520C Slot: 9
	public override bool ToBoolean(object value) { }

	// RVA: 0x1175514 Offset: 0x1171514 VA: 0x1175514 Slot: 38
	public override DateTime ToDateTime(string value) { }

	// RVA: 0x11755B8 Offset: 0x11715B8 VA: 0x11755B8 Slot: 39
	public override DateTime ToDateTime(object value) { }

	// RVA: 0x117576C Offset: 0x117176C VA: 0x117576C Slot: 41
	public override DateTimeOffset ToDateTimeOffset(string value) { }

	// RVA: 0x1175810 Offset: 0x1171810 VA: 0x1175810 Slot: 42
	public override DateTimeOffset ToDateTimeOffset(object value) { }

	// RVA: 0x11759C4 Offset: 0x11719C4 VA: 0x11759C4 Slot: 22
	public override Decimal ToDecimal(string value) { }

	// RVA: 0x1175A68 Offset: 0x1171A68 VA: 0x1175A68 Slot: 23
	public override Decimal ToDecimal(object value) { }

	// RVA: 0x1175C34 Offset: 0x1171C34 VA: 0x1175C34 Slot: 28
	public override double ToDouble(string value) { }

	// RVA: 0x1175CD8 Offset: 0x1171CD8 VA: 0x1175CD8 Slot: 29
	public override double ToDouble(object value) { }

	// RVA: 0x1175EA4 Offset: 0x1171EA4 VA: 0x1175EA4 Slot: 14
	public override int ToInt32(string value) { }

	// RVA: 0x1175F48 Offset: 0x1171F48 VA: 0x1175F48 Slot: 15
	public override int ToInt32(object value) { }

	// RVA: 0x1176114 Offset: 0x1172114 VA: 0x1176114 Slot: 20
	public override long ToInt64(string value) { }

	// RVA: 0x11761B8 Offset: 0x11721B8 VA: 0x11761B8 Slot: 21
	public override long ToInt64(object value) { }

	// RVA: 0x1176384 Offset: 0x1172384 VA: 0x1176384 Slot: 31
	public override float ToSingle(string value) { }

	// RVA: 0x1176428 Offset: 0x1172428 VA: 0x1176428 Slot: 32
	public override float ToSingle(object value) { }

	// RVA: 0x11765F4 Offset: 0x11725F4 VA: 0x11765F4 Slot: 43
	public override string ToString(bool value) { }

	// RVA: 0x117664C Offset: 0x117264C VA: 0x117664C Slot: 49
	public override string ToString(DateTime value) { }

	// RVA: 0x11766A4 Offset: 0x11726A4 VA: 0x11766A4 Slot: 50
	public override string ToString(DateTimeOffset value) { }

	// RVA: 0x117670C Offset: 0x117270C VA: 0x117670C Slot: 46
	public override string ToString(Decimal value) { }

	// RVA: 0x1176774 Offset: 0x1172774 VA: 0x1176774 Slot: 48
	public override string ToString(double value) { }

	// RVA: 0x11767D4 Offset: 0x11727D4 VA: 0x11767D4 Slot: 44
	public override string ToString(int value) { }

	// RVA: 0x117682C Offset: 0x117282C VA: 0x117682C Slot: 45
	public override string ToString(long value) { }

	// RVA: 0x1176884 Offset: 0x1172884 VA: 0x1176884 Slot: 47
	public override string ToString(float value) { }

	// RVA: 0x11768E4 Offset: 0x11728E4 VA: 0x11768E4 Slot: 52
	public override string ToString(object value, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x1177690 Offset: 0x1173690 VA: 0x1177690 Slot: 53
	public override object ChangeType(bool value, Type destinationType) { }

	// RVA: 0x1177A00 Offset: 0x1173A00 VA: 0x1177A00 Slot: 58
	public override object ChangeType(DateTime value, Type destinationType) { }

	// RVA: 0x1177BC8 Offset: 0x1173BC8 VA: 0x1177BC8 Slot: 56
	public override object ChangeType(Decimal value, Type destinationType) { }

	// RVA: 0x1177DD0 Offset: 0x1173DD0 VA: 0x1177DD0 Slot: 57
	public override object ChangeType(double value, Type destinationType) { }

	// RVA: 0x1177FAC Offset: 0x1173FAC VA: 0x1177FAC Slot: 54
	public override object ChangeType(int value, Type destinationType) { }

	// RVA: 0x1178188 Offset: 0x1174188 VA: 0x1178188 Slot: 55
	public override object ChangeType(long value, Type destinationType) { }

	// RVA: 0x1178364 Offset: 0x1174364 VA: 0x1178364 Slot: 59
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x1178FB4 Offset: 0x1174FB4 VA: 0x1178FB4 Slot: 61
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x11753D8 Offset: 0x11713D8 VA: 0x11753D8
	private object ChangeTypeWildcardDestination(object value, Type destinationType, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x1177870 Offset: 0x1173870 VA: 0x1177870
	private object ChangeTypeWildcardSource(object value, Type destinationType, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x117A590 Offset: 0x1176590 VA: 0x117A590 Slot: 62
	protected override object ChangeListType(object value, Type destinationType, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x117A890 Offset: 0x1176890 VA: 0x117A890
	private bool SupportsType(Type clrType) { }

	// RVA: 0x117B960 Offset: 0x1177960 VA: 0x117B960
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class XmlAnyConverter : XmlBaseConverter // TypeDefIndex: 3137
{
	// Fields
	public static readonly XmlValueConverter Item; // 0x0
	public static readonly XmlValueConverter AnyAtomic; // 0x8

	// Methods

	// RVA: 0x117BA04 Offset: 0x1177A04 VA: 0x117BA04
	protected void .ctor(XmlTypeCode typeCode) { }

	// RVA: 0x117BA6C Offset: 0x1177A6C VA: 0x117BA6C Slot: 9
	public override bool ToBoolean(object value) { }

	// RVA: 0x117BD58 Offset: 0x1177D58 VA: 0x117BD58 Slot: 39
	public override DateTime ToDateTime(object value) { }

	// RVA: 0x117BF08 Offset: 0x1177F08 VA: 0x117BF08 Slot: 42
	public override DateTimeOffset ToDateTimeOffset(object value) { }

	// RVA: 0x117C0C0 Offset: 0x11780C0 VA: 0x117C0C0 Slot: 23
	public override Decimal ToDecimal(object value) { }

	// RVA: 0x117C278 Offset: 0x1178278 VA: 0x117C278 Slot: 29
	public override double ToDouble(object value) { }

	// RVA: 0x117C428 Offset: 0x1178428 VA: 0x117C428 Slot: 15
	public override int ToInt32(object value) { }

	// RVA: 0x117C5D8 Offset: 0x11785D8 VA: 0x117C5D8 Slot: 21
	public override long ToInt64(object value) { }

	// RVA: 0x117C788 Offset: 0x1178788 VA: 0x117C788 Slot: 32
	public override float ToSingle(object value) { }

	// RVA: 0x117C940 Offset: 0x1178940 VA: 0x117C940 Slot: 53
	public override object ChangeType(bool value, Type destinationType) { }

	// RVA: 0x117CC94 Offset: 0x1178C94 VA: 0x117CC94 Slot: 58
	public override object ChangeType(DateTime value, Type destinationType) { }

	// RVA: 0x117CE80 Offset: 0x1178E80 VA: 0x117CE80 Slot: 56
	public override object ChangeType(Decimal value, Type destinationType) { }

	// RVA: 0x117D0BC Offset: 0x11790BC VA: 0x117D0BC Slot: 57
	public override object ChangeType(double value, Type destinationType) { }

	// RVA: 0x117D2A8 Offset: 0x11792A8 VA: 0x117D2A8 Slot: 54
	public override object ChangeType(int value, Type destinationType) { }

	// RVA: 0x117D494 Offset: 0x1179494 VA: 0x117D494 Slot: 55
	public override object ChangeType(long value, Type destinationType) { }

	// RVA: 0x117D680 Offset: 0x1179680 VA: 0x117D680 Slot: 59
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x117D878 Offset: 0x1179878 VA: 0x117D878 Slot: 61
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x117BC1C Offset: 0x1177C1C VA: 0x117BC1C
	private object ChangeTypeWildcardDestination(object value, Type destinationType, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x117CB30 Offset: 0x1178B30 VA: 0x117CB30
	private object ChangeTypeWildcardSource(object value, Type destinationType, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x117ED34 Offset: 0x117AD34 VA: 0x117ED34
	private XPathNavigator ToNavigator(XPathNavigator nav) { }

	// RVA: 0x117EDBC Offset: 0x117ADBC VA: 0x117EDBC
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class XmlAnyListConverter : XmlListConverter // TypeDefIndex: 3138
{
	// Fields
	public static readonly XmlValueConverter ItemList; // 0x0
	public static readonly XmlValueConverter AnyAtomicList; // 0x8

	// Methods

	// RVA: 0x117EE38 Offset: 0x117AE38 VA: 0x117EE38
	protected void .ctor(XmlBaseConverter atomicConverter) { }

	// RVA: 0x117EEAC Offset: 0x117AEAC VA: 0x117EEAC Slot: 61
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x117F0FC Offset: 0x117B0FC VA: 0x117F0FC
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal class XmlListConverter : XmlBaseConverter // TypeDefIndex: 3139
{
	// Fields
	protected XmlValueConverter atomicConverter; // 0x28

	// Methods

	// RVA: 0x117EE3C Offset: 0x117AE3C VA: 0x117EE3C
	protected void .ctor(XmlBaseConverter atomicConverter) { }

	// RVA: 0x11750F0 Offset: 0x11710F0 VA: 0x11750F0
	protected void .ctor(XmlBaseConverter atomicConverter, Type clrTypeDefault) { }

	// RVA: 0x1174FFC Offset: 0x1170FFC VA: 0x1174FFC
	protected void .ctor(XmlSchemaType schemaType) { }

	// RVA: 0x117F240 Offset: 0x117B240 VA: 0x117F240
	public static XmlValueConverter Create(XmlValueConverter atomicConverter) { }

	// RVA: 0x117F3EC Offset: 0x117B3EC VA: 0x117F3EC Slot: 61
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x117ADC0 Offset: 0x1176DC0 VA: 0x117ADC0 Slot: 62
	protected override object ChangeListType(object value, Type destinationType, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x117F4EC Offset: 0x117B4EC VA: 0x117F4EC
	private bool IsListType(Type type) { }

	// RVA: -1 Offset: -1
	private T[] ToArray<T>(object list, IXmlNamespaceResolver nsResolver) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB15B8 Offset: 0xBAD5B8 VA: 0xBB15B8
	|-XmlListConverter.ToArray<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x117FD40 Offset: 0x117BD40 VA: 0x117FD40
	private IList ToList(object list, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x117FC98 Offset: 0x117BC98 VA: 0x117FC98
	private List<string> StringAsList(string value) { }

	// RVA: 0x117F8E0 Offset: 0x117B8E0 VA: 0x117F8E0
	private string ListAsString(IEnumerable list, IXmlNamespaceResolver nsResolver) { }

	// RVA: 0x117F67C Offset: 0x117B67C VA: 0x117F67C
	private Exception CreateInvalidClrMappingException(Type sourceType, Type destinationType) { }
}


// Namespace: System.Xml.Schema
internal class XmlUnionConverter : XmlBaseConverter // TypeDefIndex: 3140
{
	// Fields
	private XmlValueConverter[] converters; // 0x28
	private bool hasAtomicMember; // 0x30
	private bool hasListMember; // 0x31

	// Methods

	// RVA: 0x1180344 Offset: 0x117C344 VA: 0x1180344
	protected void .ctor(XmlSchemaType schemaType) { }

	// RVA: 0x1180588 Offset: 0x117C588 VA: 0x1180588
	public static XmlValueConverter Create(XmlSchemaType schemaType) { }

	// RVA: 0x11805E0 Offset: 0x117C5E0 VA: 0x11805E0 Slot: 61
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver) { }
}


// Namespace: 
private enum XsdBuilder.State // TypeDefIndex: 3141
{
	// Fields
	public int value__; // 0x0
	public const XsdBuilder.State Root = 0;
	public const XsdBuilder.State Schema = 1;
	public const XsdBuilder.State Annotation = 2;
	public const XsdBuilder.State Include = 3;
	public const XsdBuilder.State Import = 4;
	public const XsdBuilder.State Element = 5;
	public const XsdBuilder.State Attribute = 6;
	public const XsdBuilder.State AttributeGroup = 7;
	public const XsdBuilder.State AttributeGroupRef = 8;
	public const XsdBuilder.State AnyAttribute = 9;
	public const XsdBuilder.State Group = 10;
	public const XsdBuilder.State GroupRef = 11;
	public const XsdBuilder.State All = 12;
	public const XsdBuilder.State Choice = 13;
	public const XsdBuilder.State Sequence = 14;
	public const XsdBuilder.State Any = 15;
	public const XsdBuilder.State Notation = 16;
	public const XsdBuilder.State SimpleType = 17;
	public const XsdBuilder.State ComplexType = 18;
	public const XsdBuilder.State ComplexContent = 19;
	public const XsdBuilder.State ComplexContentRestriction = 20;
	public const XsdBuilder.State ComplexContentExtension = 21;
	public const XsdBuilder.State SimpleContent = 22;
	public const XsdBuilder.State SimpleContentExtension = 23;
	public const XsdBuilder.State SimpleContentRestriction = 24;
	public const XsdBuilder.State SimpleTypeUnion = 25;
	public const XsdBuilder.State SimpleTypeList = 26;
	public const XsdBuilder.State SimpleTypeRestriction = 27;
	public const XsdBuilder.State Unique = 28;
	public const XsdBuilder.State Key = 29;
	public const XsdBuilder.State KeyRef = 30;
	public const XsdBuilder.State Selector = 31;
	public const XsdBuilder.State Field = 32;
	public const XsdBuilder.State MinExclusive = 33;
	public const XsdBuilder.State MinInclusive = 34;
	public const XsdBuilder.State MaxExclusive = 35;
	public const XsdBuilder.State MaxInclusive = 36;
	public const XsdBuilder.State TotalDigits = 37;
	public const XsdBuilder.State FractionDigits = 38;
	public const XsdBuilder.State Length = 39;
	public const XsdBuilder.State MinLength = 40;
	public const XsdBuilder.State MaxLength = 41;
	public const XsdBuilder.State Enumeration = 42;
	public const XsdBuilder.State Pattern = 43;
	public const XsdBuilder.State WhiteSpace = 44;
	public const XsdBuilder.State AppInfo = 45;
	public const XsdBuilder.State Documentation = 46;
	public const XsdBuilder.State Redefine = 47;
}


// Namespace: 
private sealed class XsdBuilder.XsdBuildFunction : MulticastDelegate // TypeDefIndex: 3142
{
	// Methods

	// RVA: 0x118B05C Offset: 0x118705C VA: 0x118B05C
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x118B0FC Offset: 0x11870FC VA: 0x118B0FC Slot: 12
	public virtual void Invoke(XsdBuilder builder, string value) { }
}


// Namespace: 
private sealed class XsdBuilder.XsdInitFunction : MulticastDelegate // TypeDefIndex: 3143
{
	// Methods

	// RVA: 0x118B110 Offset: 0x1187110 VA: 0x118B110
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x118B1B0 Offset: 0x11871B0 VA: 0x118B1B0 Slot: 12
	public virtual void Invoke(XsdBuilder builder, string value) { }
}


// Namespace: 
private sealed class XsdBuilder.XsdEndChildFunction : MulticastDelegate // TypeDefIndex: 3144
{
	// Methods

	// RVA: 0x118B1C4 Offset: 0x11871C4 VA: 0x118B1C4
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x118B260 Offset: 0x1187260 VA: 0x118B260 Slot: 12
	public virtual void Invoke(XsdBuilder builder) { }
}


// Namespace: 
private sealed class XsdBuilder.XsdAttributeEntry // TypeDefIndex: 3145
{
	// Fields
	public SchemaNames.Token Attribute; // 0x10
	public XsdBuilder.XsdBuildFunction BuildFunc; // 0x18

	// Methods

	// RVA: 0x118B274 Offset: 0x1187274 VA: 0x118B274
	public void .ctor(SchemaNames.Token a, XsdBuilder.XsdBuildFunction build) { }
}


// Namespace: 
private sealed class XsdBuilder.XsdEntry // TypeDefIndex: 3146
{
	// Fields
	public SchemaNames.Token Name; // 0x10
	public XsdBuilder.State CurrentState; // 0x14
	public XsdBuilder.State[] NextStates; // 0x18
	public XsdBuilder.XsdAttributeEntry[] Attributes; // 0x20
	public XsdBuilder.XsdInitFunction InitFunc; // 0x28
	public XsdBuilder.XsdEndChildFunction EndChildFunc; // 0x30
	public bool ParseContent; // 0x38

	// Methods

	// RVA: 0x118B2A4 Offset: 0x11872A4 VA: 0x118B2A4
	public void .ctor(SchemaNames.Token n, XsdBuilder.State state, XsdBuilder.State[] nextStates, XsdBuilder.XsdAttributeEntry[] attributes, XsdBuilder.XsdInitFunction init, XsdBuilder.XsdEndChildFunction end, bool parseContent) { }
}


// Namespace: 
private class XsdBuilder.BuilderNamespaceManager : XmlNamespaceManager // TypeDefIndex: 3147
{
	// Fields
	private XmlNamespaceManager nsMgr; // 0x50
	private XmlReader reader; // 0x58

	// Methods

	// RVA: 0x118B308 Offset: 0x1187308 VA: 0x118B308
	public void .ctor(XmlNamespaceManager nsMgr, XmlReader reader) { }

	// RVA: 0x118B334 Offset: 0x1187334 VA: 0x118B334 Slot: 15
	public override string LookupNamespace(string prefix) { }
}


// Namespace: System.Xml.Schema
internal sealed class XsdBuilder : SchemaBuilder // TypeDefIndex: 3148
{
	// Fields
	private static readonly XsdBuilder.State[] SchemaElement; // 0x0
	private static readonly XsdBuilder.State[] SchemaSubelements; // 0x8
	private static readonly XsdBuilder.State[] AttributeSubelements; // 0x10
	private static readonly XsdBuilder.State[] ElementSubelements; // 0x18
	private static readonly XsdBuilder.State[] ComplexTypeSubelements; // 0x20
	private static readonly XsdBuilder.State[] SimpleContentSubelements; // 0x28
	private static readonly XsdBuilder.State[] SimpleContentExtensionSubelements; // 0x30
	private static readonly XsdBuilder.State[] SimpleContentRestrictionSubelements; // 0x38
	private static readonly XsdBuilder.State[] ComplexContentSubelements; // 0x40
	private static readonly XsdBuilder.State[] ComplexContentExtensionSubelements; // 0x48
	private static readonly XsdBuilder.State[] ComplexContentRestrictionSubelements; // 0x50
	private static readonly XsdBuilder.State[] SimpleTypeSubelements; // 0x58
	private static readonly XsdBuilder.State[] SimpleTypeRestrictionSubelements; // 0x60
	private static readonly XsdBuilder.State[] SimpleTypeListSubelements; // 0x68
	private static readonly XsdBuilder.State[] SimpleTypeUnionSubelements; // 0x70
	private static readonly XsdBuilder.State[] RedefineSubelements; // 0x78
	private static readonly XsdBuilder.State[] AttributeGroupSubelements; // 0x80
	private static readonly XsdBuilder.State[] GroupSubelements; // 0x88
	private static readonly XsdBuilder.State[] AllSubelements; // 0x90
	private static readonly XsdBuilder.State[] ChoiceSequenceSubelements; // 0x98
	private static readonly XsdBuilder.State[] IdentityConstraintSubelements; // 0xA0
	private static readonly XsdBuilder.State[] AnnotationSubelements; // 0xA8
	private static readonly XsdBuilder.State[] AnnotatedSubelements; // 0xB0
	private static readonly XsdBuilder.XsdAttributeEntry[] SchemaAttributes; // 0xB8
	private static readonly XsdBuilder.XsdAttributeEntry[] AttributeAttributes; // 0xC0
	private static readonly XsdBuilder.XsdAttributeEntry[] ElementAttributes; // 0xC8
	private static readonly XsdBuilder.XsdAttributeEntry[] ComplexTypeAttributes; // 0xD0
	private static readonly XsdBuilder.XsdAttributeEntry[] SimpleContentAttributes; // 0xD8
	private static readonly XsdBuilder.XsdAttributeEntry[] SimpleContentExtensionAttributes; // 0xE0
	private static readonly XsdBuilder.XsdAttributeEntry[] SimpleContentRestrictionAttributes; // 0xE8
	private static readonly XsdBuilder.XsdAttributeEntry[] ComplexContentAttributes; // 0xF0
	private static readonly XsdBuilder.XsdAttributeEntry[] ComplexContentExtensionAttributes; // 0xF8
	private static readonly XsdBuilder.XsdAttributeEntry[] ComplexContentRestrictionAttributes; // 0x100
	private static readonly XsdBuilder.XsdAttributeEntry[] SimpleTypeAttributes; // 0x108
	private static readonly XsdBuilder.XsdAttributeEntry[] SimpleTypeRestrictionAttributes; // 0x110
	private static readonly XsdBuilder.XsdAttributeEntry[] SimpleTypeUnionAttributes; // 0x118
	private static readonly XsdBuilder.XsdAttributeEntry[] SimpleTypeListAttributes; // 0x120
	private static readonly XsdBuilder.XsdAttributeEntry[] AttributeGroupAttributes; // 0x128
	private static readonly XsdBuilder.XsdAttributeEntry[] AttributeGroupRefAttributes; // 0x130
	private static readonly XsdBuilder.XsdAttributeEntry[] GroupAttributes; // 0x138
	private static readonly XsdBuilder.XsdAttributeEntry[] GroupRefAttributes; // 0x140
	private static readonly XsdBuilder.XsdAttributeEntry[] ParticleAttributes; // 0x148
	private static readonly XsdBuilder.XsdAttributeEntry[] AnyAttributes; // 0x150
	private static readonly XsdBuilder.XsdAttributeEntry[] IdentityConstraintAttributes; // 0x158
	private static readonly XsdBuilder.XsdAttributeEntry[] SelectorAttributes; // 0x160
	private static readonly XsdBuilder.XsdAttributeEntry[] FieldAttributes; // 0x168
	private static readonly XsdBuilder.XsdAttributeEntry[] NotationAttributes; // 0x170
	private static readonly XsdBuilder.XsdAttributeEntry[] IncludeAttributes; // 0x178
	private static readonly XsdBuilder.XsdAttributeEntry[] ImportAttributes; // 0x180
	private static readonly XsdBuilder.XsdAttributeEntry[] FacetAttributes; // 0x188
	private static readonly XsdBuilder.XsdAttributeEntry[] AnyAttributeAttributes; // 0x190
	private static readonly XsdBuilder.XsdAttributeEntry[] DocumentationAttributes; // 0x198
	private static readonly XsdBuilder.XsdAttributeEntry[] AppinfoAttributes; // 0x1A0
	private static readonly XsdBuilder.XsdAttributeEntry[] RedefineAttributes; // 0x1A8
	private static readonly XsdBuilder.XsdAttributeEntry[] AnnotationAttributes; // 0x1B0
	private static readonly XsdBuilder.XsdEntry[] SchemaEntries; // 0x1B8
	private static readonly int[] DerivationMethodValues; // 0x1C0
	private static readonly string[] DerivationMethodStrings; // 0x1C8
	private static readonly string[] FormStringValues; // 0x1D0
	private static readonly string[] UseStringValues; // 0x1D8
	private static readonly string[] ProcessContentsStringValues; // 0x1E0
	private XmlReader reader; // 0x10
	private PositionInfo positionInfo; // 0x18
	private XsdBuilder.XsdEntry currentEntry; // 0x20
	private XsdBuilder.XsdEntry nextEntry; // 0x28
	private bool hasChild; // 0x30
	private HWStack stateHistory; // 0x38
	private Stack containerStack; // 0x40
	private XmlNameTable nameTable; // 0x48
	private SchemaNames schemaNames; // 0x50
	private XmlNamespaceManager namespaceManager; // 0x58
	private bool canIncludeImport; // 0x60
	private XmlSchema schema; // 0x68
	private XmlSchemaObject xso; // 0x70
	private XmlSchemaElement element; // 0x78
	private XmlSchemaAny anyElement; // 0x80
	private XmlSchemaAttribute attribute; // 0x88
	private XmlSchemaAnyAttribute anyAttribute; // 0x90
	private XmlSchemaComplexType complexType; // 0x98
	private XmlSchemaSimpleType simpleType; // 0xA0
	private XmlSchemaComplexContent complexContent; // 0xA8
	private XmlSchemaComplexContentExtension complexContentExtension; // 0xB0
	private XmlSchemaComplexContentRestriction complexContentRestriction; // 0xB8
	private XmlSchemaSimpleContent simpleContent; // 0xC0
	private XmlSchemaSimpleContentExtension simpleContentExtension; // 0xC8
	private XmlSchemaSimpleContentRestriction simpleContentRestriction; // 0xD0
	private XmlSchemaSimpleTypeUnion simpleTypeUnion; // 0xD8
	private XmlSchemaSimpleTypeList simpleTypeList; // 0xE0
	private XmlSchemaSimpleTypeRestriction simpleTypeRestriction; // 0xE8
	private XmlSchemaGroup group; // 0xF0
	private XmlSchemaGroupRef groupRef; // 0xF8
	private XmlSchemaAll all; // 0x100
	private XmlSchemaChoice choice; // 0x108
	private XmlSchemaSequence sequence; // 0x110
	private XmlSchemaParticle particle; // 0x118
	private XmlSchemaAttributeGroup attributeGroup; // 0x120
	private XmlSchemaAttributeGroupRef attributeGroupRef; // 0x128
	private XmlSchemaNotation notation; // 0x130
	private XmlSchemaIdentityConstraint identityConstraint; // 0x138
	private XmlSchemaXPath xpath; // 0x140
	private XmlSchemaInclude include; // 0x148
	private XmlSchemaImport import; // 0x150
	private XmlSchemaAnnotation annotation; // 0x158
	private XmlSchemaAppInfo appInfo; // 0x160
	private XmlSchemaDocumentation documentation; // 0x168
	private XmlSchemaFacet facet; // 0x170
	private XmlNode[] markup; // 0x178
	private XmlSchemaRedefine redefine; // 0x180
	private ValidationEventHandler validationEventHandler; // 0x188
	private ArrayList unhandledAttributes; // 0x190
	private Hashtable namespaces; // 0x198

	// Properties
	private SchemaNames.Token CurrentElement { get; }
	private SchemaNames.Token ParentElement { get; }
	private XmlSchemaObject ParentContainer { get; }

	// Methods

	// RVA: 0x11809F4 Offset: 0x117C9F4 VA: 0x11809F4
	internal void .ctor(XmlReader reader, XmlNamespaceManager curmgr, XmlSchema schema, XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventhandler) { }

	// RVA: 0x1180BA8 Offset: 0x117CBA8 VA: 0x1180BA8 Slot: 4
	internal override bool ProcessElement(string prefix, string name, string ns) { }

	// RVA: 0x1181060 Offset: 0x117D060 VA: 0x1181060 Slot: 5
	internal override void ProcessAttribute(string prefix, string name, string ns, string value) { }

	// RVA: 0x11815B4 Offset: 0x117D5B4 VA: 0x11815B4 Slot: 6
	internal override bool IsContentParsed() { }

	// RVA: 0x11815D0 Offset: 0x117D5D0 VA: 0x11815D0 Slot: 7
	internal override void ProcessMarkup(XmlNode[] markup) { }

	// RVA: 0x11815D8 Offset: 0x117D5D8 VA: 0x11815D8 Slot: 8
	internal override void ProcessCData(string value) { }

	// RVA: 0x1181630 Offset: 0x117D630 VA: 0x1181630 Slot: 9
	internal override void StartChildren() { }

	// RVA: 0x11817B4 Offset: 0x117D7B4 VA: 0x11817B4 Slot: 10
	internal override void EndChildren() { }

	// RVA: 0x1180E1C Offset: 0x117CE1C VA: 0x1180E1C
	private void Push() { }

	// RVA: 0x11817F0 Offset: 0x117D7F0 VA: 0x11817F0
	private void Pop() { }

	// RVA: 0x11824E8 Offset: 0x117E4E8 VA: 0x11824E8
	private SchemaNames.Token get_CurrentElement() { }

	// RVA: 0x1182504 Offset: 0x117E504 VA: 0x1182504
	private SchemaNames.Token get_ParentElement() { }

	// RVA: 0x118257C Offset: 0x117E57C VA: 0x118257C
	private XmlSchemaObject get_ParentContainer() { }

	// RVA: 0x11818AC Offset: 0x117D8AC VA: 0x11818AC
	private XmlSchemaObject GetContainer(XsdBuilder.State state) { }

	// RVA: 0x11819E4 Offset: 0x117D9E4 VA: 0x11819E4
	private void SetContainer(XsdBuilder.State state, object container) { }

	// RVA: 0x118260C Offset: 0x117E60C VA: 0x118260C
	private static void BuildAnnotated_Id(XsdBuilder builder, string value) { }

	// RVA: 0x1182630 Offset: 0x117E630 VA: 0x1182630
	private static void BuildSchema_AttributeFormDefault(XsdBuilder builder, string value) { }

	// RVA: 0x11827A4 Offset: 0x117E7A4 VA: 0x11827A4
	private static void BuildSchema_ElementFormDefault(XsdBuilder builder, string value) { }

	// RVA: 0x1182844 Offset: 0x117E844 VA: 0x1182844
	private static void BuildSchema_TargetNamespace(XsdBuilder builder, string value) { }

	// RVA: 0x1182864 Offset: 0x117E864 VA: 0x1182864
	private static void BuildSchema_Version(XsdBuilder builder, string value) { }

	// RVA: 0x1182884 Offset: 0x117E884 VA: 0x1182884
	private static void BuildSchema_FinalDefault(XsdBuilder builder, string value) { }

	// RVA: 0x1182B40 Offset: 0x117EB40 VA: 0x1182B40
	private static void BuildSchema_BlockDefault(XsdBuilder builder, string value) { }

	// RVA: 0x1182BA8 Offset: 0x117EBA8 VA: 0x1182BA8
	private static void InitSchema(XsdBuilder builder, string value) { }

	// RVA: 0x1182BCC Offset: 0x117EBCC VA: 0x1182BCC
	private static void InitInclude(XsdBuilder builder, string value) { }

	// RVA: 0x1182C74 Offset: 0x117EC74 VA: 0x1182C74
	private static void BuildInclude_SchemaLocation(XsdBuilder builder, string value) { }

	// RVA: 0x1182C94 Offset: 0x117EC94 VA: 0x1182C94
	private static void InitImport(XsdBuilder builder, string value) { }

	// RVA: 0x1182D3C Offset: 0x117ED3C VA: 0x1182D3C
	private static void BuildImport_Namespace(XsdBuilder builder, string value) { }

	// RVA: 0x1182D5C Offset: 0x117ED5C VA: 0x1182D5C
	private static void BuildImport_SchemaLocation(XsdBuilder builder, string value) { }

	// RVA: 0x1182D7C Offset: 0x117ED7C VA: 0x1182D7C
	private static void InitRedefine(XsdBuilder builder, string value) { }

	// RVA: 0x1182E24 Offset: 0x117EE24 VA: 0x1182E24
	private static void BuildRedefine_SchemaLocation(XsdBuilder builder, string value) { }

	// RVA: 0x1182E44 Offset: 0x117EE44 VA: 0x1182E44
	private static void EndRedefine(XsdBuilder builder) { }

	// RVA: 0x1182E60 Offset: 0x117EE60 VA: 0x1182E60
	private static void InitAttribute(XsdBuilder builder, string value) { }

	// RVA: 0x1183134 Offset: 0x117F134 VA: 0x1183134
	private static void BuildAttribute_Default(XsdBuilder builder, string value) { }

	// RVA: 0x1183154 Offset: 0x117F154 VA: 0x1183154
	private static void BuildAttribute_Fixed(XsdBuilder builder, string value) { }

	// RVA: 0x1183174 Offset: 0x117F174 VA: 0x1183174
	private static void BuildAttribute_Form(XsdBuilder builder, string value) { }

	// RVA: 0x1183214 Offset: 0x117F214 VA: 0x1183214
	private static void BuildAttribute_Use(XsdBuilder builder, string value) { }

	// RVA: 0x11832B4 Offset: 0x117F2B4 VA: 0x11832B4
	private static void BuildAttribute_Ref(XsdBuilder builder, string value) { }

	// RVA: 0x1183488 Offset: 0x117F488 VA: 0x1183488
	private static void BuildAttribute_Name(XsdBuilder builder, string value) { }

	// RVA: 0x11834A8 Offset: 0x117F4A8 VA: 0x11834A8
	private static void BuildAttribute_Type(XsdBuilder builder, string value) { }

	// RVA: 0x1183518 Offset: 0x117F518 VA: 0x1183518
	private static void InitElement(XsdBuilder builder, string value) { }

	// RVA: 0x11835FC Offset: 0x117F5FC VA: 0x11835FC
	private static void BuildElement_Abstract(XsdBuilder builder, string value) { }

	// RVA: 0x1183778 Offset: 0x117F778 VA: 0x1183778
	private static void BuildElement_Block(XsdBuilder builder, string value) { }

	// RVA: 0x11837E0 Offset: 0x117F7E0 VA: 0x11837E0
	private static void BuildElement_Default(XsdBuilder builder, string value) { }

	// RVA: 0x1183800 Offset: 0x117F800 VA: 0x1183800
	private static void BuildElement_Form(XsdBuilder builder, string value) { }

	// RVA: 0x11838A0 Offset: 0x117F8A0 VA: 0x11838A0
	private static void BuildElement_SubstitutionGroup(XsdBuilder builder, string value) { }

	// RVA: 0x1183910 Offset: 0x117F910 VA: 0x1183910
	private static void BuildElement_Final(XsdBuilder builder, string value) { }

	// RVA: 0x1183978 Offset: 0x117F978 VA: 0x1183978
	private static void BuildElement_Fixed(XsdBuilder builder, string value) { }

	// RVA: 0x1183998 Offset: 0x117F998 VA: 0x1183998
	private static void BuildElement_MaxOccurs(XsdBuilder builder, string value) { }

	// RVA: 0x1183A74 Offset: 0x117FA74 VA: 0x1183A74
	private static void BuildElement_MinOccurs(XsdBuilder builder, string value) { }

	// RVA: 0x1183B50 Offset: 0x117FB50 VA: 0x1183B50
	private static void BuildElement_Name(XsdBuilder builder, string value) { }

	// RVA: 0x1183B70 Offset: 0x117FB70 VA: 0x1183B70
	private static void BuildElement_Nillable(XsdBuilder builder, string value) { }

	// RVA: 0x1183BE0 Offset: 0x117FBE0 VA: 0x1183BE0
	private static void BuildElement_Ref(XsdBuilder builder, string value) { }

	// RVA: 0x1183C50 Offset: 0x117FC50 VA: 0x1183C50
	private static void BuildElement_Type(XsdBuilder builder, string value) { }

	// RVA: 0x1183CC0 Offset: 0x117FCC0 VA: 0x1183CC0
	private static void InitSimpleType(XsdBuilder builder, string value) { }

	// RVA: 0x1183FC0 Offset: 0x117FFC0 VA: 0x1183FC0
	private static void BuildSimpleType_Name(XsdBuilder builder, string value) { }

	// RVA: 0x1183FE0 Offset: 0x117FFE0 VA: 0x1183FE0
	private static void BuildSimpleType_Final(XsdBuilder builder, string value) { }

	// RVA: 0x1184048 Offset: 0x1180048 VA: 0x1184048
	private static void InitSimpleTypeUnion(XsdBuilder builder, string value) { }

	// RVA: 0x11840EC Offset: 0x11800EC VA: 0x11840EC
	private static void BuildSimpleTypeUnion_MemberTypes(XsdBuilder builder, string value) { }

	// RVA: 0x11842F0 Offset: 0x11802F0 VA: 0x11842F0
	private static void InitSimpleTypeList(XsdBuilder builder, string value) { }

	// RVA: 0x1184394 Offset: 0x1180394 VA: 0x1184394
	private static void BuildSimpleTypeList_ItemType(XsdBuilder builder, string value) { }

	// RVA: 0x1184404 Offset: 0x1180404 VA: 0x1184404
	private static void InitSimpleTypeRestriction(XsdBuilder builder, string value) { }

	// RVA: 0x11844A8 Offset: 0x11804A8 VA: 0x11844A8
	private static void BuildSimpleTypeRestriction_Base(XsdBuilder builder, string value) { }

	// RVA: 0x1184518 Offset: 0x1180518 VA: 0x1184518
	private static void InitComplexType(XsdBuilder builder, string value) { }

	// RVA: 0x1184674 Offset: 0x1180674 VA: 0x1184674
	private static void BuildComplexType_Abstract(XsdBuilder builder, string value) { }

	// RVA: 0x11846E4 Offset: 0x11806E4 VA: 0x11846E4
	private static void BuildComplexType_Block(XsdBuilder builder, string value) { }

	// RVA: 0x118474C Offset: 0x118074C VA: 0x118474C
	private static void BuildComplexType_Final(XsdBuilder builder, string value) { }

	// RVA: 0x11847B4 Offset: 0x11807B4 VA: 0x11847B4
	private static void BuildComplexType_Mixed(XsdBuilder builder, string value) { }

	// RVA: 0x1184828 Offset: 0x1180828 VA: 0x1184828
	private static void BuildComplexType_Name(XsdBuilder builder, string value) { }

	// RVA: 0x1184848 Offset: 0x1180848 VA: 0x1184848
	private static void InitComplexContent(XsdBuilder builder, string value) { }

	// RVA: 0x1184930 Offset: 0x1180930 VA: 0x1184930
	private static void BuildComplexContent_Mixed(XsdBuilder builder, string value) { }

	// RVA: 0x11849A0 Offset: 0x11809A0 VA: 0x11849A0
	private static void InitComplexContentExtension(XsdBuilder builder, string value) { }

	// RVA: 0x1184A58 Offset: 0x1180A58 VA: 0x1184A58
	private static void BuildComplexContentExtension_Base(XsdBuilder builder, string value) { }

	// RVA: 0x1184AC8 Offset: 0x1180AC8 VA: 0x1184AC8
	private static void InitComplexContentRestriction(XsdBuilder builder, string value) { }

	// RVA: 0x1184B38 Offset: 0x1180B38 VA: 0x1184B38
	private static void BuildComplexContentRestriction_Base(XsdBuilder builder, string value) { }

	// RVA: 0x1184BA8 Offset: 0x1180BA8 VA: 0x1184BA8
	private static void InitSimpleContent(XsdBuilder builder, string value) { }

	// RVA: 0x1184C90 Offset: 0x1180C90 VA: 0x1184C90
	private static void InitSimpleContentExtension(XsdBuilder builder, string value) { }

	// RVA: 0x1184D48 Offset: 0x1180D48 VA: 0x1184D48
	private static void BuildSimpleContentExtension_Base(XsdBuilder builder, string value) { }

	// RVA: 0x1184DB8 Offset: 0x1180DB8 VA: 0x1184DB8
	private static void InitSimpleContentRestriction(XsdBuilder builder, string value) { }

	// RVA: 0x1184E70 Offset: 0x1180E70 VA: 0x1184E70
	private static void BuildSimpleContentRestriction_Base(XsdBuilder builder, string value) { }

	// RVA: 0x1184EE0 Offset: 0x1180EE0 VA: 0x1184EE0
	private static void InitAttributeGroup(XsdBuilder builder, string value) { }

	// RVA: 0x1184F98 Offset: 0x1180F98 VA: 0x1184F98
	private static void BuildAttributeGroup_Name(XsdBuilder builder, string value) { }

	// RVA: 0x1184FB8 Offset: 0x1180FB8 VA: 0x1184FB8
	private static void InitAttributeGroupRef(XsdBuilder builder, string value) { }

	// RVA: 0x1185024 Offset: 0x1181024 VA: 0x1185024
	private static void BuildAttributeGroupRef_Ref(XsdBuilder builder, string value) { }

	// RVA: 0x1185094 Offset: 0x1181094 VA: 0x1185094
	private static void InitAnyAttribute(XsdBuilder builder, string value) { }

	// RVA: 0x118530C Offset: 0x118130C VA: 0x118530C
	private static void BuildAnyAttribute_Namespace(XsdBuilder builder, string value) { }

	// RVA: 0x118532C Offset: 0x118132C VA: 0x118532C
	private static void BuildAnyAttribute_ProcessContents(XsdBuilder builder, string value) { }

	// RVA: 0x11853CC Offset: 0x11813CC VA: 0x11853CC
	private static void InitGroup(XsdBuilder builder, string value) { }

	// RVA: 0x1185484 Offset: 0x1181484 VA: 0x1185484
	private static void BuildGroup_Name(XsdBuilder builder, string value) { }

	// RVA: 0x11854A4 Offset: 0x11814A4 VA: 0x11854A4
	private static void InitGroupRef(XsdBuilder builder, string value) { }

	// RVA: 0x1185814 Offset: 0x1181814 VA: 0x1185814
	private static void BuildParticle_MaxOccurs(XsdBuilder builder, string value) { }

	// RVA: 0x1185830 Offset: 0x1181830 VA: 0x1185830
	private static void BuildParticle_MinOccurs(XsdBuilder builder, string value) { }

	// RVA: 0x118584C Offset: 0x118184C VA: 0x118584C
	private static void BuildGroupRef_Ref(XsdBuilder builder, string value) { }

	// RVA: 0x11858BC Offset: 0x11818BC VA: 0x11858BC
	private static void InitAll(XsdBuilder builder, string value) { }

	// RVA: 0x118592C Offset: 0x118192C VA: 0x118592C
	private static void InitChoice(XsdBuilder builder, string value) { }

	// RVA: 0x118599C Offset: 0x118199C VA: 0x118599C
	private static void InitSequence(XsdBuilder builder, string value) { }

	// RVA: 0x1185A08 Offset: 0x1181A08 VA: 0x1185A08
	private static void InitAny(XsdBuilder builder, string value) { }

	// RVA: 0x1185A78 Offset: 0x1181A78 VA: 0x1185A78
	private static void BuildAny_Namespace(XsdBuilder builder, string value) { }

	// RVA: 0x1185A98 Offset: 0x1181A98 VA: 0x1185A98
	private static void BuildAny_ProcessContents(XsdBuilder builder, string value) { }

	// RVA: 0x1185B38 Offset: 0x1181B38 VA: 0x1185B38
	private static void InitNotation(XsdBuilder builder, string value) { }

	// RVA: 0x1185BB8 Offset: 0x1181BB8 VA: 0x1185BB8
	private static void BuildNotation_Name(XsdBuilder builder, string value) { }

	// RVA: 0x1185BD8 Offset: 0x1181BD8 VA: 0x1185BD8
	private static void BuildNotation_Public(XsdBuilder builder, string value) { }

	// RVA: 0x1185BF8 Offset: 0x1181BF8 VA: 0x1185BF8
	private static void BuildNotation_System(XsdBuilder builder, string value) { }

	// RVA: 0x1185C18 Offset: 0x1181C18 VA: 0x1185C18
	private static void InitFacet(XsdBuilder builder, string value) { }

	// RVA: 0x1185F1C Offset: 0x1181F1C VA: 0x1185F1C
	private static void BuildFacet_Fixed(XsdBuilder builder, string value) { }

	// RVA: 0x1185F90 Offset: 0x1181F90 VA: 0x1185F90
	private static void BuildFacet_Value(XsdBuilder builder, string value) { }

	// RVA: 0x1185FB0 Offset: 0x1181FB0 VA: 0x1185FB0
	private static void InitIdentityConstraint(XsdBuilder builder, string value) { }

	// RVA: 0x11860EC Offset: 0x11820EC VA: 0x11860EC
	private static void BuildIdentityConstraint_Name(XsdBuilder builder, string value) { }

	// RVA: 0x118610C Offset: 0x118210C VA: 0x118610C
	private static void BuildIdentityConstraint_Refer(XsdBuilder builder, string value) { }

	// RVA: 0x118622C Offset: 0x118222C VA: 0x118622C
	private static void InitSelector(XsdBuilder builder, string value) { }

	// RVA: 0x11862D0 Offset: 0x11822D0 VA: 0x11862D0
	private static void BuildSelector_XPath(XsdBuilder builder, string value) { }

	// RVA: 0x11862F0 Offset: 0x11822F0 VA: 0x11862F0
	private static void InitField(XsdBuilder builder, string value) { }

	// RVA: 0x11863A0 Offset: 0x11823A0 VA: 0x11863A0
	private static void BuildField_XPath(XsdBuilder builder, string value) { }

	// RVA: 0x11863C0 Offset: 0x11823C0 VA: 0x11863C0
	private static void InitAnnotation(XsdBuilder builder, string value) { }

	// RVA: 0x1186488 Offset: 0x1182488 VA: 0x1186488
	private static void InitAppinfo(XsdBuilder builder, string value) { }

	// RVA: 0x118652C Offset: 0x118252C VA: 0x118652C
	private static void BuildAppinfo_Source(XsdBuilder builder, string value) { }

	// RVA: 0x1186598 Offset: 0x1182598 VA: 0x1186598
	private static void EndAppinfo(XsdBuilder builder) { }

	// RVA: 0x11865BC Offset: 0x11825BC VA: 0x11865BC
	private static void InitDocumentation(XsdBuilder builder, string value) { }

	// RVA: 0x1186660 Offset: 0x1182660 VA: 0x1186660
	private static void BuildDocumentation_Source(XsdBuilder builder, string value) { }

	// RVA: 0x11866C8 Offset: 0x11826C8 VA: 0x11866C8
	private static void BuildDocumentation_XmlLang(XsdBuilder builder, string value) { }

	// RVA: 0x1186808 Offset: 0x1182808 VA: 0x1186808
	private static void EndDocumentation(XsdBuilder builder) { }

	// RVA: 0x1182F04 Offset: 0x117EF04 VA: 0x1182F04
	private void AddAttribute(XmlSchemaObject value) { }

	// RVA: 0x1185514 Offset: 0x1181514 VA: 0x1185514
	private void AddParticle(XmlSchemaParticle particle) { }

	// RVA: 0x1180CC0 Offset: 0x117CCC0 VA: 0x1180CC0
	private bool GetNextState(XmlQualifiedName qname) { }

	// RVA: 0x1180F50 Offset: 0x117CF50 VA: 0x1180F50
	private bool IsSkipableElement(XmlQualifiedName qname) { }

	// RVA: 0x1183A90 Offset: 0x117FA90 VA: 0x1183A90
	private void SetMinOccurs(XmlSchemaParticle particle, string value) { }

	// RVA: 0x11839B4 Offset: 0x117F9B4 VA: 0x11839B4
	private void SetMaxOccurs(XmlSchemaParticle particle, string value) { }

	// RVA: 0x118366C Offset: 0x117F66C VA: 0x118366C
	private bool ParseBoolean(string value, string attributeName) { }

	// RVA: 0x11826D0 Offset: 0x117E6D0 VA: 0x11826D0
	private int ParseEnum(string value, string attributeName, string[] values) { }

	// RVA: 0x1183324 Offset: 0x117F324 VA: 0x1183324
	private XmlQualifiedName ParseQName(string value, string attributeName) { }

	// RVA: 0x11828EC Offset: 0x117E8EC VA: 0x11828EC
	private int ParseBlockFinalEnum(string value, string attributeName) { }

	// RVA: 0x1186594 Offset: 0x1182594 VA: 0x1186594
	private static string ParseUriReference(string s) { }

	// RVA: 0x118682C Offset: 0x118282C VA: 0x118682C
	private void SendValidationEvent(string code, string arg0, string arg1, string arg2) { }

	// RVA: 0x1180F78 Offset: 0x117CF78 VA: 0x1180F78
	private void SendValidationEvent(string code, string msg) { }

	// RVA: 0x11814C0 Offset: 0x117D4C0 VA: 0x11814C0
	private void SendValidationEvent(string code, string[] args, XmlSeverityType severity) { }

	// RVA: 0x118696C Offset: 0x118296C VA: 0x118696C
	private void SendValidationEvent(XmlSchemaException e, XmlSeverityType severity) { }

	// RVA: 0x11842E8 Offset: 0x11802E8 VA: 0x11842E8
	private void SendValidationEvent(XmlSchemaException e) { }

	// RVA: 0x1180EB4 Offset: 0x117CEB4 VA: 0x1180EB4
	private void RecordPosition() { }

	// RVA: 0x1186A40 Offset: 0x1182A40 VA: 0x1186A40
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
[Flags]
internal enum XsdDateTimeFlags // TypeDefIndex: 3149
{
	// Fields
	public int value__; // 0x0
	public const XsdDateTimeFlags DateTime = 1;
	public const XsdDateTimeFlags Time = 2;
	public const XsdDateTimeFlags Date = 4;
	public const XsdDateTimeFlags GYearMonth = 8;
	public const XsdDateTimeFlags GYear = 16;
	public const XsdDateTimeFlags GMonthDay = 32;
	public const XsdDateTimeFlags GDay = 64;
	public const XsdDateTimeFlags GMonth = 128;
	public const XsdDateTimeFlags XdrDateTimeNoTz = 256;
	public const XsdDateTimeFlags XdrDateTime = 512;
	public const XsdDateTimeFlags XdrTimeNoTz = 1024;
	public const XsdDateTimeFlags AllXsd = 255;
}


// Namespace: 
private enum XsdDateTime.DateTimeTypeCode // TypeDefIndex: 3150
{
	// Fields
	public int value__; // 0x0
	public const XsdDateTime.DateTimeTypeCode DateTime = 0;
	public const XsdDateTime.DateTimeTypeCode Time = 1;
	public const XsdDateTime.DateTimeTypeCode Date = 2;
	public const XsdDateTime.DateTimeTypeCode GYearMonth = 3;
	public const XsdDateTime.DateTimeTypeCode GYear = 4;
	public const XsdDateTime.DateTimeTypeCode GMonthDay = 5;
	public const XsdDateTime.DateTimeTypeCode GDay = 6;
	public const XsdDateTime.DateTimeTypeCode GMonth = 7;
	public const XsdDateTime.DateTimeTypeCode XdrDateTime = 8;
}


// Namespace: 
private enum XsdDateTime.XsdDateTimeKind // TypeDefIndex: 3151
{
	// Fields
	public int value__; // 0x0
	public const XsdDateTime.XsdDateTimeKind Unspecified = 0;
	public const XsdDateTime.XsdDateTimeKind Zulu = 1;
	public const XsdDateTime.XsdDateTimeKind LocalWestOfZulu = 2;
	public const XsdDateTime.XsdDateTimeKind LocalEastOfZulu = 3;
}


// Namespace: 
private struct XsdDateTime.Parser // TypeDefIndex: 3152
{
	// Fields
	public XsdDateTime.DateTimeTypeCode typeCode; // 0x0
	public int year; // 0x4
	public int month; // 0x8
	public int day; // 0xC
	public int hour; // 0x10
	public int minute; // 0x14
	public int second; // 0x18
	public int fraction; // 0x1C
	public XsdDateTime.XsdDateTimeKind kind; // 0x20
	public int zoneHour; // 0x24
	public int zoneMinute; // 0x28
	private string text; // 0x30
	private int length; // 0x38
	private static int[] Power10; // 0x0

	// Methods

	// RVA: 0x118B53C Offset: 0x118753C VA: 0x118B53C
	public bool Parse(string text, XsdDateTimeFlags kinds) { }

	// RVA: 0x118DFC0 Offset: 0x1189FC0 VA: 0x118DFC0
	private bool ParseDate(int start) { }

	// RVA: 0x118E220 Offset: 0x118A220 VA: 0x118E220
	private bool ParseTimeAndZoneAndWhitespace(int start) { }

	// RVA: 0x118E528 Offset: 0x118A528 VA: 0x118E528
	private bool ParseTimeAndWhitespace(int start) { }

	// RVA: 0x118E794 Offset: 0x118A794 VA: 0x118E794
	private bool ParseTime(ref int start) { }

	// RVA: 0x118E2BC Offset: 0x118A2BC VA: 0x118E2BC
	private bool ParseZoneAndWhitespace(int start) { }

	// RVA: 0x118E5C4 Offset: 0x118A5C4 VA: 0x118E5C4
	private bool Parse4Dig(int start, ref int num) { }

	// RVA: 0x118E6EC Offset: 0x118A6EC VA: 0x118E6EC
	private bool Parse2Dig(int start, ref int num) { }

	// RVA: 0x118E1DC Offset: 0x118A1DC VA: 0x118E1DC
	private bool ParseChar(int start, char ch) { }

	// RVA: 0x118DFB4 Offset: 0x1189FB4 VA: 0x118DFB4
	private static bool Test(XsdDateTimeFlags left, XsdDateTimeFlags right) { }

	// RVA: 0x118EB0C Offset: 0x118AB0C VA: 0x118EB0C
	private static void .cctor() { }
}


// Namespace: System.Xml.Schema
internal struct XsdDateTime // TypeDefIndex: 3153
{
	// Fields
	private DateTime dt; // 0x0
	private uint extra; // 0x8
	private static readonly int Lzyyyy; // 0x0
	private static readonly int Lzyyyy_; // 0x4
	private static readonly int Lzyyyy_MM; // 0x8
	private static readonly int Lzyyyy_MM_; // 0xC
	private static readonly int Lzyyyy_MM_dd; // 0x10
	private static readonly int Lzyyyy_MM_ddT; // 0x14
	private static readonly int LzHH; // 0x18
	private static readonly int LzHH_; // 0x1C
	private static readonly int LzHH_mm; // 0x20
	private static readonly int LzHH_mm_; // 0x24
	private static readonly int LzHH_mm_ss; // 0x28
	private static readonly int Lz_; // 0x2C
	private static readonly int Lz_zz; // 0x30
	private static readonly int Lz_zz_; // 0x34
	private static readonly int Lz_zz_zz; // 0x38
	private static readonly int Lz__; // 0x3C
	private static readonly int Lz__mm; // 0x40
	private static readonly int Lz__mm_; // 0x44
	private static readonly int Lz__mm__; // 0x48
	private static readonly int Lz__mm_dd; // 0x4C
	private static readonly int Lz___; // 0x50
	private static readonly int Lz___dd; // 0x54
	private static readonly XmlTypeCode[] typeCodes; // 0x58

	// Properties
	private XsdDateTime.DateTimeTypeCode InternalTypeCode { get; }
	private XsdDateTime.XsdDateTimeKind InternalKind { get; }
	public int Year { get; }
	public int Month { get; }
	public int Day { get; }
	public int Hour { get; }
	public int Minute { get; }
	public int Second { get; }
	public int Fraction { get; }
	public int ZoneHour { get; }
	public int ZoneMinute { get; }

	// Methods

	// RVA: 0x118B394 Offset: 0x1187394 VA: 0x118B394
	public void .ctor(string text, XsdDateTimeFlags kinds) { }

	// RVA: 0x118C13C Offset: 0x118813C VA: 0x118C13C
	private void .ctor(XsdDateTime.Parser parser) { }

	// RVA: 0x118C080 Offset: 0x1188080 VA: 0x118C080
	private void InitiateXsdDateTime(XsdDateTime.Parser parser) { }

	// RVA: 0x118C1D0 Offset: 0x11881D0 VA: 0x118C1D0
	internal static bool TryParse(string text, XsdDateTimeFlags kinds, out XsdDateTime result) { }

	// RVA: 0x118C290 Offset: 0x1188290 VA: 0x118C290
	public void .ctor(DateTime dateTime, XsdDateTimeFlags kinds) { }

	// RVA: 0x118C43C Offset: 0x118843C VA: 0x118C43C
	public void .ctor(DateTimeOffset dateTimeOffset) { }

	// RVA: 0x118C4AC Offset: 0x11884AC VA: 0x118C4AC
	public void .ctor(DateTimeOffset dateTimeOffset, XsdDateTimeFlags kinds) { }

	// RVA: 0x118C63C Offset: 0x118863C VA: 0x118C63C
	private XsdDateTime.DateTimeTypeCode get_InternalTypeCode() { }

	// RVA: 0x118C644 Offset: 0x1188644 VA: 0x118C644
	private XsdDateTime.XsdDateTimeKind get_InternalKind() { }

	// RVA: 0x118C64C Offset: 0x118864C VA: 0x118C64C
	public int get_Year() { }

	// RVA: 0x118C6A4 Offset: 0x11886A4 VA: 0x118C6A4
	public int get_Month() { }

	// RVA: 0x118C6FC Offset: 0x11886FC VA: 0x118C6FC
	public int get_Day() { }

	// RVA: 0x118C754 Offset: 0x1188754 VA: 0x118C754
	public int get_Hour() { }

	// RVA: 0x118C7AC Offset: 0x11887AC VA: 0x118C7AC
	public int get_Minute() { }

	// RVA: 0x118C804 Offset: 0x1188804 VA: 0x118C804
	public int get_Second() { }

	// RVA: 0x118C85C Offset: 0x118885C VA: 0x118C85C
	public int get_Fraction() { }

	// RVA: 0x118C974 Offset: 0x1188974 VA: 0x118C974
	public int get_ZoneHour() { }

	// RVA: 0x118C97C Offset: 0x118897C VA: 0x118C97C
	public int get_ZoneMinute() { }

	// RVA: 0x118C984 Offset: 0x1188984 VA: 0x118C984
	public static DateTime op_Implicit(XsdDateTime xdt) { }

	// RVA: 0x118CE5C Offset: 0x1188E5C VA: 0x118CE5C
	public static DateTimeOffset op_Implicit(XsdDateTime xdt) { }

	// RVA: 0x118D1B8 Offset: 0x11891B8 VA: 0x118D1B8 Slot: 3
	public override string ToString() { }

	// RVA: 0x118D5FC Offset: 0x11895FC VA: 0x118D5FC
	private void PrintDate(StringBuilder sb) { }

	// RVA: 0x118D740 Offset: 0x1189740 VA: 0x118D740
	private void PrintTime(StringBuilder sb) { }

	// RVA: 0x118DA64 Offset: 0x1189A64 VA: 0x118DA64
	private void PrintZone(StringBuilder sb) { }

	// RVA: 0x118D994 Offset: 0x1189994 VA: 0x118D994
	private void IntToCharArray(char[] text, int start, int value, int digits) { }

	// RVA: 0x118D9FC Offset: 0x11899FC VA: 0x118D9FC
	private void ShortToCharArray(char[] text, int start, int value) { }

	// RVA: 0x118DC04 Offset: 0x1189C04 VA: 0x118DC04
	private static void .cctor() { }
}


// Namespace: 
private enum XsdDuration.Parts // TypeDefIndex: 3154
{
	// Fields
	public int value__; // 0x0
	public const XsdDuration.Parts HasNone = 0;
	public const XsdDuration.Parts HasYears = 1;
	public const XsdDuration.Parts HasMonths = 2;
	public const XsdDuration.Parts HasDays = 4;
	public const XsdDuration.Parts HasHours = 8;
	public const XsdDuration.Parts HasMinutes = 16;
	public const XsdDuration.Parts HasSeconds = 32;
}


// Namespace: 
public enum XsdDuration.DurationType // TypeDefIndex: 3155
{
	// Fields
	public int value__; // 0x0
	public const XsdDuration.DurationType Duration = 0;
	public const XsdDuration.DurationType YearMonthDuration = 1;
	public const XsdDuration.DurationType DayTimeDuration = 2;
}


// Namespace: System.Xml.Schema
internal struct XsdDuration // TypeDefIndex: 3156
{
	// Fields
	private int years; // 0x0
	private int months; // 0x4
	private int days; // 0x8
	private int hours; // 0xC
	private int minutes; // 0x10
	private int seconds; // 0x14
	private uint nanoseconds; // 0x18

	// Properties
	public bool IsNegative { get; }
	public int Nanoseconds { get; }

	// Methods

	// RVA: 0x118EBA0 Offset: 0x118ABA0 VA: 0x118EBA0
	public void .ctor(bool isNegative, int years, int months, int days, int hours, int minutes, int seconds, int nanoseconds) { }

	// RVA: 0x118ECFC Offset: 0x118ACFC VA: 0x118ECFC
	public void .ctor(TimeSpan timeSpan) { }

	// RVA: 0x118EDD4 Offset: 0x118ADD4 VA: 0x118EDD4
	public void .ctor(TimeSpan timeSpan, XsdDuration.DurationType durationType) { }

	// RVA: 0x118EF54 Offset: 0x118AF54 VA: 0x118EF54
	public void .ctor(string s) { }

	// RVA: 0x118EF5C Offset: 0x118AF5C VA: 0x118EF5C
	public void .ctor(string s, XsdDuration.DurationType durationType) { }

	// RVA: 0x118F714 Offset: 0x118B714 VA: 0x118F714
	public bool get_IsNegative() { }

	// RVA: 0x118F708 Offset: 0x118B708 VA: 0x118F708
	public int get_Nanoseconds() { }

	// RVA: 0x118F720 Offset: 0x118B720 VA: 0x118F720
	public TimeSpan ToTimeSpan() { }

	// RVA: 0x118F728 Offset: 0x118B728 VA: 0x118F728
	public TimeSpan ToTimeSpan(XsdDuration.DurationType durationType) { }

	// RVA: 0x118FC1C Offset: 0x118BC1C VA: 0x118FC1C
	internal Exception TryToTimeSpan(out TimeSpan result) { }

	// RVA: 0x118F770 Offset: 0x118B770 VA: 0x118F770
	internal Exception TryToTimeSpan(XsdDuration.DurationType durationType, out TimeSpan result) { }

	// RVA: 0x118FC28 Offset: 0x118BC28 VA: 0x118FC28 Slot: 3
	public override string ToString() { }

	// RVA: 0x118FC30 Offset: 0x118BC30 VA: 0x118FC30
	internal string ToString(XsdDuration.DurationType durationType) { }

	// RVA: 0x119005C Offset: 0x118C05C VA: 0x119005C
	internal static Exception TryParse(string s, out XsdDuration result) { }

	// RVA: 0x118EFD0 Offset: 0x118AFD0 VA: 0x118EFD0
	internal static Exception TryParse(string s, XsdDuration.DurationType durationType, out XsdDuration result) { }

	// RVA: 0x1190068 Offset: 0x118C068 VA: 0x1190068
	private static string TryParseDigits(string s, ref int offset, bool eatDigits, out int result, out int numDigits) { }
}


// Namespace: System.Xml.Schema
internal sealed class XsdValidator : BaseValidator // TypeDefIndex: 3157
{
	// Fields
	private int startIDConstraint; // 0x7C
	private HWStack validationStack; // 0x80
	private Hashtable attPresence; // 0x88
	private XmlNamespaceManager nsManager; // 0x90
	private bool bManageNamespaces; // 0x98
	private Hashtable IDs; // 0xA0
	private IdRefNode idRefListHead; // 0xA8
	private Parser inlineSchemaParser; // 0xB0
	private XmlSchemaContentProcessing processContents; // 0xB8
	private static readonly XmlSchemaDatatype dtCDATA; // 0x0
	private static readonly XmlSchemaDatatype dtQName; // 0x8
	private static readonly XmlSchemaDatatype dtStringArray; // 0x10
	private string NsXmlNs; // 0xC0
	private string NsXs; // 0xC8
	private string NsXsi; // 0xD0
	private string XsiType; // 0xD8
	private string XsiNil; // 0xE0
	private string XsiSchemaLocation; // 0xE8
	private string XsiNoNamespaceSchemaLocation; // 0xF0
	private string XsdSchema; // 0xF8

	// Properties
	private bool IsInlineSchemaStarted { get; }
	private bool HasSchema { get; }
	public override bool PreserveWhitespace { get; }
	private bool HasIdentityConstraints { get; }

	// Methods

	// RVA: 0x1190224 Offset: 0x118C224 VA: 0x1190224
	internal void .ctor(BaseValidator validator) { }

	// RVA: 0x1190580 Offset: 0x118C580 VA: 0x1190580
	internal void .ctor(XmlValidatingReaderImpl reader, XmlSchemaCollection schemaCollection, IValidationEventHandling eventHandling) { }

	// RVA: 0x1190248 Offset: 0x118C248 VA: 0x1190248
	private void Init() { }

	// RVA: 0x1190688 Offset: 0x118C688 VA: 0x1190688 Slot: 5
	public override void Validate() { }

	// RVA: 0x1190CFC Offset: 0x118CCFC VA: 0x1190CFC Slot: 6
	public override void CompleteValidation() { }

	// RVA: 0x1190740 Offset: 0x118C740 VA: 0x1190740
	private bool get_IsInlineSchemaStarted() { }

	// RVA: 0x1190750 Offset: 0x118C750 VA: 0x1190750
	private void ProcessInlineSchema() { }

	// RVA: 0x11909C0 Offset: 0x118C9C0 VA: 0x11909C0
	private void ValidateElement() { }

	// RVA: 0x1190E04 Offset: 0x118CE04 VA: 0x1190E04
	private object ValidateChildElement() { }

	// RVA: 0x1191040 Offset: 0x118D040 VA: 0x1191040
	private void ProcessElement(object particle) { }

	// RVA: 0x1191348 Offset: 0x118D348 VA: 0x1191348
	private void ProcessXsiAttributes(out XmlQualifiedName xsiType, out string xsiNil) { }

	// RVA: 0x1190B1C Offset: 0x118CB1C VA: 0x1190B1C
	private void ValidateEndElement() { }

	// RVA: 0x119126C Offset: 0x118D26C VA: 0x119126C
	private SchemaElementDecl FastGetElementDecl(object particle) { }

	// RVA: 0x1191B2C Offset: 0x118DB2C VA: 0x1191B2C
	private SchemaElementDecl ThoroughGetElementDecl(SchemaElementDecl elementDecl, XmlQualifiedName xsiType, string xsiNil) { }

	// RVA: 0x1191F6C Offset: 0x118DF6C VA: 0x1191F6C
	private void ValidateStartElement() { }

	// RVA: 0x1192634 Offset: 0x118E634 VA: 0x1192634
	private void ValidateEndStartElement() { }

	// RVA: 0x11940B0 Offset: 0x11900B0 VA: 0x11940B0
	private void LoadSchemaFromLocation(string uri, string url) { }

	// RVA: 0x1192A18 Offset: 0x118EA18 VA: 0x1192A18
	private void LoadSchema(string uri, string url) { }

	// RVA: 0x1191EFC Offset: 0x118DEFC VA: 0x1191EFC
	private bool get_HasSchema() { }

	// RVA: 0x11945E0 Offset: 0x11905E0 VA: 0x11945E0 Slot: 4
	public override bool get_PreserveWhitespace() { }

	// RVA: 0x1194618 Offset: 0x1190618 VA: 0x1194618
	private void ProcessTokenizedType(XmlTokenizedType ttype, string name) { }

	// RVA: 0x1192BD8 Offset: 0x118EBD8 VA: 0x1192BD8
	private void CheckValue(string value, SchemaAttDef attdef) { }

	// RVA: 0x119481C Offset: 0x119081C VA: 0x119481C
	internal void AddID(string name, object node) { }

	// RVA: 0x11948AC Offset: 0x11908AC VA: 0x11948AC Slot: 7
	public override object FindId(string name) { }

	// RVA: 0x1190FF0 Offset: 0x118CFF0 VA: 0x1190FF0
	public bool IsXSDRoot(string localName, string ns) { }

	// RVA: 0x11905A4 Offset: 0x118C5A4 VA: 0x11905A4
	private void Push(XmlQualifiedName elementName) { }

	// RVA: 0x1193C90 Offset: 0x118FC90 VA: 0x1193C90
	private void Pop() { }

	// RVA: 0x1190D00 Offset: 0x118CD00 VA: 0x1190D00
	private void CheckForwardRefs() { }

	// RVA: 0x1191F20 Offset: 0x118DF20 VA: 0x1191F20
	private void ValidateStartElementIdentityConstraints() { }

	// RVA: 0x119303C Offset: 0x118F03C VA: 0x119303C
	private bool get_HasIdentityConstraints() { }

	// RVA: 0x11948C8 Offset: 0x11908C8 VA: 0x11948C8
	private void AddIdentityConstraints() { }

	// RVA: 0x1194CA8 Offset: 0x1190CA8 VA: 0x1194CA8
	private void ElementIdentityConstraints() { }

	// RVA: 0x1193DD4 Offset: 0x118FDD4 VA: 0x1193DD4
	private void AttributeIdentityConstraints(string name, string ns, object obj, string sobj, SchemaAttDef attdef) { }

	// RVA: 0x1193D50 Offset: 0x118FD50 VA: 0x1193D50
	private object UnWrapUnion(object typedValue) { }

	// RVA: 0x119304C Offset: 0x118F04C VA: 0x119304C
	private void EndElementIdentityConstraints() { }

	// RVA: 0x1194FF0 Offset: 0x1190FF0 VA: 0x1194FF0
	private static void .cctor() { }
}


// Namespace: 
public enum AstNode.AstType // TypeDefIndex: 3158
{
	// Fields
	public int value__; // 0x0
	public const AstNode.AstType Axis = 0;
	public const AstNode.AstType Operator = 1;
	public const AstNode.AstType Filter = 2;
	public const AstNode.AstType ConstantOperand = 3;
	public const AstNode.AstType Function = 4;
	public const AstNode.AstType Group = 5;
	public const AstNode.AstType Root = 6;
	public const AstNode.AstType Variable = 7;
	public const AstNode.AstType Error = 8;
}


// Namespace: MS.Internal.Xml.XPath
internal abstract class AstNode // TypeDefIndex: 3159
{
	// Properties
	public abstract AstNode.AstType Type { get; }
	public abstract XPathResultType ReturnType { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public abstract AstNode.AstType get_Type();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract XPathResultType get_ReturnType();

	// RVA: 0x119508C Offset: 0x119108C VA: 0x119508C
	protected void .ctor() { }
}


// Namespace: 
public enum Axis.AxisType // TypeDefIndex: 3160
{
	// Fields
	public int value__; // 0x0
	public const Axis.AxisType Ancestor = 0;
	public const Axis.AxisType AncestorOrSelf = 1;
	public const Axis.AxisType Attribute = 2;
	public const Axis.AxisType Child = 3;
	public const Axis.AxisType Descendant = 4;
	public const Axis.AxisType DescendantOrSelf = 5;
	public const Axis.AxisType Following = 6;
	public const Axis.AxisType FollowingSibling = 7;
	public const Axis.AxisType Namespace = 8;
	public const Axis.AxisType Parent = 9;
	public const Axis.AxisType Preceding = 10;
	public const Axis.AxisType PrecedingSibling = 11;
	public const Axis.AxisType Self = 12;
	public const Axis.AxisType None = 13;
}


// Namespace: MS.Internal.Xml.XPath
internal class Axis : AstNode // TypeDefIndex: 3161
{
	// Fields
	private Axis.AxisType _axisType; // 0x10
	private AstNode _input; // 0x18
	private string _prefix; // 0x20
	private string _name; // 0x28
	private XPathNodeType _nodeType; // 0x30
	protected bool abbrAxis; // 0x34
	private string _urn; // 0x38

	// Properties
	public override AstNode.AstType Type { get; }
	public override XPathResultType ReturnType { get; }

	// Methods

	// RVA: 0x1195094 Offset: 0x1191094 VA: 0x1195094
	public void .ctor(Axis.AxisType axisType, AstNode input, string prefix, string name, XPathNodeType nodetype) { }

	// RVA: 0x119512C Offset: 0x119112C VA: 0x119512C
	public void .ctor(Axis.AxisType axisType, AstNode input) { }

	// RVA: 0x11951A8 Offset: 0x11911A8 VA: 0x11951A8 Slot: 4
	public override AstNode.AstType get_Type() { }

	// RVA: 0x11951B0 Offset: 0x11911B0 VA: 0x11951B0 Slot: 5
	public override XPathResultType get_ReturnType() { }
}


// Namespace: MS.Internal.Xml.XPath
internal class Filter : AstNode // TypeDefIndex: 3162
{
	// Fields
	private AstNode _input; // 0x10
	private AstNode _condition; // 0x18

	// Properties
	public override AstNode.AstType Type { get; }
	public override XPathResultType ReturnType { get; }

	// Methods

	// RVA: 0x11951B8 Offset: 0x11911B8 VA: 0x11951B8
	public void .ctor(AstNode input, AstNode condition) { }

	// RVA: 0x11951E4 Offset: 0x11911E4 VA: 0x11951E4 Slot: 4
	public override AstNode.AstType get_Type() { }

	// RVA: 0x11951EC Offset: 0x11911EC VA: 0x11951EC Slot: 5
	public override XPathResultType get_ReturnType() { }
}


// Namespace: 
public enum Function.FunctionType // TypeDefIndex: 3163
{
	// Fields
	public int value__; // 0x0
	public const Function.FunctionType FuncLast = 0;
	public const Function.FunctionType FuncPosition = 1;
	public const Function.FunctionType FuncCount = 2;
	public const Function.FunctionType FuncID = 3;
	public const Function.FunctionType FuncLocalName = 4;
	public const Function.FunctionType FuncNameSpaceUri = 5;
	public const Function.FunctionType FuncName = 6;
	public const Function.FunctionType FuncString = 7;
	public const Function.FunctionType FuncBoolean = 8;
	public const Function.FunctionType FuncNumber = 9;
	public const Function.FunctionType FuncTrue = 10;
	public const Function.FunctionType FuncFalse = 11;
	public const Function.FunctionType FuncNot = 12;
	public const Function.FunctionType FuncConcat = 13;
	public const Function.FunctionType FuncStartsWith = 14;
	public const Function.FunctionType FuncContains = 15;
	public const Function.FunctionType FuncSubstringBefore = 16;
	public const Function.FunctionType FuncSubstringAfter = 17;
	public const Function.FunctionType FuncSubstring = 18;
	public const Function.FunctionType FuncStringLength = 19;
	public const Function.FunctionType FuncNormalize = 20;
	public const Function.FunctionType FuncTranslate = 21;
	public const Function.FunctionType FuncLang = 22;
	public const Function.FunctionType FuncSum = 23;
	public const Function.FunctionType FuncFloor = 24;
	public const Function.FunctionType FuncCeiling = 25;
	public const Function.FunctionType FuncRound = 26;
	public const Function.FunctionType FuncUserDefined = 27;
}


// Namespace: MS.Internal.Xml.XPath
internal class Function : AstNode // TypeDefIndex: 3164
{
	// Fields
	private Function.FunctionType _functionType; // 0x10
	private List<AstNode> _argumentList; // 0x18
	private string _name; // 0x20
	private string _prefix; // 0x28
	internal static XPathResultType[] ReturnTypes; // 0x0

	// Properties
	public override AstNode.AstType Type { get; }
	public override XPathResultType ReturnType { get; }

	// Methods

	// RVA: 0x11951F4 Offset: 0x11911F4 VA: 0x11951F4
	public void .ctor(Function.FunctionType ftype, List<AstNode> argumentList) { }

	// RVA: 0x119528C Offset: 0x119128C VA: 0x119528C
	public void .ctor(string prefix, string name, List<AstNode> argumentList) { }

	// RVA: 0x1195330 Offset: 0x1191330 VA: 0x1195330
	public void .ctor(Function.FunctionType ftype, AstNode arg) { }

	// RVA: 0x11953EC Offset: 0x11913EC VA: 0x11953EC Slot: 4
	public override AstNode.AstType get_Type() { }

	// RVA: 0x11953F4 Offset: 0x11913F4 VA: 0x11953F4 Slot: 5
	public override XPathResultType get_ReturnType() { }

	// RVA: 0x1195474 Offset: 0x1191474 VA: 0x1195474
	private static void .cctor() { }
}


// Namespace: MS.Internal.Xml.XPath
internal class Group : AstNode // TypeDefIndex: 3165
{
	// Fields
	private AstNode _groupNode; // 0x10

	// Properties
	public override AstNode.AstType Type { get; }
	public override XPathResultType ReturnType { get; }

	// Methods

	// RVA: 0x1195508 Offset: 0x1191508 VA: 0x1195508
	public void .ctor(AstNode groupNode) { }

	// RVA: 0x1195530 Offset: 0x1191530 VA: 0x1195530 Slot: 4
	public override AstNode.AstType get_Type() { }

	// RVA: 0x1195538 Offset: 0x1191538 VA: 0x1195538 Slot: 5
	public override XPathResultType get_ReturnType() { }
}


// Namespace: MS.Internal.Xml.XPath
internal class Operand : AstNode // TypeDefIndex: 3166
{
	// Fields
	private XPathResultType _type; // 0x10
	private object _val; // 0x18

	// Properties
	public override AstNode.AstType Type { get; }
	public override XPathResultType ReturnType { get; }

	// Methods

	// RVA: 0x1195540 Offset: 0x1191540 VA: 0x1195540
	public void .ctor(string val) { }

	// RVA: 0x1195570 Offset: 0x1191570 VA: 0x1195570
	public void .ctor(double val) { }

	// RVA: 0x11955E0 Offset: 0x11915E0 VA: 0x11955E0 Slot: 4
	public override AstNode.AstType get_Type() { }

	// RVA: 0x11955E8 Offset: 0x11915E8 VA: 0x11955E8 Slot: 5
	public override XPathResultType get_ReturnType() { }
}


// Namespace: 
public enum Operator.Op // TypeDefIndex: 3167
{
	// Fields
	public int value__; // 0x0
	public const Operator.Op INVALID = 0;
	public const Operator.Op OR = 1;
	public const Operator.Op AND = 2;
	public const Operator.Op EQ = 3;
	public const Operator.Op NE = 4;
	public const Operator.Op LT = 5;
	public const Operator.Op LE = 6;
	public const Operator.Op GT = 7;
	public const Operator.Op GE = 8;
	public const Operator.Op PLUS = 9;
	public const Operator.Op MINUS = 10;
	public const Operator.Op MUL = 11;
	public const Operator.Op DIV = 12;
	public const Operator.Op MOD = 13;
	public const Operator.Op UNION = 14;
}


// Namespace: MS.Internal.Xml.XPath
internal class Operator : AstNode // TypeDefIndex: 3168
{
	// Fields
	private static Operator.Op[] s_invertOp; // 0x0
	private Operator.Op _opType; // 0x10
	private AstNode _opnd1; // 0x18
	private AstNode _opnd2; // 0x20

	// Properties
	public override AstNode.AstType Type { get; }
	public override XPathResultType ReturnType { get; }

	// Methods

	// RVA: 0x11955F0 Offset: 0x11915F0 VA: 0x11955F0
	public void .ctor(Operator.Op op, AstNode opnd1, AstNode opnd2) { }

	// RVA: 0x119562C Offset: 0x119162C VA: 0x119562C Slot: 4
	public override AstNode.AstType get_Type() { }

	// RVA: 0x1195634 Offset: 0x1191634 VA: 0x1195634 Slot: 5
	public override XPathResultType get_ReturnType() { }

	// RVA: 0x1195658 Offset: 0x1191658 VA: 0x1195658
	private static void .cctor() { }
}


// Namespace: MS.Internal.Xml.XPath
internal class Root : AstNode // TypeDefIndex: 3169
{
	// Properties
	public override AstNode.AstType Type { get; }
	public override XPathResultType ReturnType { get; }

	// Methods

	// RVA: 0x11956EC Offset: 0x11916EC VA: 0x11956EC
	public void .ctor() { }

	// RVA: 0x11956F4 Offset: 0x11916F4 VA: 0x11956F4 Slot: 4
	public override AstNode.AstType get_Type() { }

	// RVA: 0x11956FC Offset: 0x11916FC VA: 0x11956FC Slot: 5
	public override XPathResultType get_ReturnType() { }
}


// Namespace: MS.Internal.Xml.XPath
internal class Variable : AstNode // TypeDefIndex: 3170
{
	// Fields
	private string _localname; // 0x10
	private string _prefix; // 0x18

	// Properties
	public override AstNode.AstType Type { get; }
	public override XPathResultType ReturnType { get; }

	// Methods

	// RVA: 0x1195704 Offset: 0x1191704 VA: 0x1195704
	public void .ctor(string name, string prefix) { }

	// RVA: 0x1195730 Offset: 0x1191730 VA: 0x1195730 Slot: 4
	public override AstNode.AstType get_Type() { }

	// RVA: 0x1195738 Offset: 0x1191738 VA: 0x1195738 Slot: 5
	public override XPathResultType get_ReturnType() { }
}


// Namespace: 
private class XPathParser.ParamInfo // TypeDefIndex: 3171
{
	// Fields
	private Function.FunctionType _ftype; // 0x10
	private int _minargs; // 0x14
	private int _maxargs; // 0x18
	private XPathResultType[] _argTypes; // 0x20

	// Methods

	// RVA: 0x1198310 Offset: 0x1194310 VA: 0x1198310
	internal void .ctor(Function.FunctionType ftype, int minargs, int maxargs, XPathResultType[] argTypes) { }
}


// Namespace: MS.Internal.Xml.XPath
internal class XPathParser // TypeDefIndex: 3172
{
	// Fields
	private XPathScanner _scanner; // 0x10
	private int _parseDepth; // 0x18
	private static readonly XPathResultType[] s_temparray1; // 0x0
	private static readonly XPathResultType[] s_temparray2; // 0x8
	private static readonly XPathResultType[] s_temparray3; // 0x10
	private static readonly XPathResultType[] s_temparray4; // 0x18
	private static readonly XPathResultType[] s_temparray5; // 0x20
	private static readonly XPathResultType[] s_temparray6; // 0x28
	private static readonly XPathResultType[] s_temparray7; // 0x30
	private static readonly XPathResultType[] s_temparray8; // 0x38
	private static readonly XPathResultType[] s_temparray9; // 0x40
	private static Dictionary<string, XPathParser.ParamInfo> s_functionTable; // 0x48
	private static Dictionary<string, Axis.AxisType> s_AxesTable; // 0x50

	// Methods

	// RVA: 0x1195740 Offset: 0x1191740 VA: 0x1195740
	private void .ctor(XPathScanner scanner) { }

	// RVA: 0x1195768 Offset: 0x1191768 VA: 0x1195768
	public static AstNode ParseXPathExpression(string xpathExpression) { }

	// RVA: 0x11958E8 Offset: 0x11918E8 VA: 0x11958E8
	private AstNode ParseExpression(AstNode qyInput) { }

	// RVA: 0x119594C Offset: 0x119194C VA: 0x119594C
	private AstNode ParseOrExpr(AstNode qyInput) { }

	// RVA: 0x1195A3C Offset: 0x1191A3C VA: 0x1195A3C
	private AstNode ParseAndExpr(AstNode qyInput) { }

	// RVA: 0x1195B90 Offset: 0x1191B90 VA: 0x1195B90
	private AstNode ParseEqualityExpr(AstNode qyInput) { }

	// RVA: 0x1195C68 Offset: 0x1191C68 VA: 0x1195C68
	private AstNode ParseRelationalExpr(AstNode qyInput) { }

	// RVA: 0x1195D68 Offset: 0x1191D68 VA: 0x1195D68
	private AstNode ParseAdditiveExpr(AstNode qyInput) { }

	// RVA: 0x1195E40 Offset: 0x1191E40 VA: 0x1195E40
	private AstNode ParseMultiplicativeExpr(AstNode qyInput) { }

	// RVA: 0x1195F6C Offset: 0x1191F6C VA: 0x1195F6C
	private AstNode ParseUnaryExpr(AstNode qyInput) { }

	// RVA: 0x1196040 Offset: 0x1192040 VA: 0x1196040
	private AstNode ParseUnionExpr(AstNode qyInput) { }

	// RVA: 0x11962B8 Offset: 0x11922B8 VA: 0x11962B8
	private static bool IsNodeType(XPathScanner scaner) { }

	// RVA: 0x1196144 Offset: 0x1192144 VA: 0x1196144
	private AstNode ParsePathExpr(AstNode qyInput) { }

	// RVA: 0x119645C Offset: 0x119245C VA: 0x119645C
	private AstNode ParseFilterExpr(AstNode qyInput) { }

	// RVA: 0x1196924 Offset: 0x1192924 VA: 0x1196924
	private AstNode ParsePredicate(AstNode qyInput) { }

	// RVA: 0x11965D4 Offset: 0x11925D4 VA: 0x11965D4
	private AstNode ParseLocationPath(AstNode qyInput) { }

	// RVA: 0x119650C Offset: 0x119250C VA: 0x119650C
	private AstNode ParseRelativeLocationPath(AstNode qyInput) { }

	// RVA: 0x11969B0 Offset: 0x11929B0 VA: 0x11969B0
	private static bool IsStep(XPathScanner.LexKind lexKind) { }

	// RVA: 0x11969F4 Offset: 0x11929F4 VA: 0x11969F4
	private AstNode ParseStep(AstNode qyInput) { }

	// RVA: 0x1196C44 Offset: 0x1192C44 VA: 0x1196C44
	private AstNode ParseNodeTest(AstNode qyInput, Axis.AxisType axisType, XPathNodeType nodeType) { }

	// RVA: 0x11963AC Offset: 0x11923AC VA: 0x11963AC
	private static bool IsPrimaryExpr(XPathScanner scanner) { }

	// RVA: 0x1196714 Offset: 0x1192714 VA: 0x1196714
	private AstNode ParsePrimaryExpr(AstNode qyInput) { }

	// RVA: 0x1196FAC Offset: 0x1192FAC VA: 0x1196FAC
	private AstNode ParseMethod(AstNode qyInput) { }

	// RVA: 0x1196F48 Offset: 0x1192F48 VA: 0x1196F48
	private void CheckToken(XPathScanner.LexKind t) { }

	// RVA: 0x1196990 Offset: 0x1192990 VA: 0x1196990
	private void PassToken(XPathScanner.LexKind t) { }

	// RVA: 0x1195B78 Offset: 0x1191B78 VA: 0x1195B78
	private void NextLex() { }

	// RVA: 0x1195B2C Offset: 0x1191B2C VA: 0x1195B2C
	private bool TestOp(string op) { }

	// RVA: 0x119625C Offset: 0x119225C VA: 0x119625C
	private void CheckNodeSet(XPathResultType t) { }

	// RVA: 0x1197874 Offset: 0x1193874 VA: 0x1197874
	private static Dictionary<string, XPathParser.ParamInfo> CreateFunctionTable() { }

	// RVA: 0x1198354 Offset: 0x1194354 VA: 0x1198354
	private static Dictionary<string, Axis.AxisType> CreateAxesTable() { }

	// RVA: 0x1196B5C Offset: 0x1192B5C VA: 0x1196B5C
	private Axis.AxisType GetAxis() { }

	// RVA: 0x1198670 Offset: 0x1194670 VA: 0x1198670
	private static void .cctor() { }
}


// Namespace: 
public enum XPathScanner.LexKind // TypeDefIndex: 3173
{
	// Fields
	public int value__; // 0x0
	public const XPathScanner.LexKind Comma = 44;
	public const XPathScanner.LexKind Slash = 47;
	public const XPathScanner.LexKind At = 64;
	public const XPathScanner.LexKind Dot = 46;
	public const XPathScanner.LexKind LParens = 40;
	public const XPathScanner.LexKind RParens = 41;
	public const XPathScanner.LexKind LBracket = 91;
	public const XPathScanner.LexKind RBracket = 93;
	public const XPathScanner.LexKind Star = 42;
	public const XPathScanner.LexKind Plus = 43;
	public const XPathScanner.LexKind Minus = 45;
	public const XPathScanner.LexKind Eq = 61;
	public const XPathScanner.LexKind Lt = 60;
	public const XPathScanner.LexKind Gt = 62;
	public const XPathScanner.LexKind Bang = 33;
	public const XPathScanner.LexKind Dollar = 36;
	public const XPathScanner.LexKind Apos = 39;
	public const XPathScanner.LexKind Quote = 34;
	public const XPathScanner.LexKind Union = 124;
	public const XPathScanner.LexKind Ne = 78;
	public const XPathScanner.LexKind Le = 76;
	public const XPathScanner.LexKind Ge = 71;
	public const XPathScanner.LexKind And = 65;
	public const XPathScanner.LexKind Or = 79;
	public const XPathScanner.LexKind DotDot = 68;
	public const XPathScanner.LexKind SlashSlash = 83;
	public const XPathScanner.LexKind Name = 110;
	public const XPathScanner.LexKind String = 115;
	public const XPathScanner.LexKind Number = 100;
	public const XPathScanner.LexKind Axe = 97;
	public const XPathScanner.LexKind Eof = 69;
}


// Namespace: MS.Internal.Xml.XPath
internal sealed class XPathScanner // TypeDefIndex: 3174
{
	// Fields
	private string _xpathExpr; // 0x10
	private int _xpathExprIndex; // 0x18
	private XPathScanner.LexKind _kind; // 0x1C
	private char _currentChar; // 0x20
	private string _name; // 0x28
	private string _prefix; // 0x30
	private string _stringValue; // 0x38
	private double _numberValue; // 0x40
	private bool _canBeFunction; // 0x48
	private XmlCharType _xmlCharType; // 0x50

	// Methods

	// RVA: 0x1195850 Offset: 0x1191850 VA: 0x1195850
	public void .ctor(string xpathExpr) { }

	// RVA: 0x119888C Offset: 0x119488C VA: 0x119888C
	private bool NextChar() { }

	// RVA: 0x11988EC Offset: 0x11948EC VA: 0x11988EC
	private void SkipSpace() { }

	// RVA: 0x11974B8 Offset: 0x11934B8 VA: 0x11974B8
	public bool NextLex() { }

	// RVA: 0x1198A88 Offset: 0x1194A88 VA: 0x1198A88
	private double ScanNumber() { }

	// RVA: 0x1198928 Offset: 0x1194928 VA: 0x1198928
	private double ScanFraction() { }

	// RVA: 0x11989D8 Offset: 0x11949D8 VA: 0x11989D8
	private string ScanString() { }

	// RVA: 0x1198B60 Offset: 0x1194B60 VA: 0x1198B60
	private string ScanName() { }
}


// Namespace: MS.Internal.Xml.Cache
internal sealed class XPathDocumentNavigator : XPathNavigator, IXmlLineInfo // TypeDefIndex: 3175
{
	// Fields
	private XPathNode[] _pageCurrent; // 0x10
	private XPathNode[] _pageParent; // 0x18
	private int _idxCurrent; // 0x20
	private int _idxParent; // 0x24

	// Properties
	public override string Value { get; }
	public override XPathNodeType NodeType { get; }
	public override string LocalName { get; }
	public override string NamespaceURI { get; }
	public override string Prefix { get; }
	public override XmlNameTable NameTable { get; }
	public override object UnderlyingObject { get; }
	public int LineNumber { get; }
	public int LinePosition { get; }

	// Methods

	// RVA: 0x1198BD8 Offset: 0x1194BD8 VA: 0x1198BD8
	public void .ctor(XPathNode[] pageCurrent, int idxCurrent, XPathNode[] pageParent, int idxParent) { }

	// RVA: 0x1198C5C Offset: 0x1194C5C VA: 0x1198C5C Slot: 4
	public override string get_Value() { }

	// RVA: 0x119902C Offset: 0x119502C VA: 0x119902C Slot: 22
	public override XPathNavigator Clone() { }

	// RVA: 0x11990A0 Offset: 0x11950A0 VA: 0x11990A0 Slot: 23
	public override XPathNodeType get_NodeType() { }

	// RVA: 0x11990E4 Offset: 0x11950E4 VA: 0x11990E4 Slot: 24
	public override string get_LocalName() { }

	// RVA: 0x119913C Offset: 0x119513C VA: 0x119913C Slot: 25
	public override string get_NamespaceURI() { }

	// RVA: 0x1199194 Offset: 0x1195194 VA: 0x1199194 Slot: 26
	public override string get_Prefix() { }

	// RVA: 0x11991EC Offset: 0x11951EC VA: 0x11991EC Slot: 18
	public override XmlNameTable get_NameTable() { }

	// RVA: 0x119924C Offset: 0x119524C VA: 0x119924C Slot: 29
	public override bool MoveToFirstNamespace(XPathNamespaceScope namespaceScope) { }

	// RVA: 0x1199508 Offset: 0x1195508 VA: 0x1199508 Slot: 30
	public override bool MoveToNextNamespace(XPathNamespaceScope scope) { }

	// RVA: 0x1199640 Offset: 0x1195640 VA: 0x1199640 Slot: 31
	public override bool MoveToParent() { }

	// RVA: 0x11996C0 Offset: 0x11956C0 VA: 0x11996C0 Slot: 32
	public override bool IsSamePosition(XPathNavigator other) { }

	// RVA: 0x1199764 Offset: 0x1195764 VA: 0x1199764 Slot: 27
	public override object get_UnderlyingObject() { }

	// RVA: 0x1199774 Offset: 0x1195774 VA: 0x1199774 Slot: 34
	public bool HasLineInfo() { }

	// RVA: 0x11997B8 Offset: 0x11957B8 VA: 0x11997B8 Slot: 35
	public int get_LineNumber() { }

	// RVA: 0x1199864 Offset: 0x1195864 VA: 0x1199864 Slot: 36
	public int get_LinePosition() { }

	// RVA: 0x1199958 Offset: 0x1195958 VA: 0x1199958
	public int GetPositionHashCode() { }
}


// Namespace: MS.Internal.Xml.Cache
internal struct XPathNode // TypeDefIndex: 3176
{
	// Fields
	private XPathNodeInfoAtom _info; // 0x0
	private ushort _idxSibling; // 0x8
	private ushort _idxParent; // 0xA
	private ushort _idxSimilar; // 0xC
	private ushort _posOffset; // 0xE
	private uint _props; // 0x10
	private string _value; // 0x18

	// Properties
	public XPathNodeType NodeType { get; }
	public string Prefix { get; }
	public string LocalName { get; }
	public string NamespaceUri { get; }
	public XPathDocument Document { get; }
	public int LineNumber { get; }
	public int LinePosition { get; }
	public int CollapsedLinePosition { get; }
	public XPathNodePageInfo PageInfo { get; }
	public bool IsXmlNamespaceNode { get; }
	public bool HasSibling { get; }
	public bool HasCollapsedText { get; }
	public bool IsText { get; }
	public bool HasNamespaceDecls { get; }

	// Methods

	// RVA: 0x11990D8 Offset: 0x11950D8 VA: 0x11990D8
	public XPathNodeType get_NodeType() { }

	// RVA: 0x11991D0 Offset: 0x11951D0 VA: 0x11991D0
	public string get_Prefix() { }

	// RVA: 0x1199120 Offset: 0x1195120 VA: 0x1199120
	public string get_LocalName() { }

	// RVA: 0x1199178 Offset: 0x1195178 VA: 0x1199178
	public string get_NamespaceUri() { }

	// RVA: 0x1199230 Offset: 0x1195230 VA: 0x1199230
	public XPathDocument get_Document() { }

	// RVA: 0x119983C Offset: 0x119583C VA: 0x119983C
	public int get_LineNumber() { }

	// RVA: 0x1199934 Offset: 0x1195934 VA: 0x1199934
	public int get_LinePosition() { }

	// RVA: 0x1199908 Offset: 0x1195908 VA: 0x1199908
	public int get_CollapsedLinePosition() { }

	// RVA: 0x1199964 Offset: 0x1195964 VA: 0x1199964
	public XPathNodePageInfo get_PageInfo() { }

	// RVA: 0x119961C Offset: 0x119561C VA: 0x119961C
	public int GetParent(out XPathNode[] pageNode) { }

	// RVA: 0x11994E4 Offset: 0x11954E4 VA: 0x11994E4
	public int GetSibling(out XPathNode[] pageNode) { }

	// RVA: 0x119945C Offset: 0x119545C VA: 0x119945C
	public bool get_IsXmlNamespaceNode() { }

	// RVA: 0x1199980 Offset: 0x1195980 VA: 0x1199980
	public bool get_HasSibling() { }

	// RVA: 0x1199990 Offset: 0x1195990 VA: 0x1199990
	public bool get_HasCollapsedText() { }

	// RVA: 0x119999C Offset: 0x119599C VA: 0x119999C
	public bool get_IsText() { }

	// RVA: 0x11999F8 Offset: 0x11959F8 VA: 0x11999F8
	public bool get_HasNamespaceDecls() { }
}


// Namespace: MS.Internal.Xml.Cache
internal struct XPathNodeRef // TypeDefIndex: 3177
{
	// Fields
	private XPathNode[] _page; // 0x0
	private int _idx; // 0x8

	// Methods

	// RVA: 0x1199A04 Offset: 0x1195A04 VA: 0x1199A04
	public void .ctor(XPathNode[] page, int idx) { }

	// RVA: 0x1199A10 Offset: 0x1195A10 VA: 0x1199A10 Slot: 2
	public override int GetHashCode() { }
}


// Namespace: MS.Internal.Xml.Cache
internal abstract class XPathNodeHelper // TypeDefIndex: 3178
{
	// Methods

	// RVA: 0x119933C Offset: 0x119533C VA: 0x119933C
	public static int GetLocalNamespaces(XPathNode[] pageElem, int idxElem, out XPathNode[] pageNmsp) { }

	// RVA: 0x11993A0 Offset: 0x11953A0 VA: 0x11993A0
	public static int GetInScopeNamespaces(XPathNode[] pageElem, int idxElem, out XPathNode[] pageNmsp) { }

	// RVA: 0x119966C Offset: 0x119566C VA: 0x119966C
	public static bool GetParent(ref XPathNode[] pageNode, ref int idxNode) { }

	// RVA: 0x1199A20 Offset: 0x1195A20 VA: 0x1199A20
	public static int GetLocation(XPathNode[] pageNode, int idxNode) { }

	// RVA: 0x1198ECC Offset: 0x1194ECC VA: 0x1198ECC
	public static bool GetTextFollowing(ref XPathNode[] pageCurrent, ref int idxCurrent, XPathNode[] pageEnd, int idxEnd) { }

	// RVA: 0x1198E4C Offset: 0x1194E4C VA: 0x1198E4C
	public static bool GetNonDescendant(ref XPathNode[] pageNode, ref int idxNode) { }
}


// Namespace: MS.Internal.Xml.Cache
internal sealed class XPathNodePageInfo // TypeDefIndex: 3179
{
	// Fields
	private int _pageNum; // 0x10
	private int _nodeCount; // 0x14
	private XPathNode[] _pageNext; // 0x18
}


// Namespace: MS.Internal.Xml.Cache
internal sealed class XPathNodeInfoAtom // TypeDefIndex: 3180
{
	// Fields
	private string _localName; // 0x10
	private string _namespaceUri; // 0x18
	private string _prefix; // 0x20
	private XPathNode[] _pageParent; // 0x28
	private XPathNode[] _pageSibling; // 0x30
	private XPathDocument _doc; // 0x38
	private int _lineNumBase; // 0x40
	private int _linePosBase; // 0x44
	private XPathNodePageInfo _pageInfo; // 0x48
}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=6 // TypeDefIndex: 3181
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=12 // TypeDefIndex: 3182
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=16 // TypeDefIndex: 3183
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=20 // TypeDefIndex: 3184
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=24 // TypeDefIndex: 3185
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=28 // TypeDefIndex: 3186
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=32 // TypeDefIndex: 3187
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=36 // TypeDefIndex: 3188
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=38 // TypeDefIndex: 3189
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=40 // TypeDefIndex: 3190
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=44 // TypeDefIndex: 3191
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=56 // TypeDefIndex: 3192
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=64 // TypeDefIndex: 3193
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=68 // TypeDefIndex: 3194
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=112 // TypeDefIndex: 3195
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=144 // TypeDefIndex: 3196
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=416 // TypeDefIndex: 3197
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=664 // TypeDefIndex: 3198
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=960 // TypeDefIndex: 3199
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=1212 // TypeDefIndex: 3200
{}


// Namespace: 
[CompilerGenerated]
internal sealed class <PrivateImplementationDetails> // TypeDefIndex: 3201
{
	// Fields
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=68 0C682AB2EF0F1E326972C95528BBDE965F5D2DA9232E7A946F6E8A978A2871B5 /*Metadata offset 0x3852A0*/; // 0x0
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=12 11047585FE102FBB5CADB42446612A578D88C6EF5ED076BB7AC360C4F9E4373D /*Metadata offset 0x3852E8*/; // 0x44
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=960 21AFB7EF8B4B88C006C54601484BC15AE5A8DBD2C0DD8C6622109208F8511B82 /*Metadata offset 0x3852F8*/; // 0x50
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=40 24F70FC64555D9B7646AD4C0EEB8DF5286779F0E39C15ACA61305BC4A5E40BE6 /*Metadata offset 0x3856C0*/; // 0x410
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=144 28045F5AB2D9A9593F1D95B0FCB77E7F5F5435DD654BAFEF68972344B51C71BD /*Metadata offset 0x3856F0*/; // 0x438
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=112 28057B619BAF672A05E1585ED28F174E67FE946D81BDAA0691F07AB772057B02 /*Metadata offset 0x385788*/; // 0x4C8
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=1212 2809A17B374DF1926EA539548F5B3750AA8ADB2BD59F5066AD6F9D439A231122 /*Metadata offset 0x385800*/; // 0x538
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=20 2AE470BFECE0EB971895252403237B3B989F74AD83E2B858E9CEA0482E776123 /*Metadata offset 0x385CC0*/; // 0x9F4
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=40 2BA62518D59E3AF30E09E458218C4A05E5DFA2949B8B8F9B5E68CC793DBFA882 /*Metadata offset 0x385CD8*/; // 0xA08
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=36 2D902EC9D8EA71E1193C1C8315B1553D5154744F651BD366F1E1F437F6594A94 /*Metadata offset 0x385D08*/; // 0xA30
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=12 3B3045573362001FA1CDA1F381A331DB2A88DD59FDD9C497404D59995AA377EA /*Metadata offset 0x385D30*/; // 0xA54
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=24 3EB9B3AB77D567D5CEBF38C4C91CDF79845F0691D47A516CE6981BF091025179 /*Metadata offset 0x385D40*/; // 0xA60
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=28 499E4F5C84E20C7347E10100E0EC90C1945EA21C7C80809E4F7F474179B39DF6 /*Metadata offset 0x385D60*/; // 0xA78
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=38 540CD885F06B2760118EA5544E069ACE0C5D184B85D9D104417C14F1E536376D /*Metadata offset 0x385D80*/; // 0xA94
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=68 58E18897FE5FF048E82310FB4F57ADB2D53AEE59CB49B1E7094439808A1EF3F6 /*Metadata offset 0x385DA8*/; // 0xABA
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=12 5B7F03A977BE72EBD5C1702238238AEB01DFFB019B05EFAAC147EF886732EDC7 /*Metadata offset 0x385DF0*/; // 0xAFE
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=32 652CA39E9310E001C2C4AF271610032A5638C58598F727066CCF4E666D424CD4 /*Metadata offset 0x385E00*/; // 0xB0A
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=36 6536D9B2447DFCF9BA37F9E5A7FAB08CB5552C5AD5B20E019AEC4872283A542A /*Metadata offset 0x385E28*/; // 0xB2A
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=960 77186ED8B389D5640B5AFAC4A22526ABA2422DCBE2986D0032E3B035D175758D /*Metadata offset 0x385E50*/; // 0xB4E
	internal static readonly long 8A36CBC1D17EC6E1CCFE7D67F79FA9C8B2D7A41B04DD58A76970CEDC8189210D = 361700859878507267; // 0xF10
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=36 8D4DC488705859D6A837A660BDBA9E88D1BD229BC39DB97734072D04BD513ECD /*Metadata offset 0x386228*/; // 0xF18
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=32 92E9BC30656BF079FC6B0A200B019FF46941857D786F4C391470394CFDC95F0B /*Metadata offset 0x386250*/; // 0xF3C
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=32 9DA6B2C4638D1DC7611B7F458BBFE7FD49FE1B36B67239B00B8A051F4E49558F /*Metadata offset 0x386278*/; // 0xF5C
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=64 AD6E77E234021D825C77689D82D414CDA3ABAE1ACC346D4BA2D6B1876CFC5FBC /*Metadata offset 0x3862A0*/; // 0xF7C
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=20 B21FC5E8DB69C99CDEFB2C460E7C26D2D29A5ADC302365C59766D13688236919 /*Metadata offset 0x3862E8*/; // 0xFBC
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=44 B6E5AC1B0927F4259775820D36453E7BD957F110874896C133234263D312D88E /*Metadata offset 0x386300*/; // 0xFD0
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=16 C332DD23F2CF4DE6107A93045ACACD787E2D9EB18B213298B98F23357F4FEA41 /*Metadata offset 0x386330*/; // 0xFFC
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=12 C3B2BED2599F3C79640DE44BA4EC7AEBB4856DBF74059DF382CF1D3026D272DA /*Metadata offset 0x386348*/; // 0x100C
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=416 D1D9AF18AFC4E3074AF5E4C44B81B73889D033D7AF6DFEB387BBCC76B36FE8B9 /*Metadata offset 0x386358*/; // 0x1018
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=24 DA285BBFE8FD0AA22C7CB92A1E911A4206CEDB14132FE3B6EE4DB32A42CAA41D /*Metadata offset 0x386500*/; // 0x11B8
	internal static readonly long DACC0E6568D9B10337A1A693F10D42C3175E80C378154406C6FBFA989F919F51 = 3659217647501344; // 0x11D0
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=56 DB047CC748613CCCB120DE7385E37D542A79C3BF8F0E64FE6DAD349B4D26E5D7 /*Metadata offset 0x386530*/; // 0x11D8
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=416 DB7DD2341DB9D4574E432AAAFF03FB0A3E8FF2F645A337077EDF0C6FE902E660 /*Metadata offset 0x386570*/; // 0x1210
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=6 DBBF94CCF4250B303976041627BB8FC302CE57D55373C469F41F97318412037D /*Metadata offset 0x386718*/; // 0x13B0
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=664 DD4E9C7C140CABCA5A25F4DA1F6F5BAC5D74E4568F954BF728471E711A35163E /*Metadata offset 0x386720*/; // 0x13B6
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=16 EC3DA4AD81BE65581D24158F5E1FCDA45D908C27EC29FDFA744995062C501501 /*Metadata offset 0x3869C0*/; // 0x164E
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=24 EE2DCBE09BA7FF21BF36DD7FC218E094C9B3EF228148D28D21D77A0FE51553C6 /*Metadata offset 0x3869D8*/; // 0x165E
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=16 F1A5C5E949D525C31B086947AF16513F4999646B513457629847081D039048ED /*Metadata offset 0x3869F8*/; // 0x1676
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=20 FFF813C50ED1BEC943E2CA58860CC34E0A14A5C0E858B97C7670A384005CC064 /*Metadata offset 0x386A10*/; // 0x1686

	// Methods

	// RVA: 0x1199A58 Offset: 0x1195A58 VA: 0x1199A58
	internal static uint ComputeStringHash(string s) { }
}
