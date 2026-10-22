using System.Runtime.Serialization;

namespace System.Text.RegularExpressions;

/// <summary>The exception that is thrown when the execution time of a regular expression pattern-matching method exceeds its time-out interval.</summary>
[Serializable]
public class RegexMatchTimeoutException : TimeoutException, ISerializable
{
	private readonly string Input;

	private readonly string Pattern;

	private readonly TimeSpan MatchTimeout;

	/// <summary>Initializes a new instance of the <see cref="T:System.Text.RegularExpressions.RegexMatchTimeoutException" /> class with information about the regular expression pattern, the input text, and the time-out interval.</summary>
	/// <param name="regexInput">The input text processed by the regular expression engine when the time-out occurred.</param>
	/// <param name="regexPattern">The pattern used by the regular expression engine when the time-out occurred.</param>
	/// <param name="matchTimeout">The time-out interval.</param>
	public RegexMatchTimeoutException(string regexInput, string regexPattern, TimeSpan matchTimeout)
	{
	}

	/// <summary>Initializes a new instance of the <see cref="T:System.Text.RegularExpressions.RegexMatchTimeoutException" /> class with a system-supplied message.</summary>
	public RegexMatchTimeoutException()
	{
	}

	/// <summary>Initializes a new instance of the <see cref="T:System.Text.RegularExpressions.RegexMatchTimeoutException" /> class with serialized data.</summary>
	/// <param name="info">The object that contains the serialized data.</param>
	/// <param name="context">The stream that contains the serialized data.</param>
	protected RegexMatchTimeoutException(SerializationInfo info, StreamingContext context)
	{
	}

	/// <summary>Populates a <see cref="T:System.Runtime.Serialization.SerializationInfo" /> object with the data needed to serialize a <see cref="T:System.Text.RegularExpressions.RegexMatchTimeoutException" /> object.</summary>
	/// <param name="si">The object to populate with data.</param>
	/// <param name="context">The destination for this serialization.</param>
	void ISerializable.GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
