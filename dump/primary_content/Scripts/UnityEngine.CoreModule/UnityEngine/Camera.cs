using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using UnityEngine.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine;

[RequireComponent(typeof(Transform))]
[UsedByNativeCode]
public sealed class Camera : Behaviour
{
	public enum MonoOrStereoscopicEye
	{
		Left = 0,
		Right = 1,
		Mono = 2
	}

	public delegate void CameraCallback(Camera cam);

	public const float kMinAperture = 0.7f;

	public const float kMaxAperture = 32f;

	public const int kMinBladeCount = 3;

	public const int kMaxBladeCount = 11;

	public static CameraCallback onPreCull;

	public static CameraCallback onPreRender;

	public static CameraCallback onPostRender;

	public float nearClipPlane
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public float farClipPlane
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public float fieldOfView
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public RenderingPath renderingPath
	{
		set
		{
		}
	}

	public bool allowHDR
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public bool allowMSAA
	{
		set
		{
		}
	}

	public float orthographicSize
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public bool orthographic
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public float depth => 0f;

	public float aspect => 0f;

	public int cullingMask
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public int eventMask => 0;

	public CameraType cameraType => (CameraType)0;

	public bool useOcclusionCulling
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public CameraClearFlags clearFlags => (CameraClearFlags)0;

	public Rect rect => default;

	public Rect pixelRect => default;

	public int pixelWidth => 0;

	public int pixelHeight => 0;

	public RenderTexture targetTexture => null;

	public int targetDisplay => 0;

	public Matrix4x4 projectionMatrix
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public static Camera main => null;

	public static Camera current => null;

	public StereoTargetEyeMask stereoTargetEye
	{
		set
		{
		}
	}

	public static int allCamerasCount => 0;

	public static Camera[] allCameras => null;

	public void ResetAspect()
	{
	}

	public Vector3 WorldToScreenPoint(Vector3 position, MonoOrStereoscopicEye eye)
	{
		return default;
	}

	public Vector3 WorldToViewportPoint(Vector3 position, MonoOrStereoscopicEye eye)
	{
		return default;
	}

	public Vector3 ScreenToWorldPoint(Vector3 position, MonoOrStereoscopicEye eye)
	{
		return default;
	}

	public Vector3 WorldToScreenPoint(Vector3 position)
	{
		return default;
	}

	public Vector3 WorldToViewportPoint(Vector3 position)
	{
		return default;
	}

	public Vector3 ScreenToWorldPoint(Vector3 position)
	{
		return default;
	}

	public Vector3 ScreenToViewportPoint(Vector3 position)
	{
		return default;
	}

	public Vector3 ViewportToScreenPoint(Vector3 position)
	{
		return default;
	}

	private Ray ScreenPointToRay(Vector2 pos, MonoOrStereoscopicEye eye)
	{
		return default;
	}

	public Ray ScreenPointToRay(Vector3 pos, MonoOrStereoscopicEye eye)
	{
		return default;
	}

	public Ray ScreenPointToRay(Vector3 pos)
	{
		return default;
	}

	private static int GetAllCamerasCount()
	{
		return 0;
	}

	private static int GetAllCamerasImpl([Out] Camera[] cam)
	{
		return 0;
	}

	public static int GetAllCameras(Camera[] cameras)
	{
		return 0;
	}

	public void Render()
	{
	}

	public static void SetupCurrent(Camera cur)
	{
	}

	private void AddCommandBufferImpl(CameraEvent evt, CommandBuffer buffer)
	{
	}

	private void RemoveCommandBufferImpl(CameraEvent evt, CommandBuffer buffer)
	{
	}

	public void AddCommandBuffer(CameraEvent evt, CommandBuffer buffer)
	{
	}

	public void RemoveCommandBuffer(CameraEvent evt, CommandBuffer buffer)
	{
	}

	[RequiredByNativeCode]
	private static void FireOnPreCull(Camera cam)
	{
	}

	[RequiredByNativeCode]
	private static void FireOnPreRender(Camera cam)
	{
	}

	[RequiredByNativeCode]
	private static void FireOnPostRender(Camera cam)
	{
	}

	[SpecialName]
	private void get_rect_Injected(out Rect ret)
	{
		ret = default;
	}

	[SpecialName]
	private void get_pixelRect_Injected(out Rect ret)
	{
		ret = default;
	}

	[SpecialName]
	private void get_projectionMatrix_Injected(out Matrix4x4 ret)
	{
		ret = default;
	}

	[SpecialName]
	private void set_projectionMatrix_Injected(ref Matrix4x4 value)
	{
	}

	private void WorldToScreenPoint_Injected(ref Vector3 position, MonoOrStereoscopicEye eye, out Vector3 ret)
	{
		ret = default;
	}

	private void WorldToViewportPoint_Injected(ref Vector3 position, MonoOrStereoscopicEye eye, out Vector3 ret)
	{
		ret = default;
	}

	private void ScreenToWorldPoint_Injected(ref Vector3 position, MonoOrStereoscopicEye eye, out Vector3 ret)
	{
		ret = default;
	}

	private void ScreenToViewportPoint_Injected(ref Vector3 position, out Vector3 ret)
	{
		ret = default;
	}

	private void ViewportToScreenPoint_Injected(ref Vector3 position, out Vector3 ret)
	{
		ret = default;
	}

	private void ScreenPointToRay_Injected(ref Vector2 pos, MonoOrStereoscopicEye eye, out Ray ret)
	{
		ret = default;
	}
}
