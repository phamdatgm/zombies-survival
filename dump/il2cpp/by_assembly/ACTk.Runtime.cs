// Namespace: 
internal class <Module> // TypeDefIndex: 7554
{}


// Namespace: CodeStage.AntiCheat.Utils
internal static class Base64Utils // TypeDefIndex: 7555
{
	// Methods

	// RVA: 0xA692DC Offset: 0xA652DC VA: 0xA692DC
	public static char[] FromBase64ToChars(string value) { }

	// RVA: 0xA69368 Offset: 0xA65368 VA: 0xA69368
	public static string ToBase64(string value) { }

	// RVA: 0xA69400 Offset: 0xA65400 VA: 0xA69400
	public static string ToBase64(char[] value) { }
}


// Namespace: CodeStage.AntiCheat.Utils
internal class RandomUtils // TypeDefIndex: 7556
{
	// Methods

	// RVA: 0xA69498 Offset: 0xA65498 VA: 0xA69498
	internal static int GenerateIntKey() { }

	// RVA: 0xA696E4 Offset: 0xA656E4 VA: 0xA696E4
	internal static char[] GenerateCharArrayKey(char[] arrayToFill) { }
}


// Namespace: CodeStage.AntiCheat.Utils
internal static class StringUtils // TypeDefIndex: 7557
{
	// Methods

	// RVA: 0xA69468 Offset: 0xA65468 VA: 0xA69468
	public static byte[] CharsToBytes(char[] input) { }

	// RVA: 0xA693D0 Offset: 0xA653D0 VA: 0xA693D0
	public static byte[] StringToBytes(string input) { }

	// RVA: 0xA69338 Offset: 0xA65338 VA: 0xA69338
	public static char[] BytesToChars(byte[] input) { }

	// RVA: 0xA69990 Offset: 0xA65990 VA: 0xA69990
	public static string BytesToString(byte[] input, int index, int count) { }
}


// Namespace: CodeStage.AntiCheat.Utils
internal class ThreadSafeRandom // TypeDefIndex: 7558
{
	// Fields
	private static readonly Random Global; // 0x0
	[ThreadStatic]
	private static Random local; // 0x80000000

	// Methods

	// RVA: 0xA694F0 Offset: 0xA654F0 VA: 0xA694F0
	public static int Next(int minInclusive, int maxExclusive) { }

	// RVA: 0xA697B8 Offset: 0xA657B8 VA: 0xA697B8
	public static void NextChars(char[] buffer) { }

	// RVA: 0xA699D8 Offset: 0xA659D8 VA: 0xA699D8
	private static void NextChars(Random random, char[] buffer) { }

	// RVA: 0xA69A60 Offset: 0xA65A60 VA: 0xA69A60
	private static void .cctor() { }
}


// Namespace: CodeStage.AntiCheat.Utils
internal class xxHash // TypeDefIndex: 7559
{
	// Methods

	// RVA: 0xA69AD0 Offset: 0xA65AD0 VA: 0xA69AD0
	public static uint CalculateHash(byte[] buf, int len, uint seed) { }
}


// Namespace: 
internal enum ObscuredPrefs.DataType // TypeDefIndex: 7560
{
	// Fields
	public byte value__; // 0x0
	public const ObscuredPrefs.DataType Unknown = 0;
	public const ObscuredPrefs.DataType Int = 5;
	public const ObscuredPrefs.DataType UInt = 10;
	public const ObscuredPrefs.DataType String = 15;
	public const ObscuredPrefs.DataType Float = 20;
	public const ObscuredPrefs.DataType Double = 25;
	public const ObscuredPrefs.DataType Decimal = 27;
	public const ObscuredPrefs.DataType Long = 30;
	public const ObscuredPrefs.DataType ULong = 32;
	public const ObscuredPrefs.DataType Bool = 35;
	public const ObscuredPrefs.DataType ByteArray = 40;
	public const ObscuredPrefs.DataType Vector2 = 45;
	public const ObscuredPrefs.DataType Vector3 = 50;
	public const ObscuredPrefs.DataType Quaternion = 55;
	public const ObscuredPrefs.DataType Color = 60;
	public const ObscuredPrefs.DataType Rect = 65;
}


// Namespace: 
public enum ObscuredPrefs.DeviceLockLevel // TypeDefIndex: 7561
{
	// Fields
	public byte value__; // 0x0
	public const ObscuredPrefs.DeviceLockLevel None = 0;
	public const ObscuredPrefs.DeviceLockLevel Soft = 1;
	public const ObscuredPrefs.DeviceLockLevel Strict = 2;
}


// Namespace: CodeStage.AntiCheat.Storage
public static class ObscuredPrefs // TypeDefIndex: 7562
{
	// Fields
	private static bool alterationReported; // 0x0
	private static bool foreignSavesReported; // 0x1
	private static string deviceId; // 0x8
	private static string cryptoKeyObsolete; // 0x10
	private static string cryptoKeyObsoleteForMigration; // 0x18
	internal static uint deviceIdHash; // 0x20
	[CompilerGenerated]
	private static Action OnAlterationDetected; // 0x28
	[CompilerGenerated]
	private static Action OnPossibleForeignSavesDetected; // 0x30
	public static bool preservePlayerPrefs; // 0x38
	public static ObscuredPrefs.DeviceLockLevel lockToDevice; // 0x39
	public static bool readForeignSaves; // 0x3A
	public static bool emergencyMode; // 0x3B
	private static readonly Type IntType; // 0x40
	private static readonly Type UIntType; // 0x48
	private static readonly Type StringType; // 0x50
	private static readonly Type FloatType; // 0x58
	private static readonly Type DoubleType; // 0x60
	private static readonly Type DecimalType; // 0x68
	private static readonly Type LongType; // 0x70
	private static readonly Type ULongType; // 0x78
	private static readonly Type BoolType; // 0x80
	private static char[] generatedCryptoKey; // 0x88
	private static bool migratingFromACTkV1; // 0x90

	// Properties
	public static string DeviceId { get; set; }
	internal static uint DeviceIdHash { get; }

	// Methods

	// RVA: 0xA69E70 Offset: 0xA65E70 VA: 0xA69E70
	public static string get_DeviceId() { }

	// RVA: 0xA69F78 Offset: 0xA65F78 VA: 0xA69F78
	public static void set_DeviceId(string value) { }

	// RVA: 0xA69FD4 Offset: 0xA65FD4 VA: 0xA69FD4
	internal static uint get_DeviceIdHash() { }

	// RVA: 0xA6A130 Offset: 0xA66130 VA: 0xA6A130
	public static bool HasKey(string key) { }

	// RVA: 0xA6A22C Offset: 0xA6622C VA: 0xA6A22C
	public static void DeleteKey(string key) { }

	// RVA: 0xA6A2B0 Offset: 0xA662B0 VA: 0xA6A2B0
	public static void DeleteAll() { }

	// RVA: 0xA6A314 Offset: 0xA66314 VA: 0xA6A314
	public static void SetInt(string key, int value) { }

	// RVA: 0xA6A3B4 Offset: 0xA663B4 VA: 0xA6A3B4
	public static int GetInt(string key, int defaultValue = 0) { }

	// RVA: 0xA6AE1C Offset: 0xA66E1C VA: 0xA6AE1C
	public static void SetUInt(string key, uint value) { }

	// RVA: 0xA6AEBC Offset: 0xA66EBC VA: 0xA6AEBC
	public static void SetString(string key, string value) { }

	// RVA: 0xA6AFBC Offset: 0xA66FBC VA: 0xA6AFBC
	public static string GetString(string key, string defaultValue = "") { }

	// RVA: 0xA6B110 Offset: 0xA67110 VA: 0xA6B110
	public static void SetFloat(string key, float value) { }

	// RVA: 0xA6B1B0 Offset: 0xA671B0 VA: 0xA6B1B0
	public static void SetDouble(string key, double value) { }

	// RVA: 0xA6B250 Offset: 0xA67250 VA: 0xA6B250
	public static void SetDecimal(string key, Decimal value) { }

	// RVA: 0xA6B324 Offset: 0xA67324 VA: 0xA6B324
	public static void SetLong(string key, long value) { }

	// RVA: 0xA6B3C4 Offset: 0xA673C4 VA: 0xA6B3C4
	public static void SetULong(string key, ulong value) { }

	// RVA: 0xA6B464 Offset: 0xA67464 VA: 0xA6B464
	public static void SetBool(string key, bool value) { }

	// RVA: 0xA6B508 Offset: 0xA67508 VA: 0xA6B508
	public static void SetByteArray(string key, byte[] value) { }

	// RVA: 0xA6B588 Offset: 0xA67588 VA: 0xA6B588
	private static string EncryptByteArrayValue(string key, byte[] value) { }

	// RVA: 0xA6B890 Offset: 0xA67890 VA: 0xA6B890
	private static byte[] DecryptByteArrayValue(string key, string encryptedInput, byte defaultValue, int defaultLength) { }

	// RVA: 0xA6BD80 Offset: 0xA67D80 VA: 0xA6BD80
	private static byte[] ConstructByteArray(byte value, int length) { }

	// RVA: 0xA6BE14 Offset: 0xA67E14 VA: 0xA6BE14
	public static void SetVector2(string key, Vector2 value) { }

	// RVA: 0xA6BE9C Offset: 0xA67E9C VA: 0xA6BE9C
	private static string EncryptVector2Value(string key, Vector2 value) { }

	// RVA: 0xA6BF7C Offset: 0xA67F7C VA: 0xA6BF7C
	private static Vector2 DecryptVector2Value(string key, string encryptedInput, Vector2 defaultValue) { }

	// RVA: 0xA6C028 Offset: 0xA68028 VA: 0xA6C028
	public static void SetVector3(string key, Vector3 value) { }

	// RVA: 0xA6C0C0 Offset: 0xA680C0 VA: 0xA6C0C0
	private static string EncryptVector3Value(string key, Vector3 value) { }

	// RVA: 0xA6C1D0 Offset: 0xA681D0 VA: 0xA6C1D0
	private static Vector3 DecryptVector3Value(string key, string encryptedInput, Vector3 defaultValue) { }

	// RVA: 0xA6C2A0 Offset: 0xA682A0 VA: 0xA6C2A0
	public static void SetQuaternion(string key, Quaternion value) { }

	// RVA: 0xA6C340 Offset: 0xA68340 VA: 0xA6C340
	private static string EncryptQuaternionValue(string key, Quaternion value) { }

	// RVA: 0xA6C478 Offset: 0xA68478 VA: 0xA6C478
	private static Quaternion DecryptQuaternionValue(string key, string encryptedInput, Quaternion defaultValue) { }

	// RVA: 0xA6C564 Offset: 0xA68564 VA: 0xA6C564
	public static void SetColor(string key, Color32 value) { }

	// RVA: 0xA6C5F0 Offset: 0xA685F0 VA: 0xA6C5F0
	private static string EncryptColorValue(string key, uint value) { }

	// RVA: 0xA6C66C Offset: 0xA6866C VA: 0xA6C66C
	public static void SetRect(string key, Rect value) { }

	// RVA: 0xA6C70C Offset: 0xA6870C VA: 0xA6C70C
	private static string EncryptRectValue(string key, Rect value) { }

	// RVA: 0xA6C844 Offset: 0xA68844 VA: 0xA6C844
	private static Rect DecryptRectValue(string key, string encryptedInput, Rect defaultValue) { }

	// RVA: 0xA6C930 Offset: 0xA68930 VA: 0xA6C930
	private static void SavesTampered() { }

	// RVA: 0xA6C9E8 Offset: 0xA689E8 VA: 0xA6C9E8
	private static void PossibleForeignSavesDetected() { }

	// RVA: 0xA69F14 Offset: 0xA65F14 VA: 0xA69F14
	private static string GetDeviceId() { }

	// RVA: 0xA6CAA0 Offset: 0xA68AA0 VA: 0xA6CAA0
	internal static char[] GetCryptoKey(string dynamicSuffix) { }

	// RVA: 0xA6A1AC Offset: 0xA661AC VA: 0xA6A1AC
	internal static string EncryptKey(string key) { }

	// RVA: 0xA6B5F0 Offset: 0xA675F0 VA: 0xA6B5F0
	internal static string EncryptData(string key, byte[] cleanBytes, ObscuredPrefs.DataType type) { }

	// RVA: 0xA6B938 Offset: 0xA67938 VA: 0xA6B938
	internal static byte[] DecryptData(string key, string encryptedInput) { }

	// RVA: 0xA6CE80 Offset: 0xA68E80 VA: 0xA6CE80
	internal static ObscuredPrefs.DataType GetRawValueType(string value) { }

	// RVA: -1 Offset: -1
	internal static string EncryptValue<T>(string key, T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA2608 Offset: 0xB9E608 VA: 0xBA2608
	|-ObscuredPrefs.EncryptValue<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	internal static T DecryptValue<T>(string key, string encryptedKey, T defaultValue, string encryptedInput) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA1FC4 Offset: 0xB9DFC4 VA: 0xBA1FC4
	|-ObscuredPrefs.DecryptValue<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0xA6CCC0 Offset: 0xA68CC0 VA: 0xA6CCC0
	private static byte[] EncryptDecryptBytes(byte[] bytes, int dataLength, char[] key) { }

	// RVA: 0xA6CF9C Offset: 0xA68F9C VA: 0xA6CF9C
	private static byte[] DecimalToBytes(Decimal dec) { }

	// RVA: 0xA6D0DC Offset: 0xA690DC VA: 0xA6D0DC
	private static Decimal BytesToDecimal(byte[] bytes) { }

	// RVA: 0xA6D21C Offset: 0xA6921C VA: 0xA6D21C
	private static string GetEncryptedPrefsString(string key, string encryptedKey) { }

	// RVA: 0xA6A074 Offset: 0xA66074 VA: 0xA6A074
	private static uint CalculateChecksum(string input) { }

	// RVA: 0xA6D368 Offset: 0xA69368 VA: 0xA6D368
	private static Color32 DecodeColor(uint encodedColor) { }

	// RVA: 0xA6A50C Offset: 0xA6650C VA: 0xA6A50C
	private static bool MigrateFromACTkV1Internal(string key, string cryptoKey) { }

	// RVA: 0xA6D504 Offset: 0xA69504 VA: 0xA6D504
	private static void SetMigrationMode(bool enabled) { }

	// RVA: 0xA6CD98 Offset: 0xA68D98 VA: 0xA6CD98
	private static byte[] EncryptDecryptBytesObsolete(byte[] bytes, int dataLength, string key) { }

	// RVA: 0xA6D568 Offset: 0xA69568 VA: 0xA6D568
	private static void .cctor() { }
}


// Namespace: 
internal struct ObscuredFloat.FloatIntBytesUnion // TypeDefIndex: 7563
{
	// Fields
	internal float f; // 0x0
	internal int i; // 0x0
	internal ACTkByte4 b4; // 0x0

	// Methods

	// RVA: 0xA6D8F0 Offset: 0xA698F0 VA: 0xA6D8F0
	internal static int XorFloatToInt(float value, int key) { }

	// RVA: 0xA6D930 Offset: 0xA69930 VA: 0xA6D930
	internal static float XorIntToFloat(int value, int key) { }

	// RVA: 0xA6DCAC Offset: 0xA69CAC VA: 0xA6DCAC
	private static ObscuredFloat.FloatIntBytesUnion FromFloat(float value) { }

	// RVA: 0xA6DCD8 Offset: 0xA69CD8 VA: 0xA6DCD8
	private static ObscuredFloat.FloatIntBytesUnion FromInt(int value) { }

	// RVA: 0xA6DCB4 Offset: 0xA69CB4 VA: 0xA6DCB4
	private ObscuredFloat.FloatIntBytesUnion Shuffle(int key) { }

	// RVA: 0xA6DCE0 Offset: 0xA69CE0 VA: 0xA6DCE0
	private ObscuredFloat.FloatIntBytesUnion UnShuffle(int key) { }
}


// Namespace: CodeStage.AntiCheat.ObscuredTypes
[Serializable]
public struct ObscuredFloat : IFormattable, IEquatable<ObscuredFloat>, IComparable<ObscuredFloat>, IComparable<float>, IComparable // TypeDefIndex: 7564
{
	// Fields
	[SerializeField]
	private int currentCryptoKey; // 0x0
	[SerializeField]
	private int hiddenValue; // 0x4
	[SerializeField]
	[FormerlySerializedAs("hiddenValue")]
	private ACTkByte4 hiddenValueOldByte4; // 0x8
	[SerializeField]
	private bool inited; // 0xC
	[SerializeField]
	private float fakeValue; // 0x10
	[SerializeField]
	private bool fakeValueActive; // 0x14

	// Methods

	// RVA: 0xA6D7A0 Offset: 0xA697A0 VA: 0xA6D7A0
	private void .ctor(float value) { }

	// RVA: 0xA6D808 Offset: 0xA69808 VA: 0xA6D808
	public static int Encrypt(float value, int key) { }

	// RVA: 0xA6D910 Offset: 0xA69910 VA: 0xA6D910
	public static float Decrypt(int value, int key) { }

	// RVA: 0xA6D804 Offset: 0xA69804 VA: 0xA6D804
	public static int GenerateKey() { }

	// RVA: 0xA6D950 Offset: 0xA69950 VA: 0xA6D950
	private float InternalDecrypt() { }

	// RVA: 0xA6DAB8 Offset: 0xA69AB8 VA: 0xA6DAB8
	public static ObscuredFloat op_Implicit(float value) { }

	// RVA: 0xA6DAC8 Offset: 0xA69AC8 VA: 0xA6DAC8
	public static float op_Implicit(ObscuredFloat value) { }

	// RVA: 0xA6DACC Offset: 0xA69ACC VA: 0xA6DACC Slot: 2
	public override int GetHashCode() { }

	// RVA: 0xA6DAEC Offset: 0xA69AEC VA: 0xA6DAEC Slot: 3
	public override string ToString() { }

	// RVA: 0xA6DB0C Offset: 0xA69B0C VA: 0xA6DB0C Slot: 4
	public string ToString(string format, IFormatProvider provider) { }

	// RVA: 0xA6DB44 Offset: 0xA69B44 VA: 0xA6DB44 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0xA6DBD4 Offset: 0xA69BD4 VA: 0xA6DBD4 Slot: 5
	public bool Equals(ObscuredFloat obj) { }

	// RVA: 0xA6DC10 Offset: 0xA69C10 VA: 0xA6DC10 Slot: 6
	public int CompareTo(ObscuredFloat other) { }

	// RVA: 0xA6DC44 Offset: 0xA69C44 VA: 0xA6DC44 Slot: 7
	public int CompareTo(float other) { }

	// RVA: 0xA6DC7C Offset: 0xA69C7C VA: 0xA6DC7C Slot: 8
	public int CompareTo(object obj) { }
}


// Namespace: CodeStage.AntiCheat.ObscuredTypes
[Serializable]
public struct ObscuredInt : IFormattable, IEquatable<ObscuredInt>, IComparable<ObscuredInt>, IComparable<int>, IComparable // TypeDefIndex: 7565
{
	// Fields
	[SerializeField]
	private int currentCryptoKey; // 0x0
	[SerializeField]
	private int hiddenValue; // 0x4
	[SerializeField]
	private bool inited; // 0x8
	[SerializeField]
	private int fakeValue; // 0xC
	[SerializeField]
	private bool fakeValueActive; // 0x10

	// Methods

	// RVA: 0xA6DD2C Offset: 0xA69D2C VA: 0xA6DD2C
	private void .ctor(int value) { }

	// RVA: 0xA6DD74 Offset: 0xA69D74 VA: 0xA6DD74
	public static int Encrypt(int value, int key) { }

	// RVA: 0xA6DD7C Offset: 0xA69D7C VA: 0xA6DD7C
	public static int Decrypt(int value, int key) { }

	// RVA: 0xA6DD70 Offset: 0xA69D70 VA: 0xA6DD70
	public static int GenerateKey() { }

	// RVA: 0xA6DD84 Offset: 0xA69D84 VA: 0xA6DD84
	private int InternalDecrypt() { }

	// RVA: 0xA6DE58 Offset: 0xA69E58 VA: 0xA6DE58
	public static ObscuredInt op_Implicit(int value) { }

	// RVA: 0xA6DEA4 Offset: 0xA69EA4 VA: 0xA6DEA4
	public static int op_Implicit(ObscuredInt value) { }

	// RVA: 0xA6DEA8 Offset: 0xA69EA8 VA: 0xA6DEA8
	public static ObscuredInt op_Increment(ObscuredInt input) { }

	// RVA: 0xA6DEF0 Offset: 0xA69EF0 VA: 0xA6DEF0
	private static ObscuredInt Increment(ObscuredInt input, int increment) { }

	// RVA: 0xA6DF50 Offset: 0xA69F50 VA: 0xA6DF50 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0xA6DF70 Offset: 0xA69F70 VA: 0xA6DF70 Slot: 3
	public override string ToString() { }

	// RVA: 0xA6DF90 Offset: 0xA69F90 VA: 0xA6DF90 Slot: 4
	public string ToString(string format, IFormatProvider provider) { }

	// RVA: 0xA6DFC8 Offset: 0xA69FC8 VA: 0xA6DFC8 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0xA6E058 Offset: 0xA6A058 VA: 0xA6E058 Slot: 5
	public bool Equals(ObscuredInt obj) { }

	// RVA: 0xA6E0A0 Offset: 0xA6A0A0 VA: 0xA6E0A0 Slot: 6
	public int CompareTo(ObscuredInt other) { }

	// RVA: 0xA6E0D8 Offset: 0xA6A0D8 VA: 0xA6E0D8 Slot: 7
	public int CompareTo(int other) { }

	// RVA: 0xA6E108 Offset: 0xA6A108 VA: 0xA6E108 Slot: 8
	public int CompareTo(object obj) { }
}


// Namespace: CodeStage.AntiCheat.ObscuredTypes
[DefaultMember("Item")]
[Serializable]
public sealed class ObscuredString : IComparable<ObscuredString>, IComparable<string>, IComparable // TypeDefIndex: 7566
{
	// Fields
	[SerializeField]
	private string currentCryptoKey; // 0x10
	[SerializeField]
	private byte[] hiddenValue; // 0x18
	[SerializeField]
	private char[] cryptoKey; // 0x20
	[SerializeField]
	private char[] hiddenChars; // 0x28
	[SerializeField]
	private bool inited; // 0x30
	[SerializeField]
	private string fakeValue; // 0x38
	[SerializeField]
	private bool fakeValueActive; // 0x40

	// Methods

	// RVA: 0xA6E138 Offset: 0xA6A138 VA: 0xA6E138
	private void .ctor() { }

	// RVA: 0xA6E140 Offset: 0xA6A140 VA: 0xA6E140
	private void .ctor(string value) { }

	// RVA: 0xA6CCBC Offset: 0xA68CBC VA: 0xA6CCBC
	public static char[] Encrypt(char[] value, char[] key) { }

	// RVA: 0xA6CCB4 Offset: 0xA68CB4 VA: 0xA6CCB4
	public static char[] GenerateKey() { }

	// RVA: 0xA6E1E8 Offset: 0xA6A1E8 VA: 0xA6E1E8
	public static char[] GenerateKey(char[] arrayToFill) { }

	// RVA: 0xA6E1EC Offset: 0xA6A1EC VA: 0xA6E1EC
	internal static char[] InternalEncryptDecrypt(char[] value, char[] key) { }

	// RVA: 0xA6D37C Offset: 0xA6937C VA: 0xA6D37C
	internal static string EncryptDecryptObsolete(string value, string key) { }

	// RVA: 0xA6E31C Offset: 0xA6A31C VA: 0xA6E31C
	private string InternalDecryptToString() { }

	// RVA: 0xA6E338 Offset: 0xA6A338 VA: 0xA6E338
	private char[] InternalDecrypt() { }

	// RVA: 0xA6E4EC Offset: 0xA6A4EC VA: 0xA6E4EC
	private bool CompareCharsToString(char[] chars, string s) { }

	// RVA: 0xA6E490 Offset: 0xA6A490 VA: 0xA6E490
	internal void MigrateFromACTkV1() { }

	// RVA: 0xA6E614 Offset: 0xA6A614 VA: 0xA6E614
	public static ObscuredString op_Implicit(string value) { }

	// RVA: 0xA6E678 Offset: 0xA6A678 VA: 0xA6E678
	public static string op_Implicit(ObscuredString value) { }

	// RVA: 0xA6E69C Offset: 0xA6A69C VA: 0xA6E69C
	public static bool op_Equality(ObscuredString a, ObscuredString b) { }

	// RVA: 0xA6E7A4 Offset: 0xA6A7A4 VA: 0xA6E7A4
	public static bool op_Inequality(ObscuredString a, ObscuredString b) { }

	// RVA: 0xA6E7BC Offset: 0xA6A7BC VA: 0xA6E7BC Slot: 2
	public override int GetHashCode() { }

	// RVA: 0xA6E7EC Offset: 0xA6A7EC VA: 0xA6E7EC Slot: 3
	public override string ToString() { }

	// RVA: 0xA6E808 Offset: 0xA6A808 VA: 0xA6E808 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0xA6E878 Offset: 0xA6A878 VA: 0xA6E878
	public bool Equals(ObscuredString value) { }

	// RVA: 0xA6E8D8 Offset: 0xA6A8D8 VA: 0xA6E8D8 Slot: 4
	public int CompareTo(ObscuredString other) { }

	// RVA: 0xA6E938 Offset: 0xA6A938 VA: 0xA6E938 Slot: 5
	public int CompareTo(string other) { }

	// RVA: 0xA6E96C Offset: 0xA6A96C VA: 0xA6E96C Slot: 6
	public int CompareTo(object obj) { }

	// RVA: 0xA6E588 Offset: 0xA6A588 VA: 0xA6E588
	internal static string GetStringObsolete(byte[] bytes) { }

	// RVA: 0xA6E710 Offset: 0xA6A710 VA: 0xA6E710
	private static bool ArraysEquals(char[] a1, char[] a2) { }
}


// Namespace: CodeStage.AntiCheat.Detectors
public abstract class ACTkDetectorBase<T> : KeepAliveBehaviour<T> // TypeDefIndex: 7567
{
	// Fields
	protected const string MenuPath = "Code Stage/Anti-Cheat Toolkit/";
	[Tooltip("Automatically start detector. Detection Event will be called on detection.")]
	public bool autoStart; // 0x0
	[Tooltip("Automatically dispose Detector after firing callback.")]
	public bool autoDispose; // 0x0
	[CompilerGenerated]
	private Action CheatDetected; // 0x0
	[CompilerGenerated]
	private bool <IsCheatDetected>k__BackingField; // 0x0
	[SerializeField]
	protected UnityEvent detectionEvent; // 0x0
	[SerializeField]
	protected bool detectionEventHasListener; // 0x0
	protected bool started; // 0x0
	protected bool isRunning; // 0x0

	// Properties
	public bool IsCheatDetected { get; set; }
	public bool IsRunning { get; }

	// Methods

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public void add_CheatDetected(Action value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC5EF8 Offset: 0xBC1EF8 VA: 0xBC5EF8
	|-ACTkDetectorBase<object>.add_CheatDetected
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public void remove_CheatDetected(Action value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC5F94 Offset: 0xBC1F94 VA: 0xBC5F94
	|-ACTkDetectorBase<object>.remove_CheatDetected
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public bool get_IsCheatDetected() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC6030 Offset: 0xBC2030 VA: 0xBC6030
	|-ACTkDetectorBase<object>.get_IsCheatDetected
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	protected void set_IsCheatDetected(bool value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC6038 Offset: 0xBC2038 VA: 0xBC6038
	|-ACTkDetectorBase<object>.set_IsCheatDetected
	*/

	// RVA: -1 Offset: -1
	public bool get_IsRunning() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC6044 Offset: 0xBC2044 VA: 0xBC6044
	|-ACTkDetectorBase<object>.get_IsRunning
	*/

	// RVA: -1 Offset: -1 Slot: 5
	protected override void Start() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC604C Offset: 0xBC204C VA: 0xBC604C
	|-ACTkDetectorBase<object>.Start
	*/

	// RVA: -1 Offset: -1
	private void OnEnable() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC609C Offset: 0xBC209C VA: 0xBC609C
	|-ACTkDetectorBase<object>.OnEnable
	*/

	// RVA: -1 Offset: -1
	private void OnDisable() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC60AC Offset: 0xBC20AC VA: 0xBC60AC
	|-ACTkDetectorBase<object>.OnDisable
	*/

	// RVA: -1 Offset: -1
	private void OnApplicationQuit() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC60BC Offset: 0xBC20BC VA: 0xBC60BC
	|-ACTkDetectorBase<object>.OnApplicationQuit
	*/

	// RVA: -1 Offset: -1 Slot: 6
	protected override void OnDestroy() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC60D8 Offset: 0xBC20D8 VA: 0xBC60D8
	|-ACTkDetectorBase<object>.OnDestroy
	*/

	// RVA: -1 Offset: -1 Slot: 11
	internal virtual void OnCheatingDetected() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC6118 Offset: 0xBC2118 VA: 0xBC6118
	|-ACTkDetectorBase<object>.OnCheatingDetected
	*/

	// RVA: -1 Offset: -1 Slot: 12
	protected virtual bool DetectorHasCallbacks() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC6184 Offset: 0xBC2184 VA: 0xBC6184
	|-ACTkDetectorBase<object>.DetectorHasCallbacks
	*/

	// RVA: -1 Offset: -1 Slot: 13
	protected virtual void StopDetectionInternal() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC61A4 Offset: 0xBC21A4 VA: 0xBC61A4
	|-ACTkDetectorBase<object>.StopDetectionInternal
	*/

	// RVA: -1 Offset: -1 Slot: 14
	protected virtual void PauseDetector() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC61B0 Offset: 0xBC21B0 VA: 0xBC61B0
	|-ACTkDetectorBase<object>.PauseDetector
	*/

	// RVA: -1 Offset: -1 Slot: 15
	protected virtual bool ResumeDetector() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC61C0 Offset: 0xBC21C0 VA: 0xBC61C0
	|-ACTkDetectorBase<object>.ResumeDetector
	*/

	// RVA: -1 Offset: -1 Slot: 16
	protected abstract void StartDetectionAutomatically();

	// RVA: -1 Offset: -1
	protected void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC61F8 Offset: 0xBC21F8 VA: 0xBC61F8
	|-ACTkDetectorBase<object>..ctor
	*/
}


// Namespace: CodeStage.AntiCheat.Detectors
[DisallowMultipleComponent]
public class InjectionDetector : ACTkDetectorBase<InjectionDetector> // TypeDefIndex: 7568
{
	// Fields
	public const string ComponentName = "Injection Detector";
	internal const string FinalLogPrefix = "[ACTk] Injection Detector: ";

	// Methods

	// RVA: 0xA6E9A0 Offset: 0xA6A9A0 VA: 0xA6E9A0
	public static InjectionDetector AddToSceneOrGetExisting() { }

	// RVA: 0xA6EA10 Offset: 0xA6AA10 VA: 0xA6EA10
	public static void StartDetection() { }

	// RVA: 0xA6EA78 Offset: 0xA6AA78 VA: 0xA6EA78
	public static void StartDetection(Action<string> callback) { }

	// RVA: 0xA6EAE0 Offset: 0xA6AAE0 VA: 0xA6EAE0
	public static void StopDetection() { }

	// RVA: 0xA6EB48 Offset: 0xA6AB48 VA: 0xA6EB48
	public static void Dispose() { }

	// RVA: 0xA6EBB0 Offset: 0xA6ABB0 VA: 0xA6EBB0 Slot: 16
	protected override void StartDetectionAutomatically() { }

	// RVA: 0xA6EC18 Offset: 0xA6AC18 VA: 0xA6EC18 Slot: 10
	protected override string GetComponentName() { }

	// RVA: 0xA6EC58 Offset: 0xA6AC58 VA: 0xA6EC58
	public void .ctor() { }
}


// Namespace: CodeStage.AntiCheat.Detectors
[DisallowMultipleComponent]
public class ObscuredCheatingDetector : ACTkDetectorBase<ObscuredCheatingDetector> // TypeDefIndex: 7569
{
	// Fields
	public const string ComponentName = "Obscured Cheating Detector";
	internal const string FinalLogPrefix = "[ACTk] Obscured Cheating Detector: ";
	[Tooltip("Max allowed difference between encrypted and fake values in ObscuredDouble. Increase in case of false positives.")]
	public double doubleEpsilon; // 0x50
	[Tooltip("Max allowed difference between encrypted and fake values in ObscuredFloat. Increase in case of false positives.")]
	public float floatEpsilon; // 0x58
	[Tooltip("Max allowed difference between encrypted and fake values in ObscuredVector2. Increase in case of false positives.")]
	public float vector2Epsilon; // 0x5C
	[Tooltip("Max allowed difference between encrypted and fake values in ObscuredVector3. Increase in case of false positives.")]
	public float vector3Epsilon; // 0x60
	[Tooltip("Max allowed difference between encrypted and fake values in ObscuredQuaternion. Increase in case of false positives.")]
	public float quaternionEpsilon; // 0x64

	// Properties
	internal static bool ExistsAndIsRunning { get; }

	// Methods

	// RVA: 0xA6ECA0 Offset: 0xA6ACA0 VA: 0xA6ECA0
	public static ObscuredCheatingDetector AddToSceneOrGetExisting() { }

	// RVA: 0xA6ECE0 Offset: 0xA6ACE0 VA: 0xA6ECE0
	public static ObscuredCheatingDetector StartDetection() { }

	// RVA: 0xA6EF94 Offset: 0xA6AF94 VA: 0xA6EF94
	public static ObscuredCheatingDetector StartDetection(Action callback) { }

	// RVA: 0xA6EFE8 Offset: 0xA6AFE8 VA: 0xA6EFE8
	public static void StopDetection() { }

	// RVA: 0xA6F0E0 Offset: 0xA6B0E0 VA: 0xA6F0E0
	public static void Dispose() { }

	// RVA: 0xA6D828 Offset: 0xA69828 VA: 0xA6D828
	internal static bool get_ExistsAndIsRunning() { }

	// RVA: 0xA6F1D4 Offset: 0xA6B1D4 VA: 0xA6F1D4
	private void .ctor() { }

	// RVA: 0xA6EE14 Offset: 0xA6AE14 VA: 0xA6EE14
	private ObscuredCheatingDetector StartDetectionInternal(Action callback) { }

	// RVA: 0xA6F23C Offset: 0xA6B23C VA: 0xA6F23C Slot: 16
	protected override void StartDetectionAutomatically() { }

	// RVA: 0xA6F244 Offset: 0xA6B244 VA: 0xA6F244 Slot: 10
	protected override string GetComponentName() { }
}


// Namespace: CodeStage.AntiCheat.Common
[Serializable]
internal struct ACTkByte4 // TypeDefIndex: 7570
{
	// Fields
	public byte b1; // 0x0
	public byte b2; // 0x1
	public byte b3; // 0x2
	public byte b4; // 0x3

	// Methods

	// RVA: 0xA6DD04 Offset: 0xA69D04 VA: 0xA6DD04
	public void Shuffle() { }

	// RVA: 0xA6DD18 Offset: 0xA69D18 VA: 0xA6DD18
	public void UnShuffle() { }
}


// Namespace: CodeStage.AntiCheat.Common
internal class ContainerHolder // TypeDefIndex: 7571
{
	// Fields
	public static GameObject container; // 0x0
}


// Namespace: CodeStage.AntiCheat.Common
public abstract class KeepAliveBehaviour<T> : MonoBehaviour // TypeDefIndex: 7572
{
	// Fields
	[Tooltip("Detector will survive new level (scene) load if checked.")]
	public bool keepAlive; // 0x0
	protected int instancesInScene; // 0x0
	[CompilerGenerated]
	private static T <Instance>k__BackingField; // 0x0

	// Properties
	public static T Instance { get; set; }
	protected static T GetOrCreateInstance { get; }

	// Methods

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public static T get_Instance() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC27108 Offset: 0xC23108 VA: 0xC27108
	|-KeepAliveBehaviour<object>.get_Instance
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	protected static void set_Instance(T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC27140 Offset: 0xC23140 VA: 0xC27140
	|-KeepAliveBehaviour<object>.set_Instance
	*/

	// RVA: -1 Offset: -1
	protected static T get_GetOrCreateInstance() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC271BC Offset: 0xC231BC VA: 0xC271BC
	|-KeepAliveBehaviour<object>.get_GetOrCreateInstance
	*/

	// RVA: -1 Offset: -1 Slot: 4
	protected virtual void Awake() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC273EC Offset: 0xC233EC VA: 0xC273EC
	|-KeepAliveBehaviour<object>.Awake
	*/

	// RVA: -1 Offset: -1 Slot: 5
	protected virtual void Start() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC27528 Offset: 0xC23528 VA: 0xC27528
	|-KeepAliveBehaviour<object>.Start
	*/

	// RVA: -1 Offset: -1 Slot: 6
	protected virtual void OnDestroy() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC27680 Offset: 0xC23680 VA: 0xC27680
	|-KeepAliveBehaviour<object>.OnDestroy
	*/

	// RVA: -1 Offset: -1 Slot: 7
	protected virtual void OnSceneLoaded(Scene scene, LoadSceneMode mode) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC278CC Offset: 0xC238CC VA: 0xC278CC
	|-KeepAliveBehaviour<object>.OnSceneLoaded
	*/

	// RVA: -1 Offset: -1 Slot: 8
	protected virtual bool Init(T instance, string detectorName) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC279A0 Offset: 0xC239A0 VA: 0xC279A0
	|-KeepAliveBehaviour<object>.Init
	*/

	// RVA: -1 Offset: -1 Slot: 9
	protected virtual void DisposeInternal() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC27AF8 Offset: 0xC23AF8 VA: 0xC27AF8
	|-KeepAliveBehaviour<object>.DisposeInternal
	*/

	// RVA: -1 Offset: -1 Slot: 10
	protected abstract string GetComponentName();

	// RVA: -1 Offset: -1
	protected void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC27B50 Offset: 0xC23B50 VA: 0xC27B50
	|-KeepAliveBehaviour<object>..ctor
	*/
}
