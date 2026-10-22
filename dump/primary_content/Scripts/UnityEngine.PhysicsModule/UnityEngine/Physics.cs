using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Unity.Collections;
using UnityEngine.Scripting;

namespace UnityEngine;

public class Physics
{
	public delegate void ContactEventDelegate(PhysicsScene scene, NativeArray<ContactPairHeader>.ReadOnly headerArray);

	[CompilerGenerated]
	private static Action<PhysicsScene, NativeArray<ModifiableContactPair>> ContactModifyEvent;

	[CompilerGenerated]
	private static Action<PhysicsScene, NativeArray<ModifiableContactPair>> ContactModifyEventCCD;

	[CompilerGenerated]
	private static ContactEventDelegate ContactEvent;

	private static readonly Collision s_ReusableCollision;

	public static bool invokeCollisionCallbacks => false;

	public static PhysicsScene defaultPhysicsScene => default;

	public static bool reuseCollisionCallbacks => false;

	[RequiredByNativeCode]
	private static void OnSceneContactModify(PhysicsScene scene, IntPtr buffer, int count, bool isCCD)
	{
	}

	public static void IgnoreLayerCollision(int layer1, int layer2, bool ignore)
	{
	}

	public static void IgnoreLayerCollision(int layer1, int layer2)
	{
	}

	public static bool Raycast(Vector3 origin, Vector3 direction, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return false;
	}

	public static bool Raycast(Vector3 origin, Vector3 direction, float maxDistance, int layerMask)
	{
		return false;
	}

	public static bool Raycast(Vector3 origin, Vector3 direction, float maxDistance)
	{
		return false;
	}

	public static bool Raycast(Vector3 origin, Vector3 direction)
	{
		return false;
	}

	public static bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		hitInfo = default;
		return false;
	}

	[RequiredByNativeCode]
	public static bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask)
	{
		hitInfo = default;
		return false;
	}

	public static bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo, float maxDistance)
	{
		hitInfo = default;
		return false;
	}

	public static bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo)
	{
		hitInfo = default;
		return false;
	}

	public static bool Raycast(Ray ray, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return false;
	}

	public static bool Raycast(Ray ray, float maxDistance, int layerMask)
	{
		return false;
	}

	public static bool Raycast(Ray ray, float maxDistance)
	{
		return false;
	}

	public static bool Raycast(Ray ray)
	{
		return false;
	}

	public static bool Raycast(Ray ray, out RaycastHit hitInfo, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		hitInfo = default;
		return false;
	}

	public static bool Raycast(Ray ray, out RaycastHit hitInfo, float maxDistance, int layerMask)
	{
		hitInfo = default;
		return false;
	}

	public static bool Raycast(Ray ray, out RaycastHit hitInfo, float maxDistance)
	{
		hitInfo = default;
		return false;
	}

	public static bool Raycast(Ray ray, out RaycastHit hitInfo)
	{
		hitInfo = default;
		return false;
	}

	private static RaycastHit[] Internal_RaycastAll(PhysicsScene physicsScene, Ray ray, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	public static RaycastHit[] RaycastAll(Vector3 origin, Vector3 direction, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	public static RaycastHit[] RaycastAll(Vector3 origin, Vector3 direction, float maxDistance, int layerMask)
	{
		return null;
	}

	public static RaycastHit[] RaycastAll(Vector3 origin, Vector3 direction, float maxDistance)
	{
		return null;
	}

	public static RaycastHit[] RaycastAll(Vector3 origin, Vector3 direction)
	{
		return null;
	}

	public static RaycastHit[] RaycastAll(Ray ray, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[RequiredByNativeCode]
	public static RaycastHit[] RaycastAll(Ray ray, float maxDistance, int layerMask)
	{
		return null;
	}

	public static RaycastHit[] RaycastAll(Ray ray, float maxDistance)
	{
		return null;
	}

	public static RaycastHit[] RaycastAll(Ray ray)
	{
		return null;
	}

	public static int RaycastNonAlloc(Ray ray, RaycastHit[] results, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return 0;
	}

	[RequiredByNativeCode]
	public static int RaycastNonAlloc(Ray ray, RaycastHit[] results, float maxDistance, int layerMask)
	{
		return 0;
	}

	public static int RaycastNonAlloc(Ray ray, RaycastHit[] results, float maxDistance)
	{
		return 0;
	}

	public static int RaycastNonAlloc(Ray ray, RaycastHit[] results)
	{
		return 0;
	}

	public static int RaycastNonAlloc(Vector3 origin, Vector3 direction, RaycastHit[] results, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return 0;
	}

	public static int RaycastNonAlloc(Vector3 origin, Vector3 direction, RaycastHit[] results, float maxDistance, int layerMask)
	{
		return 0;
	}

	public static int RaycastNonAlloc(Vector3 origin, Vector3 direction, RaycastHit[] results, float maxDistance)
	{
		return 0;
	}

	public static int RaycastNonAlloc(Vector3 origin, Vector3 direction, RaycastHit[] results)
	{
		return 0;
	}

	internal static Collider GetColliderByInstanceID(int instanceID)
	{
		return null;
	}

	internal static Component GetBodyByInstanceID(int instanceID)
	{
		return null;
	}

	private static void SendOnCollisionEnter(Component component, Collision collision)
	{
	}

	private static void SendOnCollisionStay(Component component, Collision collision)
	{
	}

	private static void SendOnCollisionExit(Component component, Collision collision)
	{
	}

	[RequiredByNativeCode]
	private static void OnSceneContact(PhysicsScene scene, IntPtr buffer, int count)
	{
	}

	private static void ReportContacts(NativeArray<ContactPairHeader>.ReadOnly array)
	{
	}

	private static Collision GetCollisionToReport([In] ref ContactPairHeader header, [In] ref ContactPair pair, bool flipped)
	{
		return null;
	}

	[SpecialName]
	private static void get_defaultPhysicsScene_Injected(out PhysicsScene ret)
	{
		ret = default;
	}

	private static RaycastHit[] Internal_RaycastAll_Injected(ref PhysicsScene physicsScene, ref Ray ray, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}
}
