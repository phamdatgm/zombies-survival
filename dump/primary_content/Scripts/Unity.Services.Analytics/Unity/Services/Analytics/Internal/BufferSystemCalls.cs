using System;

namespace Unity.Services.Analytics.Internal;

internal class BufferSystemCalls : IBufferSystemCalls
{
	public string GenerateGuid()
	{
		return null;
	}

	public DateTime Now()
	{
		return default;
	}

	public TimeSpan GetTimeZoneUtcOffset(DateTime dateTime)
	{
		return default;
	}
}
