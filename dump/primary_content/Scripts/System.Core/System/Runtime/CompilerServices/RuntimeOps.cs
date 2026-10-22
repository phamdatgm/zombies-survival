using System.Diagnostics;
using System.Dynamic;

namespace System.Runtime.CompilerServices;

[DebuggerStepThrough]
public static class RuntimeOps
{
	[Obsolete("do not use this method", true)]
	public static bool ExpandoTryGetValue(ExpandoObject expando, object indexClass, int index, string name, bool ignoreCase, out object value)
	{
		value = null;
		return false;
	}

	[Obsolete("do not use this method", true)]
	public static object ExpandoTrySetValue(ExpandoObject expando, object indexClass, int index, object value, string name, bool ignoreCase)
	{
		return null;
	}

	[Obsolete("do not use this method", true)]
	public static bool ExpandoTryDeleteValue(ExpandoObject expando, object indexClass, int index, string name, bool ignoreCase)
	{
		return false;
	}

	[Obsolete("do not use this method", true)]
	public static bool ExpandoCheckVersion(ExpandoObject expando, object version)
	{
		return false;
	}

	[Obsolete("do not use this method", true)]
	public static void ExpandoPromoteClass(ExpandoObject expando, object oldClass, object newClass)
	{
	}
}
