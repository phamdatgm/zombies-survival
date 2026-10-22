namespace System.ComponentModel;

/// <summary>Provides data for the <see cref="E:System.ComponentModel.BackgroundWorker.ProgressChanged" /> event.</summary>
public class ProgressChangedEventArgs : EventArgs
{
	private readonly int progressPercentage;

	private readonly object userState;

	/// <summary>Initializes a new instance of the <see cref="T:System.ComponentModel.ProgressChangedEventArgs" /> class.</summary>
	/// <param name="progressPercentage">The percentage of an asynchronous task that has been completed.</param>
	/// <param name="userState">A unique user state.</param>
	public ProgressChangedEventArgs(int progressPercentage, object userState)
	{
	}
}
