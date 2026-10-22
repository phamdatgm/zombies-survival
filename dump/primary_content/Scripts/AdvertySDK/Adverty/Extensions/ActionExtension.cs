using System;

namespace Adverty.Extensions;

public static class ActionExtension
{
	public static void SafeInvoke(this Action action)
	{
	}

	public static void SafeInvoke<T>(this Action<T> action, T value)
	{
	}

	public static void SafeInvoke<T, W>(this Action<T, W> action, T aValue, W bValue)
	{
	}

	public static void SafeInvoke<T, W, U>(this Action<T, W, U> action, T aValue, W bValue, U cValue)
	{
	}

	public static void SafeInvoke<T, W, U, V>(this Action<T, W, U, V> action, T aValue, W bValue, U cValue, V dValue)
	{
	}

	public static bool IsNull(this Action action)
	{
		return false;
	}

	public static bool IsNull<T>(this Action<T> action)
	{
		return false;
	}

	public static bool IsNull<T, W>(this Action<T, W> action)
	{
		return false;
	}

	public static bool IsNull<T, W, U>(this Action<T, W, U> action)
	{
		return false;
	}

	public static IntPtr ToIntPtr(this Action action)
	{
		return (IntPtr)0;
	}

	public static IntPtr ToIntPtr<T>(this Action<T> action)
	{
		return (IntPtr)0;
	}

	public static IntPtr ToIntPtr<T, W>(this Action<T, W> action)
	{
		return (IntPtr)0;
	}

	public static IntPtr ToIntPtr<T, W, U>(this Action<T, W, U> action)
	{
		return (IntPtr)0;
	}
}
