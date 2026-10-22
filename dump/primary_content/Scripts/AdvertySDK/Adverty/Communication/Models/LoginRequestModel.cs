using System.Collections.Generic;

namespace Adverty.Communication.Models;

internal class LoginRequestModel : RequestModel
{
	public string clientKey { get; private set; }

	public HardwareModel hardwareDescription { get; private set; }

	public string sdkVersion { get; private set; }

	public Dictionary<string, string> userDescription { get; private set; }

	public Dictionary<string, bool> localSettings { get; private set; }
}
