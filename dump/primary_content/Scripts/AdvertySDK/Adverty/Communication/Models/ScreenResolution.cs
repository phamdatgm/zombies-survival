using UnityEngine;

namespace Adverty.Communication.Models;

internal struct ScreenResolution
{
	public int width { get; set; } = 0;

	public int height { get; set; } = 0;

	public ScreenResolution(Resolution resolution)
	{
	}
}
