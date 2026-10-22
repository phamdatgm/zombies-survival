using System;
using System.Runtime.CompilerServices;
using UnityEngine.Scripting;

namespace UnityEngine;

[UsedByNativeCode]
[RequireComponent(typeof(Transform))]
public sealed class ParticleSystem : Component
{
	public struct MainModule
	{
		internal ParticleSystem m_ParticleSystem = null;

		public float duration => 0f;

		public float startLifetimeMultiplier
		{
			get
			{
				return 0f;
			}
			set
			{
			}
		}

		public float startSizeMultiplier
		{
			set
			{
			}
		}

		public MinMaxGradient startColor
		{
			set
			{
			}
		}

		public float simulationSpeed
		{
			set
			{
			}
		}

		internal MainModule(ParticleSystem particleSystem)
		{
		}

		[SpecialName]
		private static float get_duration_Injected(ref MainModule _unity_self)
		{
			return 0f;
		}

		[SpecialName]
		private static float get_startLifetimeMultiplier_Injected(ref MainModule _unity_self)
		{
			return 0f;
		}

		[SpecialName]
		private static void set_startLifetimeMultiplier_Injected(ref MainModule _unity_self, float value)
		{
		}

		[SpecialName]
		private static void set_startSizeMultiplier_Injected(ref MainModule _unity_self, float value)
		{
		}

		[SpecialName]
		private static void set_startColor_Injected(ref MainModule _unity_self, ref MinMaxGradient value)
		{
		}

		[SpecialName]
		private static void set_simulationSpeed_Injected(ref MainModule _unity_self, float value)
		{
		}
	}

	public struct EmissionModule
	{
		internal ParticleSystem m_ParticleSystem = null;

		public bool enabled
		{
			set
			{
			}
		}

		internal EmissionModule(ParticleSystem particleSystem)
		{
		}

		[SpecialName]
		private static void set_enabled_Injected(ref EmissionModule _unity_self, bool value)
		{
		}
	}

	[RequiredByNativeCode("particleSystemParticle", Optional = true)]
	public struct Particle
	{
		private Vector3 m_Position;

		private Vector3 m_Velocity;

		private Vector3 m_AnimatedVelocity;

		private Vector3 m_InitialVelocity;

		private Vector3 m_AxisOfRotation;

		private Vector3 m_Rotation;

		private Vector3 m_AngularVelocity;

		private Vector3 m_StartSize;

		private Color32 m_StartColor;

		private uint m_RandomSeed;

		private uint m_ParentRandomSeed;

		private float m_Lifetime;

		private float m_StartLifetime;

		private int m_MeshIndex;

		private float m_EmitAccumulator0;

		private float m_EmitAccumulator1;

		private uint m_Flags;

		[Obsolete("Please use Particle.remainingLifetime instead. (UnityUpgradable) -> UnityEngine.ParticleSystem/Particle.remainingLifetime", false)]
		public float lifetime
		{
			set
			{
			}
		}

		public Vector3 position
		{
			set
			{
			}
		}

		public Vector3 velocity
		{
			set
			{
			}
		}

		public float remainingLifetime
		{
			set
			{
			}
		}

		public float startLifetime
		{
			set
			{
			}
		}

		public Color32 startColor
		{
			set
			{
			}
		}

		public uint randomSeed
		{
			set
			{
			}
		}

		public float startSize
		{
			set
			{
			}
		}

		public Vector3 rotation3D
		{
			set
			{
			}
		}

		public Vector3 angularVelocity3D
		{
			set
			{
			}
		}
	}

	[Serializable]
	public struct MinMaxCurve(float constant)
	{
		[SerializeField]
		private ParticleSystemCurveMode m_Mode = ParticleSystemCurveMode.Constant;

		[SerializeField]
		private float m_CurveMultiplier = 0f;

		[SerializeField]
		private AnimationCurve m_CurveMin = null;

		[SerializeField]
		private AnimationCurve m_CurveMax = null;

		[SerializeField]
		private float m_ConstantMin = 0f;

		[SerializeField]
		private float m_ConstantMax = 0f;

		public static implicit operator MinMaxCurve(float constant)
		{
			return default;
		}
	}

	[Serializable]
	public struct MinMaxGradient
	{
		[SerializeField]
		private ParticleSystemGradientMode m_Mode = ParticleSystemGradientMode.Color;

		[SerializeField]
		private Gradient m_GradientMin = null;

		[SerializeField]
		private Gradient m_GradientMax = null;

		[SerializeField]
		private Color m_ColorMin = default;

		[SerializeField]
		private Color m_ColorMax = default;

		public MinMaxGradient(Color color)
		{
		}

		public MinMaxGradient(Gradient gradient)
		{
		}

		public static implicit operator MinMaxGradient(Color color)
		{
			return default;
		}

		public static implicit operator MinMaxGradient(Gradient gradient)
		{
			return default;
		}
	}

	public struct EmitParams
	{
		private Particle m_Particle;

		private bool m_PositionSet;

		private bool m_VelocitySet;

		private bool m_AxisOfRotationSet;

		private bool m_RotationSet;

		private bool m_AngularVelocitySet;

		private bool m_StartSizeSet;

		private bool m_StartColorSet;

		private bool m_RandomSeedSet;

		private bool m_StartLifetimeSet;

		private bool m_MeshIndexSet;

		private bool m_ApplyShapeToPosition;
	}

	public struct VelocityOverLifetimeModule
	{
		internal ParticleSystem m_ParticleSystem = null;

		public MinMaxCurve speedModifier
		{
			set
			{
			}
		}

		internal VelocityOverLifetimeModule(ParticleSystem particleSystem)
		{
		}

		[SpecialName]
		private static void set_speedModifier_Injected(ref VelocityOverLifetimeModule _unity_self, ref MinMaxCurve value)
		{
		}
	}

	public struct ColorOverLifetimeModule
	{
		internal ParticleSystem m_ParticleSystem = null;

		public MinMaxGradient color
		{
			set
			{
			}
		}

		internal ColorOverLifetimeModule(ParticleSystem particleSystem)
		{
		}

		[SpecialName]
		private static void set_color_Injected(ref ColorOverLifetimeModule _unity_self, ref MinMaxGradient value)
		{
		}
	}

	[Obsolete("playbackSpeed property is deprecated. Use main.simulationSpeed instead.", false)]
	public float playbackSpeed
	{
		set
		{
		}
	}

	[Obsolete("startSize property is deprecated. Use main.startSize or main.startSizeMultiplier instead.", false)]
	public float startSize
	{
		set
		{
		}
	}

	[Obsolete("startColor property is deprecated. Use main.startColor instead.", false)]
	public Color startColor
	{
		set
		{
		}
	}

	[Obsolete("startLifetime property is deprecated. Use main.startLifetime or main.startLifetimeMultiplier instead.", false)]
	public float startLifetime
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public bool isPlaying => false;

	public bool isPaused => false;

	public MainModule main => default;

	public EmissionModule emission => default;

	public VelocityOverLifetimeModule velocityOverLifetime => default;

	public ColorOverLifetimeModule colorOverLifetime => default;

	[Obsolete("Emit with specific parameters is deprecated. Pass a ParticleSystem.EmitParams parameter instead, which allows you to override some/all of the emission properties", false)]
	public void Emit(Vector3 position, Vector3 velocity, float size, float lifetime, Color32 color)
	{
	}

	[Obsolete("Emit with a single particle structure is deprecated. Pass a ParticleSystem.EmitParams parameter instead, which allows you to override some/all of the emission properties", false)]
	public void Emit(Particle particle)
	{
	}

	public void Play(bool withChildren)
	{
	}

	public void Play()
	{
	}

	public void Pause(bool withChildren)
	{
	}

	public void Pause()
	{
	}

	public void Stop(bool withChildren, ParticleSystemStopBehavior stopBehavior)
	{
	}

	public void Stop(bool withChildren)
	{
	}

	public void Stop()
	{
	}

	[RequiredByNativeCode]
	public void Emit(int count)
	{
	}

	private void Emit_Internal(int count)
	{
	}

	public void Emit(EmitParams emitParams, int count)
	{
	}

	private void EmitOld_Internal(ref Particle particle)
	{
	}

	private void Emit_Injected(ref EmitParams emitParams, int count)
	{
	}
}
