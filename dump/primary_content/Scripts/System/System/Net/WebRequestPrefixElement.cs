namespace System.Net;

internal class WebRequestPrefixElement
{
	public string Prefix;

	internal IWebRequestCreate creator;

	internal Type creatorType;

	public IWebRequestCreate Creator => null;

	public WebRequestPrefixElement(string P, IWebRequestCreate C)
	{
	}
}
