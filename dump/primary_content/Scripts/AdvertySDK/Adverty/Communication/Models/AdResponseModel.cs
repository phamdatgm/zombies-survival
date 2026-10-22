namespace Adverty.Communication.Models;

internal class AdResponseModel : ResponseModel
{
	public struct Data
	{
		public AdModel[] ads { get; set; }
	}

	public Data data { get; set; }
}
