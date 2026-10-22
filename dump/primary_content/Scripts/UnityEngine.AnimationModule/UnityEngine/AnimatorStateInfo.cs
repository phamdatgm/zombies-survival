using UnityEngine.Scripting;

namespace UnityEngine;

[RequiredByNativeCode]
public struct AnimatorStateInfo
{
	private int m_Name;

	private int m_Path;

	private int m_FullPath;

	private float m_NormalizedTime;

	private float m_Length;

	private float m_Speed;

	private float m_SpeedMultiplier;

	private int m_Tag;

	private int m_Loop;
}
