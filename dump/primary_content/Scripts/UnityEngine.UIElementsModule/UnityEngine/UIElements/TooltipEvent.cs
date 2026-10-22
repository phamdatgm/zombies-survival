namespace UnityEngine.UIElements;

[EventCategory(EventCategory.Tooltip)]
public class TooltipEvent : EventBase<TooltipEvent>
{
	public string tooltip { set; }

	public Rect rect { set; }

	static TooltipEvent()
	{
	}

	protected override void Init()
	{
	}

	private void LocalInit()
	{
	}
}
