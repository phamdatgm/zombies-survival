using System.Collections;
using System.Xml.Serialization;

namespace System.Xml.Schema;

[XmlRoot("schema", Namespace = "http://www.w3.org/2001/XMLSchema")]
public class XmlSchema : XmlSchemaObject
{
	private XmlSchemaForm attributeFormDefault;

	private XmlSchemaForm elementFormDefault;

	private XmlSchemaDerivationMethod blockDefault;

	private XmlSchemaDerivationMethod finalDefault;

	private string targetNs;

	private string version;

	private XmlSchemaObjectCollection includes;

	private XmlSchemaObjectCollection items;

	private string id;

	private XmlAttribute[] moreAttributes;

	private bool isCompiled;

	private bool isCompiledBySet;

	private bool isPreprocessed;

	private bool isRedefined;

	private int errorCount;

	private XmlSchemaObjectTable attributes;

	private XmlSchemaObjectTable attributeGroups;

	private XmlSchemaObjectTable elements;

	private XmlSchemaObjectTable types;

	private XmlSchemaObjectTable groups;

	private XmlSchemaObjectTable notations;

	private XmlSchemaObjectTable identityConstraints;

	private static int globalIdCounter;

	private ArrayList importedSchemas;

	private ArrayList importedNamespaces;

	private int schemaId;

	private Uri baseUri;

	private bool isChameleon;

	private Hashtable ids;

	private XmlDocument document;

	[XmlIgnore]
	public XmlSchemaObjectTable Attributes => null;

	[XmlIgnore]
	public XmlSchemaObjectTable AttributeGroups => null;

	[XmlIgnore]
	public XmlSchemaObjectTable SchemaTypes => null;

	[XmlIgnore]
	public XmlSchemaObjectTable Elements => null;

	[XmlIgnore]
	internal Uri BaseUri => null;

	[XmlIgnore]
	internal int SchemaId => 0;

	[XmlIgnore]
	internal XmlDocument Document => null;

	[XmlIgnore]
	internal override string IdAttribute
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	internal ArrayList ImportedSchemas => null;

	internal ArrayList ImportedNamespaces => null;

	public static XmlSchema Read(XmlReader reader, ValidationEventHandler validationEventHandler)
	{
		return null;
	}

	internal bool CompileSchema(XmlSchemaCollection xsc, XmlResolver resolver, SchemaInfo schemaInfo, string ns, ValidationEventHandler validationEventHandler, XmlNameTable nameTable, bool CompileContentModel)
	{
		return false;
	}

	internal void CompileSchemaInSet(XmlNameTable nameTable, ValidationEventHandler eventHandler, XmlSchemaCompilationSettings compilationSettings)
	{
	}

	internal new XmlSchema Clone()
	{
		return null;
	}

	internal XmlSchema DeepClone()
	{
		return null;
	}

	internal override void SetUnhandledAttributes(XmlAttribute[] moreAttributes)
	{
	}

	internal override void AddAnnotation(XmlSchemaAnnotation annotation)
	{
	}

	internal void GetExternalSchemasList(IList extList, XmlSchema schema)
	{
	}
}
