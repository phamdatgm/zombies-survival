using System;
using UnityEngine.Scripting;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.U2D;

[Serializable]
[RequiredByNativeCode]
[MovedFrom("UnityEngine.Experimental.U2D")]
public struct SpriteBone
{
	[SerializeField]
	private string m_Name;

	[SerializeField]
	private string m_Guid;

	[SerializeField]
	private Vector3 m_Position;

	[SerializeField]
	private Quaternion m_Rotation;

	[SerializeField]
	private float m_Length;

	[SerializeField]
	private int m_ParentId;

	[SerializeField]
	private Color32 m_Color;
}
