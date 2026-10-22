using System.Runtime.Serialization;

namespace System.Xml.Schema;

[Serializable]
public class XmlSchemaInferenceException : XmlSchemaException
{
	protected XmlSchemaInferenceException(SerializationInfo info, StreamingContext context)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	public XmlSchemaInferenceException()
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	internal XmlSchemaInferenceException(string res, string arg)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}

	internal XmlSchemaInferenceException(string res, int lineNumber, int linePosition)
		: base((SerializationInfo)null, default(StreamingContext))
	{
	}
}
