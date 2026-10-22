using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;

namespace System.Data.SqlTypes;

[Serializable]
[XmlSchemaProvider("GetXsdType")]
public struct SqlSingle : INullable, IComparable, IXmlSerializable
{
	private bool _fNotNull = false;

	private float _value = 0f;

	public static readonly SqlSingle Null;

	public static readonly SqlSingle Zero;

	public static readonly SqlSingle MinValue;

	public static readonly SqlSingle MaxValue;

	public bool IsNull => false;

	public float Value => 0f;

	private SqlSingle(bool fNull)
	{
	}

	public SqlSingle(float value)
	{
	}

	public SqlSingle(double value)
	{
	}

	public static implicit operator SqlSingle(float x)
	{
		return default;
	}

	public override string ToString()
	{
		return null;
	}

	public static SqlSingle operator -(SqlSingle x)
	{
		return default;
	}

	public static SqlSingle operator +(SqlSingle x, SqlSingle y)
	{
		return default;
	}

	public static SqlSingle operator -(SqlSingle x, SqlSingle y)
	{
		return default;
	}

	public static SqlSingle operator *(SqlSingle x, SqlSingle y)
	{
		return default;
	}

	public static SqlSingle operator /(SqlSingle x, SqlSingle y)
	{
		return default;
	}

	public static implicit operator SqlSingle(SqlByte x)
	{
		return default;
	}

	public static implicit operator SqlSingle(SqlInt16 x)
	{
		return default;
	}

	public static implicit operator SqlSingle(SqlInt32 x)
	{
		return default;
	}

	public static implicit operator SqlSingle(SqlInt64 x)
	{
		return default;
	}

	public static implicit operator SqlSingle(SqlMoney x)
	{
		return default;
	}

	public static implicit operator SqlSingle(SqlDecimal x)
	{
		return default;
	}

	public static explicit operator SqlSingle(SqlDouble x)
	{
		return default;
	}

	public static SqlBoolean operator ==(SqlSingle x, SqlSingle y)
	{
		return default;
	}

	public static SqlBoolean operator <(SqlSingle x, SqlSingle y)
	{
		return default;
	}

	public static SqlBoolean operator >(SqlSingle x, SqlSingle y)
	{
		return default;
	}

	public static SqlBoolean LessThan(SqlSingle x, SqlSingle y)
	{
		return default;
	}

	public static SqlBoolean GreaterThan(SqlSingle x, SqlSingle y)
	{
		return default;
	}

	public SqlDouble ToSqlDouble()
	{
		return default;
	}

	public int CompareTo(object value)
	{
		return 0;
	}

	public int CompareTo(SqlSingle value)
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
