using System;

namespace Adverty.Extensions;

public static class FuncExtension
{
	public static T SafeInvoke<T>(this Func<T> action)
	{
		return default;
	}

	public static W SafeInvoke<T, W>(this Func<T, W> action, T aValue)
	{
		return default;
	}
}
