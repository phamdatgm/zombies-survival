using System.Collections.Specialized;
using System.ComponentModel;
using System.Diagnostics;
using System.IO;
using System.Net.Cache;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace System.Net;

/// <summary>Provides common methods for sending data to and receiving data from a resource identified by a URI.</summary>
public class WebClient : Component
{
	private sealed class ProgressData
	{
		internal long BytesSent;

		internal long TotalBytesToSend;

		internal long BytesReceived;

		internal long TotalBytesToReceive;

		internal bool HasUploadPhase;

		internal void Reset()
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	private struct _003CGetWebResponseTaskAsync_003Ed__112 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder<WebResponse> _003C_003Et__builder;

		public WebRequest request;

		public WebClient _003C_003E4__this;

		private WebRequest _003C_003E7__wrap1;

		private object _003C_003Eu__1;

		private void MoveNext()
		{
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	private struct _003CDownloadBitsAsync_003Ed__150 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public WebClient _003C_003E4__this;

		public WebRequest request;

		public Stream writeStream;

		public AsyncOperation asyncOp;

		public Action<byte[], Exception, AsyncOperation> completionDelegate;

		private Exception _003Cexception_003E5__2;

		private byte[] _003CcopyBuffer_003E5__3;

		private ConfiguredTaskAwaitable<WebResponse>.ConfiguredTaskAwaiter _003C_003Eu__1;

		private Stream _003C_003E7__wrap3;

		private Stream _003CreadStream_003E5__5;

		private ConfiguredValueTaskAwaitable<int>.ConfiguredValueTaskAwaiter _003C_003Eu__2;

		private ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter _003C_003Eu__3;

		private void MoveNext()
		{
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	private struct _003CUploadBitsAsync_003Ed__152 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public WebClient _003C_003E4__this;

		public WebRequest request;

		public byte[] header;

		public byte[] footer;

		public AsyncOperation asyncOp;

		public Stream readStream;

		public byte[] buffer;

		public int chunkSize;

		public Action<byte[], Exception, AsyncOperation> completionDelegate;

		private Exception _003Cexception_003E5__2;

		private Stream _003CwriteStream_003E5__3;

		private ConfiguredTaskAwaitable<Stream>.ConfiguredTaskAwaiter _003C_003Eu__1;

		private ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter _003C_003Eu__2;

		private Stream _003C_003E7__wrap3;

		private int _003CbytesRead_003E5__5;

		private ConfiguredValueTaskAwaitable<int>.ConfiguredValueTaskAwaiter _003C_003Eu__3;

		private int _003CtoWrite_003E5__6;

		private void MoveNext()
		{
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	private Uri _baseAddress;

	private ICredentials _credentials;

	private WebHeaderCollection _headers;

	private NameValueCollection _requestParameters;

	private WebResponse _webResponse;

	private WebRequest _webRequest;

	private Encoding _encoding;

	private string _method;

	private long _contentLength;

	private bool _initWebClientAsync;

	private bool _canceled;

	private ProgressData _progress;

	private IWebProxy _proxy;

	private bool _proxySet;

	private int _callNesting;

	private AsyncOperation _asyncOp;

	private SendOrPostCallback _downloadDataOperationCompleted;

	private SendOrPostCallback _openReadOperationCompleted;

	private SendOrPostCallback _openWriteOperationCompleted;

	private SendOrPostCallback _downloadStringOperationCompleted;

	private SendOrPostCallback _downloadFileOperationCompleted;

	private SendOrPostCallback _uploadStringOperationCompleted;

	private SendOrPostCallback _uploadDataOperationCompleted;

	private SendOrPostCallback _uploadFileOperationCompleted;

	private SendOrPostCallback _uploadValuesOperationCompleted;

	private SendOrPostCallback _reportDownloadProgressChanged;

	private SendOrPostCallback _reportUploadProgressChanged;

	[CompilerGenerated]
	private DownloadStringCompletedEventHandler DownloadStringCompleted;

	[CompilerGenerated]
	private DownloadDataCompletedEventHandler m_DownloadDataCompleted;

	[CompilerGenerated]
	private AsyncCompletedEventHandler DownloadFileCompleted;

	[CompilerGenerated]
	private UploadStringCompletedEventHandler UploadStringCompleted;

	[CompilerGenerated]
	private UploadDataCompletedEventHandler m_UploadDataCompleted;

	[CompilerGenerated]
	private UploadFileCompletedEventHandler UploadFileCompleted;

	[CompilerGenerated]
	private UploadValuesCompletedEventHandler UploadValuesCompleted;

	[CompilerGenerated]
	private OpenReadCompletedEventHandler OpenReadCompleted;

	[CompilerGenerated]
	private OpenWriteCompletedEventHandler OpenWriteCompleted;

	[CompilerGenerated]
	private DownloadProgressChangedEventHandler DownloadProgressChanged;

	[CompilerGenerated]
	private UploadProgressChangedEventHandler UploadProgressChanged;

	private RequestCachePolicy CachePolicy;

	private static readonly char[] s_parseContentTypeSeparators;

	private static readonly Encoding[] s_knownEncodings;

	/// <summary>Gets or sets a collection of header name/value pairs associated with the request.</summary>
	/// <returns>A <see cref="T:System.Net.WebHeaderCollection" /> containing header name/value pairs associated with this request.</returns>
	public WebHeaderCollection Headers => null;

	/// <summary>Gets a collection of header name/value pairs associated with the response.</summary>
	/// <returns>A <see cref="T:System.Net.WebHeaderCollection" /> containing header name/value pairs associated with the response, or <see langword="null" /> if no response has been received.</returns>
	public WebHeaderCollection ResponseHeaders => null;

	/// <summary>Occurs when an asynchronous data download operation completes.</summary>
	public event DownloadDataCompletedEventHandler DownloadDataCompleted
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	/// <summary>Occurs when an asynchronous data-upload operation completes.</summary>
	public event UploadDataCompletedEventHandler UploadDataCompleted
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	/// <summary>Initializes a new instance of the <see cref="T:System.Net.WebClient" /> class.</summary>
	public WebClient()
	{
	}

	/// <summary>Raises the <see cref="E:System.Net.WebClient.DownloadStringCompleted" /> event.</summary>
	/// <param name="e">A <see cref="T:System.Net.DownloadStringCompletedEventArgs" /> object containing event data.</param>
	protected virtual void OnDownloadStringCompleted(DownloadStringCompletedEventArgs e)
	{
	}

	/// <summary>Raises the <see cref="E:System.Net.WebClient.DownloadDataCompleted" /> event.</summary>
	/// <param name="e">A <see cref="T:System.Net.DownloadDataCompletedEventArgs" /> object that contains event data.</param>
	protected virtual void OnDownloadDataCompleted(DownloadDataCompletedEventArgs e)
	{
	}

	/// <summary>Raises the <see cref="E:System.Net.WebClient.DownloadFileCompleted" /> event.</summary>
	/// <param name="e">An <see cref="T:System.ComponentModel.AsyncCompletedEventArgs" /> object containing event data.</param>
	protected virtual void OnDownloadFileCompleted(AsyncCompletedEventArgs e)
	{
	}

	/// <summary>Raises the <see cref="E:System.Net.WebClient.DownloadProgressChanged" /> event.</summary>
	/// <param name="e">A <see cref="T:System.Net.DownloadProgressChangedEventArgs" /> object containing event data.</param>
	protected virtual void OnDownloadProgressChanged(DownloadProgressChangedEventArgs e)
	{
	}

	/// <summary>Raises the <see cref="E:System.Net.WebClient.UploadStringCompleted" /> event.</summary>
	/// <param name="e">An <see cref="T:System.Net.UploadStringCompletedEventArgs" /> object containing event data.</param>
	protected virtual void OnUploadStringCompleted(UploadStringCompletedEventArgs e)
	{
	}

	/// <summary>Raises the <see cref="E:System.Net.WebClient.UploadDataCompleted" /> event.</summary>
	/// <param name="e">A <see cref="T:System.Net.UploadDataCompletedEventArgs" /> object containing event data.</param>
	protected virtual void OnUploadDataCompleted(UploadDataCompletedEventArgs e)
	{
	}

	/// <summary>Raises the <see cref="E:System.Net.WebClient.UploadFileCompleted" /> event.</summary>
	/// <param name="e">An <see cref="T:System.Net.UploadFileCompletedEventArgs" /> object containing event data.</param>
	protected virtual void OnUploadFileCompleted(UploadFileCompletedEventArgs e)
	{
	}

	/// <summary>Raises the <see cref="E:System.Net.WebClient.UploadValuesCompleted" /> event.</summary>
	/// <param name="e">A <see cref="T:System.Net.UploadValuesCompletedEventArgs" /> object containing event data.</param>
	protected virtual void OnUploadValuesCompleted(UploadValuesCompletedEventArgs e)
	{
	}

	/// <summary>Raises the <see cref="E:System.Net.WebClient.UploadProgressChanged" /> event.</summary>
	/// <param name="e">An <see cref="T:System.Net.UploadProgressChangedEventArgs" /> object containing event data.</param>
	protected virtual void OnUploadProgressChanged(UploadProgressChangedEventArgs e)
	{
	}

	/// <summary>Raises the <see cref="E:System.Net.WebClient.OpenReadCompleted" /> event.</summary>
	/// <param name="e">A <see cref="T:System.Net.OpenReadCompletedEventArgs" /> object containing event data.</param>
	protected virtual void OnOpenReadCompleted(OpenReadCompletedEventArgs e)
	{
	}

	/// <summary>Raises the <see cref="E:System.Net.WebClient.OpenWriteCompleted" /> event.</summary>
	/// <param name="e">A <see cref="T:System.Net.OpenWriteCompletedEventArgs" /> object containing event data.</param>
	protected virtual void OnOpenWriteCompleted(OpenWriteCompletedEventArgs e)
	{
	}

	private void StartOperation()
	{
	}

	private AsyncOperation StartAsyncOperation(object userToken)
	{
		return null;
	}

	private void EndOperation()
	{
	}

	/// <summary>Returns a <see cref="T:System.Net.WebRequest" /> object for the specified resource.</summary>
	/// <param name="address">A <see cref="T:System.Uri" /> that identifies the resource to request.</param>
	/// <returns>A new <see cref="T:System.Net.WebRequest" /> object for the specified resource.</returns>
	protected virtual WebRequest GetWebRequest(Uri address)
	{
		return null;
	}

	/// <summary>Returns the <see cref="T:System.Net.WebResponse" /> for the specified <see cref="T:System.Net.WebRequest" /> using the specified <see cref="T:System.IAsyncResult" />.</summary>
	/// <param name="request">A <see cref="T:System.Net.WebRequest" /> that is used to obtain the response.</param>
	/// <param name="result">An <see cref="T:System.IAsyncResult" /> object obtained from a previous call to <see cref="M:System.Net.WebRequest.BeginGetResponse(System.AsyncCallback,System.Object)" /> .</param>
	/// <returns>A <see cref="T:System.Net.WebResponse" /> containing the response for the specified <see cref="T:System.Net.WebRequest" />.</returns>
	protected virtual WebResponse GetWebResponse(WebRequest request, IAsyncResult result)
	{
		return null;
	}

	[AsyncStateMachine(typeof(_003CGetWebResponseTaskAsync_003Ed__112))]
	private Task<WebResponse> GetWebResponseTaskAsync(WebRequest request)
	{
		return null;
	}

	private static void AbortRequest(WebRequest request)
	{
	}

	private void CopyHeadersTo(WebRequest request)
	{
	}

	private Uri GetUri(Uri address)
	{
		return null;
	}

	[AsyncStateMachine(typeof(_003CDownloadBitsAsync_003Ed__150))]
	private void DownloadBitsAsync(WebRequest request, Stream writeStream, AsyncOperation asyncOp, Action<byte[], Exception, AsyncOperation> completionDelegate)
	{
	}

	[AsyncStateMachine(typeof(_003CUploadBitsAsync_003Ed__152))]
	private void UploadBitsAsync(WebRequest request, Stream readStream, byte[] buffer, int chunkSize, byte[] header, byte[] footer, AsyncOperation asyncOp, Action<byte[], Exception, AsyncOperation> completionDelegate)
	{
	}

	private string MapToDefaultMethod(Uri address)
	{
		return null;
	}

	private void InvokeOperationCompleted(AsyncOperation asyncOp, SendOrPostCallback callback, AsyncCompletedEventArgs eventArgs)
	{
	}

	private void DownloadDataAsyncCallback(byte[] returnBytes, Exception exception, object state)
	{
	}

	/// <summary>Downloads the resource as a <see cref="T:System.Byte" /> array from the URI specified as an asynchronous operation.</summary>
	/// <param name="address">A <see cref="T:System.Uri" /> containing the URI to download.</param>
	/// <exception cref="T:System.ArgumentNullException">The <paramref name="address" /> parameter is <see langword="null" />.</exception>
	/// <exception cref="T:System.Net.WebException">The URI formed by combining <see cref="P:System.Net.WebClient.BaseAddress" /> and <paramref name="address" /> is invalid.  
	///  -or-  
	///  An error occurred while downloading the resource.</exception>
	public void DownloadDataAsync(Uri address)
	{
	}

	/// <summary>Downloads the resource as a <see cref="T:System.Byte" /> array from the URI specified as an asynchronous operation.</summary>
	/// <param name="address">A <see cref="T:System.Uri" /> containing the URI to download.</param>
	/// <param name="userToken">A user-defined object that is passed to the method invoked when the asynchronous operation completes.</param>
	/// <exception cref="T:System.ArgumentNullException">The <paramref name="address" /> parameter is <see langword="null" />.</exception>
	/// <exception cref="T:System.Net.WebException">The URI formed by combining <see cref="P:System.Net.WebClient.BaseAddress" /> and <paramref name="address" /> is invalid.  
	///  -or-  
	///  An error occurred while downloading the resource.</exception>
	public void DownloadDataAsync(Uri address, object userToken)
	{
	}

	/// <summary>Uploads a data buffer to a resource identified by a URI, using the POST method. This method does not block the calling thread.</summary>
	/// <param name="address">The URI of the resource to receive the data.</param>
	/// <param name="data">The data buffer to send to the resource.</param>
	/// <exception cref="T:System.ArgumentNullException">The <paramref name="address" /> parameter is <see langword="null" />.</exception>
	/// <exception cref="T:System.Net.WebException">The URI formed by combining <see cref="P:System.Net.WebClient.BaseAddress" /> and <paramref name="address" /> is invalid.  
	///  -or-  
	///  An error occurred while opening the stream.  
	///  -or-  
	///  There was no response from the server hosting the resource.</exception>
	public void UploadDataAsync(Uri address, byte[] data)
	{
	}

	/// <summary>Uploads a data buffer to a resource identified by a URI, using the specified method and identifying token.</summary>
	/// <param name="address">The URI of the resource to receive the data.</param>
	/// <param name="method">The method used to send the data to the resource. If <see langword="null" />, the default is POST for http and STOR for ftp.</param>
	/// <param name="data">The data buffer to send to the resource.</param>
	/// <param name="userToken">A user-defined object that is passed to the method invoked when the asynchronous operation completes.</param>
	/// <exception cref="T:System.ArgumentNullException">The <paramref name="address" /> parameter is <see langword="null" />.</exception>
	/// <exception cref="T:System.Net.WebException">The URI formed by combining <see cref="P:System.Net.WebClient.BaseAddress" /> and <paramref name="address" /> is invalid.  
	///  -or-  
	///  An error occurred while opening the stream.  
	///  -or-  
	///  There was no response from the server hosting the resource.</exception>
	public void UploadDataAsync(Uri address, string method, byte[] data, object userToken)
	{
	}

	private static Exception GetExceptionToPropagate(Exception e)
	{
		return null;
	}

	/// <summary>Cancels a pending asynchronous operation.</summary>
	public void CancelAsync()
	{
	}

	private void PostProgressChanged(AsyncOperation asyncOp, ProgressData progress)
	{
	}

	private static void ThrowIfNull(object argument, string parameterName)
	{
	}
}
