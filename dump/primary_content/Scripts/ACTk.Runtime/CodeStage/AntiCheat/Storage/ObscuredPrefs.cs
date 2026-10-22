using System;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace CodeStage.AntiCheat.Storage;

public static class ObscuredPrefs
{
	internal enum DataType : byte
	{
		Unknown = 0,
		Int = 5,
		UInt = 10,
		String = 15,
		Float = 20,
		Double = 25,
		Decimal = 27,
		Long = 30,
		ULong = 32,
		Bool = 35,
		ByteArray = 40,
		Vector2 = 45,
		Vector3 = 50,
		Quaternion = 55,
		Color = 60,
		Rect = 65
	}

	public enum DeviceLockLevel : byte
	{
		None = 0,
		Soft = 1,
		Strict = 2
	}

	private static bool alterationReported;

	private static bool foreignSavesReported;

	private static string deviceId;

	private static string cryptoKeyObsolete;

	private static string cryptoKeyObsoleteForMigration;

	internal static uint deviceIdHash;

	[CompilerGenerated]
	private static Action OnAlterationDetected;

	[CompilerGenerated]
	private static Action OnPossibleForeignSavesDetected;

	public static bool preservePlayerPrefs;

	public static DeviceLockLevel lockToDevice;

	public static bool readForeignSaves;

	public static bool emergencyMode;

	private static readonly Type IntType;

	private static readonly Type UIntType;

	private static readonly Type StringType;

	private static readonly Type FloatType;

	private static readonly Type DoubleType;

	private static readonly Type DecimalType;

	private static readonly Type LongType;

	private static readonly Type ULongType;

	private static readonly Type BoolType;

	private static char[] generatedCryptoKey;

	private static bool migratingFromACTkV1;

	public static string DeviceId
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	internal static uint DeviceIdHash => 0u;

	public static bool HasKey(string key)
	{
		return false;
	}

	public static void DeleteKey(string key)
	{
	}

	public static void DeleteAll()
	{
	}

	public static void SetInt(string key, int value)
	{
	}

	public static int GetInt(string key, int defaultValue = 0)
	{
		return 0;
	}

	public static void SetUInt(string key, uint value)
	{
	}

	public static void SetString(string key, string value)
	{
	}

	public static string GetString(string key, string defaultValue = "")
	{
		return null;
	}

	public static void SetFloat(string key, float value)
	{
	}

	public static void SetDouble(string key, double value)
	{
	}

	public static void SetDecimal(string key, decimal value)
	{
	}

	public static void SetLong(string key, long value)
	{
	}

	public static void SetULong(string key, ulong value)
	{
	}

	public static void SetBool(string key, bool value)
	{
	}

	public static void SetByteArray(string key, byte[] value)
	{
	}

	private static string EncryptByteArrayValue(string key, byte[] value)
	{
		return null;
	}

	private static byte[] DecryptByteArrayValue(string key, string encryptedInput, byte defaultValue, int defaultLength)
	{
		return null;
	}

	private static byte[] ConstructByteArray(byte value, int length)
	{
		return null;
	}

	public static void SetVector2(string key, Vector2 value)
	{
	}

	private static string EncryptVector2Value(string key, Vector2 value)
	{
		return null;
	}

	private static Vector2 DecryptVector2Value(string key, string encryptedInput, Vector2 defaultValue)
	{
		return default;
	}

	public static void SetVector3(string key, Vector3 value)
	{
	}

	private static string EncryptVector3Value(string key, Vector3 value)
	{
		return null;
	}

	private static Vector3 DecryptVector3Value(string key, string encryptedInput, Vector3 defaultValue)
	{
		return default;
	}

	public static void SetQuaternion(string key, Quaternion value)
	{
	}

	private static string EncryptQuaternionValue(string key, Quaternion value)
	{
		return null;
	}

	private static Quaternion DecryptQuaternionValue(string key, string encryptedInput, Quaternion defaultValue)
	{
		return default;
	}

	public static void SetColor(string key, Color32 value)
	{
	}

	private static string EncryptColorValue(string key, uint value)
	{
		return null;
	}

	public static void SetRect(string key, Rect value)
	{
	}

	private static string EncryptRectValue(string key, Rect value)
	{
		return null;
	}

	private static Rect DecryptRectValue(string key, string encryptedInput, Rect defaultValue)
	{
		return default;
	}

	private static void SavesTampered()
	{
	}

	private static void PossibleForeignSavesDetected()
	{
	}

	private static string GetDeviceId()
	{
		return null;
	}

	internal static char[] GetCryptoKey(string dynamicSuffix = null)
	{
		return null;
	}

	internal static string EncryptKey(string key)
	{
		return null;
	}

	internal static string EncryptData(string key, byte[] cleanBytes, DataType type)
	{
		return null;
	}

	internal static byte[] DecryptData(string key, string encryptedInput)
	{
		return null;
	}

	internal static DataType GetRawValueType(string value)
	{
		return DataType.Unknown;
	}

	internal static string EncryptValue<T>(string key, T value) where T : IConvertible
	{
		return null;
	}

	internal static T DecryptValue<T>(string key, string encryptedKey, T defaultValue, string encryptedInput = null)
	{
		return default;
	}

	private static byte[] EncryptDecryptBytes(byte[] bytes, int dataLength, char[] key)
	{
		return null;
	}

	private static byte[] DecimalToBytes(decimal dec)
	{
		return null;
	}

	private static decimal BytesToDecimal(byte[] bytes)
	{
		return 0m;
	}

	private static string GetEncryptedPrefsString(string key, string encryptedKey)
	{
		return null;
	}

	private static uint CalculateChecksum(string input)
	{
		return 0u;
	}

	private static Color32 DecodeColor(uint encodedColor)
	{
		return default;
	}

	private static bool MigrateFromACTkV1Internal(string key, string cryptoKey)
	{
		return false;
	}

	private static void SetMigrationMode(bool enabled)
	{
	}

	private static byte[] EncryptDecryptBytesObsolete(byte[] bytes, int dataLength, string key)
	{
		return null;
	}
}
