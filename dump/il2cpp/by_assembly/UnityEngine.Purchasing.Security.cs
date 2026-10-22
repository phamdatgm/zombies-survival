// Namespace: 
internal class <Module> // TypeDefIndex: 7418
{}


// Namespace: LipingShare.LCLib.Asn1Processor
public enum Asn1EndOfIndefiniteLengthNodeType // TypeDefIndex: 7419
{
	// Fields
	public int value__; // 0x0
	public const Asn1EndOfIndefiniteLengthNodeType EndOfStream = 0;
	public const Asn1EndOfIndefiniteLengthNodeType EndOfNodeFooter = 1;
	public const Asn1EndOfIndefiniteLengthNodeType NotEnd = 2;
}


// Namespace: LipingShare.LCLib.Asn1Processor
internal class Asn1Node // TypeDefIndex: 7420
{
	// Fields
	private byte tag; // 0x10
	private long dataOffset; // 0x18
	private long dataLength; // 0x20
	private long lengthFieldBytes; // 0x28
	private byte[] data; // 0x30
	private ArrayList childNodeList; // 0x38
	private byte unusedBits; // 0x40
	private long deepness; // 0x48
	private string path; // 0x50
	private const int indentStep = 3;
	private Asn1Node parentNode; // 0x58
	private bool requireRecalculatePar; // 0x60
	private bool isIndefiniteLength; // 0x61
	private bool parseEncapsulatedData; // 0x62
	public const int defaultLineLen = 80;
	public const int minLineLen = 60;
	private const int k_EndOfStream = -1;
	private const int k_InvalidIndeterminateContentLength = -1;
	private const int k_IndefiniteLengthFooterSize = 2;
	public const int TagLength = 1;
	public const int BitStringUnusedFiledLength = 1;

	// Properties
	public bool IsIndefiniteLength { get; }
	public byte Tag { get; }
	public byte MaskedTag { get; }
	public long ChildNodeCount { get; }
	public string TagName { get; }
	public Asn1Node ParentNode { get; }
	public long DataLength { get; }
	public byte[] Data { get; }
	public long Deepness { get; }
	protected bool RequireRecalculatePar { set; }

	// Methods

	// RVA: 0x13E2494 Offset: 0x13DE494 VA: 0x13E2494
	private void .ctor(Asn1Node parentNode, long dataOffset) { }

	// RVA: 0x13E2528 Offset: 0x13DE528 VA: 0x13E2528
	private void Init() { }

	// RVA: 0x13E25B4 Offset: 0x13DE5B4 VA: 0x13E25B4
	private string GetHexPrintingStr(Asn1Node startNode, string baseLine, string lStr, int lineLen) { }

	// RVA: 0x13E2B34 Offset: 0x13DEB34 VA: 0x13E2B34
	private string FormatLineString(string lStr, int indent, int lineLen, string msg) { }

	// RVA: 0x13E2984 Offset: 0x13DE984 VA: 0x13E2984
	private string FormatLineHexString(string lStr, int indent, int lineLen, string msg) { }

	// RVA: 0x13E2DC4 Offset: 0x13DEDC4 VA: 0x13E2DC4
	public void .ctor() { }

	// RVA: 0x13E2E30 Offset: 0x13DEE30 VA: 0x13E2E30
	public bool get_IsIndefiniteLength() { }

	// RVA: 0x13E2E38 Offset: 0x13DEE38 VA: 0x13E2E38 Slot: 4
	public byte get_Tag() { }

	// RVA: 0x13E2E40 Offset: 0x13DEE40 VA: 0x13E2E40 Slot: 5
	public byte get_MaskedTag() { }

	// RVA: 0x13E2E4C Offset: 0x13DEE4C VA: 0x13E2E4C Slot: 6
	public bool LoadData(Stream xdata) { }

	// RVA: 0x13E2FBC Offset: 0x13DEFBC VA: 0x13E2FBC Slot: 7
	public bool SaveData(Stream xdata) { }

	// RVA: 0x13E3300 Offset: 0x13DF300 VA: 0x13E3300 Slot: 8
	public void ClearAll() { }

	// RVA: 0x13E3440 Offset: 0x13DF440 VA: 0x13E3440 Slot: 9
	public void AddChild(Asn1Node xdata) { }

	// RVA: 0x13E3470 Offset: 0x13DF470 VA: 0x13E3470
	private Asn1Node GetLastChild() { }

	// RVA: 0x13E30E8 Offset: 0x13DF0E8 VA: 0x13E30E8 Slot: 10
	public long get_ChildNodeCount() { }

	// RVA: 0x13E3244 Offset: 0x13DF244 VA: 0x13E3244 Slot: 11
	public Asn1Node GetChildNode(int index) { }

	// RVA: 0x13E351C Offset: 0x13DF51C VA: 0x13E351C Slot: 12
	public string get_TagName() { }

	// RVA: 0x13E3970 Offset: 0x13DF970 VA: 0x13E3970 Slot: 13
	public Asn1Node get_ParentNode() { }

	// RVA: 0x13E3978 Offset: 0x13DF978 VA: 0x13E3978 Slot: 14
	public string GetText(Asn1Node startNode, int lineLen) { }

	// RVA: 0x13E4AC8 Offset: 0x13E0AC8 VA: 0x13E4AC8 Slot: 15
	public string GetDataStr(bool pureHexMode) { }

	// RVA: 0x13E4E1C Offset: 0x13E0E1C VA: 0x13E4E1C Slot: 16
	public long get_DataLength() { }

	// RVA: 0x13E4E24 Offset: 0x13E0E24 VA: 0x13E4E24 Slot: 17
	public byte[] get_Data() { }

	// RVA: 0x13E4FA8 Offset: 0x13E0FA8 VA: 0x13E4FA8 Slot: 18
	public long get_Deepness() { }

	// RVA: 0x13E4FB0 Offset: 0x13E0FB0 VA: 0x13E4FB0
	protected void set_RequireRecalculatePar(bool value) { }

	// RVA: 0x13E33E4 Offset: 0x13DF3E4 VA: 0x13E33E4
	protected void RecalculateTreePar() { }

	// RVA: 0x13E4FBC Offset: 0x13E0FBC VA: 0x13E4FBC
	protected static long ResetBranchDataLength(Asn1Node node) { }

	// RVA: 0x13E51AC Offset: 0x13E11AC VA: 0x13E51AC
	protected static void ResetDataLengthFieldWidth(Asn1Node node) { }

	// RVA: 0x13E5088 Offset: 0x13E1088 VA: 0x13E5088
	protected void ResetChildNodePar(Asn1Node xNode, long subOffset) { }

	// RVA: 0x13E49B0 Offset: 0x13E09B0 VA: 0x13E49B0
	protected string GetListStr(Asn1Node startNode, int lineLen) { }

	// RVA: 0x13E2778 Offset: 0x13DE778 VA: 0x13E2778
	protected string GetIndentStr(Asn1Node startNode) { }

	// RVA: 0x13E5264 Offset: 0x13E1264 VA: 0x13E5264
	protected bool GeneralDecode(Stream xdata) { }

	// RVA: 0x13E5460 Offset: 0x13E1460 VA: 0x13E5460
	private bool AreTagsOk() { }

	// RVA: 0x13E54EC Offset: 0x13E14EC VA: 0x13E54EC
	private bool GeneralDecodeKnownLengthWithChecks(Stream xdata, long start, long nodeMaxLen) { }

	// RVA: 0x13E5528 Offset: 0x13E1528 VA: 0x13E5528
	private bool IsGeneralStreamLengthOk(Stream xdata, long start, long nodeMaxLen) { }

	// RVA: 0x13E5594 Offset: 0x13E1594 VA: 0x13E5594
	private bool GeneralDecodeKnownLength(Stream xdata) { }

	// RVA: 0x13E5614 Offset: 0x13E1614 VA: 0x13E5614
	private void ReadStreamDataDefiniteLength(Stream xdata, int length) { }

	// RVA: 0x13E5490 Offset: 0x13E1490 VA: 0x13E5490
	private bool GeneralDecodeIndefiniteLength(Stream xdata, long nodeMaxLen) { }

	// RVA: 0x13E5698 Offset: 0x13E1698 VA: 0x13E5698
	private bool ReadStreamDataIndefiniteLength(Stream xdata, long nodeMaxLen) { }

	// RVA: 0x13E5720 Offset: 0x13E1720 VA: 0x13E5720
	private long MeasureContentLength(Stream xdata) { }

	// RVA: 0x13E57B4 Offset: 0x13E17B4 VA: 0x13E57B4
	private void ReadMeasuredLengthDataFromStart(Stream xdata, long startPosition, long length) { }

	// RVA: 0x13E5864 Offset: 0x13E1864 VA: 0x13E5864
	protected bool ListDecode(Stream xdata) { }

	// RVA: 0x13E5AC8 Offset: 0x13E1AC8 VA: 0x13E5AC8
	private bool ListDecodeKnownLengthWithChecks(Stream xdata, long start, long childNodeMaxLen) { }

	// RVA: 0x13E5AE4 Offset: 0x13E1AE4 VA: 0x13E5AE4
	private bool IsListStreamLengthOk(Stream xdata, long childNodeMaxLen) { }

	// RVA: 0x13E5B00 Offset: 0x13E1B00 VA: 0x13E5B00
	private bool ListDecodeKnownLength(Stream xdata, long start) { }

	// RVA: 0x13E5BA0 Offset: 0x13E1BA0 VA: 0x13E5BA0
	private long CalculateListEncodeFieldBytesAndOffset(Stream xdata, long start) { }

	// RVA: 0x13E5BEC Offset: 0x13E1BEC VA: 0x13E5BEC
	private bool HandleBitStringTag(Stream xdata, ref long offset) { }

	// RVA: 0x13E5C58 Offset: 0x13E1C58 VA: 0x13E5C58
	private bool ListDecodeKnownLengthInternal(Stream xdata, long offset) { }

	// RVA: 0x13E5C84 Offset: 0x13E1C84 VA: 0x13E5C84
	private Stream CreateAndPrepareListDecodeMemoryStreamKnownLength(Stream xdata) { }

	// RVA: 0x13E5D9C Offset: 0x13E1D9C VA: 0x13E5D9C
	private bool ListDecodeChildNodesWithKnownLength(Stream secData, long offset) { }

	// RVA: 0x13E5E18 Offset: 0x13E1E18 VA: 0x13E5E18
	private bool CreateAndAddChildNode(Stream secData, ref long offset) { }

	// RVA: 0x13E5A48 Offset: 0x13E1A48 VA: 0x13E5A48
	private bool ListDecodeIndefiniteLength(Stream xdata, long start, long childNodeMaxLen) { }

	// RVA: 0x13E5EF8 Offset: 0x13E1EF8 VA: 0x13E5EF8
	private bool ListDecodeIndefiniteLengthInternal(Stream xdata, long offset, long childNodeMaxLen) { }

	// RVA: 0x13E5F74 Offset: 0x13E1F74 VA: 0x13E5F74
	private bool ReadNextChildNodeOrEndFooterOfIndefiniteListClearIfInvalid(Stream xdata, ref long offset, long childNodeMaxLen) { }

	// RVA: 0x13E6000 Offset: 0x13E2000 VA: 0x13E6000
	private Asn1EndOfIndefiniteLengthNodeType DetectEndOfIndefiniteListContents(Stream xdata) { }

	// RVA: 0x13E6074 Offset: 0x13E2074 VA: 0x13E6074
	private bool ReadNextChildNodeOfIndefiniteListClearIfInvalid(Stream xdata, ref long offset, long childNodeMaxLen) { }

	// RVA: 0x13E2EF0 Offset: 0x13DEEF0 VA: 0x13E2EF0
	protected bool InternalLoadData(Stream xdata) { }
}


// Namespace: LipingShare.LCLib.Asn1Processor
internal class Asn1Parser // TypeDefIndex: 7421
{
	// Fields
	private byte[] rawData; // 0x10
	private Asn1Node rootNode; // 0x18

	// Properties
	public Asn1Node RootNode { get; }

	// Methods

	// RVA: 0x13E6134 Offset: 0x13E2134 VA: 0x13E6134
	public void .ctor() { }

	// RVA: 0x13E6190 Offset: 0x13E2190 VA: 0x13E6190
	public void LoadData(Stream stream) { }

	// RVA: 0x13E62B0 Offset: 0x13E22B0 VA: 0x13E62B0
	public Asn1Node get_RootNode() { }

	// RVA: 0x13E62B8 Offset: 0x13E22B8 VA: 0x13E62B8
	public static string GetNodeTextHeader(int lineLen) { }

	// RVA: 0x13E63E4 Offset: 0x13E23E4 VA: 0x13E63E4 Slot: 3
	public override string ToString() { }

	// RVA: 0x13E63F0 Offset: 0x13E23F0 VA: 0x13E63F0
	public static string GetNodeText(Asn1Node node, int lineLen) { }
}


// Namespace: LipingShare.LCLib.Asn1Processor
internal class Asn1Util // TypeDefIndex: 7422
{
	// Fields
	private static char[] hexDigits; // 0x0

	// Methods

	// RVA: 0x13E4C88 Offset: 0x13E0C88 VA: 0x13E4C88
	public static string FormatString(string inStr, int lineLen, int groupLen) { }

	// RVA: 0x13E2D24 Offset: 0x13DED24 VA: 0x13E2D24
	public static string GenStr(int len, char xch) { }

	// RVA: 0x13E4958 Offset: 0x13E0958 VA: 0x13E4958
	public static long BytesToLong(byte[] bytes) { }

	// RVA: 0x13E4860 Offset: 0x13E0860 VA: 0x13E4860
	public static string BytesToString(byte[] bytes) { }

	// RVA: 0x13E2818 Offset: 0x13DE818 VA: 0x13E2818
	public static string ToHexString(byte[] bytes) { }

	// RVA: 0x13E643C Offset: 0x13E243C VA: 0x13E643C
	public static int BytePrecision(ulong value) { }

	// RVA: 0x13E3114 Offset: 0x13DF114 VA: 0x13E3114
	public static int DERLengthEncode(Stream xdata, ulong length) { }

	// RVA: 0x13E53AC Offset: 0x13E13AC VA: 0x13E53AC
	public static long DerLengthDecode(Stream bt, ref bool isIndefiniteLength) { }

	// RVA: 0x13E3574 Offset: 0x13DF574 VA: 0x13E3574
	public static string GetTagName(byte tag) { }

	// RVA: 0x13E6468 Offset: 0x13E2468 VA: 0x13E6468
	private static void .cctor() { }
}


// Namespace: LipingShare.LCLib.Asn1Processor
internal class Oid // TypeDefIndex: 7423
{
	// Fields
	private static StringDictionary oidDictionary; // 0x0

	// Methods

	// RVA: 0x13E47B4 Offset: 0x13E07B4 VA: 0x13E47B4
	public string GetOidName(string inOidStr) { }

	// RVA: 0x13E64FC Offset: 0x13E24FC VA: 0x13E64FC
	public string Decode(byte[] data) { }

	// RVA: 0x13E65AC Offset: 0x13E25AC VA: 0x13E65AC Slot: 4
	public virtual string Decode(Stream bt) { }

	// RVA: 0x13E47AC Offset: 0x13E07AC VA: 0x13E47AC
	public void .ctor() { }

	// RVA: 0x13E680C Offset: 0x13E280C VA: 0x13E680C
	protected int DecodeValue(Stream bt, ref ulong v) { }
}


// Namespace: LipingShare.LCLib.Asn1Processor
internal class RelativeOid : Oid // TypeDefIndex: 7424
{
	// Methods

	// RVA: 0x13E4858 Offset: 0x13E0858 VA: 0x13E4858
	public void .ctor() { }

	// RVA: 0x13E6868 Offset: 0x13E2868 VA: 0x13E6868 Slot: 4
	public override string Decode(Stream bt) { }
}


// Namespace: UnityEngine.Purchasing.Security
public class AppleValidator // TypeDefIndex: 7425
{
	// Fields
	private X509Cert cert; // 0x10
	private AppleReceiptParser parser; // 0x18

	// Methods

	// RVA: 0x13E6A68 Offset: 0x13E2A68 VA: 0x13E6A68
	public void .ctor(byte[] appleRootCertificate) { }

	// RVA: 0x13E6CE8 Offset: 0x13E2CE8 VA: 0x13E6CE8
	public AppleReceipt Validate(byte[] receiptData) { }
}


// Namespace: UnityEngine.Purchasing.Security
public class AppleReceiptParser // TypeDefIndex: 7426
{
	// Fields
	private static Dictionary<string, object> _mostRecentReceiptData; // 0x0
	private const string k_AppleReceiptKey = "k_AppleReceiptKey";
	private const string k_PKCS7Key = "k_PKCS7Key";
	private const string k_ReceiptBytesKey = "k_ReceiptBytesKey";

	// Methods

	// RVA: 0x13E76F0 Offset: 0x13E36F0 VA: 0x13E76F0
	public AppleReceipt Parse(byte[] receiptData) { }

	// RVA: 0x13E6D70 Offset: 0x13E2D70 VA: 0x13E6D70
	internal AppleReceipt Parse(byte[] receiptData, out PKCS7 receipt) { }

	// RVA: 0x13E7708 Offset: 0x13E3708 VA: 0x13E7708
	private static CultureInfo PushInvariantCultureOnThread() { }

	// RVA: 0x13E7C1C Offset: 0x13E3C1C VA: 0x13E7C1C
	private static void PopCultureOffThread(CultureInfo originalCulture) { }

	// RVA: 0x13E77CC Offset: 0x13E37CC VA: 0x13E77CC
	private AppleReceipt ParseReceipt(Asn1Node data) { }

	// RVA: 0x13E7C4C Offset: 0x13E3C4C VA: 0x13E7C4C
	private Asn1Node GetSetNode(Asn1Node data) { }

	// RVA: 0x13E7CA8 Offset: 0x13E3CA8 VA: 0x13E7CA8
	private AppleInAppPurchaseReceipt ParseInAppReceipt(Asn1Node inApp) { }

	// RVA: 0x13E80AC Offset: 0x13E40AC VA: 0x13E80AC
	private static DateTime TryParseDateTimeNode(Asn1Node node) { }

	// RVA: -1 Offset: -1
	public static bool ArrayEquals<T>(T[] a, T[] b) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB745E4 Offset: 0xB705E4 VA: 0xB745E4
	|-AppleReceiptParser.ArrayEquals<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x13E6B04 Offset: 0x13E2B04 VA: 0x13E6B04
	public void .ctor() { }

	// RVA: 0x13E8194 Offset: 0x13E4194 VA: 0x13E8194
	private static void .cctor() { }
}


// Namespace: UnityEngine.Purchasing.Security
internal class DistinguishedName // TypeDefIndex: 7427
{
	// Fields
	[CompilerGenerated]
	private string <Country>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <Organization>k__BackingField; // 0x18
	[CompilerGenerated]
	private string <OrganizationalUnit>k__BackingField; // 0x20
	[CompilerGenerated]
	private string <Dnq>k__BackingField; // 0x28
	[CompilerGenerated]
	private string <State>k__BackingField; // 0x30
	[CompilerGenerated]
	private string <CommonName>k__BackingField; // 0x38
	[CompilerGenerated]
	private string <SerialNumber>k__BackingField; // 0x40

	// Properties
	public string Country { get; set; }
	public string Organization { get; set; }
	public string OrganizationalUnit { get; set; }
	public string Dnq { get; set; }
	public string State { get; set; }
	public string CommonName { get; set; }
	public string SerialNumber { set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x13E8220 Offset: 0x13E4220 VA: 0x13E8220
	public string get_Country() { }

	[CompilerGenerated]
	// RVA: 0x13E8228 Offset: 0x13E4228 VA: 0x13E8228
	public void set_Country(string value) { }

	[CompilerGenerated]
	// RVA: 0x13E8230 Offset: 0x13E4230 VA: 0x13E8230
	public string get_Organization() { }

	[CompilerGenerated]
	// RVA: 0x13E8238 Offset: 0x13E4238 VA: 0x13E8238
	public void set_Organization(string value) { }

	[CompilerGenerated]
	// RVA: 0x13E8240 Offset: 0x13E4240 VA: 0x13E8240
	public string get_OrganizationalUnit() { }

	[CompilerGenerated]
	// RVA: 0x13E8248 Offset: 0x13E4248 VA: 0x13E8248
	public void set_OrganizationalUnit(string value) { }

	[CompilerGenerated]
	// RVA: 0x13E8250 Offset: 0x13E4250 VA: 0x13E8250
	public string get_Dnq() { }

	[CompilerGenerated]
	// RVA: 0x13E8258 Offset: 0x13E4258 VA: 0x13E8258
	public void set_Dnq(string value) { }

	[CompilerGenerated]
	// RVA: 0x13E8260 Offset: 0x13E4260 VA: 0x13E8260
	public string get_State() { }

	[CompilerGenerated]
	// RVA: 0x13E8268 Offset: 0x13E4268 VA: 0x13E8268
	public void set_State(string value) { }

	[CompilerGenerated]
	// RVA: 0x13E8270 Offset: 0x13E4270 VA: 0x13E8270
	public string get_CommonName() { }

	[CompilerGenerated]
	// RVA: 0x13E8278 Offset: 0x13E4278 VA: 0x13E8278
	public void set_CommonName(string value) { }

	[CompilerGenerated]
	// RVA: 0x13E8280 Offset: 0x13E4280 VA: 0x13E8280
	public void set_SerialNumber(string value) { }

	// RVA: 0x13E8288 Offset: 0x13E4288 VA: 0x13E8288
	public void .ctor(Asn1Node n) { }

	// RVA: 0x13E8828 Offset: 0x13E4828 VA: 0x13E8828
	public bool Equals(DistinguishedName n2) { }

	// RVA: 0x13E88CC Offset: 0x13E48CC VA: 0x13E88CC Slot: 3
	public override string ToString() { }
}


// Namespace: UnityEngine.Purchasing.Security
internal class X509Cert // TypeDefIndex: 7428
{
	// Fields
	[CompilerGenerated]
	private string <SerialNumber>k__BackingField; // 0x10
	[CompilerGenerated]
	private DateTime <ValidAfter>k__BackingField; // 0x18
	[CompilerGenerated]
	private DateTime <ValidBefore>k__BackingField; // 0x20
	[CompilerGenerated]
	private RSAKey <PubKey>k__BackingField; // 0x28
	[CompilerGenerated]
	private bool <SelfSigned>k__BackingField; // 0x30
	[CompilerGenerated]
	private DistinguishedName <Subject>k__BackingField; // 0x38
	[CompilerGenerated]
	private DistinguishedName <Issuer>k__BackingField; // 0x40
	private Asn1Node TbsCertificate; // 0x48
	[CompilerGenerated]
	private Asn1Node <Signature>k__BackingField; // 0x50
	public byte[] rawTBSCertificate; // 0x58

	// Properties
	public string SerialNumber { get; set; }
	public DateTime ValidAfter { get; set; }
	public DateTime ValidBefore { get; set; }
	public RSAKey PubKey { get; set; }
	private bool SelfSigned { set; }
	public DistinguishedName Subject { get; set; }
	public DistinguishedName Issuer { get; set; }
	public Asn1Node Signature { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x13E89F8 Offset: 0x13E49F8 VA: 0x13E89F8
	public string get_SerialNumber() { }

	[CompilerGenerated]
	// RVA: 0x13E8A00 Offset: 0x13E4A00 VA: 0x13E8A00
	private void set_SerialNumber(string value) { }

	[CompilerGenerated]
	// RVA: 0x13E8A08 Offset: 0x13E4A08 VA: 0x13E8A08
	public DateTime get_ValidAfter() { }

	[CompilerGenerated]
	// RVA: 0x13E8A10 Offset: 0x13E4A10 VA: 0x13E8A10
	private void set_ValidAfter(DateTime value) { }

	[CompilerGenerated]
	// RVA: 0x13E8A18 Offset: 0x13E4A18 VA: 0x13E8A18
	public DateTime get_ValidBefore() { }

	[CompilerGenerated]
	// RVA: 0x13E8A20 Offset: 0x13E4A20 VA: 0x13E8A20
	private void set_ValidBefore(DateTime value) { }

	[CompilerGenerated]
	// RVA: 0x13E8A28 Offset: 0x13E4A28 VA: 0x13E8A28
	public RSAKey get_PubKey() { }

	[CompilerGenerated]
	// RVA: 0x13E8A30 Offset: 0x13E4A30 VA: 0x13E8A30
	private void set_PubKey(RSAKey value) { }

	[CompilerGenerated]
	// RVA: 0x13E8A38 Offset: 0x13E4A38 VA: 0x13E8A38
	private void set_SelfSigned(bool value) { }

	[CompilerGenerated]
	// RVA: 0x13E8A44 Offset: 0x13E4A44 VA: 0x13E8A44
	public DistinguishedName get_Subject() { }

	[CompilerGenerated]
	// RVA: 0x13E8A4C Offset: 0x13E4A4C VA: 0x13E8A4C
	private void set_Subject(DistinguishedName value) { }

	[CompilerGenerated]
	// RVA: 0x13E8A54 Offset: 0x13E4A54 VA: 0x13E8A54
	public DistinguishedName get_Issuer() { }

	[CompilerGenerated]
	// RVA: 0x13E8A5C Offset: 0x13E4A5C VA: 0x13E8A5C
	private void set_Issuer(DistinguishedName value) { }

	[CompilerGenerated]
	// RVA: 0x13E8A64 Offset: 0x13E4A64 VA: 0x13E8A64
	public Asn1Node get_Signature() { }

	[CompilerGenerated]
	// RVA: 0x13E8A6C Offset: 0x13E4A6C VA: 0x13E8A6C
	private void set_Signature(Asn1Node value) { }

	// RVA: 0x13E8A74 Offset: 0x13E4A74 VA: 0x13E8A74
	public void .ctor(Asn1Node n) { }

	// RVA: 0x13E6B0C Offset: 0x13E2B0C VA: 0x13E6B0C
	public void .ctor(byte[] data) { }

	// RVA: 0x13E8DA8 Offset: 0x13E4DA8 VA: 0x13E8DA8
	public bool CheckCertTime(DateTime time) { }

	// RVA: 0x13E8E50 Offset: 0x13E4E50 VA: 0x13E8E50
	public bool CheckSignature(X509Cert signer) { }

	// RVA: 0x13E8EA0 Offset: 0x13E4EA0 VA: 0x13E8EA0
	private bool VerifySignatureWithSha256OrSha1(X509Cert signer) { }

	// RVA: 0x13E90B4 Offset: 0x13E50B4 VA: 0x13E90B4
	public bool CheckSignatureSha256(X509Cert signer) { }

	// RVA: 0x13E8AA0 Offset: 0x13E4AA0 VA: 0x13E8AA0
	private void ParseNode(Asn1Node root) { }

	// RVA: 0x13E9120 Offset: 0x13E5120 VA: 0x13E9120
	private DateTime ParseTime(Asn1Node n) { }
}


// Namespace: UnityEngine.Purchasing.Security
public class InvalidTimeFormat : IAPSecurityException // TypeDefIndex: 7429
{
	// Methods

	// RVA: 0x13E9380 Offset: 0x13E5380 VA: 0x13E9380
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing.Security
public class InvalidX509Data : IAPSecurityException // TypeDefIndex: 7430
{
	// Methods

	// RVA: 0x13E87A4 Offset: 0x13E47A4 VA: 0x13E87A4
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing.Security
public class StoreNotSupportedException : IAPSecurityException // TypeDefIndex: 7431
{
	// Methods

	// RVA: 0x13E9388 Offset: 0x13E5388 VA: 0x13E9388
	public void .ctor(string message) { }
}


// Namespace: UnityEngine.Purchasing.Security
public class InvalidBundleIdException : IAPSecurityException // TypeDefIndex: 7432
{
	// Methods

	// RVA: 0x13E9390 Offset: 0x13E5390 VA: 0x13E9390
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing.Security
public class InvalidReceiptDataException : IAPSecurityException // TypeDefIndex: 7433
{
	// Methods

	// RVA: 0x13E9398 Offset: 0x13E5398 VA: 0x13E9398
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing.Security
public class MissingStoreSecretException : IAPSecurityException // TypeDefIndex: 7434
{
	// Methods

	// RVA: 0x13E93A0 Offset: 0x13E53A0 VA: 0x13E93A0
	public void .ctor(string message) { }
}


// Namespace: UnityEngine.Purchasing.Security
public class InvalidPublicKeyException : IAPSecurityException // TypeDefIndex: 7435
{
	// Methods

	// RVA: 0x13E93A8 Offset: 0x13E53A8 VA: 0x13E93A8
	public void .ctor(string message) { }
}


// Namespace: UnityEngine.Purchasing.Security
public class GenericValidationException : IAPSecurityException // TypeDefIndex: 7436
{
	// Methods

	// RVA: 0x13E93B0 Offset: 0x13E53B0 VA: 0x13E93B0
	public void .ctor(string message) { }
}


// Namespace: UnityEngine.Purchasing.Security
public class CrossPlatformValidator // TypeDefIndex: 7437
{
	// Fields
	private GooglePlayValidator google; // 0x10
	private AppleValidator apple; // 0x18
	private string googleBundleId; // 0x20
	private string appleBundleId; // 0x28

	// Methods

	// RVA: 0x13E93B8 Offset: 0x13E53B8 VA: 0x13E93B8
	public void .ctor(byte[] googlePublicKey, byte[] appleRootCert, string appBundleId) { }

	// RVA: 0x13E93C4 Offset: 0x13E53C4 VA: 0x13E93C4
	public void .ctor(byte[] googlePublicKey, byte[] appleRootCert, byte[] unityChannelPublicKey_not_used, string googleBundleId, string appleBundleId, string xiaomiBundleId_not_used) { }

	// RVA: 0x13E95E8 Offset: 0x13E55E8 VA: 0x13E95E8
	public IPurchaseReceipt[] Validate(string unityIAPReceipt) { }
}


// Namespace: UnityEngine.Purchasing.Security
public enum GooglePurchaseState // TypeDefIndex: 7438
{
	// Fields
	public int value__; // 0x0
	public const GooglePurchaseState Purchased = 0;
	public const GooglePurchaseState Cancelled = 1;
	public const GooglePurchaseState Refunded = 2;
	public const GooglePurchaseState Deferred = 4;
}


// Namespace: UnityEngine.Purchasing.Security
public class GooglePlayReceipt : IPurchaseReceipt // TypeDefIndex: 7439
{
	// Fields
	[CompilerGenerated]
	private string <productID>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <orderID>k__BackingField; // 0x18
	[CompilerGenerated]
	private string <packageName>k__BackingField; // 0x20
	[CompilerGenerated]
	private string <purchaseToken>k__BackingField; // 0x28
	[CompilerGenerated]
	private DateTime <purchaseDate>k__BackingField; // 0x30
	[CompilerGenerated]
	private GooglePurchaseState <purchaseState>k__BackingField; // 0x38

	// Properties
	public string productID { get; set; }
	public string orderID { get; set; }
	public string transactionID { get; }
	public string packageName { get; set; }
	public string purchaseToken { get; set; }
	public DateTime purchaseDate { get; set; }
	public GooglePurchaseState purchaseState { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x13EA0C8 Offset: 0x13E60C8 VA: 0x13EA0C8 Slot: 5
	public string get_productID() { }

	[CompilerGenerated]
	// RVA: 0x13EA0D0 Offset: 0x13E60D0 VA: 0x13EA0D0
	private void set_productID(string value) { }

	[CompilerGenerated]
	// RVA: 0x13EA0D8 Offset: 0x13E60D8 VA: 0x13EA0D8
	public string get_orderID() { }

	[CompilerGenerated]
	// RVA: 0x13EA0E0 Offset: 0x13E60E0 VA: 0x13EA0E0
	private void set_orderID(string value) { }

	// RVA: 0x13EA0E8 Offset: 0x13E60E8 VA: 0x13EA0E8 Slot: 4
	public string get_transactionID() { }

	[CompilerGenerated]
	// RVA: 0x13EA0F0 Offset: 0x13E60F0 VA: 0x13EA0F0
	public string get_packageName() { }

	[CompilerGenerated]
	// RVA: 0x13EA0F8 Offset: 0x13E60F8 VA: 0x13EA0F8
	private void set_packageName(string value) { }

	[CompilerGenerated]
	// RVA: 0x13EA100 Offset: 0x13E6100 VA: 0x13EA100
	public string get_purchaseToken() { }

	[CompilerGenerated]
	// RVA: 0x13EA108 Offset: 0x13E6108 VA: 0x13EA108
	private void set_purchaseToken(string value) { }

	[CompilerGenerated]
	// RVA: 0x13EA110 Offset: 0x13E6110 VA: 0x13EA110 Slot: 6
	public DateTime get_purchaseDate() { }

	[CompilerGenerated]
	// RVA: 0x13EA118 Offset: 0x13E6118 VA: 0x13EA118
	private void set_purchaseDate(DateTime value) { }

	[CompilerGenerated]
	// RVA: 0x13EA120 Offset: 0x13E6120 VA: 0x13EA120
	public GooglePurchaseState get_purchaseState() { }

	[CompilerGenerated]
	// RVA: 0x13EA128 Offset: 0x13E6128 VA: 0x13EA128
	private void set_purchaseState(GooglePurchaseState value) { }

	// RVA: 0x13EA130 Offset: 0x13E6130 VA: 0x13EA130
	public void .ctor(string productID, string orderID, string packageName, string purchaseToken, DateTime purchaseTime, GooglePurchaseState purchaseState) { }
}


// Namespace: UnityEngine.Purchasing.Security
internal class GooglePlayValidator // TypeDefIndex: 7440
{
	// Fields
	private RSAKey key; // 0x10

	// Methods

	// RVA: 0x13E9578 Offset: 0x13E5578 VA: 0x13E9578
	public void .ctor(byte[] rsaKey) { }

	// RVA: 0x13E9D00 Offset: 0x13E5D00 VA: 0x13E9D00
	public GooglePlayReceipt Validate(string receipt, string signature) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class Obfuscator.<>c__DisplayClass0_0 // TypeDefIndex: 7441
{
	// Fields
	public int key; // 0x10

	// Methods

	// RVA: 0x13EA5F8 Offset: 0x13E65F8 VA: 0x13EA5F8
	public void .ctor() { }

	// RVA: 0x13EA600 Offset: 0x13E6600 VA: 0x13EA600
	internal byte <DeObfuscate>b__0(byte x) { }
}


// Namespace: UnityEngine.Purchasing.Security
public static class Obfuscator // TypeDefIndex: 7442
{
	// Methods

	// RVA: 0x13EA368 Offset: 0x13E6368 VA: 0x13EA368
	public static byte[] DeObfuscate(byte[] data, int[] order, int key) { }
}


// Namespace: UnityEngine.Purchasing.Security
internal class PKCS7 // TypeDefIndex: 7443
{
	// Fields
	private Asn1Node root; // 0x10
	[CompilerGenerated]
	private Asn1Node <data>k__BackingField; // 0x18
	[CompilerGenerated]
	private List<SignerInfo> <sinfos>k__BackingField; // 0x20
	[CompilerGenerated]
	private List<X509Cert> <certChain>k__BackingField; // 0x28
	private bool validStructure; // 0x30

	// Properties
	public Asn1Node data { get; set; }
	public List<SignerInfo> sinfos { get; set; }
	public List<X509Cert> certChain { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x13EA60C Offset: 0x13E660C VA: 0x13EA60C
	public Asn1Node get_data() { }

	[CompilerGenerated]
	// RVA: 0x13EA614 Offset: 0x13E6614 VA: 0x13EA614
	private void set_data(Asn1Node value) { }

	[CompilerGenerated]
	// RVA: 0x13EA61C Offset: 0x13E661C VA: 0x13EA61C
	public List<SignerInfo> get_sinfos() { }

	[CompilerGenerated]
	// RVA: 0x13EA624 Offset: 0x13E6624 VA: 0x13EA624
	private void set_sinfos(List<SignerInfo> value) { }

	[CompilerGenerated]
	// RVA: 0x13EA62C Offset: 0x13E662C VA: 0x13EA62C
	public List<X509Cert> get_certChain() { }

	[CompilerGenerated]
	// RVA: 0x13EA634 Offset: 0x13E6634 VA: 0x13EA634
	private void set_certChain(List<X509Cert> value) { }

	// RVA: 0x13E77A0 Offset: 0x13E37A0 VA: 0x13E77A0
	public void .ctor(Asn1Node node) { }

	// RVA: 0x13E741C Offset: 0x13E341C VA: 0x13E741C
	public bool Verify(X509Cert cert, DateTime certificateCreationTime) { }

	// RVA: 0x13EAABC Offset: 0x13E6ABC VA: 0x13EAABC
	private X509Cert FindSignCert(SignerInfo sinfo) { }

	// RVA: 0x13EAC40 Offset: 0x13E6C40 VA: 0x13EAC40
	private bool IsStoreKitSimulatorData() { }

	// RVA: 0x13EACA4 Offset: 0x13E6CA4 VA: 0x13EACA4
	private bool VerifyPublicKeyWithSha256OrSha1(X509Cert signCert, SignerInfo sinfo) { }

	// RVA: 0x13EAC88 Offset: 0x13E6C88 VA: 0x13EAC88
	private static bool ValidateStoreKitSimulatorCertRoot(X509Cert root, X509Cert cert) { }

	// RVA: 0x13EAD34 Offset: 0x13E6D34 VA: 0x13EAD34
	private bool ValidateChain(X509Cert root, X509Cert cert, DateTime certificateCreationTime) { }

	// RVA: 0x13EA63C Offset: 0x13E663C VA: 0x13EA63C
	private void CheckStructure() { }
}


// Namespace: UnityEngine.Purchasing.Security
internal class SignerInfo // TypeDefIndex: 7444
{
	// Fields
	[CompilerGenerated]
	private int <Version>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <IssuerSerialNumber>k__BackingField; // 0x18
	[CompilerGenerated]
	private byte[] <EncryptedDigest>k__BackingField; // 0x20

	// Properties
	public int Version { get; set; }
	public string IssuerSerialNumber { get; set; }
	public byte[] EncryptedDigest { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x13EB1A0 Offset: 0x13E71A0 VA: 0x13EB1A0
	public int get_Version() { }

	[CompilerGenerated]
	// RVA: 0x13EB1A8 Offset: 0x13E71A8 VA: 0x13EB1A8
	private void set_Version(int value) { }

	[CompilerGenerated]
	// RVA: 0x13EB1B0 Offset: 0x13E71B0 VA: 0x13EB1B0
	public string get_IssuerSerialNumber() { }

	[CompilerGenerated]
	// RVA: 0x13EB1B8 Offset: 0x13E71B8 VA: 0x13EB1B8
	private void set_IssuerSerialNumber(string value) { }

	[CompilerGenerated]
	// RVA: 0x13EB1C0 Offset: 0x13E71C0 VA: 0x13EB1C0
	public byte[] get_EncryptedDigest() { }

	[CompilerGenerated]
	// RVA: 0x13EB1C8 Offset: 0x13E71C8 VA: 0x13EB1C8
	private void set_EncryptedDigest(byte[] value) { }

	// RVA: 0x13EAFC4 Offset: 0x13E6FC4 VA: 0x13EAFC4
	public void .ctor(Asn1Node n) { }
}


// Namespace: UnityEngine.Purchasing.Security
public class InvalidPKCS7Data : IAPSecurityException // TypeDefIndex: 7445
{
	// Methods

	// RVA: 0x13E7C44 Offset: 0x13E3C44 VA: 0x13E7C44
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing.Security
public class UnsupportedSignerInfoVersion : IAPSecurityException // TypeDefIndex: 7446
{
	// Methods

	// RVA: 0x13EB1D0 Offset: 0x13E71D0 VA: 0x13EB1D0
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing.Security
internal class RSAKey // TypeDefIndex: 7447
{
	// Fields
	[CompilerGenerated]
	private RSACryptoServiceProvider <rsa>k__BackingField; // 0x10

	// Properties
	public RSACryptoServiceProvider rsa { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x13EB1D8 Offset: 0x13E71D8 VA: 0x13EB1D8
	public RSACryptoServiceProvider get_rsa() { }

	[CompilerGenerated]
	// RVA: 0x13EB1E0 Offset: 0x13E71E0 VA: 0x13EB1E0
	private void set_rsa(RSACryptoServiceProvider value) { }

	// RVA: 0x13E934C Offset: 0x13E534C VA: 0x13E934C
	public void .ctor(Asn1Node n) { }

	// RVA: 0x13EA188 Offset: 0x13E6188 VA: 0x13EA188
	public void .ctor(byte[] data) { }

	// RVA: 0x13E901C Offset: 0x13E501C VA: 0x13E901C
	public bool VerifySha1(byte[] message, byte[] signature) { }

	// RVA: 0x13E8F30 Offset: 0x13E4F30 VA: 0x13E8F30
	public bool VerifySha256(byte[] message, byte[] signature) { }

	// RVA: 0x13EB1E8 Offset: 0x13E71E8 VA: 0x13EB1E8
	private RSACryptoServiceProvider ParseNode(Asn1Node n) { }

	// RVA: 0x13EB484 Offset: 0x13E7484 VA: 0x13EB484
	private string ToXML(string modulus, string exponent) { }
}


// Namespace: UnityEngine.Purchasing.Security
public class InvalidRSAData : IAPSecurityException // TypeDefIndex: 7448
{
	// Methods

	// RVA: 0x13EB570 Offset: 0x13E7570 VA: 0x13EB570
	public void .ctor() { }
}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=32 // TypeDefIndex: 7449
{}


// Namespace: 
[CompilerGenerated]
internal sealed class <PrivateImplementationDetails> // TypeDefIndex: 7450
{
	// Fields
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=32 2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70 /*Metadata offset 0x390398*/; // 0x0

	// Methods

	// RVA: 0x13E87AC Offset: 0x13E47AC VA: 0x13E87AC
	internal static uint ComputeStringHash(string s) { }
}
