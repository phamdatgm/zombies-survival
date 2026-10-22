namespace System.Text.RegularExpressions;

/// <summary>Represents the results from a single successful subexpression capture.</summary>
public class Capture
{
	private int Index;

	private string Text;

	/// <summary>Gets the length of the captured substring.</summary>
	/// <returns>The length of the captured substring.</returns>
	public int Length { get; }

	/// <summary>Gets the captured substring from the input string.</summary>
	/// <returns>The substring that is captured by the match.</returns>
	public string Value => null;

	internal Capture(string text, int index, int length)
	{
	}

	/// <summary>Retrieves the captured substring from the input string by calling the <see cref="P:System.Text.RegularExpressions.Capture.Value" /> property.</summary>
	/// <returns>The substring that was captured by the match.</returns>
	public override string ToString()
	{
		return null;
	}

	internal ReadOnlySpan<char> GetLeftSubstring()
	{
		return default;
	}

	internal ReadOnlySpan<char> GetRightSubstring()
	{
		return default;
	}

	internal Capture()
	{
	}
}
