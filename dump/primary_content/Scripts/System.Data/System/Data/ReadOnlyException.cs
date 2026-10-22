using System.Runtime.Serialization;

namespace System.Data;

[Serializable]
public class ReadOnlyException : DataException
{
	protected ReadOnlyException(SerializationInfo info, StreamingContext context)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	public ReadOnlyException()
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	public ReadOnlyException(string s)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}
}
