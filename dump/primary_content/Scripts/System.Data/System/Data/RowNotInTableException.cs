using System.Runtime.Serialization;

namespace System.Data;

[Serializable]
public class RowNotInTableException : DataException
{
	protected RowNotInTableException(SerializationInfo info, StreamingContext context)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	public RowNotInTableException()
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	public RowNotInTableException(string s)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}
}
