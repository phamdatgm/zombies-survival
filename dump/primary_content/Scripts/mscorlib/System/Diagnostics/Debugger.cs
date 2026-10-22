namespace System.Diagnostics;

/// <summary>Enables communication with a debugger. This class cannot be inherited.</summary>
public sealed class Debugger
{
	/// <summary>Represents the default category of message with a constant.</summary>
	public static readonly string DefaultCategory;

	/// <summary>Notifies a debugger that execution is about to enter a path that involves a cross-thread dependency.</summary>
	public static void NotifyOfCrossThreadDependency()
	{
	}
}
