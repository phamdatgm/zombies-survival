using System;

namespace UnityEngine;

internal sealed class DebugLogHandler : ILogHandler
{
	internal static void Internal_Log(LogType level, LogOption options, string msg, Object obj)
	{
	}

	internal static void Internal_LogException(Exception ex, Object obj)
	{
	}

	public void LogFormat(LogType logType, Object context, string format, params object[] args)
	{
	}

	public void LogFormat(LogType logType, LogOption logOptions, Object context, string format, params object[] args)
	{
	}

	public void LogException(Exception exception, Object context)
	{
	}
}
