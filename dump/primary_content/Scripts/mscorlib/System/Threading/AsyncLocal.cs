namespace System.Threading;

/// <summary>Represents ambient data that is local to a given asynchronous control flow, such as an asynchronous method.</summary>
/// <typeparam name="T">The type of the ambient data.</typeparam>
public sealed class AsyncLocal<T> : IAsyncLocal
{
	private readonly Action<AsyncLocalValueChangedArgs<T>> m_valueChangedHandler;

	/// <summary>Gets or sets the value of the ambient data.</summary>
	/// <returns>The value of the ambient data. If no value has been set, the returned value is default(T).</returns>
	public T Value
	{
		set
		{
		}
	}

	/// <summary>Instantiates an <see cref="T:System.Threading.AsyncLocal`1" /> local instance that receives change notifications.</summary>
	/// <param name="valueChangedHandler">The delegate that is called whenever the current value changes on any thread.</param>
	public AsyncLocal(Action<AsyncLocalValueChangedArgs<T>> valueChangedHandler)
	{
	}

	void IAsyncLocal.OnValueChanged(object previousValueObj, object currentValueObj, bool contextChanged)
	{
	}
}
