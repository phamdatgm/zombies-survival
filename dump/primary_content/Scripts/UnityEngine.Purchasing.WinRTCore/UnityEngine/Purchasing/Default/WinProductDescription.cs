namespace UnityEngine.Purchasing.Default;

public class WinProductDescription
{
	private string platformSpecificID { set; }

	private string price { set; }

	private string title { set; }

	private string description { set; }

	private string ISOCurrencyCode { set; }

	private decimal priceDecimal { set; }

	private string receipt { set; }

	private string transactionID { set; }

	private bool consumable { set; }

	public WinProductDescription(string id, string price, string title, string description, string isoCode, decimal priceD, string receipt = null, string transactionId = null, bool consumable = false)
	{
	}
}
