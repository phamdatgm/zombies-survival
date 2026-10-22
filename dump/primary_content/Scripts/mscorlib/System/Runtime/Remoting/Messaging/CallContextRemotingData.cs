namespace System.Runtime.Remoting.Messaging;

[Serializable]
internal class CallContextRemotingData : ICloneable
{
	private string _logicalCallID;

	internal bool HasInfo => false;

	public object Clone()
	{
		return null;
	}
}
