using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;

namespace System.Data.SqlTypes;

[Serializable]
[XmlSchemaProvider("GetXsdType")]
public struct SqlByte : INullable, IComparable, IXmlSerializable
{
	private bool m_fNotNull = false;

	private byte m_value = 0;

	private static readonly int s_iBitNotByteMax;

	public static readonly SqlByte Null;

	public static readonly SqlByte Zero;

	public static readonly SqlByte MinValue;

	public static readonly SqlByte MaxValue;

	public bool IsNull => false;

	public byte Value => 0;

	private SqlByte(bool fNull)
	{
	}

	public SqlByte(byte value)
	{
	}

	public static implicit operator SqlByte(byte x)
	{
		return default;
	}

	public override string ToString()
	{
		return null;
	}

	public static SqlByte operator +(SqlByte x, SqlByte y)
	{
		return default;
	}

	public static SqlByte operator -(SqlByte x, SqlByte y)
	{
		return default;
	}

	public static SqlByte operator *(SqlByte x, SqlByte y)
	{
		return default;
	}

	public static SqlByte operator /(SqlByte x, SqlByte y)
	{
		return default;
	}

	public static explicit operator SqlByte(SqlInt64 x)
	{
		return default;
	}

	public static SqlBoolean operator ==(SqlByte x, SqlByte y)
	{
		return default;
	}

	public static SqlBoolean operator <(SqlByte x, SqlByte y)
	{
		return default;
	}

	public static SqlBoolean operator >(SqlByte x, SqlByte y)
	{
		return default;
	}

	public static SqlBoolean LessThan(SqlByte x, SqlByte y)
	{
		return default;
	}

	public static SqlBoolean GreaterThan(SqlByte x, SqlByte y)
	{
		return default;
	}

	public SqlDouble ToSqlDouble()
	{
		return default;
	}

	public SqlInt64 ToSqlInt64()
	{
		return default;
	}

	public int CompareTo(object value)
	{
		return 0;
	}

	public int CompareTo(SqlByte value)
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
