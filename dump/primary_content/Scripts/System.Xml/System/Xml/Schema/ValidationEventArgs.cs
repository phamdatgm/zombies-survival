namespace System.Xml.Schema;

public class ValidationEventArgs : EventArgs
{
	private XmlSchemaException ex;

	private XmlSeverityType severity;

	internal ValidationEventArgs(XmlSchemaException ex)
	{
	}

	internal ValidationEventArgs(XmlSchemaException ex, XmlSeverityType severity)
	{
	}
}
