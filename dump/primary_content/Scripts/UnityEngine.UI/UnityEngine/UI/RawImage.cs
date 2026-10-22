using UnityEngine.Serialization;

namespace UnityEngine.UI;

[RequireComponent(typeof(CanvasRenderer))]
public class RawImage : MaskableGraphic
{
	[FormerlySerializedAs("m_Tex")]
	[SerializeField]
	private Texture m_Texture;

	[SerializeField]
	private Rect m_UVRect;

	public override Texture mainTexture => null;

	public Texture texture
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public Rect uvRect
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	protected RawImage()
	{
	}

	public override void SetNativeSize()
	{
	}

	protected override void OnPopulateMesh(VertexHelper vh)
	{
	}

	protected override void OnDidApplyAnimationProperties()
	{
	}
}
