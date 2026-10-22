using System;
using UnityEngine;

namespace CodeStage.AntiCheat.ObscuredTypes;

[Serializable]
public struct ObscuredInt : IFormattable, IEquatable<ObscuredInt>, IComparable<ObscuredInt>, IComparable<int>, IComparable
{
	[SerializeField]
	private int currentCryptoKey = 0;

	[SerializeField]
	private int hiddenValue = 0;

	[SerializeField]
	private bool inited = false;

	[SerializeField]
	private int fakeValue = 0;

	[SerializeField]
	private bool fakeValueActive = false;

	private ObscuredInt(int value)
	{
	}

	public static int Encrypt(int value, int key)
	{
		return 0;
	}

	public static int Decrypt(int value, int key)
	{
		return 0;
	}

	public static int GenerateKey()
	{
		return 0;
	}

	private int InternalDecrypt()
	{
		return 0;
	}

	public static implicit operator ObscuredInt(int value)
	{
		return default;
	}

	public static implicit operator int(ObscuredInt value)
	{
		return 0;
	}

	public static ObscuredInt operator ++(ObscuredInt input)
	{
		return default;
	}

	private static ObscuredInt Increment(ObscuredInt input, int increment)
	{
		return default;
	}

	public override int GetHashCode()
	{
		return 0;
	}

	public override string ToString()
	{
		return null;
	}

	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public bool Equals(ObscuredInt obj)
	{
		return false;
	}

	public int CompareTo(ObscuredInt other)
	{
		return 0;
	}

	public int CompareTo(int other)
	{
		return 0;
	}

	public int CompareTo(object obj)
	{
		return 0;
	}
}
