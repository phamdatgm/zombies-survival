namespace UnityEngine.Rendering;

public sealed class GraphicsSettings : Object
{
	public static bool lightsUseLinearIntensity => false;

	public static RenderPipelineAsset renderPipelineAsset => null;

	private static ScriptableObject INTERNAL_defaultRenderPipeline => null;

	public static RenderPipelineAsset defaultRenderPipeline => null;
}
