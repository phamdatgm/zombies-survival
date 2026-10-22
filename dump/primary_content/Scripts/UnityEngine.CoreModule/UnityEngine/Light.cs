using System.Runtime.CompilerServices;

namespace UnityEngine;

[RequireComponent(typeof(Transform))]
[RequireComponent(typeof(Transform))]
public sealed class Light : Behaviour
{
	private int m_BakedIndex;

	public LightType type => LightType.Spot;

	public float spotAngle => 0f;

	public Color color => default;

	public float colorTemperature => 0f;

	public bool useColorTemperature => false;

	public float intensity => 0f;

	public float bounceIntensity => 0f;

	public float range => 0f;

	public LightBakingOutput bakingOutput => default;

	public LightShadows shadows => LightShadows.None;

	public float cookieSize => 0f;

	public Texture cookie => null;

	[SpecialName]
	private void get_color_Injected(out Color ret)
	{
		ret = default;
	}

	[SpecialName]
	private void get_bakingOutput_Injected(out LightBakingOutput ret)
	{
		ret = default;
	}
}
