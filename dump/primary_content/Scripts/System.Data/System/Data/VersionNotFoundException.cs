using System.Runtime.Serialization;

namespace System.Data;

[Serializable]
public class VersionNotFoundException : DataException
{
	protected VersionNotFoundException(SerializationInfo info, StreamingContext context)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	public VersionNotFoundException()
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	public VersionNotFoundException(string s)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}
}
