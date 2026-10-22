namespace System.Xml.Serialization;

internal class EnumMap : ObjectMap
{
	public class EnumMapMember
	{
		private readonly string _xmlName;

		private readonly string _enumName;

		private readonly long _value;

		public EnumMapMember(string xmlName, string enumName, long value)
		{
		}
	}

	private readonly EnumMapMember[] _members;

	private readonly bool _isFlags;

	private readonly string[] _enumNames;

	private readonly string[] _xmlNames;

	private readonly long[] _values;

	public EnumMap(EnumMapMember[] members, bool isFlags)
	{
	}

	public string GetXmlName(string typeName, object enumValue)
	{
		return null;
	}

	public string GetEnumName(string typeName, string xmlName)
	{
		return null;
	}
}
