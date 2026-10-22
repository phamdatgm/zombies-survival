using System.Runtime.InteropServices;

namespace UnityEngine;

public class Collision
{
	private ContactPairHeader m_Header;

	private ContactPair m_Pair;

	private bool m_Flipped;

	private ContactPoint[] m_LegacyContacts;

	public Rigidbody rigidbody => null;

	public Component body => null;

	public Collider collider => null;

	public Transform transform => null;

	public GameObject gameObject => null;

	internal bool Flipped
	{
		set
		{
		}
	}

	public ContactPoint[] contacts => null;

	public Collision()
	{
	}

	internal Collision([In] ref ContactPairHeader header, [In] ref ContactPair pair, bool flipped)
	{
	}

	internal void Reuse([In] ref ContactPairHeader header, [In] ref ContactPair pair)
	{
	}
}
