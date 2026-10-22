using System;
using UnityEngine.Serialization;

namespace UnityEngine.UI;

[Serializable]
public class AnimationTriggers
{
	private const string kDefaultNormalAnimName = "Normal";

	private const string kDefaultHighlightedAnimName = "Highlighted";

	private const string kDefaultPressedAnimName = "Pressed";

	private const string kDefaultSelectedAnimName = "Selected";

	private const string kDefaultDisabledAnimName = "Disabled";

	[FormerlySerializedAs("normalTrigger")]
	[SerializeField]
	private string m_NormalTrigger;

	[FormerlySerializedAs("highlightedTrigger")]
	[SerializeField]
	private string m_HighlightedTrigger;

	[SerializeField]
	[FormerlySerializedAs("pressedTrigger")]
	private string m_PressedTrigger;

	[FormerlySerializedAs("m_HighlightedTrigger")]
	[SerializeField]
	private string m_SelectedTrigger;

	[FormerlySerializedAs("disabledTrigger")]
	[SerializeField]
	private string m_DisabledTrigger;

	public string normalTrigger => null;

	public string highlightedTrigger => null;

	public string pressedTrigger => null;

	public string selectedTrigger => null;

	public string disabledTrigger => null;
}
