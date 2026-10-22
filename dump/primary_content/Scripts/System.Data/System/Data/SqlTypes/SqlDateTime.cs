using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;

namespace System.Data.SqlTypes;

[Serializable]
[XmlSchemaProvider("GetXsdType")]
public struct SqlDateTime : INullable, IComparable, IXmlSerializable
{
	private bool m_fNotNull = false;

	private int m_day = 0;

	private int m_time = 0;

	private static readonly double s_SQLTicksPerMillisecond;

	public static readonly int SQLTicksPerSecond;

	public static readonly int SQLTicksPerMinute;

	public static readonly int SQLTicksPerHour;

	private static readonly int s_SQLTicksPerDay;

	private static readonly long s_ticksPerSecond;

	private static readonly DateTime s_SQLBaseDate;

	private static readonly long s_SQLBaseDateTicks;

	private static readonly int s_minYear;

	private static readonly int s_maxYear;

	private static readonly int s_minDay;

	private static readonly int s_maxDay;

	private static readonly int s_minTime;

	private static readonly int s_maxTime;

	private static readonly int s_dayBase;

	private static readonly int[] s_daysToMonth365;

	private static readonly int[] s_daysToMonth366;

	private static readonly DateTime s_minDateTime;

	private static readonly DateTime s_maxDateTime;

	private static readonly TimeSpan s_minTimeSpan;

	private static readonly TimeSpan s_maxTimeSpan;

	private static readonly string s_ISO8601_DateTimeFormat;

	private static readonly string[] s_dateTimeFormats;

	public static readonly SqlDateTime MinValue;

	public static readonly SqlDateTime MaxValue;

	public static readonly SqlDateTime Null;

	public bool IsNull => false;

	public DateTime Value => default;

	public int DayTicks => 0;

	public int TimeTicks => 0;

	private SqlDateTime(bool fNull)
	{
	}

	public SqlDateTime(DateTime value)
	{
	}

	public SqlDateTime(int dayTicks, int timeTicks)
	{
	}

	private static TimeSpan ToTimeSpan(SqlDateTime value)
	{
		return default;
	}

	private static DateTime ToDateTime(SqlDateTime value)
	{
		return default;
	}

	private static SqlDateTime FromTimeSpan(TimeSpan value)
	{
		return default;
	}

	private static SqlDateTime FromDateTime(DateTime value)
	{
		return default;
	}

	public static implicit operator SqlDateTime(DateTime value)
	{
		return default;
	}

	public override string ToString()
	{
		return null;
	}

	public static SqlBoolean operator ==(SqlDateTime x, SqlDateTime y)
	{
		return default;
	}

	public static SqlBoolean operator <(SqlDateTime x, SqlDateTime y)
	{
		return default;
	}

	public static SqlBoolean operator >(SqlDateTime x, SqlDateTime y)
	{
		return default;
	}

	public static SqlBoolean LessThan(SqlDateTime x, SqlDateTime y)
	{
		return default;
	}

	public static SqlBoolean GreaterThan(SqlDateTime x, SqlDateTime y)
	{
		return default;
	}

	public int CompareTo(object value)
	{
		return 0;
	}

	public int CompareTo(SqlDateTime value)
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
