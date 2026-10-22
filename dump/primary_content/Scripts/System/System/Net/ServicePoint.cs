using System.Net.Sockets;
using System.Security.Cryptography.X509Certificates;

namespace System.Net;

/// <summary>Provides connection management for HTTP connections.</summary>
public class ServicePoint
{
	private readonly Uri uri;

	private DateTime lastDnsResolve;

	private Version protocolVersion;

	private IPHostEntry host;

	private bool usesProxy;

	private bool sendContinue;

	private bool useConnect;

	private object hostE;

	private bool useNagle;

	private BindIPEndPoint endPointCallback;

	private bool tcp_keepalive;

	private int tcp_keepalive_time;

	private int tcp_keepalive_interval;

	private bool disposed;

	private int connectionLeaseTimeout;

	private int receiveBufferSize;

	private readonly ServicePointManager.SPKey Key;

	private ServicePointScheduler Scheduler;

	private int connectionLimit;

	private int maxIdleTime;

	private object m_ServerCertificateOrBytes;

	private object m_ClientCertificateOrBytes;

	internal bool SendContinue => false;

	private bool HasTimedOut => false;

	internal IPHostEntry HostEntry => null;

	internal ServicePoint(ServicePointManager.SPKey key, Uri uri, int connectionLimit, int maxIdleTime)
	{
	}

	/// <summary>Enables or disables the keep-alive option on a TCP connection.</summary>
	/// <param name="enabled">If set to true, then the TCP keep-alive option on a TCP connection will be enabled using the specified <paramref name="keepAliveTime" /> and <paramref name="keepAliveInterval" /> values.  
	///  If set to false, then the TCP keep-alive option is disabled and the remaining parameters are ignored.  
	///  The default value is false.</param>
	/// <param name="keepAliveTime">Specifies the timeout, in milliseconds, with no activity until the first keep-alive packet is sent.  
	///  The value must be greater than 0.  If a value of less than or equal to zero is passed an <see cref="T:System.ArgumentOutOfRangeException" /> is thrown.</param>
	/// <param name="keepAliveInterval">Specifies the interval, in milliseconds, between when successive keep-alive packets are sent if no acknowledgement is received.  
	///  The value must be greater than 0.  If a value of less than or equal to zero is passed an <see cref="T:System.ArgumentOutOfRangeException" /> is thrown.</param>
	/// <exception cref="T:System.ArgumentOutOfRangeException">The value specified for <paramref name="keepAliveTime" /> or <paramref name="keepAliveInterval" /> parameter is less than or equal to 0.</exception>
	public void SetTcpKeepAlive(bool enabled, int keepAliveTime, int keepAliveInterval)
	{
	}

	internal void KeepAliveSetup(Socket socket)
	{
	}

	private static void PutBytes(byte[] bytes, uint v, int offset)
	{
	}

	internal void SendRequest(WebOperation operation, string groupName)
	{
	}

	internal void FreeServicePoint()
	{
	}

	internal void UpdateServerCertificate(X509Certificate certificate)
	{
	}

	internal void UpdateClientCertificate(X509Certificate certificate)
	{
	}

	internal bool CallEndPointDelegate(Socket sock, IPEndPoint remote)
	{
		return false;
	}
}
