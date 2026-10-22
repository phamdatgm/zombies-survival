using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Messaging;

namespace System.Runtime.Remoting.Contexts;

/// <summary>Defines an environment for the objects that are resident inside it and for which a policy can be enforced.</summary>
[StructLayout((LayoutKind)0)]
public class Context
{
	private int domain_id;

	private int context_id;

	private UIntPtr static_data;

	private UIntPtr data;

	private IMessageSink server_context_sink_chain;

	private IMessageSink client_context_sink_chain;

	private List<IContextProperty> context_properties;

	private static int global_count;

	private LocalDataStoreHolder _localDataStore;

	private static LocalDataStoreMgr _localDataStoreMgr;

	private DynamicPropertyCollection context_dynamic_properties;

	private ContextCallbackObject callback_object;

	private static void RegisterContext(Context ctx)
	{
	}

	private static void ReleaseContext(Context ctx)
	{
	}

	/// <summary>Initializes a new instance of the <see cref="T:System.Runtime.Remoting.Contexts.Context" /> class.</summary>
	public Context()
	{
	}

	/// <summary>Cleans up the backing objects for the nondefault contexts.</summary>
	~Context()
	{
	}

	/// <summary>Returns a <see cref="T:System.String" /> class representation of the current context.</summary>
	/// <returns>A <see cref="T:System.String" /> class representation of the current context.</returns>
	public override string ToString()
	{
		return null;
	}
}
