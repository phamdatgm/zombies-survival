using System.Collections.Generic;
using System.IO;
using System.Text;

namespace Newtonsoft.Json;

internal struct JsonPosition(JsonContainerType type)
{
	private static readonly char[] SpecialCharacters;

	internal JsonContainerType Type = JsonContainerType.None;

	internal int Position = 0;

	internal string? PropertyName = null;

	internal bool HasIndex = false;

	internal int CalculateLength()
	{
		return 0;
	}

	internal void WriteTo(StringBuilder sb, ref StringWriter? writer, ref char[]? buffer)
	{
	}

	internal static bool TypeHasIndex(JsonContainerType type)
	{
		return false;
	}

	internal static string BuildPath(List<JsonPosition> positions, JsonPosition? currentPosition)
	{
		return null;
	}

	internal static string FormatMessage(IJsonLineInfo? lineInfo, string path, string message)
	{
		return null;
	}
}
