using System;
using System.Reflection;
using UnityEngine;

namespace CodeStage.AntiCheat.ObscuredTypes;

[Serializable]
[DefaultMember("Item")]
public sealed class ObscuredString : IComparable<ObscuredString>, IComparable<string>, IComparable
{
	[SerializeField]
	private string currentCryptoKey;

	[SerializeField]
	private byte[] hiddenValue;

	[SerializeField]
	private char[] cryptoKey;

	[SerializeField]
	private char[] hiddenChars;

	[SerializeField]
	private bool inited;

	[SerializeField]
	private string fakeValue;

	[SerializeField]
	private bool fakeValueActive;

	private ObscuredString()
	{
	}

	private ObscuredString(string value)
	{
	}

	public static char[] Encrypt(char[] value, char[] key)
	{
		return null;
	}

	public static char[] GenerateKey()
	{
		return null;
	}

	public static char[] GenerateKey(char[] arrayToFill)
	{
		return null;
	}

	internal static char[] InternalEncryptDecrypt(char[] value, char[] key)
	{
		return null;
	}

	internal static string EncryptDecryptObsolete(string value, string key)
	{
		return null;
	}

	private string InternalDecryptToString()
	{
		return null;
	}

	private char[] InternalDecrypt()
	{
		return null;
	}

	private bool CompareCharsToString(char[] chars, string s)
	{
		return false;
	}

	internal void MigrateFromACTkV1()
	{
	}

	public static implicit operator ObscuredString(string value)
	{
		return null;
	}

	public static implicit operator string(ObscuredString value)
	{
		return null;
	}

	public static bool operator ==(ObscuredString a, ObscuredString b)
	{
		return false;
	}

	public static bool operator !=(ObscuredString a, ObscuredString b)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}

	public override string ToString()
	{
		return null;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public bool Equals(ObscuredString value)
	{
		return false;
	}

	public int CompareTo(ObscuredString other)
	{
		return 0;
	}

	public int CompareTo(string other)
	{
		return 0;
	}

	public int CompareTo(object obj)
	{
		return 0;
	}

	internal static string GetStringObsolete(byte[] bytes)
	{
		return null;
	}

	private static bool ArraysEquals(char[] a1, char[] a2)
	{
		return false;
	}
}
