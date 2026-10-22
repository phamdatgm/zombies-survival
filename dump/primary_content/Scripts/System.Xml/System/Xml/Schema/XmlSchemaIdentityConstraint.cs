using System.Xml.Serialization;

namespace System.Xml.Schema;

public class XmlSchemaIdentityConstraint : XmlSchemaAnnotated
{
	private string name;

	private XmlSchemaXPath selector;

	private XmlSchemaObjectCollection fields;

	private XmlQualifiedName qualifiedName;

	private CompiledIdentityConstraint compiledConstraint;

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
}
