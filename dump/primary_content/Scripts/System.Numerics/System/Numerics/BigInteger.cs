using System.Globalization;

namespace System.Numerics;

[Serializable]
public struct BigInteger : IFormattable, IComparable, IComparable<BigInteger>, IEquatable<BigInteger>
{
	private enum GetBytesMode
	{
		AllocateArray = 0,
		Count = 1,
		Span = 2
	}

	internal readonly int _sign = 0;

	internal readonly uint[] _bits = null;

	private static readonly BigInteger s_bnMinInt;

	private static readonly BigInteger s_bnOneInt;

	private static readonly BigInteger s_bnZeroInt;

	private static readonly BigInteger s_bnMinusOneInt;

	private static readonly byte[] s_success;

	public bool IsZero => false;

	public BigInteger(int value)
	{
	}

	public BigInteger(uint value)
	{
	}

	public BigInteger(long value)
	{
	}

	public BigInteger(ulong value)
	{
	}

	public BigInteger(float value)
	{
	}

	public BigInteger(double value)
	{
	}

	public BigInteger(decimal value)
	{
	}

	public BigInteger(byte[] value)
	{
	}

	public BigInteger(ReadOnlySpan<byte> value, bool isUnsigned = false, bool isBigEndian = false)
	{
	}

	internal BigInteger(int n, uint[] rgu)
	{
	}

	internal BigInteger(uint[] value, bool negative)
	{
	}

	public static BigInteger Parse(string value, IFormatProvider provider)
	{
		return default;
	}

	public static BigInteger Parse(string value, NumberStyles style, IFormatProvider provider)
	{
		return default;
	}

	public override int GetHashCode()
	{
		return 0;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public bool Equals(long other)
	{
		return false;
	}

	public bool Equals(BigInteger other)
	{
		return false;
	}

	public int CompareTo(long other)
	{
		return 0;
	}

	public int CompareTo(BigInteger other)
	{
		return 0;
	}

	public int CompareTo(object obj)
	{
		return 0;
	}

	public bool TryWriteBytes(Span<byte> destination, out int bytesWritten, bool isUnsigned = false, bool isBigEndian = false)
	{
		bytesWritten = default;
		return false;
	}

	internal bool TryWriteOrCountBytes(Span<byte> destination, out int bytesWritten, bool isUnsigned = false, bool isBigEndian = false)
	{
		bytesWritten = default;
		return false;
	}

	private byte[] TryGetBytes(GetBytesMode mode, Span<byte> destination, bool isUnsigned, bool isBigEndian, ref int bytesWritten)
	{
		return null;
	}

	public override string ToString()
	{
		return null;
	}

	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	private static BigInteger Add(uint[] leftBits, int leftSign, uint[] rightBits, int rightSign)
	{
		return default;
	}

	public static BigInteger operator -(BigInteger left, BigInteger right)
	{
		return default;
	}

	private static BigInteger Subtract(uint[] leftBits, int leftSign, uint[] rightBits, int rightSign)
	{
		return default;
	}

	public static implicit operator BigInteger(byte value)
	{
		return default;
	}

	public static implicit operator BigInteger(sbyte value)
	{
		return default;
	}

	public static implicit operator BigInteger(short value)
	{
		return default;
	}

	public static implicit operator BigInteger(ushort value)
	{
		return default;
	}

	public static implicit operator BigInteger(int value)
	{
		return default;
	}

	public static implicit operator BigInteger(uint value)
	{
		return default;
	}

	public static implicit operator BigInteger(long value)
	{
		return default;
	}

	public static implicit operator BigInteger(ulong value)
	{
		return default;
	}

	public static explicit operator byte(BigInteger value)
	{
		return 0;
	}

	public static explicit operator sbyte(BigInteger value)
	{
		return 0;
	}

	public static explicit operator short(BigInteger value)
	{
		return 0;
	}

	public static explicit operator ushort(BigInteger value)
	{
		return 0;
	}

	public static explicit operator int(BigInteger value)
	{
		return 0;
	}

	public static explicit operator uint(BigInteger value)
	{
		return 0u;
	}

	public static explicit operator long(BigInteger value)
	{
		return 0L;
	}

	public static explicit operator ulong(BigInteger value)
	{
		return 0uL;
	}

	public static explicit operator float(BigInteger value)
	{
		return 0f;
	}

	public static explicit operator double(BigInteger value)
	{
		return 0.0;
	}

	public static explicit operator decimal(BigInteger value)
	{
		return 0m;
	}

	public static BigInteger operator <<(BigInteger value, int shift)
	{
		return default;
	}

	public static BigInteger operator >>(BigInteger value, int shift)
	{
		return default;
	}

	public static BigInteger operator -(BigInteger value)
	{
		return default;
	}

	public static BigInteger operator +(BigInteger left, BigInteger right)
	{
		return default;
	}

	public static BigInteger operator *(BigInteger left, BigInteger right)
	{
		return default;
	}

	public static BigInteger operator /(BigInteger dividend, BigInteger divisor)
	{
		return default;
	}

	public static bool operator <=(BigInteger left, BigInteger right)
	{
		return false;
	}

	public static bool operator !=(BigInteger left, BigInteger right)
	{
		return false;
	}

	public static bool operator <(BigInteger left, long right)
	{
		return false;
	}

	public static bool operator <=(BigInteger left, long right)
	{
		return false;
	}

	public static bool operator ==(BigInteger left, long right)
	{
		return false;
	}

	public static bool operator !=(BigInteger left, long right)
	{
		return false;
	}

	public static bool operator <(long left, BigInteger right)
	{
		return false;
	}

	public static bool operator <=(long left, BigInteger right)
	{
		return false;
	}

	private static bool GetPartsForBitManipulation(ref BigInteger x, out uint[] xd, out int xl)
	{
		xd = null;
		xl = default;
		return false;
	}

	internal static int GetDiffLength(uint[] rgu1, uint[] rgu2, int cu)
	{
		return 0;
	}
}
