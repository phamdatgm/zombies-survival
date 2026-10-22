using System;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore;

[Serializable]
[UsedByNativeCode]
public struct FaceInfo
{
	[SerializeField]
	private int m_FaceIndex;

	[SerializeField]
	private string m_FamilyName;

	[SerializeField]
	private string m_StyleName;

	[SerializeField]
	private int m_PointSize;

	[SerializeField]
	private float m_Scale;

	[SerializeField]
	private int m_UnitsPerEM;

	[SerializeField]
	private float m_LineHeight;

	[SerializeField]
	private float m_AscentLine;

	[SerializeField]
	private float m_CapLine;

	[SerializeField]
	private float m_MeanLine;

	[SerializeField]
	private float m_Baseline;

	[SerializeField]
	private float m_DescentLine;

	[SerializeField]
	private float m_SuperscriptOffset;

	[SerializeField]
	private float m_SuperscriptSize;

	[SerializeField]
	private float m_SubscriptOffset;

	[SerializeField]
	private float m_SubscriptSize;

	[SerializeField]
	private float m_UnderlineOffset;

	[SerializeField]
	private float m_UnderlineThickness;

	[SerializeField]
	private float m_StrikethroughOffset;

	[SerializeField]
	private float m_StrikethroughThickness;

	[SerializeField]
	private float m_TabWidth;

	internal int faceIndex => 0;

	public string familyName => null;

	public string styleName => null;

	public int pointSize => 0;

	public float scale
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public float lineHeight => 0f;

	public float ascentLine => 0f;

	public float capLine
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public float meanLine
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public float baseline => 0f;

	public float descentLine => 0f;

	public float superscriptOffset => 0f;

	public float superscriptSize => 0f;

	public float subscriptOffset => 0f;

	public float subscriptSize => 0f;

	public float underlineOffset => 0f;

	public float underlineThickness => 0f;

	public float strikethroughOffset
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public float tabWidth => 0f;
}
