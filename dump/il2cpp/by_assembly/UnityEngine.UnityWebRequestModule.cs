// Namespace: 
internal class <Module> // TypeDefIndex: 7573
{}


// Namespace: UnityEngineInternal
internal static class WebRequestUtils // TypeDefIndex: 7574
{
	// Fields
	private static Regex domainRegex; // 0x0

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x15D9214 Offset: 0x15D5214 VA: 0x15D9214
	internal static string RedirectTo(string baseUri, string redirectUri) { }

	// RVA: 0x15D9300 Offset: 0x15D5300 VA: 0x15D9300
	internal static string MakeInitialUrl(string targetUrl, string localUrl) { }

	// RVA: 0x15D9670 Offset: 0x15D5670 VA: 0x15D9670
	internal static string MakeUriString(Uri targetUri, string targetUrl, bool prependProtocol) { }

	// RVA: 0x15D9A54 Offset: 0x15D5A54 VA: 0x15D9A54
	private static string URLDecode(string encoded) { }

	// RVA: 0x15D9B5C Offset: 0x15D5B5C VA: 0x15D9B5C
	private static void .cctor() { }
}


// Namespace: UnityEngine
public class WWWForm // TypeDefIndex: 7575
{
	// Fields
	private List<byte[]> formData; // 0x10
	private List<string> fieldNames; // 0x18
	private List<string> fileNames; // 0x20
	private List<string> types; // 0x28
	private byte[] boundary; // 0x30
	private bool containsFiles; // 0x38
	private static byte[] dDash; // 0x0
	private static byte[] crlf; // 0x8
	private static byte[] contentTypeHeader; // 0x10
	private static byte[] dispositionHeader; // 0x18
	private static byte[] endQuote; // 0x20
	private static byte[] fileNameField; // 0x28
	private static byte[] ampersand; // 0x30
	private static byte[] equal; // 0x38

	// Properties
	internal static Encoding DefaultEncoding { get; }
	public Dictionary<string, string> headers { get; }
	public byte[] data { get; }

	// Methods

	// RVA: 0x15D9BEC Offset: 0x15D5BEC VA: 0x15D9BEC
	internal static Encoding get_DefaultEncoding() { }

	// RVA: 0x15D9BF4 Offset: 0x15D5BF4 VA: 0x15D9BF4
	public void .ctor() { }

	// RVA: 0x15D9D70 Offset: 0x15D5D70 VA: 0x15D9D70
	public void AddField(string fieldName, string value) { }

	// RVA: 0x15D9DA8 Offset: 0x15D5DA8 VA: 0x15D9DA8
	public void AddField(string fieldName, string value, Encoding e) { }

	// RVA: 0x15D9EDC Offset: 0x15D5EDC VA: 0x15D9EDC
	public void AddField(string fieldName, int i) { }

	// RVA: 0x15D9F30 Offset: 0x15D5F30 VA: 0x15D9F30
	public Dictionary<string, string> get_headers() { }

	// RVA: 0x15DA080 Offset: 0x15D6080 VA: 0x15DA080
	public byte[] get_data() { }

	// RVA: 0x15DB0D0 Offset: 0x15D70D0 VA: 0x15DB0D0
	private static void .cctor() { }
}


// Namespace: UnityEngine
internal class WWWTranscoder // TypeDefIndex: 7576
{
	// Fields
	private static byte[] ucHexChars; // 0x0
	private static byte[] lcHexChars; // 0x8
	private static byte urlEscapeChar; // 0x10
	private static byte[] urlSpace; // 0x18
	private static byte[] dataSpace; // 0x20
	private static byte[] urlForbidden; // 0x28
	private static byte qpEscapeChar; // 0x30
	private static byte[] qpSpace; // 0x38
	private static byte[] qpForbidden; // 0x40

	// Methods

	// RVA: 0x15DB308 Offset: 0x15D7308 VA: 0x15DB308
	private static byte Hex2Byte(byte[] b, int offset) { }

	// RVA: 0x15DB3B4 Offset: 0x15D73B4 VA: 0x15DB3B4
	private static void Byte2Hex(byte b, byte[] hexChars, out byte byte0, out byte byte1) { }

	// RVA: 0x15DB068 Offset: 0x15D7068 VA: 0x15DB068
	public static byte[] DataEncode(byte[] toEncode) { }

	// RVA: 0x15DAF74 Offset: 0x15D6F74 VA: 0x15DAF74
	public static string QPEncode(string toEncode, Encoding e) { }

	// RVA: 0x15DB408 Offset: 0x15D7408 VA: 0x15DB408
	public static byte[] Encode(byte[] input, byte escapeChar, byte[] space, byte[] forbidden, bool uppercase) { }

	// RVA: 0x15DB7E4 Offset: 0x15D77E4 VA: 0x15DB7E4
	private static bool ByteArrayContains(byte[] array, byte b) { }

	// RVA: 0x15D9AF8 Offset: 0x15D5AF8 VA: 0x15D9AF8
	public static byte[] URLDecode(byte[] toEncode) { }

	// RVA: 0x15DBB64 Offset: 0x15D7B64 VA: 0x15DBB64
	private static bool ByteSubArrayEquals(byte[] array, int index, byte[] comperand) { }

	// RVA: 0x15DB84C Offset: 0x15D784C VA: 0x15DB84C
	public static byte[] Decode(byte[] input, byte escapeChar, byte[] space) { }

	// RVA: 0x15DAE00 Offset: 0x15D6E00 VA: 0x15DAE00
	public static bool SevenBitClean(string s, Encoding e) { }

	// RVA: 0x15DBBF4 Offset: 0x15D7BF4 VA: 0x15DBBF4
	public static bool SevenBitClean(byte* input, int inputLength) { }

	// RVA: 0x15DBC50 Offset: 0x15D7C50 VA: 0x15DBC50
	private static void .cctor() { }
}


// Namespace: UnityEngine.Networking
public class CertificateHandler : IDisposable // TypeDefIndex: 7577
{
	// Fields
	internal IntPtr m_Ptr; // 0x10

	// Methods

	// RVA: 0x15DBE74 Offset: 0x15D7E74 VA: 0x15DBE74
	private static IntPtr Create(CertificateHandler obj) { }

	// RVA: 0x15DBEB0 Offset: 0x15D7EB0 VA: 0x15DBEB0
	private void Release() { }

	// RVA: 0x15DBEEC Offset: 0x15D7EEC VA: 0x15DBEEC
	protected void .ctor() { }

	// RVA: 0x15DBF38 Offset: 0x15D7F38 VA: 0x15DBF38 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x15DC024 Offset: 0x15D8024 VA: 0x15DC024 Slot: 5
	protected virtual bool ValidateCertificate(byte[] certificateData) { }

	[RequiredByNativeCode]
	// RVA: 0x15DC02C Offset: 0x15D802C VA: 0x15DC02C
	internal bool ValidateCertificateNative(byte[] certificateData) { }

	// RVA: 0x15DBFCC Offset: 0x15D7FCC VA: 0x15DBFCC Slot: 4
	public void Dispose() { }
}


// Namespace: UnityEngine.Networking
public class DownloadHandler : IDisposable // TypeDefIndex: 7578
{
	// Fields
	internal IntPtr m_Ptr; // 0x10

	// Properties
	public string text { get; }

	// Methods

	// RVA: 0x15DC038 Offset: 0x15D8038 VA: 0x15DC038
	private void Release() { }

	// RVA: 0x15DC074 Offset: 0x15D8074 VA: 0x15DC074
	internal void .ctor() { }

	// RVA: 0x15DC07C Offset: 0x15D807C VA: 0x15DC07C Slot: 1
	protected override void Finalize() { }

	// RVA: 0x15DC118 Offset: 0x15D8118 VA: 0x15DC118 Slot: 5
	public virtual void Dispose() { }

	// RVA: 0x15DC170 Offset: 0x15D8170 VA: 0x15DC170
	public string get_text() { }

	// RVA: 0x15DC17C Offset: 0x15D817C VA: 0x15DC17C Slot: 6
	protected virtual NativeArray<byte> GetNativeData() { }

	// RVA: 0x15DC188 Offset: 0x15D8188 VA: 0x15DC188 Slot: 7
	protected virtual string GetText() { }

	// RVA: 0x15DC248 Offset: 0x15D8248 VA: 0x15DC248
	private Encoding GetTextEncoder() { }

	// RVA: 0x15DC4B8 Offset: 0x15D84B8 VA: 0x15DC4B8
	private string GetContentType() { }

	[RequiredByNativeCode]
	// RVA: 0x15DC4F4 Offset: 0x15D84F4 VA: 0x15DC4F4 Slot: 8
	protected virtual bool ReceiveData(byte[] data, int dataLength) { }

	[RequiredByNativeCode]
	// RVA: 0x15DC4FC Offset: 0x15D84FC VA: 0x15DC4FC Slot: 9
	protected virtual void ReceiveContentLengthHeader(ulong contentLength) { }

	[Obsolete("Use ReceiveContentLengthHeader")]
	// RVA: 0x15DC508 Offset: 0x15D8508 VA: 0x15DC508 Slot: 10
	protected virtual void ReceiveContentLength(int contentLength) { }

	[RequiredByNativeCode]
	// RVA: 0x15DC50C Offset: 0x15D850C VA: 0x15DC50C Slot: 11
	protected virtual void CompleteContent() { }

	[RequiredByNativeCode]
	// RVA: 0x15DC510 Offset: 0x15D8510 VA: 0x15DC510 Slot: 12
	protected virtual float GetProgress() { }

	// RVA: 0x15DC518 Offset: 0x15D8518 VA: 0x15DC518
	internal static byte* InternalGetByteArray(DownloadHandler dh, out int length) { }

	// RVA: 0x15DC55C Offset: 0x15D855C VA: 0x15DC55C
	internal static NativeArray<byte> InternalGetNativeArray(DownloadHandler dh, ref NativeArray<byte> nativeArray) { }

	// RVA: 0x15DC634 Offset: 0x15D8634 VA: 0x15DC634
	internal static void DisposeNativeArray(ref NativeArray<byte> data) { }

	// RVA: 0x15DC678 Offset: 0x15D8678 VA: 0x15DC678
	internal static void CreateNativeArrayForNativeData(ref NativeArray<byte> data, byte* bytes, int length) { }
}


// Namespace: UnityEngine.Networking
public sealed class DownloadHandlerBuffer : DownloadHandler // TypeDefIndex: 7579
{
	// Fields
	private NativeArray<byte> m_NativeData; // 0x18

	// Methods

	// RVA: 0x15DC6E0 Offset: 0x15D86E0 VA: 0x15DC6E0
	private static IntPtr Create(DownloadHandlerBuffer obj) { }

	// RVA: 0x15DC71C Offset: 0x15D871C VA: 0x15DC71C
	private void InternalCreateBuffer() { }

	// RVA: 0x15DC760 Offset: 0x15D8760 VA: 0x15DC760
	public void .ctor() { }

	// RVA: 0x15DC7AC Offset: 0x15D87AC VA: 0x15DC7AC Slot: 6
	protected override NativeArray<byte> GetNativeData() { }

	// RVA: 0x15DC7B4 Offset: 0x15D87B4 VA: 0x15DC7B4 Slot: 5
	public override void Dispose() { }
}


// Namespace: UnityEngine.Networking
[UsedByNativeCode]
public class UnityWebRequestAsyncOperation : AsyncOperation // TypeDefIndex: 7580
{
	// Fields
	[CompilerGenerated]
	private UnityWebRequest <webRequest>k__BackingField; // 0x20

	// Properties
	public UnityWebRequest webRequest { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x15DC800 Offset: 0x15D8800 VA: 0x15DC800
	public UnityWebRequest get_webRequest() { }

	[CompilerGenerated]
	// RVA: 0x15DC808 Offset: 0x15D8808 VA: 0x15DC808
	internal void set_webRequest(UnityWebRequest value) { }

	// RVA: 0x15DC810 Offset: 0x15D8810 VA: 0x15DC810
	public void .ctor() { }
}


// Namespace: 
internal enum UnityWebRequest.UnityWebRequestMethod // TypeDefIndex: 7581
{
	// Fields
	public int value__; // 0x0
	public const UnityWebRequest.UnityWebRequestMethod Get = 0;
	public const UnityWebRequest.UnityWebRequestMethod Post = 1;
	public const UnityWebRequest.UnityWebRequestMethod Put = 2;
	public const UnityWebRequest.UnityWebRequestMethod Head = 3;
	public const UnityWebRequest.UnityWebRequestMethod Custom = 4;
}


// Namespace: 
internal enum UnityWebRequest.UnityWebRequestError // TypeDefIndex: 7582
{
	// Fields
	public int value__; // 0x0
	public const UnityWebRequest.UnityWebRequestError OK = 0;
	public const UnityWebRequest.UnityWebRequestError OKCached = 1;
	public const UnityWebRequest.UnityWebRequestError Unknown = 2;
	public const UnityWebRequest.UnityWebRequestError SDKError = 3;
	public const UnityWebRequest.UnityWebRequestError UnsupportedProtocol = 4;
	public const UnityWebRequest.UnityWebRequestError MalformattedUrl = 5;
	public const UnityWebRequest.UnityWebRequestError CannotResolveProxy = 6;
	public const UnityWebRequest.UnityWebRequestError CannotResolveHost = 7;
	public const UnityWebRequest.UnityWebRequestError CannotConnectToHost = 8;
	public const UnityWebRequest.UnityWebRequestError AccessDenied = 9;
	public const UnityWebRequest.UnityWebRequestError GenericHttpError = 10;
	public const UnityWebRequest.UnityWebRequestError WriteError = 11;
	public const UnityWebRequest.UnityWebRequestError ReadError = 12;
	public const UnityWebRequest.UnityWebRequestError OutOfMemory = 13;
	public const UnityWebRequest.UnityWebRequestError Timeout = 14;
	public const UnityWebRequest.UnityWebRequestError HTTPPostError = 15;
	public const UnityWebRequest.UnityWebRequestError SSLCannotConnect = 16;
	public const UnityWebRequest.UnityWebRequestError Aborted = 17;
	public const UnityWebRequest.UnityWebRequestError TooManyRedirects = 18;
	public const UnityWebRequest.UnityWebRequestError ReceivedNoData = 19;
	public const UnityWebRequest.UnityWebRequestError SSLNotSupported = 20;
	public const UnityWebRequest.UnityWebRequestError FailedToSendData = 21;
	public const UnityWebRequest.UnityWebRequestError FailedToReceiveData = 22;
	public const UnityWebRequest.UnityWebRequestError SSLCertificateError = 23;
	public const UnityWebRequest.UnityWebRequestError SSLCipherNotAvailable = 24;
	public const UnityWebRequest.UnityWebRequestError SSLCACertError = 25;
	public const UnityWebRequest.UnityWebRequestError UnrecognizedContentEncoding = 26;
	public const UnityWebRequest.UnityWebRequestError LoginFailed = 27;
	public const UnityWebRequest.UnityWebRequestError SSLShutdownFailed = 28;
	public const UnityWebRequest.UnityWebRequestError RedirectLimitInvalid = 29;
	public const UnityWebRequest.UnityWebRequestError InvalidRedirect = 30;
	public const UnityWebRequest.UnityWebRequestError CannotModifyRequest = 31;
	public const UnityWebRequest.UnityWebRequestError HeaderNameContainsInvalidCharacters = 32;
	public const UnityWebRequest.UnityWebRequestError HeaderValueContainsInvalidCharacters = 33;
	public const UnityWebRequest.UnityWebRequestError CannotOverrideSystemHeaders = 34;
	public const UnityWebRequest.UnityWebRequestError AlreadySent = 35;
	public const UnityWebRequest.UnityWebRequestError InvalidMethod = 36;
	public const UnityWebRequest.UnityWebRequestError NotImplemented = 37;
	public const UnityWebRequest.UnityWebRequestError NoInternetConnection = 38;
	public const UnityWebRequest.UnityWebRequestError DataProcessingError = 39;
	public const UnityWebRequest.UnityWebRequestError InsecureConnectionNotAllowed = 40;
}


// Namespace: 
public enum UnityWebRequest.Result // TypeDefIndex: 7583
{
	// Fields
	public int value__; // 0x0
	public const UnityWebRequest.Result InProgress = 0;
	public const UnityWebRequest.Result Success = 1;
	public const UnityWebRequest.Result ConnectionError = 2;
	public const UnityWebRequest.Result ProtocolError = 3;
	public const UnityWebRequest.Result DataProcessingError = 4;
}


// Namespace: UnityEngine.Networking
public class UnityWebRequest : IDisposable // TypeDefIndex: 7584
{
	// Fields
	internal IntPtr m_Ptr; // 0x10
	internal DownloadHandler m_DownloadHandler; // 0x18
	internal UploadHandler m_UploadHandler; // 0x20
	internal CertificateHandler m_CertificateHandler; // 0x28
	internal Uri m_Uri; // 0x30
	public const string kHttpVerbGET = "GET";
	public const string kHttpVerbHEAD = "HEAD";
	public const string kHttpVerbPOST = "POST";
	public const string kHttpVerbPUT = "PUT";
	public const string kHttpVerbCREATE = "CREATE";
	public const string kHttpVerbDELETE = "DELETE";
	[CompilerGenerated]
	private bool <disposeCertificateHandlerOnDispose>k__BackingField; // 0x38
	[CompilerGenerated]
	private bool <disposeDownloadHandlerOnDispose>k__BackingField; // 0x39
	[CompilerGenerated]
	private bool <disposeUploadHandlerOnDispose>k__BackingField; // 0x3A

	// Properties
	public bool disposeCertificateHandlerOnDispose { get; set; }
	public bool disposeDownloadHandlerOnDispose { get; set; }
	public bool disposeUploadHandlerOnDispose { get; set; }
	public string method { set; }
	public string error { get; }
	public string url { get; set; }
	public long responseCode { get; }
	public bool isModifiable { get; }
	public bool isDone { get; }
	[Obsolete("UnityWebRequest.isNetworkError is deprecated. Use (UnityWebRequest.result == UnityWebRequest.Result.ConnectionError) instead.", False)]
	public bool isNetworkError { get; }
	[Obsolete("UnityWebRequest.isHttpError is deprecated. Use (UnityWebRequest.result == UnityWebRequest.Result.ProtocolError) instead.", False)]
	public bool isHttpError { get; }
	public UnityWebRequest.Result result { get; }
	public UploadHandler uploadHandler { get; set; }
	public DownloadHandler downloadHandler { get; set; }
	public CertificateHandler certificateHandler { get; }

	// Methods

	// RVA: 0x15DC818 Offset: 0x15D8818 VA: 0x15DC818
	private static string GetWebErrorString(UnityWebRequest.UnityWebRequestError err) { }

	// RVA: 0x15DC854 Offset: 0x15D8854 VA: 0x15DC854
	internal static string GetHTTPStatusString(long responseCode) { }

	[CompilerGenerated]
	// RVA: 0x15DC890 Offset: 0x15D8890 VA: 0x15DC890
	public bool get_disposeCertificateHandlerOnDispose() { }

	[CompilerGenerated]
	// RVA: 0x15DC898 Offset: 0x15D8898 VA: 0x15DC898
	public void set_disposeCertificateHandlerOnDispose(bool value) { }

	[CompilerGenerated]
	// RVA: 0x15DC8A4 Offset: 0x15D88A4 VA: 0x15DC8A4
	public bool get_disposeDownloadHandlerOnDispose() { }

	[CompilerGenerated]
	// RVA: 0x15DC8AC Offset: 0x15D88AC VA: 0x15DC8AC
	public void set_disposeDownloadHandlerOnDispose(bool value) { }

	[CompilerGenerated]
	// RVA: 0x15DC8B8 Offset: 0x15D88B8 VA: 0x15DC8B8
	public bool get_disposeUploadHandlerOnDispose() { }

	[CompilerGenerated]
	// RVA: 0x15DC8C0 Offset: 0x15D88C0 VA: 0x15DC8C0
	public void set_disposeUploadHandlerOnDispose(bool value) { }

	// RVA: 0x15DC8CC Offset: 0x15D88CC VA: 0x15DC8CC
	internal static IntPtr Create() { }

	// RVA: 0x15DC8F4 Offset: 0x15D88F4 VA: 0x15DC8F4
	private void Release() { }

	// RVA: 0x15DC930 Offset: 0x15D8930 VA: 0x15DC930
	internal void InternalDestroy() { }

	// RVA: 0x15DC9EC Offset: 0x15D89EC VA: 0x15DC9EC
	private void InternalSetDefaults() { }

	// RVA: 0x15DCA00 Offset: 0x15D8A00 VA: 0x15DCA00
	public void .ctor() { }

	// RVA: 0x15DCA58 Offset: 0x15D8A58 VA: 0x15DCA58
	public void .ctor(string url, string method) { }

	// RVA: 0x15DCCDC Offset: 0x15D8CDC VA: 0x15DCCDC
	public void .ctor(string url, string method, DownloadHandler downloadHandler, UploadHandler uploadHandler) { }

	// RVA: 0x15DCF88 Offset: 0x15D8F88 VA: 0x15DCF88 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x15DD084 Offset: 0x15D9084 VA: 0x15DD084 Slot: 4
	public void Dispose() { }

	// RVA: 0x15DD024 Offset: 0x15D9024 VA: 0x15DD024
	private void DisposeHandlers() { }

	// RVA: 0x15DD104 Offset: 0x15D9104 VA: 0x15DD104
	internal UnityWebRequestAsyncOperation BeginWebRequest() { }

	// RVA: 0x15DD140 Offset: 0x15D9140 VA: 0x15DD140
	public UnityWebRequestAsyncOperation SendWebRequest() { }

	// RVA: 0x15DC9B0 Offset: 0x15D89B0 VA: 0x15DC9B0
	public void Abort() { }

	// RVA: 0x15DD188 Offset: 0x15D9188 VA: 0x15DD188
	private UnityWebRequest.UnityWebRequestError SetMethod(UnityWebRequest.UnityWebRequestMethod methodType) { }

	// RVA: 0x15DD1CC Offset: 0x15D91CC VA: 0x15DD1CC
	internal void InternalSetMethod(UnityWebRequest.UnityWebRequestMethod methodType) { }

	// RVA: 0x15DD308 Offset: 0x15D9308 VA: 0x15DD308
	private UnityWebRequest.UnityWebRequestError SetCustomMethod(string customMethodName) { }

	// RVA: 0x15DD34C Offset: 0x15D934C VA: 0x15DD34C
	internal void InternalSetCustomMethod(string customMethodName) { }

	// RVA: 0x15DCB5C Offset: 0x15D8B5C VA: 0x15DCB5C
	public void set_method(string value) { }

	// RVA: 0x15DD44C Offset: 0x15D944C VA: 0x15DD44C
	private UnityWebRequest.UnityWebRequestError GetError() { }

	// RVA: 0x15DD488 Offset: 0x15D9488 VA: 0x15DD488
	public string get_error() { }

	// RVA: 0x15DD6A4 Offset: 0x15D96A4 VA: 0x15DD6A4
	public string get_url() { }

	// RVA: 0x15DCAD4 Offset: 0x15D8AD4 VA: 0x15DCAD4
	public void set_url(string value) { }

	// RVA: 0x15DD6E0 Offset: 0x15D96E0 VA: 0x15DD6E0
	private string GetUrl() { }

	// RVA: 0x15DD81C Offset: 0x15D981C VA: 0x15DD81C
	private UnityWebRequest.UnityWebRequestError SetUrl(string url) { }

	// RVA: 0x15DD71C Offset: 0x15D971C VA: 0x15DD71C
	private void InternalSetUrl(string url) { }

	// RVA: 0x15DD668 Offset: 0x15D9668 VA: 0x15DD668
	public long get_responseCode() { }

	// RVA: 0x15DD2CC Offset: 0x15D92CC VA: 0x15DD2CC
	public bool get_isModifiable() { }

	// RVA: 0x15DD860 Offset: 0x15D9860 VA: 0x15DD860
	public bool get_isDone() { }

	// RVA: 0x15DD8A8 Offset: 0x15D98A8 VA: 0x15DD8A8
	public bool get_isNetworkError() { }

	// RVA: 0x15DD8F0 Offset: 0x15D98F0 VA: 0x15DD8F0
	public bool get_isHttpError() { }

	// RVA: 0x15DD62C Offset: 0x15D962C VA: 0x15DD62C
	public UnityWebRequest.Result get_result() { }

	// RVA: 0x15DD938 Offset: 0x15D9938 VA: 0x15DD938
	internal UnityWebRequest.UnityWebRequestError InternalSetRequestHeader(string name, string value) { }

	// RVA: 0x15DD98C Offset: 0x15D998C VA: 0x15DD98C
	public void SetRequestHeader(string name, string value) { }

	// RVA: 0x15DDB04 Offset: 0x15D9B04 VA: 0x15DDB04
	private UnityWebRequest.UnityWebRequestError SetUploadHandler(UploadHandler uh) { }

	// RVA: 0x15DD0F4 Offset: 0x15D90F4 VA: 0x15DD0F4
	public UploadHandler get_uploadHandler() { }

	// RVA: 0x15DCE84 Offset: 0x15D8E84 VA: 0x15DCE84
	public void set_uploadHandler(UploadHandler value) { }

	// RVA: 0x15DDB48 Offset: 0x15D9B48 VA: 0x15DDB48
	private UnityWebRequest.UnityWebRequestError SetDownloadHandler(DownloadHandler dh) { }

	// RVA: 0x15DD0EC Offset: 0x15D90EC VA: 0x15DD0EC
	public DownloadHandler get_downloadHandler() { }

	// RVA: 0x15DCD80 Offset: 0x15D8D80 VA: 0x15DCD80
	public void set_downloadHandler(DownloadHandler value) { }

	// RVA: 0x15DD0FC Offset: 0x15D90FC VA: 0x15DD0FC
	public CertificateHandler get_certificateHandler() { }

	// RVA: 0x15DDB8C Offset: 0x15D9B8C VA: 0x15DDB8C
	public static UnityWebRequest Get(string uri) { }

	// RVA: 0x15DDC30 Offset: 0x15D9C30 VA: 0x15DDC30
	public static UnityWebRequest Post(string uri, WWWForm formData) { }

	// RVA: 0x15DDCB8 Offset: 0x15D9CB8 VA: 0x15DDCB8
	private static void SetupPost(UnityWebRequest request, WWWForm formData) { }
}


// Namespace: UnityEngine.Networking
public class UploadHandler : IDisposable // TypeDefIndex: 7585
{
	// Fields
	internal IntPtr m_Ptr; // 0x10

	// Properties
	public string contentType { set; }

	// Methods

	// RVA: 0x15DDF90 Offset: 0x15D9F90 VA: 0x15DDF90
	private void Release() { }

	// RVA: 0x15DDFCC Offset: 0x15D9FCC VA: 0x15DDFCC
	internal void .ctor() { }

	// RVA: 0x15DDFD4 Offset: 0x15D9FD4 VA: 0x15DDFD4 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x15DE070 Offset: 0x15DA070 VA: 0x15DE070 Slot: 5
	public virtual void Dispose() { }

	// RVA: 0x15DE0C8 Offset: 0x15DA0C8 VA: 0x15DE0C8
	public void set_contentType(string value) { }

	// RVA: 0x15DE0D4 Offset: 0x15DA0D4 VA: 0x15DE0D4 Slot: 6
	internal virtual void SetContentType(string newContentType) { }

	// RVA: 0x15DE118 Offset: 0x15DA118 VA: 0x15DE118
	private void InternalSetContentType(string newContentType) { }
}


// Namespace: UnityEngine.Networking
public sealed class UploadHandlerRaw : UploadHandler // TypeDefIndex: 7586
{
	// Fields
	private NativeArray<byte> m_Payload; // 0x18

	// Methods

	// RVA: 0x15DE15C Offset: 0x15DA15C VA: 0x15DE15C
	private static IntPtr Create(UploadHandlerRaw self, byte* data, int dataLength) { }

	// RVA: 0x15DDF04 Offset: 0x15D9F04 VA: 0x15DDF04
	public void .ctor(byte[] data) { }

	// RVA: 0x15DE1B0 Offset: 0x15DA1B0 VA: 0x15DE1B0
	public void .ctor(NativeArray<byte> data, bool transferOwnership) { }

	// RVA: 0x15DE2A4 Offset: 0x15DA2A4 VA: 0x15DE2A4 Slot: 5
	public override void Dispose() { }
}
