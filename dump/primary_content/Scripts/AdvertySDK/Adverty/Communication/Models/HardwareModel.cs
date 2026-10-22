using Adverty.Utility.RenderPipeline;

namespace Adverty.Communication.Models;

internal struct HardwareModel
{
	private bool isDataShareEnabled;

	public string os { get; set; }

	public string platform { get; set; }

	public string deviceModel { get; set; }

	public string deviceType { get; set; }

	public string graphicsAPI { get; set; }

	public string advertisingID { get; set; }

	public string deviceID { get; set; }

	public bool limitedAdTracking { get; set; }

	public int trackingAuthorizationStatus { get; set; }

	public string hmd { get; set; }

	public bool supportsComputeShaders { get; set; }

	public string locale { get; set; }

	public string connectionType { get; set; }

	public string userAgent { get; set; }

	public string unityVersion { get; set; }

	public ScreenResolution screenResolution { get; set; }

	public RenderPipelineData renderPipelineData { get; set; }

	private static bool IsDataShareEnabled => false;

	private string AdvertisingId => null;

	private string DeviceId => null;

	private static ScreenResolution GetScreenResolution()
	{
		return default;
	}

	internal bool IsEmpty()
	{
		return false;
	}

	internal void Fill()
	{
	}

	internal void Update()
	{
	}
}
