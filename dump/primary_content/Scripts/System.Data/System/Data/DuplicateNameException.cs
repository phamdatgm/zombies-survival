using System.Runtime.Serialization;

namespace System.Data;

[Serializable]
public class DuplicateNameException : DataException
{
	protected DuplicateNameException(SerializationInfo info, StreamingContext context)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	public DuplicateNameException()
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	public DuplicateNameException(string s)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}
}
