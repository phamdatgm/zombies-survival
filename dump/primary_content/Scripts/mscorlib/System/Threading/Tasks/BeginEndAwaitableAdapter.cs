namespace System.Threading.Tasks;

internal sealed class BeginEndAwaitableAdapter : RendezvousAwaitable<IAsyncResult>
{
	public static readonly AsyncCallback Callback;
}
