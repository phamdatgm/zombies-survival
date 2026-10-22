using System.Collections;

namespace System.Xml.Serialization;

public abstract class XmlMapping
{
	private ObjectMap map;

	private ArrayList relatedMaps;

	private SerializationFormat format;

	private SerializationSource source;

	internal string _elementName;

	internal string _namespace;

	private string key;

	internal XmlMapping(string elementName, string ns)
	{
	}
}
