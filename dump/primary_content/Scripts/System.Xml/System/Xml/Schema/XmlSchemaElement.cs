using System.ComponentModel;
using System.Xml.Serialization;

namespace System.Xml.Schema;

public class XmlSchemaElement : XmlSchemaParticle
{
	private bool isAbstract;

	private bool hasAbstractAttribute;

	private bool isNillable;

	private bool hasNillableAttribute;

	private bool isLocalTypeDerivationChecked;

	private XmlSchemaDerivationMethod block;

	private XmlSchemaDerivationMethod final;

	private XmlSchemaForm form;

	private string defaultValue;

	private string fixedValue;

	private string name;

	private XmlQualifiedName refName;

	private XmlQualifiedName substitutionGroup;

	private XmlQualifiedName typeName;

	private XmlSchemaType type;

	private XmlQualifiedName qualifiedName;

	private XmlSchemaType elementType;

	private XmlSchemaDerivationMethod blockResolved;

	private XmlSchemaDerivationMethod finalResolved;

	private XmlSchemaObjectCollection constraints;

	private SchemaElementDecl elementDecl;

	[XmlAttribute("abstract")]
	[DefaultValue(false)]
	public bool IsAbstract
	{
		set
		{
		}
	}

	[XmlAttribute("nillable")]
	[DefaultValue(false)]
	public bool IsNillable
	{
		set
		{
		}
	}

	[XmlAttribute("ref")]
	public XmlQualifiedName RefName
	{
		set
		{
		}
	}

	[XmlAttribute("substitutionGroup")]
	public XmlQualifiedName SubstitutionGroup
	{
		set
		{
		}
	}

	[XmlAttribute("type")]
	public XmlQualifiedName SchemaTypeName
	{
		set
		{
		}
	}

	[XmlElement("keyref", typeof(XmlSchemaKeyref))]
	[XmlElement("unique", typeof(XmlSchemaUnique))]
	[XmlElement("key", typeof(XmlSchemaKey))]
	public XmlSchemaObjectCollection Constraints => null;

	internal bool HasConstraints => false;

	[XmlIgnore]
	internal override string NameAttribute
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	[XmlIgnore]
	internal override string NameString => null;

	internal void SetQualifiedName(XmlQualifiedName value)
	{
	}

	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	internal XmlSchemaObject Clone(XmlSchema parentSchema)
	{
		return null;
	}
}
