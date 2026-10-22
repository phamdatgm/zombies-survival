using System.Runtime.Serialization;

namespace System;

/// <summary>A platform-specific type that is used to represent a pointer or a handle.</summary>
[Serializable]
public struct UIntPtr : ISerializable, IEquatable<UIntPtr>
{
	/// <summary>A read-only field that represents a pointer or handle that has been initialized to zero.</summary>
	public static readonly UIntPtr Zero;

	private unsafe readonly void* _pointer = null;

	/// <summary>Gets the size of this instance.</summary>
	/// <returns>The size of a pointer or handle on this platform, measured in bytes. The value of this property is 4 on a 32-bit platform, and 8 on a 64-bit platform.</returns>
	public static int Size => 0;

	/// <summary>Initializes a new instance of the <see cref="T:System.UIntPtr" /> structure using the specified 32-bit pointer or handle.</summary>
	/// <param name="value">A pointer or handle contained in a 32-bit unsigned integer.</param>
	public unsafe UIntPtr(uint value)
	{
	}

	/// <summary>Initializes a new instance of <see cref="T:System.UIntPtr" /> using the specified pointer to an unspecified type.</summary>
	/// <param name="value">A pointer to an unspecified type.</param>
	public unsafe UIntPtr(void* value)
	{
	}

	/// <summary>Returns a value indicating whether this instance is equal to a specified object.</summary>
	/// <param name="obj">An object to compare with this instance or <see langword="null" />.</param>
	/// <returns>
	///   <see langword="true" /> if <paramref name="obj" /> is an instance of <see cref="T:System.UIntPtr" /> and equals the value of this instance; otherwise, <see langword="false" />.</returns>
	public override bool Equals(object obj)
	{
		return false;
	}

	/// <summary>Returns the hash code for this instance.</summary>
	/// <returns>A 32-bit signed integer hash code.</returns>
	public override int GetHashCode()
	{
		return 0;
	}

	/// <summary>Converts the numeric value of this instance to its equivalent string representation.</summary>
	/// <returns>The string representation of the value of this instance.</returns>
	public override string ToString()
	{
		return null;
	}

	/// <summary>Populates a <see cref="T:System.Runtime.Serialization.SerializationInfo" /> object with the data needed to serialize the current <see cref="T:System.UIntPtr" /> object.</summary>
	/// <param name="info">The <see cref="T:System.Runtime.Serialization.SerializationInfo" /> object to populate with data.</param>
	/// <param name="context">The destination for this serialization. (This parameter is not used; specify <see langword="null" />.)</param>
	/// <exception cref="T:System.ArgumentNullException">
	///   <paramref name="info" /> is <see langword="null" />.</exception>
	void ISerializable.GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	/// <summary>Determines whether two specified instances of <see cref="T:System.UIntPtr" /> are equal.</summary>
	/// <param name="value1">The first pointer or handle to compare.</param>
	/// <param name="value2">The second pointer or handle to compare.</param>
	/// <returns>
	///   <see langword="true" /> if <paramref name="value1" /> equals <paramref name="value2" />; otherwise, <see langword="false" />.</returns>
	public static bool operator ==(UIntPtr value1, UIntPtr value2)
	{
		return false;
	}

	/// <summary>Determines whether two specified instances of <see cref="T:System.UIntPtr" /> are not equal.</summary>
	/// <param name="value1">The first pointer or handle to compare.</param>
	/// <param name="value2">The second pointer or handle to compare.</param>
	/// <returns>
	///   <see langword="true" /> if <paramref name="value1" /> does not equal <paramref name="value2" />; otherwise, <see langword="false" />.</returns>
	public static bool operator !=(UIntPtr value1, UIntPtr value2)
	{
		return false;
	}

	bool IEquatable<UIntPtr>.Equals(UIntPtr other)
	{
		return false;
	}
}
