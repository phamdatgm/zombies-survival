namespace UnityEngine.UIElements.StyleSheets;

internal struct MatchResultInfo(bool success, PseudoStates triggerPseudoMask, PseudoStates dependencyPseudoMask)
{
	public readonly bool success = false;

	public readonly PseudoStates triggerPseudoMask = (PseudoStates)0;

	public readonly PseudoStates dependencyPseudoMask = (PseudoStates)0;
}
