namespace System.Threading;

/// <summary>The class that provides data change information to <see cref="T:System.Threading.AsyncLocal`1" /> instances that register for change notifications.</summary>
/// <typeparam name="T">The type of the data.</typeparam>
public struct AsyncLocalValueChangedArgs<T>
{
	private readonly T PreviousValue;

	private readonly T CurrentValue;

	private readonly bool ThreadContextChanged;

	internal AsyncLocalValueChangedArgs(T previousValue, T currentValue, bool contextChanged)
	{
		this.PreviousValue__BackingField = default;
		this.CurrentValue__BackingField = default;
		this.ThreadContextChanged__BackingField = false;
	}
}
