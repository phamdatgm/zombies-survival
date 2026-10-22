using System.Runtime.CompilerServices;

namespace UnityEngine;

[RequireComponent(typeof(Transform))]
public class Rigidbody : Component
{
	public Vector3 velocity
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public Vector3 angularVelocity
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public float mass
	{
		set
		{
		}
	}

	public bool isKinematic
	{
		set
		{
		}
	}

	public Vector3 centerOfMass
	{
		get
		{
			return default;
		}
		set
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

	public RigidbodyInterpolation interpolation
	{
		set
		{
		}
	}

	public void MovePosition(Vector3 position)
	{
	}

	public void Sleep()
	{
	}

	public void WakeUp()
	{
	}

	public void AddForce(Vector3 force, ForceMode mode)
	{
	}

	public void AddForce(Vector3 force)
	{
	}

	public void AddTorque(Vector3 torque, ForceMode mode)
	{
	}

	public void AddForceAtPosition(Vector3 force, Vector3 position, ForceMode mode)
	{
	}

	public void AddExplosionForce(float explosionForce, Vector3 explosionPosition, float explosionRadius, float upwardsModifier, ForceMode mode)
	{
	}

	public void AddExplosionForce(float explosionForce, Vector3 explosionPosition, float explosionRadius)
	{
	}

	[SpecialName]
	private void get_velocity_Injected(out Vector3 ret)
	{
		ret = default;
	}

	[SpecialName]
	private void set_velocity_Injected(ref Vector3 value)
	{
	}

	[SpecialName]
	private void get_angularVelocity_Injected(out Vector3 ret)
	{
		ret = default;
	}

	[SpecialName]
	private void set_angularVelocity_Injected(ref Vector3 value)
	{
	}

	[SpecialName]
	private void get_centerOfMass_Injected(out Vector3 ret)
	{
		ret = default;
	}

	[SpecialName]
	private void set_centerOfMass_Injected(ref Vector3 value)
	{
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
	private void get_rotation_Injected(out Quaternion ret)
	{
		ret = default;
	}

	[SpecialName]
	private void set_rotation_Injected(ref Quaternion value)
	{
	}

	private void MovePosition_Injected(ref Vector3 position)
	{
	}

	private void AddForce_Injected(ref Vector3 force, ForceMode mode)
	{
	}

	private void AddTorque_Injected(ref Vector3 torque, ForceMode mode)
	{
	}

	private void AddForceAtPosition_Injected(ref Vector3 force, ref Vector3 position, ForceMode mode)
	{
	}

	private void AddExplosionForce_Injected(float explosionForce, ref Vector3 explosionPosition, float explosionRadius, float upwardsModifier, ForceMode mode)
	{
	}
}
