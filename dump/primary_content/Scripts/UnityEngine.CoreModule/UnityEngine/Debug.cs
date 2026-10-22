using System;
using UnityEngine.Scripting;

namespace UnityEngine;

public class Debug
{
	internal static readonly ILogger s_DefaultLogger;

	internal static ILogger s_Logger;

	public static ILogger unityLogger => null;

	public unsafe static int ExtractStackTraceNoAlloc(byte* buffer, int bufferMax, string projectFolder)
	{
		return 0;
	}

	public static void Log(object message)
	{
	}

	public static void LogFormat(LogType logType, LogOption logOptions, Object context, string format, params object[] args)
	{
	}

	public static void LogError(object message)
	{
	}

	public static void LogError(object message, Object context)
	{
	}

	public static void LogErrorFormat(string format, params object[] args)
	{
	}

	public static void LogErrorFormat(Object context, string format, params object[] args)
	{
	}

	public static void LogException(Exception exception)
	{
	}

	public static void LogException(Exception exception, Object context)
	{
	}

	public static void LogWarning(object message)
	{
	}

	public static void LogWarning(object message, Object context)
	{
	}

	public static void LogWarningFormat(string format, params object[] args)
	{
	}

	public static void LogWarningFormat(Object context, string format, params object[] args)
	{
	}

	public static void Assert(bool condition)
	{
	}

	public static void Assert(bool condition, string message)
	{
	}

	public static void LogAssertion(object message)
	{
	}

	public static void LogAssertionFormat(string format, params object[] args)
	{
	}

	[RequiredByNativeCode]
	internal static bool CallOverridenDebugHandler(Exception exception, Object obj)
	{
		return false;
	}

	[RequiredByNativeCode]
	internal static bool IsLoggingEnabled()
	{
		return false;
	}
}
