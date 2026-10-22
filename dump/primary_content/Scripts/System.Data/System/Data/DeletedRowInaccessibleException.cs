using System.Runtime.Serialization;

namespace System.Data;

[Serializable]
public class DeletedRowInaccessibleException : DataException
{
	protected DeletedRowInaccessibleException(SerializationInfo info, StreamingContext context)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	public DeletedRowInaccessibleException()
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	public DeletedRowInaccessibleException(string s)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}
}
