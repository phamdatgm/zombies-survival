using System.Runtime.Serialization;

namespace System.Data;

[Serializable]
public class InvalidExpressionException : DataException
{
	protected InvalidExpressionException(SerializationInfo info, StreamingContext context)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	public InvalidExpressionException()
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	public InvalidExpressionException(string s)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}
}
