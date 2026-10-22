namespace System.Diagnostics.Tracing;

/// <summary>Provides the ability to create events for event tracing for Windows (ETW).</summary>
public class EventSource : IDisposable
{
	private string Name;

	/// <summary>Creates a new instance of the <see cref="T:System.Diagnostics.Tracing.EventSource" /> class.</summary>
	protected EventSource()
	{
	}

	/// <summary>Creates a new instance of the <see cref="T:System.Diagnostics.Tracing.EventSource" /> class with the specified name.</summary>
	/// <param name="eventSourceName">The name to apply to the event source. Must not be <see langword="null" />.</param>
	/// <exception cref="T:System.ArgumentNullException">
	///   <paramref name="eventSourceName" /> is <see langword="null" />.</exception>
	public EventSource(string eventSourceName)
	{
	}

	internal EventSource(Guid eventSourceGuid, string eventSourceName)
	{
	}

	/// <summary>Allows the <see cref="T:System.Diagnostics.Tracing.EventSource" /> object to attempt to free resources and perform other cleanup operations before the  object is reclaimed by garbage collection.</summary>
	~EventSource()
	{
	}

	/// <summary>Releases all resources used by the current instance of the <see cref="T:System.Diagnostics.Tracing.EventSource" /> class.</summary>
	public void Dispose()
	{
	}

	/// <summary>Writes an event by using the provided event identifier and 64-bit integer argument.</summary>
	/// <param name="eventId">The event identifier.  This value should be between 0 and 65535.</param>
	/// <param name="arg1">A 64 bit integer argument.</param>
	protected void WriteEvent(int eventId, long arg1)
	{
	}
}
