using UnityEngine;

namespace Adverty.AdUnit;

public static class UnitConfigurationValidator
{
	public const float MINIMUM_SCALE = 0.0001f;

	public const int BASE_UNIT_VERTEX_COUNT = 50;

	public const int BEND_UNIT_VERTEX_COUNT = 242;

	public const int ONE_SIDED_UNIT_VERTEX_COUNT = 25;

	internal const string go = "Adverty generated mesh is required";

	internal const string gP = "Size setting is invalid";

	public static bool IsSizeValid(float meshSize)
	{
		return false;
	}

	public static bool IsValidMesh(Mesh mesh)
	{
		return false;
	}
}
