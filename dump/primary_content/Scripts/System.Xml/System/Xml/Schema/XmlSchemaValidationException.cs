using System.Runtime.Serialization;

namespace System.Xml.Schema;

[Serializable]
public class XmlSchemaValidationException : XmlSchemaException
{
	protected XmlSchemaValidationException(SerializationInfo info, StreamingContext context)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	public XmlSchemaValidationException()
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	internal XmlSchemaValidationException(string res, string arg, string sourceUri, int lineNumber, int linePosition)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	internal XmlSchemaValidationException(string res, string[] args, string sourceUri, int lineNumber, int linePosition)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	internal XmlSchemaValidationException(string res, string[] args, Exception innerException, string sourceUri, int lineNumber, int linePosition)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}
}
