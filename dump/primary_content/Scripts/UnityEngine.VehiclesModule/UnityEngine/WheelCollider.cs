using System.Runtime.CompilerServices;

namespace UnityEngine;

public class WheelCollider : Collider
{
	public float radius
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public float suspensionDistance
	{
		set
		{
		}
	}

	public JointSpring suspensionSpring
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

	public float wheelDampingRate
	{
		set
		{
		}
	}

	public WheelFrictionCurve forwardFriction
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public float motorTorque
	{
		set
		{
		}
	}

	public float brakeTorque
	{
		set
		{
		}
	}

	public float rpm => 0f;

	public void GetWorldPose(out Vector3 pos, out Quaternion quat)
	{
		pos = default;
		quat = default;
	}

	public bool GetGroundHit(out WheelHit hit)
	{
		hit = default;
		return false;
	}

	[SpecialName]
	private void get_suspensionSpring_Injected(out JointSpring ret)
	{
		ret = default;
	}

	[SpecialName]
	private void set_suspensionSpring_Injected(ref JointSpring value)
	{
	}

	[SpecialName]
	private void get_forwardFriction_Injected(out WheelFrictionCurve ret)
	{
		ret = default;
	}

	[SpecialName]
	private void set_forwardFriction_Injected(ref WheelFrictionCurve value)
	{
	}
}
