using System;
using UnityEngine.Scripting;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Animations;

[MovedFrom("UnityEngine.Experimental.Animations")]
[RequiredByNativeCode]
public struct AnimationStream
{
	private uint m_AnimatorBindingsVersion;

	private IntPtr constant;

	private IntPtr input;

	private IntPtr output;

	private IntPtr workspace;

	private IntPtr inputStreamAccessor;

	private IntPtr animationHandleBinder;
}
