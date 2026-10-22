namespace System.Xml.Schema;

internal sealed class SchemaEntity : IDtdEntityInfo
{
	private XmlQualifiedName qname;

	private string url;

	private string pubid;

	private string text;

	private XmlQualifiedName ndata;

	private int lineNumber;

	private int linePosition;

	private bool isParameter;

	private bool isExternal;

	private bool parsingInProgress;

	private bool isDeclaredInExternal;

	private string baseURI;

	private string declaredURI;

	string IDtdEntityInfo.Name => null;

	bool IDtdEntityInfo.IsExternal => false;

	bool IDtdEntityInfo.IsDeclaredInExternal => false;

	bool IDtdEntityInfo.IsUnparsedEntity => false;

	bool IDtdEntityInfo.IsParameterEntity => false;

	string IDtdEntityInfo.BaseUriString => null;

	string IDtdEntityInfo.DeclaredUriString => null;

	string IDtdEntityInfo.SystemId => null;

	string IDtdEntityInfo.PublicId => null;

	string IDtdEntityInfo.Text => null;

	int IDtdEntityInfo.LineNumber => 0;

	int IDtdEntityInfo.LinePosition => 0;

	internal string Url
	{
		set
		{
		}
	}

	internal string Text
	{
		set
		{
		}
	}

	internal string BaseURI => null;

	internal string DeclaredURI
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	internal SchemaEntity(XmlQualifiedName qname, bool isParameter)
	{
	}

	internal static bool IsPredefinedEntity(string n)
	{
		return false;
	}
}
