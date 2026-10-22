using System;
using System.Collections.Generic;

namespace UnityEngine.Purchasing;

internal static class EnumerableExtensions
{
	public static IEnumerable<T> NonNull<T>(this IEnumerable<T> enumerable)
	{
		return null;
	}

	public static IEnumerable<T> IgnoreExceptions<T, TException>(this IEnumerable<T> enumerable, Action<TException> onException = null) where TException : Exception
	{
		return null;
	}
}
