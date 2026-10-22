using System.Runtime.Serialization;

namespace System.ComponentModel;

/// <summary>The exception thrown when using invalid arguments that are enumerators.</summary>
[Serializable]
public class InvalidEnumArgumentException : ArgumentException
{
	/// <summary>Initializes a new instance of the <see cref="T:System.ComponentModel.InvalidEnumArgumentException" /> class without a message.</summary>
	public InvalidEnumArgumentException()
	{
	}

	/// <summary>Initializes a new instance of the <see cref="T:System.ComponentModel.InvalidEnumArgumentException" /> class with the specified message.</summary>
	/// <param name="message">The message to display with this exception.</param>
	public InvalidEnumArgumentException(string message)
	{
	}

	/// <summary>Initializes a new instance of the <see cref="T:System.ComponentModel.InvalidEnumArgumentException" /> class using the specified serialization data and context.</summary>
	/// <param name="info">The <see cref="T:System.Runtime.Serialization.SerializationInfo" /> to be used for deserialization.</param>
	/// <param name="context">The destination to be used for deserialization.</param>
	protected InvalidEnumArgumentException(SerializationInfo info, StreamingContext context)
	{
	}
}
