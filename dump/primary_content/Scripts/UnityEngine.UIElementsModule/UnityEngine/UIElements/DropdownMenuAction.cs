using System;

namespace UnityEngine.UIElements;

public class DropdownMenuAction : DropdownMenuItem
{
	[Flags]
	public enum Status
	{
		None = 0,
		Normal = 1,
		Disabled = 2,
		Checked = 4,
		Hidden = 8
	}

	private readonly string name;

	private readonly Action<DropdownMenuAction> actionCallback;

	private readonly Func<DropdownMenuAction, Status> actionStatusCallback;

	private Status status { set; }

	private DropdownMenuEventInfo eventInfo { set; }

	private object userData { set; }

	public static Status AlwaysEnabled(DropdownMenuAction a)
	{
		return Status.None;
	}

	public static Status AlwaysDisabled(DropdownMenuAction a)
	{
		return Status.None;
	}

	public DropdownMenuAction(string actionName, Action<DropdownMenuAction> actionCallback, Func<DropdownMenuAction, Status> actionStatusCallback, object userData = null)
	{
	}

	public void UpdateActionStatus(DropdownMenuEventInfo eventInfo)
	{
	}
}
