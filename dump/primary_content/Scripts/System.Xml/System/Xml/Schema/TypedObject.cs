namespace System.Xml.Schema;

internal class TypedObject
{
	private class DecimalStruct
	{
		private bool isDecimal;

		private decimal[] dvalue;

		public DecimalStruct()
		{
		}

		public DecimalStruct(int dim)
		{
		}
	}

	private DecimalStruct dstruct;

	private object ovalue;

	private string svalue;

	private XmlSchemaDatatype xsdtype;

	private int dim;

	private bool isList;

	public bool IsDecimal => false;

	public decimal[] Dvalue => null;

	public TypedObject(object obj, string svalue, XmlSchemaDatatype xsdtype)
	{
	}

	public override string ToString()
	{
		return null;
	}

	public void SetDecimal()
	{
	}

	private bool ListDValueEquals(TypedObject other)
	{
		return false;
	}

	public bool Equals(TypedObject other)
	{
		return false;
	}
}
