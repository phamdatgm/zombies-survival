using System;
using UnityEngine;

namespace Adverty.AdUnit;

[Serializable]
public class BendSettings
{
	public enum BendAxis
	{
		X = 0,
		Y = 1
	}

	public enum ConcaveConvex
	{
		Concave = 0,
		Convex = 1
	}

	[SerializeField]
	public bool BuildState;

	[SerializeField]
	public float Radius;

	[SerializeField]
	public ConcaveConvex ConcaveOrConvex;

	[SerializeField]
	public BendAxis Axis;

	[SerializeField]
	public bool Bend;
}
