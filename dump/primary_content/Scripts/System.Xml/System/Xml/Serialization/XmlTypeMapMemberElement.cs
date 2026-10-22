namespace System.Xml.Serialization;

internal class XmlTypeMapMemberElement : XmlTypeMapMember
{
	private XmlTypeMapElementInfoList _elementInfo;

	private string _choiceMember;

	private bool _isTextCollector;

	private TypeData _choiceTypeData;

	public XmlTypeMapElementInfoList ElementInfo => null;

	public XmlTypeMapElementInfo FindElement(object ob, object memberValue)
	{
		return null;
	}

	public void SetChoice(object ob, object choice)
	{
	}
}
