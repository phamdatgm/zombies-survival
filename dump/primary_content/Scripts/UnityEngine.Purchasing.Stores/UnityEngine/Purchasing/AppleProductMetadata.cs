namespace UnityEngine.Purchasing;

public class AppleProductMetadata : ProductMetadata
{
	private readonly bool isFamilyShareable;

	internal AppleProductMetadata(ProductMetadata baseProductMetadata, string isFamilyShareable)
		: base(null, null, null, null, 0m)
	{
	}
}
