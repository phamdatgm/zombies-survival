using System.Collections;

namespace System.Xml.Serialization;

public class XmlTypeMapping : XmlMapping
{
	private string xmlType;

	private string xmlTypeNamespace;

	private TypeData type;

	private XmlTypeMapping baseMap;

	private bool multiReferenceType;

	private bool includeInSchema;

	private bool isNullable;

	private bool isAny;

	private ArrayList _derivedTypes;

	public string TypeFullName => null;

	internal string XmlTypeNamespace => null;

	internal bool HasXmlTypeNamespace => false;

	internal XmlTypeMapping(string elementName, string ns, TypeData typeData, string xmlType, string xmlTypeNamespace)
		: base(null, null)
	{
	}

	internal XmlTypeMapping GetRealTypeMap(Type objectType)
	{
		return null;
	}

	internal XmlTypeMapping GetRealElementMap(string name, string ens)
	{
		return null;
	}

	internal void UpdateRoot(XmlQualifiedName qname)
	{
	}
}
