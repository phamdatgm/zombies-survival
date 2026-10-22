namespace Adverty.Utility.RenderPipeline;

public static class RenderPipelineDataCollector
{
	private const string Ek = "UniversalRenderPipeline";

	private const string EL = "HDRenderPipeline";

	public static RenderPipelineType GetRenderPipelineType()
	{
		return RenderPipelineType.Unknown;
	}

	public static void SaveToSettings(RenderPipelineType pipelineType, string version = "")
	{
	}
}
