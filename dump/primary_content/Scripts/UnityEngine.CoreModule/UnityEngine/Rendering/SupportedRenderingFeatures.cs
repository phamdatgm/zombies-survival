using System;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

public class SupportedRenderingFeatures
{
	[Flags]
	public enum ReflectionProbeModes
	{
		None = 0,
		Rotation = 1
	}

	[Flags]
	public enum LightmapMixedBakeModes
	{
		None = 0,
		IndirectOnly = 1,
		Subtractive = 2,
		Shadowmask = 4
	}

	private static SupportedRenderingFeatures s_Active;

	private ReflectionProbeModes reflectionProbeModes;

	private bool lightProbeProxyVolumes;

	private bool motionVectors;

	private bool receiveShadows;

	private bool reflectionProbes;

	private bool reflectionProbesBlendDistance;

	private bool rendererPriority;

	private bool overridesEnvironmentLighting;

	private bool overridesFog;

	private bool overridesRealtimeReflectionProbes;

	private bool overridesOtherLightingSettings;

	private bool editableMaterialRenderQueue;

	private bool overridesLODBias;

	private bool overridesMaximumLODLevel;

	private bool overridesEnableLODCrossFade;

	private bool rendererProbes;

	private bool particleSystemInstancing;

	private bool overridesShadowmask;

	private bool supportsHDR;

	private string overridesLightProbeSystemWarningMessage;

	public static SupportedRenderingFeatures active
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public LightmapMixedBakeModes defaultMixedLightingModes { get; }

	public LightmapMixedBakeModes mixedLightingModes { get; }

	public LightmapBakeType lightmapBakeTypes { get; }

	public LightmapsMode lightmapsModes { get; }

	[Obsolete("Bake with the Progressive Lightmapper. The backend that uses Enlighten to bake is deprecated.", false)]
	public bool enlightenLightmapper { get; }

	public bool enlighten { get; }

	public bool rendersUIOverlay { get; }

	public bool autoAmbientProbeBaking { get; }

	public bool autoDefaultReflectionProbeBaking { get; }

	public bool overridesLightProbeSystem { get; }

	[RequiredByNativeCode]
	internal static void FallbackMixedLightingModeByRef(IntPtr fallbackModePtr)
	{
	}

	internal static bool IsMixedLightingModeSupported(MixedLightingMode mixedMode)
	{
		return false;
	}

	[RequiredByNativeCode]
	internal static void IsMixedLightingModeSupportedByRef(MixedLightingMode mixedMode, IntPtr isSupportedPtr)
	{
	}

	internal static bool IsLightmapBakeTypeSupported(LightmapBakeType bakeType)
	{
		return false;
	}

	[RequiredByNativeCode]
	internal static void IsLightmapBakeTypeSupportedByRef(LightmapBakeType bakeType, IntPtr isSupportedPtr)
	{
	}

	[RequiredByNativeCode]
	internal static void IsLightmapsModeSupportedByRef(LightmapsMode mode, IntPtr isSupportedPtr)
	{
	}

	[RequiredByNativeCode]
	internal static void IsLightmapperSupportedByRef(int lightmapper, IntPtr isSupportedPtr)
	{
	}

	[RequiredByNativeCode]
	internal static void IsUIOverlayRenderedBySRP(IntPtr isSupportedPtr)
	{
	}

	[RequiredByNativeCode]
	internal static void IsAutoAmbientProbeBakingSupported(IntPtr isSupportedPtr)
	{
	}

	[RequiredByNativeCode]
	internal static void IsAutoDefaultReflectionProbeBakingSupported(IntPtr isSupportedPtr)
	{
	}

	[RequiredByNativeCode]
	internal static void OverridesLightProbeSystem(IntPtr overridesPtr)
	{
	}

	[RequiredByNativeCode]
	internal static void FallbackLightmapperByRef(IntPtr lightmapperPtr)
	{
	}
}
