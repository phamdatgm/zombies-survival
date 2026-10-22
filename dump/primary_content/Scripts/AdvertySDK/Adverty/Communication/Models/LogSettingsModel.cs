namespace Adverty.Communication.Models;

internal struct LogSettingsModel
{
	public bool allowSendingLogs { get; set; }

	public int maxSizeBytes { get; set; }
}
