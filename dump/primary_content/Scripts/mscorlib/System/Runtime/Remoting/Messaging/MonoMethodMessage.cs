using System.Reflection;
using System.Runtime.InteropServices;

namespace System.Runtime.Remoting.Messaging;

[Serializable]
[StructLayout((LayoutKind)0)]
internal class MonoMethodMessage
{
	private RuntimeMethodInfo method;

	private object[] args;

	private string[] names;

	private byte[] arg_types;

	public LogicalCallContext ctx;

	public object rval;

	public Exception exc;

	private AsyncResult asyncResult;

	private CallType call_type;

	private string uri;

	private MCMDictionary properties;

	private Identity identity;

	private Type[] methodSignature;

	internal void InitMessage(RuntimeMethodInfo method, object[] out_args)
	{
	}
}
