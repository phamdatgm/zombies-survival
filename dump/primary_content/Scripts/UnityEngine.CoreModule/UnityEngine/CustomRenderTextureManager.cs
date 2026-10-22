using System;
using System.Runtime.CompilerServices;
using UnityEngine.Scripting;

namespace UnityEngine;

public static class CustomRenderTextureManager
{
	[CompilerGenerated]
	private static Action<CustomRenderTexture> textureLoaded;

	[CompilerGenerated]
	private static Action<CustomRenderTexture> textureUnloaded;

	[RequiredByNativeCode]
	private static void InvokeOnTextureLoaded_Internal(CustomRenderTexture source)
	{
	}

	[RequiredByNativeCode]
	private static void InvokeOnTextureUnloaded_Internal(CustomRenderTexture source)
	{
	}
}
