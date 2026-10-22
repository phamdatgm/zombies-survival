using System.Collections;
using System.Collections.Generic;

namespace UnityEngine.UIElements;

internal struct StartDragArgs(string title, DragVisualMode visualMode)
{
	public string title { get; } = null;

	public DragVisualMode visualMode { get; } = DragVisualMode.None;

	internal Hashtable genericData { get; private set; } = null;

	internal IEnumerable<Object> unityObjectReferences { get; private set; } = null;

	public void SetGenericData(string key, object data)
	{
	}
}
