using System.Reflection;
using UnityEngine.Scripting;

namespace UnityEngine;

[UsedByNativeCode]
[DefaultMember("Item")]
public class AnimatorOverrideController : RuntimeAnimatorController
{
	internal delegate void OnOverrideControllerDirtyCallback();

	internal OnOverrideControllerDirtyCallback OnOverrideControllerDirty;

	[RequiredByNativeCode]
	internal static void OnInvalidateOverrideController(AnimatorOverrideController controller)
	{
	}
}
