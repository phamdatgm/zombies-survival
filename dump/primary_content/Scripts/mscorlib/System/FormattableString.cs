namespace System;

/// <summary>Represents a composite format string, along with the arguments to be formatted.</summary>
public abstract class FormattableString : IFormattable
{
	/// <summary>Returns the string that results from formatting the composite format string along with its arguments by using the formatting conventions of a specified culture.</summary>
	/// <param name="formatProvider">An object that provides culture-specific formatting information.</param>
	/// <returns>A result string formatted by using the conventions of <paramref name="formatProvider" />.</returns>
	public abstract string ToString(IFormatProvider formatProvider);

	/// <summary>Returns the string that results from formatting the format string along with its arguments by using the formatting conventions of a specified culture.</summary>
	/// <param name="ignored">A string. This argument is ignored.</param>
	/// <param name="formatProvider">An object that provides culture-specific formatting information.</param>
	/// <returns>A string formatted using the conventions of the <paramref name="formatProvider" /> parameter.</returns>
	string IFormattable.ToString(string ignored, IFormatProvider formatProvider)
	{
		return null;
	}

	/// <summary>Returns the string that results from formatting the composite format string along with its arguments by using the formatting conventions of the current culture.</summary>
	/// <returns>A result string formatted by using the conventions of the current culture.</returns>
	public override string ToString()
	{
		return null;
	}

	/// <summary>Instantiates a new instance of the <see cref="T:System.FormattableString" /> class.</summary>
	protected FormattableString()
	{
	}
}
