using UnityEngine.Scripting;

namespace UnityEngine;

[UsedByNativeCode]
public class Animator : Behaviour
{
	public bool hasBoundPlayables => false;

	public void SetTrigger(string name)
	{
	}

	public void ResetTrigger(string name)
	{
	}

	public void CrossFade(string stateName, float normalizedTransitionDuration)
	{
	}

	public void CrossFade(string stateName, float normalizedTransitionDuration, int layer, float normalizedTimeOffset, float normalizedTransitionTime)
	{
	}

	public void CrossFade(int stateHashName, float normalizedTransitionDuration, int layer, float normalizedTimeOffset, float normalizedTransitionTime)
	{
	}

	public void Play(string stateName)
	{
	}

	public void Play(string stateName, int layer, float normalizedTime)
	{
	}

	public void Play(int stateNameHash, int layer, float normalizedTime)
	{
	}

	public static int StringToHash(string name)
	{
		return 0;
	}

	private void SetTriggerString(string name)
	{
	}

	private void ResetTriggerString(string name)
	{
	}

	public void Update(float deltaTime)
	{
	}
}
