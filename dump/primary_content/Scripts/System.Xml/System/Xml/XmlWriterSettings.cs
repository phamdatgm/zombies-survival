using System.Collections.Generic;
using System.IO;
using System.Text;

namespace System.Xml;

public sealed class XmlWriterSettings
{
	private bool useAsync;

	private Encoding encoding;

	private bool omitXmlDecl;

	private NewLineHandling newLineHandling;

	private string newLineChars;

	private TriState indent;

	private string indentChars;

	private bool newLineOnAttributes;

	private bool closeOutput;

	private NamespaceHandling namespaceHandling;

	private ConformanceLevel conformanceLevel;

	private bool checkCharacters;

	private bool writeEndDocumentOnClose;

	private XmlOutputMethod outputMethod;

	private List<XmlQualifiedName> cdataSections;

	private bool doNotEscapeUriAttributes;

	private bool mergeCDataSections;

	private string mediaType;

	private string docTypeSystem;

	private string docTypePublic;

	private XmlStandalone standalone;

	private bool autoXmlDecl;

	private bool isReadOnly;

	public bool OmitXmlDeclaration
	{
		set
		{
		}
	}

	public bool Indent
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public ConformanceLevel ConformanceLevel
	{
		set
		{
		}
	}

	public NamespaceHandling NamespaceHandling
	{
		set
		{
		}
	}

	internal bool IsQuerySpecific => false;

	public XmlWriterSettings Clone()
	{
		return null;
	}

	internal XmlWriter CreateWriter(Stream output)
	{
		return null;
	}

	internal XmlWriter CreateWriter(TextWriter output)
	{
		return null;
	}

	private void CheckReadOnly(string propertyName)
	{
	}

	private void Initialize()
	{
	}
}
