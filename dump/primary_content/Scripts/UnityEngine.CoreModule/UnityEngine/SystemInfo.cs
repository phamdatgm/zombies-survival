using System;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering;

namespace UnityEngine;

public sealed class SystemInfo
{
	public static float batteryLevel => 0f;

	public static string operatingSystem => null;

	public static OperatingSystemFamily operatingSystemFamily => OperatingSystemFamily.Other;

	public static string processorType => null;

	public static int processorCount => 0;

	public static int systemMemorySize => 0;

	public static string deviceUniqueIdentifier => null;

	public static string deviceName => null;

	public static string deviceModel => null;

	public static DeviceType deviceType => DeviceType.Unknown;

	public static string graphicsDeviceName => null;

	public static GraphicsDeviceType graphicsDeviceType => GraphicsDeviceType.OpenGL2;

	public static string graphicsDeviceVersion => null;

	public static bool graphicsMultiThreaded => false;

	public static bool supportsComputeShaders => false;

	public static int maxTextureSize => 0;

	internal static int maxRenderTextureSize => 0;

	public static bool supportsAsyncGPUReadback => false;

	public static long maxGraphicsBufferSize => 0L;

	private static bool IsValidEnumValue(Enum value)
	{
		return false;
	}

	public static bool SupportsTextureFormat(TextureFormat format)
	{
		return false;
	}

	private static float GetBatteryLevel()
	{
		return 0f;
	}

	private static string GetOperatingSystem()
	{
		return null;
	}

	private static OperatingSystemFamily GetOperatingSystemFamily()
	{
		return OperatingSystemFamily.Other;
	}

	private static string GetProcessorType()
	{
		return null;
	}

	private static int GetProcessorCount()
	{
		return 0;
	}

	private static int GetPhysicalMemoryMB()
	{
		return 0;
	}

	private static string GetDeviceUniqueIdentifier()
	{
		return null;
	}

	private static string GetDeviceName()
	{
		return null;
	}

	private static string GetDeviceModel()
	{
		return null;
	}

	private static DeviceType GetDeviceType()
	{
		return DeviceType.Unknown;
	}

	private static string GetGraphicsDeviceName()
	{
		return null;
	}

	private static GraphicsDeviceType GetGraphicsDeviceType()
	{
		return GraphicsDeviceType.OpenGL2;
	}

	private static string GetGraphicsDeviceVersion()
	{
		return null;
	}

	private static bool GetGraphicsMultiThreaded()
	{
		return false;
	}

	private static bool SupportsComputeShaders()
	{
		return false;
	}

	private static bool SupportsTextureFormatNative(TextureFormat format)
	{
		return false;
	}

	private static int GetMaxTextureSize()
	{
		return 0;
	}

	private static int GetMaxRenderTextureSize()
	{
		return 0;
	}

	private static bool SupportsAsyncGPUReadback()
	{
		return false;
	}

	private static long MaxGraphicsBufferSize()
	{
		return 0L;
	}

	public static bool IsFormatSupported(GraphicsFormat format, FormatUsage usage)
	{
		return false;
	}

	public static GraphicsFormat GetCompatibleFormat(GraphicsFormat format, FormatUsage usage)
	{
		return GraphicsFormat.None;
	}

	public static GraphicsFormat GetGraphicsFormat(DefaultFormat format)
	{
		return GraphicsFormat.None;
	}
}
