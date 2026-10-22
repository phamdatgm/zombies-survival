using System.ComponentModel;
using System.Xml.Serialization;

namespace System.Xml.Schema;

public class XmlSchemaComplexType : XmlSchemaType
{
	private XmlSchemaDerivationMethod block;

	private XmlSchemaContentModel contentModel;

	private XmlSchemaParticle particle;

	private XmlSchemaObjectCollection attributes;

	private XmlSchemaAnyAttribute anyAttribute;

	private XmlSchemaParticle contentTypeParticle;

	private XmlSchemaDerivationMethod blockResolved;

	private XmlSchemaObjectTable localElements;

	private XmlSchemaObjectTable attributeUses;

	private XmlSchemaAnyAttribute attributeWildcard;

	private static XmlSchemaComplexType anyTypeLax;

	private static XmlSchemaComplexType anyTypeSkip;

	private static XmlSchemaComplexType untypedAnyType;

	private byte pvFlags;

	internal static ContentValidator AnyTypeContentValidator => null;

	[XmlAttribute("abstract")]
	[DefaultValue(false)]
	public bool IsAbstract
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	[DefaultValue(false)]
	[XmlAttribute("mixed")]
	public override bool IsMixed
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	[XmlElement("attributeGroup", typeof(XmlSchemaAttributeGroupRef))]
	[XmlElement("attribute", typeof(XmlSchemaAttribute))]
	public XmlSchemaObjectCollection Attributes => null;

	[XmlIgnore]
	public XmlSchemaObjectTable AttributeUses => null;

	[XmlIgnore]
	internal XmlSchemaObjectTable LocalElements => null;

	internal bool HasWildCard
	{
		set
		{
		}
	}

	static XmlSchemaComplexType()
	{
	}

	private static XmlSchemaComplexType CreateAnyType(XmlSchemaContentProcessing processContents)
	{
		return null;
	}

	internal bool ContainsIdAttribute(bool findAll)
	{
		return false;
	}

	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	internal XmlSchemaObject Clone(XmlSchema parentSchema)
	{
		return null;
	}

	private void ClearCompiledState()
	{
	}

	internal static XmlSchemaObjectCollection CloneAttributes(XmlSchemaObjectCollection attributes)
	{
		return null;
	}

	private static XmlSchemaObjectCollection CloneGroupBaseParticles(XmlSchemaObjectCollection groupBaseParticles, XmlSchema parentSchema)
	{
		return null;
	}

	internal static XmlSchemaParticle CloneParticle(XmlSchemaParticle particle, XmlSchema parentSchema)
	{
		return null;
	}

	private static XmlSchemaForm GetResolvedElementForm(XmlSchema parentSchema, XmlSchemaElement element)
	{
		return XmlSchemaForm.None;
	}

	internal static bool HasParticleRef(XmlSchemaParticle particle, XmlSchema parentSchema)
	{
		return false;
	}

	internal static bool HasAttributeQNameRef(XmlSchemaObjectCollection attributes)
	{
		return false;
	}
}
