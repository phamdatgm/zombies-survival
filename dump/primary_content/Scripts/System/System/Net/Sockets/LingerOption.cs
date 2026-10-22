namespace System.Net.Sockets;

/// <summary>Specifies whether a <see cref="T:System.Net.Sockets.Socket" /> will remain connected after a call to the <see cref="M:System.Net.Sockets.Socket.Close" /> or <see cref="M:System.Net.Sockets.TcpClient.Close" /> methods and the length of time it will remain connected, if data remains to be sent.</summary>
public class LingerOption
{
	private bool enabled;

	private int lingerTime;

	/// <summary>Initializes a new instance of the <see cref="T:System.Net.Sockets.LingerOption" /> class.</summary>
	/// <param name="enable">
	///   <see langword="true" /> to remain connected after the <see cref="M:System.Net.Sockets.Socket.Close" /> method is called; otherwise, <see langword="false" />.</param>
	/// <param name="seconds">The number of seconds to remain connected after the <see cref="M:System.Net.Sockets.Socket.Close" /> method is called.</param>
	public LingerOption(bool enable, int seconds)
	{
	}
}
