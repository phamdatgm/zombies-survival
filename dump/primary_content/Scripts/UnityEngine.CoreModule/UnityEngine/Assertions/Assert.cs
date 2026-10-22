using System;
using System.Collections.Generic;
using System.Diagnostics;

namespace UnityEngine.Assertions;

[DebuggerStepThrough]
public static class Assert
{
	[Obsolete("Future versions of Unity are expected to always throw exceptions and not have this field.")]
	public static bool raiseExceptions;

	private static void Fail(string message, string userMessage)
	{
	}

	public static void IsTrue(bool condition)
	{
	}

	public static void IsTrue(bool condition, string message)
	{
	}

	public static void IsFalse(bool condition, string message)
	{
	}

	public static void AreEqual<T>(T expected, T actual)
	{
	}

	public static void AreEqual<T>(T expected, T actual, string message)
	{
	}

	public static void AreEqual<T>(T expected, T actual, string message, IEqualityComparer<T> comparer)
	{
	}

	public static void AreEqual(Object expected, Object actual, string message)
	{
	}

	public static void IsNull<T>(T value) where T : class
	{
	}

	public static void IsNull<T>(T value, string message) where T : class
	{
	}

	public static void IsNull(Object value, string message)
	{
	}

	public static void IsNotNull<T>(T value) where T : class
	{
	}

	public static void IsNotNull<T>(T value, string message) where T : class
	{
	}

	public static void IsNotNull(Object value, string message)
	{
	}

	public static void AreEqual(int expected, int actual)
	{
	}
}
