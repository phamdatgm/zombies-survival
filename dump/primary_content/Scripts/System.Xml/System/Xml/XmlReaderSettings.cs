using System.IO;
using System.Xml.Schema;

namespace System.Xml;

public sealed class XmlReaderSettings
{
	private bool useAsync;

	private XmlNameTable nameTable;

	private XmlResolver xmlResolver;

	private int lineNumberOffset;

	private int linePositionOffset;

	private ConformanceLevel conformanceLevel;

	private bool checkCharacters;

	private long maxCharactersInDocument;

	private long maxCharactersFromEntities;

	private bool ignoreWhitespace;

	private bool ignorePIs;

	private bool ignoreComments;

	private DtdProcessing dtdProcessing;

	private ValidationType validationType;

	private XmlSchemaValidationFlags validationFlags;

	private XmlSchemaSet schemas;

	private ValidationEventHandler valEventHandler;

	private bool closeInput;

	private bool isReadOnly;

	private bool IsXmlResolverSet;

	private static bool? s_enableLegacyXmlSettings;

	public bool Async
	{
		set
		{
		}
	}

	public XmlNameTable NameTable
	{
		set
		{
		}
	}

	public XmlResolver XmlResolver
	{
		set
		{
		}
	}

	public int LineNumberOffset
	{
		set
		{
		}
	}

	public int LinePositionOffset
	{
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

	public bool CheckCharacters
	{
		set
		{
		}
	}

	public long MaxCharactersInDocument
	{
		set
		{
		}
	}

	public long MaxCharactersFromEntities
	{
		set
		{
		}
	}

	public bool IgnoreWhitespace
	{
		set
		{
		}
	}

	public bool IgnoreProcessingInstructions
	{
		set
		{
		}
	}

	public bool IgnoreComments
	{
		set
		{
		}
	}

	public DtdProcessing DtdProcessing
	{
		set
		{
		}
	}

	public bool CloseInput
	{
		set
		{
		}
	}

	public ValidationType ValidationType
	{
		set
		{
		}
	}

	public XmlSchemaValidationFlags ValidationFlags
	{
		set
		{
		}
	}

	public XmlSchemaSet Schemas
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public XmlReaderSettings Clone()
	{
		return null;
	}

	internal XmlReader CreateReader(Stream input, Uri baseUri, string baseUriString, XmlParserContext inputContext)
	{
		return null;
	}

	internal XmlReader CreateReader(TextReader input, string baseUriString, XmlParserContext inputContext)
	{
		return null;
	}

	private void CheckReadOnly(string propertyName)
	{
	}

	private void Initialize()
	{
	}

	private void Initialize(XmlResolver resolver)
	{
	}

	private static XmlResolver CreateDefaultResolver()
	{
		return null;
	}

	internal XmlReader AddValidation(XmlReader reader)
	{
		return null;
	}

	private XmlValidatingReaderImpl CreateDtdValidatingReader(XmlReader baseReader)
	{
		return null;
	}

	internal static bool EnableLegacyXmlSettings()
	{
		return false;
	}
}
