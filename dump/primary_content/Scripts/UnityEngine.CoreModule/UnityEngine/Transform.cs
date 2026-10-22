using System.Collections;
using System.Runtime.CompilerServices;
using UnityEngine.Scripting;

namespace UnityEngine;

[RequiredByNativeCode]
public class Transform : Component, IEnumerable
{
	private class Enumerator : IEnumerator
	{
		private Transform outer;

		private int currentIndex;

		public object Current => null;

		internal Enumerator(Transform outer)
		{
		}

		public bool MoveNext()
		{
			return false;
		}

		public void Reset()
		{
		}
	}

	public Vector3 position
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public Vector3 localPosition
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public Vector3 eulerAngles => default;

	public Vector3 localEulerAngles
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public Vector3 right => default;

	public Vector3 up
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public Vector3 forward
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public Quaternion rotation
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public Quaternion localRotation
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public Vector3 localScale
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public Transform parent
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	internal Transform parentInternal
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public Matrix4x4 worldToLocalMatrix => default;

	public Matrix4x4 localToWorldMatrix => default;

	public Transform root => null;

	public int childCount => 0;

	public Vector3 lossyScale => default;

	protected Transform()
	{
	}

	private Transform GetParent()
	{
		return null;
	}

	public void SetParent(Transform p)
	{
	}

	public void SetParent(Transform parent, bool worldPositionStays)
	{
	}

	public void SetPositionAndRotation(Vector3 position, Quaternion rotation)
	{
	}

	public void Translate(Vector3 translation, Space relativeTo)
	{
	}

	public void Translate(Vector3 translation)
	{
	}

	public void Rotate(Vector3 eulers, Space relativeTo)
	{
	}

	public void Rotate(Vector3 eulers)
	{
	}

	public Vector3 TransformDirection(Vector3 direction)
	{
		return default;
	}

	public Vector3 TransformVector(Vector3 vector)
	{
		return default;
	}

	public Vector3 TransformPoint(Vector3 position)
	{
		return default;
	}

	public Vector3 InverseTransformPoint(Vector3 position)
	{
		return default;
	}

	private Transform GetRoot()
	{
		return null;
	}

	public void SetAsFirstSibling()
	{
	}

	public void SetAsLastSibling()
	{
	}

	public bool IsChildOf(Transform parent)
	{
		return false;
	}

	public IEnumerator GetEnumerator()
	{
		return null;
	}

	public Transform GetChild(int index)
	{
		return null;
	}

	[SpecialName]
	private void get_position_Injected(out Vector3 ret)
	{
		ret = default;
	}

	[SpecialName]
	private void set_position_Injected(ref Vector3 value)
	{
	}

	[SpecialName]
	private void get_localPosition_Injected(out Vector3 ret)
	{
		ret = default;
	}

	[SpecialName]
	private void set_localPosition_Injected(ref Vector3 value)
	{
	}

	[SpecialName]
	private void get_rotation_Injected(out Quaternion ret)
	{
		ret = default;
	}

	[SpecialName]
	private void set_rotation_Injected(ref Quaternion value)
	{
	}

	[SpecialName]
	private void get_localRotation_Injected(out Quaternion ret)
	{
		ret = default;
	}

	[SpecialName]
	private void set_localRotation_Injected(ref Quaternion value)
	{
	}

	[SpecialName]
	private void get_localScale_Injected(out Vector3 ret)
	{
		ret = default;
	}

	[SpecialName]
	private void set_localScale_Injected(ref Vector3 value)
	{
	}

	[SpecialName]
	private void get_worldToLocalMatrix_Injected(out Matrix4x4 ret)
	{
		ret = default;
	}

	[SpecialName]
	private void get_localToWorldMatrix_Injected(out Matrix4x4 ret)
	{
		ret = default;
	}

	private void SetPositionAndRotation_Injected(ref Vector3 position, ref Quaternion rotation)
	{
	}

	private void TransformDirection_Injected(ref Vector3 direction, out Vector3 ret)
	{
		ret = default;
	}

	private void TransformVector_Injected(ref Vector3 vector, out Vector3 ret)
	{
		ret = default;
	}

	private void TransformPoint_Injected(ref Vector3 position, out Vector3 ret)
	{
		ret = default;
	}

	private void InverseTransformPoint_Injected(ref Vector3 position, out Vector3 ret)
	{
		ret = default;
	}

	[SpecialName]
	private void get_lossyScale_Injected(out Vector3 ret)
	{
		ret = default;
	}
}
