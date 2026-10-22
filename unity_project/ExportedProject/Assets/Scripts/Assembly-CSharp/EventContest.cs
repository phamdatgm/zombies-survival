using System;

[Serializable]
public class EventContest
{
	public int id;

	public int lvl_id;

	public MDGGLDMKCFB mode;

	public MMOCGEKHBKE status;

	public RewardContest[] reward;

	public int time;

	public Replay[] replays;

	public int TimeLeft => 0;

	public PMJPCDJMHPK sort => PMJPCDJMHPK.PointsAndTime;

	public string desc => null;

	public int car_id => 0;

	public bool IsUseCustonPoints => false;
}
