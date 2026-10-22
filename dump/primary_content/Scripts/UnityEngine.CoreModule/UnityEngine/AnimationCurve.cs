using System;
using System.Reflection;
using System.Runtime.InteropServices;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[DefaultMember("Item")]
[RequiredByNativeCode]
public class AnimationCurve : IEquatable<AnimationCurve>
{
	internal IntPtr m_Ptr;

	private static void Internal_Destroy(IntPtr ptr)
	{
	}

	private static IntPtr Internal_Create(Keyframe[] keys)
	{
		return (IntPtr)0;
	}

	private bool Internal_Equals(IntPtr other)
	{
		return false;
	}

	~AnimationCurve()
	{
	}

	public override int GetHashCode()
	{
		return 0;
	}

	public AnimationCurve(params Keyframe[] keys)
	{
	}

	[RequiredByNativeCode]
	public AnimationCurve()
	{
	}

	public override bool Equals(object o)
	{
		return false;
	}

	public bool Equals(AnimationCurve other)
	{
		return false;
	}
}
