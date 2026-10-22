namespace System;

/// <summary>Provides data for the <see cref="E:System.Console.CancelKeyPress" /> event. This class cannot be inherited.</summary>
[Serializable]
public sealed class ConsoleCancelEventArgs : EventArgs
{
	private readonly ConsoleSpecialKey _type;

	private bool Cancel;

	internal ConsoleCancelEventArgs(ConsoleSpecialKey type)
	{
	}

	internal ConsoleCancelEventArgs()
	{
	}
}
