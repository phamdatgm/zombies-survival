using System.Collections;
using System.Collections.Generic;

namespace System.Xml.Schema;

internal sealed class SchemaElementDecl : SchemaDeclBase, IDtdAttributeListInfo
{
	private Dictionary<XmlQualifiedName, SchemaAttDef> attdefs;

	private List<IDtdDefaultAttributeInfo> defaultAttdefs;

	private bool isIdDeclared;

	private bool hasNonCDataAttribute;

	private bool isAbstract;

	private bool isNillable;

	private bool hasRequiredAttribute;

	private bool isNotationDeclared;

	private Dictionary<XmlQualifiedName, XmlQualifiedName> prohibitedAttributes;

	private ContentValidator contentValidator;

	private XmlSchemaAnyAttribute anyAttribute;

	private XmlSchemaDerivationMethod block;

	private CompiledIdentityConstraint[] constraints;

	private XmlSchemaElement schemaElement;

	internal static readonly SchemaElementDecl Empty;

	bool IDtdAttributeListInfo.HasNonCDataAttributes => false;

	internal bool HasNonCDataAttribute => false;

	internal bool HasDefaultAttribute => false;

	internal IList<IDtdDefaultAttributeInfo> DefaultAttDefs => null;

	internal SchemaElementDecl()
		: base(null, null)
	{
	}

	internal SchemaElementDecl(XmlSchemaDatatype dtype)
		: base(null, null)
	{
	}

	internal SchemaElementDecl(XmlQualifiedName name, string prefix)
		: base(null, null)
	{
	}

	internal static SchemaElementDecl CreateAnyTypeElementDecl()
	{
		return null;
	}

	IDtdAttributeInfo IDtdAttributeListInfo.LookupAttribute(string prefix, string localName)
	{
		return null;
	}

	IEnumerable<IDtdDefaultAttributeInfo> IDtdAttributeListInfo.LookupDefaultAttributes()
	{
		return null;
	}

	internal SchemaElementDecl Clone()
	{
		return null;
	}

	internal void AddAttDef(SchemaAttDef attdef)
	{
	}

	internal SchemaAttDef GetAttDef(XmlQualifiedName qname)
	{
		return null;
	}

	internal void CheckAttributes(Hashtable presence, bool standalone)
	{
	}
}
