using System.Collections.Generic;

namespace System.Runtime.Serialization;

/// <summary>Provides data for the <see cref="E:System.Exception.SerializeObjectState" /> event.</summary>
public sealed class SafeSerializationEventArgs : EventArgs
{
	private StreamingContext m_streamingContext;

	private List<object> m_serializedStates;

	internal SafeSerializationEventArgs(StreamingContext streamingContext)
	{
	}
}
