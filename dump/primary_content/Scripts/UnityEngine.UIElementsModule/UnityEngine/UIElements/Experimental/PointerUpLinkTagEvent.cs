namespace UnityEngine.UIElements.Experimental;

public class PointerUpLinkTagEvent : PointerEventBase<PointerUpLinkTagEvent>
{
	private string linkID { set; }

	private string linkText { set; }

	static PointerUpLinkTagEvent()
	{
	}

	protected override void Init()
	{
	}

	private void LocalInit()
	{
	}

	public static PointerUpLinkTagEvent GetPooled(IPointerEvent evt, string linkID, string linkText)
	{
		return null;
	}
}
