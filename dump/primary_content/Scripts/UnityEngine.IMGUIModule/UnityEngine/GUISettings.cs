using System;

namespace UnityEngine;

[Serializable]
public sealed class GUISettings
{
	[SerializeField]
	private bool m_DoubleClickSelectsWord;

	[SerializeField]
	private bool m_TripleClickSelectsLine;

	[SerializeField]
	private Color m_CursorColor;

	[SerializeField]
	private float m_CursorFlashSpeed;

	[SerializeField]
	private Color m_SelectionColor;

	public bool doubleClickSelectsWord => false;

	public bool tripleClickSelectsLine => false;

	public Color cursorColor => default;

	public float cursorFlashSpeed => 0f;

	public Color selectionColor => default;

	private static float Internal_GetCursorFlashSpeed()
	{
		return 0f;
	}
}
