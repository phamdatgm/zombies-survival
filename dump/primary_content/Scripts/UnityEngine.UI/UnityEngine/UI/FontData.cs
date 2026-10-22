using System;
using UnityEngine.Serialization;

namespace UnityEngine.UI;

[Serializable]
public class FontData : ISerializationCallbackReceiver
{
	[FormerlySerializedAs("font")]
	[SerializeField]
	private Font m_Font;

	[FormerlySerializedAs("fontSize")]
	[SerializeField]
	private int m_FontSize;

	[SerializeField]
	[FormerlySerializedAs("fontStyle")]
	private FontStyle m_FontStyle;

	[SerializeField]
	private bool m_BestFit;

	[SerializeField]
	private int m_MinSize;

	[SerializeField]
	private int m_MaxSize;

	[SerializeField]
	[FormerlySerializedAs("alignment")]
	private TextAnchor m_Alignment;

	[SerializeField]
	private bool m_AlignByGeometry;

	[FormerlySerializedAs("richText")]
	[SerializeField]
	private bool m_RichText;

	[SerializeField]
	private HorizontalWrapMode m_HorizontalOverflow;

	[SerializeField]
	private VerticalWrapMode m_VerticalOverflow;

	[SerializeField]
	private float m_LineSpacing;

	public static FontData defaultFontData => null;

	public Font font
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public int fontSize
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public FontStyle fontStyle
	{
		get
		{
			return FontStyle.Normal;
		}
		set
		{
		}
	}

	public bool bestFit
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public int minSize
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public int maxSize
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public TextAnchor alignment
	{
		get
		{
			return TextAnchor.UpperLeft;
		}
		set
		{
		}
	}

	public bool alignByGeometry
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public bool richText
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public HorizontalWrapMode horizontalOverflow
	{
		get
		{
			return HorizontalWrapMode.Wrap;
		}
		set
		{
		}
	}

	public VerticalWrapMode verticalOverflow
	{
		get
		{
			return VerticalWrapMode.Truncate;
		}
		set
		{
		}
	}

	public float lineSpacing
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	void ISerializationCallbackReceiver.OnBeforeSerialize()
	{
	}

	void ISerializationCallbackReceiver.OnAfterDeserialize()
	{
	}
}
