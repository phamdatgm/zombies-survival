namespace Adverty.Communication.Models;

internal class LogResponseModel : ResponseModel
{
	public struct Data
	{
		public bool allowSendingLogs { get; set; }
	}

	public Data data { get; set; }
}
