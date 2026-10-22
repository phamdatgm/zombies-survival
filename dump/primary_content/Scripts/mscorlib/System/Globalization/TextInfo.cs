using System.Runtime.Serialization;

namespace System.Globalization;

/// <summary>Defines text properties and behaviors, such as casing, that are specific to a writing system.</summary>
[Serializable]
public class TextInfo : ICloneable, IDeserializationCallback
{
	[OptionalField(VersionAdded = 2)]
	private string m_listSeparator;

	[OptionalField(VersionAdded = 2)]
	private bool m_isReadOnly;

	[OptionalField(VersionAdded = 3)]
	private string m_cultureName;

	[NonSerialized]
	private CultureData m_cultureData;

	[NonSerialized]
	private string m_textInfoName;

	[NonSerialized]
	private bool? m_IsAsciiCasingSameAsInvariant;

	internal static TextInfo s_Invariant;

	[OptionalField(VersionAdded = 2)]
	private string customCultureName;

	[OptionalField(VersionAdded = 1)]
	internal int m_nDataItem;

	[OptionalField(VersionAdded = 1)]
	internal bool m_useUserOverride;

	[OptionalField(VersionAdded = 1)]
	internal int m_win32LangID;

	private const int wordSeparatorMask = 536672256;

	internal static TextInfo Invariant => null;

	private bool IsAsciiCasingSameAsInvariant => false;

	internal TextInfo(CultureData cultureData)
	{
	}

	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx)
	{
	}

	private void OnDeserialized()
	{
	}

	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[OnSerializing]
	private void OnSerializing(StreamingContext ctx)
	{
	}

	/// <summary>Creates a new object that is a copy of the current <see cref="T:System.Globalization.TextInfo" /> object.</summary>
	/// <returns>A new instance of <see cref="T:System.Object" /> that is the memberwise clone of the current <see cref="T:System.Globalization.TextInfo" /> object.</returns>
	public virtual object Clone()
	{
		return null;
	}

	/// <summary>Converts the specified character to lowercase.</summary>
	/// <param name="c">The character to convert to lowercase.</param>
	/// <returns>The specified character converted to lowercase.</returns>
	public virtual char ToLower(char c)
	{
		return '\0';
	}

	/// <summary>Converts the specified string to lowercase.</summary>
	/// <param name="str">The string to convert to lowercase.</param>
	/// <returns>The specified string converted to lowercase.</returns>
	/// <exception cref="T:System.ArgumentNullException">
	///   <paramref name="str" /> is null.</exception>
	public virtual string ToLower(string str)
	{
		return null;
	}

	private static char ToLowerAsciiInvariant(char c)
	{
		return '\0';
	}

	/// <summary>Converts the specified character to uppercase.</summary>
	/// <param name="c">The character to convert to uppercase.</param>
	/// <returns>The specified character converted to uppercase.</returns>
	public virtual char ToUpper(char c)
	{
		return '\0';
	}

	/// <summary>Converts the specified string to uppercase.</summary>
	/// <param name="str">The string to convert to uppercase.</param>
	/// <returns>The specified string converted to uppercase.</returns>
	/// <exception cref="T:System.ArgumentNullException">
	///   <paramref name="str" /> is null.</exception>
	public virtual string ToUpper(string str)
	{
		return null;
	}

	internal static char ToUpperAsciiInvariant(char c)
	{
		return '\0';
	}

	private static bool IsAscii(char c)
	{
		return false;
	}

	/// <summary>Determines whether the specified object represents the same writing system as the current <see cref="T:System.Globalization.TextInfo" /> object.</summary>
	/// <param name="obj">The object to compare with the current <see cref="T:System.Globalization.TextInfo" />.</param>
	/// <returns>
	///   <see langword="true" /> if <paramref name="obj" /> represents the same writing system as the current <see cref="T:System.Globalization.TextInfo" />; otherwise, <see langword="false" />.</returns>
	public override bool Equals(object obj)
	{
		return false;
	}

	/// <summary>Serves as a hash function for the current <see cref="T:System.Globalization.TextInfo" />, suitable for hashing algorithms and data structures, such as a hash table.</summary>
	/// <returns>A hash code for the current <see cref="T:System.Globalization.TextInfo" />.</returns>
	public override int GetHashCode()
	{
		return 0;
	}

	/// <summary>Returns a string that represents the current <see cref="T:System.Globalization.TextInfo" />.</summary>
	/// <returns>A string that represents the current <see cref="T:System.Globalization.TextInfo" />.</returns>
	public override string ToString()
	{
		return null;
	}

	/// <summary>Raises the deserialization event when deserialization is complete.</summary>
	/// <param name="sender">The source of the deserialization event.</param>
	void IDeserializationCallback.OnDeserialization(object sender)
	{
	}

	private string ToUpperInternal(string str)
	{
		return null;
	}

	private string ToLowerInternal(string str)
	{
		return null;
	}

	private char ToUpperInternal(char c)
	{
		return '\0';
	}

	private char ToLowerInternal(char c)
	{
		return '\0';
	}

	internal void ToUpperAsciiInvariant(ReadOnlySpan<char> source, Span<char> destination)
	{
	}

	internal void ChangeCase(ReadOnlySpan<char> source, Span<char> destination, bool toUpper)
	{
	}

	internal TextInfo()
	{
	}
}
