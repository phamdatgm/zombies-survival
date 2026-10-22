using System;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Serializable]
[UsedByNativeCode]
internal struct MarkPositionAdjustment
{
	[SerializeField]
	private float m_XPositionAdjustment;

	[SerializeField]
	private float m_YPositionAdjustment;

	public float xPositionAdjustment => 0f;

	public float yPositionAdjustment => 0f;
}
