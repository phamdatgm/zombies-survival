using System;
using ReadySprings;
using UnityEngine;

public sealed class SerializableSprings : MonoBehaviour
{
	[Serializable]
	public sealed class SpringFloat : ReadySprings.SpringFloat
	{
	}

	[Serializable]
	public sealed class SpringVec3 : ReadySprings.SpringVec3
	{
	}

	[Serializable]
	public sealed class SpringAngVec3 : ReadySprings.SpringAngVec3
	{
	}

	[Serializable]
	public sealed class SpringDirVec3 : ReadySprings.SpringDirVec3
	{
	}
}
