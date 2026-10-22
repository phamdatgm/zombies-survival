using System;

namespace UnityEngine.SocialPlatforms;

public interface IAchievement
{
	string id { get; }

	double percentCompleted { get; }

	bool completed { get; }

	DateTime lastReportedDate { get; }
}
