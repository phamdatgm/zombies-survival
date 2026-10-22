using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;

namespace System.Data.SqlTypes;

[Serializable]
[XmlSchemaProvider("GetXsdType")]
public struct SqlMoney : INullable, IComparable, IXmlSerializable
{
	private bool _fNotNull = false;

	private long _value = 0L;

	internal static readonly int s_iMoneyScale;

	private static readonly long s_lTickBase;

	private static readonly double s_dTickBase;

	private static readonly long s_minLong;

	private static readonly long s_maxLong;

	public static readonly SqlMoney Null;

	public static readonly SqlMoney Zero;

	public static readonly SqlMoney MinValue;

	public static readonly SqlMoney MaxValue;

	public bool IsNull => false;

	public decimal Value => 0m;

	private SqlMoney(bool fNull)
	{
	}

	internal SqlMoney(long value, int ignored)
	{
	}

	public SqlMoney(int value)
	{
	}

	public SqlMoney(long value)
	{
	}

	public SqlMoney(decimal value)
	{
	}

	public decimal ToDecimal()
	{
		return 0m;
	}

	public double ToDouble()
	{
		return 0.0;
	}

	public static implicit operator SqlMoney(decimal x)
	{
		return default;
	}

	public static implicit operator SqlMoney(long x)
	{
		return default;
	}

	public override string ToString()
	{
		return null;
	}

	public static SqlMoney operator -(SqlMoney x)
	{
		return default;
	}

	public static SqlMoney operator +(SqlMoney x, SqlMoney y)
	{
		return default;
	}

	public static SqlMoney operator -(SqlMoney x, SqlMoney y)
	{
		return default;
	}

	public static SqlMoney operator *(SqlMoney x, SqlMoney y)
	{
		return default;
	}

	public static SqlMoney operator /(SqlMoney x, SqlMoney y)
	{
		return default;
	}

	public static implicit operator SqlMoney(SqlByte x)
	{
		return default;
	}

	public static implicit operator SqlMoney(SqlInt16 x)
	{
		return default;
	}

	public static implicit operator SqlMoney(SqlInt32 x)
	{
		return default;
	}

	public static implicit operator SqlMoney(SqlInt64 x)
	{
		return default;
	}

	public static explicit operator SqlMoney(SqlDecimal x)
	{
		return default;
	}

	public static SqlBoolean operator ==(SqlMoney x, SqlMoney y)
	{
		return default;
	}

	public static SqlBoolean operator <(SqlMoney x, SqlMoney y)
	{
		return default;
	}

	public static SqlBoolean operator >(SqlMoney x, SqlMoney y)
	{
		return default;
	}

	public static SqlBoolean LessThan(SqlMoney x, SqlMoney y)
	{
		return default;
	}

	public static SqlBoolean GreaterThan(SqlMoney x, SqlMoney y)
	{
		return default;
	}

	public SqlDouble ToSqlDouble()
	{
		return default;
	}

	public SqlDecimal ToSqlDecimal()
	{
		return default;
	}

	public int CompareTo(object value)
	{
		return 0;
	}

	public int CompareTo(SqlMoney value)
	{
		return 0;
	}

	public override bool Equals(object value)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}

	XmlSchema IXmlSerializable.GetSchema()
	{
		return null;
	}

	void IXmlSerializable.ReadXml(XmlReader reader)
	{
	}

	void IXmlSerializable.WriteXml(XmlWriter writer)
	{
	}

	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
