using System.Xml.Serialization;

namespace System.Xml.Schema;

public class XmlSchemaType : XmlSchemaAnnotated
{
	private string name;

	private XmlSchemaDerivationMethod final;

	private XmlSchemaDerivationMethod derivedBy;

	private XmlSchemaType baseSchemaType;

	private XmlSchemaDatatype datatype;

	private XmlSchemaDerivationMethod finalResolved;

	private SchemaElementDecl elementDecl;

	private XmlQualifiedName qname;

	private XmlSchemaType redefined;

	private XmlSchemaContentType contentType;

	[XmlIgnore]
	public XmlQualifiedName QualifiedName => null;

	[XmlIgnore]
	public virtual bool IsMixed
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	[XmlIgnore]
	public XmlTypeCode TypeCode => XmlTypeCode.None;

	[XmlIgnore]
	internal XmlValueConverter ValueConverter => null;

	internal SchemaElementDecl ElementDecl
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

	public static XmlSchemaSimpleType GetBuiltInSimpleType(XmlQualifiedName qualifiedName)
	{
		return null;
	}

	public static XmlSchemaSimpleType GetBuiltInSimpleType(XmlTypeCode typeCode)
	{
		return null;
	}

	public static XmlSchemaComplexType GetBuiltInComplexType(XmlQualifiedName qualifiedName)
	{
		return null;
	}

	internal void SetQualifiedName(XmlQualifiedName value)
	{
	}

	public static bool IsDerivedFrom(XmlSchemaType derivedType, XmlSchemaType baseType, XmlSchemaDerivationMethod except)
	{
		return false;
	}

	internal static bool IsDerivedFromDatatype(XmlSchemaDatatype derivedDataType, XmlSchemaDatatype baseDataType, XmlSchemaDerivationMethod except)
	{
		return false;
	}
}
