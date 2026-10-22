using System;
using System.ComponentModel;
using UnityEngine;

namespace Adverty.AdUnit;

[Serializable]
[Obsolete("Deprecated")]
public struct SceneContext
{
	[Obsolete("Deprecated")]
	public enum UnitSize
	{
		S = 1,
		M = 2,
		L = 3,
		Other = 4
	}

	[Obsolete("Deprecated")]
	public enum TimePeriod
	{
		[Description(null)]
		Unspecified = 0,
		[Description("Past")]
		Past = 1,
		[Description("Present")]
		Present = 2,
		[Description("Future")]
		Future = 3,
		[Description("Other")]
		Other = 4
	}

	[Obsolete("Deprecated")]
	public enum AdSetting
	{
		[Description(null)]
		Unspecified = 0,
		[Description("Indoor")]
		Indoor = 1,
		[Description("Outdoor")]
		Outdoor = 2,
		[Description("Other")]
		Other = 3
	}

	[Obsolete("Deprecated")]
	public enum SceneLighting
	{
		[Description(null)]
		Unspecified = 0,
		[Description("Light")]
		Light = 1,
		[Description("Dark")]
		Dark = 2,
		[Description("Other")]
		Other = 3
	}

	[Obsolete("Deprecated")]
	public enum SceneTime
	{
		[Description(null)]
		Unspecified = 0,
		[Description("Day")]
		Day = 1,
		[Description("Night")]
		Night = 2,
		[Description("Other")]
		Other = 3
	}

	[Obsolete("Deprecated")]
	[Flags]
	public enum Location
	{
		None = 0,
		Forest = 1,
		Dessert = 2,
		City = 4,
		Suburb = 8,
		Industrial = 0x10,
		Space = 0x20,
		Ocean = 0x40,
		Arena = 0x80,
		Other = 0x100
	}

	[SerializeField]
	internal string Graphics;

	[SerializeField]
	public SceneLighting Lighting;

	[SerializeField]
	public Location Locations;

	[SerializeField]
	public AdSetting Setting;

	[SerializeField]
	public UnitSize Size;

	[SerializeField]
	public SceneTime Time;

	[SerializeField]
	public TimePeriod Period;

	public void AddLocation(Location location)
	{
	}

	public void RemoveLocation(Location location)
	{
	}

	public string[] LocationToStringArray()
	{
		return null;
	}
}
