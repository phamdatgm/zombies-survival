using System.Collections.Generic;

namespace System.Xml.Schema;

internal class SchemaInfo : IDtdInfo
{
	private Dictionary<XmlQualifiedName, SchemaElementDecl> elementDecls;

	private Dictionary<XmlQualifiedName, SchemaElementDecl> undeclaredElementDecls;

	private Dictionary<XmlQualifiedName, SchemaEntity> generalEntities;

	private Dictionary<XmlQualifiedName, SchemaEntity> parameterEntities;

	private XmlQualifiedName docTypeName;

	private string internalDtdSubset;

	private bool hasNonCDataAttributes;

	private bool hasDefaultAttributes;

	private Dictionary<string, bool> targetNamespaces;

	private Dictionary<XmlQualifiedName, SchemaAttDef> attributeDecls;

	private int errorCount;

	private SchemaType schemaType;

	private Dictionary<XmlQualifiedName, SchemaElementDecl> elementDeclsByType;

	private Dictionary<string, SchemaNotation> notations;

	internal Dictionary<XmlQualifiedName, SchemaEntity> GeneralEntities => null;

	internal Dictionary<XmlQualifiedName, SchemaEntity> ParameterEntities => null;

	internal Dictionary<string, SchemaNotation> Notations => null;

	bool IDtdInfo.HasDefaultAttributes => false;

	bool IDtdInfo.HasNonCDataAttributes => false;

	XmlQualifiedName IDtdInfo.Name => null;

	string IDtdInfo.InternalDtdSubset => null;

	internal SchemaInfo()
	{
	}

	internal SchemaElementDecl GetElementDecl(XmlQualifiedName qname)
	{
		return null;
	}

	internal SchemaElementDecl GetTypeDecl(XmlQualifiedName qname)
	{
		return null;
	}

	internal XmlSchemaElement GetElement(XmlQualifiedName qname)
	{
		return null;
	}

	internal bool HasSchema(string ns)
	{
		return false;
	}

	internal bool Contains(string ns)
	{
		return false;
	}

	internal SchemaAttDef GetAttributeXdr(SchemaElementDecl ed, XmlQualifiedName qname)
	{
		return null;
	}

	internal SchemaAttDef GetAttributeXsd(SchemaElementDecl ed, XmlQualifiedName qname, XmlSchemaObject partialValidationType, out AttributeMatchState attributeMatchState)
	{
		attributeMatchState = default;
		return null;
	}

	internal SchemaAttDef GetAttributeXsd(SchemaElementDecl ed, XmlQualifiedName qname, ref bool skip)
	{
		return null;
	}

	internal void Add(SchemaInfo sinfo, ValidationEventHandler eventhandler)
	{
	}

	internal void Finish()
	{
	}

	IDtdAttributeListInfo IDtdInfo.LookupAttributeList(string prefix, string localName)
	{
		return null;
	}

	IDtdEntityInfo IDtdInfo.LookupEntity(string name)
	{
		return null;
	}
}
