using System.Diagnostics;

namespace System.Runtime.CompilerServices;

[DebuggerStepThrough]
public static class CallSiteOps
{
	[Obsolete("do not use this method", true)]
	public static CallSite<T> CreateMatchmaker<T>(CallSite<T> site) where T : class
	{
		return null;
	}

	[Obsolete("do not use this method", true)]
	public static bool SetNotMatched(CallSite site)
	{
		return false;
	}

	[Obsolete("do not use this method", true)]
	public static bool GetMatch(CallSite site)
	{
		return false;
	}

	[Obsolete("do not use this method", true)]
	public static void ClearMatch(CallSite site)
	{
	}

	[Obsolete("do not use this method", true)]
	public static void AddRule<T>(CallSite<T> site, T rule) where T : class
	{
	}

	[Obsolete("do not use this method", true)]
	public static void UpdateRules<T>(CallSite<T> @this, int matched) where T : class
	{
	}

	[Obsolete("do not use this method", true)]
	public static T[] GetRules<T>(CallSite<T> site) where T : class
	{
		return null;
	}

	[Obsolete("do not use this method", true)]
	public static RuleCache<T> GetRuleCache<T>(CallSite<T> site) where T : class
	{
		return null;
	}

	[Obsolete("do not use this method", true)]
	public static void MoveRule<T>(RuleCache<T> cache, T rule, int i) where T : class
	{
	}

	[Obsolete("do not use this method", true)]
	public static T[] GetCachedRules<T>(RuleCache<T> cache) where T : class
	{
		return null;
	}

	[Obsolete("do not use this method", true)]
	public static T Bind<T>(CallSiteBinder binder, CallSite<T> site, object[] args) where T : class
	{
		return null;
	}
}
