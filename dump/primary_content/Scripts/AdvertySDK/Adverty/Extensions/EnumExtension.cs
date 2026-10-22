using System;

namespace Adverty.Extensions;

public static class EnumExtension
{
	public static T GetAttribute<T>(this Enum value) where T : Attribute
	{
		return null;
	}

	public static string ToName(this Enum value)
	{
		return null;
	}

	public static string[] ToStringArray(this Enum value)
	{
		return null;
	}
}
