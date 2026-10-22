using System;
using System.Runtime.CompilerServices;
using UnityEngine.Scripting;

namespace UnityEngine;

[RequireComponent(typeof(RectTransform))]
public sealed class Canvas : Behaviour
{
	public delegate void WillRenderCanvases();

	[CompilerGenerated]
	private static WillRenderCanvases m_preWillRenderCanvases;

	[CompilerGenerated]
	private static WillRenderCanvases m_willRenderCanvases;

	public RenderMode renderMode
	{
		get
		{
			return RenderMode.ScreenSpaceOverlay;
		}
		set
		{
		}
	}

	public bool isRootCanvas => false;

	public float scaleFactor
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public float referencePixelsPerUnit
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public bool pixelPerfect => false;

	public int renderOrder => 0;

	public bool overrideSorting
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public int sortingOrder
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public int targetDisplay => 0;

	public int sortingLayerID
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public Canvas rootCanvas => null;

	public Vector2 renderingDisplaySize => default;

	internal static Action<int> externBeginRenderOverlays { get; set; }

	internal static Action<int, int> externRenderOverlaysBefore { get; set; }

	internal static Action<int> externEndRenderOverlays { get; set; }

	public Camera worldCamera
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public static event WillRenderCanvases preWillRenderCanvases
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static event WillRenderCanvases willRenderCanvases
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	internal static void SetExternalCanvasEnabled(bool enabled)
	{
	}

	public static Material GetDefaultCanvasMaterial()
	{
		return null;
	}

	public static Material GetETC1SupportedCanvasMaterial()
	{
		return null;
	}

	public static void ForceUpdateCanvases()
	{
	}

	[RequiredByNativeCode]
	private static void SendPreWillRenderCanvases()
	{
	}

	[RequiredByNativeCode]
	private static void SendWillRenderCanvases()
	{
	}

	[RequiredByNativeCode]
	private static void BeginRenderExtraOverlays(int displayIndex)
	{
	}

	[RequiredByNativeCode]
	private static void RenderExtraOverlaysBefore(int displayIndex, int sortingOrder)
	{
	}

	[RequiredByNativeCode]
	private static void EndRenderExtraOverlays(int displayIndex)
	{
	}

	[SpecialName]
	private void get_renderingDisplaySize_Injected(out Vector2 ret)
	{
		ret = default;
	}
}
