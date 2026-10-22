using System;
using System.Collections.Generic;

namespace UnityEngine.Rendering;

public struct ScriptableRenderContext : IEquatable<ScriptableRenderContext>
{
	private static readonly ShaderTagId kRenderTypeTag;

	private IntPtr m_Ptr = (IntPtr)0;

	private void GetCameras_Internal(Type listType, object resultList)
	{
	}

	internal ScriptableRenderContext(IntPtr ptr)
	{
	}

	internal void GetCameras(List<Camera> results)
	{
	}

	public bool Equals(ScriptableRenderContext other)
	{
		return false;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}

	private static void GetCameras_Internal_Injected(ref ScriptableRenderContext _unity_self, Type listType, object resultList)
	{
	}
}
