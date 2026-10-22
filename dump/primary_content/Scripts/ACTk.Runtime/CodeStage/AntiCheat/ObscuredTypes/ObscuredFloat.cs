using System;
using System.Runtime.InteropServices;
using CodeStage.AntiCheat.Common;
using UnityEngine;
using UnityEngine.Serialization;

namespace CodeStage.AntiCheat.ObscuredTypes;

[Serializable]
public struct ObscuredFloat : IFormattable, IEquatable<ObscuredFloat>, IComparable<ObscuredFloat>, IComparable<float>, IComparable
{
	[StructLayout((LayoutKind)2)]
	internal struct FloatIntBytesUnion
	{
		[FieldOffset(0)]
		internal float f;

		[FieldOffset(0)]
		internal int i;

		[FieldOffset(0)]
		internal ACTkByte4 b4;

		internal static int XorFloatToInt(float value, int key)
		{
			return 0;
		}

		internal static float XorIntToFloat(int value, int key)
		{
			return 0f;
		}

		private static FloatIntBytesUnion FromFloat(float value)
		{
			return default;
		}

		private static FloatIntBytesUnion FromInt(int value)
		{
			return default;
		}

		private FloatIntBytesUnion Shuffle(int key)
		{
			return default;
		}

		private FloatIntBytesUnion UnShuffle(int key)
		{
			return default;
		}
	}

	[SerializeField]
	private int currentCryptoKey = 0;

	[SerializeField]
	private int hiddenValue = 0;

	[SerializeField]
	[FormerlySerializedAs("hiddenValue")]
	private ACTkByte4 hiddenValueOldByte4 = default;

	[SerializeField]
	private bool inited = false;

	[SerializeField]
	private float fakeValue = 0f;

	[SerializeField]
	private bool fakeValueActive = false;

	private ObscuredFloat(float value)
	{
	}

	public static int Encrypt(float value, int key)
	{
		return 0;
	}

	public static float Decrypt(int value, int key)
	{
		return 0f;
	}

	public static int GenerateKey()
	{
		return 0;
	}

	private float InternalDecrypt()
	{
		return 0f;
	}

	public static implicit operator ObscuredFloat(float value)
	{
		return default;
	}

	public static implicit operator float(ObscuredFloat value)
	{
		return 0f;
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

	public bool Equals(ObscuredFloat obj)
	{
		return false;
	}

	public int CompareTo(ObscuredFloat other)
	{
		return 0;
	}

	public int CompareTo(float other)
	{
		return 0;
	}

	public int CompareTo(object obj)
	{
		return 0;
	}
}
