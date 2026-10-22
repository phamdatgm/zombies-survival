using UnityEngine.Scripting;

namespace UnityEngine;

[RequiredByNativeCode]
public struct AnimatorTransitionInfo
{
	private int m_FullPath;

	private int m_UserName;

	private int m_Name;

	private bool m_HasFixedDuration;

	private float m_Duration;

	private float m_NormalizedTime;

	private bool m_AnyState;

	private int m_TransitionType;
}
