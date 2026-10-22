using System;

namespace UnityEngine.Playables;

public struct PlayableBinding
{
	internal delegate PlayableOutput CreateOutputMethod(PlayableGraph graph, string name);

	private string m_StreamName;

	private Object m_SourceObject;

	private Type m_SourceBindingType;

	private CreateOutputMethod m_CreateOutputMethod;

	public static readonly PlayableBinding[] None;

	public static readonly double DefaultDuration;
}
