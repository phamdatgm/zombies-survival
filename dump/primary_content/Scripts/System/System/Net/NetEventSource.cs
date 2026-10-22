using System.Diagnostics.Tracing;

namespace System.Net;

internal sealed class NetEventSource : EventSource
{
	public class Keywords
	{
		public const EventKeywords Default = (EventKeywords)1L;

		public const EventKeywords Debug = (EventKeywords)2L;

		public const EventKeywords EnterExit = (EventKeywords)4L;
	}

	public static readonly NetEventSource Log;

	public static bool IsEnabled => false;

	public static void Info(object thisOrContextObject, FormattableString formattableString = null, string memberName = null)
	{
	}

	public static void Fail(object thisOrContextObject, object message, string memberName = null)
	{
	}
}
