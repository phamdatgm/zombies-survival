using System.Runtime.Serialization;

namespace System.Data;

[Serializable]
public class InRowChangingEventException : DataException
{
	protected InRowChangingEventException(SerializationInfo info, StreamingContext context)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	public InRowChangingEventException()
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	public InRowChangingEventException(string s)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}
}
