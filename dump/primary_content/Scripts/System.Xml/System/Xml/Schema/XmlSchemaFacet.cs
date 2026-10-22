using System.ComponentModel;
using System.Xml.Serialization;

namespace System.Xml.Schema;

public abstract class XmlSchemaFacet : XmlSchemaAnnotated
{
	private string value;

	private bool isFixed;

	private FacetType facetType;

	[DefaultValue(false)]
	[XmlAttribute("fixed")]
	public virtual bool IsFixed
	{
		set
		{
		}
	}
}
