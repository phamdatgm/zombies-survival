using System;
using System.Net;

namespace Adverty.Communication;

public class AdvertyWebClient : WebClient
{
	protected override WebRequest GetWebRequest(Uri address)
	{
		return null;
	}
}
