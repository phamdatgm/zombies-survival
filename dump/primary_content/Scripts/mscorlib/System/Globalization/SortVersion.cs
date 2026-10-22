namespace System.Globalization;

/// <summary>Provides information about the version of Unicode used to compare and order strings.</summary>
[Serializable]
public sealed class SortVersion : IEquatable<SortVersion>
{
	private int m_NlsVersion;

	private Guid m_SortId;

	/// <summary>Returns a value that indicates whether this <see cref="T:System.Globalization.SortVersion" /> instance is equal to a specified object.</summary>
	/// <param name="obj">An object to compare with this instance.</param>
	/// <returns>
	///   <see langword="true" /> if <paramref name="obj" /> is a <see cref="T:System.Globalization.SortVersion" /> object that represents the same version as this instance; otherwise, <see langword="false" />.</returns>
	public override bool Equals(object obj)
	{
		return false;
	}

	/// <summary>Returns a value that indicates whether this <see cref="T:System.Globalization.SortVersion" /> instance is equal to a specified <see cref="T:System.Globalization.SortVersion" /> object.</summary>
	/// <param name="other">The object to compare with this instance.</param>
	/// <returns>
	///   <see langword="true" /> if <paramref name="other" /> represents the same version as this instance; otherwise, <see langword="false" />.</returns>
	public bool Equals(SortVersion other)
	{
		return false;
	}

	/// <summary>Returns a hash code for this instance.</summary>
	/// <returns>A 32-bit signed integer hash code.</returns>
	public override int GetHashCode()
	{
		return 0;
	}

	/// <summary>Indicates whether two <see cref="T:System.Globalization.SortVersion" /> instances are equal.</summary>
	/// <param name="left">The first instance to compare.</param>
	/// <param name="right">The second instance to compare.</param>
	/// <returns>
	///   <see langword="true" /> if the values of <paramref name="left" /> and <paramref name="right" /> are equal; otherwise, <see langword="false" />.</returns>
	public static bool operator ==(SortVersion left, SortVersion right)
	{
		return false;
	}

	/// <summary>Indicates whether two <see cref="T:System.Globalization.SortVersion" /> instances are not equal.</summary>
	/// <param name="left">The first instance to compare.</param>
	/// <param name="right">The second instance to compare.</param>
	/// <returns>
	///   <see langword="true" /> if the values of <paramref name="left" /> and <paramref name="right" /> are not equal; otherwise, <see langword="false" />.</returns>
	public static bool operator !=(SortVersion left, SortVersion right)
	{
		return false;
	}
}
