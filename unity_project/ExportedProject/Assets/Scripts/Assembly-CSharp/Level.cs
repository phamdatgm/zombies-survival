using System;

[Serializable]
public class Level
{
	public const int event_id_offset = 100;

	public int id;

	public string translate_key;

	public string scene_id;

	public LevelTasks[] tasks;

	public int unlock_after_lvl_id;

	public int[] progress_percent;

	private GUILevel _gui;

	private float road_anim_time;

	private bool is_hidden;

	private bool is_already_animated;

	public static int last_finished;

	public static int total_story_levels;

	public EventContest event_contest;

	public RewardContest reward_completed_event;

	public Replay event_replay_ghost;

	public bool is_event_attention_icon;

	private float start_task_scale_x;

	public string SceneId => null;

	public bool IsTutorial => false;

	public bool IsEvent => false;

	public int EventId => 0;

	public GUILevel gui => null;

	public bool IsAvailable => false;

	public void BBGODPBKHPF()
	{
	}

	public void FKJAANMGOMP()
	{
	}

	public static Level FHMGLDDPEDJ(int HKGEOJPHLAN)
	{
		return null;
	}

	public void BIBHMOPJLCO()
	{
	}

	public int MNPHCGOJNCN()
	{
		return 0;
	}

	public string DBEGLMBGKNL()
	{
		return null;
	}

	private void CBKFPGOAMCA()
	{
	}

	public void POIIKNJOHOP()
	{
	}

	public void HMPEMADOAAL()
	{
	}

	public void FOOFLNEEJFI()
	{
	}

	public void ICIKEDJLOBK()
	{
	}
}
