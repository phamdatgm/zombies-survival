using System.Runtime.Serialization;

namespace System.Data;

[Serializable]
public class InvalidConstraintException : DataException
{
	protected InvalidConstraintException(SerializationInfo info, StreamingContext context)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	public InvalidConstraintException()
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	public InvalidConstraintException(string s)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}
}
