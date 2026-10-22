namespace UnityEngine.Purchasing;

public class Product
{
	public ProductDefinition definition { get; private set; }

	public ProductMetadata metadata { get; internal set; }

	public bool availableToPurchase { get; internal set; }

	public string transactionID { get; internal set; }

	internal string appleOriginalTransactionID { set; }

	public bool appleProductIsRestored { get; internal set; }

	public bool hasReceipt => false;

	public string receipt { get; internal set; }

	internal Product(ProductDefinition definition, ProductMetadata metadata, string receipt)
	{
	}

	internal Product(ProductDefinition definition, ProductMetadata metadata)
	{
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}
}
