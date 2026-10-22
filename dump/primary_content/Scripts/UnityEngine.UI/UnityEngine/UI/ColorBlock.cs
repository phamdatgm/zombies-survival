using System;
using UnityEngine.Serialization;

namespace UnityEngine.UI;

[Serializable]
public struct ColorBlock : IEquatable<ColorBlock>
{
	[FormerlySerializedAs("normalColor")]
	[SerializeField]
	private Color m_NormalColor;

	[FormerlySerializedAs("highlightedColor")]
	[SerializeField]
	private Color m_HighlightedColor;

	[FormerlySerializedAs("pressedColor")]
	[SerializeField]
	private Color m_PressedColor;

	[FormerlySerializedAs("m_HighlightedColor")]
	[SerializeField]
	private Color m_SelectedColor;

	[FormerlySerializedAs("disabledColor")]
	[SerializeField]
	private Color m_DisabledColor;

	[SerializeField]
	private float m_ColorMultiplier;

	[FormerlySerializedAs("fadeDuration")]
	[SerializeField]
	private float m_FadeDuration;

	public static ColorBlock defaultColorBlock;

	public Color normalColor
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public Color highlightedColor => default;

	public Color pressedColor => default;

	public Color selectedColor => default;

	public Color disabledColor => default;

	public float colorMultiplier
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public float fadeDuration
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	static ColorBlock()
	{
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public bool Equals(ColorBlock other)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}
}
