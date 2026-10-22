using System.Xml.Schema;

namespace System.Xml.Serialization;

internal class XmlTypeMapElementInfo
{
	private string _elementName;

	private string _namespace;

	private XmlSchemaForm _form;

	private XmlTypeMapMember _member;

	private object _choiceValue;

	private bool _isNullable;

	private int _nestingLevel;

	private XmlTypeMapping _mappedType;

	private TypeData _type;

	private bool _wrappedElement;

	private int _explicitOrder;

	public string ElementName
	{
		set
		{
		}
	}

	public string Namespace
	{
		set
		{
		}
	}

	public string DataTypeNamespace => null;

	public string DataTypeName => null;

	public XmlSchemaForm Form
	{
		set
		{
		}
	}

	public bool IsNullable
	{
		set
		{
		}
	}

	public bool MultiReferenceType => false;

	public bool IsTextElement
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public bool IsUnnamedAnyElement
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public int ExplicitOrder
	{
		set
		{
		}
	}

	public XmlTypeMapElementInfo(XmlTypeMapMember member, TypeData type)
	{
	}

	public override bool Equals(object other)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}
}
