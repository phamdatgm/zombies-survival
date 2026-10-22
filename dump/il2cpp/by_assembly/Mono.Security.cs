// Namespace: 
internal class <Module> // TypeDefIndex: 6906
{}


// Namespace: 
internal sealed class Locale // TypeDefIndex: 6907
{
	// Methods

	// RVA: 0xCE8D20 Offset: 0xCE4D20 VA: 0xCE8D20
	public static string GetText(string msg) { }

	// RVA: 0xCE8D24 Offset: 0xCE4D24 VA: 0xCE8D24
	public static string GetText(string fmt, object[] args) { }
}


// Namespace: Mono.Security
[DefaultMember("Item")]
public class ASN1 // TypeDefIndex: 6908
{
	// Fields
	private byte m_nTag; // 0x10
	private byte[] m_aValue; // 0x18
	private ArrayList elist; // 0x20

	// Properties
	public int Count { get; }
	public byte Tag { get; }
	public int Length { get; }
	public byte[] Value { get; set; }
	public ASN1 Item { get; }

	// Methods

	// RVA: 0xCE8D2C Offset: 0xCE4D2C VA: 0xCE8D2C
	public void .ctor(byte tag) { }

	// RVA: 0xCE8D58 Offset: 0xCE4D58 VA: 0xCE8D58
	public void .ctor(byte tag, byte[] data) { }

	// RVA: 0xCE8D88 Offset: 0xCE4D88 VA: 0xCE8D88
	public void .ctor(byte[] data) { }

	// RVA: 0xCE9008 Offset: 0xCE5008 VA: 0xCE9008
	public int get_Count() { }

	// RVA: 0xCE9024 Offset: 0xCE5024 VA: 0xCE9024
	public byte get_Tag() { }

	// RVA: 0xCE902C Offset: 0xCE502C VA: 0xCE902C
	public int get_Length() { }

	// RVA: 0xCE9044 Offset: 0xCE5044 VA: 0xCE9044
	public byte[] get_Value() { }

	// RVA: 0xCE90D4 Offset: 0xCE50D4 VA: 0xCE90D4
	public void set_Value(byte[] value) { }

	// RVA: 0xCE917C Offset: 0xCE517C VA: 0xCE917C
	private bool CompareArray(byte[] array1, byte[] array2) { }

	// RVA: 0xCE9204 Offset: 0xCE5204 VA: 0xCE9204
	public bool CompareValue(byte[] value) { }

	// RVA: 0xCE9214 Offset: 0xCE5214 VA: 0xCE9214
	public ASN1 Add(ASN1 asn1) { }

	// RVA: 0xCE92A0 Offset: 0xCE52A0 VA: 0xCE92A0 Slot: 4
	public virtual byte[] GetBytes() { }

	// RVA: 0xCE8EEC Offset: 0xCE4EEC VA: 0xCE8EEC
	protected void Decode(byte[] asn1, ref int anPos, int anLength) { }

	// RVA: 0xCE9924 Offset: 0xCE5924 VA: 0xCE9924
	protected void DecodeTLV(byte[] asn1, ref int pos, out byte tag, out int length, out byte[] content) { }

	// RVA: 0xCE9A48 Offset: 0xCE5A48 VA: 0xCE9A48
	public ASN1 get_Item(int index) { }

	// RVA: 0xCE9B78 Offset: 0xCE5B78 VA: 0xCE9B78
	public ASN1 Element(int index, byte anTag) { }

	// RVA: 0xCE9CCC Offset: 0xCE5CCC VA: 0xCE9CCC Slot: 3
	public override string ToString() { }
}


// Namespace: Mono.Security
public static class ASN1Convert // TypeDefIndex: 6909
{
	// Methods

	// RVA: 0xCE9F60 Offset: 0xCE5F60 VA: 0xCE9F60
	public static ASN1 FromInt32(int value) { }

	// RVA: 0xCEA0E4 Offset: 0xCE60E4 VA: 0xCEA0E4
	public static ASN1 FromOid(string oid) { }

	// RVA: 0xCEA1C0 Offset: 0xCE61C0 VA: 0xCEA1C0
	public static ASN1 FromUnsignedBigInteger(byte[] big) { }

	// RVA: 0xCEA2D0 Offset: 0xCE62D0 VA: 0xCEA2D0
	public static int ToInt32(ASN1 asn1) { }

	// RVA: 0xCEA3E0 Offset: 0xCE63E0 VA: 0xCEA3E0
	public static string ToOid(ASN1 asn1) { }

	// RVA: 0xCEA668 Offset: 0xCE6668 VA: 0xCEA668
	public static DateTime ToDateTime(ASN1 time) { }
}


// Namespace: Mono.Security
internal sealed class BitConverterLE // TypeDefIndex: 6910
{
	// Methods

	// RVA: 0xCEABD8 Offset: 0xCE6BD8 VA: 0xCEABD8
	private static byte[] GetUIntBytes(byte* bytes) { }

	// RVA: 0xCEAC70 Offset: 0xCE6C70 VA: 0xCEAC70
	private static byte[] GetULongBytes(byte* bytes) { }

	// RVA: 0xCEA0CC Offset: 0xCE60CC VA: 0xCEA0CC
	internal static byte[] GetBytes(int value) { }

	// RVA: 0xCEAD48 Offset: 0xCE6D48 VA: 0xCEAD48
	internal static byte[] GetBytes(long value) { }

	// RVA: 0xCEAD60 Offset: 0xCE6D60 VA: 0xCEAD60
	private static void UShortFromBytes(byte* dst, byte[] src, int startIndex) { }

	// RVA: 0xCEADAC Offset: 0xCE6DAC VA: 0xCEADAC
	private static void UIntFromBytes(byte* dst, byte[] src, int startIndex) { }

	// RVA: 0xCEAE30 Offset: 0xCE6E30 VA: 0xCEAE30
	internal static int ToInt32(byte[] value, int startIndex) { }

	// RVA: 0xCEAE54 Offset: 0xCE6E54 VA: 0xCEAE54
	internal static ushort ToUInt16(byte[] value, int startIndex) { }

	// RVA: 0xCEAE78 Offset: 0xCE6E78 VA: 0xCEAE78
	internal static uint ToUInt32(byte[] value, int startIndex) { }
}


// Namespace: 
public class PKCS7.ContentInfo // TypeDefIndex: 6911
{
	// Fields
	private string contentType; // 0x10
	private ASN1 content; // 0x18

	// Properties
	public ASN1 ASN1 { get; }
	public ASN1 Content { get; set; }
	public string ContentType { get; set; }

	// Methods

	// RVA: 0xCEAE9C Offset: 0xCE6E9C VA: 0xCEAE9C
	public void .ctor() { }

	// RVA: 0xCEAF0C Offset: 0xCE6F0C VA: 0xCEAF0C
	public void .ctor(string oid) { }

	// RVA: 0xCEAF30 Offset: 0xCE6F30 VA: 0xCEAF30
	public void .ctor(byte[] data) { }

	// RVA: 0xCEAF98 Offset: 0xCE6F98 VA: 0xCEAF98
	public void .ctor(ASN1 asn1) { }

	// RVA: 0xCEB114 Offset: 0xCE7114 VA: 0xCEB114
	public ASN1 get_ASN1() { }

	// RVA: 0xCEB1C4 Offset: 0xCE71C4 VA: 0xCEB1C4
	public ASN1 get_Content() { }

	// RVA: 0xCEB1CC Offset: 0xCE71CC VA: 0xCEB1CC
	public void set_Content(ASN1 value) { }

	// RVA: 0xCEB1D4 Offset: 0xCE71D4 VA: 0xCEB1D4
	public string get_ContentType() { }

	// RVA: 0xCEB1DC Offset: 0xCE71DC VA: 0xCEB1DC
	public void set_ContentType(string value) { }

	// RVA: 0xCEB118 Offset: 0xCE7118 VA: 0xCEB118
	internal ASN1 GetASN1() { }
}


// Namespace: 
public class PKCS7.EncryptedData // TypeDefIndex: 6912
{
	// Fields
	private byte _version; // 0x10
	private PKCS7.ContentInfo _content; // 0x18
	private PKCS7.ContentInfo _encryptionAlgorithm; // 0x20
	private byte[] _encrypted; // 0x28

	// Properties
	public PKCS7.ContentInfo EncryptionAlgorithm { get; }
	public byte[] EncryptedContent { get; }

	// Methods

	// RVA: 0xCEB1E4 Offset: 0xCE71E4 VA: 0xCEB1E4
	public void .ctor() { }

	// RVA: 0xCEB200 Offset: 0xCE7200 VA: 0xCEB200
	public void .ctor(ASN1 asn1) { }

	// RVA: 0xCEB4B8 Offset: 0xCE74B8 VA: 0xCEB4B8
	public PKCS7.ContentInfo get_EncryptionAlgorithm() { }

	// RVA: 0xCEB4C0 Offset: 0xCE74C0 VA: 0xCEB4C0
	public byte[] get_EncryptedContent() { }
}


// Namespace: 
public class PKCS7.SignedData // TypeDefIndex: 6913
{
	// Fields
	private byte version; // 0x10
	private string hashAlgorithm; // 0x18
	private PKCS7.ContentInfo contentInfo; // 0x20
	private X509CertificateCollection certs; // 0x28
	private ArrayList crls; // 0x30
	private PKCS7.SignerInfo signerInfo; // 0x38
	private bool mda; // 0x40

	// Properties
	public X509CertificateCollection Certificates { get; }
	public PKCS7.ContentInfo ContentInfo { get; }
	public string HashName { set; }
	public PKCS7.SignerInfo SignerInfo { get; }

	// Methods

	// RVA: 0xCEB534 Offset: 0xCE7534 VA: 0xCEB534
	public void .ctor(ASN1 asn1) { }

	// RVA: 0xCEC1C4 Offset: 0xCE81C4 VA: 0xCEC1C4
	public X509CertificateCollection get_Certificates() { }

	// RVA: 0xCEC1CC Offset: 0xCE81CC VA: 0xCEC1CC
	public PKCS7.ContentInfo get_ContentInfo() { }

	// RVA: 0xCEC1A4 Offset: 0xCE81A4 VA: 0xCEC1A4
	public void set_HashName(string value) { }

	// RVA: 0xCEC1D4 Offset: 0xCE81D4 VA: 0xCEC1D4
	public PKCS7.SignerInfo get_SignerInfo() { }

	// RVA: 0xCEBFF0 Offset: 0xCE7FF0 VA: 0xCEBFF0
	internal string OidToName(string oid) { }
}


// Namespace: 
public class PKCS7.SignerInfo // TypeDefIndex: 6914
{
	// Fields
	private byte version; // 0x10
	private string hashAlgorithm; // 0x18
	private ArrayList authenticatedAttributes; // 0x20
	private ArrayList unauthenticatedAttributes; // 0x28
	private byte[] signature; // 0x30
	private string issuer; // 0x38
	private byte[] serial; // 0x40
	private byte[] ski; // 0x48

	// Properties
	public string IssuerName { get; }
	public byte[] SerialNumber { get; }
	public ArrayList AuthenticatedAttributes { get; }
	public string HashName { get; set; }
	public byte[] Signature { get; }
	public ArrayList UnauthenticatedAttributes { get; }
	public byte Version { get; }

	// Methods

	// RVA: 0xCEBF6C Offset: 0xCE7F6C VA: 0xCEBF6C
	public void .ctor() { }

	// RVA: 0xCEBBFC Offset: 0xCE7BFC VA: 0xCEBBFC
	public void .ctor(ASN1 asn1) { }

	// RVA: 0xCEC318 Offset: 0xCE8318 VA: 0xCEC318
	public string get_IssuerName() { }

	// RVA: 0xCEC320 Offset: 0xCE8320 VA: 0xCEC320
	public byte[] get_SerialNumber() { }

	// RVA: 0xCEC394 Offset: 0xCE8394 VA: 0xCEC394
	public ArrayList get_AuthenticatedAttributes() { }

	// RVA: 0xCEC39C Offset: 0xCE839C VA: 0xCEC39C
	public string get_HashName() { }

	// RVA: 0xCEC3A4 Offset: 0xCE83A4 VA: 0xCEC3A4
	public void set_HashName(string value) { }

	// RVA: 0xCEC3AC Offset: 0xCE83AC VA: 0xCEC3AC
	public byte[] get_Signature() { }

	// RVA: 0xCEC420 Offset: 0xCE8420 VA: 0xCEC420
	public ArrayList get_UnauthenticatedAttributes() { }

	// RVA: 0xCEC428 Offset: 0xCE8428 VA: 0xCEC428
	public byte get_Version() { }
}


// Namespace: Mono.Security
public sealed class PKCS7 // TypeDefIndex: 6915
{}


// Namespace: Mono.Security.X509
internal class SafeBag // TypeDefIndex: 6916
{
	// Fields
	private string _bagOID; // 0x10
	private ASN1 _asn1; // 0x18

	// Properties
	public string BagOID { get; }
	public ASN1 ASN1 { get; }

	// Methods

	// RVA: 0xCEC430 Offset: 0xCE8430 VA: 0xCEC430
	public void .ctor(string bagOID, ASN1 asn1) { }

	// RVA: 0xCEC45C Offset: 0xCE845C VA: 0xCEC45C
	public string get_BagOID() { }

	// RVA: 0xCEC464 Offset: 0xCE8464 VA: 0xCEC464
	public ASN1 get_ASN1() { }
}


// Namespace: 
public class PKCS12.DeriveBytes // TypeDefIndex: 6917
{
	// Fields
	private static byte[] keyDiversifier; // 0x0
	private static byte[] ivDiversifier; // 0x8
	private static byte[] macDiversifier; // 0x10
	private string _hashName; // 0x10
	private int _iterations; // 0x18
	private byte[] _password; // 0x20
	private byte[] _salt; // 0x28

	// Properties
	public string HashName { set; }
	public int IterationCount { set; }
	public byte[] Password { set; }
	public byte[] Salt { set; }

	// Methods

	// RVA: 0xCEEA94 Offset: 0xCEAA94 VA: 0xCEEA94
	public void .ctor() { }

	// RVA: 0xCF32C0 Offset: 0xCEF2C0 VA: 0xCF32C0
	public void set_HashName(string value) { }

	// RVA: 0xCF32C8 Offset: 0xCEF2C8 VA: 0xCF32C8
	public void set_IterationCount(int value) { }

	// RVA: 0xCEEA9C Offset: 0xCEAA9C VA: 0xCEEA9C
	public void set_Password(byte[] value) { }

	// RVA: 0xCEEB58 Offset: 0xCEAB58 VA: 0xCEEB58
	public void set_Salt(byte[] value) { }

	// RVA: 0xCF32D0 Offset: 0xCEF2D0 VA: 0xCF32D0
	private void Adjust(byte[] a, int aOff, byte[] b) { }

	// RVA: 0xCF3390 Offset: 0xCEF390 VA: 0xCF3390
	private byte[] Derive(byte[] diversifier, int n) { }

	// RVA: 0xCEEC00 Offset: 0xCEAC00 VA: 0xCEEC00
	public byte[] DeriveKey(int size) { }

	// RVA: 0xCEEC70 Offset: 0xCEAC70 VA: 0xCEEC70
	public byte[] DeriveIV(int size) { }

	// RVA: 0xCF046C Offset: 0xCEC46C VA: 0xCF046C
	public byte[] DeriveMAC(int size) { }

	// RVA: 0xCF37C0 Offset: 0xCEF7C0 VA: 0xCF37C0
	private static void .cctor() { }
}


// Namespace: Mono.Security.X509
public class PKCS12 : ICloneable // TypeDefIndex: 6918
{
	// Fields
	private byte[] _password; // 0x10
	private ArrayList _keyBags; // 0x18
	private ArrayList _secretBags; // 0x20
	private X509CertificateCollection _certs; // 0x28
	private bool _keyBagsChanged; // 0x30
	private bool _secretBagsChanged; // 0x31
	private bool _certsChanged; // 0x32
	private int _iterations; // 0x34
	private ArrayList _safeBags; // 0x38
	private RandomNumberGenerator _rng; // 0x40
	private static int password_max_length; // 0x0

	// Properties
	public string Password { set; }
	public int IterationCount { get; set; }
	public ArrayList Keys { get; }
	public X509CertificateCollection Certificates { get; }
	internal RandomNumberGenerator RNG { get; }
	public static int MaximumPasswordLength { get; }

	// Methods

	// RVA: 0xCEC46C Offset: 0xCE846C VA: 0xCEC46C
	public void .ctor() { }

	// RVA: 0xCEC544 Offset: 0xCE8544 VA: 0xCEC544
	public void .ctor(byte[] data) { }

	// RVA: 0xCECDB8 Offset: 0xCE8DB8 VA: 0xCECDB8
	public void .ctor(byte[] data, string password) { }

	// RVA: 0xCEC734 Offset: 0xCE8734 VA: 0xCEC734
	private void Decode(byte[] data) { }

	// RVA: 0xCED730 Offset: 0xCE9730 VA: 0xCED730 Slot: 1
	protected override void Finalize() { }

	// RVA: 0xCEC578 Offset: 0xCE8578 VA: 0xCEC578
	public void set_Password(string value) { }

	// RVA: 0xCED7DC Offset: 0xCE97DC VA: 0xCED7DC
	public int get_IterationCount() { }

	// RVA: 0xCED7E4 Offset: 0xCE97E4 VA: 0xCED7E4
	public void set_IterationCount(int value) { }

	// RVA: 0xCED7EC Offset: 0xCE97EC VA: 0xCED7EC
	public ArrayList get_Keys() { }

	// RVA: 0xCEE0A0 Offset: 0xCEA0A0 VA: 0xCEE0A0
	public X509CertificateCollection get_Certificates() { }

	// RVA: 0xCEE4E0 Offset: 0xCEA4E0 VA: 0xCEE4E0
	internal RandomNumberGenerator get_RNG() { }

	// RVA: 0xCECF44 Offset: 0xCE8F44 VA: 0xCECF44
	private bool Compare(byte[] expected, byte[] actual) { }

	// RVA: 0xCEE500 Offset: 0xCEA500 VA: 0xCEE500
	private SymmetricAlgorithm GetSymmetricAlgorithm(string algorithmOid, byte[] salt, int iterationCount) { }

	// RVA: 0xCEDEF0 Offset: 0xCE9EF0 VA: 0xCEDEF0
	public byte[] Decrypt(string algorithmOid, byte[] salt, int iterationCount, byte[] encryptedData) { }

	// RVA: 0xCED6A0 Offset: 0xCE96A0 VA: 0xCED6A0
	public byte[] Decrypt(PKCS7.EncryptedData ed) { }

	// RVA: 0xCEECE0 Offset: 0xCEACE0 VA: 0xCEECE0
	public byte[] Encrypt(string algorithmOid, byte[] salt, int iterationCount, byte[] data) { }

	// RVA: 0xCEEF30 Offset: 0xCEAF30 VA: 0xCEEF30
	private DSAParameters GetExistingParameters(out bool found) { }

	// RVA: 0xCEF638 Offset: 0xCEB638 VA: 0xCEF638
	private void AddPrivateKey(PKCS8.PrivateKeyInfo pki) { }

	// RVA: 0xCECFCC Offset: 0xCE8FCC VA: 0xCECFCC
	private void ReadSafeBag(ASN1 safeBag) { }

	// RVA: 0xCEF894 Offset: 0xCEB894 VA: 0xCEF894
	private ASN1 CertificateSafeBag(X509Certificate x509, IDictionary attributes) { }

	// RVA: 0xCECDF0 Offset: 0xCE8DF0 VA: 0xCECDF0
	private byte[] MAC(byte[] password, byte[] salt, int iterations, byte[] data) { }

	// RVA: 0xCF04DC Offset: 0xCEC4DC VA: 0xCF04DC
	public byte[] GetBytes() { }

	// RVA: 0xCF270C Offset: 0xCEE70C VA: 0xCF270C
	private PKCS7.ContentInfo EncryptedContentInfo(ASN1 safeBags, string algorithmOid) { }

	// RVA: 0xCF2704 Offset: 0xCEE704 VA: 0xCF2704
	public void AddCertificate(X509Certificate cert) { }

	// RVA: 0xCF29FC Offset: 0xCEE9FC VA: 0xCF29FC
	public void AddCertificate(X509Certificate cert, IDictionary attributes) { }

	// RVA: 0xCF26FC Offset: 0xCEE6FC VA: 0xCF26FC
	public void RemoveCertificate(X509Certificate cert) { }

	// RVA: 0xCF2C48 Offset: 0xCEEC48 VA: 0xCF2C48
	public void RemoveCertificate(X509Certificate cert, IDictionary attrs) { }

	// RVA: 0xCF3154 Offset: 0xCEF154 VA: 0xCF3154 Slot: 4
	public object Clone() { }

	// RVA: 0xCF321C Offset: 0xCEF21C VA: 0xCF321C
	public static int get_MaximumPasswordLength() { }

	// RVA: 0xCF3274 Offset: 0xCEF274 VA: 0xCF3274
	private static void .cctor() { }
}


// Namespace: Mono.Security.X509
public sealed class X501 // TypeDefIndex: 6919
{
	// Fields
	private static byte[] countryName; // 0x0
	private static byte[] organizationName; // 0x8
	private static byte[] organizationalUnitName; // 0x10
	private static byte[] commonName; // 0x18
	private static byte[] localityName; // 0x20
	private static byte[] stateOrProvinceName; // 0x28
	private static byte[] streetAddress; // 0x30
	private static byte[] serialNumber; // 0x38
	private static byte[] domainComponent; // 0x40
	private static byte[] userid; // 0x48
	private static byte[] email; // 0x50
	private static byte[] dnQualifier; // 0x58
	private static byte[] title; // 0x60
	private static byte[] surname; // 0x68
	private static byte[] givenName; // 0x70
	private static byte[] initial; // 0x78

	// Methods

	// RVA: 0xCEC1DC Offset: 0xCE81DC VA: 0xCEC1DC
	public static string ToString(ASN1 seq) { }

	// RVA: 0xCF409C Offset: 0xCF009C VA: 0xCF409C
	public static string ToString(ASN1 seq, bool reversed, string separator, bool quotes) { }

	// RVA: 0xCF38D4 Offset: 0xCEF8D4 VA: 0xCF38D4
	private static void AppendEntry(StringBuilder sb, ASN1 entry, bool quotes) { }

	// RVA: 0xCF425C Offset: 0xCF025C VA: 0xCF425C
	private static void .cctor() { }
}


// Namespace: 
public class X509Crl.X509CrlEntry // TypeDefIndex: 6920
{
	// Fields
	private byte[] sn; // 0x10
	private DateTime revocationDate; // 0x18
	private X509ExtensionCollection extensions; // 0x20

	// Properties
	public byte[] SerialNumber { get; }

	// Methods

	// RVA: 0xCF4DD4 Offset: 0xCF0DD4 VA: 0xCF4DD4
	internal void .ctor(ASN1 entry) { }

	// RVA: 0xCF5440 Offset: 0xCF1440 VA: 0xCF5440
	public byte[] get_SerialNumber() { }
}


// Namespace: Mono.Security.X509
[DefaultMember("Item")]
public class X509Crl // TypeDefIndex: 6921
{
	// Fields
	private string issuer; // 0x10
	private byte version; // 0x18
	private DateTime thisUpdate; // 0x20
	private DateTime nextUpdate; // 0x28
	private ArrayList entries; // 0x30
	private string signatureOID; // 0x38
	private byte[] signature; // 0x40
	private X509ExtensionCollection extensions; // 0x48
	private byte[] encoded; // 0x50
	private byte[] hash_value; // 0x58

	// Properties
	public byte[] Hash { get; }

	// Methods

	// RVA: 0xCF468C Offset: 0xCF068C VA: 0xCF468C
	public void .ctor(byte[] crl) { }

	// RVA: 0xCF4780 Offset: 0xCF0780 VA: 0xCF4780
	private void Parse(byte[] crl) { }

	// RVA: 0xCF4FDC Offset: 0xCF0FDC VA: 0xCF4FDC
	public byte[] get_Hash() { }

	// RVA: 0xCF51F4 Offset: 0xCF11F4 VA: 0xCF51F4
	private bool Compare(byte[] array1, byte[] array2) { }

	// RVA: 0xCF5284 Offset: 0xCF1284 VA: 0xCF5284
	public X509Crl.X509CrlEntry GetCrlEntry(X509Certificate x509) { }

	// RVA: 0xCF52FC Offset: 0xCF12FC VA: 0xCF52FC
	public X509Crl.X509CrlEntry GetCrlEntry(byte[] serialNumber) { }

	// RVA: 0xCF54B8 Offset: 0xCF14B8 VA: 0xCF54B8
	internal bool VerifySignature(DSA dsa) { }

	// RVA: 0xCF577C Offset: 0xCF177C VA: 0xCF577C
	internal bool VerifySignature(RSA rsa) { }

	// RVA: 0xCF5850 Offset: 0xCF1850 VA: 0xCF5850
	public bool VerifySignature(AsymmetricAlgorithm aa) { }
}


// Namespace: Mono.Security.X509
public class X509Certificate : ISerializable // TypeDefIndex: 6922
{
	// Fields
	private ASN1 decoder; // 0x10
	private byte[] m_encodedcert; // 0x18
	private DateTime m_from; // 0x20
	private DateTime m_until; // 0x28
	private ASN1 issuer; // 0x30
	private string m_issuername; // 0x38
	private string m_keyalgo; // 0x40
	private byte[] m_keyalgoparams; // 0x48
	private ASN1 subject; // 0x50
	private string m_subject; // 0x58
	private byte[] m_publickey; // 0x60
	private byte[] signature; // 0x68
	private string m_signaturealgo; // 0x70
	private byte[] m_signaturealgoparams; // 0x78
	private byte[] certhash; // 0x80
	private RSA _rsa; // 0x88
	private DSA _dsa; // 0x90
	private int version; // 0x98
	private byte[] serialnumber; // 0xA0
	private byte[] issuerUniqueID; // 0xA8
	private byte[] subjectUniqueID; // 0xB0
	private X509ExtensionCollection extensions; // 0xB8
	private static string encoding_error; // 0x0

	// Properties
	public DSA DSA { get; set; }
	public X509ExtensionCollection Extensions { get; }
	public byte[] Hash { get; }
	public virtual string IssuerName { get; }
	public virtual byte[] KeyAlgorithmParameters { get; }
	public virtual byte[] PublicKey { get; }
	public virtual RSA RSA { get; set; }
	public virtual byte[] RawData { get; }
	public virtual byte[] SerialNumber { get; }
	public virtual byte[] Signature { get; }
	public virtual string SubjectName { get; }
	public virtual DateTime ValidFrom { get; }
	public virtual DateTime ValidUntil { get; }
	public int Version { get; }
	public bool IsCurrent { get; }
	public bool IsSelfSigned { get; }

	// Methods

	// RVA: 0xCF59C4 Offset: 0xCF19C4 VA: 0xCF59C4
	private void Parse(byte[] data) { }

	// RVA: 0xCEBA00 Offset: 0xCE7A00 VA: 0xCEBA00
	public void .ctor(byte[] data) { }

	// RVA: 0xCF63BC Offset: 0xCF23BC VA: 0xCF63BC
	private byte[] GetUnsignedBigInteger(byte[] integer) { }

	// RVA: 0xCEF300 Offset: 0xCEB300 VA: 0xCEF300
	public DSA get_DSA() { }

	// RVA: 0xCF6450 Offset: 0xCF2450 VA: 0xCF6450
	public void set_DSA(DSA value) { }

	// RVA: 0xCF6460 Offset: 0xCF2460 VA: 0xCF6460
	public X509ExtensionCollection get_Extensions() { }

	// RVA: 0xCF6468 Offset: 0xCF2468 VA: 0xCF6468
	public byte[] get_Hash() { }

	// RVA: 0xCF6700 Offset: 0xCF2700 VA: 0xCF6700 Slot: 5
	public virtual string get_IssuerName() { }

	// RVA: 0xCF6708 Offset: 0xCF2708 VA: 0xCF6708 Slot: 6
	public virtual byte[] get_KeyAlgorithmParameters() { }

	// RVA: 0xCF677C Offset: 0xCF277C VA: 0xCF677C Slot: 7
	public virtual byte[] get_PublicKey() { }

	// RVA: 0xCF67F0 Offset: 0xCF27F0 VA: 0xCF67F0 Slot: 8
	public virtual RSA get_RSA() { }

	// RVA: 0xCF6984 Offset: 0xCF2984 VA: 0xCF6984 Slot: 9
	public virtual void set_RSA(RSA value) { }

	// RVA: 0xCF6994 Offset: 0xCF2994 VA: 0xCF6994 Slot: 10
	public virtual byte[] get_RawData() { }

	// RVA: 0xCF6A08 Offset: 0xCF2A08 VA: 0xCF6A08 Slot: 11
	public virtual byte[] get_SerialNumber() { }

	// RVA: 0xCF6A7C Offset: 0xCF2A7C VA: 0xCF6A7C Slot: 12
	public virtual byte[] get_Signature() { }

	// RVA: 0xCF6EB0 Offset: 0xCF2EB0 VA: 0xCF6EB0 Slot: 13
	public virtual string get_SubjectName() { }

	// RVA: 0xCF6EB8 Offset: 0xCF2EB8 VA: 0xCF6EB8 Slot: 14
	public virtual DateTime get_ValidFrom() { }

	// RVA: 0xCF6EC0 Offset: 0xCF2EC0 VA: 0xCF6EC0 Slot: 15
	public virtual DateTime get_ValidUntil() { }

	// RVA: 0xCF6EC8 Offset: 0xCF2EC8 VA: 0xCF6EC8
	public int get_Version() { }

	// RVA: 0xCF6ED0 Offset: 0xCF2ED0 VA: 0xCF6ED0
	public bool get_IsCurrent() { }

	// RVA: 0xCF6F30 Offset: 0xCF2F30 VA: 0xCF6F30
	public bool WasCurrent(DateTime instant) { }

	// RVA: 0xCF7008 Offset: 0xCF3008 VA: 0xCF7008
	internal bool VerifySignature(DSA dsa) { }

	// RVA: 0xCF70CC Offset: 0xCF30CC VA: 0xCF70CC
	internal bool VerifySignature(RSA rsa) { }

	// RVA: 0xCF71F0 Offset: 0xCF31F0 VA: 0xCF71F0
	public bool VerifySignature(AsymmetricAlgorithm aa) { }

	// RVA: 0xCF7364 Offset: 0xCF3364 VA: 0xCF7364
	public bool get_IsSelfSigned() { }

	// RVA: 0xCF746C Offset: 0xCF346C VA: 0xCF746C Slot: 16
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context) { }

	// RVA: 0xCF6288 Offset: 0xCF2288 VA: 0xCF6288
	private static byte[] PEM(string type, byte[] data) { }

	// RVA: 0xCF74C8 Offset: 0xCF34C8 VA: 0xCF74C8
	private static void .cctor() { }
}


// Namespace: 
public class X509CertificateCollection.X509CertificateEnumerator : IEnumerator // TypeDefIndex: 6923
{
	// Fields
	private IEnumerator enumerator; // 0x10

	// Properties
	public X509Certificate Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	// RVA: 0xCF77F0 Offset: 0xCF37F0 VA: 0xCF77F0
	public void .ctor(X509CertificateCollection mappings) { }

	// RVA: 0xCEF210 Offset: 0xCEB210 VA: 0xCEF210
	public X509Certificate get_Current() { }

	// RVA: 0xCF7978 Offset: 0xCF3978 VA: 0xCF7978 Slot: 5
	private object System.Collections.IEnumerator.get_Current() { }

	// RVA: 0xCF7A1C Offset: 0xCF3A1C VA: 0xCF7A1C Slot: 4
	private bool System.Collections.IEnumerator.MoveNext() { }

	// RVA: 0xCF7ABC Offset: 0xCF3ABC VA: 0xCF7ABC Slot: 6
	private void System.Collections.IEnumerator.Reset() { }

	// RVA: 0xCEF598 Offset: 0xCEB598 VA: 0xCEF598
	public bool MoveNext() { }
}


// Namespace: Mono.Security.X509
[DefaultMember("Item")]
[Serializable]
public class X509CertificateCollection : CollectionBase, IEnumerable // TypeDefIndex: 6924
{
	// Properties
	public X509Certificate Item { get; }

	// Methods

	// RVA: 0xCEB9F8 Offset: 0xCE79F8 VA: 0xCEB9F8
	public void .ctor() { }

	// RVA: 0xCF7528 Offset: 0xCF3528 VA: 0xCF7528
	public X509Certificate get_Item(int index) { }

	// RVA: 0xCEBB8C Offset: 0xCE7B8C VA: 0xCEBB8C
	public int Add(X509Certificate value) { }

	// RVA: 0xCF75C0 Offset: 0xCF35C0 VA: 0xCF75C0
	public void AddRange(X509CertificateCollection value) { }

	// RVA: 0xCF7690 Offset: 0xCF3690 VA: 0xCF7690
	public bool Contains(X509Certificate value) { }

	// RVA: 0xCEF1B8 Offset: 0xCEB1B8 VA: 0xCEF1B8
	public X509CertificateCollection.X509CertificateEnumerator GetEnumerator() { }

	// RVA: 0xCF78A4 Offset: 0xCF38A4 VA: 0xCF78A4 Slot: 19
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	// RVA: 0xCF78C8 Offset: 0xCF38C8 VA: 0xCF78C8 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0xCF76A8 Offset: 0xCF36A8 VA: 0xCF76A8
	public int IndexOf(X509Certificate value) { }

	// RVA: 0xCF78E8 Offset: 0xCF38E8 VA: 0xCF78E8
	private bool Compare(byte[] array1, byte[] array2) { }
}


// Namespace: Mono.Security.X509
public class X509Chain // TypeDefIndex: 6925
{
	// Fields
	private X509CertificateCollection roots; // 0x10
	private X509CertificateCollection certs; // 0x18
	private X509Certificate _root; // 0x20
	private X509CertificateCollection _chain; // 0x28
	private X509ChainStatusFlags _status; // 0x30

	// Properties
	public X509CertificateCollection TrustAnchors { get; }

	// Methods

	// RVA: 0xCF7B60 Offset: 0xCF3B60 VA: 0xCF7B60
	public void .ctor() { }

	// RVA: 0xCF7BC4 Offset: 0xCF3BC4 VA: 0xCF7BC4
	public X509CertificateCollection get_TrustAnchors() { }

	// RVA: 0xCF7D0C Offset: 0xCF3D0C VA: 0xCF7D0C
	public void LoadCertificates(X509CertificateCollection collection) { }

	// RVA: 0xCF7D24 Offset: 0xCF3D24 VA: 0xCF7D24
	public bool Build(X509Certificate leaf) { }

	// RVA: 0xCF86E4 Offset: 0xCF46E4 VA: 0xCF86E4
	public void Reset() { }

	// RVA: 0xCF8638 Offset: 0xCF4638 VA: 0xCF8638
	private bool IsValid(X509Certificate cert) { }

	// RVA: 0xCF80D0 Offset: 0xCF40D0 VA: 0xCF80D0
	private X509Certificate FindCertificateParent(X509Certificate child) { }

	// RVA: 0xCF82AC Offset: 0xCF42AC VA: 0xCF82AC
	private X509Certificate FindCertificateRoot(X509Certificate potentialRoot) { }

	// RVA: 0xCF8724 Offset: 0xCF4724 VA: 0xCF8724
	private bool IsTrusted(X509Certificate potentialTrusted) { }

	// RVA: 0xCF84F4 Offset: 0xCF44F4 VA: 0xCF84F4
	private bool IsParent(X509Certificate child, X509Certificate parent) { }
}


// Namespace: Mono.Security.X509
[Flags]
[Serializable]
public enum X509ChainStatusFlags // TypeDefIndex: 6926
{
	// Fields
	public int value__; // 0x0
	public const X509ChainStatusFlags InvalidBasicConstraints = 1024;
	public const X509ChainStatusFlags NoError = 0;
	public const X509ChainStatusFlags NotSignatureValid = 8;
	public const X509ChainStatusFlags NotTimeNested = 2;
	public const X509ChainStatusFlags NotTimeValid = 1;
	public const X509ChainStatusFlags PartialChain = 65536;
	public const X509ChainStatusFlags UntrustedRoot = 32;
}


// Namespace: Mono.Security.X509
public class X509Extension // TypeDefIndex: 6927
{
	// Fields
	protected string extnOid; // 0x10
	protected bool extnCritical; // 0x18
	protected ASN1 extnValue; // 0x20

	// Properties
	public string Oid { get; }
	public bool Critical { get; }
	public ASN1 Value { get; }

	// Methods

	// RVA: 0xCF8804 Offset: 0xCF4804 VA: 0xCF8804
	public void .ctor(ASN1 asn1) { }

	// RVA: 0xCF8ABC Offset: 0xCF4ABC VA: 0xCF8ABC
	public void .ctor(X509Extension extension) { }

	// RVA: 0xCF8C28 Offset: 0xCF4C28 VA: 0xCF8C28 Slot: 4
	protected virtual void Decode() { }

	// RVA: 0xCF8C2C Offset: 0xCF4C2C VA: 0xCF8C2C Slot: 5
	protected virtual void Encode() { }

	// RVA: 0xCF8C30 Offset: 0xCF4C30 VA: 0xCF8C30
	public string get_Oid() { }

	// RVA: 0xCF8C38 Offset: 0xCF4C38 VA: 0xCF8C38
	public bool get_Critical() { }

	// RVA: 0xCF8BFC Offset: 0xCF4BFC VA: 0xCF8BFC
	public ASN1 get_Value() { }

	// RVA: 0xCF8C40 Offset: 0xCF4C40 VA: 0xCF8C40 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0xCF8D90 Offset: 0xCF4D90 VA: 0xCF8D90 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0xCF8DB0 Offset: 0xCF4DB0 VA: 0xCF8DB0
	private void WriteLine(StringBuilder sb, int n, int pos) { }

	// RVA: 0xCF8FD8 Offset: 0xCF4FD8 VA: 0xCF8FD8 Slot: 3
	public override string ToString() { }
}


// Namespace: Mono.Security.X509
[DefaultMember("Item")]
public sealed class X509ExtensionCollection : CollectionBase, IEnumerable // TypeDefIndex: 6928
{
	// Fields
	private bool readOnly; // 0x18

	// Properties
	public X509Extension Item { get; }

	// Methods

	// RVA: 0xCF90B0 Offset: 0xCF50B0 VA: 0xCF90B0
	public void .ctor() { }

	// RVA: 0xCF4EA8 Offset: 0xCF0EA8 VA: 0xCF4EA8
	public void .ctor(ASN1 asn1) { }

	// RVA: 0xCF90B8 Offset: 0xCF50B8 VA: 0xCF90B8
	public int IndexOf(string oid) { }

	// RVA: 0xCF91F0 Offset: 0xCF51F0 VA: 0xCF91F0 Slot: 19
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	// RVA: 0xCF8750 Offset: 0xCF4750 VA: 0xCF8750
	public X509Extension get_Item(string oid) { }
}


// Namespace: Mono.Security.X509
public class X509Store // TypeDefIndex: 6929
{
	// Fields
	private string _storePath; // 0x10
	private X509CertificateCollection _certificates; // 0x18
	private ArrayList _crls; // 0x20
	private bool _crl; // 0x28
	private bool _newFormat; // 0x29

	// Properties
	public X509CertificateCollection Certificates { get; }
	public ArrayList Crls { get; }

	// Methods

	// RVA: 0xCF9214 Offset: 0xCF5214 VA: 0xCF9214
	internal void .ctor(string path, bool crl, bool newFormat) { }

	// RVA: 0xCF9254 Offset: 0xCF5254 VA: 0xCF9254
	public X509CertificateCollection get_Certificates() { }

	// RVA: 0xCF9458 Offset: 0xCF5458 VA: 0xCF9458
	public ArrayList get_Crls() { }

	// RVA: 0xCF96A8 Offset: 0xCF56A8 VA: 0xCF96A8
	private byte[] Load(string filename) { }

	// RVA: 0xCF98B0 Offset: 0xCF58B0 VA: 0xCF98B0
	private X509Certificate LoadCertificate(string filename) { }

	// RVA: 0xCF9918 Offset: 0xCF5918 VA: 0xCF9918
	private X509Crl LoadCrl(string filename) { }

	// RVA: 0xCF9980 Offset: 0xCF5980 VA: 0xCF9980
	private bool CheckStore(string path, bool throwException) { }

	// RVA: 0xCF927C Offset: 0xCF527C VA: 0xCF927C
	private X509CertificateCollection BuildCertificatesCollection(string storeName) { }

	// RVA: 0xCF94E0 Offset: 0xCF54E0 VA: 0xCF94E0
	private ArrayList BuildCrlsCollection(string storeName) { }
}


// Namespace: Mono.Security.X509
public sealed class X509StoreManager // TypeDefIndex: 6930
{
	// Fields
	private static string _userPath; // 0x0
	private static string _localMachinePath; // 0x8
	private static X509Stores _userStore; // 0x10
	private static X509Stores _machineStore; // 0x18

	// Properties
	internal static string CurrentUserPath { get; }
	internal static string LocalMachinePath { get; }
	public static X509Stores CurrentUser { get; }
	public static X509Stores LocalMachine { get; }
	public static X509CertificateCollection TrustedRootCertificates { get; }

	// Methods

	// RVA: 0xCF9A5C Offset: 0xCF5A5C VA: 0xCF9A5C
	internal static string get_CurrentUserPath() { }

	// RVA: 0xCF9B54 Offset: 0xCF5B54 VA: 0xCF9B54
	internal static string get_LocalMachinePath() { }

	// RVA: 0xCF9C34 Offset: 0xCF5C34 VA: 0xCF9C34
	public static X509Stores get_CurrentUser() { }

	// RVA: 0xCF9CFC Offset: 0xCF5CFC VA: 0xCF9CFC
	public static X509Stores get_LocalMachine() { }

	// RVA: 0xCF7C40 Offset: 0xCF3C40 VA: 0xCF7C40
	public static X509CertificateCollection get_TrustedRootCertificates() { }
}


// Namespace: Mono.Security.X509
public class X509Stores // TypeDefIndex: 6931
{
	// Fields
	private string _storePath; // 0x10
	private bool _newFormat; // 0x18
	private X509Store _trusted; // 0x20

	// Properties
	public X509Store TrustedRoot { get; }

	// Methods

	// RVA: 0xCF9CCC Offset: 0xCF5CCC VA: 0xCF9CCC
	internal void .ctor(string path, bool newFormat) { }

	// RVA: 0xCF9D94 Offset: 0xCF5D94 VA: 0xCF9D94
	public X509Store get_TrustedRoot() { }

	// RVA: 0xCF9E68 Offset: 0xCF5E68 VA: 0xCF9E68
	public X509Store Open(string storeName, bool create) { }
}


// Namespace: Mono.Security.X509.Extensions
public class AuthorityKeyIdentifierExtension : X509Extension // TypeDefIndex: 6932
{
	// Fields
	private byte[] aki; // 0x28

	// Properties
	public byte[] Identifier { get; }

	// Methods

	// RVA: 0xCF9F7C Offset: 0xCF5F7C VA: 0xCF9F7C
	public void .ctor(X509Extension extension) { }

	// RVA: 0xCF9F80 Offset: 0xCF5F80 VA: 0xCF9F80 Slot: 4
	protected override void Decode() { }

	// RVA: 0xCFA094 Offset: 0xCF6094 VA: 0xCFA094 Slot: 5
	protected override void Encode() { }

	// RVA: 0xCFA1A4 Offset: 0xCF61A4 VA: 0xCFA1A4
	public byte[] get_Identifier() { }

	// RVA: 0xCFA218 Offset: 0xCF6218 VA: 0xCFA218 Slot: 3
	public override string ToString() { }
}


// Namespace: Mono.Security.X509.Extensions
public class BasicConstraintsExtension : X509Extension // TypeDefIndex: 6933
{
	// Fields
	private bool cA; // 0x28
	private int pathLenConstraint; // 0x2C

	// Properties
	public bool CertificateAuthority { get; }

	// Methods

	// RVA: 0xCF8800 Offset: 0xCF4800 VA: 0xCF8800
	public void .ctor(X509Extension extension) { }

	// RVA: 0xCFA384 Offset: 0xCF6384 VA: 0xCFA384 Slot: 4
	protected override void Decode() { }

	// RVA: 0xCFA4B8 Offset: 0xCF64B8 VA: 0xCFA4B8 Slot: 5
	protected override void Encode() { }

	// RVA: 0xCFA5E0 Offset: 0xCF65E0 VA: 0xCFA5E0
	public bool get_CertificateAuthority() { }

	// RVA: 0xCFA5E8 Offset: 0xCF65E8 VA: 0xCFA5E8 Slot: 3
	public override string ToString() { }
}


// Namespace: Mono.Security.Protocol.Ntlm
[Obsolete("Use of this API is highly discouraged, it selects legacy-mode LM/NTLM authentication, which sends your password in very weak encryption over the wire even if the server supports the more secure NTLMv2 / NTLMv2 Session. You need to use the new `Type3Message (Type2Message)' constructor to use the more secure NTLMv2 / NTLMv2 Session authentication modes. These require the Type 2 message from the server to compute the response.")]
public class ChallengeResponse : IDisposable // TypeDefIndex: 6934
{
	// Fields
	private static byte[] magic; // 0x0
	private static byte[] nullEncMagic; // 0x8
	private bool _disposed; // 0x10
	private byte[] _challenge; // 0x18
	private byte[] _lmpwd; // 0x20
	private byte[] _ntpwd; // 0x28

	// Properties
	public string Password { set; }
	public byte[] Challenge { set; }
	public byte[] LM { get; }
	public byte[] NT { get; }

	// Methods

	// RVA: 0xCFA788 Offset: 0xCF6788 VA: 0xCFA788
	public void .ctor() { }

	// RVA: 0xCFA7F8 Offset: 0xCF67F8 VA: 0xCFA7F8
	public void .ctor(string password, byte[] challenge) { }

	// RVA: 0xCFAD64 Offset: 0xCF6D64 VA: 0xCFAD64 Slot: 1
	protected override void Finalize() { }

	// RVA: 0xCFA830 Offset: 0xCF6830 VA: 0xCFA830
	public void set_Password(string value) { }

	// RVA: 0xCFAC38 Offset: 0xCF6C38 VA: 0xCFAC38
	public void set_Challenge(byte[] value) { }

	// RVA: 0xCFAFAC Offset: 0xCF6FAC VA: 0xCFAFAC
	public byte[] get_LM() { }

	// RVA: 0xCFB2E8 Offset: 0xCF72E8 VA: 0xCFB2E8
	public byte[] get_NT() { }

	// RVA: 0xCFAE04 Offset: 0xCF6E04 VA: 0xCFAE04 Slot: 4
	public void Dispose() { }

	// RVA: 0xCFB348 Offset: 0xCF7348 VA: 0xCFB348
	private void Dispose(bool disposing) { }

	// RVA: 0xCFB00C Offset: 0xCF700C VA: 0xCFB00C
	private byte[] GetResponse(byte[] pwd) { }

	// RVA: 0xCFB3B4 Offset: 0xCF73B4 VA: 0xCFB3B4
	private byte[] PrepareDESKey(byte[] key56bits, int position) { }

	// RVA: 0xCFAE68 Offset: 0xCF6E68 VA: 0xCFAE68
	private byte[] PasswordToKey(string password, int position) { }

	// RVA: 0xCFB5AC Offset: 0xCF75AC VA: 0xCFB5AC
	private static void .cctor() { }
}


// Namespace: Mono.Security.Protocol.Ntlm
public static class ChallengeResponse2 // TypeDefIndex: 6935
{
	// Fields
	private static byte[] magic; // 0x0
	private static byte[] nullEncMagic; // 0x8

	// Methods

	// RVA: 0xCFB67C Offset: 0xCF767C VA: 0xCFB67C
	private static byte[] Compute_LM(string password, byte[] challenge) { }

	// RVA: 0xCFBE04 Offset: 0xCF7E04 VA: 0xCFBE04
	private static byte[] Compute_NTLM_Password(string password) { }

	// RVA: 0xCFBF08 Offset: 0xCF7F08 VA: 0xCFBF08
	private static byte[] Compute_NTLM(string password, byte[] challenge) { }

	// RVA: 0xCFBF74 Offset: 0xCF7F74 VA: 0xCFBF74
	private static void Compute_NTLMv2_Session(string password, byte[] challenge, out byte[] lm, out byte[] ntlm) { }

	// RVA: 0xCFC140 Offset: 0xCF8140 VA: 0xCFC140
	private static byte[] Compute_NTLMv2(Type2Message type2, string username, string password, string domain) { }

	// RVA: 0xCFC664 Offset: 0xCF8664 VA: 0xCFC664
	public static void Compute(Type2Message type2, NtlmAuthLevel level, string username, string password, string domain, out byte[] lm, out byte[] ntlm) { }

	// RVA: 0xCFBB10 Offset: 0xCF7B10 VA: 0xCFBB10
	private static byte[] GetResponse(byte[] challenge, byte[] pwd) { }

	// RVA: 0xCFC85C Offset: 0xCF885C VA: 0xCFC85C
	private static byte[] PrepareDESKey(byte[] key56bits, int position) { }

	// RVA: 0xCFB9A8 Offset: 0xCF79A8 VA: 0xCFB9A8
	private static byte[] PasswordToKey(string password, int position) { }

	// RVA: 0xCFCA54 Offset: 0xCF8A54 VA: 0xCFCA54
	private static void .cctor() { }
}


// Namespace: Mono.Security.Protocol.Ntlm
public abstract class MessageBase // TypeDefIndex: 6936
{
	// Fields
	private static byte[] header; // 0x0
	private int _type; // 0x10
	private NtlmFlags _flags; // 0x14

	// Properties
	public NtlmFlags Flags { get; set; }

	// Methods

	// RVA: 0xCFCB24 Offset: 0xCF8B24 VA: 0xCFCB24
	protected void .ctor(int messageType) { }

	// RVA: 0xCFCB4C Offset: 0xCF8B4C VA: 0xCFCB4C
	public NtlmFlags get_Flags() { }

	// RVA: 0xCFCB54 Offset: 0xCF8B54 VA: 0xCFCB54
	public void set_Flags(NtlmFlags value) { }

	// RVA: 0xCFCB5C Offset: 0xCF8B5C VA: 0xCFCB5C
	protected byte[] PrepareMessage(int messageSize) { }

	// RVA: 0xCFCC5C Offset: 0xCF8C5C VA: 0xCFCC5C Slot: 4
	protected virtual void Decode(byte[] message) { }

	// RVA: 0xCFCDF4 Offset: 0xCF8DF4 VA: 0xCFCDF4
	protected bool CheckHeader(byte[] message) { }

	// RVA: -1 Offset: -1 Slot: 5
	public abstract byte[] GetBytes();

	// RVA: 0xCFCF08 Offset: 0xCF8F08 VA: 0xCFCF08
	private static void .cctor() { }
}


// Namespace: Mono.Security.Protocol.Ntlm
public enum NtlmAuthLevel // TypeDefIndex: 6937
{
	// Fields
	public int value__; // 0x0
	public const NtlmAuthLevel LM_and_NTLM = 0;
	public const NtlmAuthLevel LM_and_NTLM_and_try_NTLMv2_Session = 1;
	public const NtlmAuthLevel NTLM_only = 2;
	public const NtlmAuthLevel NTLMv2_only = 3;
}


// Namespace: Mono.Security.Protocol.Ntlm
[Flags]
public enum NtlmFlags // TypeDefIndex: 6938
{
	// Fields
	public int value__; // 0x0
	public const NtlmFlags NegotiateUnicode = 1;
	public const NtlmFlags NegotiateOem = 2;
	public const NtlmFlags RequestTarget = 4;
	public const NtlmFlags NegotiateNtlm = 512;
	public const NtlmFlags NegotiateDomainSupplied = 4096;
	public const NtlmFlags NegotiateWorkstationSupplied = 8192;
	public const NtlmFlags NegotiateAlwaysSign = 32768;
	public const NtlmFlags NegotiateNtlm2Key = 524288;
	public const NtlmFlags Negotiate128 = 536870912;
	public const NtlmFlags Negotiate56 = -2147483648;
}


// Namespace: Mono.Security.Protocol.Ntlm
public static class NtlmSettings // TypeDefIndex: 6939
{
	// Fields
	private static NtlmAuthLevel defaultAuthLevel; // 0x0

	// Properties
	public static NtlmAuthLevel DefaultAuthLevel { get; }

	// Methods

	// RVA: 0xCFCF9C Offset: 0xCF8F9C VA: 0xCFCF9C
	public static NtlmAuthLevel get_DefaultAuthLevel() { }

	// RVA: 0xCFCFF4 Offset: 0xCF8FF4 VA: 0xCFCFF4
	private static void .cctor() { }
}


// Namespace: Mono.Security.Protocol.Ntlm
public class Type1Message : MessageBase // TypeDefIndex: 6940
{
	// Fields
	private string _host; // 0x18
	private string _domain; // 0x20

	// Properties
	public string Domain { set; }
	public string Host { set; }

	// Methods

	// RVA: 0xCFD040 Offset: 0xCF9040 VA: 0xCFD040
	public void .ctor() { }

	// RVA: 0xCFD0C4 Offset: 0xCF90C4 VA: 0xCFD0C4
	public void set_Domain(string value) { }

	// RVA: 0xCFD148 Offset: 0xCF9148 VA: 0xCFD148
	public void set_Host(string value) { }

	// RVA: 0xCFD1CC Offset: 0xCF91CC VA: 0xCFD1CC Slot: 4
	protected override void Decode(byte[] message) { }

	// RVA: 0xCFD2BC Offset: 0xCF92BC VA: 0xCFD2BC Slot: 5
	public override byte[] GetBytes() { }
}


// Namespace: Mono.Security.Protocol.Ntlm
public class Type2Message : MessageBase // TypeDefIndex: 6941
{
	// Fields
	private byte[] _nonce; // 0x18
	private string _targetName; // 0x20
	private byte[] _targetInfo; // 0x28

	// Properties
	public byte[] Nonce { get; }
	public string TargetName { get; }
	public byte[] TargetInfo { get; }

	// Methods

	// RVA: 0xCFD508 Offset: 0xCF9508 VA: 0xCFD508
	public void .ctor(byte[] message) { }

	// RVA: 0xCFD5AC Offset: 0xCF95AC VA: 0xCFD5AC Slot: 1
	protected override void Finalize() { }

	// RVA: 0xCFC5EC Offset: 0xCF85EC VA: 0xCFC5EC
	public byte[] get_Nonce() { }

	// RVA: 0xCFD654 Offset: 0xCF9654 VA: 0xCFD654
	public string get_TargetName() { }

	// RVA: 0xCFC574 Offset: 0xCF8574 VA: 0xCFC574
	public byte[] get_TargetInfo() { }

	// RVA: 0xCFD65C Offset: 0xCF965C VA: 0xCFD65C Slot: 4
	protected override void Decode(byte[] message) { }

	// RVA: 0xCFD7DC Offset: 0xCF97DC VA: 0xCFD7DC Slot: 5
	public override byte[] GetBytes() { }
}


// Namespace: Mono.Security.Protocol.Ntlm
public class Type3Message : MessageBase // TypeDefIndex: 6942
{
	// Fields
	private NtlmAuthLevel _level; // 0x18
	private byte[] _challenge; // 0x20
	private string _host; // 0x28
	private string _domain; // 0x30
	private string _username; // 0x38
	private string _password; // 0x40
	private Type2Message _type2; // 0x48
	private byte[] _lm; // 0x50
	private byte[] _nt; // 0x58

	// Properties
	public string Domain { set; }

	// Methods

	// RVA: 0xCFD894 Offset: 0xCF9894 VA: 0xCFD894
	public void .ctor(Type2Message type2) { }

	// RVA: 0xCFDA80 Offset: 0xCF9A80 VA: 0xCFDA80 Slot: 1
	protected override void Finalize() { }

	// RVA: 0xCFDB60 Offset: 0xCF9B60 VA: 0xCFDB60
	public void set_Domain(string value) { }

	// RVA: 0xCFDBE4 Offset: 0xCF9BE4 VA: 0xCFDBE4 Slot: 4
	protected override void Decode(byte[] message) { }

	// RVA: 0xCFDE04 Offset: 0xCF9E04 VA: 0xCFDE04
	private string DecodeString(byte[] buffer, int offset, int len) { }

	// RVA: 0xCFDE5C Offset: 0xCF9E5C VA: 0xCFDE5C
	private byte[] EncodeString(string text) { }

	// RVA: 0xCFDEEC Offset: 0xCF9EEC VA: 0xCFDEEC Slot: 5
	public override byte[] GetBytes() { }
}


// Namespace: Mono.Security.Interface
public enum AlertLevel // TypeDefIndex: 6943
{
	// Fields
	public byte value__; // 0x0
	public const AlertLevel Warning = 1;
	public const AlertLevel Fatal = 2;
}


// Namespace: Mono.Security.Interface
public enum AlertDescription // TypeDefIndex: 6944
{
	// Fields
	public byte value__; // 0x0
	public const AlertDescription CloseNotify = 0;
	public const AlertDescription UnexpectedMessage = 10;
	public const AlertDescription BadRecordMAC = 20;
	public const AlertDescription DecryptionFailed_RESERVED = 21;
	public const AlertDescription RecordOverflow = 22;
	public const AlertDescription DecompressionFailure = 30;
	public const AlertDescription HandshakeFailure = 40;
	public const AlertDescription NoCertificate_RESERVED = 41;
	public const AlertDescription BadCertificate = 42;
	public const AlertDescription UnsupportedCertificate = 43;
	public const AlertDescription CertificateRevoked = 44;
	public const AlertDescription CertificateExpired = 45;
	public const AlertDescription CertificateUnknown = 46;
	public const AlertDescription IlegalParameter = 47;
	public const AlertDescription UnknownCA = 48;
	public const AlertDescription AccessDenied = 49;
	public const AlertDescription DecodeError = 50;
	public const AlertDescription DecryptError = 51;
	public const AlertDescription ExportRestriction = 60;
	public const AlertDescription ProtocolVersion = 70;
	public const AlertDescription InsuficientSecurity = 71;
	public const AlertDescription InternalError = 80;
	public const AlertDescription UserCancelled = 90;
	public const AlertDescription NoRenegotiation = 100;
	public const AlertDescription UnsupportedExtension = 110;
}


// Namespace: Mono.Security.Interface
public class Alert // TypeDefIndex: 6945
{
	// Fields
	private AlertLevel level; // 0x10
	private AlertDescription description; // 0x11

	// Properties
	public AlertLevel Level { get; }
	public AlertDescription Description { get; }

	// Methods

	// RVA: 0xCFE52C Offset: 0xCFA52C VA: 0xCFE52C
	public AlertLevel get_Level() { }

	// RVA: 0xCFE534 Offset: 0xCFA534 VA: 0xCFE534
	public AlertDescription get_Description() { }

	// RVA: 0xCFE53C Offset: 0xCFA53C VA: 0xCFE53C
	public void .ctor(AlertDescription description) { }

	// RVA: 0xCFE5A8 Offset: 0xCFA5A8 VA: 0xCFE5A8
	private void inferAlertLevel() { }

	// RVA: 0xCFE5E8 Offset: 0xCFA5E8 VA: 0xCFE5E8 Slot: 3
	public override string ToString() { }
}


// Namespace: Mono.Security.Interface
public class ValidationResult // TypeDefIndex: 6946
{
	// Fields
	private bool trusted; // 0x10
	private bool user_denied; // 0x11
	private int error_code; // 0x14
	private Nullable<MonoSslPolicyErrors> policy_errors; // 0x18

	// Methods

	// RVA: 0xCFE6A4 Offset: 0xCFA6A4 VA: 0xCFE6A4
	public void .ctor(bool trusted, bool user_denied, int error_code, Nullable<MonoSslPolicyErrors> policy_errors) { }
}


// Namespace: Mono.Security.Interface
public interface ICertificateValidator // TypeDefIndex: 6947
{}


// Namespace: Mono.Security.Interface
public enum CipherSuiteCode // TypeDefIndex: 6948
{
	// Fields
	public ushort value__; // 0x0
	public const CipherSuiteCode TLS_NULL_WITH_NULL_NULL = 0;
	public const CipherSuiteCode TLS_RSA_WITH_NULL_MD5 = 1;
	public const CipherSuiteCode TLS_RSA_WITH_NULL_SHA = 2;
	public const CipherSuiteCode TLS_RSA_EXPORT_WITH_RC4_40_MD5 = 3;
	public const CipherSuiteCode TLS_RSA_WITH_RC4_128_MD5 = 4;
	public const CipherSuiteCode TLS_RSA_WITH_RC4_128_SHA = 5;
	public const CipherSuiteCode TLS_RSA_EXPORT_WITH_RC2_CBC_40_MD5 = 6;
	public const CipherSuiteCode TLS_RSA_WITH_IDEA_CBC_SHA = 7;
	public const CipherSuiteCode TLS_RSA_EXPORT_WITH_DES40_CBC_SHA = 8;
	public const CipherSuiteCode TLS_RSA_WITH_DES_CBC_SHA = 9;
	public const CipherSuiteCode TLS_RSA_WITH_3DES_EDE_CBC_SHA = 10;
	public const CipherSuiteCode TLS_DH_DSS_EXPORT_WITH_DES40_CBC_SHA = 11;
	public const CipherSuiteCode TLS_DH_DSS_WITH_DES_CBC_SHA = 12;
	public const CipherSuiteCode TLS_DH_DSS_WITH_3DES_EDE_CBC_SHA = 13;
	public const CipherSuiteCode TLS_DH_RSA_EXPORT_WITH_DES40_CBC_SHA = 14;
	public const CipherSuiteCode TLS_DH_RSA_WITH_DES_CBC_SHA = 15;
	public const CipherSuiteCode TLS_DH_RSA_WITH_3DES_EDE_CBC_SHA = 16;
	public const CipherSuiteCode TLS_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA = 17;
	public const CipherSuiteCode TLS_DHE_DSS_WITH_DES_CBC_SHA = 18;
	public const CipherSuiteCode TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA = 19;
	public const CipherSuiteCode TLS_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA = 20;
	public const CipherSuiteCode TLS_DHE_RSA_WITH_DES_CBC_SHA = 21;
	public const CipherSuiteCode TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA = 22;
	public const CipherSuiteCode TLS_DH_anon_EXPORT_WITH_RC4_40_MD5 = 23;
	public const CipherSuiteCode TLS_DH_anon_WITH_RC4_128_MD5 = 24;
	public const CipherSuiteCode TLS_DH_anon_EXPORT_WITH_DES40_CBC_SHA = 25;
	public const CipherSuiteCode TLS_DH_anon_WITH_DES_CBC_SHA = 26;
	public const CipherSuiteCode TLS_DH_anon_WITH_3DES_EDE_CBC_SHA = 27;
	public const CipherSuiteCode TLS_RSA_WITH_AES_128_CBC_SHA = 47;
	public const CipherSuiteCode TLS_DH_DSS_WITH_AES_128_CBC_SHA = 48;
	public const CipherSuiteCode TLS_DH_RSA_WITH_AES_128_CBC_SHA = 49;
	public const CipherSuiteCode TLS_DHE_DSS_WITH_AES_128_CBC_SHA = 50;
	public const CipherSuiteCode TLS_DHE_RSA_WITH_AES_128_CBC_SHA = 51;
	public const CipherSuiteCode TLS_DH_anon_WITH_AES_128_CBC_SHA = 52;
	public const CipherSuiteCode TLS_RSA_WITH_AES_256_CBC_SHA = 53;
	public const CipherSuiteCode TLS_DH_DSS_WITH_AES_256_CBC_SHA = 54;
	public const CipherSuiteCode TLS_DH_RSA_WITH_AES_256_CBC_SHA = 55;
	public const CipherSuiteCode TLS_DHE_DSS_WITH_AES_256_CBC_SHA = 56;
	public const CipherSuiteCode TLS_DHE_RSA_WITH_AES_256_CBC_SHA = 57;
	public const CipherSuiteCode TLS_DH_anon_WITH_AES_256_CBC_SHA = 58;
	public const CipherSuiteCode TLS_RSA_WITH_CAMELLIA_128_CBC_SHA = 65;
	public const CipherSuiteCode TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA = 66;
	public const CipherSuiteCode TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA = 67;
	public const CipherSuiteCode TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA = 68;
	public const CipherSuiteCode TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA = 69;
	public const CipherSuiteCode TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA = 70;
	public const CipherSuiteCode TLS_RSA_WITH_CAMELLIA_256_CBC_SHA = 132;
	public const CipherSuiteCode TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA = 133;
	public const CipherSuiteCode TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA = 134;
	public const CipherSuiteCode TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA = 135;
	public const CipherSuiteCode TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA = 136;
	public const CipherSuiteCode TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA = 137;
	public const CipherSuiteCode TLS_RSA_WITH_CAMELLIA_128_CBC_SHA256 = 186;
	public const CipherSuiteCode TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA256 = 187;
	public const CipherSuiteCode TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA256 = 188;
	public const CipherSuiteCode TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA256 = 189;
	public const CipherSuiteCode TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA256 = 190;
	public const CipherSuiteCode TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA256 = 191;
	public const CipherSuiteCode TLS_RSA_WITH_CAMELLIA_256_CBC_SHA256 = 192;
	public const CipherSuiteCode TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA256 = 193;
	public const CipherSuiteCode TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA256 = 194;
	public const CipherSuiteCode TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA256 = 195;
	public const CipherSuiteCode TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA256 = 196;
	public const CipherSuiteCode TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA256 = 197;
	public const CipherSuiteCode TLS_RSA_WITH_SEED_CBC_SHA = 150;
	public const CipherSuiteCode TLS_DH_DSS_WITH_SEED_CBC_SHA = 151;
	public const CipherSuiteCode TLS_DH_RSA_WITH_SEED_CBC_SHA = 152;
	public const CipherSuiteCode TLS_DHE_DSS_WITH_SEED_CBC_SHA = 153;
	public const CipherSuiteCode TLS_DHE_RSA_WITH_SEED_CBC_SHA = 154;
	public const CipherSuiteCode TLS_DH_anon_WITH_SEED_CBC_SHA = 155;
	public const CipherSuiteCode TLS_PSK_WITH_RC4_128_SHA = 138;
	public const CipherSuiteCode TLS_PSK_WITH_3DES_EDE_CBC_SHA = 139;
	public const CipherSuiteCode TLS_PSK_WITH_AES_128_CBC_SHA = 140;
	public const CipherSuiteCode TLS_PSK_WITH_AES_256_CBC_SHA = 141;
	public const CipherSuiteCode TLS_DHE_PSK_WITH_RC4_128_SHA = 142;
	public const CipherSuiteCode TLS_DHE_PSK_WITH_3DES_EDE_CBC_SHA = 143;
	public const CipherSuiteCode TLS_DHE_PSK_WITH_AES_128_CBC_SHA = 144;
	public const CipherSuiteCode TLS_DHE_PSK_WITH_AES_256_CBC_SHA = 145;
	public const CipherSuiteCode TLS_RSA_PSK_WITH_RC4_128_SHA = 146;
	public const CipherSuiteCode TLS_RSA_PSK_WITH_3DES_EDE_CBC_SHA = 147;
	public const CipherSuiteCode TLS_RSA_PSK_WITH_AES_128_CBC_SHA = 148;
	public const CipherSuiteCode TLS_RSA_PSK_WITH_AES_256_CBC_SHA = 149;
	public const CipherSuiteCode TLS_ECDH_ECDSA_WITH_NULL_SHA = 49153;
	public const CipherSuiteCode TLS_ECDH_ECDSA_WITH_RC4_128_SHA = 49154;
	public const CipherSuiteCode TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA = 49155;
	public const CipherSuiteCode TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA = 49156;
	public const CipherSuiteCode TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA = 49157;
	public const CipherSuiteCode TLS_ECDHE_ECDSA_WITH_NULL_SHA = 49158;
	public const CipherSuiteCode TLS_ECDHE_ECDSA_WITH_RC4_128_SHA = 49159;
	public const CipherSuiteCode TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA = 49160;
	public const CipherSuiteCode TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA = 49161;
	public const CipherSuiteCode TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA = 49162;
	public const CipherSuiteCode TLS_ECDH_RSA_WITH_NULL_SHA = 49163;
	public const CipherSuiteCode TLS_ECDH_RSA_WITH_RC4_128_SHA = 49164;
	public const CipherSuiteCode TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA = 49165;
	public const CipherSuiteCode TLS_ECDH_RSA_WITH_AES_128_CBC_SHA = 49166;
	public const CipherSuiteCode TLS_ECDH_RSA_WITH_AES_256_CBC_SHA = 49167;
	public const CipherSuiteCode TLS_ECDHE_RSA_WITH_NULL_SHA = 49168;
	public const CipherSuiteCode TLS_ECDHE_RSA_WITH_RC4_128_SHA = 49169;
	public const CipherSuiteCode TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA = 49170;
	public const CipherSuiteCode TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA = 49171;
	public const CipherSuiteCode TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA = 49172;
	public const CipherSuiteCode TLS_ECDH_anon_WITH_NULL_SHA = 49173;
	public const CipherSuiteCode TLS_ECDH_anon_WITH_RC4_128_SHA = 49174;
	public const CipherSuiteCode TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA = 49175;
	public const CipherSuiteCode TLS_ECDH_anon_WITH_AES_128_CBC_SHA = 49176;
	public const CipherSuiteCode TLS_ECDH_anon_WITH_AES_256_CBC_SHA = 49177;
	public const CipherSuiteCode TLS_PSK_WITH_NULL_SHA = 44;
	public const CipherSuiteCode TLS_DHE_PSK_WITH_NULL_SHA = 45;
	public const CipherSuiteCode TLS_RSA_PSK_WITH_NULL_SHA = 46;
	public const CipherSuiteCode TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA = 49178;
	public const CipherSuiteCode TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA = 49179;
	public const CipherSuiteCode TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA = 49180;
	public const CipherSuiteCode TLS_SRP_SHA_WITH_AES_128_CBC_SHA = 49181;
	public const CipherSuiteCode TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA = 49182;
	public const CipherSuiteCode TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA = 49183;
	public const CipherSuiteCode TLS_SRP_SHA_WITH_AES_256_CBC_SHA = 49184;
	public const CipherSuiteCode TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA = 49185;
	public const CipherSuiteCode TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA = 49186;
	public const CipherSuiteCode TLS_RSA_WITH_NULL_SHA256 = 59;
	public const CipherSuiteCode TLS_RSA_WITH_AES_128_CBC_SHA256 = 60;
	public const CipherSuiteCode TLS_RSA_WITH_AES_256_CBC_SHA256 = 61;
	public const CipherSuiteCode TLS_DH_DSS_WITH_AES_128_CBC_SHA256 = 62;
	public const CipherSuiteCode TLS_DH_RSA_WITH_AES_128_CBC_SHA256 = 63;
	public const CipherSuiteCode TLS_DHE_DSS_WITH_AES_128_CBC_SHA256 = 64;
	public const CipherSuiteCode TLS_DHE_RSA_WITH_AES_128_CBC_SHA256 = 103;
	public const CipherSuiteCode TLS_DH_DSS_WITH_AES_256_CBC_SHA256 = 104;
	public const CipherSuiteCode TLS_DH_RSA_WITH_AES_256_CBC_SHA256 = 105;
	public const CipherSuiteCode TLS_DHE_DSS_WITH_AES_256_CBC_SHA256 = 106;
	public const CipherSuiteCode TLS_DHE_RSA_WITH_AES_256_CBC_SHA256 = 107;
	public const CipherSuiteCode TLS_DH_anon_WITH_AES_128_CBC_SHA256 = 108;
	public const CipherSuiteCode TLS_DH_anon_WITH_AES_256_CBC_SHA256 = 109;
	public const CipherSuiteCode TLS_RSA_WITH_AES_128_GCM_SHA256 = 156;
	public const CipherSuiteCode TLS_RSA_WITH_AES_256_GCM_SHA384 = 157;
	public const CipherSuiteCode TLS_DHE_RSA_WITH_AES_128_GCM_SHA256 = 158;
	public const CipherSuiteCode TLS_DHE_RSA_WITH_AES_256_GCM_SHA384 = 159;
	public const CipherSuiteCode TLS_DH_RSA_WITH_AES_128_GCM_SHA256 = 160;
	public const CipherSuiteCode TLS_DH_RSA_WITH_AES_256_GCM_SHA384 = 161;
	public const CipherSuiteCode TLS_DHE_DSS_WITH_AES_128_GCM_SHA256 = 162;
	public const CipherSuiteCode TLS_DHE_DSS_WITH_AES_256_GCM_SHA384 = 163;
	public const CipherSuiteCode TLS_DH_DSS_WITH_AES_128_GCM_SHA256 = 164;
	public const CipherSuiteCode TLS_DH_DSS_WITH_AES_256_GCM_SHA384 = 165;
	public const CipherSuiteCode TLS_DH_anon_WITH_AES_128_GCM_SHA256 = 166;
	public const CipherSuiteCode TLS_DH_anon_WITH_AES_256_GCM_SHA384 = 167;
	public const CipherSuiteCode TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256 = 49187;
	public const CipherSuiteCode TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384 = 49188;
	public const CipherSuiteCode TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256 = 49189;
	public const CipherSuiteCode TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384 = 49190;
	public const CipherSuiteCode TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256 = 49191;
	public const CipherSuiteCode TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384 = 49192;
	public const CipherSuiteCode TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256 = 49193;
	public const CipherSuiteCode TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384 = 49194;
	public const CipherSuiteCode TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256 = 49195;
	public const CipherSuiteCode TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384 = 49196;
	public const CipherSuiteCode TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256 = 49197;
	public const CipherSuiteCode TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384 = 49198;
	public const CipherSuiteCode TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 = 49199;
	public const CipherSuiteCode TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384 = 49200;
	public const CipherSuiteCode TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256 = 49201;
	public const CipherSuiteCode TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384 = 49202;
	public const CipherSuiteCode TLS_PSK_WITH_AES_128_GCM_SHA256 = 168;
	public const CipherSuiteCode TLS_PSK_WITH_AES_256_GCM_SHA384 = 169;
	public const CipherSuiteCode TLS_DHE_PSK_WITH_AES_128_GCM_SHA256 = 170;
	public const CipherSuiteCode TLS_DHE_PSK_WITH_AES_256_GCM_SHA384 = 171;
	public const CipherSuiteCode TLS_RSA_PSK_WITH_AES_128_GCM_SHA256 = 172;
	public const CipherSuiteCode TLS_RSA_PSK_WITH_AES_256_GCM_SHA384 = 173;
	public const CipherSuiteCode TLS_PSK_WITH_AES_128_CBC_SHA256 = 174;
	public const CipherSuiteCode TLS_PSK_WITH_AES_256_CBC_SHA384 = 175;
	public const CipherSuiteCode TLS_PSK_WITH_NULL_SHA256 = 176;
	public const CipherSuiteCode TLS_PSK_WITH_NULL_SHA384 = 177;
	public const CipherSuiteCode TLS_DHE_PSK_WITH_AES_128_CBC_SHA256 = 178;
	public const CipherSuiteCode TLS_DHE_PSK_WITH_AES_256_CBC_SHA384 = 179;
	public const CipherSuiteCode TLS_DHE_PSK_WITH_NULL_SHA256 = 180;
	public const CipherSuiteCode TLS_DHE_PSK_WITH_NULL_SHA384 = 181;
	public const CipherSuiteCode TLS_RSA_PSK_WITH_AES_128_CBC_SHA256 = 182;
	public const CipherSuiteCode TLS_RSA_PSK_WITH_AES_256_CBC_SHA384 = 183;
	public const CipherSuiteCode TLS_RSA_PSK_WITH_NULL_SHA256 = 184;
	public const CipherSuiteCode TLS_RSA_PSK_WITH_NULL_SHA384 = 185;
	public const CipherSuiteCode TLS_ECDHE_PSK_WITH_RC4_128_SHA = 49203;
	public const CipherSuiteCode TLS_ECDHE_PSK_WITH_3DES_EDE_CBC_SHA = 49204;
	public const CipherSuiteCode TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA = 49205;
	public const CipherSuiteCode TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA = 49206;
	public const CipherSuiteCode TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA256 = 49207;
	public const CipherSuiteCode TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA384 = 49208;
	public const CipherSuiteCode TLS_ECDHE_PSK_WITH_NULL_SHA = 49209;
	public const CipherSuiteCode TLS_ECDHE_PSK_WITH_NULL_SHA256 = 49210;
	public const CipherSuiteCode TLS_ECDHE_PSK_WITH_NULL_SHA384 = 49211;
	public const CipherSuiteCode TLS_EMPTY_RENEGOTIATION_INFO_SCSV = 255;
	public const CipherSuiteCode TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_CBC_SHA256 = 49266;
	public const CipherSuiteCode TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_CBC_SHA384 = 49267;
	public const CipherSuiteCode TLS_ECDH_ECDSA_WITH_CAMELLIA_128_CBC_SHA256 = 49268;
	public const CipherSuiteCode TLS_ECDH_ECDSA_WITH_CAMELLIA_256_CBC_SHA384 = 49269;
	public const CipherSuiteCode TLS_ECDHE_RSA_WITH_CAMELLIA_128_CBC_SHA256 = 49270;
	public const CipherSuiteCode TLS_ECDHE_RSA_WITH_CAMELLIA_256_CBC_SHA384 = 49271;
	public const CipherSuiteCode TLS_ECDH_RSA_WITH_CAMELLIA_128_CBC_SHA256 = 49272;
	public const CipherSuiteCode TLS_ECDH_RSA_WITH_CAMELLIA_256_CBC_SHA384 = 49273;
	public const CipherSuiteCode TLS_RSA_WITH_CAMELLIA_128_GCM_SHA256 = 49274;
	public const CipherSuiteCode TLS_RSA_WITH_CAMELLIA_256_GCM_SHA384 = 49275;
	public const CipherSuiteCode TLS_DHE_RSA_WITH_CAMELLIA_128_GCM_SHA256 = 49276;
	public const CipherSuiteCode TLS_DHE_RSA_WITH_CAMELLIA_256_GCM_SHA384 = 49277;
	public const CipherSuiteCode TLS_DH_RSA_WITH_CAMELLIA_128_GCM_SHA256 = 49278;
	public const CipherSuiteCode TLS_DH_RSA_WITH_CAMELLIA_256_GCM_SHA384 = 49279;
	public const CipherSuiteCode TLS_DHE_DSS_WITH_CAMELLIA_128_GCM_SHA256 = 49280;
	public const CipherSuiteCode TLS_DHE_DSS_WITH_CAMELLIA_256_GCM_SHA384 = 49281;
	public const CipherSuiteCode TLS_DH_DSS_WITH_CAMELLIA_128_GCM_SHA256 = 49282;
	public const CipherSuiteCode TLS_DH_DSS_WITH_CAMELLIA_256_GCM_SHA384 = 49283;
	public const CipherSuiteCode TLS_DH_anon_WITH_CAMELLIA_128_GCM_SHA256 = 49284;
	public const CipherSuiteCode TLS_DH_anon_WITH_CAMELLIA_256_GCM_SHA384 = 49285;
	public const CipherSuiteCode TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_GCM_SHA256 = 49286;
	public const CipherSuiteCode TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_GCM_SHA384 = 49287;
	public const CipherSuiteCode TLS_ECDH_ECDSA_WITH_CAMELLIA_128_GCM_SHA256 = 49288;
	public const CipherSuiteCode TLS_ECDH_ECDSA_WITH_CAMELLIA_256_GCM_SHA384 = 49289;
	public const CipherSuiteCode TLS_ECDHE_RSA_WITH_CAMELLIA_128_GCM_SHA256 = 49290;
	public const CipherSuiteCode TLS_ECDHE_RSA_WITH_CAMELLIA_256_GCM_SHA384 = 49291;
	public const CipherSuiteCode TLS_ECDH_RSA_WITH_CAMELLIA_128_GCM_SHA256 = 49292;
	public const CipherSuiteCode TLS_ECDH_RSA_WITH_CAMELLIA_256_GCM_SHA384 = 49293;
	public const CipherSuiteCode TLS_PSK_WITH_CAMELLIA_128_GCM_SHA256 = 49294;
	public const CipherSuiteCode TLS_PSK_WITH_CAMELLIA_256_GCM_SHA384 = 49295;
	public const CipherSuiteCode TLS_DHE_PSK_WITH_CAMELLIA_128_GCM_SHA256 = 49296;
	public const CipherSuiteCode TLS_DHE_PSK_WITH_CAMELLIA_256_GCM_SHA384 = 49297;
	public const CipherSuiteCode TLS_RSA_PSK_WITH_CAMELLIA_128_GCM_SHA256 = 49298;
	public const CipherSuiteCode TLS_RSA_PSK_WITH_CAMELLIA_256_GCM_SHA384 = 49299;
	public const CipherSuiteCode TLS_PSK_WITH_CAMELLIA_128_CBC_SHA256 = 49300;
	public const CipherSuiteCode TLS_PSK_WITH_CAMELLIA_256_CBC_SHA384 = 49301;
	public const CipherSuiteCode TLS_DHE_PSK_WITH_CAMELLIA_128_CBC_SHA256 = 49302;
	public const CipherSuiteCode TLS_DHE_PSK_WITH_CAMELLIA_256_CBC_SHA384 = 49303;
	public const CipherSuiteCode TLS_RSA_PSK_WITH_CAMELLIA_128_CBC_SHA256 = 49304;
	public const CipherSuiteCode TLS_RSA_PSK_WITH_CAMELLIA_256_CBC_SHA384 = 49305;
	public const CipherSuiteCode TLS_ECDHE_PSK_WITH_CAMELLIA_128_CBC_SHA256 = 49306;
	public const CipherSuiteCode TLS_ECDHE_PSK_WITH_CAMELLIA_256_CBC_SHA384 = 49307;
	public const CipherSuiteCode TLS_RSA_WITH_AES_128_CCM = 49308;
	public const CipherSuiteCode TLS_RSA_WITH_AES_256_CCM = 49309;
	public const CipherSuiteCode TLS_DHE_RSA_WITH_AES_128_CCM = 49310;
	public const CipherSuiteCode TLS_DHE_RSA_WITH_AES_256_CCM = 49311;
	public const CipherSuiteCode TLS_RSA_WITH_AES_128_CCM_8 = 49312;
	public const CipherSuiteCode TLS_RSA_WITH_AES_256_CCM_8 = 49313;
	public const CipherSuiteCode TLS_DHE_RSA_WITH_AES_128_CCM_8 = 49314;
	public const CipherSuiteCode TLS_DHE_RSA_WITH_AES_256_CCM_8 = 49315;
	public const CipherSuiteCode TLS_PSK_WITH_AES_128_CCM = 49316;
	public const CipherSuiteCode TLS_PSK_WITH_AES_256_CCM = 49317;
	public const CipherSuiteCode TLS_DHE_PSK_WITH_AES_128_CCM = 49318;
	public const CipherSuiteCode TLS_DHE_PSK_WITH_AES_256_CCM = 49319;
	public const CipherSuiteCode TLS_PSK_WITH_AES_128_CCM_8 = 49320;
	public const CipherSuiteCode TLS_PSK_WITH_AES_256_CCM_8 = 49321;
	public const CipherSuiteCode TLS_PSK_DHE_WITH_AES_128_CCM_8 = 49322;
	public const CipherSuiteCode TLS_PSK_DHE_WITH_AES_256_CCM_8 = 49323;
	public const CipherSuiteCode TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256 = 52243;
	public const CipherSuiteCode TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256 = 52244;
	public const CipherSuiteCode TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256 = 52245;
	public const CipherSuiteCode TLS_RSA_WITH_ESTREAM_SALSA20_SHA1 = 58384;
	public const CipherSuiteCode TLS_RSA_WITH_SALSA20_SHA1 = 58385;
	public const CipherSuiteCode TLS_ECDHE_RSA_WITH_ESTREAM_SALSA20_SHA1 = 58386;
	public const CipherSuiteCode TLS_ECDHE_RSA_WITH_SALSA20_SHA1 = 58387;
	public const CipherSuiteCode TLS_ECDHE_ECDSA_WITH_ESTREAM_SALSA20_SHA1 = 58388;
	public const CipherSuiteCode TLS_ECDHE_ECDSA_WITH_SALSA20_SHA1 = 58389;
	public const CipherSuiteCode TLS_PSK_WITH_ESTREAM_SALSA20_SHA1 = 58390;
	public const CipherSuiteCode TLS_PSK_WITH_SALSA20_SHA1 = 58391;
	public const CipherSuiteCode TLS_ECDHE_PSK_WITH_ESTREAM_SALSA20_SHA1 = 58392;
	public const CipherSuiteCode TLS_ECDHE_PSK_WITH_SALSA20_SHA1 = 58393;
	public const CipherSuiteCode TLS_RSA_PSK_WITH_ESTREAM_SALSA20_SHA1 = 58394;
	public const CipherSuiteCode TLS_RSA_PSK_WITH_SALSA20_SHA1 = 58395;
	public const CipherSuiteCode TLS_DHE_PSK_WITH_ESTREAM_SALSA20_SHA1 = 58396;
	public const CipherSuiteCode TLS_DHE_PSK_WITH_SALSA20_SHA1 = 58397;
	public const CipherSuiteCode TLS_DHE_RSA_WITH_ESTREAM_SALSA20_SHA1 = 58398;
	public const CipherSuiteCode TLS_DHE_RSA_WITH_SALSA20_SHA1 = 58399;
	public const CipherSuiteCode TLS_FALLBACK_SCSV = 22016;
}


// Namespace: Mono.Security.Interface
public class MonoTlsConnectionInfo // TypeDefIndex: 6949
{
	// Fields
	[CompilerGenerated]
	private CipherSuiteCode <CipherSuiteCode>k__BackingField; // 0x10
	[CompilerGenerated]
	private TlsProtocols <ProtocolVersion>k__BackingField; // 0x14
	[CompilerGenerated]
	private string <PeerDomainName>k__BackingField; // 0x18

	// Properties
	public CipherSuiteCode CipherSuiteCode { get; }
	public TlsProtocols ProtocolVersion { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xCFE6EC Offset: 0xCFA6EC VA: 0xCFE6EC
	public CipherSuiteCode get_CipherSuiteCode() { }

	[CompilerGenerated]
	// RVA: 0xCFE6F4 Offset: 0xCFA6F4 VA: 0xCFE6F4
	public TlsProtocols get_ProtocolVersion() { }

	// RVA: 0xCFE6FC Offset: 0xCFA6FC VA: 0xCFE6FC Slot: 3
	public override string ToString() { }

	// RVA: 0xCFE7B8 Offset: 0xCFA7B8 VA: 0xCFE7B8
	public void .ctor() { }
}


// Namespace: Mono.Security.Interface
[Flags]
public enum MonoSslPolicyErrors // TypeDefIndex: 6950
{
	// Fields
	public int value__; // 0x0
	public const MonoSslPolicyErrors None = 0;
	public const MonoSslPolicyErrors RemoteCertificateNotAvailable = 1;
	public const MonoSslPolicyErrors RemoteCertificateNameMismatch = 2;
	public const MonoSslPolicyErrors RemoteCertificateChainErrors = 4;
}


// Namespace: Mono.Security.Interface
public sealed class MonoRemoteCertificateValidationCallback : MulticastDelegate // TypeDefIndex: 6951
{
	// Methods

	// RVA: 0xCFE7C0 Offset: 0xCFA7C0 VA: 0xCFE7C0
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xCFE860 Offset: 0xCFA860 VA: 0xCFE860 Slot: 12
	public virtual bool Invoke(string targetHost, X509Certificate certificate, X509Chain chain, MonoSslPolicyErrors sslPolicyErrors) { }
}


// Namespace: Mono.Security.Interface
public sealed class MonoLocalCertificateSelectionCallback : MulticastDelegate // TypeDefIndex: 6952
{
	// Methods

	// RVA: 0xCFE874 Offset: 0xCFA874 VA: 0xCFE874
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xCFE914 Offset: 0xCFA914 VA: 0xCFE914 Slot: 12
	public virtual X509Certificate Invoke(string targetHost, X509CertificateCollection localCertificates, X509Certificate remoteCertificate, string[] acceptableIssuers) { }
}


// Namespace: Mono.Security.Interface
public abstract class MonoTlsProvider // TypeDefIndex: 6953
{
	// Properties
	public abstract Guid ID { get; }
	public abstract string Name { get; }
	public abstract bool SupportsSslStream { get; }
	public abstract bool SupportsConnectionInfo { get; }
	public abstract bool SupportsMonoExtensions { get; }
	public abstract SslProtocols SupportedProtocols { get; }
	internal abstract bool SupportsCleanShutdown { get; }

	// Methods

	// RVA: 0xCFE928 Offset: 0xCFA928 VA: 0xCFE928
	internal void .ctor() { }

	// RVA: -1 Offset: -1 Slot: 4
	public abstract Guid get_ID();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract string get_Name();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract bool get_SupportsSslStream();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract bool get_SupportsConnectionInfo();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract bool get_SupportsMonoExtensions();

	// RVA: -1 Offset: -1 Slot: 9
	public abstract SslProtocols get_SupportedProtocols();

	// RVA: -1 Offset: -1 Slot: 10
	internal abstract bool get_SupportsCleanShutdown();
}


// Namespace: Mono.Security.Interface
public static class MonoTlsProviderFactory // TypeDefIndex: 6954
{
	// Methods

	// RVA: 0xCFE930 Offset: 0xCFA930 VA: 0xCFE930
	public static MonoTlsProvider GetProvider() { }
}


// Namespace: Mono.Security.Interface
public sealed class MonoTlsSettings // TypeDefIndex: 6955
{
	// Fields
	[CompilerGenerated]
	private MonoRemoteCertificateValidationCallback <RemoteCertificateValidationCallback>k__BackingField; // 0x10
	[CompilerGenerated]
	private MonoLocalCertificateSelectionCallback <ClientCertificateSelectionCallback>k__BackingField; // 0x18
	[CompilerGenerated]
	private Nullable<DateTime> <CertificateValidationTime>k__BackingField; // 0x20
	[CompilerGenerated]
	private X509CertificateCollection <TrustAnchors>k__BackingField; // 0x30
	[CompilerGenerated]
	private object <UserSettings>k__BackingField; // 0x38
	[CompilerGenerated]
	private string[] <CertificateSearchPaths>k__BackingField; // 0x40
	[CompilerGenerated]
	private bool <SendCloseNotify>k__BackingField; // 0x48
	[CompilerGenerated]
	private string[] <ClientCertificateIssuers>k__BackingField; // 0x50
	[CompilerGenerated]
	private bool <DisallowUnauthenticatedCertificateRequest>k__BackingField; // 0x58
	[CompilerGenerated]
	private Nullable<TlsProtocols> <EnabledProtocols>k__BackingField; // 0x5C
	[CompilerGenerated]
	private CipherSuiteCode[] <EnabledCiphers>k__BackingField; // 0x68
	private bool cloned; // 0x70
	private bool checkCertName; // 0x71
	private bool checkCertRevocationStatus; // 0x72
	private Nullable<bool> useServicePointManagerCallback; // 0x73
	private bool skipSystemValidators; // 0x75
	private bool callbackNeedsChain; // 0x76
	private ICertificateValidator certificateValidator; // 0x78
	private static MonoTlsSettings defaultSettings; // 0x0

	// Properties
	public MonoRemoteCertificateValidationCallback RemoteCertificateValidationCallback { get; set; }
	public MonoLocalCertificateSelectionCallback ClientCertificateSelectionCallback { get; set; }
	public Nullable<bool> UseServicePointManagerCallback { set; }
	public Nullable<DateTime> CertificateValidationTime { get; set; }
	public X509CertificateCollection TrustAnchors { get; set; }
	public object UserSettings { get; set; }
	internal string[] CertificateSearchPaths { get; set; }
	internal bool SendCloseNotify { get; set; }
	public string[] ClientCertificateIssuers { get; set; }
	public bool DisallowUnauthenticatedCertificateRequest { get; set; }
	public Nullable<TlsProtocols> EnabledProtocols { get; set; }
	public CipherSuiteCode[] EnabledCiphers { get; set; }
	public static MonoTlsSettings DefaultSettings { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xCFE9A0 Offset: 0xCFA9A0 VA: 0xCFE9A0
	public MonoRemoteCertificateValidationCallback get_RemoteCertificateValidationCallback() { }

	[CompilerGenerated]
	// RVA: 0xCFE9A8 Offset: 0xCFA9A8 VA: 0xCFE9A8
	public void set_RemoteCertificateValidationCallback(MonoRemoteCertificateValidationCallback value) { }

	[CompilerGenerated]
	// RVA: 0xCFE9B0 Offset: 0xCFA9B0 VA: 0xCFE9B0
	public MonoLocalCertificateSelectionCallback get_ClientCertificateSelectionCallback() { }

	[CompilerGenerated]
	// RVA: 0xCFE9B8 Offset: 0xCFA9B8 VA: 0xCFE9B8
	public void set_ClientCertificateSelectionCallback(MonoLocalCertificateSelectionCallback value) { }

	// RVA: 0xCFE9C0 Offset: 0xCFA9C0 VA: 0xCFE9C0
	public void set_UseServicePointManagerCallback(Nullable<bool> value) { }

	[CompilerGenerated]
	// RVA: 0xCFE9C8 Offset: 0xCFA9C8 VA: 0xCFE9C8
	public Nullable<DateTime> get_CertificateValidationTime() { }

	[CompilerGenerated]
	// RVA: 0xCFE9D4 Offset: 0xCFA9D4 VA: 0xCFE9D4
	public void set_CertificateValidationTime(Nullable<DateTime> value) { }

	[CompilerGenerated]
	// RVA: 0xCFE9DC Offset: 0xCFA9DC VA: 0xCFE9DC
	public X509CertificateCollection get_TrustAnchors() { }

	[CompilerGenerated]
	// RVA: 0xCFE9E4 Offset: 0xCFA9E4 VA: 0xCFE9E4
	public void set_TrustAnchors(X509CertificateCollection value) { }

	[CompilerGenerated]
	// RVA: 0xCFE9EC Offset: 0xCFA9EC VA: 0xCFE9EC
	public object get_UserSettings() { }

	[CompilerGenerated]
	// RVA: 0xCFE9F4 Offset: 0xCFA9F4 VA: 0xCFE9F4
	public void set_UserSettings(object value) { }

	[CompilerGenerated]
	// RVA: 0xCFE9FC Offset: 0xCFA9FC VA: 0xCFE9FC
	internal string[] get_CertificateSearchPaths() { }

	[CompilerGenerated]
	// RVA: 0xCFEA04 Offset: 0xCFAA04 VA: 0xCFEA04
	internal void set_CertificateSearchPaths(string[] value) { }

	[CompilerGenerated]
	// RVA: 0xCFEA0C Offset: 0xCFAA0C VA: 0xCFEA0C
	internal bool get_SendCloseNotify() { }

	[CompilerGenerated]
	// RVA: 0xCFEA14 Offset: 0xCFAA14 VA: 0xCFEA14
	internal void set_SendCloseNotify(bool value) { }

	[CompilerGenerated]
	// RVA: 0xCFEA20 Offset: 0xCFAA20 VA: 0xCFEA20
	public string[] get_ClientCertificateIssuers() { }

	[CompilerGenerated]
	// RVA: 0xCFEA28 Offset: 0xCFAA28 VA: 0xCFEA28
	public void set_ClientCertificateIssuers(string[] value) { }

	[CompilerGenerated]
	// RVA: 0xCFEA30 Offset: 0xCFAA30 VA: 0xCFEA30
	public bool get_DisallowUnauthenticatedCertificateRequest() { }

	[CompilerGenerated]
	// RVA: 0xCFEA38 Offset: 0xCFAA38 VA: 0xCFEA38
	public void set_DisallowUnauthenticatedCertificateRequest(bool value) { }

	[CompilerGenerated]
	// RVA: 0xCFEA44 Offset: 0xCFAA44 VA: 0xCFEA44
	public Nullable<TlsProtocols> get_EnabledProtocols() { }

	[CompilerGenerated]
	// RVA: 0xCFEA4C Offset: 0xCFAA4C VA: 0xCFEA4C
	public void set_EnabledProtocols(Nullable<TlsProtocols> value) { }

	[CompilerGenerated]
	// RVA: 0xCFEA54 Offset: 0xCFAA54 VA: 0xCFEA54
	public CipherSuiteCode[] get_EnabledCiphers() { }

	[CompilerGenerated]
	// RVA: 0xCFEA5C Offset: 0xCFAA5C VA: 0xCFEA5C
	public void set_EnabledCiphers(CipherSuiteCode[] value) { }

	// RVA: 0xCFEA64 Offset: 0xCFAA64 VA: 0xCFEA64
	public void .ctor() { }

	// RVA: 0xCFEA78 Offset: 0xCFAA78 VA: 0xCFEA78
	public static MonoTlsSettings get_DefaultSettings() { }

	// RVA: 0xCFEB04 Offset: 0xCFAB04 VA: 0xCFEB04
	public static MonoTlsSettings CopyDefaultSettings() { }

	[Obsolete("Do not use outside System.dll!")]
	// RVA: 0xCFEB74 Offset: 0xCFAB74 VA: 0xCFEB74
	public MonoTlsSettings CloneWithValidator(ICertificateValidator validator) { }

	// RVA: 0xCFEB1C Offset: 0xCFAB1C VA: 0xCFEB1C
	public MonoTlsSettings Clone() { }

	// RVA: 0xCFEBF4 Offset: 0xCFABF4 VA: 0xCFEBF4
	private void .ctor(MonoTlsSettings other) { }
}


// Namespace: Mono.Security.Interface
public sealed class TlsException : Exception // TypeDefIndex: 6956
{
	// Fields
	private Alert alert; // 0x90

	// Methods

	// RVA: 0xCFED40 Offset: 0xCFAD40 VA: 0xCFED40
	public void .ctor(Alert alert, string message) { }

	// RVA: 0xCFEDB4 Offset: 0xCFADB4 VA: 0xCFEDB4
	public void .ctor(AlertDescription description, string message) { }
}


// Namespace: Mono.Security.Interface
[Flags]
public enum TlsProtocols // TypeDefIndex: 6957
{
	// Fields
	public int value__; // 0x0
	public const TlsProtocols Zero = 0;
	public const TlsProtocols Tls10Client = 128;
	public const TlsProtocols Tls10Server = 64;
	public const TlsProtocols Tls10 = 192;
	public const TlsProtocols Tls11Client = 512;
	public const TlsProtocols Tls11Server = 256;
	public const TlsProtocols Tls11 = 768;
	public const TlsProtocols Tls12Client = 2048;
	public const TlsProtocols Tls12Server = 1024;
	public const TlsProtocols Tls12 = 3072;
	public const TlsProtocols ClientMask = 2688;
	public const TlsProtocols ServerMask = 1344;
}


// Namespace: Mono.Security.Cryptography
public sealed class CryptoConvert // TypeDefIndex: 6958
{
	// Methods

	// RVA: 0xCFEE28 Offset: 0xCFAE28 VA: 0xCFEE28
	public static string ToHex(byte[] input) { }
}


// Namespace: Mono.Security.Cryptography
public abstract class MD2 : HashAlgorithm // TypeDefIndex: 6959
{
	// Methods

	// RVA: 0xCFEF64 Offset: 0xCFAF64 VA: 0xCFEF64
	protected void .ctor() { }

	// RVA: 0xCFEF84 Offset: 0xCFAF84 VA: 0xCFEF84
	public static MD2 Create() { }
}


// Namespace: Mono.Security.Cryptography
public class MD2Managed : MD2 // TypeDefIndex: 6960
{
	// Fields
	private byte[] state; // 0x28
	private byte[] checksum; // 0x30
	private byte[] buffer; // 0x38
	private int count; // 0x40
	private byte[] x; // 0x48
	private static readonly byte[] PI_SUBST; // 0x0

	// Methods

	// RVA: 0xCFF078 Offset: 0xCFB078 VA: 0xCFF078
	private byte[] Padding(int nLength) { }

	// RVA: 0xCFEFD4 Offset: 0xCFAFD4 VA: 0xCFEFD4
	public void .ctor() { }

	// RVA: 0xCFF114 Offset: 0xCFB114 VA: 0xCFF114 Slot: 18
	public override void Initialize() { }

	// RVA: 0xCFF174 Offset: 0xCFB174 VA: 0xCFF174 Slot: 16
	protected override void HashCore(byte[] array, int ibStart, int cbSize) { }

	// RVA: 0xCFF4B4 Offset: 0xCFB4B4 VA: 0xCFF4B4 Slot: 17
	protected override byte[] HashFinal() { }

	// RVA: 0xCFF250 Offset: 0xCFB250 VA: 0xCFF250
	private void MD2Transform(byte[] state, byte[] checksum, byte[] block, int index) { }

	// RVA: 0xCFF5A4 Offset: 0xCFB5A4 VA: 0xCFF5A4
	private static void .cctor() { }
}


// Namespace: Mono.Security.Cryptography
public abstract class MD4 : HashAlgorithm // TypeDefIndex: 6961
{
	// Methods

	// RVA: 0xCFF638 Offset: 0xCFB638 VA: 0xCFF638
	protected void .ctor() { }

	// RVA: 0xCFF658 Offset: 0xCFB658 VA: 0xCFF658
	public static MD4 Create() { }
}


// Namespace: Mono.Security.Cryptography
public class MD4Managed : MD4 // TypeDefIndex: 6962
{
	// Fields
	private uint[] state; // 0x28
	private byte[] buffer; // 0x30
	private uint[] count; // 0x38
	private uint[] x; // 0x40
	private byte[] digest; // 0x48

	// Methods

	// RVA: 0xCFF6A8 Offset: 0xCFB6A8 VA: 0xCFF6A8
	public void .ctor() { }

	// RVA: 0xCFF778 Offset: 0xCFB778 VA: 0xCFF778 Slot: 18
	public override void Initialize() { }

	// RVA: 0xCFF82C Offset: 0xCFB82C VA: 0xCFF82C Slot: 16
	protected override void HashCore(byte[] array, int ibStart, int cbSize) { }

	// RVA: 0xCFFFC8 Offset: 0xCFBFC8 VA: 0xCFFFC8 Slot: 17
	protected override byte[] HashFinal() { }

	// RVA: 0xD001BC Offset: 0xCFC1BC VA: 0xD001BC
	private byte[] Padding(int nLength) { }

	// RVA: 0xD00234 Offset: 0xCFC234 VA: 0xD00234
	private uint F(uint x, uint y, uint z) { }

	// RVA: 0xD00244 Offset: 0xCFC244 VA: 0xD00244
	private uint G(uint x, uint y, uint z) { }

	// RVA: 0xD00258 Offset: 0xCFC258 VA: 0xD00258
	private uint H(uint x, uint y, uint z) { }

	// RVA: 0xD00264 Offset: 0xCFC264 VA: 0xD00264
	private uint ROL(uint x, byte n) { }

	// RVA: 0xD00270 Offset: 0xCFC270 VA: 0xD00270
	private void FF(ref uint a, uint b, uint c, uint d, uint x, byte s) { }

	// RVA: 0xD00298 Offset: 0xCFC298 VA: 0xD00298
	private void GG(ref uint a, uint b, uint c, uint d, uint x, byte s) { }

	// RVA: 0xD002D0 Offset: 0xCFC2D0 VA: 0xD002D0
	private void HH(ref uint a, uint b, uint c, uint d, uint x, byte s) { }

	// RVA: 0xD000C4 Offset: 0xCFC0C4 VA: 0xD000C4
	private void Encode(byte[] output, uint[] input) { }

	// RVA: 0xD00300 Offset: 0xCFC300 VA: 0xD00300
	private void Decode(uint[] output, byte[] input, int index) { }

	// RVA: 0xCFF950 Offset: 0xCFB950 VA: 0xCFF950
	private void MD4Transform(uint[] state, byte[] block, int index) { }
}


// Namespace: Mono.Security.Cryptography
public sealed class PKCS1 // TypeDefIndex: 6963
{
	// Fields
	private static byte[] emptySHA1; // 0x0
	private static byte[] emptySHA256; // 0x8
	private static byte[] emptySHA384; // 0x10
	private static byte[] emptySHA512; // 0x18

	// Methods

	// RVA: 0xD003C8 Offset: 0xCFC3C8 VA: 0xD003C8
	private static bool Compare(byte[] array1, byte[] array2) { }

	// RVA: 0xD00454 Offset: 0xCFC454 VA: 0xD00454
	public static byte[] I2OSP(byte[] x, int size) { }

	// RVA: 0xD004E0 Offset: 0xCFC4E0 VA: 0xD004E0
	public static byte[] OS2IP(byte[] x) { }

	// RVA: 0xD005A0 Offset: 0xCFC5A0 VA: 0xD005A0
	public static byte[] RSAVP1(RSA rsa, byte[] s) { }

	// RVA: 0xD005BC Offset: 0xCFC5BC VA: 0xD005BC
	public static bool Verify_v15(RSA rsa, HashAlgorithm hash, byte[] hashValue, byte[] signature, bool tryNonStandardEncoding) { }

	// RVA: 0xD00794 Offset: 0xCFC794 VA: 0xD00794
	public static byte[] Encode_v15(HashAlgorithm hash, byte[] hashValue, int emLength) { }

	// RVA: 0xD00AC8 Offset: 0xCFCAC8 VA: 0xD00AC8
	internal static string HashNameFromOid(string oid, bool throwOnError = True) { }

	// RVA: 0xD00ED0 Offset: 0xCFCED0 VA: 0xD00ED0
	internal static HashAlgorithm CreateFromOid(string oid) { }

	// RVA: 0xD00F2C Offset: 0xCFCF2C VA: 0xD00F2C
	internal static HashAlgorithm CreateFromName(string name) { }

	// RVA: 0xD01330 Offset: 0xCFD330 VA: 0xD01330
	private static void .cctor() { }
}


// Namespace: 
public class PKCS8.PrivateKeyInfo // TypeDefIndex: 6964
{
	// Fields
	private int _version; // 0x10
	private string _algorithm; // 0x18
	private byte[] _key; // 0x20
	private ArrayList _list; // 0x28

	// Properties
	public string Algorithm { get; }
	public byte[] PrivateKey { get; }

	// Methods

	// RVA: 0xD01480 Offset: 0xCFD480 VA: 0xD01480
	public void .ctor() { }

	// RVA: 0xD014E8 Offset: 0xCFD4E8 VA: 0xD014E8
	public void .ctor(byte[] data) { }

	// RVA: 0xD01768 Offset: 0xCFD768 VA: 0xD01768
	public string get_Algorithm() { }

	// RVA: 0xD01770 Offset: 0xCFD770 VA: 0xD01770
	public byte[] get_PrivateKey() { }

	// RVA: 0xD01510 Offset: 0xCFD510 VA: 0xD01510
	private void Decode(byte[] data) { }

	// RVA: 0xD017E4 Offset: 0xCFD7E4 VA: 0xD017E4
	private static byte[] RemoveLeadingZero(byte[] bigInt) { }

	// RVA: 0xD01880 Offset: 0xCFD880 VA: 0xD01880
	private static byte[] Normalize(byte[] bigInt, int length) { }

	// RVA: 0xD01920 Offset: 0xCFD920 VA: 0xD01920
	public static RSA DecodeRSA(byte[] keypair) { }

	// RVA: 0xD01CE4 Offset: 0xCFDCE4 VA: 0xD01CE4
	public static byte[] Encode(RSA rsa) { }

	// RVA: 0xD01EDC Offset: 0xCFDEDC VA: 0xD01EDC
	public static DSA DecodeDSA(byte[] privateKey, DSAParameters dsaParameters) { }

	// RVA: 0xD02004 Offset: 0xCFE004 VA: 0xD02004
	public static byte[] Encode(DSA dsa) { }

	// RVA: 0xD02050 Offset: 0xCFE050 VA: 0xD02050
	public static byte[] Encode(AsymmetricAlgorithm aa) { }
}


// Namespace: 
public class PKCS8.EncryptedPrivateKeyInfo // TypeDefIndex: 6965
{
	// Fields
	private string _algorithm; // 0x10
	private byte[] _salt; // 0x18
	private int _iterations; // 0x20
	private byte[] _data; // 0x28

	// Properties
	public string Algorithm { get; }
	public byte[] EncryptedData { get; }
	public byte[] Salt { get; }
	public int IterationCount { get; }

	// Methods

	// RVA: 0xD02174 Offset: 0xCFE174 VA: 0xD02174
	public void .ctor() { }

	// RVA: 0xD0217C Offset: 0xCFE17C VA: 0xD0217C
	public void .ctor(byte[] data) { }

	// RVA: 0xD02454 Offset: 0xCFE454 VA: 0xD02454
	public string get_Algorithm() { }

	// RVA: 0xD0245C Offset: 0xCFE45C VA: 0xD0245C
	public byte[] get_EncryptedData() { }

	// RVA: 0xD024D0 Offset: 0xCFE4D0 VA: 0xD024D0
	public byte[] get_Salt() { }

	// RVA: 0xD02584 Offset: 0xCFE584 VA: 0xD02584
	public int get_IterationCount() { }

	// RVA: 0xD021A8 Offset: 0xCFE1A8 VA: 0xD021A8
	private void Decode(byte[] data) { }
}


// Namespace: Mono.Security.Cryptography
public sealed class PKCS8 // TypeDefIndex: 6966
{}


// Namespace: 
public sealed class RSAManaged.KeyGeneratedEventHandler : MulticastDelegate // TypeDefIndex: 6967
{
	// Methods

	// RVA: 0xD046E8 Offset: 0xD006E8 VA: 0xD046E8
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xD047EC Offset: 0xD007EC VA: 0xD047EC Slot: 12
	public virtual void Invoke(object sender, EventArgs e) { }
}


// Namespace: Mono.Security.Cryptography
public class RSAManaged : RSA // TypeDefIndex: 6968
{
	// Fields
	private bool isCRTpossible; // 0x20
	private bool keyBlinding; // 0x21
	private bool keypairGenerated; // 0x22
	private bool m_disposed; // 0x23
	private BigInteger d; // 0x28
	private BigInteger p; // 0x30
	private BigInteger q; // 0x38
	private BigInteger dp; // 0x40
	private BigInteger dq; // 0x48
	private BigInteger qInv; // 0x50
	private BigInteger n; // 0x58
	private BigInteger e; // 0x60
	[CompilerGenerated]
	private RSAManaged.KeyGeneratedEventHandler KeyGenerated; // 0x68

	// Properties
	public override int KeySize { get; }
	public bool PublicOnly { get; }

	// Methods

	// RVA: 0xD0258C Offset: 0xCFE58C VA: 0xD0258C
	public void .ctor() { }

	// RVA: 0xD02594 Offset: 0xCFE594 VA: 0xD02594
	public void .ctor(int keySize) { }

	// RVA: 0xD02660 Offset: 0xCFE660 VA: 0xD02660 Slot: 1
	protected override void Finalize() { }

	// RVA: 0xD02700 Offset: 0xCFE700 VA: 0xD02700
	private void GenerateKeyPair() { }

	// RVA: 0xD02F48 Offset: 0xCFEF48 VA: 0xD02F48 Slot: 6
	public override int get_KeySize() { }

	// RVA: 0xD02FE4 Offset: 0xCFEFE4 VA: 0xD02FE4
	public bool get_PublicOnly() { }

	// RVA: 0xD03134 Offset: 0xCFF134 VA: 0xD03134 Slot: 10
	public override byte[] EncryptValue(byte[] rgb) { }

	// RVA: 0xD035C4 Offset: 0xCFF5C4 VA: 0xD035C4 Slot: 11
	public override RSAParameters ExportParameters(bool includePrivateParameters) { }

	// RVA: 0xD03A20 Offset: 0xCFFA20 VA: 0xD03A20 Slot: 12
	public override void ImportParameters(RSAParameters parameters) { }

	// RVA: 0xD03E5C Offset: 0xCFFE5C VA: 0xD03E5C Slot: 5
	protected override void Dispose(bool disposing) { }

	// RVA: 0xD04060 Offset: 0xD00060 VA: 0xD04060 Slot: 9
	public override string ToXmlString(bool includePrivateParameters) { }

	// RVA: 0xD034C4 Offset: 0xCFF4C4 VA: 0xD034C4
	private byte[] GetPaddedValue(BigInteger value, int length) { }
}


// Namespace: Mono.Security.Authenticode
public class AuthenticodeBase // TypeDefIndex: 6969
{
	// Fields
	private byte[] fileblock; // 0x10
	private Stream fs; // 0x18
	private int blockNo; // 0x20
	private int blockLength; // 0x24
	private int peOffset; // 0x28
	private int dirSecurityOffset; // 0x2C
	private int dirSecuritySize; // 0x30
	private int coffSymbolTableOffset; // 0x34
	private bool pe64; // 0x38

	// Properties
	internal int PEOffset { get; }

	// Methods

	// RVA: 0xD04800 Offset: 0xD00800 VA: 0xD04800
	public void .ctor() { }

	// RVA: 0xD0485C Offset: 0xD0085C VA: 0xD0485C
	internal int get_PEOffset() { }

	// RVA: 0xD04954 Offset: 0xD00954 VA: 0xD04954
	internal void Open(string filename) { }

	// RVA: 0xD04A0C Offset: 0xD00A0C VA: 0xD04A0C
	internal void Open(byte[] rawdata) { }

	// RVA: 0xD049E0 Offset: 0xD009E0 VA: 0xD049E0
	internal void Close() { }

	// RVA: 0xD04884 Offset: 0xD00884 VA: 0xD04884
	internal void ReadFirstBlock() { }

	// RVA: 0xD04A90 Offset: 0xD00A90 VA: 0xD04A90
	internal int ProcessFirstBlock() { }

	// RVA: 0xD04CC4 Offset: 0xD00CC4 VA: 0xD04CC4
	internal byte[] GetSecurityEntry() { }

	// RVA: 0xD04D90 Offset: 0xD00D90 VA: 0xD04D90
	internal byte[] GetHash(HashAlgorithm hash) { }
}


// Namespace: Mono.Security.Authenticode
public class AuthenticodeDeformatter : AuthenticodeBase // TypeDefIndex: 6970
{
	// Fields
	private string filename; // 0x40
	private byte[] rawdata; // 0x48
	private byte[] hash; // 0x50
	private X509CertificateCollection coll; // 0x58
	private ASN1 signedHash; // 0x60
	private DateTime timestamp; // 0x68
	private X509Certificate signingCertificate; // 0x70
	private int reason; // 0x78
	private bool trustedRoot; // 0x7C
	private bool trustedTimestampRoot; // 0x7D
	private byte[] entry; // 0x80
	private X509Chain signerChain; // 0x88
	private X509Chain timestampChain; // 0x90

	// Properties
	public byte[] RawData { set; }

	// Methods

	// RVA: 0xD05214 Offset: 0xD01214 VA: 0xD05214
	public void .ctor() { }

	// RVA: 0xD05294 Offset: 0xD01294 VA: 0xD05294
	public void .ctor(byte[] rawData) { }

	// RVA: 0xD052BC Offset: 0xD012BC VA: 0xD052BC
	public void set_RawData(byte[] value) { }

	// RVA: 0xD05430 Offset: 0xD01430 VA: 0xD05430
	private bool CheckSignature() { }

	// RVA: 0xD06158 Offset: 0xD02158 VA: 0xD06158
	private bool CompareIssuerSerial(string issuer, byte[] serial, X509Certificate x509) { }

	// RVA: 0xD05724 Offset: 0xD01724 VA: 0xD05724
	private bool VerifySignature(PKCS7.SignedData sd, byte[] calculatedMessageDigest, HashAlgorithm ha) { }

	// RVA: 0xD0624C Offset: 0xD0224C VA: 0xD0624C
	private bool VerifyCounterSignature(PKCS7.SignerInfo cs, byte[] signature) { }

	// RVA: 0xD0538C Offset: 0xD0138C VA: 0xD0538C
	private void Reset() { }
}


// Namespace: 
public enum BigInteger.Sign // TypeDefIndex: 6971
{
	// Fields
	public int value__; // 0x0
	public const BigInteger.Sign Negative = -1;
	public const BigInteger.Sign Zero = 0;
	public const BigInteger.Sign Positive = 1;
}


// Namespace: 
public sealed class BigInteger.ModulusRing // TypeDefIndex: 6972
{
	// Fields
	private BigInteger mod; // 0x10
	private BigInteger constant; // 0x18

	// Methods

	// RVA: 0xD08A0C Offset: 0xD04A0C VA: 0xD08A0C
	public void .ctor(BigInteger modulus) { }

	// RVA: 0xD08D08 Offset: 0xD04D08 VA: 0xD08D08
	public void BarrettReduction(BigInteger x) { }

	// RVA: 0xD0935C Offset: 0xD0535C VA: 0xD0935C
	public BigInteger Multiply(BigInteger a, BigInteger b) { }

	// RVA: 0xD094D8 Offset: 0xD054D8 VA: 0xD094D8
	public BigInteger Difference(BigInteger a, BigInteger b) { }

	// RVA: 0xD08AE0 Offset: 0xD04AE0 VA: 0xD08AE0
	public BigInteger Pow(BigInteger a, BigInteger k) { }

	// RVA: 0xD0968C Offset: 0xD0568C VA: 0xD0968C
	public BigInteger Pow(uint b, BigInteger exp) { }
}


// Namespace: 
private sealed class BigInteger.Kernel // TypeDefIndex: 6973
{
	// Methods

	// RVA: 0xD070D0 Offset: 0xD030D0 VA: 0xD070D0
	public static BigInteger Subtract(BigInteger big, BigInteger small) { }

	// RVA: 0xD0909C Offset: 0xD0509C VA: 0xD0909C
	public static void MinusEq(BigInteger big, BigInteger small) { }

	// RVA: 0xD091CC Offset: 0xD051CC VA: 0xD091CC
	public static void PlusEq(BigInteger bi1, BigInteger bi2) { }

	// RVA: 0xD06F8C Offset: 0xD02F8C VA: 0xD06F8C
	public static BigInteger.Sign Compare(BigInteger bi1, BigInteger bi2) { }

	// RVA: 0xD082F8 Offset: 0xD042F8 VA: 0xD082F8
	public static uint SingleByteDivideInPlace(BigInteger n, uint d) { }

	// RVA: 0xD07294 Offset: 0xD03294 VA: 0xD07294
	public static uint DwordMod(BigInteger n, uint d) { }

	// RVA: 0xD096FC Offset: 0xD056FC VA: 0xD096FC
	public static BigInteger[] DwordDivMod(BigInteger n, uint d) { }

	// RVA: 0xD072F8 Offset: 0xD032F8 VA: 0xD072F8
	public static BigInteger[] multiByteDivide(BigInteger bi1, BigInteger bi2) { }

	// RVA: 0xD07888 Offset: 0xD03888 VA: 0xD07888
	public static BigInteger LeftShift(BigInteger bi, int n) { }

	// RVA: 0xD07A70 Offset: 0xD03A70 VA: 0xD07A70
	public static BigInteger RightShift(BigInteger bi, int n) { }

	// RVA: 0xD07788 Offset: 0xD03788 VA: 0xD07788
	public static void Multiply(uint[] x, uint xOffset, uint xLen, uint[] y, uint yOffset, uint yLen, uint[] d, uint dOffset) { }

	// RVA: 0xD08F60 Offset: 0xD04F60 VA: 0xD08F60
	public static void MultiplyMod2p32pmod(uint[] x, int xOffset, int xLen, uint[] y, int yOffest, int yLen, uint[] d, int dOffset, int mod) { }

	// RVA: 0xD09884 Offset: 0xD05884 VA: 0xD09884
	public static uint modInverse(BigInteger bi, uint modulus) { }

	// RVA: 0xD08514 Offset: 0xD04514 VA: 0xD08514
	public static BigInteger modInverse(BigInteger bi, BigInteger modulus) { }
}


// Namespace: Mono.Math
public class BigInteger // TypeDefIndex: 6974
{
	// Fields
	private uint length; // 0x10
	private uint[] data; // 0x18
	internal static readonly uint[] smallPrimes; // 0x0
	private static RandomNumberGenerator rng; // 0x8

	// Properties
	private static RandomNumberGenerator Rng { get; }

	// Methods

	// RVA: 0xD06C38 Offset: 0xD02C38 VA: 0xD06C38
	public void .ctor(BigInteger.Sign sign, uint len) { }

	// RVA: 0xD06CAC Offset: 0xD02CAC VA: 0xD06CAC
	public void .ctor(BigInteger bi) { }

	// RVA: 0xD06D6C Offset: 0xD02D6C VA: 0xD06D6C
	public void .ctor(BigInteger bi, uint len) { }

	// RVA: 0xD0323C Offset: 0xCFF23C VA: 0xD0323C
	public void .ctor(byte[] inData) { }

	// RVA: 0xD06E98 Offset: 0xD02E98 VA: 0xD06E98
	public void .ctor(uint ui) { }

	// RVA: 0xD02968 Offset: 0xCFE968 VA: 0xD02968
	public static BigInteger op_Implicit(uint value) { }

	// RVA: 0xD02D08 Offset: 0xCFED08 VA: 0xD02D08
	public static BigInteger op_Implicit(int value) { }

	// RVA: 0xD02DAC Offset: 0xCFEDAC VA: 0xD02DAC
	public static BigInteger op_Subtraction(BigInteger bi1, BigInteger bi2) { }

	// RVA: 0xD02A2C Offset: 0xCFEA2C VA: 0xD02A2C
	public static uint op_Modulus(BigInteger bi, uint ui) { }

	// RVA: 0xD02F1C Offset: 0xCFEF1C VA: 0xD02F1C
	public static BigInteger op_Modulus(BigInteger bi1, BigInteger bi2) { }

	// RVA: 0xD07760 Offset: 0xD03760 VA: 0xD07760
	public static BigInteger op_Division(BigInteger bi1, BigInteger bi2) { }

	// RVA: 0xD02AE0 Offset: 0xCFEAE0 VA: 0xD02AE0
	public static BigInteger op_Multiply(BigInteger bi1, BigInteger bi2) { }

	// RVA: 0xD07884 Offset: 0xD03884 VA: 0xD07884
	public static BigInteger op_LeftShift(BigInteger bi1, int shiftVal) { }

	// RVA: 0xD07A6C Offset: 0xD03A6C VA: 0xD07A6C
	public static BigInteger op_RightShift(BigInteger bi1, int shiftVal) { }

	// RVA: 0xD07BE8 Offset: 0xD03BE8 VA: 0xD07BE8
	private static RandomNumberGenerator get_Rng() { }

	// RVA: 0xD07C90 Offset: 0xD03C90 VA: 0xD07C90
	public static BigInteger GenerateRandom(int bits, RandomNumberGenerator rng) { }

	// RVA: 0xD07DF0 Offset: 0xD03DF0 VA: 0xD07DF0
	public static BigInteger GenerateRandom(int bits) { }

	// RVA: 0xD02C88 Offset: 0xCFEC88 VA: 0xD02C88
	public int BitCount() { }

	// RVA: 0xD07E4C Offset: 0xD03E4C VA: 0xD07E4C
	public bool TestBit(int bitNum) { }

	// RVA: 0xD07EE0 Offset: 0xD03EE0 VA: 0xD07EE0
	public void SetBit(uint bitNum) { }

	// RVA: 0xD07EE8 Offset: 0xD03EE8 VA: 0xD07EE8
	public void SetBit(uint bitNum, bool value) { }

	// RVA: 0xD07F44 Offset: 0xD03F44 VA: 0xD07F44
	public int LowestSetBit() { }

	// RVA: 0xD038EC Offset: 0xCFF8EC VA: 0xD038EC
	public byte[] GetBytes() { }

	// RVA: 0xD06F20 Offset: 0xD02F20 VA: 0xD06F20
	public static bool op_Equality(BigInteger bi1, uint ui) { }

	// RVA: 0xD07FC0 Offset: 0xD03FC0 VA: 0xD07FC0
	public static bool op_Inequality(BigInteger bi1, uint ui) { }

	// RVA: 0xD03084 Offset: 0xCFF084 VA: 0xD03084
	public static bool op_Equality(BigInteger bi1, BigInteger bi2) { }

	// RVA: 0xD02A30 Offset: 0xCFEA30 VA: 0xD02A30
	public static bool op_Inequality(BigInteger bi1, BigInteger bi2) { }

	// RVA: 0xD0802C Offset: 0xD0402C VA: 0xD0802C
	public static bool op_GreaterThan(BigInteger bi1, BigInteger bi2) { }

	// RVA: 0xD02CF4 Offset: 0xCFECF4 VA: 0xD02CF4
	public static bool op_LessThan(BigInteger bi1, BigInteger bi2) { }

	// RVA: 0xD08044 Offset: 0xD04044 VA: 0xD08044
	public static bool op_GreaterThanOrEqual(BigInteger bi1, BigInteger bi2) { }

	// RVA: 0xD0805C Offset: 0xD0405C VA: 0xD0805C
	public static bool op_LessThanOrEqual(BigInteger bi1, BigInteger bi2) { }

	// RVA: 0xD08074 Offset: 0xD04074 VA: 0xD08074
	public string ToString(uint radix) { }

	// RVA: 0xD080CC Offset: 0xD040CC VA: 0xD080CC
	public string ToString(uint radix, string characterSet) { }

	// RVA: 0xD06E40 Offset: 0xD02E40 VA: 0xD06E40
	private void Normalize() { }

	// RVA: 0xD03574 Offset: 0xCFF574 VA: 0xD03574
	public void Clear() { }

	// RVA: 0xD0836C Offset: 0xD0436C VA: 0xD0836C Slot: 2
	public override int GetHashCode() { }

	// RVA: 0xD083C4 Offset: 0xD043C4 VA: 0xD083C4 Slot: 3
	public override string ToString() { }

	// RVA: 0xD083CC Offset: 0xD043CC VA: 0xD083CC Slot: 0
	public override bool Equals(object o) { }

	// RVA: 0xD02F18 Offset: 0xCFEF18 VA: 0xD02F18
	public BigInteger ModInverse(BigInteger modulus) { }

	// RVA: 0xD0344C Offset: 0xCFF44C VA: 0xD0344C
	public BigInteger ModPow(BigInteger exp, BigInteger n) { }

	// RVA: 0xD029C0 Offset: 0xCFE9C0 VA: 0xD029C0
	public static BigInteger GeneratePseudoPrime(int bits) { }

	// RVA: 0xD08BEC Offset: 0xD04BEC VA: 0xD08BEC
	public void Incr2() { }

	// RVA: 0xD08C74 Offset: 0xD04C74 VA: 0xD08C74
	private static void .cctor() { }
}


// Namespace: Mono.Math.Prime
public enum ConfidenceFactor // TypeDefIndex: 6975
{
	// Fields
	public int value__; // 0x0
	public const ConfidenceFactor ExtraLow = 0;
	public const ConfidenceFactor Low = 1;
	public const ConfidenceFactor Medium = 2;
	public const ConfidenceFactor High = 3;
	public const ConfidenceFactor ExtraHigh = 4;
	public const ConfidenceFactor Provable = 5;
}


// Namespace: Mono.Math.Prime
public sealed class PrimalityTest : MulticastDelegate // TypeDefIndex: 6976
{
	// Methods

	// RVA: 0xD09944 Offset: 0xD05944 VA: 0xD09944
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xD09A48 Offset: 0xD05A48 VA: 0xD09A48 Slot: 12
	public virtual bool Invoke(BigInteger bi, ConfidenceFactor confidence) { }
}


// Namespace: Mono.Math.Prime
public sealed class PrimalityTests // TypeDefIndex: 6977
{
	// Methods

	// RVA: 0xD09A5C Offset: 0xD05A5C VA: 0xD09A5C
	private static int GetSPPRounds(BigInteger bi, ConfidenceFactor confidence) { }

	// RVA: 0xD09BE8 Offset: 0xD05BE8 VA: 0xD09BE8
	public static bool RabinMillerTest(BigInteger n, ConfidenceFactor confidence) { }
}


// Namespace: Mono.Math.Prime.Generator
public abstract class PrimeGeneratorBase // TypeDefIndex: 6978
{
	// Properties
	public virtual ConfidenceFactor Confidence { get; }
	public virtual PrimalityTest PrimalityTest { get; }
	public virtual int TrialDivisionBounds { get; }

	// Methods

	// RVA: 0xD09E80 Offset: 0xD05E80 VA: 0xD09E80 Slot: 4
	public virtual ConfidenceFactor get_Confidence() { }

	// RVA: 0xD09E88 Offset: 0xD05E88 VA: 0xD09E88 Slot: 5
	public virtual PrimalityTest get_PrimalityTest() { }

	// RVA: 0xD09EF4 Offset: 0xD05EF4 VA: 0xD09EF4 Slot: 6
	public virtual int get_TrialDivisionBounds() { }

	// RVA: -1 Offset: -1 Slot: 7
	public abstract BigInteger GenerateNewPrime(int bits);

	// RVA: 0xD09EFC Offset: 0xD05EFC VA: 0xD09EFC
	protected void .ctor() { }
}


// Namespace: Mono.Math.Prime.Generator
public class SequentialSearchPrimeGeneratorBase : PrimeGeneratorBase // TypeDefIndex: 6979
{
	// Methods

	// RVA: 0xD09F04 Offset: 0xD05F04 VA: 0xD09F04 Slot: 8
	protected virtual BigInteger GenerateSearchBase(int bits, object context) { }

	// RVA: 0xD09F78 Offset: 0xD05F78 VA: 0xD09F78 Slot: 7
	public override BigInteger GenerateNewPrime(int bits) { }

	// RVA: 0xD09F88 Offset: 0xD05F88 VA: 0xD09F88 Slot: 9
	public virtual BigInteger GenerateNewPrime(int bits, object context) { }

	// RVA: 0xD0A26C Offset: 0xD0626C VA: 0xD0A26C Slot: 10
	protected virtual bool IsPrimeAcceptable(BigInteger bi, object context) { }

	// RVA: 0xD08BE4 Offset: 0xD04BE4 VA: 0xD08BE4
	public void .ctor() { }
}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=3 // TypeDefIndex: 6980
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=9 // TypeDefIndex: 6981
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=10 // TypeDefIndex: 6982
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=18 // TypeDefIndex: 6983
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=20 // TypeDefIndex: 6984
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=32 // TypeDefIndex: 6985
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=48 // TypeDefIndex: 6986
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=64 // TypeDefIndex: 6987
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=256 // TypeDefIndex: 6988
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=3132 // TypeDefIndex: 6989
{}


// Namespace: 
[CompilerGenerated]
internal sealed class <PrivateImplementationDetails> // TypeDefIndex: 6990
{
	// Fields
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=64 001D686DB504E20C792EAA07FE09224A45FF328E24A80072D04D16ABC5C2B5D2 /*Metadata offset 0x38EF08*/; // 0x0
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=3132 25E3E48132FBDBE9B7C0C6C54D7C10A5DE12A105AA3E5DE2A0DC808BF245B7A5 /*Metadata offset 0x38EF50*/; // 0x40
	internal static readonly long 290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88 = 2676302836908902219; // 0xC80
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=3 32D0830B8EE1D49A66F395C8EA80E02BFC07C2A12A8EA8C8B484AF02108A1950 /*Metadata offset 0x38FBA0*/; // 0xC88
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=3 35BF50EEF3270FD8CA09E66FC5B0481C5A151B14F6A634854E32F63633D49DCB /*Metadata offset 0x38FBA8*/; // 0xC8B
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=3 3C0C410618682C4DF0474E034114CC8E562F05A512B521AC367571017BDFA75D /*Metadata offset 0x38FBB0*/; // 0xC8E
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=3 44F5B1A2C48314502ACCBF186D1A2F9F7F176825898F32F1A2047B956194F174 /*Metadata offset 0x38FBB8*/; // 0xC91
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=48 4800FBFC4566EB02D1727A4B1C949CCBC7535C216A0766564C199308631B5DD6 /*Metadata offset 0x38FBC0*/; // 0xC94
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=20 533B8C444F951E83EFF7305E3807B66CE0005DE0A2D0A44873C130895A3BE6AA /*Metadata offset 0x38FBF8*/; // 0xCC4
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=256 55D0BF716B334D123E0088CFB3F8E2FEA17AF5025BB527F95EEB09BA978EA329 /*Metadata offset 0x38FC10*/; // 0xCD8
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=3 59BE5A634187B8A57216EFF5371A47732C05744B1C1A0A6382A6D5622C9FFDCE /*Metadata offset 0x38FD18*/; // 0xDD8
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=32 5DF6E0E2761359D30A8275058E299FCC0381534545F55CF43E41983F5D4C9456 /*Metadata offset 0x38FD20*/; // 0xDDB
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=3 5F8C6B3C66B972606D85E7651F67ADBD02E8316876884674E8328FA710747E5B /*Metadata offset 0x38FD48*/; // 0xDFB
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=10 60C6ED13AF98DBFEEDA8F8197FFFCC349BB04395CC81DF0D477CBC57BF5B398B /*Metadata offset 0x38FD50*/; // 0xDFE
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=10 64B3E7D737AFF47D4C3BBD81D2D06D697DDD8EB60F29E13E4425D19D8BBCA1F7 /*Metadata offset 0x38FD60*/; // 0xE08
	internal static readonly long 6772A9B8BF207A3CFE6EE68769D6985B69522183F24A2A3D41BC3B4602953426 = 22609615381091406; // 0xE18
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=9 684312AFB7719E57993D2826FFBAF7EA965614F20F91D999FB19B01E21AA62E6 /*Metadata offset 0x38FD80*/; // 0xE20
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=64 6AA56C4BCD208911792AD24C7681FEFB93BED51903AFC54860C9BD37E41E5A31 /*Metadata offset 0x38FD90*/; // 0xE29
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=3 796E63069E193A008CB4E85573AA1FE53C5F4E58B42A7F61FD0EEE1D89B5120B /*Metadata offset 0x38FDD8*/; // 0xE69
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=64 7C8975E1E60A5C8337F28EDF8C33C3B180360B7279644A9BC1AF3C51E6220BF5 /*Metadata offset 0x38FDE0*/; // 0xE6C
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=3 850D7367E4FB0766E2CBC3ACF5AB42B4E98348E58E5A789845D4FCCDB63D2AEE /*Metadata offset 0x38FE28*/; // 0xEAC
	internal static readonly long 992F16C986809AB68C7466CC3EC6F12B2506A962EA539753E5D84A2FB7FF8A24 = -1295888024253181014; // 0xEB0
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=3 9A65C09A11757751BFED67A414E00B188DC4C7757FCB6CBD33A916DDE4A3D925 /*Metadata offset 0x38FE40*/; // 0xEB8
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=18 9ACEFCC0C950280B64AB9E045E38C34ABF71EC70A0DC61B9C621C6BFB4F78047 /*Metadata offset 0x38FE48*/; // 0xEBB
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=3 B1E34F4A11EE411B83415EF0B252A0B2BBCFCAC2E592865E09C12E4252C93A75 /*Metadata offset 0x38FE60*/; // 0xECD
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=3 C92FAD7F348A682E7D5B7E74C76B5D019174EE7BC87545B25A1FDD49FBCC2D0B /*Metadata offset 0x38FE68*/; // 0xED0
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=3 E17B8359E685992B0DE6242AAA24FCB7404173CBB7FF8646FF7D658139F41B5F /*Metadata offset 0x38FE70*/; // 0xED3
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=64 F83B332BE4E6A5A4B1C56AAF6DB52657DA495E149870057D8590AB9D7A6167AD /*Metadata offset 0x38FE78*/; // 0xED6
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=3 FB6D7301FFDCB5FBA5807A19B4F0606947897C1105240B6BBA815352DBBE2064 /*Metadata offset 0x38FEC0*/; // 0xF16

	// Methods

	// RVA: 0xD00E54 Offset: 0xCFCE54 VA: 0xD00E54
	internal static uint ComputeStringHash(string s) { }
}
