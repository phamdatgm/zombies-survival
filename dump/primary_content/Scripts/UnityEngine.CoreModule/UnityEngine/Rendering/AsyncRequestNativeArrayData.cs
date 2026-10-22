using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[UsedByNativeCode]
internal struct AsyncRequestNativeArrayData
{
	public unsafe void* nativeArrayBuffer;

	public long lengthInBytes;
}
