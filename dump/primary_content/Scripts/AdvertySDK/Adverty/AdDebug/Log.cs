using System;

namespace Adverty.AdDebug;

[Serializable]
internal struct Log
{
	public string level;

	public string logger;

	public string value;

	public string createdAt;
}
