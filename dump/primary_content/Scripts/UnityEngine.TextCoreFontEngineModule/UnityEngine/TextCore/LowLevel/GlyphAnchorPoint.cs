using System;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Serializable]
[UsedByNativeCode]
internal struct GlyphAnchorPoint
{
	[SerializeField]
	private float m_XCoordinate;

	[SerializeField]
	private float m_YCoordinate;

	public float xCoordinate => 0f;

	public float yCoordinate => 0f;
}
