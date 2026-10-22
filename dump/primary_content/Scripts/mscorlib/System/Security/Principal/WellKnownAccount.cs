namespace System.Security.Principal;

internal class WellKnownAccount
{
	private WellKnownSidType WellKnownValue;

	private bool IsAbsolute;

	private string Sid;

	private string Rid;

	private string Name;

	private string SddlForm;

	private static readonly WellKnownAccount[] accounts;

	public static WellKnownAccount LookupBySddlForm(string s)
	{
		return null;
	}
}
