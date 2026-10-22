using System;

namespace Unity.Services.Analytics.Internal;

internal interface IDispatcherDebug
{
	event Action<byte[]> FlushStarted;

	event Action<int, bool, bool, bool, bool, byte[]> FlushFinished;
}
