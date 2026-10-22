using System.Runtime.Serialization;

namespace System.Data;

[Serializable]
public class ConstraintException : DataException
{
	protected ConstraintException(SerializationInfo info, StreamingContext context)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	public ConstraintException()
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	public ConstraintException(string s)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}
}
