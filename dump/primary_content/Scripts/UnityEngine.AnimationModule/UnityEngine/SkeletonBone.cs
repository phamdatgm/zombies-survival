using UnityEngine.Scripting;

namespace UnityEngine;

[RequiredByNativeCode]
public struct SkeletonBone
{
	public string name;

	internal string parentName;

	public Vector3 position;

	public Quaternion rotation;

	public Vector3 scale;
}
