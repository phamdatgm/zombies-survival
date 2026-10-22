// Namespace: 
internal class <Module> // TypeDefIndex: 7733
{}


// Namespace: 
public struct ParticleSystem.MainModule // TypeDefIndex: 7734
{
	// Fields
	internal ParticleSystem m_ParticleSystem; // 0x0

	// Properties
	public float duration { get; }
	public float startLifetimeMultiplier { get; set; }
	public float startSizeMultiplier { set; }
	public ParticleSystem.MinMaxGradient startColor { set; }
	public float simulationSpeed { set; }

	// Methods

	// RVA: 0x13CAB18 Offset: 0x13C6B18 VA: 0x13CAB18
	internal void .ctor(ParticleSystem particleSystem) { }

	// RVA: 0x13CAB4C Offset: 0x13C6B4C VA: 0x13CAB4C
	public float get_duration() { }

	// RVA: 0x13CA6B8 Offset: 0x13C66B8 VA: 0x13CA6B8
	public float get_startLifetimeMultiplier() { }

	// RVA: 0x13CA73C Offset: 0x13C673C VA: 0x13CA73C
	public void set_startLifetimeMultiplier(float value) { }

	// RVA: 0x13CA570 Offset: 0x13C6570 VA: 0x13CA570
	public void set_startSizeMultiplier(float value) { }

	// RVA: 0x13CA634 Offset: 0x13C6634 VA: 0x13CA634
	public void set_startColor(ParticleSystem.MinMaxGradient value) { }

	// RVA: 0x13CA4DC Offset: 0x13C64DC VA: 0x13CA4DC
	public void set_simulationSpeed(float value) { }

	// RVA: 0x13CAB88 Offset: 0x13C6B88 VA: 0x13CAB88
	private static float get_duration_Injected(ref ParticleSystem.MainModule _unity_self) { }

	// RVA: 0x13CABC4 Offset: 0x13C6BC4 VA: 0x13CABC4
	private static float get_startLifetimeMultiplier_Injected(ref ParticleSystem.MainModule _unity_self) { }

	// RVA: 0x13CAC00 Offset: 0x13C6C00 VA: 0x13CAC00
	private static void set_startLifetimeMultiplier_Injected(ref ParticleSystem.MainModule _unity_self, float value) { }

	// RVA: 0x13CAC4C Offset: 0x13C6C4C VA: 0x13CAC4C
	private static void set_startSizeMultiplier_Injected(ref ParticleSystem.MainModule _unity_self, float value) { }

	// RVA: 0x13CAC98 Offset: 0x13C6C98 VA: 0x13CAC98
	private static void set_startColor_Injected(ref ParticleSystem.MainModule _unity_self, ref ParticleSystem.MinMaxGradient value) { }

	// RVA: 0x13CACDC Offset: 0x13C6CDC VA: 0x13CACDC
	private static void set_simulationSpeed_Injected(ref ParticleSystem.MainModule _unity_self, float value) { }
}


// Namespace: 
public struct ParticleSystem.EmissionModule // TypeDefIndex: 7735
{
	// Fields
	internal ParticleSystem m_ParticleSystem; // 0x0

	// Properties
	public bool enabled { set; }

	// Methods

	// RVA: 0x13CAB24 Offset: 0x13C6B24 VA: 0x13CAB24
	internal void .ctor(ParticleSystem particleSystem) { }

	// RVA: 0x13CAD28 Offset: 0x13C6D28 VA: 0x13CAD28
	public void set_enabled(bool value) { }

	// RVA: 0x13CAD6C Offset: 0x13C6D6C VA: 0x13CAD6C
	private static void set_enabled_Injected(ref ParticleSystem.EmissionModule _unity_self, bool value) { }
}


// Namespace: 
[RequiredByNativeCode("particleSystemParticle", Optional = True)]
public struct ParticleSystem.Particle // TypeDefIndex: 7736
{
	// Fields
	private Vector3 m_Position; // 0x0
	private Vector3 m_Velocity; // 0xC
	private Vector3 m_AnimatedVelocity; // 0x18
	private Vector3 m_InitialVelocity; // 0x24
	private Vector3 m_AxisOfRotation; // 0x30
	private Vector3 m_Rotation; // 0x3C
	private Vector3 m_AngularVelocity; // 0x48
	private Vector3 m_StartSize; // 0x54
	private Color32 m_StartColor; // 0x60
	private uint m_RandomSeed; // 0x64
	private uint m_ParentRandomSeed; // 0x68
	private float m_Lifetime; // 0x6C
	private float m_StartLifetime; // 0x70
	private int m_MeshIndex; // 0x74
	private float m_EmitAccumulator0; // 0x78
	private float m_EmitAccumulator1; // 0x7C
	private uint m_Flags; // 0x80

	// Properties
	[Obsolete("Please use Particle.remainingLifetime instead. (UnityUpgradable) -> UnityEngine.ParticleSystem/Particle.remainingLifetime", False)]
	public float lifetime { set; }
	public Vector3 position { set; }
	public Vector3 velocity { set; }
	public float remainingLifetime { set; }
	public float startLifetime { set; }
	public Color32 startColor { set; }
	public uint randomSeed { set; }
	public float startSize { set; }
	public Vector3 rotation3D { set; }
	public Vector3 angularVelocity3D { set; }

	// Methods

	// RVA: 0x13CA384 Offset: 0x13C6384 VA: 0x13CA384
	public void set_lifetime(float value) { }

	// RVA: 0x13CA36C Offset: 0x13C636C VA: 0x13CA36C
	public void set_position(Vector3 value) { }

	// RVA: 0x13CA378 Offset: 0x13C6378 VA: 0x13CA378
	public void set_velocity(Vector3 value) { }

	// RVA: 0x13CADB0 Offset: 0x13C6DB0 VA: 0x13CADB0
	public void set_remainingLifetime(float value) { }

	// RVA: 0x13CA38C Offset: 0x13C638C VA: 0x13CA38C
	public void set_startLifetime(float value) { }

	// RVA: 0x13CA3F8 Offset: 0x13C63F8 VA: 0x13CA3F8
	public void set_startColor(Color32 value) { }

	// RVA: 0x13CA400 Offset: 0x13C6400 VA: 0x13CA400
	public void set_randomSeed(uint value) { }

	// RVA: 0x13CA394 Offset: 0x13C6394 VA: 0x13CA394
	public void set_startSize(float value) { }

	// RVA: 0x13CA3A0 Offset: 0x13C63A0 VA: 0x13CA3A0
	public void set_rotation3D(Vector3 value) { }

	// RVA: 0x13CA3CC Offset: 0x13C63CC VA: 0x13CA3CC
	public void set_angularVelocity3D(Vector3 value) { }
}


// Namespace: 
[Serializable]
public struct ParticleSystem.MinMaxCurve // TypeDefIndex: 7737
{
	// Fields
	[SerializeField]
	private ParticleSystemCurveMode m_Mode; // 0x0
	[SerializeField]
	private float m_CurveMultiplier; // 0x4
	[SerializeField]
	private AnimationCurve m_CurveMin; // 0x8
	[SerializeField]
	private AnimationCurve m_CurveMax; // 0x10
	[SerializeField]
	private float m_ConstantMin; // 0x18
	[SerializeField]
	private float m_ConstantMax; // 0x1C

	// Methods

	// RVA: 0x13CADB8 Offset: 0x13C6DB8 VA: 0x13CADB8
	public void .ctor(float constant) { }

	// RVA: 0x13CADCC Offset: 0x13C6DCC VA: 0x13CADCC
	public static ParticleSystem.MinMaxCurve op_Implicit(float constant) { }
}


// Namespace: 
[Serializable]
public struct ParticleSystem.MinMaxGradient // TypeDefIndex: 7738
{
	// Fields
	[SerializeField]
	private ParticleSystemGradientMode m_Mode; // 0x0
	[SerializeField]
	private Gradient m_GradientMin; // 0x8
	[SerializeField]
	private Gradient m_GradientMax; // 0x10
	[SerializeField]
	private Color m_ColorMin; // 0x18
	[SerializeField]
	private Color m_ColorMax; // 0x28

	// Methods

	// RVA: 0x13CADE0 Offset: 0x13C6DE0 VA: 0x13CADE0
	public void .ctor(Color color) { }

	// RVA: 0x13CADFC Offset: 0x13C6DFC VA: 0x13CADFC
	public void .ctor(Gradient gradient) { }

	// RVA: 0x13CA618 Offset: 0x13C6618 VA: 0x13CA618
	public static ParticleSystem.MinMaxGradient op_Implicit(Color color) { }

	// RVA: 0x13CAE1C Offset: 0x13C6E1C VA: 0x13CAE1C
	public static ParticleSystem.MinMaxGradient op_Implicit(Gradient gradient) { }
}


// Namespace: 
public struct ParticleSystem.EmitParams // TypeDefIndex: 7739
{
	// Fields
	private ParticleSystem.Particle m_Particle; // 0x0
	private bool m_PositionSet; // 0x84
	private bool m_VelocitySet; // 0x85
	private bool m_AxisOfRotationSet; // 0x86
	private bool m_RotationSet; // 0x87
	private bool m_AngularVelocitySet; // 0x88
	private bool m_StartSizeSet; // 0x89
	private bool m_StartColorSet; // 0x8A
	private bool m_RandomSeedSet; // 0x8B
	private bool m_StartLifetimeSet; // 0x8C
	private bool m_MeshIndexSet; // 0x8D
	private bool m_ApplyShapeToPosition; // 0x8E
}


// Namespace: 
public struct ParticleSystem.VelocityOverLifetimeModule // TypeDefIndex: 7740
{
	// Fields
	internal ParticleSystem m_ParticleSystem; // 0x0

	// Properties
	public ParticleSystem.MinMaxCurve speedModifier { set; }

	// Methods

	// RVA: 0x13CAB30 Offset: 0x13C6B30 VA: 0x13CAB30
	internal void .ctor(ParticleSystem particleSystem) { }

	// RVA: 0x13CAE40 Offset: 0x13C6E40 VA: 0x13CAE40
	public void set_speedModifier(ParticleSystem.MinMaxCurve value) { }

	// RVA: 0x13CAE84 Offset: 0x13C6E84 VA: 0x13CAE84
	private static void set_speedModifier_Injected(ref ParticleSystem.VelocityOverLifetimeModule _unity_self, ref ParticleSystem.MinMaxCurve value) { }
}


// Namespace: 
public struct ParticleSystem.ColorOverLifetimeModule // TypeDefIndex: 7741
{
	// Fields
	internal ParticleSystem m_ParticleSystem; // 0x0

	// Properties
	public ParticleSystem.MinMaxGradient color { set; }

	// Methods

	// RVA: 0x13CAB3C Offset: 0x13C6B3C VA: 0x13CAB3C
	internal void .ctor(ParticleSystem particleSystem) { }

	// RVA: 0x13CAEC8 Offset: 0x13C6EC8 VA: 0x13CAEC8
	public void set_color(ParticleSystem.MinMaxGradient value) { }

	// RVA: 0x13CAF0C Offset: 0x13C6F0C VA: 0x13CAF0C
	private static void set_color_Injected(ref ParticleSystem.ColorOverLifetimeModule _unity_self, ref ParticleSystem.MinMaxGradient value) { }
}


// Namespace: UnityEngine
[UsedByNativeCode]
[RequireComponent(typeof(Transform))]
public sealed class ParticleSystem : Component // TypeDefIndex: 7742
{
	// Properties
	[Obsolete("playbackSpeed property is deprecated. Use main.simulationSpeed instead.", False)]
	public float playbackSpeed { set; }
	[Obsolete("startSize property is deprecated. Use main.startSize or main.startSizeMultiplier instead.", False)]
	public float startSize { set; }
	[Obsolete("startColor property is deprecated. Use main.startColor instead.", False)]
	public Color startColor { set; }
	[Obsolete("startLifetime property is deprecated. Use main.startLifetime or main.startLifetimeMultiplier instead.", False)]
	public float startLifetime { get; set; }
	public bool isPlaying { get; }
	public bool isPaused { get; }
	public ParticleSystem.MainModule main { get; }
	public ParticleSystem.EmissionModule emission { get; }
	public ParticleSystem.VelocityOverLifetimeModule velocityOverLifetime { get; }
	public ParticleSystem.ColorOverLifetimeModule colorOverLifetime { get; }

	// Methods

	[Obsolete("Emit with specific parameters is deprecated. Pass a ParticleSystem.EmitParams parameter instead, which allows you to override some/all of the emission properties", False)]
	// RVA: 0x13CA268 Offset: 0x13C6268 VA: 0x13CA268
	public void Emit(Vector3 position, Vector3 velocity, float size, float lifetime, Color32 color) { }

	[Obsolete("Emit with a single particle structure is deprecated. Pass a ParticleSystem.EmitParams parameter instead, which allows you to override some/all of the emission properties", False)]
	// RVA: 0x13CA44C Offset: 0x13C644C VA: 0x13CA44C
	public void Emit(ParticleSystem.Particle particle) { }

	// RVA: 0x13CA490 Offset: 0x13C6490 VA: 0x13CA490
	public void set_playbackSpeed(float value) { }

	// RVA: 0x13CA528 Offset: 0x13C6528 VA: 0x13CA528
	public void set_startSize(float value) { }

	// RVA: 0x13CA5BC Offset: 0x13C65BC VA: 0x13CA5BC
	public void set_startColor(Color value) { }

	// RVA: 0x13CA678 Offset: 0x13C6678 VA: 0x13CA678
	public float get_startLifetime() { }

	// RVA: 0x13CA6F4 Offset: 0x13C66F4 VA: 0x13CA6F4
	public void set_startLifetime(float value) { }

	// RVA: 0x13CA788 Offset: 0x13C6788 VA: 0x13CA788
	public bool get_isPlaying() { }

	// RVA: 0x13CA7C4 Offset: 0x13C67C4 VA: 0x13CA7C4
	public bool get_isPaused() { }

	// RVA: 0x13CA800 Offset: 0x13C6800 VA: 0x13CA800
	public void Play(bool withChildren) { }

	// RVA: 0x13CA844 Offset: 0x13C6844 VA: 0x13CA844
	public void Play() { }

	// RVA: 0x13CA884 Offset: 0x13C6884 VA: 0x13CA884
	public void Pause(bool withChildren) { }

	// RVA: 0x13CA8C8 Offset: 0x13C68C8 VA: 0x13CA8C8
	public void Pause() { }

	// RVA: 0x13CA908 Offset: 0x13C6908 VA: 0x13CA908
	public void Stop(bool withChildren, ParticleSystemStopBehavior stopBehavior) { }

	// RVA: 0x13CA95C Offset: 0x13C695C VA: 0x13CA95C
	public void Stop(bool withChildren) { }

	// RVA: 0x13CA9A4 Offset: 0x13C69A4 VA: 0x13CA9A4
	public void Stop() { }

	[RequiredByNativeCode]
	// RVA: 0x13CA9E8 Offset: 0x13C69E8 VA: 0x13CA9E8
	public void Emit(int count) { }

	// RVA: 0x13CAA2C Offset: 0x13C6A2C VA: 0x13CAA2C
	private void Emit_Internal(int count) { }

	// RVA: 0x13CAA70 Offset: 0x13C6A70 VA: 0x13CAA70
	public void Emit(ParticleSystem.EmitParams emitParams, int count) { }

	// RVA: 0x13CA408 Offset: 0x13C6408 VA: 0x13CA408
	private void EmitOld_Internal(ref ParticleSystem.Particle particle) { }

	// RVA: 0x13CA4D8 Offset: 0x13C64D8 VA: 0x13CA4D8
	public ParticleSystem.MainModule get_main() { }

	// RVA: 0x13CAB20 Offset: 0x13C6B20 VA: 0x13CAB20
	public ParticleSystem.EmissionModule get_emission() { }

	// RVA: 0x13CAB2C Offset: 0x13C6B2C VA: 0x13CAB2C
	public ParticleSystem.VelocityOverLifetimeModule get_velocityOverLifetime() { }

	// RVA: 0x13CAB38 Offset: 0x13C6B38 VA: 0x13CAB38
	public ParticleSystem.ColorOverLifetimeModule get_colorOverLifetime() { }

	// RVA: 0x13CAB44 Offset: 0x13C6B44 VA: 0x13CAB44
	public void .ctor() { }

	// RVA: 0x13CAAC4 Offset: 0x13C6AC4 VA: 0x13CAAC4
	private void Emit_Injected(ref ParticleSystem.EmitParams emitParams, int count) { }
}


// Namespace: UnityEngine
public enum ParticleSystemCurveMode // TypeDefIndex: 7743
{
	// Fields
	public int value__; // 0x0
	public const ParticleSystemCurveMode Constant = 0;
	public const ParticleSystemCurveMode Curve = 1;
	public const ParticleSystemCurveMode TwoCurves = 2;
	public const ParticleSystemCurveMode TwoConstants = 3;
}


// Namespace: UnityEngine
public enum ParticleSystemGradientMode // TypeDefIndex: 7744
{
	// Fields
	public int value__; // 0x0
	public const ParticleSystemGradientMode Color = 0;
	public const ParticleSystemGradientMode Gradient = 1;
	public const ParticleSystemGradientMode TwoColors = 2;
	public const ParticleSystemGradientMode TwoGradients = 3;
	public const ParticleSystemGradientMode RandomColor = 4;
}


// Namespace: UnityEngine
public enum ParticleSystemStopBehavior // TypeDefIndex: 7745
{
	// Fields
	public int value__; // 0x0
	public const ParticleSystemStopBehavior StopEmittingAndClear = 0;
	public const ParticleSystemStopBehavior StopEmitting = 1;
}


// Namespace: UnityEngine
[RequireComponent(typeof(Transform))]
public sealed class ParticleSystemRenderer : Renderer // TypeDefIndex: 7746
{
	// Methods

	[RequiredByNativeCode]
	// RVA: 0x13CAF50 Offset: 0x13C6F50 VA: 0x13CAF50
	public int GetMeshes([Out] Mesh[] meshes) { }
}
