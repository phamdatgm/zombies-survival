using Adverty.Native;
using Adverty.Native.Interface;

namespace Adverty.PlatformSpecific;

internal class IosSystemVersion : ISystemVersion, INativeClass
{
	public string GetSystemVersion()
	{
		return null;
	}
}
