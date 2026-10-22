using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;

namespace System.Data.SqlTypes;

[Serializable]
[XmlSchemaProvider("GetXsdType")]
public struct SqlInt16 : INullable, IComparable, IXmlSerializable
{
	private bool m_fNotNull = false;

	private short m_value = 0;

	private static readonly int s_MASKI2;

	public static readonly SqlInt16 Null;

	public static readonly SqlInt16 Zero;

	public static readonly SqlInt16 MinValue;

	public static readonly SqlInt16 MaxValue;

	public bool IsNull => false;

	public short Value => 0;

	private SqlInt16(bool fNull)
	{
	}

	public SqlInt16(short value)
	{
	}

	public static implicit operator SqlInt16(short x)
	{
		return default;
	}

	public override string ToString()
	{
		return null;
	}

	public static SqlInt16 operator -(SqlInt16 x)
	{
		return default;
	}

	public static SqlInt16 operator +(SqlInt16 x, SqlInt16 y)
	{
		return default;
	}

	public static SqlInt16 operator -(SqlInt16 x, SqlInt16 y)
	{
		return default;
	}

	public static SqlInt16 operator *(SqlInt16 x, SqlInt16 y)
	{
		return default;
	}

	public static SqlInt16 operator /(SqlInt16 x, SqlInt16 y)
	{
		return default;
	}

	public static implicit operator SqlInt16(SqlByte x)
	{
		return default;
	}

	public static explicit operator SqlInt16(SqlInt64 x)
	{
		return default;
	}

	public static SqlBoolean operator ==(SqlInt16 x, SqlInt16 y)
	{
		return default;
	}

	public static SqlBoolean operator <(SqlInt16 x, SqlInt16 y)
	{
		return default;
	}

	public static SqlBoolean operator >(SqlInt16 x, SqlInt16 y)
	{
		return default;
	}

	public static SqlBoolean LessThan(SqlInt16 x, SqlInt16 y)
	{
		return default;
	}

	public static SqlBoolean GreaterThan(SqlInt16 x, SqlInt16 y)
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

	public int CompareTo(SqlInt16 value)
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
