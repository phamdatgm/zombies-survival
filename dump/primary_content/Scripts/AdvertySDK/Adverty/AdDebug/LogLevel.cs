using System;

namespace Adverty.AdDebug;

[Flags]
public enum LogLevel
{
	None = 0,
	Debug = 1,
	Warning = 2,
	Error = 4
}
