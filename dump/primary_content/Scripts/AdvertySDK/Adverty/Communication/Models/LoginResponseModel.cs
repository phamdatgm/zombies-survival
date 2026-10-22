namespace Adverty.Communication.Models;

internal class LoginResponseModel : ResponseModel
{
	public struct Data
	{
		public string accessToken { get; set; }

		public LocalizationData localization { get; set; }

		public SettingsModel settings { get; set; }

		public LogSettingsModel logSettings { get; set; }
	}

	public struct SettingsModel
	{
		public int version { get; set; }

		public SettingsData fields { get; set; }
	}

	public Data data { get; set; }
}
