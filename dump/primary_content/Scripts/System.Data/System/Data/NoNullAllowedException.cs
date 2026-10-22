using System.Runtime.Serialization;

namespace System.Data;

[Serializable]
public class NoNullAllowedException : DataException
{
	protected NoNullAllowedException(SerializationInfo info, StreamingContext context)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	public NoNullAllowedException()
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	public NoNullAllowedException(string s)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}
}
