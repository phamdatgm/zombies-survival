using System.Xml.Serialization;

namespace System.Xml.Schema;

public class XmlSchemaGroup : XmlSchemaAnnotated
{
	private string name;

	private XmlSchemaGroupBase particle;

	private XmlSchemaParticle canonicalParticle;

	private XmlQualifiedName qname;

	private XmlSchemaGroup redefined;

	private int selfReferenceCount;

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

	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	internal XmlSchemaObject Clone(XmlSchema parentSchema)
	{
		return null;
	}
}
