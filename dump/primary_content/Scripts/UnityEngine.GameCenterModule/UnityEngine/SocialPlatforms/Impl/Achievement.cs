using System;

namespace UnityEngine.SocialPlatforms.Impl;

public class Achievement : IAchievement
{
	private bool m_Completed;

	private bool m_Hidden;

	private DateTime m_LastReportedDate;

	public string id { get; set; }

	public double percentCompleted { get; set; }

	public bool completed => false;

	public bool hidden => false;

	public DateTime lastReportedDate => default;

	public Achievement(string id, double percentCompleted, bool completed, bool hidden, DateTime lastReportedDate)
	{
	}

	public override string ToString()
	{
		return null;
	}

	public void SetCompleted(bool value)
	{
	}

	public void SetHidden(bool value)
	{
	}

	public void SetLastReportedDate(DateTime date)
	{
	}
}
