namespace System.Net;

internal struct HeaderVariantInfo
{
	private string m_name = null;

	private CookieVariant m_variant = CookieVariant.Unknown;

	internal HeaderVariantInfo(string name, CookieVariant variant)
	{
	}
}
