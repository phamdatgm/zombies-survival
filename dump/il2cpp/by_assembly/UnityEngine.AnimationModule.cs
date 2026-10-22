// Namespace: 
internal class <Module> // TypeDefIndex: 7700
{}


// Namespace: UnityEngine
[RequiredByNativeCode]
[Usage(4, AllowMultiple = False)]
public sealed class SharedBetweenAnimatorsAttribute : Attribute // TypeDefIndex: 7701
{}


// Namespace: UnityEngine
[RequiredByNativeCode]
public abstract class StateMachineBehaviour : ScriptableObject // TypeDefIndex: 7702
{
	// Methods

	// RVA: 0x13628FC Offset: 0x135E8FC VA: 0x13628FC
	protected void .ctor() { }
}


// Namespace: UnityEngine
internal enum AnimationEventSource // TypeDefIndex: 7703
{
	// Fields
	public int value__; // 0x0
	public const AnimationEventSource NoSource = 0;
	public const AnimationEventSource Legacy = 1;
	public const AnimationEventSource Animator = 2;
}


// Namespace: UnityEngine
[UsedByNativeCode]
public sealed class AnimationState : TrackedReference // TypeDefIndex: 7704
{}


// Namespace: UnityEngine
[RequiredByNativeCode]
[Serializable]
public sealed class AnimationEvent // TypeDefIndex: 7705
{
	// Fields
	internal float m_Time; // 0x10
	internal string m_FunctionName; // 0x18
	internal string m_StringParameter; // 0x20
	internal Object m_ObjectReferenceParameter; // 0x28
	internal float m_FloatParameter; // 0x30
	internal int m_IntParameter; // 0x34
	internal int m_MessageOptions; // 0x38
	internal AnimationEventSource m_Source; // 0x3C
	internal AnimationState m_StateSender; // 0x40
	internal AnimatorStateInfo m_AnimatorStateInfo; // 0x48
	internal AnimatorClipInfo m_AnimatorClipInfo; // 0x6C

	// Methods

	// RVA: 0x1362904 Offset: 0x135E904 VA: 0x1362904
	public void .ctor() { }
}


// Namespace: UnityEngine
public sealed class AnimationClip : Motion // TypeDefIndex: 7706
{}


// Namespace: UnityEngine
[UsedByNativeCode]
public struct AnimatorClipInfo // TypeDefIndex: 7707
{
	// Fields
	private int m_ClipInstanceID; // 0x0
	private float m_Weight; // 0x4
}


// Namespace: UnityEngine
[RequiredByNativeCode]
public struct AnimatorStateInfo // TypeDefIndex: 7708
{
	// Fields
	private int m_Name; // 0x0
	private int m_Path; // 0x4
	private int m_FullPath; // 0x8
	private float m_NormalizedTime; // 0xC
	private float m_Length; // 0x10
	private float m_Speed; // 0x14
	private float m_SpeedMultiplier; // 0x18
	private int m_Tag; // 0x1C
	private int m_Loop; // 0x20
}


// Namespace: UnityEngine
[RequiredByNativeCode]
public struct AnimatorTransitionInfo // TypeDefIndex: 7709
{
	// Fields
	private int m_FullPath; // 0x0
	private int m_UserName; // 0x4
	private int m_Name; // 0x8
	private bool m_HasFixedDuration; // 0xC
	private float m_Duration; // 0x10
	private float m_NormalizedTime; // 0x14
	private bool m_AnyState; // 0x18
	private int m_TransitionType; // 0x1C
}


// Namespace: UnityEngine
[UsedByNativeCode]
public class Animator : Behaviour // TypeDefIndex: 7710
{
	// Properties
	public bool hasBoundPlayables { get; }

	// Methods

	// RVA: 0x1362968 Offset: 0x135E968 VA: 0x1362968
	public void SetTrigger(string name) { }

	// RVA: 0x13629F0 Offset: 0x135E9F0 VA: 0x13629F0
	public void ResetTrigger(string name) { }

	// RVA: 0x1362A78 Offset: 0x135EA78 VA: 0x1362A78
	public void CrossFade(string stateName, float normalizedTransitionDuration) { }

	// RVA: 0x1362A8C Offset: 0x135EA8C VA: 0x1362A8C
	public void CrossFade(string stateName, float normalizedTransitionDuration, int layer, float normalizedTimeOffset, float normalizedTransitionTime) { }

	// RVA: 0x1362B70 Offset: 0x135EB70 VA: 0x1362B70
	public void CrossFade(int stateHashName, float normalizedTransitionDuration, int layer, float normalizedTimeOffset, float normalizedTransitionTime) { }

	// RVA: 0x1362BEC Offset: 0x135EBEC VA: 0x1362BEC
	public void Play(string stateName) { }

	// RVA: 0x1362BFC Offset: 0x135EBFC VA: 0x1362BFC
	public void Play(string stateName, int layer, float normalizedTime) { }

	// RVA: 0x1362C8C Offset: 0x135EC8C VA: 0x1362C8C
	public void Play(int stateNameHash, int layer, float normalizedTime) { }

	// RVA: 0x1362CF0 Offset: 0x135ECF0 VA: 0x1362CF0
	public bool get_hasBoundPlayables() { }

	// RVA: 0x1362B34 Offset: 0x135EB34 VA: 0x1362B34
	public static int StringToHash(string name) { }

	// RVA: 0x13629AC Offset: 0x135E9AC VA: 0x13629AC
	private void SetTriggerString(string name) { }

	// RVA: 0x1362A34 Offset: 0x135EA34 VA: 0x1362A34
	private void ResetTriggerString(string name) { }

	// RVA: 0x1362D2C Offset: 0x135ED2C VA: 0x1362D2C
	public void Update(float deltaTime) { }

	// RVA: 0x1362D78 Offset: 0x135ED78 VA: 0x1362D78
	public void .ctor() { }
}


// Namespace: 
internal sealed class AnimatorOverrideController.OnOverrideControllerDirtyCallback : MulticastDelegate // TypeDefIndex: 7711
{
	// Methods

	// RVA: 0x1362DB0 Offset: 0x135EDB0 VA: 0x1362DB0
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x1362E38 Offset: 0x135EE38 VA: 0x1362E38 Slot: 12
	public virtual void Invoke() { }
}


// Namespace: UnityEngine
[UsedByNativeCode]
[DefaultMember("Item")]
public class AnimatorOverrideController : RuntimeAnimatorController // TypeDefIndex: 7712
{
	// Fields
	internal AnimatorOverrideController.OnOverrideControllerDirtyCallback OnOverrideControllerDirty; // 0x18

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x1362D80 Offset: 0x135ED80 VA: 0x1362D80
	internal static void OnInvalidateOverrideController(AnimatorOverrideController controller) { }
}


// Namespace: UnityEngine
[UsedByNativeCode]
public class Avatar : Object // TypeDefIndex: 7713
{}


// Namespace: UnityEngine
[RequiredByNativeCode]
public struct SkeletonBone // TypeDefIndex: 7714
{
	// Fields
	public string name; // 0x0
	internal string parentName; // 0x8
	public Vector3 position; // 0x10
	public Quaternion rotation; // 0x1C
	public Vector3 scale; // 0x2C
}


// Namespace: UnityEngine
public struct HumanLimit // TypeDefIndex: 7715
{
	// Fields
	private Vector3 m_Min; // 0x0
	private Vector3 m_Max; // 0xC
	private Vector3 m_Center; // 0x18
	private float m_AxisLength; // 0x24
	private int m_UseDefaultValues; // 0x28
}


// Namespace: UnityEngine
[RequiredByNativeCode]
public struct HumanBone // TypeDefIndex: 7716
{
	// Fields
	private string m_BoneName; // 0x0
	private string m_HumanName; // 0x8
	public HumanLimit limit; // 0x10
}


// Namespace: UnityEngine
public class Motion : Object // TypeDefIndex: 7717
{}


// Namespace: UnityEngine
[UsedByNativeCode]
public class RuntimeAnimatorController : Object // TypeDefIndex: 7718
{}


// Namespace: UnityEngine.Animations
[RequiredByNativeCode]
[Usage(256)]
public class DiscreteEvaluationAttribute : Attribute // TypeDefIndex: 7719
{}


// Namespace: UnityEngine.Animations
[Usage(260)]
[RequiredByNativeCode]
public class NotKeyableAttribute : Attribute // TypeDefIndex: 7720
{}


// Namespace: UnityEngine.Animations
[RequiredByNativeCode]
public struct AnimationClipPlayable : IEquatable<AnimationClipPlayable> // TypeDefIndex: 7721
{
	// Fields
	private PlayableHandle m_Handle; // 0x0

	// Methods

	// RVA: 0x1362E4C Offset: 0x135EE4C VA: 0x1362E4C Slot: 5
	public PlayableHandle GetHandle() { }

	// RVA: 0x1362E58 Offset: 0x135EE58 VA: 0x1362E58 Slot: 4
	public bool Equals(AnimationClipPlayable other) { }
}


// Namespace: UnityEngine.Animations
[RequiredByNativeCode]
[MovedFrom("UnityEngine.Experimental.Animations")]
public struct AnimationHumanStream // TypeDefIndex: 7722
{
	// Fields
	private IntPtr stream; // 0x0
}


// Namespace: UnityEngine.Animations
[RequiredByNativeCode]
public struct AnimationLayerMixerPlayable : IEquatable<AnimationLayerMixerPlayable> // TypeDefIndex: 7723
{
	// Fields
	private PlayableHandle m_Handle; // 0x0
	private static readonly AnimationLayerMixerPlayable m_NullPlayable; // 0x0

	// Methods

	// RVA: 0x1362ED0 Offset: 0x135EED0 VA: 0x1362ED0
	internal void .ctor(PlayableHandle handle, bool singleLayerOptimization = True) { }

	// RVA: 0x1363060 Offset: 0x135F060 VA: 0x1363060 Slot: 5
	public PlayableHandle GetHandle() { }

	// RVA: 0x136306C Offset: 0x135F06C VA: 0x136306C Slot: 4
	public bool Equals(AnimationLayerMixerPlayable other) { }

	// RVA: 0x136301C Offset: 0x135F01C VA: 0x136301C
	private static void SetSingleLayerOptimizationInternal(ref PlayableHandle handle, bool value) { }

	// RVA: 0x1363108 Offset: 0x135F108 VA: 0x1363108
	private static void .cctor() { }
}


// Namespace: UnityEngine.Animations
[RequiredByNativeCode]
public struct AnimationMixerPlayable : IEquatable<AnimationMixerPlayable> // TypeDefIndex: 7724
{
	// Fields
	private PlayableHandle m_Handle; // 0x0
	private static readonly AnimationMixerPlayable m_NullPlayable; // 0x0

	// Methods

	// RVA: 0x13631A8 Offset: 0x135F1A8 VA: 0x13631A8
	internal void .ctor(PlayableHandle handle) { }

	// RVA: 0x1363298 Offset: 0x135F298 VA: 0x1363298 Slot: 5
	public PlayableHandle GetHandle() { }

	// RVA: 0x13632A4 Offset: 0x135F2A4 VA: 0x13632A4 Slot: 4
	public bool Equals(AnimationMixerPlayable other) { }

	// RVA: 0x1363340 Offset: 0x135F340 VA: 0x1363340
	private static void .cctor() { }
}


// Namespace: UnityEngine.Animations
[RequiredByNativeCode]
internal struct AnimationMotionXToDeltaPlayable : IEquatable<AnimationMotionXToDeltaPlayable> // TypeDefIndex: 7725
{
	// Fields
	private PlayableHandle m_Handle; // 0x0
	private static readonly AnimationMotionXToDeltaPlayable m_NullPlayable; // 0x0

	// Methods

	// RVA: 0x13633DC Offset: 0x135F3DC VA: 0x13633DC
	private void .ctor(PlayableHandle handle) { }

	// RVA: 0x13634CC Offset: 0x135F4CC VA: 0x13634CC Slot: 5
	public PlayableHandle GetHandle() { }

	// RVA: 0x13634D8 Offset: 0x135F4D8 VA: 0x13634D8 Slot: 4
	public bool Equals(AnimationMotionXToDeltaPlayable other) { }

	// RVA: 0x1363574 Offset: 0x135F574 VA: 0x1363574
	private static void .cctor() { }
}


// Namespace: UnityEngine.Animations
[RequiredByNativeCode]
internal struct AnimationOffsetPlayable : IEquatable<AnimationOffsetPlayable> // TypeDefIndex: 7726
{
	// Fields
	private PlayableHandle m_Handle; // 0x0
	private static readonly AnimationOffsetPlayable m_NullPlayable; // 0x0

	// Methods

	// RVA: 0x1363610 Offset: 0x135F610 VA: 0x1363610
	internal void .ctor(PlayableHandle handle) { }

	// RVA: 0x1363700 Offset: 0x135F700 VA: 0x1363700 Slot: 5
	public PlayableHandle GetHandle() { }

	// RVA: 0x136370C Offset: 0x135F70C VA: 0x136370C Slot: 4
	public bool Equals(AnimationOffsetPlayable other) { }

	// RVA: 0x13637C0 Offset: 0x135F7C0 VA: 0x13637C0
	private static void .cctor() { }
}


// Namespace: UnityEngine.Animations
[RequiredByNativeCode]
public struct AnimationPlayableOutput // TypeDefIndex: 7727
{
	// Fields
	private PlayableOutputHandle m_Handle; // 0x0
}


// Namespace: UnityEngine.Animations
[RequiredByNativeCode]
internal struct AnimationPosePlayable : IEquatable<AnimationPosePlayable> // TypeDefIndex: 7728
{
	// Fields
	private PlayableHandle m_Handle; // 0x0
	private static readonly AnimationPosePlayable m_NullPlayable; // 0x0

	// Methods

	// RVA: 0x136385C Offset: 0x135F85C VA: 0x136385C
	internal void .ctor(PlayableHandle handle) { }

	// RVA: 0x136394C Offset: 0x135F94C VA: 0x136394C Slot: 5
	public PlayableHandle GetHandle() { }

	// RVA: 0x1363958 Offset: 0x135F958 VA: 0x1363958 Slot: 4
	public bool Equals(AnimationPosePlayable other) { }

	// RVA: 0x1363A0C Offset: 0x135FA0C VA: 0x1363A0C
	private static void .cctor() { }
}


// Namespace: UnityEngine.Animations
[RequiredByNativeCode]
internal struct AnimationRemoveScalePlayable : IEquatable<AnimationRemoveScalePlayable> // TypeDefIndex: 7729
{
	// Fields
	private PlayableHandle m_Handle; // 0x0
	private static readonly AnimationRemoveScalePlayable m_NullPlayable; // 0x0

	// Methods

	// RVA: 0x1363AA8 Offset: 0x135FAA8 VA: 0x1363AA8
	internal void .ctor(PlayableHandle handle) { }

	// RVA: 0x1363B98 Offset: 0x135FB98 VA: 0x1363B98 Slot: 5
	public PlayableHandle GetHandle() { }

	// RVA: 0x1363BA4 Offset: 0x135FBA4 VA: 0x1363BA4 Slot: 4
	public bool Equals(AnimationRemoveScalePlayable other) { }

	// RVA: 0x1363C58 Offset: 0x135FC58 VA: 0x1363C58
	private static void .cctor() { }
}


// Namespace: UnityEngine.Animations
[MovedFrom("UnityEngine.Experimental.Animations")]
[RequiredByNativeCode]
public struct AnimationScriptPlayable : IEquatable<AnimationScriptPlayable> // TypeDefIndex: 7730
{
	// Fields
	private PlayableHandle m_Handle; // 0x0
	private static readonly AnimationScriptPlayable m_NullPlayable; // 0x0

	// Methods

	// RVA: 0x1363CF4 Offset: 0x135FCF4 VA: 0x1363CF4
	internal void .ctor(PlayableHandle handle) { }

	// RVA: 0x1363DE4 Offset: 0x135FDE4 VA: 0x1363DE4 Slot: 5
	public PlayableHandle GetHandle() { }

	// RVA: 0x1363DF0 Offset: 0x135FDF0 VA: 0x1363DF0 Slot: 4
	public bool Equals(AnimationScriptPlayable other) { }

	// RVA: 0x1363E8C Offset: 0x135FE8C VA: 0x1363E8C
	private static void .cctor() { }
}


// Namespace: UnityEngine.Animations
[MovedFrom("UnityEngine.Experimental.Animations")]
[RequiredByNativeCode]
public struct AnimationStream // TypeDefIndex: 7731
{
	// Fields
	private uint m_AnimatorBindingsVersion; // 0x0
	private IntPtr constant; // 0x8
	private IntPtr input; // 0x10
	private IntPtr output; // 0x18
	private IntPtr workspace; // 0x20
	private IntPtr inputStreamAccessor; // 0x28
	private IntPtr animationHandleBinder; // 0x30
}


// Namespace: UnityEngine.Animations
[RequiredByNativeCode]
public struct AnimatorControllerPlayable : IEquatable<AnimatorControllerPlayable> // TypeDefIndex: 7732
{
	// Fields
	private PlayableHandle m_Handle; // 0x0
	private static readonly AnimatorControllerPlayable m_NullPlayable; // 0x0

	// Methods

	// RVA: 0x1363F28 Offset: 0x135FF28 VA: 0x1363F28
	internal void .ctor(PlayableHandle handle) { }

	// RVA: 0x1364108 Offset: 0x1360108 VA: 0x1364108 Slot: 5
	public PlayableHandle GetHandle() { }

	// RVA: 0x1363FC4 Offset: 0x135FFC4 VA: 0x1363FC4
	public void SetHandle(PlayableHandle handle) { }

	// RVA: 0x1364114 Offset: 0x1360114 VA: 0x1364114 Slot: 4
	public bool Equals(AnimatorControllerPlayable other) { }

	// RVA: 0x13641B0 Offset: 0x13601B0 VA: 0x13641B0
	private static void .cctor() { }
}
