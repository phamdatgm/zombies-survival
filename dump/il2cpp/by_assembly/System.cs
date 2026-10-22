// Namespace: 
internal class <Module> // TypeDefIndex: 3202
{}


// Namespace: Mono
internal class SystemCertificateProvider : ISystemCertificateProvider // TypeDefIndex: 3203
{
	// Fields
	private static int initialized; // 0x0
	private static X509PalImpl x509pal; // 0x8
	private static object syncRoot; // 0x10

	// Properties
	public X509PalImpl X509Pal { get; }

	// Methods

	// RVA: 0xFC415C Offset: 0xFC015C VA: 0xFC415C
	private static X509PalImpl GetX509Pal() { }

	// RVA: 0xFC4204 Offset: 0xFC0204 VA: 0xFC4204
	private static void EnsureInitialized() { }

	// RVA: 0xFC4354 Offset: 0xFC0354 VA: 0xFC4354
	public X509PalImpl get_X509Pal() { }

	// RVA: 0xFC43B0 Offset: 0xFC03B0 VA: 0xFC43B0 Slot: 4
	public X509CertificateImpl Import(byte[] data, CertificateImportFlags importFlags = 0) { }

	// RVA: 0xFC4610 Offset: 0xFC0610 VA: 0xFC4610 Slot: 5
	private X509CertificateImpl Mono.ISystemCertificateProvider.Import(byte[] data, SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags, CertificateImportFlags importFlags) { }

	// RVA: 0xFC4614 Offset: 0xFC0614 VA: 0xFC4614
	public X509Certificate2Impl Import(byte[] data, SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags, CertificateImportFlags importFlags = 0) { }

	// RVA: 0xFC4718 Offset: 0xFC0718 VA: 0xFC4718 Slot: 6
	private X509CertificateImpl Mono.ISystemCertificateProvider.Import(X509Certificate cert, CertificateImportFlags importFlags) { }

	// RVA: 0xFC471C Offset: 0xFC071C VA: 0xFC471C
	public X509Certificate2Impl Import(X509Certificate cert, CertificateImportFlags importFlags = 0) { }

	// RVA: 0xFC4830 Offset: 0xFC0830 VA: 0xFC4830
	public void .ctor() { }

	// RVA: 0xFC4838 Offset: 0xFC0838 VA: 0xFC4838
	private static void .cctor() { }
}


// Namespace: Mono
internal class SystemDependencyProvider : ISystemDependencyProvider // TypeDefIndex: 3204
{
	// Fields
	private static SystemDependencyProvider instance; // 0x0
	private static object syncRoot; // 0x8
	[CompilerGenerated]
	private readonly SystemCertificateProvider <CertificateProvider>k__BackingField; // 0x10

	// Properties
	public static SystemDependencyProvider Instance { get; }
	private ISystemCertificateProvider Mono.ISystemDependencyProvider.CertificateProvider { get; }
	public X509PalImpl X509Pal { get; }

	// Methods

	// RVA: 0xFC48A8 Offset: 0xFC08A8 VA: 0xFC48A8
	public static SystemDependencyProvider get_Instance() { }

	// RVA: 0xFC4904 Offset: 0xFC0904 VA: 0xFC4904
	internal static void Initialize() { }

	// RVA: 0xFC4AE0 Offset: 0xFC0AE0 VA: 0xFC4AE0 Slot: 4
	private ISystemCertificateProvider Mono.ISystemDependencyProvider.get_CertificateProvider() { }

	// RVA: 0xFC4AE8 Offset: 0xFC0AE8 VA: 0xFC4AE8
	public X509PalImpl get_X509Pal() { }

	// RVA: 0xFC4A48 Offset: 0xFC0A48 VA: 0xFC4A48
	private void .ctor() { }

	// RVA: 0xFC4B00 Offset: 0xFC0B00 VA: 0xFC4B00
	private static void .cctor() { }
}


// Namespace: Mono
internal static class X509Pal // TypeDefIndex: 3205
{
	// Properties
	public static X509PalImpl Instance { get; }

	// Methods

	// RVA: 0xFC4B70 Offset: 0xFC0B70 VA: 0xFC4B70
	public static X509PalImpl get_Instance() { }
}


// Namespace: Mono
internal class X509PalImplMono : X509PalImpl // TypeDefIndex: 3206
{
	// Methods

	// RVA: 0xFC4BD0 Offset: 0xFC0BD0 VA: 0xFC4BD0 Slot: 4
	public override X509CertificateImpl Import(byte[] data) { }

	// RVA: 0xFC4BD4 Offset: 0xFC0BD4 VA: 0xFC4BD4 Slot: 5
	public override X509Certificate2Impl Import(byte[] data, SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags) { }

	// RVA: 0xFC4BD8 Offset: 0xFC0BD8 VA: 0xFC4BD8 Slot: 6
	public override X509Certificate2Impl Import(X509Certificate cert) { }

	// RVA: 0xFC41AC Offset: 0xFC01AC VA: 0xFC41AC
	public void .ctor() { }
}


// Namespace: Mono
internal abstract class X509PalImpl // TypeDefIndex: 3207
{
	// Fields
	private static byte[] signedData; // 0x0

	// Properties
	public bool SupportsLegacyBasicConstraintsExtension { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public abstract X509CertificateImpl Import(byte[] data);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract X509Certificate2Impl Import(byte[] data, SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract X509Certificate2Impl Import(X509Certificate cert);

	// RVA: 0xFC4BE8 Offset: 0xFC0BE8 VA: 0xFC4BE8
	private static byte[] PEM(string type, byte[] data) { }

	// RVA: 0xFC4D1C Offset: 0xFC0D1C VA: 0xFC4D1C
	protected static byte[] ConvertData(byte[] data) { }

	// RVA: 0xFC441C Offset: 0xFC041C VA: 0xFC441C
	internal X509Certificate2Impl ImportFallback(byte[] data) { }

	// RVA: 0xFC46A4 Offset: 0xFC06A4 VA: 0xFC46A4
	internal X509Certificate2Impl ImportFallback(byte[] data, SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags) { }

	// RVA: 0xFC4E28 Offset: 0xFC0E28 VA: 0xFC4E28
	public bool get_SupportsLegacyBasicConstraintsExtension() { }

	// RVA: 0xFC4E30 Offset: 0xFC0E30 VA: 0xFC4E30
	public X509ContentType GetCertContentType(byte[] rawData) { }

	// RVA: 0xFC4BE0 Offset: 0xFC0BE0 VA: 0xFC4BE0
	protected void .ctor() { }

	// RVA: 0xFC5230 Offset: 0xFC1230 VA: 0xFC5230
	private static void .cctor() { }
}


// Namespace: Mono.Util
[Usage(64)]
internal sealed class MonoPInvokeCallbackAttribute : Attribute // TypeDefIndex: 3208
{
	// Methods

	// RVA: 0xFC52C4 Offset: 0xFC12C4 VA: 0xFC52C4
	public void .ctor(Type t) { }
}


// Namespace: Mono.Unity
internal static class CertHelper // TypeDefIndex: 3209
{
	// Methods

	// RVA: 0xFC52CC Offset: 0xFC12CC VA: 0xFC52CC
	public static void AddCertificatesToNativeChain(UnityTls.unitytls_x509list* nativeCertificateChain, X509CertificateCollection certificates, UnityTls.unitytls_errorstate* errorState) { }

	// RVA: 0xFC54A4 Offset: 0xFC14A4 VA: 0xFC54A4
	public static void AddCertificateToNativeChain(UnityTls.unitytls_x509list* nativeCertificateChain, X509Certificate certificate, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: Mono.Unity
internal static class Debug // TypeDefIndex: 3210
{
	// Methods

	// RVA: 0xFC5730 Offset: 0xFC1730 VA: 0xFC5730
	public static void CheckAndThrow(UnityTls.unitytls_errorstate errorState, string context, AlertDescription defaultAlert = 80) { }

	// RVA: 0xFC57C8 Offset: 0xFC17C8 VA: 0xFC57C8
	public static void CheckAndThrow(UnityTls.unitytls_errorstate errorState, UnityTls.unitytls_x509verify_result verifyResult, string context, AlertDescription defaultAlert = 80) { }
}


// Namespace: 
public enum UnityTls.unitytls_error_code // TypeDefIndex: 3211
{
	// Fields
	public uint value__; // 0x0
	public const UnityTls.unitytls_error_code UNITYTLS_SUCCESS = 0;
	public const UnityTls.unitytls_error_code UNITYTLS_INVALID_ARGUMENT = 1;
	public const UnityTls.unitytls_error_code UNITYTLS_INVALID_FORMAT = 2;
	public const UnityTls.unitytls_error_code UNITYTLS_INVALID_PASSWORD = 3;
	public const UnityTls.unitytls_error_code UNITYTLS_INVALID_STATE = 4;
	public const UnityTls.unitytls_error_code UNITYTLS_BUFFER_OVERFLOW = 5;
	public const UnityTls.unitytls_error_code UNITYTLS_OUT_OF_MEMORY = 6;
	public const UnityTls.unitytls_error_code UNITYTLS_INTERNAL_ERROR = 7;
	public const UnityTls.unitytls_error_code UNITYTLS_NOT_SUPPORTED = 8;
	public const UnityTls.unitytls_error_code UNITYTLS_ENTROPY_SOURCE_FAILED = 9;
	public const UnityTls.unitytls_error_code UNITYTLS_STREAM_CLOSED = 10;
	public const UnityTls.unitytls_error_code UNITYTLS_USER_CUSTOM_ERROR_START = 1048576;
	public const UnityTls.unitytls_error_code UNITYTLS_USER_WOULD_BLOCK = 1048577;
	public const UnityTls.unitytls_error_code UNITYTLS_USER_READ_FAILED = 1048578;
	public const UnityTls.unitytls_error_code UNITYTLS_USER_WRITE_FAILED = 1048579;
	public const UnityTls.unitytls_error_code UNITYTLS_USER_UNKNOWN_ERROR = 1048580;
	public const UnityTls.unitytls_error_code UNITYTLS_USER_CUSTOM_ERROR_END = 2097152;
}


// Namespace: 
public struct UnityTls.unitytls_errorstate // TypeDefIndex: 3212
{
	// Fields
	private uint magic; // 0x0
	public UnityTls.unitytls_error_code code; // 0x4
	private ulong reserved; // 0x8
}


// Namespace: 
public struct UnityTls.unitytls_key // TypeDefIndex: 3213
{}


// Namespace: 
public struct UnityTls.unitytls_key_ref // TypeDefIndex: 3214
{
	// Fields
	public ulong handle; // 0x0
}


// Namespace: 
public struct UnityTls.unitytls_x509_ref // TypeDefIndex: 3215
{
	// Fields
	public ulong handle; // 0x0
}


// Namespace: 
public struct UnityTls.unitytls_x509list // TypeDefIndex: 3216
{}


// Namespace: 
public struct UnityTls.unitytls_x509list_ref // TypeDefIndex: 3217
{
	// Fields
	public ulong handle; // 0x0
}


// Namespace: 
[Flags]
public enum UnityTls.unitytls_x509verify_result // TypeDefIndex: 3218
{
	// Fields
	public uint value__; // 0x0
	public const UnityTls.unitytls_x509verify_result UNITYTLS_X509VERIFY_SUCCESS = 0;
	public const UnityTls.unitytls_x509verify_result UNITYTLS_X509VERIFY_NOT_DONE = 2147483648;
	public const UnityTls.unitytls_x509verify_result UNITYTLS_X509VERIFY_FATAL_ERROR = 4294967295;
	public const UnityTls.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_EXPIRED = 1;
	public const UnityTls.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_REVOKED = 2;
	public const UnityTls.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_CN_MISMATCH = 4;
	public const UnityTls.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_NOT_TRUSTED = 8;
	public const UnityTls.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR1 = 65536;
	public const UnityTls.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR2 = 131072;
	public const UnityTls.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR3 = 262144;
	public const UnityTls.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR4 = 524288;
	public const UnityTls.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR5 = 1048576;
	public const UnityTls.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR6 = 2097152;
	public const UnityTls.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR7 = 4194304;
	public const UnityTls.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR8 = 8388608;
	public const UnityTls.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_UNKNOWN_ERROR = 134217728;
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_x509verify_callback : MulticastDelegate // TypeDefIndex: 3219
{
	// Methods

	// RVA: 0xFC5908 Offset: 0xFC1908 VA: 0xFC5908
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC59A8 Offset: 0xFC19A8 VA: 0xFC59A8 Slot: 12
	public virtual UnityTls.unitytls_x509verify_result Invoke(void* userData, UnityTls.unitytls_x509_ref cert, UnityTls.unitytls_x509verify_result result, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
public struct UnityTls.unitytls_tlsctx // TypeDefIndex: 3220
{}


// Namespace: 
public struct UnityTls.unitytls_x509name // TypeDefIndex: 3221
{}


// Namespace: 
public enum UnityTls.unitytls_ciphersuite // TypeDefIndex: 3222
{
	// Fields
	public uint value__; // 0x0
	public const UnityTls.unitytls_ciphersuite UNITYTLS_CIPHERSUITE_INVALID = 16777215;
}


// Namespace: 
public enum UnityTls.unitytls_protocol // TypeDefIndex: 3223
{
	// Fields
	public uint value__; // 0x0
	public const UnityTls.unitytls_protocol UNITYTLS_PROTOCOL_TLS_1_0 = 0;
	public const UnityTls.unitytls_protocol UNITYTLS_PROTOCOL_TLS_1_1 = 1;
	public const UnityTls.unitytls_protocol UNITYTLS_PROTOCOL_TLS_1_2 = 2;
	public const UnityTls.unitytls_protocol UNITYTLS_PROTOCOL_INVALID = 3;
}


// Namespace: 
public struct UnityTls.unitytls_tlsctx_protocolrange // TypeDefIndex: 3224
{
	// Fields
	public UnityTls.unitytls_protocol min; // 0x0
	public UnityTls.unitytls_protocol max; // 0x4
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_tlsctx_write_callback : MulticastDelegate // TypeDefIndex: 3225
{
	// Methods

	// RVA: 0xFC59BC Offset: 0xFC19BC VA: 0xFC59BC
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC5A5C Offset: 0xFC1A5C VA: 0xFC5A5C Slot: 12
	public virtual IntPtr Invoke(void* userData, byte* data, IntPtr bufferLen, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_tlsctx_read_callback : MulticastDelegate // TypeDefIndex: 3226
{
	// Methods

	// RVA: 0xFC5A70 Offset: 0xFC1A70 VA: 0xFC5A70
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC5B10 Offset: 0xFC1B10 VA: 0xFC5B10 Slot: 12
	public virtual IntPtr Invoke(void* userData, byte* buffer, IntPtr bufferLen, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_tlsctx_trace_callback : MulticastDelegate // TypeDefIndex: 3227
{
	// Methods

	// RVA: 0xFC5B24 Offset: 0xFC1B24 VA: 0xFC5B24
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC5BC4 Offset: 0xFC1BC4 VA: 0xFC5BC4 Slot: 12
	public virtual void Invoke(void* userData, UnityTls.unitytls_tlsctx* ctx, byte* traceMessage, IntPtr traceMessageLen) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_tlsctx_certificate_callback : MulticastDelegate // TypeDefIndex: 3228
{
	// Methods

	// RVA: 0xFC5BD8 Offset: 0xFC1BD8 VA: 0xFC5BD8
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC5C78 Offset: 0xFC1C78 VA: 0xFC5C78 Slot: 12
	public virtual void Invoke(void* userData, UnityTls.unitytls_tlsctx* ctx, byte* cn, IntPtr cnLen, UnityTls.unitytls_x509name* caList, IntPtr caListLen, UnityTls.unitytls_x509list_ref* chain, UnityTls.unitytls_key_ref* key, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_tlsctx_x509verify_callback : MulticastDelegate // TypeDefIndex: 3229
{
	// Methods

	// RVA: 0xFC5C94 Offset: 0xFC1C94 VA: 0xFC5C94
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC5D34 Offset: 0xFC1D34 VA: 0xFC5D34 Slot: 12
	public virtual UnityTls.unitytls_x509verify_result Invoke(void* userData, UnityTls.unitytls_x509list_ref chain, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
public struct UnityTls.unitytls_tlsctx_callbacks // TypeDefIndex: 3230
{
	// Fields
	public UnityTls.unitytls_tlsctx_read_callback read; // 0x0
	public UnityTls.unitytls_tlsctx_write_callback write; // 0x8
	public void* data; // 0x10
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_errorstate_create_t : MulticastDelegate // TypeDefIndex: 3231
{
	// Methods

	// RVA: 0xFC5D50 Offset: 0xFC1D50 VA: 0xFC5D50
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC5DD8 Offset: 0xFC1DD8 VA: 0xFC5DD8 Slot: 12
	public virtual UnityTls.unitytls_errorstate Invoke() { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_errorstate_raise_error_t : MulticastDelegate // TypeDefIndex: 3232
{
	// Methods

	// RVA: 0xFC5DEC Offset: 0xFC1DEC VA: 0xFC5DEC
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC5E8C Offset: 0xFC1E8C VA: 0xFC5E8C Slot: 12
	public virtual void Invoke(UnityTls.unitytls_errorstate* errorState, UnityTls.unitytls_error_code errorCode) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_key_get_ref_t : MulticastDelegate // TypeDefIndex: 3233
{
	// Methods

	// RVA: 0xFC5EA0 Offset: 0xFC1EA0 VA: 0xFC5EA0
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC5F40 Offset: 0xFC1F40 VA: 0xFC5F40 Slot: 12
	public virtual UnityTls.unitytls_key_ref Invoke(UnityTls.unitytls_key* key, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_key_parse_der_t : MulticastDelegate // TypeDefIndex: 3234
{
	// Methods

	// RVA: 0xFC5F54 Offset: 0xFC1F54 VA: 0xFC5F54
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC5FF4 Offset: 0xFC1FF4 VA: 0xFC5FF4 Slot: 12
	public virtual UnityTls.unitytls_key* Invoke(byte* buffer, IntPtr bufferLen, byte* password, IntPtr passwordLen, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_key_parse_pem_t : MulticastDelegate // TypeDefIndex: 3235
{
	// Methods

	// RVA: 0xFC6008 Offset: 0xFC2008 VA: 0xFC6008
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC60A8 Offset: 0xFC20A8 VA: 0xFC60A8 Slot: 12
	public virtual UnityTls.unitytls_key* Invoke(byte* buffer, IntPtr bufferLen, byte* password, IntPtr passwordLen, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_key_free_t : MulticastDelegate // TypeDefIndex: 3236
{
	// Methods

	// RVA: 0xFC60BC Offset: 0xFC20BC VA: 0xFC60BC
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC6158 Offset: 0xFC2158 VA: 0xFC6158 Slot: 12
	public virtual void Invoke(UnityTls.unitytls_key* key) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_x509_export_der_t : MulticastDelegate // TypeDefIndex: 3237
{
	// Methods

	// RVA: 0xFC616C Offset: 0xFC216C VA: 0xFC616C
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC61F8 Offset: 0xFC21F8 VA: 0xFC61F8 Slot: 12
	public virtual IntPtr Invoke(UnityTls.unitytls_x509_ref cert, byte* buffer, IntPtr bufferLen, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_x509list_get_ref_t : MulticastDelegate // TypeDefIndex: 3238
{
	// Methods

	// RVA: 0xFC620C Offset: 0xFC220C VA: 0xFC620C
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC62AC Offset: 0xFC22AC VA: 0xFC62AC Slot: 12
	public virtual UnityTls.unitytls_x509list_ref Invoke(UnityTls.unitytls_x509list* list, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_x509list_get_x509_t : MulticastDelegate // TypeDefIndex: 3239
{
	// Methods

	// RVA: 0xFC62C0 Offset: 0xFC22C0 VA: 0xFC62C0
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC634C Offset: 0xFC234C VA: 0xFC634C Slot: 12
	public virtual UnityTls.unitytls_x509_ref Invoke(UnityTls.unitytls_x509list_ref list, IntPtr index, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_x509list_create_t : MulticastDelegate // TypeDefIndex: 3240
{
	// Methods

	// RVA: 0xFC6360 Offset: 0xFC2360 VA: 0xFC6360
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC63FC Offset: 0xFC23FC VA: 0xFC63FC Slot: 12
	public virtual UnityTls.unitytls_x509list* Invoke(UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_x509list_append_t : MulticastDelegate // TypeDefIndex: 3241
{
	// Methods

	// RVA: 0xFC6410 Offset: 0xFC2410 VA: 0xFC6410
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC64B0 Offset: 0xFC24B0 VA: 0xFC64B0 Slot: 12
	public virtual void Invoke(UnityTls.unitytls_x509list* list, UnityTls.unitytls_x509_ref cert, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_x509list_append_der_t : MulticastDelegate // TypeDefIndex: 3242
{
	// Methods

	// RVA: 0xFC64C4 Offset: 0xFC24C4 VA: 0xFC64C4
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC6564 Offset: 0xFC2564 VA: 0xFC6564 Slot: 12
	public virtual void Invoke(UnityTls.unitytls_x509list* list, byte* buffer, IntPtr bufferLen, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_x509list_free_t : MulticastDelegate // TypeDefIndex: 3243
{
	// Methods

	// RVA: 0xFC6578 Offset: 0xFC2578 VA: 0xFC6578
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC6614 Offset: 0xFC2614 VA: 0xFC6614 Slot: 12
	public virtual void Invoke(UnityTls.unitytls_x509list* list) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_x509verify_default_ca_t : MulticastDelegate // TypeDefIndex: 3244
{
	// Methods

	// RVA: 0xFC6628 Offset: 0xFC2628 VA: 0xFC6628
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC66B4 Offset: 0xFC26B4 VA: 0xFC66B4 Slot: 12
	public virtual UnityTls.unitytls_x509verify_result Invoke(UnityTls.unitytls_x509list_ref chain, byte* cn, IntPtr cnLen, UnityTls.unitytls_x509verify_callback cb, void* userData, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_x509verify_explicit_ca_t : MulticastDelegate // TypeDefIndex: 3245
{
	// Methods

	// RVA: 0xFC66C8 Offset: 0xFC26C8 VA: 0xFC66C8
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC6754 Offset: 0xFC2754 VA: 0xFC6754 Slot: 12
	public virtual UnityTls.unitytls_x509verify_result Invoke(UnityTls.unitytls_x509list_ref chain, UnityTls.unitytls_x509list_ref trustCA, byte* cn, IntPtr cnLen, UnityTls.unitytls_x509verify_callback cb, void* userData, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_tlsctx_create_server_t : MulticastDelegate // TypeDefIndex: 3246
{
	// Methods

	// RVA: 0xFC676C Offset: 0xFC276C VA: 0xFC676C
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC67F8 Offset: 0xFC27F8 VA: 0xFC67F8 Slot: 12
	public virtual UnityTls.unitytls_tlsctx* Invoke(UnityTls.unitytls_tlsctx_protocolrange supportedProtocols, UnityTls.unitytls_tlsctx_callbacks callbacks, ulong certChain, ulong leafCertificateKey, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_tlsctx_create_client_t : MulticastDelegate // TypeDefIndex: 3247
{
	// Methods

	// RVA: 0xFC6834 Offset: 0xFC2834 VA: 0xFC6834
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC68C0 Offset: 0xFC28C0 VA: 0xFC68C0 Slot: 12
	public virtual UnityTls.unitytls_tlsctx* Invoke(UnityTls.unitytls_tlsctx_protocolrange supportedProtocols, UnityTls.unitytls_tlsctx_callbacks callbacks, byte* cn, IntPtr cnLen, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_tlsctx_server_require_client_authentication_t : MulticastDelegate // TypeDefIndex: 3248
{
	// Methods

	// RVA: 0xFC68FC Offset: 0xFC28FC VA: 0xFC68FC
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC699C Offset: 0xFC299C VA: 0xFC699C Slot: 12
	public virtual void Invoke(UnityTls.unitytls_tlsctx* ctx, UnityTls.unitytls_x509list_ref clientAuthCAList, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_tlsctx_set_certificate_callback_t : MulticastDelegate // TypeDefIndex: 3249
{
	// Methods

	// RVA: 0xFC69B0 Offset: 0xFC29B0 VA: 0xFC69B0
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC6A50 Offset: 0xFC2A50 VA: 0xFC6A50 Slot: 12
	public virtual void Invoke(UnityTls.unitytls_tlsctx* ctx, UnityTls.unitytls_tlsctx_certificate_callback cb, void* userData, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_tlsctx_set_trace_callback_t : MulticastDelegate // TypeDefIndex: 3250
{
	// Methods

	// RVA: 0xFC6A64 Offset: 0xFC2A64 VA: 0xFC6A64
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC6B04 Offset: 0xFC2B04 VA: 0xFC6B04 Slot: 12
	public virtual void Invoke(UnityTls.unitytls_tlsctx* ctx, UnityTls.unitytls_tlsctx_trace_callback cb, void* userData, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_tlsctx_set_x509verify_callback_t : MulticastDelegate // TypeDefIndex: 3251
{
	// Methods

	// RVA: 0xFC6B18 Offset: 0xFC2B18 VA: 0xFC6B18
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC6BB8 Offset: 0xFC2BB8 VA: 0xFC6BB8 Slot: 12
	public virtual void Invoke(UnityTls.unitytls_tlsctx* ctx, UnityTls.unitytls_tlsctx_x509verify_callback cb, void* userData, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_tlsctx_set_supported_ciphersuites_t : MulticastDelegate // TypeDefIndex: 3252
{
	// Methods

	// RVA: 0xFC6BCC Offset: 0xFC2BCC VA: 0xFC6BCC
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC6C6C Offset: 0xFC2C6C VA: 0xFC6C6C Slot: 12
	public virtual void Invoke(UnityTls.unitytls_tlsctx* ctx, UnityTls.unitytls_ciphersuite* supportedCiphersuites, IntPtr supportedCiphersuitesLen, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_tlsctx_get_ciphersuite_t : MulticastDelegate // TypeDefIndex: 3253
{
	// Methods

	// RVA: 0xFC6C80 Offset: 0xFC2C80 VA: 0xFC6C80
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC6D20 Offset: 0xFC2D20 VA: 0xFC6D20 Slot: 12
	public virtual UnityTls.unitytls_ciphersuite Invoke(UnityTls.unitytls_tlsctx* ctx, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_tlsctx_get_protocol_t : MulticastDelegate // TypeDefIndex: 3254
{
	// Methods

	// RVA: 0xFC6D34 Offset: 0xFC2D34 VA: 0xFC6D34
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC6DD4 Offset: 0xFC2DD4 VA: 0xFC6DD4 Slot: 12
	public virtual UnityTls.unitytls_protocol Invoke(UnityTls.unitytls_tlsctx* ctx, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_tlsctx_process_handshake_t : MulticastDelegate // TypeDefIndex: 3255
{
	// Methods

	// RVA: 0xFC6DE8 Offset: 0xFC2DE8 VA: 0xFC6DE8
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC6E88 Offset: 0xFC2E88 VA: 0xFC6E88 Slot: 12
	public virtual UnityTls.unitytls_x509verify_result Invoke(UnityTls.unitytls_tlsctx* ctx, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_tlsctx_read_t : MulticastDelegate // TypeDefIndex: 3256
{
	// Methods

	// RVA: 0xFC6E9C Offset: 0xFC2E9C VA: 0xFC6E9C
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC6F3C Offset: 0xFC2F3C VA: 0xFC6F3C Slot: 12
	public virtual IntPtr Invoke(UnityTls.unitytls_tlsctx* ctx, byte* buffer, IntPtr bufferLen, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_tlsctx_write_t : MulticastDelegate // TypeDefIndex: 3257
{
	// Methods

	// RVA: 0xFC6F50 Offset: 0xFC2F50 VA: 0xFC6F50
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC6FF0 Offset: 0xFC2FF0 VA: 0xFC6FF0 Slot: 12
	public virtual IntPtr Invoke(UnityTls.unitytls_tlsctx* ctx, byte* data, IntPtr bufferLen, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_tlsctx_notify_close_t : MulticastDelegate // TypeDefIndex: 3258
{
	// Methods

	// RVA: 0xFC7004 Offset: 0xFC3004 VA: 0xFC7004
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC70A4 Offset: 0xFC30A4 VA: 0xFC70A4 Slot: 12
	public virtual void Invoke(UnityTls.unitytls_tlsctx* ctx, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_tlsctx_free_t : MulticastDelegate // TypeDefIndex: 3259
{
	// Methods

	// RVA: 0xFC70B8 Offset: 0xFC30B8 VA: 0xFC70B8
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC7154 Offset: 0xFC3154 VA: 0xFC7154 Slot: 12
	public virtual void Invoke(UnityTls.unitytls_tlsctx* ctx) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
public sealed class UnityTls.unitytls_interface_struct.unitytls_random_generate_bytes_t : MulticastDelegate // TypeDefIndex: 3260
{
	// Methods

	// RVA: 0xFC7168 Offset: 0xFC3168 VA: 0xFC7168
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xFC7208 Offset: 0xFC3208 VA: 0xFC7208 Slot: 12
	public virtual void Invoke(byte* buffer, IntPtr bufferLen, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: 
public class UnityTls.unitytls_interface_struct // TypeDefIndex: 3261
{
	// Fields
	public readonly ulong UNITYTLS_INVALID_HANDLE; // 0x10
	public readonly UnityTls.unitytls_tlsctx_protocolrange UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT; // 0x18
	public UnityTls.unitytls_interface_struct.unitytls_errorstate_create_t unitytls_errorstate_create; // 0x20
	public UnityTls.unitytls_interface_struct.unitytls_errorstate_raise_error_t unitytls_errorstate_raise_error; // 0x28
	public UnityTls.unitytls_interface_struct.unitytls_key_get_ref_t unitytls_key_get_ref; // 0x30
	public UnityTls.unitytls_interface_struct.unitytls_key_parse_der_t unitytls_key_parse_der; // 0x38
	public UnityTls.unitytls_interface_struct.unitytls_key_parse_pem_t unitytls_key_parse_pem; // 0x40
	public UnityTls.unitytls_interface_struct.unitytls_key_free_t unitytls_key_free; // 0x48
	public UnityTls.unitytls_interface_struct.unitytls_x509_export_der_t unitytls_x509_export_der; // 0x50
	public UnityTls.unitytls_interface_struct.unitytls_x509list_get_ref_t unitytls_x509list_get_ref; // 0x58
	public UnityTls.unitytls_interface_struct.unitytls_x509list_get_x509_t unitytls_x509list_get_x509; // 0x60
	public UnityTls.unitytls_interface_struct.unitytls_x509list_create_t unitytls_x509list_create; // 0x68
	public UnityTls.unitytls_interface_struct.unitytls_x509list_append_t unitytls_x509list_append; // 0x70
	public UnityTls.unitytls_interface_struct.unitytls_x509list_append_der_t unitytls_x509list_append_der; // 0x78
	public UnityTls.unitytls_interface_struct.unitytls_x509list_append_der_t unitytls_x509list_append_pem; // 0x80
	public UnityTls.unitytls_interface_struct.unitytls_x509list_free_t unitytls_x509list_free; // 0x88
	public UnityTls.unitytls_interface_struct.unitytls_x509verify_default_ca_t unitytls_x509verify_default_ca; // 0x90
	public UnityTls.unitytls_interface_struct.unitytls_x509verify_explicit_ca_t unitytls_x509verify_explicit_ca; // 0x98
	public UnityTls.unitytls_interface_struct.unitytls_tlsctx_create_server_t unitytls_tlsctx_create_server; // 0xA0
	public UnityTls.unitytls_interface_struct.unitytls_tlsctx_create_client_t unitytls_tlsctx_create_client; // 0xA8
	public UnityTls.unitytls_interface_struct.unitytls_tlsctx_server_require_client_authentication_t unitytls_tlsctx_server_require_client_authentication; // 0xB0
	public UnityTls.unitytls_interface_struct.unitytls_tlsctx_set_certificate_callback_t unitytls_tlsctx_set_certificate_callback; // 0xB8
	public UnityTls.unitytls_interface_struct.unitytls_tlsctx_set_trace_callback_t unitytls_tlsctx_set_trace_callback; // 0xC0
	public UnityTls.unitytls_interface_struct.unitytls_tlsctx_set_x509verify_callback_t unitytls_tlsctx_set_x509verify_callback; // 0xC8
	public UnityTls.unitytls_interface_struct.unitytls_tlsctx_set_supported_ciphersuites_t unitytls_tlsctx_set_supported_ciphersuites; // 0xD0
	public UnityTls.unitytls_interface_struct.unitytls_tlsctx_get_ciphersuite_t unitytls_tlsctx_get_ciphersuite; // 0xD8
	public UnityTls.unitytls_interface_struct.unitytls_tlsctx_get_protocol_t unitytls_tlsctx_get_protocol; // 0xE0
	public UnityTls.unitytls_interface_struct.unitytls_tlsctx_process_handshake_t unitytls_tlsctx_process_handshake; // 0xE8
	public UnityTls.unitytls_interface_struct.unitytls_tlsctx_read_t unitytls_tlsctx_read; // 0xF0
	public UnityTls.unitytls_interface_struct.unitytls_tlsctx_write_t unitytls_tlsctx_write; // 0xF8
	public UnityTls.unitytls_interface_struct.unitytls_tlsctx_notify_close_t unitytls_tlsctx_notify_close; // 0x100
	public UnityTls.unitytls_interface_struct.unitytls_tlsctx_free_t unitytls_tlsctx_free; // 0x108
	public UnityTls.unitytls_interface_struct.unitytls_random_generate_bytes_t unitytls_random_generate_bytes; // 0x110

	// Methods

	// RVA: 0xFC5D48 Offset: 0xFC1D48 VA: 0xFC5D48
	public void .ctor() { }
}


// Namespace: Mono.Unity
internal static class UnityTls // TypeDefIndex: 3262
{
	// Fields
	private static UnityTls.unitytls_interface_struct marshalledInterface; // 0x0

	// Properties
	public static bool IsSupported { get; }
	public static UnityTls.unitytls_interface_struct NativeInterface { get; }

	// Methods

	// RVA: 0xFC58EC Offset: 0xFC18EC VA: 0xFC58EC
	private static IntPtr GetUnityTlsInterface() { }

	// RVA: 0xFC58F0 Offset: 0xFC18F0 VA: 0xFC58F0
	public static bool get_IsSupported() { }

	// RVA: 0xFC5660 Offset: 0xFC1660 VA: 0xFC5660
	public static UnityTls.unitytls_interface_struct get_NativeInterface() { }
}


// Namespace: Mono.Unity
internal class UnityTlsContext : MobileTlsContext // TypeDefIndex: 3263
{
	// Fields
	private UnityTls.unitytls_tlsctx* tlsContext; // 0x58
	private UnityTls.unitytls_x509list* requestedClientCertChain; // 0x60
	private UnityTls.unitytls_key* requestedClientKey; // 0x68
	private UnityTls.unitytls_tlsctx_read_callback readCallback; // 0x70
	private UnityTls.unitytls_tlsctx_write_callback writeCallback; // 0x78
	private UnityTls.unitytls_tlsctx_certificate_callback certificateCallback; // 0x80
	private UnityTls.unitytls_tlsctx_x509verify_callback verifyCallback; // 0x88
	private X509Certificate localClientCertificate; // 0x90
	private X509Certificate2 remoteCertificate; // 0x98
	private MonoTlsConnectionInfo connectioninfo; // 0xA0
	private bool isAuthenticated; // 0xA8
	private bool hasContext; // 0xA9
	private bool closedGraceful; // 0xAA
	private byte[] writeBuffer; // 0xB0
	private byte[] readBuffer; // 0xB8
	private GCHandle handle; // 0xC0
	private Exception lastException; // 0xC8

	// Properties
	public override bool IsAuthenticated { get; }
	internal override X509Certificate LocalClientCertificate { get; }
	public override X509Certificate2 RemoteCertificate { get; }

	// Methods

	// RVA: 0xFC7524 Offset: 0xFC3524 VA: 0xFC7524
	public void .ctor(MobileAuthenticatedStream parent, MonoSslAuthenticationOptions options) { }

	// RVA: 0xFC7D9C Offset: 0xFC3D9C VA: 0xFC7D9C
	private static void ExtractNativeKeyAndChainFromManagedCertificate(X509Certificate cert, UnityTls.unitytls_errorstate* errorState, out UnityTls.unitytls_x509list* nativeCertChain, out UnityTls.unitytls_key* nativeKey) { }

	// RVA: 0xFC80F0 Offset: 0xFC40F0 VA: 0xFC80F0 Slot: 5
	public override bool get_IsAuthenticated() { }

	// RVA: 0xFC80F8 Offset: 0xFC40F8 VA: 0xFC80F8 Slot: 9
	internal override X509Certificate get_LocalClientCertificate() { }

	// RVA: 0xFC8100 Offset: 0xFC4100 VA: 0xFC8100 Slot: 10
	public override X509Certificate2 get_RemoteCertificate() { }

	// RVA: 0xFC8108 Offset: 0xFC4108 VA: 0xFC8108 Slot: 11
	public override ValueTuple<int, bool> Read(byte[] buffer, int offset, int count) { }

	// RVA: 0xFC82C4 Offset: 0xFC42C4 VA: 0xFC82C4 Slot: 12
	public override ValueTuple<int, bool> Write(byte[] buffer, int offset, int count) { }

	// RVA: 0xFC8478 Offset: 0xFC4478 VA: 0xFC8478 Slot: 14
	public override void Renegotiate() { }

	// RVA: 0xFC84B0 Offset: 0xFC44B0 VA: 0xFC84B0 Slot: 13
	public override void Shutdown() { }

	// RVA: 0xFC85C4 Offset: 0xFC45C4 VA: 0xFC85C4 Slot: 15
	protected override void Dispose(bool disposing) { }

	// RVA: 0xFC863C Offset: 0xFC463C VA: 0xFC863C Slot: 6
	public override void StartHandshake() { }

	// RVA: 0xFC87BC Offset: 0xFC47BC VA: 0xFC87BC Slot: 7
	public override bool ProcessHandshake() { }

	// RVA: 0xFC8978 Offset: 0xFC4978 VA: 0xFC8978 Slot: 8
	public override void FinishHandshake() { }

	[MonoPInvokeCallback(typeof(UnityTls.unitytls_tlsctx_write_callback))]
	// RVA: 0xFC721C Offset: 0xFC321C VA: 0xFC721C
	private static IntPtr WriteCallback(void* userData, byte* data, IntPtr bufferLen, UnityTls.unitytls_errorstate* errorState) { }

	// RVA: 0xFC8ABC Offset: 0xFC4ABC VA: 0xFC8ABC
	private IntPtr WriteCallback(byte* data, IntPtr bufferLen, UnityTls.unitytls_errorstate* errorState) { }

	[MonoPInvokeCallback(typeof(UnityTls.unitytls_tlsctx_read_callback))]
	// RVA: 0xFC72E4 Offset: 0xFC32E4 VA: 0xFC72E4
	private static IntPtr ReadCallback(void* userData, byte* buffer, IntPtr bufferLen, UnityTls.unitytls_errorstate* errorState) { }

	// RVA: 0xFC8EB8 Offset: 0xFC4EB8 VA: 0xFC8EB8
	private IntPtr ReadCallback(byte* buffer, IntPtr bufferLen, UnityTls.unitytls_errorstate* errorState) { }

	[MonoPInvokeCallback(typeof(UnityTls.unitytls_tlsctx_x509verify_callback))]
	// RVA: 0xFC73AC Offset: 0xFC33AC VA: 0xFC73AC
	private static UnityTls.unitytls_x509verify_result VerifyCallback(void* userData, UnityTls.unitytls_x509list_ref chain, UnityTls.unitytls_errorstate* errorState) { }

	// RVA: 0xFC92BC Offset: 0xFC52BC VA: 0xFC92BC
	private UnityTls.unitytls_x509verify_result VerifyCallback(UnityTls.unitytls_x509list_ref chain, UnityTls.unitytls_errorstate* errorState) { }

	[MonoPInvokeCallback(typeof(UnityTls.unitytls_tlsctx_certificate_callback))]
	// RVA: 0xFC745C Offset: 0xFC345C VA: 0xFC745C
	private static void CertificateCallback(void* userData, UnityTls.unitytls_tlsctx* ctx, byte* cn, IntPtr cnLen, UnityTls.unitytls_x509name* caList, IntPtr caListLen, UnityTls.unitytls_x509list_ref* chain, UnityTls.unitytls_key_ref* key, UnityTls.unitytls_errorstate* errorState) { }

	// RVA: 0xFC9764 Offset: 0xFC5764 VA: 0xFC9764
	private void CertificateCallback(UnityTls.unitytls_tlsctx* ctx, byte* cn, IntPtr cnLen, UnityTls.unitytls_x509name* caList, IntPtr caListLen, UnityTls.unitytls_x509list_ref* chain, UnityTls.unitytls_key_ref* key, UnityTls.unitytls_errorstate* errorState) { }
}


// Namespace: Mono.Unity
internal static class UnityTlsConversions // TypeDefIndex: 3264
{
	// Methods

	// RVA: 0xFC7D2C Offset: 0xFC3D2C VA: 0xFC7D2C
	public static UnityTls.unitytls_protocol GetMinProtocol(SslProtocols protocols) { }

	// RVA: 0xFC7D64 Offset: 0xFC3D64 VA: 0xFC7D64
	public static UnityTls.unitytls_protocol GetMaxProtocol(SslProtocols protocols) { }

	// RVA: 0xFC8A9C Offset: 0xFC4A9C VA: 0xFC8A9C
	public static TlsProtocols ConvertProtocolVersion(UnityTls.unitytls_protocol protocol) { }

	// RVA: 0xFC5898 Offset: 0xFC1898 VA: 0xFC5898
	public static AlertDescription VerifyResultToAlertDescription(UnityTls.unitytls_x509verify_result verifyResult, AlertDescription defaultAlert = 80) { }

	// RVA: 0xFC9F1C Offset: 0xFC5F1C VA: 0xFC9F1C
	public static SslPolicyErrors VerifyResultToPolicyErrror(UnityTls.unitytls_x509verify_result verifyResult) { }

	// RVA: 0xFC9F4C Offset: 0xFC5F4C VA: 0xFC9F4C
	public static X509ChainStatusFlags VerifyResultToChainStatus(UnityTls.unitytls_x509verify_result verifyResult) { }
}


// Namespace: Mono.Unity
internal class UnityTlsProvider : MobileTlsProvider // TypeDefIndex: 3265
{
	// Properties
	public override string Name { get; }
	public override Guid ID { get; }
	public override bool SupportsSslStream { get; }
	public override bool SupportsMonoExtensions { get; }
	public override bool SupportsConnectionInfo { get; }
	internal override bool SupportsCleanShutdown { get; }
	public override SslProtocols SupportedProtocols { get; }

	// Methods

	// RVA: 0xFC9FF0 Offset: 0xFC5FF0 VA: 0xFC9FF0 Slot: 5
	public override string get_Name() { }

	// RVA: 0xFCA030 Offset: 0xFC6030 VA: 0xFCA030 Slot: 4
	public override Guid get_ID() { }

	// RVA: 0xFCA088 Offset: 0xFC6088 VA: 0xFCA088 Slot: 6
	public override bool get_SupportsSslStream() { }

	// RVA: 0xFCA090 Offset: 0xFC6090 VA: 0xFCA090 Slot: 8
	public override bool get_SupportsMonoExtensions() { }

	// RVA: 0xFCA098 Offset: 0xFC6098 VA: 0xFCA098 Slot: 7
	public override bool get_SupportsConnectionInfo() { }

	// RVA: 0xFCA0A0 Offset: 0xFC60A0 VA: 0xFCA0A0 Slot: 10
	internal override bool get_SupportsCleanShutdown() { }

	// RVA: 0xFCA0A8 Offset: 0xFC60A8 VA: 0xFCA0A8 Slot: 9
	public override SslProtocols get_SupportedProtocols() { }

	// RVA: 0xFCA0B0 Offset: 0xFC60B0 VA: 0xFCA0B0 Slot: 11
	internal override MobileAuthenticatedStream CreateSslStream(SslStream sslStream, Stream innerStream, bool leaveInnerStreamOpen, MonoTlsSettings settings) { }

	[MonoPInvokeCallback(typeof(UnityTls.unitytls_x509verify_callback))]
	// RVA: 0xFC9F8C Offset: 0xFC5F8C VA: 0xFC9F8C
	private static UnityTls.unitytls_x509verify_result x509verify_callback(void* userData, UnityTls.unitytls_x509_ref cert, UnityTls.unitytls_x509verify_result result, UnityTls.unitytls_errorstate* errorState) { }

	// RVA: 0xFCA1CC Offset: 0xFC61CC VA: 0xFCA1CC Slot: 12
	internal override bool ValidateCertificate(ChainValidationHelper validator, string targetHost, bool serverMode, X509CertificateCollection certificates, bool wantsChain, ref X509Chain chain, ref SslPolicyErrors errors, ref int status11) { }

	// RVA: 0xFCABB4 Offset: 0xFC6BB4 VA: 0xFCABB4
	public void .ctor() { }
}


// Namespace: Mono.Unity
internal class UnityTlsStream : MobileAuthenticatedStream // TypeDefIndex: 3266
{
	// Methods

	// RVA: 0xFCA138 Offset: 0xFC6138 VA: 0xFCA138
	public void .ctor(Stream innerStream, bool leaveInnerStreamOpen, SslStream owner, MonoTlsSettings settings, MobileTlsProvider provider) { }

	// RVA: 0xFCACE8 Offset: 0xFC6CE8 VA: 0xFCACE8 Slot: 35
	protected override MobileTlsContext CreateContext(MonoSslAuthenticationOptions options) { }
}


// Namespace: Mono.Unity
internal class X509ChainImplUnityTls : X509ChainImpl // TypeDefIndex: 3267
{
	// Fields
	private X509ChainElementCollection elements; // 0x10
	private UnityTls.unitytls_x509list* ownedList; // 0x18
	private UnityTls.unitytls_x509list_ref nativeCertificateChain; // 0x20
	private X509ChainPolicy policy; // 0x28
	private List<X509ChainStatus> chainStatusList; // 0x30
	private bool reverseOrder; // 0x38

	// Properties
	public override bool IsValid { get; }
	public override X509ChainElementCollection ChainElements { get; }
	public override X509ChainPolicy ChainPolicy { get; }

	// Methods

	// RVA: 0xFC96E0 Offset: 0xFC56E0 VA: 0xFC96E0
	internal void .ctor(UnityTls.unitytls_x509list_ref nativeCertificateChain, bool reverseOrder = False) { }

	// RVA: 0xFCAAF8 Offset: 0xFC6AF8 VA: 0xFCAAF8
	internal void .ctor(UnityTls.unitytls_x509list* ownedList, UnityTls.unitytls_errorstate* errorState, bool reverseOrder = False) { }

	// RVA: 0xFCAD50 Offset: 0xFC6D50 VA: 0xFCAD50 Slot: 5
	public override bool get_IsValid() { }

	// RVA: 0xFCAD78 Offset: 0xFC6D78 VA: 0xFCAD78 Slot: 6
	public override X509ChainElementCollection get_ChainElements() { }

	// RVA: 0xFCB048 Offset: 0xFC7048 VA: 0xFCB048 Slot: 9
	public override void AddStatus(X509ChainStatusFlags error) { }

	// RVA: 0xFCB110 Offset: 0xFC7110 VA: 0xFCB110 Slot: 7
	public override X509ChainPolicy get_ChainPolicy() { }

	// RVA: 0xFCB118 Offset: 0xFC7118 VA: 0xFCB118 Slot: 8
	public override bool Build(X509Certificate2 certificate) { }

	// RVA: 0xFCB120 Offset: 0xFC7120 VA: 0xFCB120 Slot: 10
	public override void Reset() { }

	// RVA: 0xFCB190 Offset: 0xFC7190 VA: 0xFCB190 Slot: 11
	protected override void Dispose(bool disposing) { }
}


// Namespace: Mono.Net.Security
internal class BufferOffsetSize // TypeDefIndex: 3268
{
	// Fields
	public byte[] Buffer; // 0x10
	public int Offset; // 0x18
	public int Size; // 0x1C
	public int TotalBytes; // 0x20
	public bool Complete; // 0x24

	// Properties
	public int EndOffset { get; }
	public int Remaining { get; }

	// Methods

	// RVA: 0xFCB1C8 Offset: 0xFC71C8 VA: 0xFCB1C8
	public int get_EndOffset() { }

	// RVA: 0xFCB1D4 Offset: 0xFC71D4 VA: 0xFCB1D4
	public int get_Remaining() { }

	// RVA: 0xFCB1FC Offset: 0xFC71FC VA: 0xFCB1FC
	public void .ctor(byte[] buffer, int offset, int size) { }

	// RVA: 0xFCB2F4 Offset: 0xFC72F4 VA: 0xFCB2F4 Slot: 3
	public override string ToString() { }
}


// Namespace: Mono.Net.Security
internal class BufferOffsetSize2 : BufferOffsetSize // TypeDefIndex: 3269
{
	// Fields
	public readonly int InitialSize; // 0x28

	// Methods

	// RVA: 0xFCB394 Offset: 0xFC7394 VA: 0xFCB394
	public void .ctor(int size) { }

	// RVA: 0xFCB404 Offset: 0xFC7404 VA: 0xFCB404
	public void Reset() { }

	// RVA: 0xFCB460 Offset: 0xFC7460 VA: 0xFCB460
	public void MakeRoom(int size) { }

	// RVA: 0xFCB514 Offset: 0xFC7514 VA: 0xFCB514
	public void AppendData(byte[] buffer, int offset, int size) { }
}


// Namespace: Mono.Net.Security
internal enum AsyncOperationStatus // TypeDefIndex: 3270
{
	// Fields
	public int value__; // 0x0
	public const AsyncOperationStatus Initialize = 0;
	public const AsyncOperationStatus Continue = 1;
	public const AsyncOperationStatus ReadDone = 2;
	public const AsyncOperationStatus Complete = 3;
}


// Namespace: Mono.Net.Security
internal class AsyncProtocolResult // TypeDefIndex: 3271
{
	// Fields
	[CompilerGenerated]
	private readonly int <UserResult>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly ExceptionDispatchInfo <Error>k__BackingField; // 0x18

	// Methods

	// RVA: 0xFCB574 Offset: 0xFC7574 VA: 0xFCB574
	public void .ctor(int result) { }

	// RVA: 0xFCB59C Offset: 0xFC759C VA: 0xFCB59C
	public void .ctor(ExceptionDispatchInfo error) { }
}


// Namespace: 
[CompilerGenerated]
private struct AsyncProtocolRequest.<StartOperation>d__23 : IAsyncStateMachine // TypeDefIndex: 3272
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<AsyncProtocolResult> <>t__builder; // 0x8
	public AsyncProtocolRequest <>4__this; // 0x20
	public CancellationToken cancellationToken; // 0x28
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter <>u__1; // 0x30

	// Methods

	// RVA: 0xFCBA3C Offset: 0xFC7A3C VA: 0xFCBA3C Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0xFCBDFC Offset: 0xFC7DFC VA: 0xFCBDFC Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct AsyncProtocolRequest.<ProcessOperation>d__24 : IAsyncStateMachine // TypeDefIndex: 3273
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public CancellationToken cancellationToken; // 0x20
	public AsyncProtocolRequest <>4__this; // 0x28
	private AsyncOperationStatus <status>5__2; // 0x30
	private AsyncOperationStatus <newStatus>5__3; // 0x34
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<Nullable<int>> <>u__1; // 0x38
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter <>u__2; // 0x48

	// Methods

	// RVA: 0xFCBE78 Offset: 0xFC7E78 VA: 0xFCBE78 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0xFCC5FC Offset: 0xFC85FC VA: 0xFCC5FC Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct AsyncProtocolRequest.<InnerRead>d__25 : IAsyncStateMachine // TypeDefIndex: 3274
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<Nullable<int>> <>t__builder; // 0x8
	public AsyncProtocolRequest <>4__this; // 0x20
	public CancellationToken cancellationToken; // 0x28
	private Nullable<int> <totalRead>5__2; // 0x30
	private int <requestedSize>5__3; // 0x38
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<int> <>u__1; // 0x40

	// Methods

	// RVA: 0xFCC664 Offset: 0xFC8664 VA: 0xFCC664 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0xFCCAF4 Offset: 0xFC8AF4 VA: 0xFCCAF4 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: Mono.Net.Security
internal abstract class AsyncProtocolRequest // TypeDefIndex: 3275
{
	// Fields
	[CompilerGenerated]
	private readonly MobileAuthenticatedStream <Parent>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly bool <RunSynchronously>k__BackingField; // 0x18
	[CompilerGenerated]
	private int <UserResult>k__BackingField; // 0x1C
	private int Started; // 0x20
	private int RequestedSize; // 0x24
	private int WriteRequested; // 0x28
	private readonly object locker; // 0x30

	// Properties
	public string Name { get; }

	// Methods

	// RVA: 0xFCB5C4 Offset: 0xFC75C4 VA: 0xFCB5C4
	public string get_Name() { }

	// RVA: 0xFCB5E8 Offset: 0xFC75E8 VA: 0xFCB5E8
	public void .ctor(MobileAuthenticatedStream parent, bool sync) { }

	// RVA: 0xFCB668 Offset: 0xFC7668 VA: 0xFCB668
	internal void RequestRead(int size) { }

	// RVA: 0xFCB72C Offset: 0xFC772C VA: 0xFCB72C
	internal void RequestWrite() { }

	[AsyncStateMachine(typeof(AsyncProtocolRequest.<StartOperation>d__23))]
	// RVA: 0xFCB738 Offset: 0xFC7738 VA: 0xFCB738
	internal Task<AsyncProtocolResult> StartOperation(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(AsyncProtocolRequest.<ProcessOperation>d__24))]
	// RVA: 0xFCB820 Offset: 0xFC7820 VA: 0xFCB820
	private Task ProcessOperation(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(AsyncProtocolRequest.<InnerRead>d__25))]
	// RVA: 0xFCB8F8 Offset: 0xFC78F8 VA: 0xFCB8F8
	private Task<Nullable<int>> InnerRead(CancellationToken cancellationToken) { }

	// RVA: -1 Offset: -1 Slot: 4
	protected abstract AsyncOperationStatus Run(AsyncOperationStatus status);

	// RVA: 0xFCB9E4 Offset: 0xFC79E4 VA: 0xFCB9E4 Slot: 3
	public override string ToString() { }
}


// Namespace: Mono.Net.Security
internal class AsyncHandshakeRequest : AsyncProtocolRequest // TypeDefIndex: 3276
{
	// Methods

	// RVA: 0xFCCB70 Offset: 0xFC8B70 VA: 0xFCCB70
	public void .ctor(MobileAuthenticatedStream parent, bool sync) { }

	// RVA: 0xFCCB78 Offset: 0xFC8B78 VA: 0xFCCB78 Slot: 4
	protected override AsyncOperationStatus Run(AsyncOperationStatus status) { }
}


// Namespace: Mono.Net.Security
internal abstract class AsyncReadOrWriteRequest : AsyncProtocolRequest // TypeDefIndex: 3277
{
	// Fields
	[CompilerGenerated]
	private readonly BufferOffsetSize <UserBuffer>k__BackingField; // 0x38
	[CompilerGenerated]
	private int <CurrentSize>k__BackingField; // 0x40

	// Methods

	// RVA: 0xFCCF58 Offset: 0xFC8F58 VA: 0xFCCF58
	public void .ctor(MobileAuthenticatedStream parent, bool sync, byte[] buffer, int offset, int size) { }

	// RVA: 0xFCCFF4 Offset: 0xFC8FF4 VA: 0xFCCFF4 Slot: 3
	public override string ToString() { }
}


// Namespace: Mono.Net.Security
internal class AsyncReadRequest : AsyncReadOrWriteRequest // TypeDefIndex: 3278
{
	// Methods

	// RVA: 0xFCD050 Offset: 0xFC9050 VA: 0xFCD050
	public void .ctor(MobileAuthenticatedStream parent, bool sync, byte[] buffer, int offset, int size) { }

	// RVA: 0xFCD058 Offset: 0xFC9058 VA: 0xFCD058 Slot: 4
	protected override AsyncOperationStatus Run(AsyncOperationStatus status) { }
}


// Namespace: Mono.Net.Security
internal class AsyncWriteRequest : AsyncReadOrWriteRequest // TypeDefIndex: 3279
{
	// Methods

	// RVA: 0xFCD220 Offset: 0xFC9220 VA: 0xFCD220
	public void .ctor(MobileAuthenticatedStream parent, bool sync, byte[] buffer, int offset, int size) { }

	// RVA: 0xFCD228 Offset: 0xFC9228 VA: 0xFCD228 Slot: 4
	protected override AsyncOperationStatus Run(AsyncOperationStatus status) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class ChainValidationHelper.<>c__DisplayClass11_0 // TypeDefIndex: 3280
{
	// Fields
	public MonoTlsSettings settings; // 0x10

	// Methods

	// RVA: 0xFCDA44 Offset: 0xFC9A44 VA: 0xFCDA44
	public void .ctor() { }

	// RVA: 0xFCE120 Offset: 0xFCA120 VA: 0xFCE120
	internal bool <GetValidationCallback>b__0(object s, X509Certificate c, X509Chain ch, SslPolicyErrors e) { }
}


// Namespace: Mono.Net.Security
internal class ChainValidationHelper : ICertificateValidator // TypeDefIndex: 3281
{
	// Fields
	private readonly WeakReference<SslStream> owner; // 0x10
	private readonly MonoTlsSettings settings; // 0x18
	private readonly MobileTlsProvider provider; // 0x20
	private readonly ServerCertValidationCallback certValidationCallback; // 0x28
	private readonly LocalCertSelectionCallback certSelectionCallback; // 0x30
	private readonly MonoTlsStream tlsStream; // 0x38
	private readonly HttpWebRequest request; // 0x40

	// Methods

	// RVA: 0xFCD400 Offset: 0xFC9400 VA: 0xFCD400
	internal static ChainValidationHelper GetInternalValidator(SslStream owner, MobileTlsProvider provider, MonoTlsSettings settings) { }

	// RVA: 0xFCD704 Offset: 0xFC9704 VA: 0xFCD704
	internal static ChainValidationHelper Create(MobileTlsProvider provider, ref MonoTlsSettings settings, MonoTlsStream stream) { }

	// RVA: 0xFCD4E0 Offset: 0xFC94E0 VA: 0xFCD4E0
	private void .ctor(SslStream owner, MobileTlsProvider provider, MonoTlsSettings settings, bool cloneSettings, MonoTlsStream stream) { }

	// RVA: 0xFCD8A8 Offset: 0xFC98A8 VA: 0xFCD8A8
	private static ServerCertValidationCallback GetValidationCallback(MonoTlsSettings settings) { }

	// RVA: 0xFCDA4C Offset: 0xFC9A4C VA: 0xFCDA4C
	private static X509Certificate DefaultSelectionCallback(string targetHost, X509CertificateCollection localCertificates, X509Certificate remoteCertificate, string[] acceptableIssuers) { }

	// RVA: 0xFCDA88 Offset: 0xFC9A88 VA: 0xFCDA88 Slot: 4
	public bool SelectClientCertificate(string targetHost, X509CertificateCollection localCertificates, X509Certificate remoteCertificate, string[] acceptableIssuers, out X509Certificate clientCertificate) { }

	// RVA: 0xFCDAD0 Offset: 0xFC9AD0 VA: 0xFCDAD0
	public ValidationResult ValidateCertificate(string host, bool serverMode, X509Certificate leaf, X509Chain chain) { }

	// RVA: 0xFCDBAC Offset: 0xFC9BAC VA: 0xFCDBAC
	private ValidationResult ValidateChain(string host, bool server, X509Certificate leaf, X509Chain chain, X509CertificateCollection certs, SslPolicyErrors errors) { }

	// RVA: 0xFCDC78 Offset: 0xFC9C78 VA: 0xFCDC78
	private ValidationResult ValidateChain(string host, bool server, X509Certificate leaf, ref X509Chain chain, X509CertificateCollection certs, SslPolicyErrors errors) { }

	// RVA: 0xFCE064 Offset: 0xFCA064 VA: 0xFCE064
	private bool InvokeCallback(X509Certificate leaf, X509Chain chain, SslPolicyErrors errors) { }
}


// Namespace: 
private enum MobileAuthenticatedStream.Operation // TypeDefIndex: 3282
{
	// Fields
	public int value__; // 0x0
	public const MobileAuthenticatedStream.Operation None = 0;
	public const MobileAuthenticatedStream.Operation Handshake = 1;
	public const MobileAuthenticatedStream.Operation Authenticated = 2;
	public const MobileAuthenticatedStream.Operation Renegotiate = 3;
	public const MobileAuthenticatedStream.Operation Read = 4;
	public const MobileAuthenticatedStream.Operation Write = 5;
	public const MobileAuthenticatedStream.Operation Close = 6;
}


// Namespace: 
private enum MobileAuthenticatedStream.OperationType // TypeDefIndex: 3283
{
	// Fields
	public int value__; // 0x0
	public const MobileAuthenticatedStream.OperationType Read = 0;
	public const MobileAuthenticatedStream.OperationType Write = 1;
	public const MobileAuthenticatedStream.OperationType Renegotiate = 2;
	public const MobileAuthenticatedStream.OperationType Shutdown = 3;
}


// Namespace: 
[CompilerGenerated]
private struct MobileAuthenticatedStream.<ProcessAuthentication>d__48 : IAsyncStateMachine // TypeDefIndex: 3284
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public MonoSslAuthenticationOptions options; // 0x20
	public MobileAuthenticatedStream <>4__this; // 0x28
	public bool runSynchronously; // 0x30
	public CancellationToken cancellationToken; // 0x38
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<AsyncProtocolResult> <>u__1; // 0x40

	// Methods

	// RVA: 0xFCF790 Offset: 0xFCB790 VA: 0xFCF790 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0xFD00B0 Offset: 0xFCC0B0 VA: 0xFD00B0 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct MobileAuthenticatedStream.<StartOperation>d__57 : IAsyncStateMachine // TypeDefIndex: 3285
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<int> <>t__builder; // 0x8
	public MobileAuthenticatedStream <>4__this; // 0x20
	public MobileAuthenticatedStream.OperationType type; // 0x28
	public AsyncProtocolRequest asyncRequest; // 0x30
	public CancellationToken cancellationToken; // 0x38
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<AsyncProtocolResult> <>u__1; // 0x40

	// Methods

	// RVA: 0xFD0118 Offset: 0xFCC118 VA: 0xFD0118 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0xFD08C0 Offset: 0xFCC8C0 VA: 0xFD08C0 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class MobileAuthenticatedStream.<>c__DisplayClass66_0 // TypeDefIndex: 3286
{
	// Fields
	public MobileAuthenticatedStream <>4__this; // 0x10
	public int len; // 0x18

	// Methods

	// RVA: 0xFD093C Offset: 0xFCC93C VA: 0xFD093C
	public void .ctor() { }

	// RVA: 0xFD0944 Offset: 0xFCC944 VA: 0xFD0944
	internal int <InnerRead>b__0() { }
}


// Namespace: 
[CompilerGenerated]
private struct MobileAuthenticatedStream.<InnerRead>d__66 : IAsyncStateMachine // TypeDefIndex: 3287
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<int> <>t__builder; // 0x8
	public MobileAuthenticatedStream <>4__this; // 0x20
	public CancellationToken cancellationToken; // 0x28
	public int requestedSize; // 0x30
	public bool sync; // 0x34
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<int> <>u__1; // 0x38

	// Methods

	// RVA: 0xFD098C Offset: 0xFCC98C VA: 0xFD098C Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0xFD0E2C Offset: 0xFCCE2C VA: 0xFD0E2C Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct MobileAuthenticatedStream.<InnerWrite>d__67 : IAsyncStateMachine // TypeDefIndex: 3288
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public CancellationToken cancellationToken; // 0x20
	public MobileAuthenticatedStream <>4__this; // 0x28
	public bool sync; // 0x30
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter <>u__1; // 0x38

	// Methods

	// RVA: 0xFD0EA8 Offset: 0xFCCEA8 VA: 0xFD0EA8 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0xFD11A4 Offset: 0xFCD1A4 VA: 0xFD11A4 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: Mono.Net.Security
internal abstract class MobileAuthenticatedStream : AuthenticatedStream, IDisposable // TypeDefIndex: 3289
{
	// Fields
	private MobileTlsContext xobileTlsContext; // 0x38
	private ExceptionDispatchInfo lastException; // 0x40
	private AsyncProtocolRequest asyncHandshakeRequest; // 0x48
	private AsyncProtocolRequest asyncReadRequest; // 0x50
	private AsyncProtocolRequest asyncWriteRequest; // 0x58
	private BufferOffsetSize2 readBuffer; // 0x60
	private BufferOffsetSize2 writeBuffer; // 0x68
	private object ioLock; // 0x70
	private int closeRequested; // 0x78
	private bool shutdown; // 0x7C
	private MobileAuthenticatedStream.Operation operation; // 0x80
	private static int uniqueNameInteger; // 0x0
	[CompilerGenerated]
	private readonly SslStream <SslStream>k__BackingField; // 0x88
	[CompilerGenerated]
	private readonly MonoTlsSettings <Settings>k__BackingField; // 0x90
	[CompilerGenerated]
	private readonly MobileTlsProvider <Provider>k__BackingField; // 0x98
	[CompilerGenerated]
	private string <TargetHost>k__BackingField; // 0xA0
	private static int nextId; // 0x4
	internal readonly int ID; // 0xA8

	// Properties
	public override bool IsAuthenticated { get; }
	public X509Certificate LocalCertificate { get; }
	public X509Certificate InternalLocalCertificate { get; }
	public override bool CanRead { get; }
	public override bool CanTimeout { get; }
	public override bool CanWrite { get; }
	public override bool CanSeek { get; }
	public override long Length { get; }
	public override long Position { get; set; }
	public override int ReadTimeout { set; }
	public override int WriteTimeout { set; }

	// Methods

	// RVA: 0xFCABC4 Offset: 0xFC6BC4 VA: 0xFCABC4
	public void .ctor(Stream innerStream, bool leaveInnerStreamOpen, SslStream owner, MonoTlsSettings settings, MobileTlsProvider provider) { }

	// RVA: 0xFCE280 Offset: 0xFCA280 VA: 0xFCE280
	internal void CheckThrow(bool authSuccessCheck, bool shutdownCheck = False) { }

	// RVA: 0xFCC388 Offset: 0xFC8388 VA: 0xFCC388
	internal static Exception GetSSPIException(Exception e) { }

	// RVA: 0xFCE340 Offset: 0xFCA340 VA: 0xFCE340
	internal static Exception GetIOException(Exception e, string message) { }

	// RVA: 0xFCE4BC Offset: 0xFCA4BC VA: 0xFCE4BC
	internal static Exception GetInternalError() { }

	// RVA: 0xFCE508 Offset: 0xFCA508 VA: 0xFCE508
	internal static Exception GetInvalidNestedCallException() { }

	// RVA: 0xFCBDBC Offset: 0xFC7DBC VA: 0xFCBDBC
	internal ExceptionDispatchInfo SetException(Exception e) { }

	// RVA: 0xFCE554 Offset: 0xFCA554 VA: 0xFCE554
	public void AuthenticateAsClient(string targetHost, X509CertificateCollection clientCertificates, SslProtocols enabledSslProtocols, bool checkCertificateRevocation) { }

	// RVA: 0xFCE880 Offset: 0xFCA880 VA: 0xFCE880 Slot: 34
	public Task AuthenticateAsClientAsync(string targetHost, X509CertificateCollection clientCertificates, SslProtocols enabledSslProtocols, bool checkCertificateRevocation) { }

	[AsyncStateMachine(typeof(MobileAuthenticatedStream.<ProcessAuthentication>d__48))]
	// RVA: 0xFCE790 Offset: 0xFCA790 VA: 0xFCE790
	private Task ProcessAuthentication(bool runSynchronously, MonoSslAuthenticationOptions options, CancellationToken cancellationToken) { }

	// RVA: -1 Offset: -1 Slot: 35
	protected abstract MobileTlsContext CreateContext(MonoSslAuthenticationOptions options);

	// RVA: 0xFCE99C Offset: 0xFCA99C VA: 0xFCE99C Slot: 27
	public override int Read(byte[] buffer, int offset, int count) { }

	// RVA: 0xFCEB94 Offset: 0xFCAB94 VA: 0xFCEB94 Slot: 30
	public override void Write(byte[] buffer, int offset, int count) { }

	// RVA: 0xFCEC60 Offset: 0xFCAC60 VA: 0xFCEC60 Slot: 19
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken) { }

	// RVA: 0xFCECF4 Offset: 0xFCACF4 VA: 0xFCECF4 Slot: 23
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(MobileAuthenticatedStream.<StartOperation>d__57))]
	// RVA: 0xFCEA90 Offset: 0xFCAA90 VA: 0xFCEA90
	private Task<int> StartOperation(MobileAuthenticatedStream.OperationType type, AsyncProtocolRequest asyncRequest, CancellationToken cancellationToken) { }

	// RVA: 0xFC91B0 Offset: 0xFC51B0 VA: 0xFC91B0
	internal int InternalRead(byte[] buffer, int offset, int size, out bool outWantMore) { }

	// RVA: 0xFCED88 Offset: 0xFCAD88 VA: 0xFCED88
	private ValueTuple<int, bool> InternalRead(AsyncProtocolRequest asyncRequest, BufferOffsetSize internalBuffer, byte[] buffer, int offset, int size) { }

	// RVA: 0xFC8D1C Offset: 0xFC4D1C VA: 0xFC8D1C
	internal bool InternalWrite(byte[] buffer, int offset, int size) { }

	// RVA: 0xFCEF08 Offset: 0xFCAF08 VA: 0xFCEF08
	private bool InternalWrite(AsyncProtocolRequest asyncRequest, BufferOffsetSize2 internalBuffer, byte[] buffer, int offset, int size) { }

	[AsyncStateMachine(typeof(MobileAuthenticatedStream.<InnerRead>d__66))]
	// RVA: 0xFCC9EC Offset: 0xFC89EC VA: 0xFCC9EC
	internal Task<int> InnerRead(bool sync, int requestedSize, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(MobileAuthenticatedStream.<InnerWrite>d__67))]
	// RVA: 0xFCC51C Offset: 0xFC851C VA: 0xFCC51C
	internal Task InnerWrite(bool sync, CancellationToken cancellationToken) { }

	// RVA: 0xFCCB94 Offset: 0xFC8B94 VA: 0xFCCB94
	internal AsyncOperationStatus ProcessHandshake(AsyncOperationStatus status, bool renegotiate) { }

	// RVA: 0xFCD0C0 Offset: 0xFC90C0 VA: 0xFCD0C0
	internal ValueTuple<int, bool> ProcessRead(BufferOffsetSize userBuffer) { }

	// RVA: 0xFCD2A0 Offset: 0xFC92A0 VA: 0xFCD2A0
	internal ValueTuple<int, bool> ProcessWrite(BufferOffsetSize userBuffer) { }

	// RVA: 0xFCEFFC Offset: 0xFCAFFC VA: 0xFCEFFC Slot: 33
	public override bool get_IsAuthenticated() { }

	// RVA: 0xFCF0E4 Offset: 0xFCB0E4 VA: 0xFCF0E4 Slot: 15
	protected override void Dispose(bool disposing) { }

	// RVA: 0xFCF328 Offset: 0xFCB328 VA: 0xFCF328 Slot: 16
	public override void Flush() { }

	// RVA: 0xFCF34C Offset: 0xFCB34C VA: 0xFCF34C Slot: 36
	public X509Certificate get_LocalCertificate() { }

	// RVA: 0xFCF428 Offset: 0xFCB428 VA: 0xFCF428 Slot: 37
	public X509Certificate get_InternalLocalCertificate() { }

	// RVA: 0xFCF528 Offset: 0xFCB528 VA: 0xFCF528 Slot: 25
	public override long Seek(long offset, SeekOrigin origin) { }

	// RVA: 0xFCF560 Offset: 0xFCB560 VA: 0xFCF560 Slot: 26
	public override void SetLength(long value) { }

	// RVA: 0xFCF584 Offset: 0xFCB584 VA: 0xFCF584 Slot: 5
	public override bool get_CanRead() { }

	// RVA: 0xFCF5C8 Offset: 0xFCB5C8 VA: 0xFCF5C8 Slot: 7
	public override bool get_CanTimeout() { }

	// RVA: 0xFCF5E8 Offset: 0xFCB5E8 VA: 0xFCF5E8 Slot: 8
	public override bool get_CanWrite() { }

	// RVA: 0xFCF64C Offset: 0xFCB64C VA: 0xFCF64C Slot: 6
	public override bool get_CanSeek() { }

	// RVA: 0xFCF654 Offset: 0xFCB654 VA: 0xFCF654 Slot: 9
	public override long get_Length() { }

	// RVA: 0xFCF674 Offset: 0xFCB674 VA: 0xFCF674 Slot: 10
	public override long get_Position() { }

	// RVA: 0xFCF694 Offset: 0xFCB694 VA: 0xFCF694 Slot: 11
	public override void set_Position(long value) { }

	// RVA: 0xFCF6CC Offset: 0xFCB6CC VA: 0xFCF6CC Slot: 12
	public override void set_ReadTimeout(int value) { }

	// RVA: 0xFCF6EC Offset: 0xFCB6EC VA: 0xFCF6EC Slot: 13
	public override void set_WriteTimeout(int value) { }

	// RVA: 0xFCF710 Offset: 0xFCB710 VA: 0xFCF710
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0xFCF75C Offset: 0xFCB75C VA: 0xFCF75C
	private void <InnerWrite>b__67_0() { }
}


// Namespace: Mono.Net.Security
internal abstract class MobileTlsContext : IDisposable // TypeDefIndex: 3290
{
	// Fields
	private ChainValidationHelper certificateValidator; // 0x10
	[CompilerGenerated]
	private readonly MonoSslAuthenticationOptions <Options>k__BackingField; // 0x18
	[CompilerGenerated]
	private readonly MobileAuthenticatedStream <Parent>k__BackingField; // 0x20
	[CompilerGenerated]
	private readonly bool <IsServer>k__BackingField; // 0x28
	[CompilerGenerated]
	private readonly string <TargetHost>k__BackingField; // 0x30
	[CompilerGenerated]
	private readonly string <ServerName>k__BackingField; // 0x38
	[CompilerGenerated]
	private readonly bool <AskForClientCertificate>k__BackingField; // 0x40
	[CompilerGenerated]
	private readonly SslProtocols <EnabledProtocols>k__BackingField; // 0x44
	[CompilerGenerated]
	private readonly X509CertificateCollection <ClientCertificates>k__BackingField; // 0x48
	[CompilerGenerated]
	private X509Certificate <LocalServerCertificate>k__BackingField; // 0x50

	// Properties
	public MonoTlsSettings Settings { get; }
	public abstract bool IsAuthenticated { get; }
	internal abstract X509Certificate LocalClientCertificate { get; }
	public abstract X509Certificate2 RemoteCertificate { get; }

	// Methods

	// RVA: 0xFC7BF4 Offset: 0xFC3BF4 VA: 0xFC7BF4
	protected void .ctor(MobileAuthenticatedStream parent, MonoSslAuthenticationOptions options) { }

	// RVA: 0xFC85A8 Offset: 0xFC45A8 VA: 0xFC85A8
	public MonoTlsSettings get_Settings() { }

	// RVA: -1 Offset: -1 Slot: 5
	public abstract bool get_IsAuthenticated();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void StartHandshake();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract bool ProcessHandshake();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract void FinishHandshake();

	// RVA: -1 Offset: -1 Slot: 9
	internal abstract X509Certificate get_LocalClientCertificate();

	// RVA: -1 Offset: -1 Slot: 10
	public abstract X509Certificate2 get_RemoteCertificate();

	// RVA: -1 Offset: -1 Slot: 11
	public abstract ValueTuple<int, bool> Read(byte[] buffer, int offset, int count);

	// RVA: -1 Offset: -1 Slot: 12
	public abstract ValueTuple<int, bool> Write(byte[] buffer, int offset, int count);

	// RVA: -1 Offset: -1 Slot: 13
	public abstract void Shutdown();

	// RVA: 0xFC8928 Offset: 0xFC4928 VA: 0xFC8928
	protected bool ValidateCertificate(X509Certificate2 leaf, X509Chain chain) { }

	// RVA: 0xFC9A28 Offset: 0xFC5A28 VA: 0xFC9A28
	protected X509Certificate SelectClientCertificate(string[] acceptableIssuers) { }

	// RVA: -1 Offset: -1 Slot: 14
	public abstract void Renegotiate();

	// RVA: 0xFCF2B8 Offset: 0xFCB2B8 VA: 0xFCF2B8 Slot: 4
	public void Dispose() { }

	// RVA: 0xFD120C Offset: 0xFCD20C VA: 0xFD120C Slot: 15
	protected virtual void Dispose(bool disposing) { }

	// RVA: 0xFD1210 Offset: 0xFCD210 VA: 0xFD1210 Slot: 1
	protected override void Finalize() { }
}


// Namespace: Mono.Net.Security
internal abstract class MobileTlsProvider : MonoTlsProvider // TypeDefIndex: 3291
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 11
	internal abstract MobileAuthenticatedStream CreateSslStream(SslStream sslStream, Stream innerStream, bool leaveInnerStreamOpen, MonoTlsSettings settings);

	// RVA: -1 Offset: -1 Slot: 12
	internal abstract bool ValidateCertificate(ChainValidationHelper validator, string targetHost, bool serverMode, X509CertificateCollection certificates, bool wantsChain, ref X509Chain chain, ref SslPolicyErrors errors, ref int status11);

	// RVA: 0xFCABBC Offset: 0xFC6BBC VA: 0xFCABBC
	protected void .ctor() { }
}


// Namespace: Mono.Net.Security
internal abstract class MonoSslAuthenticationOptions // TypeDefIndex: 3292
{
	// Fields
	[CompilerGenerated]
	private ServerCertSelectionCallback <ServerCertSelectionDelegate>k__BackingField; // 0x10

	// Properties
	public abstract bool ServerMode { get; }
	public abstract SslProtocols EnabledSslProtocols { get; set; }
	public abstract EncryptionPolicy EncryptionPolicy { set; }
	public abstract X509RevocationMode CertificateRevocationCheckMode { set; }
	public abstract string TargetHost { get; set; }
	public abstract X509Certificate ServerCertificate { get; }
	public abstract X509CertificateCollection ClientCertificates { get; set; }
	public abstract bool ClientCertificateRequired { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public abstract bool get_ServerMode();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract SslProtocols get_EnabledSslProtocols();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void set_EnabledSslProtocols(SslProtocols value);

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void set_EncryptionPolicy(EncryptionPolicy value);

	// RVA: -1 Offset: -1 Slot: 8
	public abstract void set_CertificateRevocationCheckMode(X509RevocationMode value);

	// RVA: -1 Offset: -1 Slot: 9
	public abstract string get_TargetHost();

	// RVA: -1 Offset: -1 Slot: 10
	public abstract void set_TargetHost(string value);

	// RVA: -1 Offset: -1 Slot: 11
	public abstract X509Certificate get_ServerCertificate();

	// RVA: -1 Offset: -1 Slot: 12
	public abstract X509CertificateCollection get_ClientCertificates();

	// RVA: -1 Offset: -1 Slot: 13
	public abstract void set_ClientCertificates(X509CertificateCollection value);

	// RVA: -1 Offset: -1 Slot: 14
	public abstract bool get_ClientCertificateRequired();

	// RVA: 0xFD12B4 Offset: 0xFCD2B4 VA: 0xFD12B4
	protected void .ctor() { }
}


// Namespace: Mono.Net.Security
internal sealed class MonoSslClientAuthenticationOptions : MonoSslAuthenticationOptions // TypeDefIndex: 3293
{
	// Fields
	[CompilerGenerated]
	private readonly SslClientAuthenticationOptions <Options>k__BackingField; // 0x18

	// Properties
	public override bool ServerMode { get; }
	public override X509RevocationMode CertificateRevocationCheckMode { set; }
	public override EncryptionPolicy EncryptionPolicy { set; }
	public override SslProtocols EnabledSslProtocols { get; set; }
	public override string TargetHost { get; set; }
	public override bool ClientCertificateRequired { get; }
	public override X509CertificateCollection ClientCertificates { get; set; }
	public override X509Certificate ServerCertificate { get; }

	// Methods

	// RVA: 0xFD12BC Offset: 0xFCD2BC VA: 0xFD12BC Slot: 4
	public override bool get_ServerMode() { }

	// RVA: 0xFCE72C Offset: 0xFCA72C VA: 0xFCE72C
	public void .ctor() { }

	// RVA: 0xFD12C4 Offset: 0xFCD2C4 VA: 0xFD12C4 Slot: 8
	public override void set_CertificateRevocationCheckMode(X509RevocationMode value) { }

	// RVA: 0xFD12E0 Offset: 0xFCD2E0 VA: 0xFD12E0 Slot: 7
	public override void set_EncryptionPolicy(EncryptionPolicy value) { }

	// RVA: 0xFD12FC Offset: 0xFCD2FC VA: 0xFD12FC Slot: 5
	public override SslProtocols get_EnabledSslProtocols() { }

	// RVA: 0xFD1318 Offset: 0xFCD318 VA: 0xFD1318 Slot: 6
	public override void set_EnabledSslProtocols(SslProtocols value) { }

	// RVA: 0xFD1334 Offset: 0xFCD334 VA: 0xFD1334 Slot: 9
	public override string get_TargetHost() { }

	// RVA: 0xFD1350 Offset: 0xFCD350 VA: 0xFD1350 Slot: 10
	public override void set_TargetHost(string value) { }

	// RVA: 0xFD136C Offset: 0xFCD36C VA: 0xFD136C Slot: 14
	public override bool get_ClientCertificateRequired() { }

	// RVA: 0xFD13A4 Offset: 0xFCD3A4 VA: 0xFD13A4 Slot: 12
	public override X509CertificateCollection get_ClientCertificates() { }

	// RVA: 0xFD13C0 Offset: 0xFCD3C0 VA: 0xFD13C0 Slot: 13
	public override void set_ClientCertificates(X509CertificateCollection value) { }

	// RVA: 0xFD13DC Offset: 0xFCD3DC VA: 0xFD13DC Slot: 11
	public override X509Certificate get_ServerCertificate() { }
}


// Namespace: Mono.Net.Security
internal static class MonoTlsProviderFactory // TypeDefIndex: 3294
{
	// Fields
	private static object locker; // 0x0
	private static bool initialized; // 0x8
	private static MobileTlsProvider defaultProvider; // 0x10
	private static Dictionary<string, Tuple<Guid, string>> providerRegistration; // 0x18
	private static Dictionary<Guid, MobileTlsProvider> providerCache; // 0x20
	internal static readonly Guid UnityTlsId; // 0x28
	internal static readonly Guid AppleTlsId; // 0x38
	internal static readonly Guid BtlsId; // 0x48

	// Methods

	// RVA: 0xFCD790 Offset: 0xFC9790 VA: 0xFCD790
	internal static MobileTlsProvider GetProviderInternal() { }

	// RVA: 0xFD1414 Offset: 0xFCD414 VA: 0xFD1414
	internal static void InitializeInternal() { }

	// RVA: 0xFD1AEC Offset: 0xFCDAEC VA: 0xFD1AEC
	private static MobileTlsProvider LookupProvider(string name, bool throwOnError) { }

	// RVA: 0xFD1774 Offset: 0xFCD774 VA: 0xFD1774
	private static void InitializeProviderRegistration() { }

	// RVA: 0xFD2034 Offset: 0xFCE034 VA: 0xFD2034
	private static void PopulateUnityProviders() { }

	// RVA: 0xFD2180 Offset: 0xFCE180 VA: 0xFD2180
	private static void PopulateProviders() { }

	// RVA: 0xFD1964 Offset: 0xFCD964 VA: 0xFD1964
	private static MobileTlsProvider CreateDefaultProviderImpl() { }

	// RVA: 0xFD21D0 Offset: 0xFCE1D0 VA: 0xFD21D0
	internal static MobileTlsProvider GetProvider() { }

	// RVA: 0xFD221C Offset: 0xFCE21C VA: 0xFD221C
	private static void .cctor() { }
}


// Namespace: 
[CompilerGenerated]
private struct MonoTlsStream.<CreateStream>d__18 : IAsyncStateMachine // TypeDefIndex: 3295
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<Stream> <>t__builder; // 0x8
	public MonoTlsStream <>4__this; // 0x20
	public WebConnectionTunnel tunnel; // 0x28
	public CancellationToken cancellationToken; // 0x30
	private Socket <socket>5__2; // 0x38
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter <>u__1; // 0x40

	// Methods

	// RVA: 0xFD26DC Offset: 0xFCE6DC VA: 0xFD26DC Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0xFD2D5C Offset: 0xFCED5C VA: 0xFD2D5C Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: Mono.Net.Security
internal class MonoTlsStream : IDisposable // TypeDefIndex: 3296
{
	// Fields
	private readonly MobileTlsProvider provider; // 0x10
	private readonly NetworkStream networkStream; // 0x18
	private readonly HttpWebRequest request; // 0x20
	private readonly MonoTlsSettings settings; // 0x28
	private SslStream sslStream; // 0x30
	private readonly object sslStreamLock; // 0x38
	private WebExceptionStatus status; // 0x40
	[CompilerGenerated]
	private bool <CertificateValidationFailed>k__BackingField; // 0x44

	// Properties
	internal bool CertificateValidationFailed { set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xFD234C Offset: 0xFCE34C VA: 0xFD234C
	internal void set_CertificateValidationFailed(bool value) { }

	// RVA: 0xFD2358 Offset: 0xFCE358 VA: 0xFD2358
	public void .ctor(HttpWebRequest request, NetworkStream networkStream) { }

	[AsyncStateMachine(typeof(MonoTlsStream.<CreateStream>d__18))]
	// RVA: 0xFD2510 Offset: 0xFCE510 VA: 0xFD2510
	internal Task<Stream> CreateStream(WebConnectionTunnel tunnel, CancellationToken cancellationToken) { }

	// RVA: 0xFD2604 Offset: 0xFCE604 VA: 0xFD2604 Slot: 4
	public void Dispose() { }

	// RVA: 0xFD2608 Offset: 0xFCE608 VA: 0xFD2608
	private void CloseSslStream() { }
}


// Namespace: Mono.Net.Security
internal static class NoReflectionHelper // TypeDefIndex: 3297
{
	// Methods

	// RVA: 0xFD2DD8 Offset: 0xFCEDD8 VA: 0xFD2DD8
	internal static object GetProvider() { }
}


// Namespace: Mono.Net.Security
internal static class SystemCertificateValidator // TypeDefIndex: 3298
{
	// Fields
	private static bool is_macosx; // 0x0
	private static X509KeyUsageFlags s_flags; // 0x4

	// Methods

	// RVA: 0xFD2E24 Offset: 0xFCEE24 VA: 0xFD2E24
	private static void .cctor() { }

	// RVA: 0xFCE118 Offset: 0xFCA118 VA: 0xFCE118
	internal static bool NeedsChain(MonoTlsSettings settings) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class CallbackHelpers.<>c__DisplayClass0_0 // TypeDefIndex: 3299
{
	// Fields
	public RemoteCertificateValidationCallback callback; // 0x10

	// Methods

	// RVA: 0xFD2E74 Offset: 0xFCEE74 VA: 0xFD2E74
	public void .ctor() { }

	// RVA: 0xFD2E84 Offset: 0xFCEE84 VA: 0xFD2E84
	internal bool <PublicToMono>b__0(string h, X509Certificate c, X509Chain ch, MonoSslPolicyErrors e) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class CallbackHelpers.<>c__DisplayClass6_0 // TypeDefIndex: 3300
{
	// Fields
	public MonoLocalCertificateSelectionCallback callback; // 0x10

	// Methods

	// RVA: 0xFD2E7C Offset: 0xFCEE7C VA: 0xFD2E7C
	public void .ctor() { }

	// RVA: 0xFD2EA8 Offset: 0xFCEEA8 VA: 0xFD2EA8
	internal X509Certificate <MonoToInternal>b__0(string t, X509CertificateCollection lc, X509Certificate rc, string[] ai) { }
}


// Namespace: Mono.Net.Security.Private
internal static class CallbackHelpers // TypeDefIndex: 3301
{
	// Methods

	// RVA: 0xFD245C Offset: 0xFCE45C VA: 0xFD245C
	internal static MonoRemoteCertificateValidationCallback PublicToMono(RemoteCertificateValidationCallback callback) { }

	// RVA: 0xFCD990 Offset: 0xFC9990 VA: 0xFCD990
	internal static LocalCertSelectionCallback MonoToInternal(MonoLocalCertificateSelectionCallback callback) { }
}


// Namespace: Mono.Http
internal class NtlmSession // TypeDefIndex: 3302
{
	// Fields
	private MessageBase message; // 0x10

	// Methods

	// RVA: 0xFD2ECC Offset: 0xFCEECC VA: 0xFD2ECC
	public void .ctor() { }

	// RVA: 0xFD2ED4 Offset: 0xFCEED4 VA: 0xFD2ED4
	public Authorization Authenticate(string challenge, WebRequest webRequest, ICredentials credentials) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class NtlmClient.<>c // TypeDefIndex: 3303
{
	// Fields
	public static readonly NtlmClient.<>c <>9; // 0x0
	public static ConditionalWeakTable.CreateValueCallback<HttpWebRequest, NtlmSession> <>9__1_0; // 0x8

	// Methods

	// RVA: 0xFD3760 Offset: 0xFCF760 VA: 0xFD3760
	private static void .cctor() { }

	// RVA: 0xFD37BC Offset: 0xFCF7BC VA: 0xFD37BC
	public void .ctor() { }

	// RVA: 0xFD37C4 Offset: 0xFCF7C4 VA: 0xFD37C4
	internal NtlmSession <Authenticate>b__1_0(HttpWebRequest x) { }
}


// Namespace: Mono.Http
internal class NtlmClient : IAuthenticationModule // TypeDefIndex: 3304
{
	// Fields
	private static readonly ConditionalWeakTable<HttpWebRequest, NtlmSession> cache; // 0x0

	// Properties
	public string AuthenticationType { get; }

	// Methods

	// RVA: 0xFD3320 Offset: 0xFCF320 VA: 0xFD3320 Slot: 4
	public Authorization Authenticate(string challenge, WebRequest webRequest, ICredentials credentials) { }

	// RVA: 0xFD3684 Offset: 0xFCF684 VA: 0xFD3684 Slot: 5
	public Authorization PreAuthenticate(WebRequest webRequest, ICredentials credentials) { }

	// RVA: 0xFD368C Offset: 0xFCF68C VA: 0xFD368C Slot: 6
	public string get_AuthenticationType() { }

	// RVA: 0xFD36CC Offset: 0xFCF6CC VA: 0xFD36CC
	public void .ctor() { }

	// RVA: 0xFD36D4 Offset: 0xFCF6D4 VA: 0xFD36D4
	private static void .cctor() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class OidLookup.<>c // TypeDefIndex: 3305
{
	// Fields
	public static readonly OidLookup.<>c <>9; // 0x0

	// Methods

	// RVA: 0xFD5F40 Offset: 0xFD1F40 VA: 0xFD5F40
	private static void .cctor() { }

	// RVA: 0xFD5F9C Offset: 0xFD1F9C VA: 0xFD5F9C
	public void .ctor() { }

	// RVA: 0xFD5FA4 Offset: 0xFD1FA4 VA: 0xFD5FA4
	internal string <.cctor>b__10_0(KeyValuePair<string, string> kvp) { }

	// RVA: 0xFD5FAC Offset: 0xFD1FAC VA: 0xFD5FAC
	internal string <.cctor>b__10_1(KeyValuePair<string, string> kvp) { }
}


// Namespace: Internal.Cryptography
internal static class OidLookup // TypeDefIndex: 3306
{
	// Fields
	private static readonly ConcurrentDictionary<string, string> s_lateBoundOidToFriendlyName; // 0x0
	private static readonly ConcurrentDictionary<string, string> s_lateBoundFriendlyNameToOid; // 0x8
	private static readonly Dictionary<string, string> s_friendlyNameToOid; // 0x10
	private static readonly Dictionary<string, string> s_oidToFriendlyName; // 0x18
	private static readonly Dictionary<string, string> s_compatOids; // 0x20

	// Methods

	// RVA: 0xFD3818 Offset: 0xFCF818 VA: 0xFD3818
	public static string ToFriendlyName(string oid, OidGroup oidGroup, bool fallBackToAllGroups) { }

	// RVA: 0xFD3D94 Offset: 0xFCFD94 VA: 0xFD3D94
	public static string ToOid(string friendlyName, OidGroup oidGroup, bool fallBackToAllGroups) { }

	// RVA: 0xFD39E4 Offset: 0xFCF9E4 VA: 0xFD39E4
	private static string NativeOidToFriendlyName(string oid, OidGroup oidGroup, bool fallBackToAllGroups) { }

	// RVA: 0xFD3F34 Offset: 0xFCFF34 VA: 0xFD3F34
	private static string NativeFriendlyNameToOid(string friendlyName, OidGroup oidGroup, bool fallBackToAllGroups) { }

	// RVA: 0xFD42F0 Offset: 0xFD02F0 VA: 0xFD42F0
	private static void .cctor() { }
}


// Namespace: Internal.Cryptography.Pal
internal enum GeneralNameType // TypeDefIndex: 3307
{
	// Fields
	public int value__; // 0x0
	public const GeneralNameType OtherName = 0;
	public const GeneralNameType Rfc822Name = 1;
	public const GeneralNameType Email = 1;
	public const GeneralNameType DnsName = 2;
	public const GeneralNameType X400Address = 3;
	public const GeneralNameType DirectoryName = 4;
	public const GeneralNameType EdiPartyName = 5;
	public const GeneralNameType UniformResourceIdentifier = 6;
	public const GeneralNameType IPAddress = 7;
	public const GeneralNameType RegisteredId = 8;
}


// Namespace: 
internal struct CertificateData.AlgorithmIdentifier // TypeDefIndex: 3308
{
	// Fields
	internal string AlgorithmId; // 0x0
	internal byte[] Parameters; // 0x8
}


// Namespace: 
[CompilerGenerated]
private sealed class CertificateData.<ReadReverseRdns>d__21 : IEnumerable<KeyValuePair<string, string>>, IEnumerable, IEnumerator<KeyValuePair<string, string>>, IDisposable, IEnumerator // TypeDefIndex: 3309
{
	// Fields
	private int <>1__state; // 0x10
	private KeyValuePair<string, string> <>2__current; // 0x18
	private int <>l__initialThreadId; // 0x28
	private X500DistinguishedName name; // 0x30
	public X500DistinguishedName <>3__name; // 0x38
	private Stack<DerSequenceReader> <rdnReaders>5__2; // 0x40
	private DerSequenceReader <rdnReader>5__3; // 0x48

	// Properties
	private KeyValuePair<string, string> System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.String>>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: 0xFD7210 Offset: 0xFD3210 VA: 0xFD7210
	public void .ctor(int <>1__state) { }

	[DebuggerHidden]
	// RVA: 0xFD7244 Offset: 0xFD3244 VA: 0xFD7244 Slot: 7
	private void System.IDisposable.Dispose() { }

	// RVA: 0xFD7248 Offset: 0xFD3248 VA: 0xFD7248 Slot: 8
	private bool MoveNext() { }

	[DebuggerHidden]
	// RVA: 0xFD74D4 Offset: 0xFD34D4 VA: 0xFD74D4 Slot: 6
	private KeyValuePair<string, string> System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.String>>.get_Current() { }

	[DebuggerHidden]
	// RVA: 0xFD74E0 Offset: 0xFD34E0 VA: 0xFD74E0 Slot: 10
	private void System.Collections.IEnumerator.Reset() { }

	[DebuggerHidden]
	// RVA: 0xFD7518 Offset: 0xFD3518 VA: 0xFD7518 Slot: 9
	private object System.Collections.IEnumerator.get_Current() { }

	[DebuggerHidden]
	// RVA: 0xFD7574 Offset: 0xFD3574 VA: 0xFD7574 Slot: 4
	private IEnumerator<KeyValuePair<string, string>> System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.String>>.GetEnumerator() { }

	[DebuggerHidden]
	// RVA: 0xFD7610 Offset: 0xFD3610 VA: 0xFD7610 Slot: 5
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }
}


// Namespace: Internal.Cryptography.Pal
internal struct CertificateData // TypeDefIndex: 3310
{
	// Fields
	internal byte[] RawData; // 0x0
	internal byte[] SubjectPublicKeyInfo; // 0x8
	internal int Version; // 0x10
	internal byte[] SerialNumber; // 0x18
	internal CertificateData.AlgorithmIdentifier TbsSignature; // 0x20
	internal X500DistinguishedName Issuer; // 0x30
	internal DateTime NotBefore; // 0x38
	internal DateTime NotAfter; // 0x40
	internal X500DistinguishedName Subject; // 0x48
	internal CertificateData.AlgorithmIdentifier PublicKeyAlgorithm; // 0x50
	internal byte[] PublicKey; // 0x60
	internal byte[] IssuerUniqueId; // 0x68
	internal byte[] SubjectUniqueId; // 0x70
	internal List<X509Extension> Extensions; // 0x78
	internal CertificateData.AlgorithmIdentifier SignatureAlgorithm; // 0x80
	internal byte[] SignatureValue; // 0x90

	// Methods

	// RVA: 0xFD5FB4 Offset: 0xFD1FB4 VA: 0xFD5FB4
	internal void .ctor(byte[] rawData) { }

	// RVA: 0xFD65FC Offset: 0xFD25FC VA: 0xFD65FC
	public string GetNameInfo(X509NameType nameType, bool forIssuer) { }

	// RVA: 0xFD6BA0 Offset: 0xFD2BA0 VA: 0xFD6BA0
	private static string GetSimpleNameInfo(X500DistinguishedName name) { }

	// RVA: 0xFD6FE0 Offset: 0xFD2FE0 VA: 0xFD6FE0
	private static string FindAltNameMatch(byte[] extensionBytes, GeneralNameType matchType, string otherOid) { }

	// RVA: 0xFD71A0 Offset: 0xFD31A0 VA: 0xFD71A0
	private static IEnumerable<KeyValuePair<string, string>> ReadReverseRdns(X500DistinguishedName name) { }
}


// Namespace: System
internal static class IPv4AddressHelper // TypeDefIndex: 3311
{
	// Methods

	// RVA: 0xFD7614 Offset: 0xFD3614 VA: 0xFD7614
	internal static int ParseHostNumber(ReadOnlySpan<char> str, int start, int end) { }

	// RVA: 0xFD76D4 Offset: 0xFD36D4 VA: 0xFD76D4
	internal static bool IsValid(char* name, int start, ref int end, bool allowIPv6, bool notImplicitFile, bool unknownScheme) { }

	// RVA: 0xFD7644 Offset: 0xFD3644 VA: 0xFD7644
	private static bool ParseCanonical(ReadOnlySpan<char> name, byte* numbers, int start, int end) { }

	// RVA: 0xFD7704 Offset: 0xFD3704 VA: 0xFD7704
	internal static bool IsValidCanonical(char* name, int start, ref int end, bool allowIPv6, bool notImplicitFile) { }

	// RVA: 0xFD784C Offset: 0xFD384C VA: 0xFD784C
	internal static long ParseNonCanonical(char* name, int start, ref int end, bool notImplicitFile) { }

	// RVA: 0xFD7B44 Offset: 0xFD3B44 VA: 0xFD7B44
	internal static string ParseCanonicalName(string str, int start, int end, ref bool isLoopback) { }

	// RVA: 0xFD7E30 Offset: 0xFD3E30 VA: 0xFD7E30
	private static bool Parse(string name, byte* numbers, int start, int end) { }
}


// Namespace: System
internal static class IPv6AddressHelper // TypeDefIndex: 3312
{
	// Methods

	// RVA: 0x12732F0 Offset: 0x126F2F0 VA: 0x12732F0
	internal static ValueTuple<int, int> FindCompressionRange(ReadOnlySpan<ushort> numbers) { }

	// RVA: 0x12733D0 Offset: 0x126F3D0 VA: 0x12733D0
	internal static bool ShouldHaveIpv4Embedded(ReadOnlySpan<ushort> numbers) { }

	// RVA: 0x12734A0 Offset: 0x126F4A0 VA: 0x12734A0
	internal static bool IsValidStrict(char* name, int start, ref int end) { }

	// RVA: 0x12737D0 Offset: 0x126F7D0 VA: 0x12737D0
	internal static void Parse(ReadOnlySpan<char> address, ushort* numbers, int start, ref string scopeId) { }

	// RVA: 0x1273C84 Offset: 0x126FC84 VA: 0x1273C84
	internal static string ParseCanonicalName(string str, int start, ref bool isLoopback, ref string scopeId) { }

	// RVA: 0x127446C Offset: 0x127046C VA: 0x127446C
	private static bool IsLoopback(ReadOnlySpan<ushort> numbers) { }

	// RVA: 0x127454C Offset: 0x127054C VA: 0x127454C
	private static bool InternalIsValid(char* name, int start, ref int end, bool validateStrictAddress) { }

	// RVA: 0x1274810 Offset: 0x1270810 VA: 0x1274810
	internal static bool IsValid(char* name, int start, ref int end) { }
}


// Namespace: System
internal static class NotImplemented // TypeDefIndex: 3313
{
	// Methods

	// RVA: 0x1274818 Offset: 0x1270818 VA: 0x1274818
	internal static Exception ByDesignWithMessage(string message) { }
}


// Namespace: System
public class UriBuilder // TypeDefIndex: 3314
{
	// Fields
	private bool _changed; // 0x10
	private string _fragment; // 0x18
	private string _host; // 0x20
	private string _password; // 0x28
	private string _path; // 0x30
	private int _port; // 0x38
	private string _query; // 0x40
	private string _scheme; // 0x48
	private string _schemeDelimiter; // 0x50
	private Uri _uri; // 0x58
	private string _username; // 0x60

	// Properties
	public string Path { set; }
	public string Query { set; }
	public Uri Uri { get; }

	// Methods

	// RVA: 0x1274874 Offset: 0x1270874 VA: 0x1274874
	public void .ctor(Uri uri) { }

	// RVA: 0x12749E4 Offset: 0x12709E4 VA: 0x12749E4
	private void Init(Uri uri) { }

	// RVA: 0x1274CBC Offset: 0x1270CBC VA: 0x1274CBC
	public void set_Path(string value) { }

	// RVA: 0x1274D70 Offset: 0x1270D70 VA: 0x1274D70
	public void set_Query(string value) { }

	// RVA: 0x1274E28 Offset: 0x1270E28 VA: 0x1274E28
	public Uri get_Uri() { }

	// RVA: 0x1274EB8 Offset: 0x1270EB8 VA: 0x1274EB8 Slot: 0
	public override bool Equals(object rparam) { }

	// RVA: 0x1274F14 Offset: 0x1270F14 VA: 0x1274F14 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1274B58 Offset: 0x1270B58 VA: 0x1274B58
	private void SetFieldsFromUri(Uri uri) { }

	// RVA: 0x1274F34 Offset: 0x1270F34 VA: 0x1274F34 Slot: 3
	public override string ToString() { }
}


// Namespace: System
internal static class SecurityUtils // TypeDefIndex: 3315
{
	// Methods

	// RVA: 0x1275458 Offset: 0x1271458 VA: 0x1275458
	private static void DemandGrantSet(Assembly assembly) { }

	// RVA: 0x127545C Offset: 0x127145C VA: 0x127545C
	private static bool HasReflectionPermission(Type type) { }

	// RVA: 0x1275464 Offset: 0x1271464 VA: 0x1275464
	internal static object SecureCreateInstance(Type type) { }

	// RVA: 0x1275470 Offset: 0x1271470 VA: 0x1275470
	internal static object SecureCreateInstance(Type type, object[] args, bool allowNonPublic) { }

	// RVA: 0x1275564 Offset: 0x1271564 VA: 0x1275564
	internal static object SecureCreateInstance(Type type, object[] args) { }

	// RVA: 0x127556C Offset: 0x127156C VA: 0x127556C
	internal static object SecureConstructorInvoke(Type type, Type[] argTypes, object[] args, bool allowNonPublic) { }

	// RVA: 0x1275578 Offset: 0x1271578 VA: 0x1275578
	internal static object SecureConstructorInvoke(Type type, Type[] argTypes, object[] args, bool allowNonPublic, BindingFlags extraFlags) { }

	// RVA: 0x12756EC Offset: 0x12716EC VA: 0x12756EC
	private static bool GenericArgumentsAreVisible(MethodInfo method) { }

	// RVA: 0x127579C Offset: 0x127179C VA: 0x127579C
	internal static object MethodInfoInvoke(MethodInfo method, object target, object[] args) { }
}


// Namespace: System
[Serializable]
internal class InvariantComparer : IComparer // TypeDefIndex: 3316
{
	// Fields
	private CompareInfo m_compareInfo; // 0x10
	internal static readonly InvariantComparer Default; // 0x0

	// Methods

	// RVA: 0x12758AC Offset: 0x12718AC VA: 0x12758AC
	internal void .ctor() { }

	// RVA: 0x1275928 Offset: 0x1271928 VA: 0x1275928 Slot: 4
	public int Compare(object a, object b) { }

	// RVA: 0x1275A14 Offset: 0x1271A14 VA: 0x1275A14
	private static void .cctor() { }
}


// Namespace: System
internal static class IriHelper // TypeDefIndex: 3317
{
	// Methods

	// RVA: 0x1275A6C Offset: 0x1271A6C VA: 0x1275A6C
	internal static bool CheckIriUnicodeRange(char unicode, bool isQuery) { }

	// RVA: 0x1275AC4 Offset: 0x1271AC4 VA: 0x1275AC4
	internal static bool CheckIriUnicodeRange(char highSurr, char lowSurr, ref bool surrogatePair, bool isQuery) { }

	// RVA: 0x12760F4 Offset: 0x12720F4 VA: 0x12760F4
	internal static bool CheckIsReserved(char ch, UriComponents component) { }

	// RVA: 0x1276238 Offset: 0x1272238 VA: 0x1276238
	internal static string EscapeUnescapeIri(char* pInput, int start, int end, UriComponents component) { }
}


// Namespace: 
[Flags]
private enum Uri.Flags // TypeDefIndex: 3318
{
	// Fields
	public ulong value__; // 0x0
	public const Uri.Flags Zero = 0;
	public const Uri.Flags SchemeNotCanonical = 1;
	public const Uri.Flags UserNotCanonical = 2;
	public const Uri.Flags HostNotCanonical = 4;
	public const Uri.Flags PortNotCanonical = 8;
	public const Uri.Flags PathNotCanonical = 16;
	public const Uri.Flags QueryNotCanonical = 32;
	public const Uri.Flags FragmentNotCanonical = 64;
	public const Uri.Flags CannotDisplayCanonical = 127;
	public const Uri.Flags E_UserNotCanonical = 128;
	public const Uri.Flags E_HostNotCanonical = 256;
	public const Uri.Flags E_PortNotCanonical = 512;
	public const Uri.Flags E_PathNotCanonical = 1024;
	public const Uri.Flags E_QueryNotCanonical = 2048;
	public const Uri.Flags E_FragmentNotCanonical = 4096;
	public const Uri.Flags E_CannotDisplayCanonical = 8064;
	public const Uri.Flags ShouldBeCompressed = 8192;
	public const Uri.Flags FirstSlashAbsent = 16384;
	public const Uri.Flags BackslashInPath = 32768;
	public const Uri.Flags IndexMask = 65535;
	public const Uri.Flags HostTypeMask = 458752;
	public const Uri.Flags HostNotParsed = 0;
	public const Uri.Flags IPv6HostType = 65536;
	public const Uri.Flags IPv4HostType = 131072;
	public const Uri.Flags DnsHostType = 196608;
	public const Uri.Flags UncHostType = 262144;
	public const Uri.Flags BasicHostType = 327680;
	public const Uri.Flags UnusedHostType = 393216;
	public const Uri.Flags UnknownHostType = 458752;
	public const Uri.Flags UserEscaped = 524288;
	public const Uri.Flags AuthorityFound = 1048576;
	public const Uri.Flags HasUserInfo = 2097152;
	public const Uri.Flags LoopbackHost = 4194304;
	public const Uri.Flags NotDefaultPort = 8388608;
	public const Uri.Flags UserDrivenParsing = 16777216;
	public const Uri.Flags CanonicalDnsHost = 33554432;
	public const Uri.Flags ErrorOrParsingRecursion = 67108864;
	public const Uri.Flags DosPath = 134217728;
	public const Uri.Flags UncPath = 268435456;
	public const Uri.Flags ImplicitFile = 536870912;
	public const Uri.Flags MinimalUriInfoSet = 1073741824;
	public const Uri.Flags AllUriInfoSet = 2147483648;
	public const Uri.Flags IdnHost = 4294967296;
	public const Uri.Flags HasUnicode = 8589934592;
	public const Uri.Flags HostUnicodeNormalized = 17179869184;
	public const Uri.Flags RestUnicodeNormalized = 34359738368;
	public const Uri.Flags UnicodeHost = 68719476736;
	public const Uri.Flags IntranetUri = 137438953472;
	public const Uri.Flags UseOrigUncdStrOffset = 274877906944;
	public const Uri.Flags UserIriCanonical = 549755813888;
	public const Uri.Flags PathIriCanonical = 1099511627776;
	public const Uri.Flags QueryIriCanonical = 2199023255552;
	public const Uri.Flags FragmentIriCanonical = 4398046511104;
	public const Uri.Flags IriCanonical = 8246337208320;
	public const Uri.Flags CompressedSlashes = 17592186044416;
}


// Namespace: 
private class Uri.UriInfo // TypeDefIndex: 3319
{
	// Fields
	public string Host; // 0x10
	public string ScopeId; // 0x18
	public string String; // 0x20
	public Uri.Offset Offset; // 0x28
	public string DnsSafeHost; // 0x38
	public Uri.MoreInfo MoreInfo; // 0x40

	// Methods

	// RVA: 0x12771C0 Offset: 0x12731C0 VA: 0x12771C0
	public void .ctor() { }
}


// Namespace: 
private struct Uri.Offset // TypeDefIndex: 3320
{
	// Fields
	public ushort Scheme; // 0x0
	public ushort User; // 0x2
	public ushort Host; // 0x4
	public ushort PortValue; // 0x6
	public ushort Path; // 0x8
	public ushort Query; // 0xA
	public ushort Fragment; // 0xC
	public ushort End; // 0xE
}


// Namespace: 
private class Uri.MoreInfo // TypeDefIndex: 3321
{
	// Fields
	public string Path; // 0x10
	public string Query; // 0x18
	public string Fragment; // 0x20
	public string AbsoluteUri; // 0x28
	public int Hash; // 0x30
	public string RemoteUrl; // 0x38

	// Methods

	// RVA: 0x12771C8 Offset: 0x12731C8 VA: 0x12771C8
	public void .ctor() { }
}


// Namespace: 
[Flags]
private enum Uri.Check // TypeDefIndex: 3322
{
	// Fields
	public int value__; // 0x0
	public const Uri.Check None = 0;
	public const Uri.Check EscapedCanonical = 1;
	public const Uri.Check DisplayCanonical = 2;
	public const Uri.Check DotSlashAttn = 4;
	public const Uri.Check DotSlashEscaped = 128;
	public const Uri.Check BackslashInPath = 16;
	public const Uri.Check ReservedFound = 32;
	public const Uri.Check NotIriCanonical = 64;
	public const Uri.Check FoundNonAscii = 8;
}


// Namespace: System
[TypeConverter(typeof(UriTypeConverter))]
[Serializable]
public class Uri : ISerializable // TypeDefIndex: 3323
{
	// Fields
	public static readonly string UriSchemeFile; // 0x0
	public static readonly string UriSchemeFtp; // 0x8
	public static readonly string UriSchemeGopher; // 0x10
	public static readonly string UriSchemeHttp; // 0x18
	public static readonly string UriSchemeHttps; // 0x20
	internal static readonly string UriSchemeWs; // 0x28
	internal static readonly string UriSchemeWss; // 0x30
	public static readonly string UriSchemeMailto; // 0x38
	public static readonly string UriSchemeNews; // 0x40
	public static readonly string UriSchemeNntp; // 0x48
	public static readonly string UriSchemeNetTcp; // 0x50
	public static readonly string UriSchemeNetPipe; // 0x58
	public static readonly string SchemeDelimiter; // 0x60
	private const int c_Max16BitUtf8SequenceLength = 12;
	internal const int c_MaxUriBufferSize = 65520;
	private const int c_MaxUriSchemeName = 1024;
	private string m_String; // 0x10
	private string m_originalUnicodeString; // 0x18
	private UriParser m_Syntax; // 0x20
	private string m_DnsSafeHost; // 0x28
	private Uri.Flags m_Flags; // 0x30
	private Uri.UriInfo m_Info; // 0x38
	private bool m_iriParsing; // 0x40
	private static bool s_ConfigInitialized; // 0x68
	private static bool s_ConfigInitializing; // 0x69
	private static UriIdnScope s_IdnScope; // 0x6C
	private static bool s_IriParsing; // 0x70
	private static bool useDotNetRelativeOrAbsolute; // 0x71
	private const UriKind DotNetRelativeOrAbsolute = 300;
	internal static readonly bool IsWindowsFileSystem; // 0x72
	private static object s_initLock; // 0x78
	private const UriFormat V1ToStringUnescape = 32767;
	internal const char c_DummyChar = '\xffff';
	internal const char c_EOL = '\xfffe';
	internal static readonly char[] HexLowerChars; // 0x80
	private static readonly char[] _WSchars; // 0x88

	// Properties
	private bool IsImplicitFile { get; }
	private bool IsUncOrDosPath { get; }
	private bool IsDosPath { get; }
	private bool IsUncPath { get; }
	private Uri.Flags HostType { get; }
	private bool IsNotAbsoluteUri { get; }
	private bool AllowIdn { get; }
	internal bool UserDrivenParsing { get; }
	private ushort SecuredPathIndex { get; }
	public string AbsolutePath { get; }
	private string PrivateAbsolutePath { get; }
	public string AbsoluteUri { get; }
	public string LocalPath { get; }
	public string Authority { get; }
	public UriHostNameType HostNameType { get; }
	public bool IsDefaultPort { get; }
	public bool IsFile { get; }
	public bool IsLoopback { get; }
	public string PathAndQuery { get; }
	public string[] Segments { get; }
	public bool IsUnc { get; }
	public string Host { get; }
	private static object InitializeLock { get; }
	public int Port { get; }
	public string Query { get; }
	public string Fragment { get; }
	public string Scheme { get; }
	private bool OriginalStringSwitched { get; }
	public string OriginalString { get; }
	public string DnsSafeHost { get; }
	public bool IsAbsoluteUri { get; }
	public bool UserEscaped { get; }
	public string UserInfo { get; }
	internal bool HasAuthority { get; }

	// Methods

	// RVA: 0x1250D0C Offset: 0x124CD0C VA: 0x1250D0C
	private bool get_IsImplicitFile() { }

	// RVA: 0x1250D18 Offset: 0x124CD18 VA: 0x1250D18
	private bool get_IsUncOrDosPath() { }

	// RVA: 0x1250D28 Offset: 0x124CD28 VA: 0x1250D28
	private bool get_IsDosPath() { }

	// RVA: 0x1250D34 Offset: 0x124CD34 VA: 0x1250D34
	private bool get_IsUncPath() { }

	// RVA: 0x1250D40 Offset: 0x124CD40 VA: 0x1250D40
	private Uri.Flags get_HostType() { }

	// RVA: 0x1250D4C Offset: 0x124CD4C VA: 0x1250D4C
	private bool get_IsNotAbsoluteUri() { }

	// RVA: 0x1250D5C Offset: 0x124CD5C VA: 0x1250D5C
	internal static bool IriParsingStatic(UriParser syntax) { }

	// RVA: 0x1250DE8 Offset: 0x124CDE8 VA: 0x1250DE8
	private bool get_AllowIdn() { }

	// RVA: 0x1250EB4 Offset: 0x124CEB4 VA: 0x1250EB4
	private bool AllowIdnStatic(UriParser syntax, Uri.Flags flags) { }

	// RVA: 0x1250F88 Offset: 0x124CF88 VA: 0x1250F88
	private bool IsIntranet(string schemeHost) { }

	// RVA: 0x1250F90 Offset: 0x124CF90 VA: 0x1250F90
	internal bool get_UserDrivenParsing() { }

	// RVA: 0x1250F9C Offset: 0x124CF9C VA: 0x1250F9C
	private void SetUserDrivenParsing() { }

	// RVA: 0x1250FB0 Offset: 0x124CFB0 VA: 0x1250FB0
	private ushort get_SecuredPathIndex() { }

	// RVA: 0x1250EA4 Offset: 0x124CEA4 VA: 0x1250EA4
	private bool NotAny(Uri.Flags flags) { }

	// RVA: 0x125100C Offset: 0x124D00C VA: 0x125100C
	private bool InFact(Uri.Flags flags) { }

	// RVA: 0x1250F7C Offset: 0x124CF7C VA: 0x1250F7C
	private static bool StaticNotAny(Uri.Flags allFlags, Uri.Flags checkFlags) { }

	// RVA: 0x125101C Offset: 0x124D01C VA: 0x125101C
	private static bool StaticInFact(Uri.Flags allFlags, Uri.Flags checkFlags) { }

	// RVA: 0x1251028 Offset: 0x124D028 VA: 0x1251028
	private Uri.UriInfo EnsureUriInfo() { }

	// RVA: 0x12515D4 Offset: 0x124D5D4 VA: 0x12515D4
	private void EnsureParseRemaining() { }

	// RVA: 0x12521D4 Offset: 0x124E1D4 VA: 0x12521D4
	private void EnsureHostString(bool allowDnsOptimization) { }

	// RVA: 0x1252628 Offset: 0x124E628 VA: 0x1252628
	public void .ctor(string uriString) { }

	// RVA: 0x1252860 Offset: 0x124E860 VA: 0x1252860
	public void .ctor(string uriString, UriKind uriKind) { }

	// RVA: 0x12528E4 Offset: 0x124E8E4 VA: 0x12528E4
	public void .ctor(Uri baseUri, string relativeUri) { }

	// RVA: 0x12529B4 Offset: 0x124E9B4 VA: 0x12529B4
	private void CreateUri(Uri baseUri, string relativeUri, bool dontEscape) { }

	// RVA: 0x1253178 Offset: 0x124F178 VA: 0x1253178
	public void .ctor(Uri baseUri, Uri relativeUri) { }

	// RVA: 0x1253384 Offset: 0x124F384 VA: 0x1253384
	private static ParsingError GetCombinedString(Uri baseUri, string relativeStr, bool dontEscape, ref string result) { }

	// RVA: 0x1254048 Offset: 0x1250048 VA: 0x1254048
	private static UriFormatException GetException(ParsingError err) { }

	// RVA: 0x12541E8 Offset: 0x12501E8 VA: 0x12541E8
	protected void .ctor(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x12542E8 Offset: 0x12502E8 VA: 0x12542E8 Slot: 4
	private void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x12542EC Offset: 0x12502EC VA: 0x12542EC
	protected void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x12543C8 Offset: 0x12503C8 VA: 0x12543C8
	public string get_AbsolutePath() { }

	// RVA: 0x1254488 Offset: 0x1250488 VA: 0x1254488
	private string get_PrivateAbsolutePath() { }

	// RVA: 0x1254530 Offset: 0x1250530 VA: 0x1254530
	public string get_AbsoluteUri() { }

	// RVA: 0x125462C Offset: 0x125062C VA: 0x125462C
	public string get_LocalPath() { }

	// RVA: 0x1254C84 Offset: 0x1250C84 VA: 0x1254C84
	public string get_Authority() { }

	// RVA: 0x1254CF8 Offset: 0x1250CF8 VA: 0x1254CF8
	public UriHostNameType get_HostNameType() { }

	// RVA: 0x1254DF0 Offset: 0x1250DF0 VA: 0x1254DF0
	public bool get_IsDefaultPort() { }

	// RVA: 0x1254E98 Offset: 0x1250E98 VA: 0x1254E98
	public bool get_IsFile() { }

	// RVA: 0x1254F58 Offset: 0x1250F58 VA: 0x1254F58
	public bool get_IsLoopback() { }

	// RVA: 0x1254FD8 Offset: 0x1250FD8 VA: 0x1254FD8
	public string get_PathAndQuery() { }

	// RVA: 0x12550A0 Offset: 0x12510A0 VA: 0x12550A0
	public string[] get_Segments() { }

	// RVA: 0x12552A0 Offset: 0x12512A0 VA: 0x12552A0
	public bool get_IsUnc() { }

	// RVA: 0x1255314 Offset: 0x1251314 VA: 0x1255314
	public string get_Host() { }

	// RVA: 0x1255388 Offset: 0x1251388 VA: 0x1255388
	private static bool StaticIsFile(UriParser syntax) { }

	// RVA: 0x12553A0 Offset: 0x12513A0 VA: 0x12553A0
	private static object get_InitializeLock() { }

	// RVA: 0x125546C Offset: 0x125146C VA: 0x125546C
	private static void InitializeUriConfig() { }

	// RVA: 0x1254698 Offset: 0x1250698 VA: 0x1254698
	private string GetLocalPath() { }

	// RVA: 0x1255BAC Offset: 0x1251BAC VA: 0x1255BAC
	public int get_Port() { }

	// RVA: 0x1255C70 Offset: 0x1251C70 VA: 0x1255C70
	public string get_Query() { }

	// RVA: 0x1255D70 Offset: 0x1251D70 VA: 0x1255D70
	public string get_Fragment() { }

	// RVA: 0x1255E70 Offset: 0x1251E70 VA: 0x1255E70
	public string get_Scheme() { }

	// RVA: 0x1255EE0 Offset: 0x1251EE0 VA: 0x1255EE0
	private bool get_OriginalStringSwitched() { }

	// RVA: 0x12536FC Offset: 0x124F6FC VA: 0x12536FC
	public string get_OriginalString() { }

	// RVA: 0x1255F28 Offset: 0x1251F28 VA: 0x1255F28
	public string get_DnsSafeHost() { }

	// RVA: 0x12529A4 Offset: 0x124E9A4 VA: 0x12529A4
	public bool get_IsAbsoluteUri() { }

	// RVA: 0x1256174 Offset: 0x1252174 VA: 0x1256174
	public bool get_UserEscaped() { }

	// RVA: 0x1256180 Offset: 0x1252180 VA: 0x1256180
	public string get_UserInfo() { }

	// RVA: 0x12561F4 Offset: 0x12521F4 VA: 0x12561F4
	internal static bool IsGenDelim(char ch) { }

	// RVA: 0x1256224 Offset: 0x1252224 VA: 0x1256224
	public static bool IsHexDigit(char character) { }

	// RVA: 0x1256260 Offset: 0x1252260 VA: 0x1256260
	public static int FromHex(char digit) { }

	// RVA: 0x125630C Offset: 0x125230C VA: 0x125630C Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x12564B0 Offset: 0x12524B0 VA: 0x12564B0 Slot: 3
	public override string ToString() { }

	// RVA: 0x1256790 Offset: 0x1252790 VA: 0x1256790
	public static bool op_Equality(Uri uri1, Uri uri2) { }

	// RVA: 0x1253010 Offset: 0x124F010 VA: 0x1253010
	public static bool op_Inequality(Uri uri1, Uri uri2) { }

	// RVA: 0x12567C4 Offset: 0x12527C4 VA: 0x12567C4 Slot: 0
	public override bool Equals(object comparand) { }

	// RVA: 0x1256DFC Offset: 0x1252DFC VA: 0x1256DFC
	private static bool CheckForColonInFirstPathSegment(string uriString) { }

	// RVA: 0x1256EB4 Offset: 0x1252EB4 VA: 0x1256EB4
	internal static string InternalEscapeString(string rawString) { }

	// RVA: 0x1256F90 Offset: 0x1252F90 VA: 0x1256F90
	private static ParsingError ParseScheme(string uriString, ref Uri.Flags flags, ref UriParser syntax) { }

	// RVA: 0x12575C0 Offset: 0x12535C0 VA: 0x12575C0
	internal UriFormatException ParseMinimal() { }

	// RVA: 0x1257640 Offset: 0x1253640 VA: 0x1257640
	private ParsingError PrivateParseMinimal() { }

	// RVA: 0x1258B60 Offset: 0x1254B60 VA: 0x1258B60
	private void PrivateParseMinimalIri(string newHost, ushort idx) { }

	// RVA: 0x125104C Offset: 0x124D04C VA: 0x125104C
	private void CreateUriInfo(Uri.Flags cF) { }

	// RVA: 0x1252234 Offset: 0x124E234 VA: 0x1252234
	private void CreateHostString() { }

	// RVA: 0x1259064 Offset: 0x1255064 VA: 0x1259064
	private static string CreateHostStringHelper(string str, ushort idx, ushort end, ref Uri.Flags flags, ref string scopeId) { }

	// RVA: 0x1258C34 Offset: 0x1254C34 VA: 0x1258C34
	private void GetHostViaCustomSyntax() { }

	// RVA: 0x12543C4 Offset: 0x12503C4 VA: 0x12543C4
	internal string GetParts(UriComponents uriParts, UriFormat formatAs) { }

	// RVA: 0x1259804 Offset: 0x1255804 VA: 0x1259804
	private string GetEscapedParts(UriComponents uriParts) { }

	// RVA: 0x1255ADC Offset: 0x1251ADC VA: 0x1255ADC
	private string GetUnescapedParts(UriComponents uriParts, UriFormat formatAs) { }

	// RVA: 0x1259E64 Offset: 0x1255E64 VA: 0x1259E64
	private string ReCreateParts(UriComponents parts, ushort nonCanonical, UriFormat formatAs) { }

	// RVA: 0x12598CC Offset: 0x12558CC VA: 0x12598CC
	private string GetUriPartsFromUserString(UriComponents uriParts) { }

	// RVA: 0x12515E4 Offset: 0x124D5E4 VA: 0x12515E4
	private void ParseRemaining() { }

	// RVA: 0x1257064 Offset: 0x1253064 VA: 0x1257064
	private static ushort ParseSchemeCheckImplicitFile(char* uriString, ushort length, ref ParsingError err, ref Uri.Flags flags, ref UriParser syntax) { }

	// RVA: 0x125B22C Offset: 0x125722C VA: 0x125B22C
	private static bool CheckKnownSchemes(long* lptr, ushort nChars, ref UriParser syntax) { }

	// RVA: 0x12535C4 Offset: 0x124F5C4 VA: 0x12535C4
	private static ParsingError CheckSchemeSyntax(char* ptr, ushort length, ref UriParser syntax) { }

	// RVA: 0x1257D38 Offset: 0x1253D38 VA: 0x1257D38
	private ushort CheckAuthorityHelper(char* pString, ushort idx, ushort length, ref ParsingError err, ref Uri.Flags flags, UriParser syntax, ref string newHost) { }

	// RVA: 0x125B7A8 Offset: 0x12577A8 VA: 0x125B7A8
	private void CheckAuthorityHelperHandleDnsIri(char* pString, ushort start, int end, int startInput, bool iriParsing, bool hasUnicode, UriParser syntax, string userInfoString, ref Uri.Flags flags, ref bool justNormalized, ref string newHost, ref ParsingError err) { }

	// RVA: 0x125BAFC Offset: 0x1257AFC VA: 0x125BAFC
	private void CheckAuthorityHelperHandleAnyHostIri(char* pString, int startInput, int end, bool iriParsing, bool hasUnicode, UriParser syntax, ref Uri.Flags flags, ref string newHost, ref ParsingError err) { }

	// RVA: 0x125B188 Offset: 0x1257188 VA: 0x125B188
	private void FindEndOfComponent(string input, ref ushort idx, ushort end, char delim) { }

	// RVA: 0x125BF20 Offset: 0x1257F20 VA: 0x125BF20
	private void FindEndOfComponent(char* str, ref ushort idx, ushort end, char delim) { }

	// RVA: 0x1259240 Offset: 0x1255240 VA: 0x1259240
	private Uri.Check CheckCanonical(char* str, ref ushort idx, ushort end, char delim) { }

	// RVA: 0x125AB18 Offset: 0x1256B18 VA: 0x125AB18
	private char[] GetCanonicalPath(char[] dest, ref int pos, UriFormat formatAs) { }

	// RVA: 0x125BFB8 Offset: 0x1257FB8 VA: 0x125BFB8
	private static void UnescapeOnly(char* pch, int start, ref int end, char ch1, char ch2, char ch3) { }

	// RVA: 0x1255608 Offset: 0x1251608 VA: 0x1255608
	private static char[] Compress(char[] dest, ushort start, ref int destLength, UriParser syntax) { }

	// RVA: 0x1256440 Offset: 0x1252440 VA: 0x1256440
	internal static int CalculateCaseInsensitiveHashCode(string text) { }

	// RVA: 0x1253724 Offset: 0x124F724 VA: 0x1253724
	private static string CombineUri(Uri basePart, string relativePart, UriFormat uriFormat) { }

	// RVA: 0x125C1D4 Offset: 0x12581D4 VA: 0x125C1D4
	internal bool get_HasAuthority() { }

	// RVA: 0x1257CD4 Offset: 0x1253CD4 VA: 0x1257CD4
	private static bool IsLWS(char ch) { }

	// RVA: 0x1257D0C Offset: 0x1253D0C VA: 0x1257D0C
	private static bool IsAsciiLetter(char character) { }

	// RVA: 0x125C1E0 Offset: 0x12581E0 VA: 0x125C1E0
	internal static bool IsAsciiLetterOrDigit(char character) { }

	// RVA: 0x125C25C Offset: 0x125825C VA: 0x125C25C
	internal static bool IsBidiControlCharacter(char ch) { }

	// RVA: 0x125BDC0 Offset: 0x1257DC0 VA: 0x125BDC0
	internal static string StripBidiControlCharacter(char* strToClean, int start, int length) { }

	// RVA: 0x12526A8 Offset: 0x124E6A8 VA: 0x12526A8
	private void CreateThis(string uri, bool dontEscape, UriKind uriKind) { }

	// RVA: 0x125C28C Offset: 0x125828C VA: 0x125C28C
	private void InitializeUri(ParsingError err, UriKind uriKind, out UriFormatException e) { }

	// RVA: 0x125C754 Offset: 0x1258754 VA: 0x125C754
	private bool CheckForConfigLoad(string data) { }

	// RVA: 0x125C838 Offset: 0x1258838 VA: 0x125C838
	private bool CheckForUnicode(string data) { }

	// RVA: 0x125C960 Offset: 0x1258960 VA: 0x125C960
	private bool CheckForEscapedUnreserved(string data) { }

	// RVA: 0x1256D48 Offset: 0x1252D48 VA: 0x1256D48
	public static bool TryCreate(string uriString, UriKind uriKind, out Uri result) { }

	// RVA: 0x125CD84 Offset: 0x1258D84 VA: 0x125CD84
	public static bool TryCreate(Uri baseUri, string relativeUri, out Uri result) { }

	// RVA: 0x125CE54 Offset: 0x1258E54 VA: 0x125CE54
	public static bool TryCreate(Uri baseUri, Uri relativeUri, out Uri result) { }

	// RVA: 0x125963C Offset: 0x125563C VA: 0x125963C
	public string GetComponents(UriComponents components, UriFormat format) { }

	// RVA: 0x125D1EC Offset: 0x12591EC VA: 0x125D1EC
	public bool IsWellFormedOriginalString() { }

	// RVA: 0x125D698 Offset: 0x1259698 VA: 0x125D698
	public static bool IsWellFormedUriString(string uriString, UriKind uriKind) { }

	// RVA: 0x125D230 Offset: 0x1259230 VA: 0x125D230
	internal bool InternalIsWellFormedOriginalString() { }

	// RVA: 0x125D734 Offset: 0x1259734 VA: 0x125D734
	public static string UnescapeDataString(string stringToUnescape) { }

	// RVA: 0x125B1DC Offset: 0x12571DC VA: 0x125B1DC
	internal string EscapeUnescapeIri(string input, int start, int end, UriComponents component) { }

	// RVA: 0x125D8D4 Offset: 0x12598D4 VA: 0x125D8D4
	private void .ctor(Uri.Flags flags, UriParser uriParser, string uri) { }

	// RVA: 0x125CB24 Offset: 0x1258B24 VA: 0x125CB24
	internal static Uri CreateHelper(string uriString, bool dontEscape, UriKind uriKind, ref UriFormatException e) { }

	// RVA: 0x1252B3C Offset: 0x124EB3C VA: 0x1252B3C
	internal static Uri ResolveHelper(Uri baseUri, Uri relativeUri, ref string newUriString, ref bool userEscaped, out UriFormatException e) { }

	// RVA: 0x125CFD0 Offset: 0x1258FD0 VA: 0x125CFD0
	private string GetRelativeSerializationString(UriFormat format) { }

	// RVA: 0x125657C Offset: 0x125257C VA: 0x125657C
	internal string GetComponentsHelper(UriComponents uriComponents, UriFormat uriFormat) { }

	// RVA: 0x125D914 Offset: 0x1259914 VA: 0x125D914
	public bool IsBaseOf(Uri uri) { }

	// RVA: 0x125D9C8 Offset: 0x12599C8 VA: 0x125D9C8
	internal bool IsBaseOfHelper(Uri uriLink) { }

	// RVA: 0x1253058 Offset: 0x124F058 VA: 0x1253058
	private void CreateThisFromUri(Uri otherUri) { }

	// RVA: 0x125DBB4 Offset: 0x1259BB4 VA: 0x125DBB4
	private static void .cctor() { }
}


// Namespace: System
[Serializable]
public class UriFormatException : FormatException, ISerializable // TypeDefIndex: 3324
{
	// Methods

	// RVA: 0x12771D0 Offset: 0x12731D0 VA: 0x12771D0
	public void .ctor() { }

	// RVA: 0x127535C Offset: 0x127135C VA: 0x127535C
	public void .ctor(string textString) { }

	// RVA: 0x12771D8 Offset: 0x12731D8 VA: 0x12771D8
	protected void .ctor(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x12771E0 Offset: 0x12731E0 VA: 0x12771E0 Slot: 4
	private void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }
}


// Namespace: System
public enum UriKind // TypeDefIndex: 3325
{
	// Fields
	public int value__; // 0x0
	public const UriKind RelativeOrAbsolute = 0;
	public const UriKind Absolute = 1;
	public const UriKind Relative = 2;
}


// Namespace: System
[Flags]
public enum UriComponents // TypeDefIndex: 3326
{
	// Fields
	public int value__; // 0x0
	public const UriComponents Scheme = 1;
	public const UriComponents UserInfo = 2;
	public const UriComponents Host = 4;
	public const UriComponents Port = 8;
	public const UriComponents Path = 16;
	public const UriComponents Query = 32;
	public const UriComponents Fragment = 64;
	public const UriComponents StrongPort = 128;
	public const UriComponents NormalizedHost = 256;
	public const UriComponents KeepDelimiter = 1073741824;
	public const UriComponents SerializationInfoString = -2147483648;
	public const UriComponents AbsoluteUri = 127;
	public const UriComponents HostAndPort = 132;
	public const UriComponents StrongAuthority = 134;
	public const UriComponents SchemeAndServer = 13;
	public const UriComponents HttpRequestUrl = 61;
	public const UriComponents PathAndQuery = 48;
}


// Namespace: System
public enum UriFormat // TypeDefIndex: 3327
{
	// Fields
	public int value__; // 0x0
	public const UriFormat UriEscaped = 1;
	public const UriFormat Unescaped = 2;
	public const UriFormat SafeUnescaped = 3;
}


// Namespace: System
public enum UriIdnScope // TypeDefIndex: 3328
{
	// Fields
	public int value__; // 0x0
	public const UriIdnScope None = 0;
	public const UriIdnScope AllExceptIntranet = 1;
	public const UriIdnScope All = 2;
}


// Namespace: System
internal enum ParsingError // TypeDefIndex: 3329
{
	// Fields
	public int value__; // 0x0
	public const ParsingError None = 0;
	public const ParsingError BadFormat = 1;
	public const ParsingError BadScheme = 2;
	public const ParsingError BadAuthority = 3;
	public const ParsingError EmptyUriString = 4;
	public const ParsingError LastRelativeUriOkErrIndex = 4;
	public const ParsingError SchemeLimit = 5;
	public const ParsingError SizeLimit = 6;
	public const ParsingError MustRootedPath = 7;
	public const ParsingError BadHostName = 8;
	public const ParsingError NonEmptyHost = 9;
	public const ParsingError BadPort = 10;
	public const ParsingError BadAuthorityTerminator = 11;
	public const ParsingError CannotCreateRelative = 12;
}


// Namespace: System
[Flags]
internal enum UnescapeMode // TypeDefIndex: 3330
{
	// Fields
	public int value__; // 0x0
	public const UnescapeMode CopyOnly = 0;
	public const UnescapeMode Escape = 1;
	public const UnescapeMode Unescape = 2;
	public const UnescapeMode EscapeUnescape = 3;
	public const UnescapeMode V1ToStringFlag = 4;
	public const UnescapeMode UnescapeAll = 8;
	public const UnescapeMode UnescapeAllOrThrow = 24;
}


// Namespace: System
internal static class UriHelper // TypeDefIndex: 3331
{
	// Fields
	private static readonly char[] HexUpperChars; // 0x0

	// Methods

	// RVA: 0x12771E8 Offset: 0x12731E8 VA: 0x12771E8
	internal static bool TestForSubPath(char* pMe, ushort meLength, char* pShe, ushort sheLength, bool ignoreCase) { }

	// RVA: 0x12773E4 Offset: 0x12733E4 VA: 0x12773E4
	internal static char[] EscapeString(string input, int start, int end, char[] dest, ref int destPos, bool isUriString, char force1, char force2, char rsvd) { }

	// RVA: 0x12778F8 Offset: 0x12738F8 VA: 0x12778F8
	private static char[] EnsureDestinationSize(char* pStr, char[] dest, int currentInputPos, short charsToAdd, short minReallocateChars, ref int destPos, int prevInputPos) { }

	// RVA: 0x1277C0C Offset: 0x1273C0C VA: 0x1277C0C
	internal static char[] UnescapeString(string input, int start, int end, char[] dest, ref int destPosition, char rsvd1, char rsvd2, char rsvd3, UnescapeMode unescapeMode, UriParser syntax, bool isQuery) { }

	// RVA: 0x1277CEC Offset: 0x1273CEC VA: 0x1277CEC
	internal static char[] UnescapeString(char* pStr, int start, int end, char[] dest, ref int destPosition, char rsvd1, char rsvd2, char rsvd3, UnescapeMode unescapeMode, UriParser syntax, bool isQuery) { }

	// RVA: 0x1276BDC Offset: 0x1272BDC VA: 0x1276BDC
	internal static void MatchUTF8Sequence(char* pDest, char[] dest, ref int destOffset, char[] unescapedChars, int charCount, byte[] bytes, int byteCount, bool isQuery, bool iriParsing) { }

	// RVA: 0x12770B8 Offset: 0x12730B8 VA: 0x12770B8
	internal static void EscapeAsciiChar(char ch, char[] to, ref int pos) { }

	// RVA: 0x1276A94 Offset: 0x1272A94 VA: 0x1276A94
	internal static char EscapedAscii(char digit, char next) { }

	// RVA: 0x1276B50 Offset: 0x1272B50 VA: 0x1276B50
	internal static bool IsNotSafeForUnescape(char ch) { }

	// RVA: 0x1277B04 Offset: 0x1273B04 VA: 0x1277B04
	private static bool IsReservedUnreservedOrHash(char c) { }

	// RVA: 0x1277A24 Offset: 0x1273A24 VA: 0x1277A24
	internal static bool IsUnreserved(char c) { }

	// RVA: 0x1278700 Offset: 0x1274700 VA: 0x1278700
	internal static bool Is3986Unreserved(char c) { }

	// RVA: 0x127879C Offset: 0x127479C VA: 0x127879C
	private static void .cctor() { }
}


// Namespace: System
public enum UriHostNameType // TypeDefIndex: 3332
{
	// Fields
	public int value__; // 0x0
	public const UriHostNameType Unknown = 0;
	public const UriHostNameType Basic = 1;
	public const UriHostNameType Dns = 2;
	public const UriHostNameType IPv4 = 3;
	public const UriHostNameType IPv6 = 4;
}


// Namespace: 
private enum UriParser.UriQuirksVersion // TypeDefIndex: 3333
{
	// Fields
	public int value__; // 0x0
	public const UriParser.UriQuirksVersion V2 = 2;
	public const UriParser.UriQuirksVersion V3 = 3;
}


// Namespace: 
private class UriParser.BuiltInUriParser : UriParser // TypeDefIndex: 3334
{
	// Methods

	// RVA: 0x1279474 Offset: 0x1275474 VA: 0x1279474
	internal void .ctor(string lwrCaseScheme, int defaultPort, UriSyntaxFlags syntaxFlags) { }
}


// Namespace: System
public abstract class UriParser // TypeDefIndex: 3335
{
	// Fields
	private const UriSyntaxFlags SchemeOnlyFlags = 16;
	private static readonly Dictionary<string, UriParser> m_Table; // 0x0
	private static Dictionary<string, UriParser> m_TempTable; // 0x8
	private UriSyntaxFlags m_Flags; // 0x10
	private UriSyntaxFlags m_UpdatableFlags; // 0x14
	private bool m_UpdatableFlagsUsed; // 0x18
	private const UriSyntaxFlags c_UpdatableFlags = 33554432;
	private int m_Port; // 0x1C
	private string m_Scheme; // 0x20
	internal const int NoDefaultPort = -1;
	private const int c_InitialTableSize = 25;
	internal static UriParser HttpUri; // 0x10
	internal static UriParser HttpsUri; // 0x18
	internal static UriParser WsUri; // 0x20
	internal static UriParser WssUri; // 0x28
	internal static UriParser FtpUri; // 0x30
	internal static UriParser FileUri; // 0x38
	internal static UriParser GopherUri; // 0x40
	internal static UriParser NntpUri; // 0x48
	internal static UriParser NewsUri; // 0x50
	internal static UriParser MailToUri; // 0x58
	internal static UriParser UuidUri; // 0x60
	internal static UriParser TelnetUri; // 0x68
	internal static UriParser LdapUri; // 0x70
	internal static UriParser NetTcpUri; // 0x78
	internal static UriParser NetPipeUri; // 0x80
	internal static UriParser VsMacrosUri; // 0x88
	private static readonly UriParser.UriQuirksVersion s_QuirksVersion; // 0x90
	private const int c_MaxCapacity = 512;
	private const UriSyntaxFlags UnknownV1SyntaxFlags = 351342590;
	private static readonly UriSyntaxFlags HttpSyntaxFlags; // 0x94
	private const UriSyntaxFlags FtpSyntaxFlags = 367005533;
	private static readonly UriSyntaxFlags FileSyntaxFlags; // 0x98
	private const UriSyntaxFlags VsmacrosSyntaxFlags = 399519697;
	private const UriSyntaxFlags GopherSyntaxFlags = 337645405;
	private const UriSyntaxFlags NewsSyntaxFlags = 268435536;
	private const UriSyntaxFlags NntpSyntaxFlags = 337645405;
	private const UriSyntaxFlags TelnetSyntaxFlags = 337645405;
	private const UriSyntaxFlags LdapSyntaxFlags = 337645565;
	private const UriSyntaxFlags MailtoSyntaxFlags = 335564796;
	private const UriSyntaxFlags NetPipeSyntaxFlags = 400559729;
	private const UriSyntaxFlags NetTcpSyntaxFlags = 400559737;

	// Properties
	internal static bool ShouldUseLegacyV2Quirks { get; }
	internal bool IsSimple { get; }

	// Methods

	// RVA: 0x1278830 Offset: 0x1274830 VA: 0x1278830
	protected void .ctor() { }

	// RVA: 0x12788A4 Offset: 0x12748A4 VA: 0x12788A4 Slot: 4
	protected virtual UriParser OnNewUri() { }

	// RVA: 0x12788A8 Offset: 0x12748A8 VA: 0x12788A8 Slot: 5
	protected virtual void InitializeAndValidate(Uri uri, out UriFormatException parsingError) { }

	// RVA: 0x12788D0 Offset: 0x12748D0 VA: 0x12788D0 Slot: 6
	protected virtual string Resolve(Uri baseUri, Uri relativeUri, out UriFormatException parsingError) { }

	// RVA: 0x1278AAC Offset: 0x1274AAC VA: 0x1278AAC Slot: 7
	protected virtual bool IsBaseOf(Uri baseUri, Uri relativeUri) { }

	// RVA: 0x1278AC8 Offset: 0x1274AC8 VA: 0x1278AC8 Slot: 8
	protected virtual string GetComponents(Uri uri, UriComponents components, UriFormat format) { }

	// RVA: 0x1278CE0 Offset: 0x1274CE0 VA: 0x1278CE0 Slot: 9
	protected virtual bool IsWellFormedOriginalString(Uri uri) { }

	// RVA: 0x12786A0 Offset: 0x12746A0 VA: 0x12786A0
	internal static bool get_ShouldUseLegacyV2Quirks() { }

	// RVA: 0x1278CF8 Offset: 0x1274CF8 VA: 0x1278CF8
	private static void .cctor() { }

	// RVA: 0x1275450 Offset: 0x1271450 VA: 0x1275450
	internal bool NotAny(UriSyntaxFlags flags) { }

	// RVA: 0x1275434 Offset: 0x1271434 VA: 0x1275434
	internal bool InFact(UriSyntaxFlags flags) { }

	// RVA: 0x1279550 Offset: 0x1275550 VA: 0x1279550
	internal bool IsAllSet(UriSyntaxFlags flags) { }

	// RVA: 0x12794F4 Offset: 0x12754F4 VA: 0x12794F4
	private bool IsFullMatch(UriSyntaxFlags flags, UriSyntaxFlags expected) { }

	// RVA: 0x1278838 Offset: 0x1274838 VA: 0x1278838
	internal void .ctor(UriSyntaxFlags flags) { }

	// RVA: 0x1279558 Offset: 0x1275558 VA: 0x1279558
	internal static UriParser FindOrFetchAsUnknownV1Syntax(string lwrCaseScheme) { }

	// RVA: 0x1275364 Offset: 0x1271364 VA: 0x1275364
	internal static UriParser GetSyntax(string lwrCaseScheme) { }

	// RVA: 0x1279828 Offset: 0x1275828 VA: 0x1279828
	internal bool get_IsSimple() { }

	// RVA: 0x1279834 Offset: 0x1275834 VA: 0x1279834
	internal UriParser InternalOnNewUri() { }

	// RVA: 0x1279878 Offset: 0x1275878 VA: 0x1279878
	internal void InternalValidate(Uri thisUri, out UriFormatException parsingError) { }

	// RVA: 0x1279884 Offset: 0x1275884 VA: 0x1279884
	internal string InternalResolve(Uri thisBaseUri, Uri uriLink, out UriFormatException parsingError) { }

	// RVA: 0x1279890 Offset: 0x1275890 VA: 0x1279890
	internal bool InternalIsBaseOf(Uri thisBaseUri, Uri uriLink) { }

	// RVA: 0x127989C Offset: 0x127589C VA: 0x127989C
	internal string InternalGetComponents(Uri thisUri, UriComponents uriComponents, UriFormat uriFormat) { }

	// RVA: 0x12798A8 Offset: 0x12758A8 VA: 0x12798A8
	internal bool InternalIsWellFormedOriginalString(Uri thisUri) { }
}


// Namespace: System
internal class DomainNameHelper // TypeDefIndex: 3336
{
	// Methods

	// RVA: 0x12798B4 Offset: 0x12758B4 VA: 0x12798B4
	internal static string ParseCanonicalName(string str, int start, int end, ref bool loopback) { }

	// RVA: 0x1279A4C Offset: 0x1275A4C VA: 0x1279A4C
	internal static bool IsValid(char* name, ushort pos, ref int returnedEnd, ref bool notCanonical, bool notImplicitFile) { }

	// RVA: 0x1279C7C Offset: 0x1275C7C VA: 0x1279C7C
	internal static bool IsValidByIri(char* name, ushort pos, ref int returnedEnd, ref bool notCanonical, bool notImplicitFile) { }

	// RVA: 0x1279E6C Offset: 0x1275E6C VA: 0x1279E6C
	internal static string IdnEquivalent(char* hostname, int start, int end, ref bool allAscii, ref bool atLeastOneValidIdn) { }

	// RVA: 0x127A0F8 Offset: 0x12760F8 VA: 0x127A0F8
	internal static string IdnEquivalent(char* hostname, int start, int end, ref bool allAscii, ref string bidiStrippedHost) { }

	// RVA: 0x127A338 Offset: 0x1276338 VA: 0x127A338
	private static bool IsIdnAce(string input, int index) { }

	// RVA: 0x127A2EC Offset: 0x12762EC VA: 0x127A2EC
	private static bool IsIdnAce(char* input, int index) { }

	// RVA: 0x127A3D0 Offset: 0x12763D0 VA: 0x127A3D0
	internal static string UnicodeEquivalent(string idnHost, char* hostname, int start, int end) { }

	// RVA: 0x127A4EC Offset: 0x12764EC VA: 0x127A4EC
	internal static string UnicodeEquivalent(char* hostname, int start, int end, ref bool allAscii, ref bool atLeastOneValidIdn) { }

	// RVA: 0x1279BCC Offset: 0x1275BCC VA: 0x1279BCC
	private static bool IsASCIILetterOrDigit(char character, ref bool notCanonical) { }

	// RVA: 0x1279C18 Offset: 0x1275C18 VA: 0x1279C18
	private static bool IsValidDomainLabelCharacter(char character, ref bool notCanonical) { }
}


// Namespace: System
internal class UncNameHelper // TypeDefIndex: 3337
{
	// Methods

	// RVA: 0x127A948 Offset: 0x1276948 VA: 0x127A948
	internal static string ParseCanonicalName(string str, int start, int end, ref bool loopback) { }

	// RVA: 0x127A94C Offset: 0x127694C VA: 0x127A94C
	internal static bool IsValid(char* name, ushort start, ref int returnedEnd, bool notImplicitFile) { }
}


// Namespace: System
[Flags]
internal enum UriSyntaxFlags // TypeDefIndex: 3338
{
	// Fields
	public int value__; // 0x0
	public const UriSyntaxFlags None = 0;
	public const UriSyntaxFlags MustHaveAuthority = 1;
	public const UriSyntaxFlags OptionalAuthority = 2;
	public const UriSyntaxFlags MayHaveUserInfo = 4;
	public const UriSyntaxFlags MayHavePort = 8;
	public const UriSyntaxFlags MayHavePath = 16;
	public const UriSyntaxFlags MayHaveQuery = 32;
	public const UriSyntaxFlags MayHaveFragment = 64;
	public const UriSyntaxFlags AllowEmptyHost = 128;
	public const UriSyntaxFlags AllowUncHost = 256;
	public const UriSyntaxFlags AllowDnsHost = 512;
	public const UriSyntaxFlags AllowIPv4Host = 1024;
	public const UriSyntaxFlags AllowIPv6Host = 2048;
	public const UriSyntaxFlags AllowAnInternetHost = 3584;
	public const UriSyntaxFlags AllowAnyOtherHost = 4096;
	public const UriSyntaxFlags FileLikeUri = 8192;
	public const UriSyntaxFlags MailToLikeUri = 16384;
	public const UriSyntaxFlags V1_UnknownUri = 65536;
	public const UriSyntaxFlags SimpleUserSyntax = 131072;
	public const UriSyntaxFlags BuiltInSyntax = 262144;
	public const UriSyntaxFlags ParserSchemeOnly = 524288;
	public const UriSyntaxFlags AllowDOSPath = 1048576;
	public const UriSyntaxFlags PathIsRooted = 2097152;
	public const UriSyntaxFlags ConvertPathSlashes = 4194304;
	public const UriSyntaxFlags CompressPath = 8388608;
	public const UriSyntaxFlags CanonicalizeAsFilePath = 16777216;
	public const UriSyntaxFlags UnEscapeDotsAndSlashes = 33554432;
	public const UriSyntaxFlags AllowIdn = 67108864;
	public const UriSyntaxFlags AllowIriParsing = 268435456;
}


// Namespace: System
internal static class LocalAppContextSwitches // TypeDefIndex: 3339
{
	// Fields
	public static readonly bool MemberDescriptorEqualsReturnsFalseIfEquivalent; // 0x0
}


// Namespace: System
internal enum IOOperation // TypeDefIndex: 3340
{
	// Fields
	public int value__; // 0x0
	public const IOOperation Read = 1;
	public const IOOperation Write = 2;
}


// Namespace: System
internal sealed class IOAsyncCallback : MulticastDelegate // TypeDefIndex: 3341
{
	// Methods

	// RVA: 0x127AC1C Offset: 0x1276C1C VA: 0x127AC1C
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x127AD1C Offset: 0x1276D1C VA: 0x127AD1C Slot: 12
	public virtual void Invoke(IOAsyncResult ioares) { }
}


// Namespace: System
internal abstract class IOAsyncResult : IAsyncResult // TypeDefIndex: 3342
{
	// Fields
	private AsyncCallback async_callback; // 0x10
	private object async_state; // 0x18
	private ManualResetEvent wait_handle; // 0x20
	private bool completed_synchronously; // 0x28
	private bool completed; // 0x29

	// Properties
	public object AsyncState { get; }
	public WaitHandle AsyncWaitHandle { get; }
	public bool CompletedSynchronously { get; }
	public bool IsCompleted { get; set; }

	// Methods

	// RVA: 0x127AD30 Offset: 0x1276D30 VA: 0x127AD30
	protected void .ctor() { }

	// RVA: 0x127AD38 Offset: 0x1276D38 VA: 0x127AD38
	protected void Init(AsyncCallback async_callback, object async_state) { }

	// RVA: 0x127AD58 Offset: 0x1276D58 VA: 0x127AD58
	protected void .ctor(AsyncCallback async_callback, object async_state) { }

	// RVA: 0x127AD84 Offset: 0x1276D84 VA: 0x127AD84 Slot: 6
	public object get_AsyncState() { }

	// RVA: 0x127AD8C Offset: 0x1276D8C VA: 0x127AD8C Slot: 5
	public WaitHandle get_AsyncWaitHandle() { }

	// RVA: 0x127AEA4 Offset: 0x1276EA4 VA: 0x127AEA4 Slot: 7
	public bool get_CompletedSynchronously() { }

	// RVA: 0x127AEAC Offset: 0x1276EAC VA: 0x127AEAC Slot: 4
	public bool get_IsCompleted() { }

	// RVA: 0x127AEB4 Offset: 0x1276EB4 VA: 0x127AEB4
	protected void set_IsCompleted(bool value) { }

	// RVA: -1 Offset: -1 Slot: 8
	internal abstract void CompleteDisposed();
}


// Namespace: System
internal class IOSelectorJob : IThreadPoolWorkItem // TypeDefIndex: 3343
{
	// Fields
	private IOOperation operation; // 0x10
	private IOAsyncCallback callback; // 0x18
	private IOAsyncResult state; // 0x20

	// Methods

	// RVA: 0x127AF8C Offset: 0x1276F8C VA: 0x127AF8C
	public void .ctor(IOOperation operation, IOAsyncCallback callback, IOAsyncResult state) { }

	// RVA: 0x127AFC8 Offset: 0x1276FC8 VA: 0x127AFC8 Slot: 4
	private void System.Threading.IThreadPoolWorkItem.ExecuteWorkItem() { }

	// RVA: 0x127AFF0 Offset: 0x1276FF0 VA: 0x127AFF0 Slot: 5
	private void System.Threading.IThreadPoolWorkItem.MarkAborted(ThreadAbortException tae) { }

	// RVA: 0x127AFF4 Offset: 0x1276FF4 VA: 0x127AFF4
	public void MarkDisposed() { }
}


// Namespace: System
internal static class IOSelector // TypeDefIndex: 3344
{
	// Methods

	// RVA: 0x127B014 Offset: 0x1277014 VA: 0x127B014
	public static void Add(IntPtr handle, IOSelectorJob job) { }
}


// Namespace: System
public class UriTypeConverter : TypeConverter // TypeDefIndex: 3345
{
	// Methods

	// RVA: 0x127B018 Offset: 0x1277018 VA: 0x127B018
	public void .ctor() { }

	// RVA: 0x127B020 Offset: 0x1277020 VA: 0x127B020
	private bool CanConvert(Type type) { }

	// RVA: 0x127B104 Offset: 0x1277104 VA: 0x127B104 Slot: 4
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType) { }

	// RVA: 0x127B1B4 Offset: 0x12771B4 VA: 0x127B1B4 Slot: 5
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType) { }

	// RVA: 0x127B22C Offset: 0x127722C VA: 0x127B22C Slot: 6
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value) { }

	// RVA: 0x127B3C8 Offset: 0x12773C8 VA: 0x127B3C8 Slot: 7
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType) { }
}


// Namespace: System.Text.RegularExpressions
public class Capture // TypeDefIndex: 3346
{
	// Fields
	[CompilerGenerated]
	private int <Index>k__BackingField; // 0x10
	[CompilerGenerated]
	private int <Length>k__BackingField; // 0x14
	[CompilerGenerated]
	private string <Text>k__BackingField; // 0x18

	// Properties
	public int Length { get; }
	public string Value { get; }

	// Methods

	// RVA: 0x127B5AC Offset: 0x12775AC VA: 0x127B5AC
	internal void .ctor(string text, int index, int length) { }

	[CompilerGenerated]
	// RVA: 0x127B5E8 Offset: 0x12775E8 VA: 0x127B5E8
	public int get_Length() { }

	// RVA: 0x127B5F0 Offset: 0x12775F0 VA: 0x127B5F0
	public string get_Value() { }

	// RVA: 0x127B614 Offset: 0x1277614 VA: 0x127B614 Slot: 3
	public override string ToString() { }

	// RVA: 0x127B618 Offset: 0x1277618 VA: 0x127B618
	internal ReadOnlySpan<char> GetLeftSubstring() { }

	// RVA: 0x127B6A0 Offset: 0x12776A0 VA: 0x127B6A0
	internal ReadOnlySpan<char> GetRightSubstring() { }

	// RVA: 0x127B730 Offset: 0x1277730 VA: 0x127B730
	internal void .ctor() { }
}


// Namespace: 
[Serializable]
private sealed class CaptureCollection.Enumerator : IEnumerator<Capture>, IDisposable, IEnumerator // TypeDefIndex: 3347
{
	// Fields
	private readonly CaptureCollection _collection; // 0x10
	private int _index; // 0x18

	// Properties
	public Capture Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	// RVA: 0x127B8A4 Offset: 0x12778A4 VA: 0x127B8A4
	internal void .ctor(CaptureCollection collection) { }

	// RVA: 0x127C3EC Offset: 0x12783EC VA: 0x127C3EC Slot: 6
	public bool MoveNext() { }

	// RVA: 0x127C42C Offset: 0x127842C VA: 0x127C42C Slot: 4
	public Capture get_Current() { }

	// RVA: 0x127C4A0 Offset: 0x12784A0 VA: 0x127C4A0 Slot: 7
	private object System.Collections.IEnumerator.get_Current() { }

	// RVA: 0x127C4A4 Offset: 0x12784A4 VA: 0x127C4A4 Slot: 8
	private void System.Collections.IEnumerator.Reset() { }

	// RVA: 0x127C4B0 Offset: 0x12784B0 VA: 0x127C4B0 Slot: 5
	private void System.IDisposable.Dispose() { }
}


// Namespace: System.Text.RegularExpressions
[DefaultMember("Item")]
public class CaptureCollection : IList<Capture>, ICollection<Capture>, IEnumerable<Capture>, IEnumerable, IReadOnlyList<Capture>, IReadOnlyCollection<Capture>, IList, ICollection // TypeDefIndex: 3348
{
	// Fields
	private readonly Group _group; // 0x10
	private readonly int _capcount; // 0x18
	private Capture[] _captures; // 0x20

	// Properties
	public bool IsReadOnly { get; }
	public int Count { get; }
	public Capture Item { get; }
	public bool IsSynchronized { get; }
	public object SyncRoot { get; }
	private Capture System.Collections.Generic.IList<System.Text.RegularExpressions.Capture>.Item { get; set; }
	private bool System.Collections.IList.IsFixedSize { get; }
	private object System.Collections.IList.Item { get; set; }

	// Methods

	// RVA: 0x127B768 Offset: 0x1277768 VA: 0x127B768 Slot: 25
	public bool get_IsReadOnly() { }

	// RVA: 0x127B770 Offset: 0x1277770 VA: 0x127B770 Slot: 32
	public int get_Count() { }

	// RVA: 0x127B778 Offset: 0x1277778 VA: 0x127B778 Slot: 18
	public Capture get_Item(int i) { }

	// RVA: 0x127B840 Offset: 0x1277840 VA: 0x127B840 Slot: 17
	public IEnumerator GetEnumerator() { }

	// RVA: 0x127B8D4 Offset: 0x12778D4 VA: 0x127B8D4 Slot: 16
	private IEnumerator<Capture> System.Collections.Generic.IEnumerable<System.Text.RegularExpressions.Capture>.GetEnumerator() { }

	// RVA: 0x127B77C Offset: 0x127777C VA: 0x127B77C
	private Capture GetCapture(int i) { }

	// RVA: 0x127B938 Offset: 0x1277938 VA: 0x127B938
	internal void ForceInitialized() { }

	// RVA: 0x127BA9C Offset: 0x1277A9C VA: 0x127BA9C Slot: 34
	public bool get_IsSynchronized() { }

	// RVA: 0x127BAA4 Offset: 0x1277AA4 VA: 0x127BAA4 Slot: 33
	public object get_SyncRoot() { }

	// RVA: 0x127BAAC Offset: 0x1277AAC VA: 0x127BAAC Slot: 31
	public void CopyTo(Array array, int arrayIndex) { }

	// RVA: 0x127BB64 Offset: 0x1277B64 VA: 0x127BB64 Slot: 14
	public void CopyTo(Capture[] array, int arrayIndex) { }

	// RVA: 0x127BCC8 Offset: 0x1277CC8 VA: 0x127BCC8 Slot: 6
	private int System.Collections.Generic.IList<System.Text.RegularExpressions.Capture>.IndexOf(Capture item) { }

	// RVA: 0x127BD78 Offset: 0x1277D78 VA: 0x127BD78 Slot: 7
	private void System.Collections.Generic.IList<System.Text.RegularExpressions.Capture>.Insert(int index, Capture item) { }

	// RVA: 0x127BDC4 Offset: 0x1277DC4 VA: 0x127BDC4 Slot: 8
	private void System.Collections.Generic.IList<System.Text.RegularExpressions.Capture>.RemoveAt(int index) { }

	// RVA: 0x127BE10 Offset: 0x1277E10 VA: 0x127BE10 Slot: 4
	private Capture System.Collections.Generic.IList<System.Text.RegularExpressions.Capture>.get_Item(int index) { }

	// RVA: 0x127BE14 Offset: 0x1277E14 VA: 0x127BE14 Slot: 5
	private void System.Collections.Generic.IList<System.Text.RegularExpressions.Capture>.set_Item(int index, Capture value) { }

	// RVA: 0x127BE60 Offset: 0x1277E60 VA: 0x127BE60 Slot: 11
	private void System.Collections.Generic.ICollection<System.Text.RegularExpressions.Capture>.Add(Capture item) { }

	// RVA: 0x127BEAC Offset: 0x1277EAC VA: 0x127BEAC Slot: 12
	private void System.Collections.Generic.ICollection<System.Text.RegularExpressions.Capture>.Clear() { }

	// RVA: 0x127BEF8 Offset: 0x1277EF8 VA: 0x127BEF8 Slot: 13
	private bool System.Collections.Generic.ICollection<System.Text.RegularExpressions.Capture>.Contains(Capture item) { }

	// RVA: 0x127BFAC Offset: 0x1277FAC VA: 0x127BFAC Slot: 15
	private bool System.Collections.Generic.ICollection<System.Text.RegularExpressions.Capture>.Remove(Capture item) { }

	// RVA: 0x127BFF8 Offset: 0x1277FF8 VA: 0x127BFF8 Slot: 22
	private int System.Collections.IList.Add(object value) { }

	// RVA: 0x127C044 Offset: 0x1278044 VA: 0x127C044 Slot: 24
	private void System.Collections.IList.Clear() { }

	// RVA: 0x127C090 Offset: 0x1278090 VA: 0x127C090 Slot: 23
	private bool System.Collections.IList.Contains(object value) { }

	// RVA: 0x127C184 Offset: 0x1278184 VA: 0x127C184 Slot: 27
	private int System.Collections.IList.IndexOf(object value) { }

	// RVA: 0x127C278 Offset: 0x1278278 VA: 0x127C278 Slot: 28
	private void System.Collections.IList.Insert(int index, object value) { }

	// RVA: 0x127C2C4 Offset: 0x12782C4 VA: 0x127C2C4 Slot: 26
	private bool System.Collections.IList.get_IsFixedSize() { }

	// RVA: 0x127C2CC Offset: 0x12782CC VA: 0x127C2CC Slot: 29
	private void System.Collections.IList.Remove(object value) { }

	// RVA: 0x127C318 Offset: 0x1278318 VA: 0x127C318 Slot: 30
	private void System.Collections.IList.RemoveAt(int index) { }

	// RVA: 0x127C364 Offset: 0x1278364 VA: 0x127C364 Slot: 20
	private object System.Collections.IList.get_Item(int index) { }

	// RVA: 0x127C368 Offset: 0x1278368 VA: 0x127C368 Slot: 21
	private void System.Collections.IList.set_Item(int index, object value) { }

	// RVA: 0x127C3B4 Offset: 0x12783B4 VA: 0x127C3B4
	internal void .ctor() { }
}


// Namespace: System.Text.RegularExpressions
[Serializable]
public class Group : Capture // TypeDefIndex: 3349
{
	// Fields
	internal static readonly Group s_emptyGroup; // 0x0
	internal readonly int[] _caps; // 0x20
	internal int _capcount; // 0x28
	internal CaptureCollection _capcoll; // 0x30
	[CompilerGenerated]
	private readonly string <Name>k__BackingField; // 0x38

	// Properties
	public bool Success { get; }

	// Methods

	// RVA: 0x127C4B4 Offset: 0x12784B4 VA: 0x127C4B4
	internal void .ctor(string text, int[] caps, int capcount, string name) { }

	// RVA: 0x127C550 Offset: 0x1278550 VA: 0x127C550
	public bool get_Success() { }

	// RVA: 0x127C560 Offset: 0x1278560 VA: 0x127C560
	private static void .cctor() { }

	// RVA: 0x127C638 Offset: 0x1278638 VA: 0x127C638
	internal void .ctor() { }
}


// Namespace: 
private sealed class GroupCollection.Enumerator : IEnumerator<Group>, IDisposable, IEnumerator // TypeDefIndex: 3350
{
	// Fields
	private readonly GroupCollection _collection; // 0x10
	private int _index; // 0x18

	// Properties
	public Group Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	// RVA: 0x127CA04 Offset: 0x1278A04 VA: 0x127CA04
	internal void .ctor(GroupCollection collection) { }

	// RVA: 0x127D704 Offset: 0x1279704 VA: 0x127D704 Slot: 6
	public bool MoveNext() { }

	// RVA: 0x127D748 Offset: 0x1279748 VA: 0x127D748 Slot: 4
	public Group get_Current() { }

	// RVA: 0x127D7D4 Offset: 0x12797D4 VA: 0x127D7D4 Slot: 7
	private object System.Collections.IEnumerator.get_Current() { }

	// RVA: 0x127D7D8 Offset: 0x12797D8 VA: 0x127D7D8 Slot: 8
	private void System.Collections.IEnumerator.Reset() { }

	// RVA: 0x127D7E4 Offset: 0x12797E4 VA: 0x127D7E4 Slot: 5
	private void System.IDisposable.Dispose() { }
}


// Namespace: System.Text.RegularExpressions
[DefaultMember("Item")]
[Serializable]
public class GroupCollection : IList<Group>, ICollection<Group>, IEnumerable<Group>, IEnumerable, IReadOnlyList<Group>, IReadOnlyCollection<Group>, IList, ICollection // TypeDefIndex: 3351
{
	// Fields
	private readonly Match _match; // 0x10
	private readonly Hashtable _captureMap; // 0x18
	private Group[] _groups; // 0x20

	// Properties
	public bool IsReadOnly { get; }
	public int Count { get; }
	public Group Item { get; }
	public Group Item { get; }
	public bool IsSynchronized { get; }
	public object SyncRoot { get; }
	private Group System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.Item { get; set; }
	private bool System.Collections.IList.IsFixedSize { get; }
	private object System.Collections.IList.Item { get; set; }

	// Methods

	// RVA: 0x127C670 Offset: 0x1278670 VA: 0x127C670
	internal void .ctor(Match match, Hashtable caps) { }

	// RVA: 0x127C69C Offset: 0x127869C VA: 0x127C69C Slot: 25
	public bool get_IsReadOnly() { }

	// RVA: 0x127C6A4 Offset: 0x12786A4 VA: 0x127C6A4 Slot: 32
	public int get_Count() { }

	// RVA: 0x127C6C8 Offset: 0x12786C8 VA: 0x127C6C8 Slot: 18
	public Group get_Item(int groupnum) { }

	// RVA: 0x127C7D0 Offset: 0x12787D0 VA: 0x127C7D0
	public Group get_Item(string groupname) { }

	// RVA: 0x127C9A0 Offset: 0x12789A0 VA: 0x127C9A0 Slot: 17
	public IEnumerator GetEnumerator() { }

	// RVA: 0x127CA34 Offset: 0x1278A34 VA: 0x127CA34 Slot: 16
	private IEnumerator<Group> System.Collections.Generic.IEnumerable<System.Text.RegularExpressions.Group>.GetEnumerator() { }

	// RVA: 0x127C6CC Offset: 0x12786CC VA: 0x127C6CC
	private Group GetGroup(int groupnum) { }

	// RVA: 0x127CA98 Offset: 0x1278A98 VA: 0x127CA98
	private Group GetGroupImpl(int groupnum) { }

	// RVA: 0x127CD94 Offset: 0x1278D94 VA: 0x127CD94 Slot: 34
	public bool get_IsSynchronized() { }

	// RVA: 0x127CD9C Offset: 0x1278D9C VA: 0x127CD9C Slot: 33
	public object get_SyncRoot() { }

	// RVA: 0x127CDA4 Offset: 0x1278DA4 VA: 0x127CDA4 Slot: 31
	public void CopyTo(Array array, int arrayIndex) { }

	// RVA: 0x127CE60 Offset: 0x1278E60 VA: 0x127CE60 Slot: 14
	public void CopyTo(Group[] array, int arrayIndex) { }

	// RVA: 0x127CFD8 Offset: 0x1278FD8 VA: 0x127CFD8 Slot: 6
	private int System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.IndexOf(Group item) { }

	// RVA: 0x127D090 Offset: 0x1279090 VA: 0x127D090 Slot: 7
	private void System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.Insert(int index, Group item) { }

	// RVA: 0x127D0DC Offset: 0x12790DC VA: 0x127D0DC Slot: 8
	private void System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.RemoveAt(int index) { }

	// RVA: 0x127D128 Offset: 0x1279128 VA: 0x127D128 Slot: 4
	private Group System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.get_Item(int index) { }

	// RVA: 0x127D12C Offset: 0x127912C VA: 0x127D12C Slot: 5
	private void System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.set_Item(int index, Group value) { }

	// RVA: 0x127D178 Offset: 0x1279178 VA: 0x127D178 Slot: 11
	private void System.Collections.Generic.ICollection<System.Text.RegularExpressions.Group>.Add(Group item) { }

	// RVA: 0x127D1C4 Offset: 0x12791C4 VA: 0x127D1C4 Slot: 12
	private void System.Collections.Generic.ICollection<System.Text.RegularExpressions.Group>.Clear() { }

	// RVA: 0x127D210 Offset: 0x1279210 VA: 0x127D210 Slot: 13
	private bool System.Collections.Generic.ICollection<System.Text.RegularExpressions.Group>.Contains(Group item) { }

	// RVA: 0x127D2C4 Offset: 0x12792C4 VA: 0x127D2C4 Slot: 15
	private bool System.Collections.Generic.ICollection<System.Text.RegularExpressions.Group>.Remove(Group item) { }

	// RVA: 0x127D310 Offset: 0x1279310 VA: 0x127D310 Slot: 22
	private int System.Collections.IList.Add(object value) { }

	// RVA: 0x127D35C Offset: 0x127935C VA: 0x127D35C Slot: 24
	private void System.Collections.IList.Clear() { }

	// RVA: 0x127D3A8 Offset: 0x12793A8 VA: 0x127D3A8 Slot: 23
	private bool System.Collections.IList.Contains(object value) { }

	// RVA: 0x127D49C Offset: 0x127949C VA: 0x127D49C Slot: 27
	private int System.Collections.IList.IndexOf(object value) { }

	// RVA: 0x127D590 Offset: 0x1279590 VA: 0x127D590 Slot: 28
	private void System.Collections.IList.Insert(int index, object value) { }

	// RVA: 0x127D5DC Offset: 0x12795DC VA: 0x127D5DC Slot: 26
	private bool System.Collections.IList.get_IsFixedSize() { }

	// RVA: 0x127D5E4 Offset: 0x12795E4 VA: 0x127D5E4 Slot: 29
	private void System.Collections.IList.Remove(object value) { }

	// RVA: 0x127D630 Offset: 0x1279630 VA: 0x127D630 Slot: 30
	private void System.Collections.IList.RemoveAt(int index) { }

	// RVA: 0x127D67C Offset: 0x127967C VA: 0x127D67C Slot: 20
	private object System.Collections.IList.get_Item(int index) { }

	// RVA: 0x127D680 Offset: 0x1279680 VA: 0x127D680 Slot: 21
	private void System.Collections.IList.set_Item(int index, object value) { }

	// RVA: 0x127D6CC Offset: 0x12796CC VA: 0x127D6CC
	internal void .ctor() { }
}


// Namespace: System.Text.RegularExpressions
[Serializable]
public class Match : Group // TypeDefIndex: 3352
{
	// Fields
	internal GroupCollection _groupcoll; // 0x40
	internal Regex _regex; // 0x48
	internal int _textbeg; // 0x50
	internal int _textpos; // 0x54
	internal int _textend; // 0x58
	internal int _textstart; // 0x5C
	internal int[][] _matches; // 0x60
	internal int[] _matchcount; // 0x68
	internal bool _balancing; // 0x70
	[CompilerGenerated]
	private static readonly Match <Empty>k__BackingField; // 0x0

	// Properties
	public virtual GroupCollection Groups { get; }

	// Methods

	// RVA: 0x127D7E8 Offset: 0x12797E8 VA: 0x127D7E8
	internal void .ctor(Regex regex, int capcount, string text, int begpos, int len, int startpos) { }

	// RVA: 0x127D930 Offset: 0x1279930 VA: 0x127D930 Slot: 4
	internal virtual void Reset(Regex regex, string text, int textbeg, int textend, int textstart) { }

	// RVA: 0x127D994 Offset: 0x1279994 VA: 0x127D994 Slot: 5
	public virtual GroupCollection get_Groups() { }

	// RVA: 0x127D9FC Offset: 0x12799FC VA: 0x127D9FC
	public Match NextMatch() { }

	// RVA: 0x127DCB0 Offset: 0x1279CB0 VA: 0x127DCB0 Slot: 6
	internal virtual ReadOnlySpan<char> GroupToStringImpl(int groupnum) { }

	// RVA: 0x127DE48 Offset: 0x1279E48 VA: 0x127DE48
	internal ReadOnlySpan<char> LastGroupToStringImpl() { }

	// RVA: 0x127DE70 Offset: 0x1279E70 VA: 0x127DE70 Slot: 7
	internal virtual void AddMatch(int cap, int start, int len) { }

	// RVA: 0x127E050 Offset: 0x127A050 VA: 0x127E050 Slot: 8
	internal virtual void BalanceMatch(int cap) { }

	// RVA: 0x127E128 Offset: 0x127A128 VA: 0x127E128 Slot: 9
	internal virtual void RemoveMatch(int cap) { }

	// RVA: 0x127E160 Offset: 0x127A160 VA: 0x127E160 Slot: 10
	internal virtual bool IsMatched(int cap) { }

	// RVA: 0x127E1F0 Offset: 0x127A1F0 VA: 0x127E1F0 Slot: 11
	internal virtual int MatchIndex(int cap) { }

	// RVA: 0x127E27C Offset: 0x127A27C VA: 0x127E27C Slot: 12
	internal virtual int MatchLength(int cap) { }

	// RVA: 0x127E308 Offset: 0x127A308 VA: 0x127E308 Slot: 13
	internal virtual void Tidy(int textpos) { }

	// RVA: 0x127E478 Offset: 0x127A478 VA: 0x127E478
	private static void .cctor() { }

	// RVA: 0x127E508 Offset: 0x127A508 VA: 0x127E508
	internal void .ctor() { }
}


// Namespace: System.Text.RegularExpressions
internal class MatchSparse : Match // TypeDefIndex: 3353
{
	// Fields
	internal readonly Hashtable _caps; // 0x78

	// Properties
	public override GroupCollection Groups { get; }

	// Methods

	// RVA: 0x127E540 Offset: 0x127A540 VA: 0x127E540
	internal void .ctor(Regex regex, Hashtable caps, int capcount, string text, int begpos, int len, int startpos) { }

	// RVA: 0x127E5F0 Offset: 0x127A5F0 VA: 0x127E5F0 Slot: 5
	public override GroupCollection get_Groups() { }
}


// Namespace: 
[Serializable]
private sealed class MatchCollection.Enumerator : IEnumerator<Match>, IDisposable, IEnumerator // TypeDefIndex: 3354
{
	// Fields
	private readonly MatchCollection _collection; // 0x10
	private int _index; // 0x18

	// Properties
	public Match Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	// RVA: 0x127E9B0 Offset: 0x127A9B0 VA: 0x127E9B0
	internal void .ctor(MatchCollection collection) { }

	// RVA: 0x127F248 Offset: 0x127B248 VA: 0x127F248 Slot: 6
	public bool MoveNext() { }

	// RVA: 0x127F298 Offset: 0x127B298 VA: 0x127F298 Slot: 4
	public Match get_Current() { }

	// RVA: 0x127F300 Offset: 0x127B300 VA: 0x127F300 Slot: 7
	private object System.Collections.IEnumerator.get_Current() { }

	// RVA: 0x127F304 Offset: 0x127B304 VA: 0x127F304 Slot: 8
	private void System.Collections.IEnumerator.Reset() { }

	// RVA: 0x127F310 Offset: 0x127B310 VA: 0x127F310 Slot: 5
	private void System.IDisposable.Dispose() { }
}


// Namespace: System.Text.RegularExpressions
[DefaultMember("Item")]
[Serializable]
public class MatchCollection : IList<Match>, ICollection<Match>, IEnumerable<Match>, IEnumerable, IReadOnlyList<Match>, IReadOnlyCollection<Match>, IList, ICollection // TypeDefIndex: 3355
{
	// Fields
	private readonly Regex _regex; // 0x10
	private readonly List<Match> _matches; // 0x18
	private bool _done; // 0x20
	private readonly string _input; // 0x28
	private readonly int _beginning; // 0x30
	private readonly int _length; // 0x34
	private int _startat; // 0x38
	private int _prevlen; // 0x3C

	// Properties
	public bool IsReadOnly { get; }
	public int Count { get; }
	public virtual Match Item { get; }
	public bool IsSynchronized { get; }
	public object SyncRoot { get; }
	private Match System.Collections.Generic.IList<System.Text.RegularExpressions.Match>.Item { get; set; }
	private bool System.Collections.IList.IsFixedSize { get; }
	private object System.Collections.IList.Item { get; set; }

	// Methods

	// RVA: 0x127E65C Offset: 0x127A65C VA: 0x127E65C
	internal void .ctor(Regex regex, string input, int beginning, int length, int startat) { }

	// RVA: 0x127E784 Offset: 0x127A784 VA: 0x127E784 Slot: 25
	public bool get_IsReadOnly() { }

	// RVA: 0x127E78C Offset: 0x127A78C VA: 0x127E78C Slot: 32
	public int get_Count() { }

	// RVA: 0x127E7D4 Offset: 0x127A7D4 VA: 0x127E7D4 Slot: 35
	public virtual Match get_Item(int i) { }

	// RVA: 0x127E94C Offset: 0x127A94C VA: 0x127E94C Slot: 17
	public IEnumerator GetEnumerator() { }

	// RVA: 0x127E9E0 Offset: 0x127A9E0 VA: 0x127E9E0 Slot: 16
	private IEnumerator<Match> System.Collections.Generic.IEnumerable<System.Text.RegularExpressions.Match>.GetEnumerator() { }

	// RVA: 0x127E834 Offset: 0x127A834 VA: 0x127E834
	private Match GetMatch(int i) { }

	// RVA: 0x127E7C0 Offset: 0x127A7C0 VA: 0x127E7C0
	private void EnsureInitialized() { }

	// RVA: 0x127EA44 Offset: 0x127AA44 VA: 0x127EA44 Slot: 34
	public bool get_IsSynchronized() { }

	// RVA: 0x127EA4C Offset: 0x127AA4C VA: 0x127EA4C Slot: 33
	public object get_SyncRoot() { }

	// RVA: 0x127EA50 Offset: 0x127AA50 VA: 0x127EA50 Slot: 31
	public void CopyTo(Array array, int arrayIndex) { }

	// RVA: 0x127EB1C Offset: 0x127AB1C VA: 0x127EB1C Slot: 14
	public void CopyTo(Match[] array, int arrayIndex) { }

	// RVA: 0x127EB98 Offset: 0x127AB98 VA: 0x127EB98 Slot: 6
	private int System.Collections.Generic.IList<System.Text.RegularExpressions.Match>.IndexOf(Match item) { }

	// RVA: 0x127EC04 Offset: 0x127AC04 VA: 0x127EC04 Slot: 7
	private void System.Collections.Generic.IList<System.Text.RegularExpressions.Match>.Insert(int index, Match item) { }

	// RVA: 0x127EC50 Offset: 0x127AC50 VA: 0x127EC50 Slot: 8
	private void System.Collections.Generic.IList<System.Text.RegularExpressions.Match>.RemoveAt(int index) { }

	// RVA: 0x127EC9C Offset: 0x127AC9C VA: 0x127EC9C Slot: 4
	private Match System.Collections.Generic.IList<System.Text.RegularExpressions.Match>.get_Item(int index) { }

	// RVA: 0x127ECAC Offset: 0x127ACAC VA: 0x127ECAC Slot: 5
	private void System.Collections.Generic.IList<System.Text.RegularExpressions.Match>.set_Item(int index, Match value) { }

	// RVA: 0x127ECF8 Offset: 0x127ACF8 VA: 0x127ECF8 Slot: 11
	private void System.Collections.Generic.ICollection<System.Text.RegularExpressions.Match>.Add(Match item) { }

	// RVA: 0x127ED44 Offset: 0x127AD44 VA: 0x127ED44 Slot: 12
	private void System.Collections.Generic.ICollection<System.Text.RegularExpressions.Match>.Clear() { }

	// RVA: 0x127ED90 Offset: 0x127AD90 VA: 0x127ED90 Slot: 13
	private bool System.Collections.Generic.ICollection<System.Text.RegularExpressions.Match>.Contains(Match item) { }

	// RVA: 0x127EDFC Offset: 0x127ADFC VA: 0x127EDFC Slot: 15
	private bool System.Collections.Generic.ICollection<System.Text.RegularExpressions.Match>.Remove(Match item) { }

	// RVA: 0x127EE48 Offset: 0x127AE48 VA: 0x127EE48 Slot: 22
	private int System.Collections.IList.Add(object value) { }

	// RVA: 0x127EE94 Offset: 0x127AE94 VA: 0x127EE94 Slot: 24
	private void System.Collections.IList.Clear() { }

	// RVA: 0x127EEE0 Offset: 0x127AEE0 VA: 0x127EEE0 Slot: 23
	private bool System.Collections.IList.Contains(object value) { }

	// RVA: 0x127EFD4 Offset: 0x127AFD4 VA: 0x127EFD4 Slot: 27
	private int System.Collections.IList.IndexOf(object value) { }

	// RVA: 0x127F0C8 Offset: 0x127B0C8 VA: 0x127F0C8 Slot: 28
	private void System.Collections.IList.Insert(int index, object value) { }

	// RVA: 0x127F114 Offset: 0x127B114 VA: 0x127F114 Slot: 26
	private bool System.Collections.IList.get_IsFixedSize() { }

	// RVA: 0x127F11C Offset: 0x127B11C VA: 0x127F11C Slot: 29
	private void System.Collections.IList.Remove(object value) { }

	// RVA: 0x127F168 Offset: 0x127B168 VA: 0x127F168 Slot: 30
	private void System.Collections.IList.RemoveAt(int index) { }

	// RVA: 0x127F1B4 Offset: 0x127B1B4 VA: 0x127F1B4 Slot: 20
	private object System.Collections.IList.get_Item(int index) { }

	// RVA: 0x127F1C4 Offset: 0x127B1C4 VA: 0x127F1C4 Slot: 21
	private void System.Collections.IList.set_Item(int index, object value) { }

	// RVA: 0x127F210 Offset: 0x127B210 VA: 0x127F210
	internal void .ctor() { }
}


// Namespace: System.Text.RegularExpressions
internal sealed class ExclusiveReference // TypeDefIndex: 3356
{
	// Fields
	private RegexRunner _ref; // 0x10
	private RegexRunner _obj; // 0x18
	private int _locked; // 0x20

	// Methods

	// RVA: 0x127F314 Offset: 0x127B314 VA: 0x127F314
	public RegexRunner Get() { }

	// RVA: 0x127F36C Offset: 0x127B36C VA: 0x127F36C
	public void Release(RegexRunner obj) { }

	// RVA: 0x127F424 Offset: 0x127B424 VA: 0x127F424
	public void .ctor() { }
}


// Namespace: 
internal struct Regex.CachedCodeEntryKey : IEquatable<Regex.CachedCodeEntryKey> // TypeDefIndex: 3357
{
	// Fields
	private readonly RegexOptions _options; // 0x0
	private readonly string _cultureKey; // 0x8
	private readonly string _pattern; // 0x10

	// Methods

	// RVA: 0x1281B28 Offset: 0x127DB28 VA: 0x1281B28
	public void .ctor(RegexOptions options, string cultureKey, string pattern) { }

	// RVA: 0x1281C4C Offset: 0x127DC4C VA: 0x1281C4C Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x1281CDC Offset: 0x127DCDC VA: 0x1281CDC Slot: 4
	public bool Equals(Regex.CachedCodeEntryKey other) { }

	// RVA: 0x127F524 Offset: 0x127B524 VA: 0x127F524
	public static bool op_Equality(Regex.CachedCodeEntryKey left, Regex.CachedCodeEntryKey right) { }

	// RVA: 0x1281D44 Offset: 0x127DD44 VA: 0x1281D44 Slot: 2
	public override int GetHashCode() { }
}


// Namespace: 
internal sealed class Regex.CachedCodeEntry // TypeDefIndex: 3358
{
	// Fields
	public Regex.CachedCodeEntry Next; // 0x10
	public Regex.CachedCodeEntry Previous; // 0x18
	public readonly Regex.CachedCodeEntryKey Key; // 0x20
	public RegexCode Code; // 0x38
	public readonly Hashtable Caps; // 0x40
	public readonly Hashtable Capnames; // 0x48
	public readonly string[] Capslist; // 0x50
	public readonly int Capsize; // 0x58
	public readonly ExclusiveReference Runnerref; // 0x60
	public readonly WeakReference<RegexReplacement> ReplRef; // 0x68

	// Methods

	// RVA: 0x127FBC4 Offset: 0x127BBC4 VA: 0x127FBC4
	public void .ctor(Regex.CachedCodeEntryKey key, Hashtable capnames, string[] capslist, RegexCode code, Hashtable caps, int capsize, ExclusiveReference runner, WeakReference<RegexReplacement> replref) { }
}


// Namespace: System.Text.RegularExpressions
public class Regex : ISerializable // TypeDefIndex: 3359
{
	// Fields
	private const int CacheDictionarySwitchLimit = 10;
	private static int s_cacheSize; // 0x0
	private static readonly Dictionary<Regex.CachedCodeEntryKey, Regex.CachedCodeEntry> s_cache; // 0x8
	private static int s_cacheCount; // 0x10
	private static Regex.CachedCodeEntry s_cacheFirst; // 0x18
	private static Regex.CachedCodeEntry s_cacheLast; // 0x20
	private static readonly TimeSpan s_maximumMatchTimeout; // 0x28
	private const string DefaultMatchTimeout_ConfigKeyName = "REGEX_DEFAULT_MATCH_TIMEOUT";
	internal static readonly TimeSpan s_defaultMatchTimeout; // 0x30
	public static readonly TimeSpan InfiniteMatchTimeout; // 0x38
	protected internal TimeSpan internalMatchTimeout; // 0x10
	internal const int MaxOptionShift = 10;
	protected internal string pattern; // 0x18
	protected internal RegexOptions roptions; // 0x20
	protected internal RegexRunnerFactory factory; // 0x28
	protected internal Hashtable caps; // 0x30
	protected internal Hashtable capnames; // 0x38
	protected internal string[] capslist; // 0x40
	protected internal int capsize; // 0x48
	internal ExclusiveReference _runnerref; // 0x50
	internal WeakReference<RegexReplacement> _replref; // 0x58
	internal RegexCode _code; // 0x60
	internal bool _refsInitialized; // 0x68

	// Properties
	public RegexOptions Options { get; }
	public bool RightToLeft { get; }

	// Methods

	// RVA: 0x127F42C Offset: 0x127B42C VA: 0x127F42C
	private Regex.CachedCodeEntry GetCachedCode(Regex.CachedCodeEntryKey key, bool isToAdd) { }

	// RVA: 0x127F554 Offset: 0x127B554 VA: 0x127F554
	private Regex.CachedCodeEntry GetCachedCodeEntryInternal(Regex.CachedCodeEntryKey key, bool isToAdd) { }

	// RVA: 0x127FC3C Offset: 0x127BC3C VA: 0x127FC3C
	private void FillCacheDictionary() { }

	// RVA: 0x127FD40 Offset: 0x127BD40 VA: 0x127FD40
	private static bool TryGetCacheValue(Regex.CachedCodeEntryKey key, out Regex.CachedCodeEntry entry) { }

	// RVA: 0x127FE5C Offset: 0x127BE5C VA: 0x127FE5C
	private static bool TryGetCacheValueSmall(Regex.CachedCodeEntryKey key, out Regex.CachedCodeEntry entry) { }

	// RVA: 0x127FA00 Offset: 0x127BA00 VA: 0x127FA00
	private static Regex.CachedCodeEntry LookupCachedAndPromote(Regex.CachedCodeEntryKey key) { }

	// RVA: 0x127FF3C Offset: 0x127BF3C VA: 0x127FF3C
	public static bool IsMatch(string input, string pattern) { }

	// RVA: 0x127FFB0 Offset: 0x127BFB0 VA: 0x127FFB0
	public static bool IsMatch(string input, string pattern, RegexOptions options, TimeSpan matchTimeout) { }

	// RVA: 0x12803B0 Offset: 0x127C3B0 VA: 0x12803B0
	public bool IsMatch(string input) { }

	// RVA: 0x1280428 Offset: 0x127C428 VA: 0x1280428
	public bool IsMatch(string input, int startat) { }

	// RVA: 0x12804A4 Offset: 0x127C4A4 VA: 0x12804A4
	public Match Match(string input) { }

	// RVA: 0x1280510 Offset: 0x127C510 VA: 0x1280510
	public Match Match(string input, int startat) { }

	// RVA: 0x1280580 Offset: 0x127C580 VA: 0x1280580
	public MatchCollection Matches(string input, int startat) { }

	// RVA: 0x1280648 Offset: 0x127C648 VA: 0x1280648
	public static string Replace(string input, string pattern, string replacement) { }

	// RVA: 0x12806C4 Offset: 0x127C6C4 VA: 0x12806C4
	public static string Replace(string input, string pattern, string replacement, RegexOptions options, TimeSpan matchTimeout) { }

	// RVA: 0x1280758 Offset: 0x127C758 VA: 0x1280758
	public string Replace(string input, string replacement) { }

	// RVA: 0x12807C8 Offset: 0x127C7C8 VA: 0x12807C8
	public string Replace(string input, string replacement, int count, int startat) { }

	// RVA: 0x12808A0 Offset: 0x127C8A0 VA: 0x12808A0
	public static string Replace(string input, string pattern, MatchEvaluator evaluator) { }

	// RVA: 0x128091C Offset: 0x127C91C VA: 0x128091C
	public static string Replace(string input, string pattern, MatchEvaluator evaluator, RegexOptions options, TimeSpan matchTimeout) { }

	// RVA: 0x12809B0 Offset: 0x127C9B0 VA: 0x12809B0
	public string Replace(string input, MatchEvaluator evaluator) { }

	// RVA: 0x1280A20 Offset: 0x127CA20 VA: 0x1280A20
	public string Replace(string input, MatchEvaluator evaluator, int count, int startat) { }

	// RVA: 0x1280AF0 Offset: 0x127CAF0 VA: 0x1280AF0
	private static string Replace(MatchEvaluator evaluator, Regex regex, string input, int count, int startat) { }

	// RVA: 0x1280E78 Offset: 0x127CE78 VA: 0x1280E78
	public static string[] Split(string input, string pattern) { }

	// RVA: 0x1280EEC Offset: 0x127CEEC VA: 0x1280EEC
	public static string[] Split(string input, string pattern, RegexOptions options, TimeSpan matchTimeout) { }

	// RVA: 0x1280F78 Offset: 0x127CF78 VA: 0x1280F78
	public string[] Split(string input) { }

	// RVA: 0x1280FE8 Offset: 0x127CFE8 VA: 0x1280FE8
	public string[] Split(string input, int count, int startat) { }

	// RVA: 0x12810A8 Offset: 0x127D0A8 VA: 0x12810A8
	private static string[] Split(Regex regex, string input, int count, int startat) { }

	// RVA: 0x12814D8 Offset: 0x127D4D8 VA: 0x12814D8
	private static void .cctor() { }

	// RVA: 0x1281838 Offset: 0x127D838 VA: 0x1281838
	protected internal static void ValidateMatchTimeout(TimeSpan matchTimeout) { }

	// RVA: 0x1281608 Offset: 0x127D608 VA: 0x1281608
	private static TimeSpan InitDefaultMatchTimeout() { }

	// RVA: 0x1281990 Offset: 0x127D990 VA: 0x1281990
	protected void .ctor() { }

	// RVA: 0x12819FC Offset: 0x127D9FC VA: 0x12819FC
	public void .ctor(string pattern) { }

	// RVA: 0x1281A74 Offset: 0x127DA74 VA: 0x1281A74
	public void .ctor(string pattern, RegexOptions options) { }

	// RVA: 0x1281AF0 Offset: 0x127DAF0 VA: 0x1281AF0 Slot: 4
	private void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo si, StreamingContext context) { }

	// RVA: 0x128003C Offset: 0x127C03C VA: 0x128003C
	private void .ctor(string pattern, RegexOptions options, TimeSpan matchTimeout, bool addToCache) { }

	// RVA: 0x1281C30 Offset: 0x127DC30 VA: 0x1281C30
	public RegexOptions get_Options() { }

	// RVA: 0x1280E6C Offset: 0x127CE6C VA: 0x1280E6C
	public bool get_RightToLeft() { }

	// RVA: 0x1281C38 Offset: 0x127DC38 VA: 0x1281C38 Slot: 3
	public override string ToString() { }

	// RVA: 0x127CC54 Offset: 0x1278C54 VA: 0x127CC54
	public string GroupNameFromNumber(int i) { }

	// RVA: 0x127C860 Offset: 0x1278860 VA: 0x127C860
	public int GroupNumberFromName(string name) { }

	// RVA: 0x1281B34 Offset: 0x127DB34 VA: 0x1281B34
	protected void InitializeReferences() { }

	// RVA: 0x127DA2C Offset: 0x1279A2C VA: 0x127DA2C
	internal Match Run(bool quick, int prevlen, string input, int beginning, int length, int startat) { }

	// RVA: 0x128041C Offset: 0x127C41C VA: 0x128041C
	protected internal bool UseOptionR() { }

	// RVA: 0x1281C40 Offset: 0x127DC40 VA: 0x1281C40
	internal bool UseOptionInvariant() { }
}


// Namespace: System.Text.RegularExpressions
public sealed class MatchEvaluator : MulticastDelegate // TypeDefIndex: 3360
{
	// Methods

	// RVA: 0x1281D9C Offset: 0x127DD9C VA: 0x1281D9C
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x1281E9C Offset: 0x127DE9C VA: 0x1281E9C Slot: 12
	public virtual string Invoke(Match match) { }
}


// Namespace: System.Text.RegularExpressions
internal sealed class RegexBoyerMoore // TypeDefIndex: 3361
{
	// Fields
	public readonly int[] Positive; // 0x10
	public readonly int[] NegativeASCII; // 0x18
	public readonly int[][] NegativeUnicode; // 0x20
	public readonly string Pattern; // 0x28
	public readonly int LowASCII; // 0x30
	public readonly int HighASCII; // 0x34
	public readonly bool RightToLeft; // 0x38
	public readonly bool CaseInsensitive; // 0x39
	private readonly CultureInfo _culture; // 0x40

	// Methods

	// RVA: 0x1281EB0 Offset: 0x127DEB0 VA: 0x1281EB0
	public void .ctor(string pattern, bool caseInsensitive, bool rightToLeft, CultureInfo culture) { }

	// RVA: 0x1282344 Offset: 0x127E344 VA: 0x1282344
	private bool MatchPattern(string text, int index) { }

	// RVA: 0x1282468 Offset: 0x127E468 VA: 0x1282468
	public bool IsMatch(string text, int index, int beglimit, int endlimit) { }

	// RVA: 0x12824D4 Offset: 0x127E4D4 VA: 0x12824D4
	public int Scan(string text, int index, int beglimit, int endlimit) { }
}


// Namespace: 
private struct RegexCharClass.LowerCaseMapping // TypeDefIndex: 3362
{
	// Fields
	public readonly char ChMin; // 0x0
	public readonly char ChMax; // 0x2
	public readonly int LcOp; // 0x4
	public readonly int Data; // 0x8

	// Methods

	// RVA: 0x1289ACC Offset: 0x1285ACC VA: 0x1289ACC
	internal void .ctor(char chMin, char chMax, int lcOp, int data) { }
}


// Namespace: 
private sealed class RegexCharClass.SingleRangeComparer : IComparer<RegexCharClass.SingleRange> // TypeDefIndex: 3363
{
	// Fields
	public static readonly RegexCharClass.SingleRangeComparer Instance; // 0x0

	// Methods

	// RVA: 0x1289ADC Offset: 0x1285ADC VA: 0x1289ADC
	private void .ctor() { }

	// RVA: 0x1289AE4 Offset: 0x1285AE4 VA: 0x1289AE4 Slot: 4
	public int Compare(RegexCharClass.SingleRange x, RegexCharClass.SingleRange y) { }

	// RVA: 0x1289B50 Offset: 0x1285B50 VA: 0x1289B50
	private static void .cctor() { }
}


// Namespace: 
private struct RegexCharClass.SingleRange // TypeDefIndex: 3364
{
	// Fields
	public readonly char First; // 0x0
	public readonly char Last; // 0x2

	// Methods

	// RVA: 0x1289BAC Offset: 0x1285BAC VA: 0x1289BAC
	internal void .ctor(char first, char last) { }
}


// Namespace: System.Text.RegularExpressions
internal sealed class RegexCharClass // TypeDefIndex: 3365
{
	// Fields
	private static readonly string s_internalRegexIgnoreCase; // 0x0
	private static readonly string s_space; // 0x8
	private static readonly string s_notSpace; // 0x10
	private static readonly string s_word; // 0x18
	private static readonly string s_notWord; // 0x20
	public static readonly string SpaceClass; // 0x28
	public static readonly string NotSpaceClass; // 0x30
	public static readonly string WordClass; // 0x38
	public static readonly string NotWordClass; // 0x40
	public static readonly string DigitClass; // 0x48
	public static readonly string NotDigitClass; // 0x50
	private static readonly Dictionary<string, string> s_definedCategories; // 0x58
	private static readonly string[][] s_propTable; // 0x60
	private static readonly RegexCharClass.LowerCaseMapping[] s_lcTable; // 0x68
	private List<RegexCharClass.SingleRange> _rangelist; // 0x10
	private StringBuilder _categories; // 0x18
	private bool _canonical; // 0x20
	private bool _negate; // 0x21
	private RegexCharClass _subtractor; // 0x28

	// Properties
	public bool CanMerge { get; }

	// Methods

	// RVA: 0x12827B8 Offset: 0x127E7B8 VA: 0x12827B8
	public void .ctor() { }

	// RVA: 0x1282870 Offset: 0x127E870 VA: 0x1282870
	private void .ctor(bool negate, List<RegexCharClass.SingleRange> ranges, StringBuilder categories, RegexCharClass subtraction) { }

	// RVA: 0x12828BC Offset: 0x127E8BC VA: 0x12828BC
	public bool get_CanMerge() { }

	// RVA: 0x12828DC Offset: 0x127E8DC VA: 0x12828DC
	public void AddChar(char c) { }

	// RVA: 0x12829C4 Offset: 0x127E9C4 VA: 0x12829C4
	public void AddCharClass(RegexCharClass cc) { }

	// RVA: 0x1282B94 Offset: 0x127EB94 VA: 0x1282B94
	private void AddSet(string set) { }

	// RVA: 0x12828E4 Offset: 0x127E8E4 VA: 0x12828E4
	public void AddRange(char first, char last) { }

	// RVA: 0x1282D48 Offset: 0x127ED48 VA: 0x1282D48
	public void AddCategoryFromName(string categoryName, bool invert, bool caseInsensitive, string pattern) { }

	// RVA: 0x1283244 Offset: 0x127F244 VA: 0x1283244
	private void AddCategory(string category) { }

	// RVA: 0x1283260 Offset: 0x127F260 VA: 0x1283260
	public void AddLowercase(CultureInfo culture) { }

	// RVA: 0x1283398 Offset: 0x127F398 VA: 0x1283398
	private void AddLowercaseRange(char chMin, char chMax, CultureInfo culture) { }

	// RVA: 0x12835C8 Offset: 0x127F5C8 VA: 0x12835C8
	public void AddWord(bool ecma, bool negate) { }

	// RVA: 0x12836C4 Offset: 0x127F6C4 VA: 0x12836C4
	public void AddSpace(bool ecma, bool negate) { }

	// RVA: 0x12837C0 Offset: 0x127F7C0 VA: 0x12837C0
	public void AddDigit(bool ecma, bool negate, string pattern) { }

	// RVA: 0x1283874 Offset: 0x127F874 VA: 0x1283874
	public static char SingletonChar(string set) { }

	// RVA: 0x128388C Offset: 0x127F88C VA: 0x128388C
	public static bool IsMergeable(string charClass) { }

	// RVA: 0x12839A8 Offset: 0x127F9A8 VA: 0x12839A8
	public static bool IsEmpty(string charClass) { }

	// RVA: 0x1283A68 Offset: 0x127FA68 VA: 0x1283A68
	public static bool IsSingleton(string set) { }

	// RVA: 0x1283B74 Offset: 0x127FB74 VA: 0x1283B74
	public static bool IsSingletonInverse(string set) { }

	// RVA: 0x1283950 Offset: 0x127F950 VA: 0x1283950
	private static bool IsSubtraction(string charClass) { }

	// RVA: 0x1283928 Offset: 0x127F928 VA: 0x1283928
	private static bool IsNegated(string set) { }

	// RVA: 0x1283C84 Offset: 0x127FC84 VA: 0x1283C84
	public static bool IsECMAWordChar(char ch) { }

	// RVA: 0x1283D58 Offset: 0x127FD58 VA: 0x1283D58
	public static bool IsWordChar(char ch) { }

	// RVA: 0x1283CF0 Offset: 0x127FCF0 VA: 0x1283CF0
	public static bool CharInClass(char ch, string set) { }

	// RVA: 0x1283DD4 Offset: 0x127FDD4 VA: 0x1283DD4
	private static bool CharInClassRecursive(char ch, string set, int start) { }

	// RVA: 0x1283EFC Offset: 0x127FEFC VA: 0x1283EFC
	private static bool CharInClassInternal(char ch, string set, int start, int mySetLength, int myCategoryLength) { }

	// RVA: 0x128400C Offset: 0x128000C VA: 0x128400C
	private static bool CharInCategory(char ch, string set, int start, int mySetLength, int myCategoryLength) { }

	// RVA: 0x1284194 Offset: 0x1280194 VA: 0x1284194
	private static bool CharInCategoryGroup(char ch, UnicodeCategory chcategory, string category, ref int i) { }

	// RVA: 0x1282F60 Offset: 0x127EF60 VA: 0x1282F60
	private static string NegateCategory(string category) { }

	// RVA: 0x1284264 Offset: 0x1280264 VA: 0x1284264
	public static RegexCharClass Parse(string charClass) { }

	// RVA: 0x12842BC Offset: 0x12802BC VA: 0x12842BC
	private static RegexCharClass ParseRecursive(string charClass, int start) { }

	// RVA: 0x1282B0C Offset: 0x127EB0C VA: 0x1282B0C
	private int RangeCount() { }

	// RVA: 0x12844F8 Offset: 0x12804F8 VA: 0x12844F8
	public string ToStringClass() { }

	// RVA: 0x1282B28 Offset: 0x127EB28 VA: 0x1282B28
	private RegexCharClass.SingleRange GetRangeAt(int i) { }

	// RVA: 0x1284690 Offset: 0x1280690 VA: 0x1284690
	private void Canonicalize() { }

	// RVA: 0x1282FE8 Offset: 0x127EFE8 VA: 0x1282FE8
	private static string SetFromProperty(string capname, bool invert, string pattern) { }

	// RVA: 0x12848E4 Offset: 0x12808E4 VA: 0x12848E4
	private static void .cctor() { }
}


// Namespace: System.Text.RegularExpressions
internal sealed class RegexCode // TypeDefIndex: 3366
{
	// Fields
	public const int Onerep = 0;
	public const int Notonerep = 1;
	public const int Setrep = 2;
	public const int Oneloop = 3;
	public const int Notoneloop = 4;
	public const int Setloop = 5;
	public const int Onelazy = 6;
	public const int Notonelazy = 7;
	public const int Setlazy = 8;
	public const int One = 9;
	public const int Notone = 10;
	public const int Set = 11;
	public const int Multi = 12;
	public const int Ref = 13;
	public const int Bol = 14;
	public const int Eol = 15;
	public const int Boundary = 16;
	public const int Nonboundary = 17;
	public const int Beginning = 18;
	public const int Start = 19;
	public const int EndZ = 20;
	public const int End = 21;
	public const int Nothing = 22;
	public const int Lazybranch = 23;
	public const int Branchmark = 24;
	public const int Lazybranchmark = 25;
	public const int Nullcount = 26;
	public const int Setcount = 27;
	public const int Branchcount = 28;
	public const int Lazybranchcount = 29;
	public const int Nullmark = 30;
	public const int Setmark = 31;
	public const int Capturemark = 32;
	public const int Getmark = 33;
	public const int Setjump = 34;
	public const int Backjump = 35;
	public const int Forejump = 36;
	public const int Testref = 37;
	public const int Goto = 38;
	public const int Prune = 39;
	public const int Stop = 40;
	public const int ECMABoundary = 41;
	public const int NonECMABoundary = 42;
	public const int Mask = 63;
	public const int Rtl = 64;
	public const int Back = 128;
	public const int Back2 = 256;
	public const int Ci = 512;
	public readonly int[] Codes; // 0x10
	public readonly string[] Strings; // 0x18
	public readonly int TrackCount; // 0x20
	public readonly Hashtable Caps; // 0x28
	public readonly int CapSize; // 0x30
	public readonly Nullable<RegexPrefix> FCPrefix; // 0x38
	public readonly RegexBoyerMoore BMPrefix; // 0x50
	public readonly int Anchors; // 0x58
	public readonly bool RightToLeft; // 0x5C

	// Methods

	// RVA: 0x1289BB8 Offset: 0x1285BB8 VA: 0x1289BB8
	public void .ctor(int[] codes, List<string> stringlist, int trackcount, Hashtable caps, int capsize, RegexBoyerMoore bmPrefix, Nullable<RegexPrefix> fcPrefix, int anchors, bool rightToLeft) { }

	// RVA: 0x1289C88 Offset: 0x1285C88 VA: 0x1289C88
	public static bool OpcodeBacktracks(int Op) { }
}


// Namespace: System.Text.RegularExpressions
[IsByRefLike]
[Obsolete("Types with embedded references are not supported in this version of your compiler.", True)]
internal struct RegexFCD // TypeDefIndex: 3367
{
	// Fields
	private readonly List<RegexFC> _fcStack; // 0x0
	private ValueListBuilder<int> _intStack; // 0x8
	private bool _skipAllChildren; // 0x28
	private bool _skipchild; // 0x29
	private bool _failed; // 0x2A

	// Methods

	// RVA: 0x1289CB8 Offset: 0x1285CB8 VA: 0x1289CB8
	private void .ctor(Span<int> intStack) { }

	// RVA: 0x1289D8C Offset: 0x1285D8C VA: 0x1289D8C
	public static Nullable<RegexPrefix> FirstChars(RegexTree t) { }

	// RVA: 0x128A174 Offset: 0x1286174 VA: 0x128A174
	public static RegexPrefix Prefix(RegexTree tree) { }

	// RVA: 0x128A3BC Offset: 0x12863BC VA: 0x128A3BC
	public static int Anchors(RegexTree tree) { }

	// RVA: 0x128A494 Offset: 0x1286494 VA: 0x128A494
	private static int AnchorFromType(int type) { }

	// RVA: 0x128A504 Offset: 0x1286504 VA: 0x128A504
	private void PushInt(int i) { }

	// RVA: 0x128A564 Offset: 0x1286564 VA: 0x128A564
	private bool IntIsEmpty() { }

	// RVA: 0x128A574 Offset: 0x1286574 VA: 0x128A574
	private int PopInt() { }

	// RVA: 0x128A5D0 Offset: 0x12865D0 VA: 0x128A5D0
	private void PushFC(RegexFC fc) { }

	// RVA: 0x128A628 Offset: 0x1286628 VA: 0x128A628
	private bool FCIsEmpty() { }

	// RVA: 0x128A64C Offset: 0x128664C VA: 0x128A64C
	private RegexFC PopFC() { }

	// RVA: 0x128A6BC Offset: 0x12866BC VA: 0x128A6BC
	private RegexFC TopFC() { }

	// RVA: 0x128A0E4 Offset: 0x12860E4 VA: 0x128A0E4
	public void Dispose() { }

	// RVA: 0x1289F84 Offset: 0x1285F84 VA: 0x1289F84
	private RegexFC RegexFCFromRegexTree(RegexTree tree) { }

	// RVA: 0x128AB1C Offset: 0x1286B1C VA: 0x128AB1C
	private void SkipChild() { }

	// RVA: 0x128A720 Offset: 0x1286720 VA: 0x128A720
	private void CalculateFC(int NodeType, RegexNode node, int CurIndex) { }
}


// Namespace: System.Text.RegularExpressions
internal sealed class RegexFC // TypeDefIndex: 3368
{
	// Fields
	private RegexCharClass _cc; // 0x10
	public bool _nullable; // 0x18
	[CompilerGenerated]
	private bool <CaseInsensitive>k__BackingField; // 0x19

	// Methods

	// RVA: 0x128AB28 Offset: 0x1286B28 VA: 0x128AB28
	public void .ctor(bool nullable) { }

	// RVA: 0x128AC4C Offset: 0x1286C4C VA: 0x128AC4C
	public void .ctor(char ch, bool not, bool nullable, bool caseInsensitive) { }

	// RVA: 0x128AD44 Offset: 0x1286D44 VA: 0x128AD44
	public void .ctor(string charClass, bool nullable, bool caseInsensitive) { }

	// RVA: 0x128ABA0 Offset: 0x1286BA0 VA: 0x128ABA0
	public bool AddFC(RegexFC fc, bool concatenate) { }

	// RVA: 0x128A12C Offset: 0x128612C VA: 0x128A12C
	public string GetFirstChars(CultureInfo culture) { }
}


// Namespace: System.Text.RegularExpressions
internal sealed class RegexInterpreter : RegexRunner // TypeDefIndex: 3369
{
	// Fields
	private readonly RegexCode _code; // 0x80
	private readonly CultureInfo _culture; // 0x88
	private int _operator; // 0x90
	private int _codepos; // 0x94
	private bool _rightToLeft; // 0x98
	private bool _caseInsensitive; // 0x99

	// Methods

	// RVA: 0x128ADDC Offset: 0x1286DDC VA: 0x128ADDC
	public void .ctor(RegexCode code, CultureInfo culture) { }

	// RVA: 0x128AE10 Offset: 0x1286E10 VA: 0x128AE10 Slot: 6
	protected override void InitTrackCount() { }

	// RVA: 0x128AE30 Offset: 0x1286E30 VA: 0x128AE30
	private void Advance(int i) { }

	// RVA: 0x128AEB4 Offset: 0x1286EB4 VA: 0x128AEB4
	private void Goto(int newpos) { }

	// RVA: 0x128AF74 Offset: 0x1286F74 VA: 0x128AF74
	private void Trackto(int newpos) { }

	// RVA: 0x128AF98 Offset: 0x1286F98 VA: 0x128AF98
	private int Trackpos() { }

	// RVA: 0x128AFBC Offset: 0x1286FBC VA: 0x128AFBC
	private void TrackPush() { }

	// RVA: 0x128AFFC Offset: 0x1286FFC VA: 0x128AFFC
	private void TrackPush(int I1) { }

	// RVA: 0x128B058 Offset: 0x1287058 VA: 0x128B058
	private void TrackPush(int I1, int I2) { }

	// RVA: 0x128B0D0 Offset: 0x12870D0 VA: 0x128B0D0
	private void TrackPush(int I1, int I2, int I3) { }

	// RVA: 0x128B164 Offset: 0x1287164 VA: 0x128B164
	private void TrackPush2(int I1) { }

	// RVA: 0x128B1C4 Offset: 0x12871C4 VA: 0x128B1C4
	private void TrackPush2(int I1, int I2) { }

	// RVA: 0x128B240 Offset: 0x1287240 VA: 0x128B240
	private void Backtrack() { }

	// RVA: 0x128AE94 Offset: 0x1286E94 VA: 0x128AE94
	private void SetOperator(int op) { }

	// RVA: 0x128B334 Offset: 0x1287334 VA: 0x128B334
	private void TrackPop() { }

	// RVA: 0x128B344 Offset: 0x1287344 VA: 0x128B344
	private void TrackPop(int framesize) { }

	// RVA: 0x128B354 Offset: 0x1287354 VA: 0x128B354
	private int TrackPeek() { }

	// RVA: 0x128B38C Offset: 0x128738C VA: 0x128B38C
	private int TrackPeek(int i) { }

	// RVA: 0x128B3C8 Offset: 0x12873C8 VA: 0x128B3C8
	private void StackPush(int I1) { }

	// RVA: 0x128B404 Offset: 0x1287404 VA: 0x128B404
	private void StackPush(int I1, int I2) { }

	// RVA: 0x128B45C Offset: 0x128745C VA: 0x128B45C
	private void StackPop() { }

	// RVA: 0x128B46C Offset: 0x128746C VA: 0x128B46C
	private void StackPop(int framesize) { }

	// RVA: 0x128B47C Offset: 0x128747C VA: 0x128B47C
	private int StackPeek() { }

	// RVA: 0x128B4B4 Offset: 0x12874B4 VA: 0x128B4B4
	private int StackPeek(int i) { }

	// RVA: 0x128B4F0 Offset: 0x12874F0 VA: 0x128B4F0
	private int Operand(int i) { }

	// RVA: 0x128B534 Offset: 0x1287534 VA: 0x128B534
	private int Leftchars() { }

	// RVA: 0x128B544 Offset: 0x1287544 VA: 0x128B544
	private int Rightchars() { }

	// RVA: 0x128B554 Offset: 0x1287554 VA: 0x128B554
	private int Bump() { }

	// RVA: 0x128B568 Offset: 0x1287568 VA: 0x128B568
	private int Forwardchars() { }

	// RVA: 0x128B594 Offset: 0x1287594 VA: 0x128B594
	private char Forwardcharnext() { }

	// RVA: 0x128B624 Offset: 0x1287624 VA: 0x128B624
	private bool Stringmatch(string str) { }

	// RVA: 0x128B790 Offset: 0x1287790 VA: 0x128B790
	private bool Refmatch(int index, int len) { }

	// RVA: 0x128B92C Offset: 0x128792C VA: 0x128B92C
	private void Backwardnext() { }

	// RVA: 0x128B95C Offset: 0x128795C VA: 0x128B95C
	private char CharAt(int j) { }

	// RVA: 0x128B978 Offset: 0x1287978 VA: 0x128B978 Slot: 5
	protected override bool FindFirstChar() { }

	// RVA: 0x128BCBC Offset: 0x1287CBC VA: 0x128BCBC Slot: 4
	protected override void Go() { }
}


// Namespace: System.Text.RegularExpressions
[Serializable]
public class RegexMatchTimeoutException : TimeoutException, ISerializable // TypeDefIndex: 3370
{
	// Fields
	[CompilerGenerated]
	private readonly string <Input>k__BackingField; // 0x90
	[CompilerGenerated]
	private readonly string <Pattern>k__BackingField; // 0x98
	[CompilerGenerated]
	private readonly TimeSpan <MatchTimeout>k__BackingField; // 0xA0

	// Methods

	// RVA: 0x128D28C Offset: 0x128928C VA: 0x128D28C
	public void .ctor(string regexInput, string regexPattern, TimeSpan matchTimeout) { }

	// RVA: 0x128D358 Offset: 0x1289358 VA: 0x128D358
	public void .ctor() { }

	// RVA: 0x128D3EC Offset: 0x12893EC VA: 0x128D3EC
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x128D524 Offset: 0x1289524 VA: 0x128D524 Slot: 4
	private void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo info, StreamingContext context) { }
}


// Namespace: System.Text.RegularExpressions
internal sealed class RegexNode // TypeDefIndex: 3371
{
	// Fields
	public int NType; // 0x10
	public List<RegexNode> Children; // 0x18
	public string Str; // 0x20
	public char Ch; // 0x28
	public int M; // 0x2C
	public int N; // 0x30
	public readonly RegexOptions Options; // 0x34
	public RegexNode Next; // 0x38

	// Methods

	// RVA: 0x128D5F8 Offset: 0x12895F8 VA: 0x128D5F8
	public void .ctor(int type, RegexOptions options) { }

	// RVA: 0x128D628 Offset: 0x1289628 VA: 0x128D628
	public void .ctor(int type, RegexOptions options, char ch) { }

	// RVA: 0x128D668 Offset: 0x1289668 VA: 0x128D668
	public void .ctor(int type, RegexOptions options, string str) { }

	// RVA: 0x128D6A8 Offset: 0x12896A8 VA: 0x128D6A8
	public void .ctor(int type, RegexOptions options, int m) { }

	// RVA: 0x128D6E8 Offset: 0x12896E8 VA: 0x128D6E8
	public void .ctor(int type, RegexOptions options, int m, int n) { }

	// RVA: 0x128D72C Offset: 0x128972C VA: 0x128D72C
	public bool UseOptionR() { }

	// RVA: 0x128D738 Offset: 0x1289738 VA: 0x128D738
	public RegexNode ReverseLeft() { }

	// RVA: 0x128D7A8 Offset: 0x12897A8 VA: 0x128D7A8
	private void MakeRep(int type, int min, int max) { }

	// RVA: 0x128D7C0 Offset: 0x12897C0 VA: 0x128D7C0
	private RegexNode Reduce() { }

	// RVA: 0x128E22C Offset: 0x128A22C VA: 0x128E22C
	private RegexNode StripEnation(int emptyType) { }

	// RVA: 0x128E0E4 Offset: 0x128A0E4 VA: 0x128E0E4
	private RegexNode ReduceGroup() { }

	// RVA: 0x128DF90 Offset: 0x1289F90 VA: 0x128DF90
	private RegexNode ReduceRep() { }

	// RVA: 0x128E110 Offset: 0x128A110 VA: 0x128E110
	private RegexNode ReduceSet() { }

	// RVA: 0x128D828 Offset: 0x1289828 VA: 0x128D828
	private RegexNode ReduceAlternation() { }

	// RVA: 0x128DBF8 Offset: 0x1289BF8 VA: 0x128DBF8
	private RegexNode ReduceConcatenation() { }

	// RVA: 0x128E2C0 Offset: 0x128A2C0 VA: 0x128E2C0
	public RegexNode MakeQuantifier(bool lazy, int min, int max) { }

	// RVA: 0x128E3D8 Offset: 0x128A3D8 VA: 0x128E3D8
	public void AddChild(RegexNode newChild) { }

	// RVA: 0x128A350 Offset: 0x1286350 VA: 0x128A350
	public RegexNode Child(int i) { }

	// RVA: 0x128A338 Offset: 0x1286338 VA: 0x128A338
	public int ChildCount() { }
}


// Namespace: System.Text.RegularExpressions
[Flags]
public enum RegexOptions // TypeDefIndex: 3372
{
	// Fields
	public int value__; // 0x0
	public const RegexOptions None = 0;
	public const RegexOptions IgnoreCase = 1;
	public const RegexOptions Multiline = 2;
	public const RegexOptions ExplicitCapture = 4;
	public const RegexOptions Compiled = 8;
	public const RegexOptions Singleline = 16;
	public const RegexOptions IgnorePatternWhitespace = 32;
	public const RegexOptions RightToLeft = 64;
	public const RegexOptions ECMAScript = 256;
	public const RegexOptions CultureInvariant = 512;
}


// Namespace: System.Text.RegularExpressions
internal sealed class RegexParser // TypeDefIndex: 3373
{
	// Fields
	private RegexNode _stack; // 0x10
	private RegexNode _group; // 0x18
	private RegexNode _alternation; // 0x20
	private RegexNode _concatenation; // 0x28
	private RegexNode _unit; // 0x30
	private string _pattern; // 0x38
	private int _currentPos; // 0x40
	private CultureInfo _culture; // 0x48
	private int _autocap; // 0x50
	private int _capcount; // 0x54
	private int _captop; // 0x58
	private int _capsize; // 0x5C
	private Hashtable _caps; // 0x60
	private Hashtable _capnames; // 0x68
	private int[] _capnumlist; // 0x70
	private List<string> _capnamelist; // 0x78
	private RegexOptions _options; // 0x80
	private List<RegexOptions> _optionsStack; // 0x88
	private bool _ignoreNextParen; // 0x90
	private static readonly byte[] s_category; // 0x0

	// Methods

	// RVA: 0x128E49C Offset: 0x128A49C VA: 0x128E49C
	public static RegexTree Parse(string re, RegexOptions op) { }

	// RVA: 0x128F2C8 Offset: 0x128B2C8 VA: 0x128F2C8
	public static RegexReplacement ParseReplacement(string rep, Hashtable caps, int capsize, Hashtable capnames, RegexOptions op) { }

	// RVA: 0x128E634 Offset: 0x128A634 VA: 0x128E634
	private void .ctor(CultureInfo culture) { }

	// RVA: 0x128E6F0 Offset: 0x128A6F0 VA: 0x128E6F0
	private void SetPattern(string Re) { }

	// RVA: 0x128EA90 Offset: 0x128AA90 VA: 0x128EA90
	private void Reset(RegexOptions topopts) { }

	// RVA: 0x128EB10 Offset: 0x128AB10 VA: 0x128EB10
	private RegexNode ScanRegex() { }

	// RVA: 0x128F420 Offset: 0x128B420 VA: 0x128F420
	private RegexNode ScanReplacement() { }

	// RVA: 0x12902A0 Offset: 0x128C2A0 VA: 0x12902A0
	private RegexCharClass ScanCharClass(bool caseInsensitive, bool scanOnly) { }

	// RVA: 0x1290984 Offset: 0x128C984 VA: 0x1290984
	private RegexNode ScanGroupOpen() { }

	// RVA: 0x128F948 Offset: 0x128B948 VA: 0x128F948
	private void ScanBlank() { }

	// RVA: 0x129169C Offset: 0x128D69C VA: 0x129169C
	private RegexNode ScanBackslash(bool scanOnly) { }

	// RVA: 0x1292A08 Offset: 0x128EA08 VA: 0x1292A08
	private RegexNode ScanBasicBackslash(bool scanOnly) { }

	// RVA: 0x1291E8C Offset: 0x128DE8C VA: 0x1291E8C
	private RegexNode ScanDollar() { }

	// RVA: 0x1292590 Offset: 0x128E590 VA: 0x1292590
	private string ScanCapname() { }

	// RVA: 0x1292FB4 Offset: 0x128EFB4 VA: 0x1292FB4
	private char ScanOctal() { }

	// RVA: 0x1291D7C Offset: 0x128DD7C VA: 0x1291D7C
	private int ScanDecimal() { }

	// RVA: 0x1293050 Offset: 0x128F050 VA: 0x1293050
	private char ScanHex(int c) { }

	// RVA: 0x1293184 Offset: 0x128F184 VA: 0x1293184
	private static int HexDigit(char ch) { }

	// RVA: 0x12931BC Offset: 0x128F1BC VA: 0x12931BC
	private char ScanControl() { }

	// RVA: 0x1293258 Offset: 0x128F258 VA: 0x1293258
	private bool IsOnlyTopOption(RegexOptions option) { }

	// RVA: 0x12927D4 Offset: 0x128E7D4 VA: 0x12927D4
	private void ScanOptions() { }

	// RVA: 0x1292400 Offset: 0x128E400 VA: 0x1292400
	private char ScanCharEscape() { }

	// RVA: 0x1292290 Offset: 0x128E290 VA: 0x1292290
	private string ParseProperty() { }

	// RVA: 0x1292978 Offset: 0x128E978 VA: 0x1292978
	private int TypeFromCode(char ch) { }

	// RVA: 0x129327C Offset: 0x128F27C VA: 0x129327C
	private static RegexOptions OptionFromCode(char ch) { }

	// RVA: 0x128E74C Offset: 0x128A74C VA: 0x128E74C
	private void CountCaptures() { }

	// RVA: 0x12932DC Offset: 0x128F2DC VA: 0x12932DC
	private void NoteCaptureSlot(int i, int pos) { }

	// RVA: 0x1293408 Offset: 0x128F408 VA: 0x1293408
	private void NoteCaptureName(string name, int pos) { }

	// RVA: 0x128F414 Offset: 0x128B414 VA: 0x128F414
	private void NoteCaptures(Hashtable caps, int capsize, Hashtable capnames) { }

	// RVA: 0x129354C Offset: 0x128F54C VA: 0x129354C
	private void AssignNameSlots() { }

	// RVA: 0x1292748 Offset: 0x128E748 VA: 0x1292748
	private int CaptureSlotFromName(string capname) { }

	// RVA: 0x1292690 Offset: 0x128E690 VA: 0x1292690
	private bool IsCaptureSlot(int i) { }

	// RVA: 0x129272C Offset: 0x128E72C VA: 0x129272C
	private bool IsCaptureName(string capname) { }

	// RVA: 0x1292684 Offset: 0x128E684 VA: 0x1292684
	private bool UseOptionN() { }

	// RVA: 0x1290294 Offset: 0x128C294 VA: 0x1290294
	private bool UseOptionI() { }

	// RVA: 0x1291BE0 Offset: 0x128DBE0 VA: 0x1291BE0
	private bool UseOptionM() { }

	// RVA: 0x1291C5C Offset: 0x128DC5C VA: 0x1291C5C
	private bool UseOptionS() { }

	// RVA: 0x128FC2C Offset: 0x128BC2C VA: 0x128FC2C
	private bool UseOptionX() { }

	// RVA: 0x1292284 Offset: 0x128E284 VA: 0x1292284
	private bool UseOptionE() { }

	// RVA: 0x128FEB8 Offset: 0x128BEB8 VA: 0x128FEB8
	private static bool IsSpecial(char ch) { }

	// RVA: 0x128FC90 Offset: 0x128BC90 VA: 0x128FC90
	private static bool IsStopperX(char ch) { }

	// RVA: 0x128FF50 Offset: 0x128BF50 VA: 0x128FF50
	private static bool IsQuantifier(char ch) { }

	// RVA: 0x128FD28 Offset: 0x128BD28 VA: 0x128FD28
	private bool IsTrueQuantifier() { }

	// RVA: 0x12928E0 Offset: 0x128E8E0 VA: 0x12928E0
	private static bool IsSpace(char ch) { }

	// RVA: 0x128FFE8 Offset: 0x128BFE8 VA: 0x128FFE8
	private void AddConcatenate(int pos, int cch, bool isReplacement) { }

	// RVA: 0x12912C0 Offset: 0x128D2C0 VA: 0x12912C0
	private void PushGroup() { }

	// RVA: 0x1291568 Offset: 0x128D568 VA: 0x1291568
	private void PopGroup() { }

	// RVA: 0x12913C0 Offset: 0x128D3C0 VA: 0x12913C0
	private bool EmptyStack() { }

	// RVA: 0x128F8A8 Offset: 0x128B8A8 VA: 0x128F8A8
	private void StartGroup(RegexNode openGroup) { }

	// RVA: 0x12912FC Offset: 0x128D2FC VA: 0x12912FC
	private void AddAlternate() { }

	// RVA: 0x1291D28 Offset: 0x128DD28 VA: 0x1291D28
	private void AddConcatenate() { }

	// RVA: 0x1291E48 Offset: 0x128DE48 VA: 0x1291E48
	private void AddConcatenate(bool lazy, int min, int max) { }

	// RVA: 0x12901E4 Offset: 0x128C1E4 VA: 0x12901E4
	private void AddUnitOne(char ch) { }

	// RVA: 0x1291C68 Offset: 0x128DC68 VA: 0x1291C68
	private void AddUnitNotone(char ch) { }

	// RVA: 0x12908AC Offset: 0x128C8AC VA: 0x12908AC
	private void AddUnitSet(string cc) { }

	// RVA: 0x1291BEC Offset: 0x128DBEC VA: 0x1291BEC
	private void AddUnitType(int type) { }

	// RVA: 0x1291468 Offset: 0x128D468 VA: 0x1291468
	private void AddGroup() { }

	// RVA: 0x1290924 Offset: 0x128C924 VA: 0x1290924
	private void PushOptions() { }

	// RVA: 0x1291608 Offset: 0x128D608 VA: 0x1291608
	private void PopOptions() { }

	// RVA: 0x12933E4 Offset: 0x128F3E4 VA: 0x12933E4
	private bool EmptyOptionsStack() { }

	// RVA: 0x1291268 Offset: 0x128D268 VA: 0x1291268
	private void PopKeepOptions() { }

	// RVA: 0x12913D0 Offset: 0x128D3D0 VA: 0x12913D0
	private ArgumentException MakeException(string message) { }

	// RVA: 0x1291D50 Offset: 0x128DD50 VA: 0x1291D50
	private char RightCharMoveRight() { }

	// RVA: 0x128FC38 Offset: 0x128BC38 VA: 0x128FC38
	private void MoveRight() { }

	// RVA: 0x1292674 Offset: 0x128E674 VA: 0x1292674
	private void MoveRight(int i) { }

	// RVA: 0x1291D18 Offset: 0x128DD18 VA: 0x1291D18
	private void MoveLeft() { }

	// RVA: 0x12901C8 Offset: 0x128C1C8 VA: 0x12901C8
	private char CharAt(int i) { }

	// RVA: 0x128FC6C Offset: 0x128BC6C VA: 0x128FC6C
	internal char RightChar() { }

	// RVA: 0x129264C Offset: 0x128E64C VA: 0x129264C
	private char RightChar(int i) { }

	// RVA: 0x128FC48 Offset: 0x128BC48 VA: 0x128FC48
	private int CharsRight() { }

	// RVA: 0x1293B20 Offset: 0x128FB20 VA: 0x1293B20
	private static void .cctor() { }
}


// Namespace: System.Text.RegularExpressions
internal struct RegexPrefix // TypeDefIndex: 3374
{
	// Fields
	[CompilerGenerated]
	private readonly bool <CaseInsensitive>k__BackingField; // 0x0
	[CompilerGenerated]
	private static readonly RegexPrefix <Empty>k__BackingField; // 0x0
	[CompilerGenerated]
	private readonly string <Prefix>k__BackingField; // 0x8

	// Methods

	// RVA: 0x128A164 Offset: 0x1286164 VA: 0x128A164
	internal void .ctor(string prefix, bool ci) { }

	// RVA: 0x1293BB4 Offset: 0x128FBB4 VA: 0x1293BB4
	private static void .cctor() { }
}


// Namespace: System.Text.RegularExpressions
internal sealed class RegexReplacement // TypeDefIndex: 3375
{
	// Fields
	private const int Specials = 4;
	public const int LeftPortion = -1;
	public const int RightPortion = -2;
	public const int LastGroup = -3;
	public const int WholeString = -4;
	private readonly List<string> _strings; // 0x10
	private readonly List<int> _rules; // 0x18
	[CompilerGenerated]
	private readonly string <Pattern>k__BackingField; // 0x20

	// Methods

	// RVA: 0x128F540 Offset: 0x128B540 VA: 0x128F540
	public void .ctor(string rep, RegexNode concat, Hashtable _caps) { }

	// RVA: 0x1293C1C Offset: 0x128FC1C VA: 0x1293C1C
	public static RegexReplacement GetOrCreate(WeakReference<RegexReplacement> replRef, string replacement, Hashtable caps, int capsize, Hashtable capnames, RegexOptions roptions) { }

	// RVA: 0x1293D30 Offset: 0x128FD30 VA: 0x1293D30
	private void ReplacementImpl(StringBuilder sb, Match match) { }

	// RVA: 0x1293ED8 Offset: 0x128FED8 VA: 0x1293ED8
	private void ReplacementImplRTL(List<string> al, Match match) { }

	// RVA: 0x12940A8 Offset: 0x12900A8 VA: 0x12940A8
	public string Replace(Regex regex, string input, int count, int startat) { }
}


// Namespace: System.Text.RegularExpressions
public abstract class RegexRunner // TypeDefIndex: 3376
{
	// Fields
	protected internal int runtextbeg; // 0x10
	protected internal int runtextend; // 0x14
	protected internal int runtextstart; // 0x18
	protected internal string runtext; // 0x20
	protected internal int runtextpos; // 0x28
	protected internal int[] runtrack; // 0x30
	protected internal int runtrackpos; // 0x38
	protected internal int[] runstack; // 0x40
	protected internal int runstackpos; // 0x48
	protected internal int[] runcrawl; // 0x50
	protected internal int runcrawlpos; // 0x58
	protected internal int runtrackcount; // 0x5C
	protected internal Match runmatch; // 0x60
	protected internal Regex runregex; // 0x68
	private int _timeout; // 0x70
	private bool _ignoreTimeout; // 0x74
	private int _timeoutOccursAt; // 0x78
	private const int TimeoutCheckFrequency = 1000;
	private int _timeoutChecksToSkip; // 0x7C

	// Methods

	// RVA: 0x128AE08 Offset: 0x1286E08 VA: 0x128AE08
	protected internal void .ctor() { }

	// RVA: 0x12943E4 Offset: 0x12903E4 VA: 0x12943E4
	protected internal Match Scan(Regex regex, string text, int textbeg, int textend, int textstart, int prevlen, bool quick, TimeSpan timeout) { }

	// RVA: 0x12946E4 Offset: 0x12906E4 VA: 0x12946E4
	private void StartTimeoutWatch() { }

	// RVA: 0x128CE54 Offset: 0x1288E54 VA: 0x128CE54
	protected void CheckTimeout() { }

	// RVA: 0x1294930 Offset: 0x1290930 VA: 0x1294930
	private void DoCheckTimeout() { }

	// RVA: -1 Offset: -1 Slot: 4
	protected abstract void Go();

	// RVA: -1 Offset: -1 Slot: 5
	protected abstract bool FindFirstChar();

	// RVA: -1 Offset: -1 Slot: 6
	protected abstract void InitTrackCount();

	// RVA: 0x1294718 Offset: 0x1290718 VA: 0x1294718
	private void InitMatch() { }

	// RVA: 0x12948EC Offset: 0x12908EC VA: 0x12948EC
	private Match TidyMatch(bool quick) { }

	// RVA: 0x128AF2C Offset: 0x1286F2C VA: 0x128AF2C
	protected void EnsureStorage() { }

	// RVA: 0x128D04C Offset: 0x128904C VA: 0x128D04C
	protected bool IsBoundary(int index, int startpos, int endpos) { }

	// RVA: 0x128D14C Offset: 0x128914C VA: 0x128D14C
	protected bool IsECMABoundary(int index, int startpos, int endpos) { }

	// RVA: 0x1294A9C Offset: 0x1290A9C VA: 0x1294A9C
	protected void DoubleTrack() { }

	// RVA: 0x12949FC Offset: 0x12909FC VA: 0x12949FC
	protected void DoubleStack() { }

	// RVA: 0x1294B3C Offset: 0x1290B3C VA: 0x1294B3C
	protected void DoubleCrawl() { }

	// RVA: 0x1294BDC Offset: 0x1290BDC VA: 0x1294BDC
	protected void Crawl(int i) { }

	// RVA: 0x1294C38 Offset: 0x1290C38 VA: 0x1294C38
	protected int Popcrawl() { }

	// RVA: 0x128D028 Offset: 0x1289028 VA: 0x128D028
	protected int Crawlpos() { }

	// RVA: 0x128CF98 Offset: 0x1288F98 VA: 0x128CF98
	protected void Capture(int capnum, int start, int end) { }

	// RVA: 0x128CE84 Offset: 0x1288E84 VA: 0x128CE84
	protected void TransferCapture(int capnum, int uncapnum, int start, int end) { }

	// RVA: 0x128CFF8 Offset: 0x1288FF8 VA: 0x128CFF8
	protected void Uncapture() { }

	// RVA: 0x128CE64 Offset: 0x1288E64 VA: 0x128CE64
	protected bool IsMatched(int cap) { }

	// RVA: 0x128D24C Offset: 0x128924C VA: 0x128D24C
	protected int MatchIndex(int cap) { }

	// RVA: 0x128D26C Offset: 0x128926C VA: 0x128D26C
	protected int MatchLength(int cap) { }
}


// Namespace: System.Text.RegularExpressions
public abstract class RegexRunnerFactory // TypeDefIndex: 3377
{
	// Methods

	// RVA: 0x1294C74 Offset: 0x1290C74 VA: 0x1294C74
	protected void .ctor() { }

	// RVA: -1 Offset: -1 Slot: 4
	protected internal abstract RegexRunner CreateInstance();
}


// Namespace: System.Text.RegularExpressions
internal sealed class RegexTree // TypeDefIndex: 3378
{
	// Fields
	public readonly RegexNode Root; // 0x10
	public readonly Hashtable Caps; // 0x18
	public readonly int[] CapNumList; // 0x20
	public readonly int CapTop; // 0x28
	public readonly Hashtable CapNames; // 0x30
	public readonly string[] CapsList; // 0x38
	public readonly RegexOptions Options; // 0x40

	// Methods

	// RVA: 0x128F260 Offset: 0x128B260 VA: 0x128F260
	internal void .ctor(RegexNode root, Hashtable caps, int[] capNumList, int capTop, Hashtable capNames, string[] capsList, RegexOptions options) { }
}


// Namespace: System.Text.RegularExpressions
[Obsolete("Types with embedded references are not supported in this version of your compiler.", True)]
[IsByRefLike]
internal struct RegexWriter // TypeDefIndex: 3379
{
	// Fields
	private ValueListBuilder<int> _emitted; // 0x0
	private ValueListBuilder<int> _intStack; // 0x20
	private readonly Dictionary<string, int> _stringHash; // 0x40
	private readonly List<string> _stringTable; // 0x48
	private Hashtable _caps; // 0x50
	private int _trackCount; // 0x58

	// Methods

	// RVA: 0x1294C7C Offset: 0x1290C7C VA: 0x1294C7C
	private void .ctor(Span<int> emittedSpan, Span<int> intStackSpan) { }

	// RVA: 0x1294DC0 Offset: 0x1290DC0 VA: 0x1294DC0
	public static RegexCode Write(RegexTree tree) { }

	// RVA: 0x12953B4 Offset: 0x12913B4 VA: 0x12953B4
	public void Dispose() { }

	// RVA: 0x1294FCC Offset: 0x1290FCC VA: 0x1294FCC
	public RegexCode RegexCodeFromRegexTree(RegexTree tree) { }

	// RVA: 0x1295C6C Offset: 0x1291C6C VA: 0x1295C6C
	private void PatchJump(int offset, int jumpDest) { }

	// RVA: 0x1295CD0 Offset: 0x1291CD0 VA: 0x1295CD0
	private void Emit(int op) { }

	// RVA: 0x1295408 Offset: 0x1291408 VA: 0x1295408
	private void Emit(int op, int opd1) { }

	// RVA: 0x1295D48 Offset: 0x1291D48 VA: 0x1295D48
	private void Emit(int op, int opd1, int opd2) { }

	// RVA: 0x1295DF8 Offset: 0x1291DF8 VA: 0x1295DF8
	private int StringCode(string str) { }

	// RVA: 0x1295EF8 Offset: 0x1291EF8 VA: 0x1295EF8
	private int MapCapnum(int capnum) { }

	// RVA: 0x1295498 Offset: 0x1291498 VA: 0x1295498
	private void EmitFragment(int nodetype, RegexNode node, int curIndex) { }
}


// Namespace: System.Diagnostics
public class BooleanSwitch : Switch // TypeDefIndex: 3380
{
	// Methods

	// RVA: 0x1295FAC Offset: 0x1291FAC VA: 0x1295FAC
	public void .ctor(string displayName, string description) { }
}


// Namespace: System.Diagnostics
public abstract class Switch // TypeDefIndex: 3381
{
	// Fields
	private readonly string description; // 0x10
	private readonly string displayName; // 0x18
	private string switchValueString; // 0x20
	private string defaultValue; // 0x28
	private static List<WeakReference> switches; // 0x0
	private static int s_LastCollectionCount; // 0x8

	// Methods

	// RVA: 0x1296018 Offset: 0x1292018 VA: 0x1296018
	protected void .ctor(string displayName, string description) { }

	// RVA: 0x1296078 Offset: 0x1292078 VA: 0x1296078
	protected void .ctor(string displayName, string description, string defaultSwitchValue) { }

	// RVA: 0x1296264 Offset: 0x1292264 VA: 0x1296264
	private static void _pruneCachedSwitches() { }

	// RVA: 0x129672C Offset: 0x129272C VA: 0x129672C
	private static void .cctor() { }
}


// Namespace: System.Diagnostics
public enum TraceLevel // TypeDefIndex: 3382
{
	// Fields
	public int value__; // 0x0
	public const TraceLevel Off = 0;
	public const TraceLevel Error = 1;
	public const TraceLevel Warning = 2;
	public const TraceLevel Info = 3;
	public const TraceLevel Verbose = 4;
}


// Namespace: System.Diagnostics
public class TraceSwitch : Switch // TypeDefIndex: 3383
{
	// Methods

	// RVA: 0x1296B20 Offset: 0x1292B20 VA: 0x1296B20
	public void .ctor(string displayName, string description) { }
}


// Namespace: System.Diagnostics
public class Stopwatch // TypeDefIndex: 3384
{
	// Fields
	public static readonly long Frequency; // 0x0
	public static readonly bool IsHighResolution; // 0x8
	private long elapsed; // 0x10
	private long started; // 0x18
	private bool is_running; // 0x20

	// Properties
	public TimeSpan Elapsed { get; }
	public long ElapsedMilliseconds { get; }
	public long ElapsedTicks { get; }
	public bool IsRunning { get; }

	// Methods

	// RVA: 0x1296B90 Offset: 0x1292B90 VA: 0x1296B90
	public static long GetTimestamp() { }

	// RVA: 0x1296B94 Offset: 0x1292B94 VA: 0x1296B94
	public void .ctor() { }

	// RVA: 0x1296B9C Offset: 0x1292B9C VA: 0x1296B9C
	public TimeSpan get_Elapsed() { }

	// RVA: 0x1296D04 Offset: 0x1292D04 VA: 0x1296D04
	public long get_ElapsedMilliseconds() { }

	// RVA: 0x1296C94 Offset: 0x1292C94 VA: 0x1296C94
	public long get_ElapsedTicks() { }

	// RVA: 0x1296E48 Offset: 0x1292E48 VA: 0x1296E48
	public bool get_IsRunning() { }

	// RVA: 0x1296E50 Offset: 0x1292E50 VA: 0x1296E50
	public void Start() { }

	// RVA: 0x1296EB8 Offset: 0x1292EB8 VA: 0x1296EB8
	public void Stop() { }

	// RVA: 0x1296F30 Offset: 0x1292F30 VA: 0x1296F30
	public void Restart() { }

	// RVA: 0x1296F90 Offset: 0x1292F90 VA: 0x1296F90
	private static void .cctor() { }
}


// Namespace: System.Security.Authentication
[Serializable]
public class AuthenticationException : SystemException // TypeDefIndex: 3385
{
	// Methods

	// RVA: 0x1296FE8 Offset: 0x1292FE8 VA: 0x1296FE8
	public void .ctor() { }

	// RVA: 0x1297040 Offset: 0x1293040 VA: 0x1297040
	public void .ctor(string message, Exception innerException) { }

	// RVA: 0x1297048 Offset: 0x1293048 VA: 0x1297048
	protected void .ctor(SerializationInfo serializationInfo, StreamingContext streamingContext) { }
}


// Namespace: System.Security.Authentication
[Flags]
public enum SslProtocols // TypeDefIndex: 3386
{
	// Fields
	public int value__; // 0x0
	public const SslProtocols None = 0;
	public const SslProtocols Ssl2 = 12;
	public const SslProtocols Ssl3 = 48;
	public const SslProtocols Tls = 192;
	public const SslProtocols Tls11 = 768;
	public const SslProtocols Tls12 = 3072;
	public const SslProtocols Tls13 = 12288;
	public const SslProtocols Default = 240;
}


// Namespace: 
internal enum DerSequenceReader.DerTag // TypeDefIndex: 3387
{
	// Fields
	public byte value__; // 0x0
	public const DerSequenceReader.DerTag Boolean = 1;
	public const DerSequenceReader.DerTag Integer = 2;
	public const DerSequenceReader.DerTag BitString = 3;
	public const DerSequenceReader.DerTag OctetString = 4;
	public const DerSequenceReader.DerTag Null = 5;
	public const DerSequenceReader.DerTag ObjectIdentifier = 6;
	public const DerSequenceReader.DerTag UTF8String = 12;
	public const DerSequenceReader.DerTag Sequence = 16;
	public const DerSequenceReader.DerTag Set = 17;
	public const DerSequenceReader.DerTag PrintableString = 19;
	public const DerSequenceReader.DerTag T61String = 20;
	public const DerSequenceReader.DerTag IA5String = 22;
	public const DerSequenceReader.DerTag UTCTime = 23;
	public const DerSequenceReader.DerTag GeneralizedTime = 24;
	public const DerSequenceReader.DerTag BMPString = 30;
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class DerSequenceReader.<>c // TypeDefIndex: 3388
{
	// Fields
	public static readonly DerSequenceReader.<>c <>9; // 0x0
	public static Func<Encoding> <>9__45_0; // 0x8
	public static Func<Encoding> <>9__45_1; // 0x10
	public static Func<DateTimeFormatInfo> <>9__51_0; // 0x18

	// Methods

	// RVA: 0x129858C Offset: 0x129458C VA: 0x129858C
	private static void .cctor() { }

	// RVA: 0x12985E8 Offset: 0x12945E8 VA: 0x12985E8
	public void .ctor() { }

	// RVA: 0x12985F0 Offset: 0x12945F0 VA: 0x12985F0
	internal Encoding <ReadT61String>b__45_0() { }

	// RVA: 0x129864C Offset: 0x129464C VA: 0x129864C
	internal Encoding <ReadT61String>b__45_1() { }

	// RVA: 0x1298690 Offset: 0x1294690 VA: 0x1298690
	internal DateTimeFormatInfo <ReadTime>b__51_0() { }
}


// Namespace: System.Security.Cryptography
internal class DerSequenceReader // TypeDefIndex: 3389
{
	// Fields
	internal static DateTimeFormatInfo s_validityDateTimeFormatInfo; // 0x0
	private static Encoding s_utf8EncodingWithExceptionFallback; // 0x8
	private static Encoding s_latin1Encoding; // 0x10
	private readonly byte[] _data; // 0x10
	private readonly int _end; // 0x18
	private int _position; // 0x1C
	[CompilerGenerated]
	private int <ContentLength>k__BackingField; // 0x20

	// Properties
	internal bool HasData { get; }

	// Methods

	// RVA: 0x1297050 Offset: 0x1293050 VA: 0x1297050
	internal void .ctor(byte[] data) { }

	// RVA: 0x1297074 Offset: 0x1293074 VA: 0x1297074
	internal void .ctor(byte[] data, int offset, int length) { }

	// RVA: 0x1297088 Offset: 0x1293088 VA: 0x1297088
	private void .ctor(DerSequenceReader.DerTag tagToEat, byte[] data, int offset, int length) { }

	// RVA: 0x1297234 Offset: 0x1293234 VA: 0x1297234
	internal bool get_HasData() { }

	// RVA: 0x1297244 Offset: 0x1293244 VA: 0x1297244
	internal byte PeekTag() { }

	// RVA: 0x12972D8 Offset: 0x12932D8 VA: 0x12972D8
	internal void SkipValue() { }

	// RVA: 0x1297328 Offset: 0x1293328 VA: 0x1297328
	internal byte[] ReadNextEncodedValue() { }

	// RVA: 0x1297504 Offset: 0x1293504 VA: 0x1297504
	internal bool ReadBoolean() { }

	// RVA: 0x12975CC Offset: 0x12935CC VA: 0x12975CC
	internal int ReadInteger() { }

	// RVA: 0x1297680 Offset: 0x1293680 VA: 0x1297680
	internal byte[] ReadIntegerBytes() { }

	// RVA: 0x1297750 Offset: 0x1293750 VA: 0x1297750
	internal byte[] ReadBitString() { }

	// RVA: 0x1297894 Offset: 0x1293894 VA: 0x1297894
	internal byte[] ReadOctetString() { }

	// RVA: 0x12978B0 Offset: 0x12938B0 VA: 0x12978B0
	internal string ReadOidAsString() { }

	// RVA: 0x1297B78 Offset: 0x1293B78 VA: 0x1297B78
	internal string ReadUtf8String() { }

	// RVA: 0x1297C74 Offset: 0x1293C74 VA: 0x1297C74
	private DerSequenceReader ReadCollectionWithTag(DerSequenceReader.DerTag expected) { }

	// RVA: 0x1297DCC Offset: 0x1293DCC VA: 0x1297DCC
	internal DerSequenceReader ReadSequence() { }

	// RVA: 0x1297DD4 Offset: 0x1293DD4 VA: 0x1297DD4
	internal DerSequenceReader ReadSet() { }

	// RVA: 0x1297DDC Offset: 0x1293DDC VA: 0x1297DDC
	internal string ReadPrintableString() { }

	// RVA: 0x1297E5C Offset: 0x1293E5C VA: 0x1297E5C
	internal string ReadIA5String() { }

	// RVA: 0x1297EDC Offset: 0x1293EDC VA: 0x1297EDC
	internal string ReadT61String() { }

	// RVA: 0x12981B4 Offset: 0x12941B4 VA: 0x12981B4
	internal DateTime ReadX509Date() { }

	// RVA: 0x1298234 Offset: 0x1294234 VA: 0x1298234
	internal DateTime ReadUtcTime() { }

	// RVA: 0x1298280 Offset: 0x1294280 VA: 0x1298280
	internal DateTime ReadGeneralizedTime() { }

	// RVA: 0x129850C Offset: 0x129450C VA: 0x129850C
	internal string ReadBMPString() { }

	// RVA: 0x1297BF8 Offset: 0x1293BF8 VA: 0x1297BF8
	private static string TrimTrailingNulls(string value) { }

	// RVA: 0x12982CC Offset: 0x12942CC VA: 0x12982CC
	private DateTime ReadTime(DerSequenceReader.DerTag timeTag, string formatString) { }

	// RVA: 0x129769C Offset: 0x129369C VA: 0x129769C
	private byte[] ReadContentAsBytes() { }

	// RVA: 0x1297178 Offset: 0x1293178 VA: 0x1297178
	private void EatTag(DerSequenceReader.DerTag expected) { }

	// RVA: 0x1297D38 Offset: 0x1293D38 VA: 0x1297D38
	private static void CheckTag(DerSequenceReader.DerTag expected, byte[] data, int position) { }

	// RVA: 0x12971F8 Offset: 0x12931F8 VA: 0x12971F8
	private int EatLength() { }

	// RVA: 0x12973E0 Offset: 0x12933E0 VA: 0x12973E0
	private static int ScanContentLength(byte[] data, int offset, int end, out int bytesConsumed) { }
}


// Namespace: System.Security.Cryptography
public sealed class Oid // TypeDefIndex: 3390
{
	// Fields
	private string _value; // 0x10
	private string _friendlyName; // 0x18
	private OidGroup _group; // 0x20

	// Properties
	public string FriendlyName { get; }

	// Methods

	// RVA: 0x129875C Offset: 0x129475C VA: 0x129875C
	public void .ctor() { }

	// RVA: 0x1298764 Offset: 0x1294764 VA: 0x1298764
	public void .ctor(string oid) { }

	// RVA: 0x12987F0 Offset: 0x12947F0 VA: 0x12987F0
	public void .ctor(string value, string friendlyName) { }

	// RVA: 0x129881C Offset: 0x129481C VA: 0x129881C
	public void .ctor(Oid oid) { }

	// RVA: 0x129889C Offset: 0x129489C VA: 0x129889C
	public static Oid FromOidValue(string oidValue, OidGroup group) { }

	// RVA: 0x1298A04 Offset: 0x1294A04 VA: 0x1298A04
	public string get_FriendlyName() { }

	// RVA: 0x12989C8 Offset: 0x12949C8 VA: 0x12989C8
	private void .ctor(string value, string friendlyName, OidGroup group) { }
}


// Namespace: System.Security.Cryptography
[DefaultMember("Item")]
public sealed class OidCollection : ICollection, IEnumerable // TypeDefIndex: 3391
{
	// Fields
	private readonly List<Oid> _list; // 0x10

	// Properties
	public Oid Item { get; }
	public int Count { get; }
	public bool IsSynchronized { get; }
	public object SyncRoot { get; }

	// Methods

	// RVA: 0x1298A88 Offset: 0x1294A88 VA: 0x1298A88
	public void .ctor() { }

	// RVA: 0x1298B08 Offset: 0x1294B08 VA: 0x1298B08
	public int Add(Oid oid) { }

	// RVA: 0x1298B6C Offset: 0x1294B6C VA: 0x1298B6C
	public Oid get_Item(int index) { }

	// RVA: 0x1298BD8 Offset: 0x1294BD8 VA: 0x1298BD8 Slot: 5
	public int get_Count() { }

	// RVA: 0x1298BF4 Offset: 0x1294BF4 VA: 0x1298BF4
	public OidEnumerator GetEnumerator() { }

	// RVA: 0x1298C88 Offset: 0x1294C88 VA: 0x1298C88 Slot: 8
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	// RVA: 0x1298C8C Offset: 0x1294C8C VA: 0x1298C8C Slot: 4
	private void System.Collections.ICollection.CopyTo(Array array, int index) { }

	// RVA: 0x1298E38 Offset: 0x1294E38 VA: 0x1298E38 Slot: 7
	public bool get_IsSynchronized() { }

	// RVA: 0x1298E40 Offset: 0x1294E40 VA: 0x1298E40 Slot: 6
	public object get_SyncRoot() { }
}


// Namespace: System.Security.Cryptography
public sealed class OidEnumerator : IEnumerator // TypeDefIndex: 3392
{
	// Fields
	private readonly OidCollection _oids; // 0x10
	private int _current; // 0x18

	// Properties
	public Oid Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	// RVA: 0x1298C58 Offset: 0x1294C58 VA: 0x1298C58
	internal void .ctor(OidCollection oids) { }

	// RVA: 0x1298E44 Offset: 0x1294E44 VA: 0x1298E44
	public Oid get_Current() { }

	// RVA: 0x1298E64 Offset: 0x1294E64 VA: 0x1298E64 Slot: 5
	private object System.Collections.IEnumerator.get_Current() { }

	// RVA: 0x1298E68 Offset: 0x1294E68 VA: 0x1298E68 Slot: 4
	public bool MoveNext() { }

	// RVA: 0x1298EAC Offset: 0x1294EAC VA: 0x1298EAC Slot: 6
	public void Reset() { }
}


// Namespace: System.Security.Cryptography
public enum OidGroup // TypeDefIndex: 3393
{
	// Fields
	public int value__; // 0x0
	public const OidGroup All = 0;
	public const OidGroup HashAlgorithm = 1;
	public const OidGroup EncryptionAlgorithm = 2;
	public const OidGroup PublicKeyAlgorithm = 3;
	public const OidGroup SignatureAlgorithm = 4;
	public const OidGroup Attribute = 5;
	public const OidGroup ExtensionOrAttribute = 6;
	public const OidGroup EnhancedKeyUsage = 7;
	public const OidGroup Policy = 8;
	public const OidGroup Template = 9;
	public const OidGroup KeyDerivationFunction = 10;
}


// Namespace: System.Security.Cryptography
internal enum AsnDecodeStatus // TypeDefIndex: 3394
{
	// Fields
	public int value__; // 0x0
	public const AsnDecodeStatus NotDecoded = -1;
	public const AsnDecodeStatus Ok = 0;
	public const AsnDecodeStatus BadAsn = 1;
	public const AsnDecodeStatus BadTag = 2;
	public const AsnDecodeStatus BadLength = 3;
	public const AsnDecodeStatus InformationNotAvailable = 4;
}


// Namespace: System.Security.Cryptography
public class AsnEncodedData // TypeDefIndex: 3395
{
	// Fields
	internal Oid _oid; // 0x10
	internal byte[] _raw; // 0x18

	// Properties
	public Oid Oid { set; }
	public byte[] RawData { set; }

	// Methods

	// RVA: 0x1298EB8 Offset: 0x1294EB8 VA: 0x1298EB8
	protected void .ctor() { }

	// RVA: 0x1298EC0 Offset: 0x1294EC0 VA: 0x1298EC0
	public void .ctor(string oid, byte[] rawData) { }

	// RVA: 0x129902C Offset: 0x129502C VA: 0x129902C
	public void .ctor(Oid oid, byte[] rawData) { }

	// RVA: 0x12990E0 Offset: 0x12950E0 VA: 0x12990E0
	public void .ctor(AsnEncodedData asnEncodedData) { }

	// RVA: 0x1299068 Offset: 0x1295068 VA: 0x1299068
	public void set_Oid(Oid value) { }

	// RVA: 0x1298F3C Offset: 0x1294F3C VA: 0x1298F3C
	public void set_RawData(byte[] value) { }

	// RVA: 0x12991B4 Offset: 0x12951B4 VA: 0x12991B4 Slot: 4
	public virtual void CopyFrom(AsnEncodedData asnEncodedData) { }

	// RVA: 0x12992A4 Offset: 0x12952A4 VA: 0x12992A4 Slot: 5
	public virtual string Format(bool multiLine) { }

	// RVA: 0x129944C Offset: 0x129544C VA: 0x129944C Slot: 6
	internal virtual string ToString(bool multiLine) { }

	// RVA: 0x1299334 Offset: 0x1295334 VA: 0x1299334
	internal string Default(bool multiLine) { }

	// RVA: 0x12995FC Offset: 0x12955FC VA: 0x12995FC
	internal string BasicConstraintsExtension(bool multiLine) { }

	// RVA: 0x1299708 Offset: 0x1295708 VA: 0x1299708
	internal string EnhancedKeyUsageExtension(bool multiLine) { }

	// RVA: 0x1299814 Offset: 0x1295814 VA: 0x1299814
	internal string KeyUsageExtension(bool multiLine) { }

	// RVA: 0x1299920 Offset: 0x1295920 VA: 0x1299920
	internal string SubjectKeyIdentifierExtension(bool multiLine) { }

	// RVA: 0x1299A2C Offset: 0x1295A2C VA: 0x1299A2C
	internal string SubjectAltName(bool multiLine) { }

	// RVA: 0x1299DF4 Offset: 0x1295DF4 VA: 0x1299DF4
	internal string NetscapeCertType(bool multiLine) { }
}


// Namespace: System.Security.Cryptography.X509Certificates
[Flags]
public enum OpenFlags // TypeDefIndex: 3396
{
	// Fields
	public int value__; // 0x0
	public const OpenFlags ReadOnly = 0;
	public const OpenFlags ReadWrite = 1;
	public const OpenFlags MaxAllowed = 2;
	public const OpenFlags OpenExistingOnly = 4;
	public const OpenFlags IncludeArchived = 8;
}


// Namespace: System.Security.Cryptography.X509Certificates
public enum StoreLocation // TypeDefIndex: 3397
{
	// Fields
	public int value__; // 0x0
	public const StoreLocation CurrentUser = 1;
	public const StoreLocation LocalMachine = 2;
}


// Namespace: System.Security.Cryptography.X509Certificates
public enum StoreName // TypeDefIndex: 3398
{
	// Fields
	public int value__; // 0x0
	public const StoreName AddressBook = 1;
	public const StoreName AuthRoot = 2;
	public const StoreName CertificateAuthority = 3;
	public const StoreName Disallowed = 4;
	public const StoreName My = 5;
	public const StoreName Root = 6;
	public const StoreName TrustedPeople = 7;
	public const StoreName TrustedPublisher = 8;
}


// Namespace: System.Security.Cryptography.X509Certificates
[Flags]
public enum X500DistinguishedNameFlags // TypeDefIndex: 3399
{
	// Fields
	public int value__; // 0x0
	public const X500DistinguishedNameFlags None = 0;
	public const X500DistinguishedNameFlags Reversed = 1;
	public const X500DistinguishedNameFlags UseSemicolons = 16;
	public const X500DistinguishedNameFlags DoNotUsePlusSign = 32;
	public const X500DistinguishedNameFlags DoNotUseQuotes = 64;
	public const X500DistinguishedNameFlags UseCommas = 128;
	public const X500DistinguishedNameFlags UseNewLines = 256;
	public const X500DistinguishedNameFlags UseUTF8Encoding = 4096;
	public const X500DistinguishedNameFlags UseT61Encoding = 8192;
	public const X500DistinguishedNameFlags ForceUTF8Encoding = 16384;
}


// Namespace: System.Security.Cryptography.X509Certificates
[Flags]
public enum X509ChainStatusFlags // TypeDefIndex: 3400
{
	// Fields
	public int value__; // 0x0
	public const X509ChainStatusFlags NoError = 0;
	public const X509ChainStatusFlags NotTimeValid = 1;
	public const X509ChainStatusFlags NotTimeNested = 2;
	public const X509ChainStatusFlags Revoked = 4;
	public const X509ChainStatusFlags NotSignatureValid = 8;
	public const X509ChainStatusFlags NotValidForUsage = 16;
	public const X509ChainStatusFlags UntrustedRoot = 32;
	public const X509ChainStatusFlags RevocationStatusUnknown = 64;
	public const X509ChainStatusFlags Cyclic = 128;
	public const X509ChainStatusFlags InvalidExtension = 256;
	public const X509ChainStatusFlags InvalidPolicyConstraints = 512;
	public const X509ChainStatusFlags InvalidBasicConstraints = 1024;
	public const X509ChainStatusFlags InvalidNameConstraints = 2048;
	public const X509ChainStatusFlags HasNotSupportedNameConstraint = 4096;
	public const X509ChainStatusFlags HasNotDefinedNameConstraint = 8192;
	public const X509ChainStatusFlags HasNotPermittedNameConstraint = 16384;
	public const X509ChainStatusFlags HasExcludedNameConstraint = 32768;
	public const X509ChainStatusFlags PartialChain = 65536;
	public const X509ChainStatusFlags CtlNotTimeValid = 131072;
	public const X509ChainStatusFlags CtlNotSignatureValid = 262144;
	public const X509ChainStatusFlags CtlNotValidForUsage = 524288;
	public const X509ChainStatusFlags OfflineRevocation = 16777216;
	public const X509ChainStatusFlags NoIssuanceChainPolicy = 33554432;
	public const X509ChainStatusFlags ExplicitDistrust = 67108864;
	public const X509ChainStatusFlags HasNotSupportedCriticalExtension = 134217728;
	public const X509ChainStatusFlags HasWeakSignature = 1048576;
}


// Namespace: System.Security.Cryptography.X509Certificates
public enum X509FindType // TypeDefIndex: 3401
{
	// Fields
	public int value__; // 0x0
	public const X509FindType FindByThumbprint = 0;
	public const X509FindType FindBySubjectName = 1;
	public const X509FindType FindBySubjectDistinguishedName = 2;
	public const X509FindType FindByIssuerName = 3;
	public const X509FindType FindByIssuerDistinguishedName = 4;
	public const X509FindType FindBySerialNumber = 5;
	public const X509FindType FindByTimeValid = 6;
	public const X509FindType FindByTimeNotYetValid = 7;
	public const X509FindType FindByTimeExpired = 8;
	public const X509FindType FindByTemplateName = 9;
	public const X509FindType FindByApplicationPolicy = 10;
	public const X509FindType FindByCertificatePolicy = 11;
	public const X509FindType FindByExtension = 12;
	public const X509FindType FindByKeyUsage = 13;
	public const X509FindType FindBySubjectKeyIdentifier = 14;
}


// Namespace: System.Security.Cryptography.X509Certificates
[Flags]
public enum X509KeyUsageFlags // TypeDefIndex: 3402
{
	// Fields
	public int value__; // 0x0
	public const X509KeyUsageFlags None = 0;
	public const X509KeyUsageFlags EncipherOnly = 1;
	public const X509KeyUsageFlags CrlSign = 2;
	public const X509KeyUsageFlags KeyCertSign = 4;
	public const X509KeyUsageFlags KeyAgreement = 8;
	public const X509KeyUsageFlags DataEncipherment = 16;
	public const X509KeyUsageFlags KeyEncipherment = 32;
	public const X509KeyUsageFlags NonRepudiation = 64;
	public const X509KeyUsageFlags DigitalSignature = 128;
	public const X509KeyUsageFlags DecipherOnly = 32768;
}


// Namespace: System.Security.Cryptography.X509Certificates
public enum X509NameType // TypeDefIndex: 3403
{
	// Fields
	public int value__; // 0x0
	public const X509NameType SimpleName = 0;
	public const X509NameType EmailName = 1;
	public const X509NameType UpnName = 2;
	public const X509NameType DnsName = 3;
	public const X509NameType DnsFromAlternativeName = 4;
	public const X509NameType UrlName = 5;
}


// Namespace: System.Security.Cryptography.X509Certificates
public enum X509RevocationFlag // TypeDefIndex: 3404
{
	// Fields
	public int value__; // 0x0
	public const X509RevocationFlag EndCertificateOnly = 0;
	public const X509RevocationFlag EntireChain = 1;
	public const X509RevocationFlag ExcludeRoot = 2;
}


// Namespace: System.Security.Cryptography.X509Certificates
public enum X509RevocationMode // TypeDefIndex: 3405
{
	// Fields
	public int value__; // 0x0
	public const X509RevocationMode NoCheck = 0;
	public const X509RevocationMode Online = 1;
	public const X509RevocationMode Offline = 2;
}


// Namespace: System.Security.Cryptography.X509Certificates
public enum X509SubjectKeyIdentifierHashAlgorithm // TypeDefIndex: 3406
{
	// Fields
	public int value__; // 0x0
	public const X509SubjectKeyIdentifierHashAlgorithm Sha1 = 0;
	public const X509SubjectKeyIdentifierHashAlgorithm ShortSha1 = 1;
	public const X509SubjectKeyIdentifierHashAlgorithm CapiSha1 = 2;
}


// Namespace: System.Security.Cryptography.X509Certificates
[Flags]
public enum X509VerificationFlags // TypeDefIndex: 3407
{
	// Fields
	public int value__; // 0x0
	public const X509VerificationFlags NoFlag = 0;
	public const X509VerificationFlags IgnoreNotTimeValid = 1;
	public const X509VerificationFlags IgnoreCtlNotTimeValid = 2;
	public const X509VerificationFlags IgnoreNotTimeNested = 4;
	public const X509VerificationFlags IgnoreInvalidBasicConstraints = 8;
	public const X509VerificationFlags AllowUnknownCertificateAuthority = 16;
	public const X509VerificationFlags IgnoreWrongUsage = 32;
	public const X509VerificationFlags IgnoreInvalidName = 64;
	public const X509VerificationFlags IgnoreInvalidPolicy = 128;
	public const X509VerificationFlags IgnoreEndRevocationUnknown = 256;
	public const X509VerificationFlags IgnoreCtlSignerRevocationUnknown = 512;
	public const X509VerificationFlags IgnoreCertificateAuthorityRevocationUnknown = 1024;
	public const X509VerificationFlags IgnoreRootRevocationUnknown = 2048;
	public const X509VerificationFlags AllFlags = 4095;
}


// Namespace: System.Security.Cryptography.X509Certificates
public sealed class PublicKey // TypeDefIndex: 3408
{
	// Fields
	private AsnEncodedData _keyValue; // 0x10
	private AsnEncodedData _params; // 0x18
	private Oid _oid; // 0x20
	private static byte[] Empty; // 0x0

	// Properties
	public AsymmetricAlgorithm Key { get; }

	// Methods

	// RVA: 0x129A51C Offset: 0x129651C VA: 0x129A51C
	public void .ctor(Oid oid, AsnEncodedData parameters, AsnEncodedData keyValue) { }

	// RVA: 0x129A684 Offset: 0x1296684 VA: 0x129A684
	public AsymmetricAlgorithm get_Key() { }

	// RVA: 0x129B044 Offset: 0x1297044 VA: 0x129B044
	private static byte[] GetUnsignedBigInteger(byte[] integer) { }

	// RVA: 0x129ABC4 Offset: 0x1296BC4 VA: 0x129ABC4
	internal static DSA DecodeDSA(byte[] rawPublicKey, byte[] rawParameters) { }

	// RVA: 0x129A828 Offset: 0x1296828 VA: 0x129A828
	internal static RSA DecodeRSA(byte[] rawPublicKey) { }

	// RVA: 0x129B0D8 Offset: 0x12970D8 VA: 0x129B0D8
	private static void .cctor() { }
}


// Namespace: System.Security.Cryptography.X509Certificates
public sealed class X500DistinguishedName : AsnEncodedData // TypeDefIndex: 3409
{
	// Fields
	private string name; // 0x20
	private byte[] canonEncoding; // 0x28

	// Methods

	// RVA: 0x129B140 Offset: 0x1297140 VA: 0x129B140
	public void .ctor(byte[] encodedDistinguishedName) { }

	// RVA: 0x129B328 Offset: 0x1297328 VA: 0x129B328
	public string Decode(X500DistinguishedNameFlags flag) { }

	// RVA: 0x129B4F0 Offset: 0x12974F0 VA: 0x129B4F0 Slot: 5
	public override string Format(bool multiLine) { }

	// RVA: 0x129B478 Offset: 0x1297478 VA: 0x129B478
	private static string GetSeparator(X500DistinguishedNameFlags flag) { }

	// RVA: 0x129B244 Offset: 0x1297244 VA: 0x129B244
	private void DecodeRawData() { }

	// RVA: 0x129B54C Offset: 0x129754C VA: 0x129B54C
	private static string Canonize(string s) { }

	// RVA: 0x129B728 Offset: 0x1297728 VA: 0x129B728
	internal static bool AreEqual(X500DistinguishedName name1, X500DistinguishedName name2) { }
}


// Namespace: System.Security.Cryptography.X509Certificates
public sealed class X509BasicConstraintsExtension : X509Extension // TypeDefIndex: 3410
{
	// Fields
	private bool _certificateAuthority; // 0x21
	private bool _hasPathLengthConstraint; // 0x22
	private int _pathLengthConstraint; // 0x24
	private AsnDecodeStatus _status; // 0x28

	// Properties
	public bool CertificateAuthority { get; }
	public bool HasPathLengthConstraint { get; }
	public int PathLengthConstraint { get; }

	// Methods

	// RVA: 0x129B90C Offset: 0x129790C VA: 0x129B90C
	public void .ctor() { }

	// RVA: 0x129A1CC Offset: 0x12961CC VA: 0x129A1CC
	public void .ctor(AsnEncodedData encodedBasicConstraints, bool critical) { }

	// RVA: 0x129BB78 Offset: 0x1297B78 VA: 0x129BB78
	public void .ctor(bool certificateAuthority, bool hasPathLengthConstraint, int pathLengthConstraint, bool critical) { }

	// RVA: 0x129BE08 Offset: 0x1297E08 VA: 0x129BE08
	public bool get_CertificateAuthority() { }

	// RVA: 0x129BE70 Offset: 0x1297E70 VA: 0x129BE70
	public bool get_HasPathLengthConstraint() { }

	// RVA: 0x129BED8 Offset: 0x1297ED8 VA: 0x129BED8
	public int get_PathLengthConstraint() { }

	// RVA: 0x129BF40 Offset: 0x1297F40 VA: 0x129BF40 Slot: 4
	public override void CopyFrom(AsnEncodedData asnEncodedData) { }

	// RVA: 0x129B9B4 Offset: 0x12979B4 VA: 0x129B9B4
	internal AsnDecodeStatus Decode(byte[] extension) { }

	// RVA: 0x129BCAC Offset: 0x1297CAC VA: 0x129BCAC
	internal byte[] Encode() { }

	// RVA: 0x129C108 Offset: 0x1298108 VA: 0x129C108 Slot: 6
	internal override string ToString(bool multiLine) { }
}


// Namespace: System.Security.Cryptography.X509Certificates
[Serializable]
public class X509Certificate2 : X509Certificate // TypeDefIndex: 3411
{
	// Fields
	private byte[] lazyRawData; // 0x60
	private Oid lazySignatureAlgorithm; // 0x68
	private int lazyVersion; // 0x70
	private X500DistinguishedName lazySubjectName; // 0x78
	private X500DistinguishedName lazyIssuerName; // 0x80
	private PublicKey lazyPublicKey; // 0x88
	private AsymmetricAlgorithm lazyPrivateKey; // 0x90
	private X509ExtensionCollection lazyExtensions; // 0x98

	// Properties
	public X509ExtensionCollection Extensions { get; }
	public bool HasPrivateKey { get; }
	public AsymmetricAlgorithm PrivateKey { get; }
	public X500DistinguishedName IssuerName { get; }
	public DateTime NotAfter { get; }
	public DateTime NotBefore { get; }
	public PublicKey PublicKey { get; }
	public byte[] RawData { get; }
	public string SerialNumber { get; }
	public Oid SignatureAlgorithm { get; }
	public X500DistinguishedName SubjectName { get; }
	public string Thumbprint { get; }
	public int Version { get; }
	internal X509Certificate2Impl Impl { get; }

	// Methods

	// RVA: 0x129C48C Offset: 0x129848C VA: 0x129C48C Slot: 7
	public override void Reset() { }

	// RVA: 0x129C4E4 Offset: 0x12984E4 VA: 0x129C4E4
	public void .ctor() { }

	// RVA: 0x129C4EC Offset: 0x12984EC VA: 0x129C4EC
	public void .ctor(byte[] rawData) { }

	// RVA: 0x129C6B4 Offset: 0x12986B4 VA: 0x129C6B4
	public void .ctor(X509Certificate certificate) { }

	// RVA: 0x129C6BC Offset: 0x12986BC VA: 0x129C6BC
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x129C6FC Offset: 0x12986FC VA: 0x129C6FC
	public X509ExtensionCollection get_Extensions() { }

	// RVA: 0x129CDE4 Offset: 0x1298DE4 VA: 0x129CDE4
	public bool get_HasPrivateKey() { }

	// RVA: 0x129CE18 Offset: 0x1298E18 VA: 0x129CE18
	public AsymmetricAlgorithm get_PrivateKey() { }

	// RVA: 0x129CF70 Offset: 0x1298F70 VA: 0x129CF70
	public X500DistinguishedName get_IssuerName() { }

	// RVA: 0x129CFCC Offset: 0x1298FCC VA: 0x129CFCC
	public DateTime get_NotAfter() { }

	// RVA: 0x129CFD4 Offset: 0x1298FD4 VA: 0x129CFD4
	public DateTime get_NotBefore() { }

	// RVA: 0x129CFDC Offset: 0x1298FDC VA: 0x129CFDC
	public PublicKey get_PublicKey() { }

	// RVA: 0x129D124 Offset: 0x1299124 VA: 0x129D124
	public byte[] get_RawData() { }

	// RVA: 0x129D180 Offset: 0x1299180 VA: 0x129D180
	public string get_SerialNumber() { }

	// RVA: 0x129D190 Offset: 0x1299190 VA: 0x129D190
	public Oid get_SignatureAlgorithm() { }

	// RVA: 0x129D1F4 Offset: 0x12991F4 VA: 0x129D1F4
	public X500DistinguishedName get_SubjectName() { }

	// RVA: 0x129D250 Offset: 0x1299250 VA: 0x129D250
	public string get_Thumbprint() { }

	// RVA: 0x129D26C Offset: 0x129926C VA: 0x129D26C
	public int get_Version() { }

	// RVA: 0x129D2C8 Offset: 0x12992C8 VA: 0x129D2C8
	public static X509ContentType GetCertContentType(byte[] rawData) { }

	// RVA: 0x129D360 Offset: 0x1299360 VA: 0x129D360
	public string GetNameInfo(X509NameType nameType, bool forIssuer) { }

	// RVA: 0x129D39C Offset: 0x129939C VA: 0x129D39C Slot: 3
	public override string ToString() { }

	// RVA: 0x129D3A8 Offset: 0x12993A8 VA: 0x129D3A8 Slot: 18
	public override string ToString(bool verbose) { }

	// RVA: 0x129E448 Offset: 0x129A448 VA: 0x129E448
	public bool Verify() { }

	// RVA: 0x129CBB0 Offset: 0x1298BB0 VA: 0x129CBB0
	private static X509Extension CreateCustomExtensionIfAny(Oid oid) { }

	// RVA: 0x129CB24 Offset: 0x1298B24 VA: 0x129CB24
	internal X509Certificate2Impl get_Impl() { }
}


// Namespace: System.Security.Cryptography.X509Certificates
[DefaultMember("Item")]
public class X509Certificate2Collection : X509CertificateCollection // TypeDefIndex: 3412
{
	// Fields
	private static string[] newline_split; // 0x0

	// Properties
	public X509Certificate2 Item { get; }

	// Methods

	// RVA: 0x129E654 Offset: 0x129A654 VA: 0x129E654
	public void .ctor() { }

	// RVA: 0x129E664 Offset: 0x129A664 VA: 0x129E664
	public void .ctor(X509Certificate2Collection certificates) { }

	// RVA: 0x129E700 Offset: 0x129A700 VA: 0x129E700
	public X509Certificate2 get_Item(int index) { }

	// RVA: 0x129E824 Offset: 0x129A824 VA: 0x129E824
	public int Add(X509Certificate2 certificate) { }

	// RVA: 0x129E690 Offset: 0x129A690 VA: 0x129E690
	public void AddRange(X509Certificate2Collection certificates) { }

	// RVA: 0x129E894 Offset: 0x129A894 VA: 0x129E894
	public bool Contains(X509Certificate2 certificate) { }

	// RVA: 0x129EBD4 Offset: 0x129ABD4 VA: 0x129EBD4
	private string GetKeyIdentifier(X509Certificate2 x) { }

	// RVA: 0x129F458 Offset: 0x129B458 VA: 0x129F458
	public X509Certificate2Collection Find(X509FindType findType, object findValue, bool validOnly) { }

	// RVA: 0x12A0604 Offset: 0x129C604 VA: 0x12A0604
	public X509Certificate2Enumerator GetEnumerator() { }

	// RVA: 0x12A0710 Offset: 0x129C710 VA: 0x12A0710
	private static void .cctor() { }
}


// Namespace: System.Security.Cryptography.X509Certificates
public sealed class X509Certificate2Enumerator : IEnumerator // TypeDefIndex: 3413
{
	// Fields
	private IEnumerator enumerator; // 0x10

	// Properties
	public X509Certificate2 Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	// RVA: 0x12A065C Offset: 0x129C65C VA: 0x12A065C
	internal void .ctor(X509Certificate2Collection collection) { }

	// RVA: 0x12A079C Offset: 0x129C79C VA: 0x12A079C
	public X509Certificate2 get_Current() { }

	// RVA: 0x12A088C Offset: 0x129C88C VA: 0x12A088C
	public bool MoveNext() { }

	// RVA: 0x12A092C Offset: 0x129C92C VA: 0x12A092C Slot: 5
	private object System.Collections.IEnumerator.get_Current() { }

	// RVA: 0x12A09D0 Offset: 0x129C9D0 VA: 0x12A09D0 Slot: 4
	private bool System.Collections.IEnumerator.MoveNext() { }

	// RVA: 0x12A0A70 Offset: 0x129CA70 VA: 0x12A0A70 Slot: 6
	private void System.Collections.IEnumerator.Reset() { }
}


// Namespace: System.Security.Cryptography.X509Certificates
internal abstract class X509Certificate2Impl : X509CertificateImpl // TypeDefIndex: 3414
{
	// Properties
	public abstract IEnumerable<X509Extension> Extensions { get; }
	public abstract X500DistinguishedName IssuerName { get; }
	public abstract AsymmetricAlgorithm PrivateKey { get; set; }
	public abstract string SignatureAlgorithm { get; }
	public abstract X500DistinguishedName SubjectName { get; }
	public abstract int Version { get; }
	internal abstract X509CertificateImplCollection IntermediateCertificates { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 20
	public abstract IEnumerable<X509Extension> get_Extensions();

	// RVA: -1 Offset: -1 Slot: 21
	public abstract X500DistinguishedName get_IssuerName();

	// RVA: -1 Offset: -1 Slot: 22
	public abstract AsymmetricAlgorithm get_PrivateKey();

	// RVA: -1 Offset: -1 Slot: 23
	public abstract void set_PrivateKey(AsymmetricAlgorithm value);

	// RVA: -1 Offset: -1 Slot: 24
	public abstract string get_SignatureAlgorithm();

	// RVA: -1 Offset: -1 Slot: 25
	public abstract X500DistinguishedName get_SubjectName();

	// RVA: -1 Offset: -1 Slot: 26
	public abstract int get_Version();

	// RVA: -1 Offset: -1 Slot: 27
	internal abstract X509CertificateImplCollection get_IntermediateCertificates();

	// RVA: -1 Offset: -1 Slot: 28
	public abstract string GetNameInfo(X509NameType nameType, bool forIssuer);

	// RVA: -1 Offset: -1 Slot: 29
	public abstract bool Verify(X509Certificate2 thisCertificate);

	// RVA: -1 Offset: -1 Slot: 30
	public abstract void AppendPrivateKeyInfo(StringBuilder sb);

	// RVA: 0x12A0B14 Offset: 0x129CB14 VA: 0x12A0B14
	protected void .ctor() { }
}


// Namespace: System.Security.Cryptography.X509Certificates
internal class X509Certificate2ImplMono : X509Certificate2ImplUnix // TypeDefIndex: 3415
{
	// Fields
	private X509CertificateImplCollection intermediateCerts; // 0xB0
	private X509Certificate _cert; // 0xB8
	private static string empty_error; // 0x0
	private static byte[] signedData; // 0x8

	// Properties
	public override bool IsValid { get; }
	private X509Certificate Cert { get; }
	public override bool HasPrivateKey { get; }
	public override AsymmetricAlgorithm PrivateKey { get; set; }
	internal override X509CertificateImplCollection IntermediateCertificates { get; }

	// Methods

	// RVA: 0x12A0B1C Offset: 0x129CB1C VA: 0x12A0B1C Slot: 5
	public override bool get_IsValid() { }

	// RVA: 0x12A0B2C Offset: 0x129CB2C VA: 0x12A0B2C
	public void .ctor(X509Certificate cert) { }

	// RVA: 0x12A0B5C Offset: 0x129CB5C VA: 0x12A0B5C
	private void .ctor(X509Certificate2ImplMono other) { }

	// RVA: 0x12A0BF8 Offset: 0x129CBF8 VA: 0x12A0BF8
	public void .ctor(byte[] rawData, SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags) { }

	// RVA: 0x12A0DA0 Offset: 0x129CDA0 VA: 0x12A0DA0 Slot: 6
	public override X509CertificateImpl Clone() { }

	// RVA: 0x12A0E04 Offset: 0x129CE04 VA: 0x12A0E04
	private X509Certificate get_Cert() { }

	// RVA: 0x12A0E20 Offset: 0x129CE20 VA: 0x12A0E20 Slot: 31
	protected override byte[] GetRawCertData() { }

	// RVA: 0x12A0E58 Offset: 0x129CE58 VA: 0x12A0E58 Slot: 17
	public override bool get_HasPrivateKey() { }

	// RVA: 0x12A0E7C Offset: 0x129CE7C VA: 0x12A0E7C Slot: 22
	public override AsymmetricAlgorithm get_PrivateKey() { }

	// RVA: 0x12A1274 Offset: 0x129D274 VA: 0x12A1274 Slot: 23
	public override void set_PrivateKey(AsymmetricAlgorithm value) { }

	// RVA: 0x12A13FC Offset: 0x129D3FC VA: 0x12A13FC Slot: 18
	public override RSA GetRSAPrivateKey() { }

	// RVA: 0x12A1488 Offset: 0x129D488 VA: 0x12A1488 Slot: 19
	public override DSA GetDSAPrivateKey() { }

	// RVA: 0x12A0D48 Offset: 0x129CD48 VA: 0x12A0D48
	private X509Certificate ImportPkcs12(byte[] rawData, SafePasswordHandle password) { }

	// RVA: 0x12A1514 Offset: 0x129D514 VA: 0x12A1514
	private X509Certificate ImportPkcs12(byte[] rawData, string password) { }

	// RVA: 0x12A1DBC Offset: 0x129DDBC VA: 0x12A1DBC Slot: 29
	public override bool Verify(X509Certificate2 thisCertificate) { }

	// RVA: 0x12A1EE4 Offset: 0x129DEE4 VA: 0x12A1EE4 Slot: 27
	internal override X509CertificateImplCollection get_IntermediateCertificates() { }

	// RVA: 0x12A1EEC Offset: 0x129DEEC VA: 0x12A1EEC
	private static void .cctor() { }
}


// Namespace: System.Security.Cryptography.X509Certificates
internal abstract class X509Certificate2ImplUnix : X509Certificate2Impl // TypeDefIndex: 3416
{
	// Fields
	private bool readCertData; // 0x10
	private CertificateData certData; // 0x18

	// Properties
	public sealed override string KeyAlgorithm { get; }
	public sealed override byte[] KeyAlgorithmParameters { get; }
	public sealed override byte[] PublicKeyValue { get; }
	public sealed override byte[] SerialNumber { get; }
	public sealed override string SignatureAlgorithm { get; }
	public sealed override int Version { get; }
	public sealed override X500DistinguishedName SubjectName { get; }
	public sealed override X500DistinguishedName IssuerName { get; }
	public sealed override string Subject { get; }
	public sealed override string Issuer { get; }
	public sealed override byte[] RawData { get; }
	public sealed override byte[] Thumbprint { get; }
	public sealed override IEnumerable<X509Extension> Extensions { get; }
	public sealed override DateTime NotAfter { get; }
	public sealed override DateTime NotBefore { get; }

	// Methods

	// RVA: 0x12A1FAC Offset: 0x129DFAC VA: 0x12A1FAC
	private void EnsureCertData() { }

	// RVA: -1 Offset: -1 Slot: 31
	protected abstract byte[] GetRawCertData();

	// RVA: 0x12A202C Offset: 0x129E02C VA: 0x12A202C Slot: 13
	public sealed override string get_KeyAlgorithm() { }

	// RVA: 0x12A2044 Offset: 0x129E044 VA: 0x12A2044 Slot: 14
	public sealed override byte[] get_KeyAlgorithmParameters() { }

	// RVA: 0x12A205C Offset: 0x129E05C VA: 0x12A205C Slot: 15
	public sealed override byte[] get_PublicKeyValue() { }

	// RVA: 0x12A2074 Offset: 0x129E074 VA: 0x12A2074 Slot: 16
	public sealed override byte[] get_SerialNumber() { }

	// RVA: 0x12A208C Offset: 0x129E08C VA: 0x12A208C Slot: 24
	public sealed override string get_SignatureAlgorithm() { }

	// RVA: 0x12A20A4 Offset: 0x129E0A4 VA: 0x12A20A4 Slot: 26
	public sealed override int get_Version() { }

	// RVA: 0x12A20C0 Offset: 0x129E0C0 VA: 0x12A20C0 Slot: 25
	public sealed override X500DistinguishedName get_SubjectName() { }

	// RVA: 0x12A20D8 Offset: 0x129E0D8 VA: 0x12A20D8 Slot: 21
	public sealed override X500DistinguishedName get_IssuerName() { }

	// RVA: 0x12A20F0 Offset: 0x129E0F0 VA: 0x12A20F0 Slot: 8
	public sealed override string get_Subject() { }

	// RVA: 0x12A2118 Offset: 0x129E118 VA: 0x12A2118 Slot: 7
	public sealed override string get_Issuer() { }

	// RVA: 0x12A2140 Offset: 0x129E140 VA: 0x12A2140 Slot: 9
	public sealed override byte[] get_RawData() { }

	// RVA: 0x12A2158 Offset: 0x129E158 VA: 0x12A2158 Slot: 12
	public sealed override byte[] get_Thumbprint() { }

	// RVA: 0x12A22E8 Offset: 0x129E2E8 VA: 0x12A22E8 Slot: 28
	public sealed override string GetNameInfo(X509NameType nameType, bool forIssuer) { }

	// RVA: 0x12A231C Offset: 0x129E31C VA: 0x12A231C Slot: 20
	public sealed override IEnumerable<X509Extension> get_Extensions() { }

	// RVA: 0x12A2334 Offset: 0x129E334 VA: 0x12A2334 Slot: 10
	public sealed override DateTime get_NotAfter() { }

	// RVA: 0x12A2394 Offset: 0x129E394 VA: 0x12A2394 Slot: 11
	public sealed override DateTime get_NotBefore() { }

	// RVA: 0x12A23F4 Offset: 0x129E3F4 VA: 0x12A23F4 Slot: 30
	public sealed override void AppendPrivateKeyInfo(StringBuilder sb) { }

	// RVA: 0x12A0B54 Offset: 0x129CB54 VA: 0x12A0B54
	protected void .ctor() { }
}


// Namespace: 
public class X509CertificateCollection.X509CertificateEnumerator : IEnumerator // TypeDefIndex: 3417
{
	// Fields
	private IEnumerator enumerator; // 0x10

	// Properties
	public X509Certificate Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	// RVA: 0x12A2674 Offset: 0x129E674 VA: 0x12A2674
	public void .ctor(X509CertificateCollection mappings) { }

	// RVA: 0x12A2748 Offset: 0x129E748 VA: 0x12A2748
	public X509Certificate get_Current() { }

	// RVA: 0x12A2838 Offset: 0x129E838 VA: 0x12A2838 Slot: 5
	private object System.Collections.IEnumerator.get_Current() { }

	// RVA: 0x12A28DC Offset: 0x129E8DC VA: 0x12A28DC Slot: 4
	private bool System.Collections.IEnumerator.MoveNext() { }

	// RVA: 0x12A297C Offset: 0x129E97C VA: 0x12A297C Slot: 6
	private void System.Collections.IEnumerator.Reset() { }

	// RVA: 0x12A2A20 Offset: 0x129EA20 VA: 0x12A2A20
	public bool MoveNext() { }
}


// Namespace: System.Security.Cryptography.X509Certificates
[DefaultMember("Item")]
[Serializable]
public class X509CertificateCollection : CollectionBase // TypeDefIndex: 3418
{
	// Properties
	public X509Certificate Item { get; }

	// Methods

	// RVA: 0x129E65C Offset: 0x129A65C VA: 0x129E65C
	public void .ctor() { }

	// RVA: 0x12A2488 Offset: 0x129E488 VA: 0x12A2488
	public void .ctor(X509CertificateCollection value) { }

	// RVA: 0x12A2584 Offset: 0x129E584 VA: 0x12A2584
	public X509Certificate get_Item(int index) { }

	// RVA: 0x12A24B4 Offset: 0x129E4B4 VA: 0x12A24B4
	public void AddRange(X509CertificateCollection value) { }

	// RVA: 0x12A261C Offset: 0x129E61C VA: 0x12A261C
	public X509CertificateCollection.X509CertificateEnumerator GetEnumerator() { }

	// RVA: 0x12A2728 Offset: 0x129E728 VA: 0x12A2728 Slot: 2
	public override int GetHashCode() { }
}


// Namespace: System.Security.Cryptography.X509Certificates
[DefaultMember("Item")]
internal class X509CertificateImplCollection : IDisposable // TypeDefIndex: 3419
{
	// Fields
	private List<X509CertificateImpl> list; // 0x10

	// Properties
	public int Count { get; }
	public X509CertificateImpl Item { get; }

	// Methods

	// RVA: 0x12A1CBC Offset: 0x129DCBC VA: 0x12A1CBC
	public void .ctor() { }

	// RVA: 0x12A2AC0 Offset: 0x129EAC0 VA: 0x12A2AC0
	private void .ctor(X509CertificateImplCollection other) { }

	// RVA: 0x12A2BF8 Offset: 0x129EBF8 VA: 0x12A2BF8
	public int get_Count() { }

	// RVA: 0x12A2C14 Offset: 0x129EC14 VA: 0x12A2C14
	public X509CertificateImpl get_Item(int index) { }

	// RVA: 0x12A1D3C Offset: 0x129DD3C VA: 0x12A1D3C
	public void Add(X509CertificateImpl impl, bool takeOwnership) { }

	// RVA: 0x12A0BA0 Offset: 0x129CBA0 VA: 0x12A0BA0
	public X509CertificateImplCollection Clone() { }

	// RVA: 0x12A2C80 Offset: 0x129EC80 VA: 0x12A2C80 Slot: 4
	public void Dispose() { }

	// RVA: 0x12A2CEC Offset: 0x129ECEC VA: 0x12A2CEC Slot: 5
	protected virtual void Dispose(bool disposing) { }

	// RVA: 0x12A2E8C Offset: 0x129EE8C VA: 0x12A2E8C Slot: 1
	protected override void Finalize() { }
}


// Namespace: System.Security.Cryptography.X509Certificates
public class X509Chain : IDisposable // TypeDefIndex: 3420
{
	// Fields
	private X509ChainImpl impl; // 0x10

	// Properties
	internal X509ChainImpl Impl { get; }
	public X509ChainElementCollection ChainElements { get; }
	public X509ChainPolicy ChainPolicy { get; }

	// Methods

	// RVA: 0x12A2F2C Offset: 0x129EF2C VA: 0x12A2F2C
	internal X509ChainImpl get_Impl() { }

	// RVA: 0x12A2F88 Offset: 0x129EF88 VA: 0x12A2F88
	public void .ctor() { }

	// RVA: 0x12A2FAC Offset: 0x129EFAC VA: 0x12A2FAC
	public void .ctor(bool useMachineContext) { }

	// RVA: 0x12A3034 Offset: 0x129F034 VA: 0x12A3034
	internal void .ctor(X509ChainImpl impl) { }

	// RVA: 0x12A3064 Offset: 0x129F064 VA: 0x12A3064
	public void .ctor(IntPtr chainContext) { }

	// RVA: 0x12A30A4 Offset: 0x129F0A4 VA: 0x12A30A4
	public X509ChainElementCollection get_ChainElements() { }

	// RVA: 0x12A30D0 Offset: 0x129F0D0 VA: 0x12A30D0
	public X509ChainPolicy get_ChainPolicy() { }

	// RVA: 0x12A1EA8 Offset: 0x129DEA8 VA: 0x12A1EA8
	public bool Build(X509Certificate2 certificate) { }

	// RVA: 0x12A30FC Offset: 0x129F0FC VA: 0x12A30FC
	public void Reset() { }

	// RVA: 0x12A1E48 Offset: 0x129DE48 VA: 0x12A1E48
	public static X509Chain Create() { }

	// RVA: 0x12A3128 Offset: 0x129F128 VA: 0x12A3128 Slot: 4
	public void Dispose() { }

	// RVA: 0x12A3194 Offset: 0x129F194 VA: 0x12A3194 Slot: 5
	protected virtual void Dispose(bool disposing) { }

	// RVA: 0x12A3220 Offset: 0x129F220 VA: 0x12A3220 Slot: 1
	protected override void Finalize() { }
}


// Namespace: System.Security.Cryptography.X509Certificates
public class X509ChainElement // TypeDefIndex: 3421
{
	// Fields
	private X509Certificate2 certificate; // 0x10
	private X509ChainStatus[] status; // 0x18
	private string info; // 0x20
	private X509ChainStatusFlags compressed_status_flags; // 0x28

	// Methods

	// RVA: 0x12A32C0 Offset: 0x129F2C0 VA: 0x12A32C0
	internal void .ctor(X509Certificate2 certificate) { }

	// RVA: 0x12A332C Offset: 0x129F32C VA: 0x12A332C
	private int Count(X509ChainStatusFlags flags) { }

	// RVA: 0x12A3350 Offset: 0x129F350 VA: 0x12A3350
	private void Set(X509ChainStatus[] status, ref int position, X509ChainStatusFlags flags, X509ChainStatusFlags mask) { }

	// RVA: 0x12A3554 Offset: 0x129F554 VA: 0x12A3554
	internal void UncompressFlags() { }
}


// Namespace: System.Security.Cryptography.X509Certificates
[DefaultMember("Item")]
public sealed class X509ChainElementCollection : ICollection, IEnumerable // TypeDefIndex: 3422
{
	// Fields
	private ArrayList _list; // 0x10

	// Properties
	public int Count { get; }
	public bool IsSynchronized { get; }
	public X509ChainElement Item { get; }
	public object SyncRoot { get; }

	// Methods

	// RVA: 0x12A3798 Offset: 0x129F798 VA: 0x12A3798
	internal void .ctor() { }

	// RVA: 0x12A37FC Offset: 0x129F7FC VA: 0x12A37FC Slot: 5
	public int get_Count() { }

	// RVA: 0x12A3820 Offset: 0x129F820 VA: 0x12A3820 Slot: 7
	public bool get_IsSynchronized() { }

	// RVA: 0x12A3844 Offset: 0x129F844 VA: 0x12A3844
	public X509ChainElement get_Item(int index) { }

	// RVA: 0x12A38DC Offset: 0x129F8DC VA: 0x12A38DC Slot: 6
	public object get_SyncRoot() { }

	// RVA: 0x12A3900 Offset: 0x129F900 VA: 0x12A3900 Slot: 4
	private void System.Collections.ICollection.CopyTo(Array array, int index) { }

	// RVA: 0x12A3924 Offset: 0x129F924 VA: 0x12A3924
	public X509ChainElementEnumerator GetEnumerator() { }

	// RVA: 0x12A3A34 Offset: 0x129FA34 VA: 0x12A3A34 Slot: 8
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	// RVA: 0x12A3A90 Offset: 0x129FA90 VA: 0x12A3A90
	internal void Add(X509Certificate2 certificate) { }

	// RVA: 0x12A3B10 Offset: 0x129FB10 VA: 0x12A3B10
	internal void Clear() { }

	// RVA: 0x12A3B34 Offset: 0x129FB34 VA: 0x12A3B34
	internal bool Contains(X509Certificate2 certificate) { }
}


// Namespace: System.Security.Cryptography.X509Certificates
public sealed class X509ChainElementEnumerator : IEnumerator // TypeDefIndex: 3423
{
	// Fields
	private IEnumerator enumerator; // 0x10

	// Properties
	public X509ChainElement Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	// RVA: 0x12A3980 Offset: 0x129F980 VA: 0x12A3980
	internal void .ctor(IEnumerable enumerable) { }

	// RVA: 0x12A3C3C Offset: 0x129FC3C VA: 0x12A3C3C
	public X509ChainElement get_Current() { }

	// RVA: 0x12A3D2C Offset: 0x129FD2C VA: 0x12A3D2C Slot: 5
	private object System.Collections.IEnumerator.get_Current() { }

	// RVA: 0x12A3DD0 Offset: 0x129FDD0 VA: 0x12A3DD0 Slot: 4
	public bool MoveNext() { }

	// RVA: 0x12A3E70 Offset: 0x129FE70 VA: 0x12A3E70 Slot: 6
	public void Reset() { }
}


// Namespace: System.Security.Cryptography.X509Certificates
internal abstract class X509ChainImpl : IDisposable // TypeDefIndex: 3424
{
	// Properties
	public abstract bool IsValid { get; }
	public abstract X509ChainElementCollection ChainElements { get; }
	public abstract X509ChainPolicy ChainPolicy { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 5
	public abstract bool get_IsValid();

	// RVA: 0x12A3F14 Offset: 0x129FF14 VA: 0x12A3F14
	protected void ThrowIfContextInvalid() { }

	// RVA: -1 Offset: -1 Slot: 6
	public abstract X509ChainElementCollection get_ChainElements();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract X509ChainPolicy get_ChainPolicy();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract bool Build(X509Certificate2 certificate);

	// RVA: -1 Offset: -1 Slot: 9
	public abstract void AddStatus(X509ChainStatusFlags errorCode);

	// RVA: -1 Offset: -1 Slot: 10
	public abstract void Reset();

	// RVA: 0x12A31B4 Offset: 0x129F1B4 VA: 0x12A31B4 Slot: 4
	public void Dispose() { }

	// RVA: 0x12A3FD0 Offset: 0x129FFD0 VA: 0x12A3FD0 Slot: 11
	protected virtual void Dispose(bool disposing) { }

	// RVA: 0x12A3FD4 Offset: 0x129FFD4 VA: 0x12A3FD4 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x12A4074 Offset: 0x12A0074 VA: 0x12A4074
	protected void .ctor() { }
}


// Namespace: System.Security.Cryptography.X509Certificates
internal class X509ChainImplMono : X509ChainImpl // TypeDefIndex: 3425
{
	// Fields
	private StoreLocation location; // 0x10
	private X509ChainElementCollection elements; // 0x18
	private X509ChainPolicy policy; // 0x20
	private X509ChainStatus[] status; // 0x28
	private static X509ChainStatus[] Empty; // 0x0
	private int max_path_length; // 0x30
	private X500DistinguishedName working_issuer_name; // 0x38
	private AsymmetricAlgorithm working_public_key; // 0x40
	private X509ChainElement bce_restriction; // 0x48
	private X509Certificate2Collection roots; // 0x50
	private X509Certificate2Collection cas; // 0x58
	private X509Store root_store; // 0x60
	private X509Store ca_store; // 0x68
	private X509Store user_root_store; // 0x70
	private X509Store user_ca_store; // 0x78
	private X509Certificate2Collection collection; // 0x80

	// Properties
	public override bool IsValid { get; }
	public override X509ChainElementCollection ChainElements { get; }
	public override X509ChainPolicy ChainPolicy { get; }
	private X509Certificate2Collection Roots { get; }
	private X509Certificate2Collection CertificateAuthorities { get; }
	private X509Store LMRootStore { get; }
	private X509Store UserRootStore { get; }
	private X509Store LMCAStore { get; }
	private X509Store UserCAStore { get; }
	private X509Certificate2Collection CertificateCollection { get; }

	// Methods

	// RVA: 0x12A407C Offset: 0x12A007C VA: 0x12A407C
	public void .ctor(bool useMachineContext) { }

	// RVA: 0x12A4148 Offset: 0x12A0148 VA: 0x12A4148 Slot: 5
	public override bool get_IsValid() { }

	// RVA: 0x12A4150 Offset: 0x12A0150 VA: 0x12A4150 Slot: 6
	public override X509ChainElementCollection get_ChainElements() { }

	// RVA: 0x12A4158 Offset: 0x12A0158 VA: 0x12A4158 Slot: 7
	public override X509ChainPolicy get_ChainPolicy() { }

	// RVA: 0x12A4160 Offset: 0x12A0160 VA: 0x12A4160 Slot: 9
	public override void AddStatus(X509ChainStatusFlags error) { }

	// RVA: 0x12A4164 Offset: 0x12A0164 VA: 0x12A4164 Slot: 8
	public override bool Build(X509Certificate2 certificate) { }

	// RVA: 0x12A4854 Offset: 0x12A0854 VA: 0x12A4854 Slot: 10
	public override void Reset() { }

	// RVA: 0x12A496C Offset: 0x12A096C VA: 0x12A496C
	private X509Certificate2Collection get_Roots() { }

	// RVA: 0x12A4C80 Offset: 0x12A0C80 VA: 0x12A4C80
	private X509Certificate2Collection get_CertificateAuthorities() { }

	// RVA: 0x12A4A28 Offset: 0x12A0A28 VA: 0x12A4A28
	private X509Store get_LMRootStore() { }

	// RVA: 0x12A4B14 Offset: 0x12A0B14 VA: 0x12A4B14
	private X509Store get_UserRootStore() { }

	// RVA: 0x12A4D3C Offset: 0x12A0D3C VA: 0x12A4D3C
	private X509Store get_LMCAStore() { }

	// RVA: 0x12A4E28 Offset: 0x12A0E28 VA: 0x12A4E28
	private X509Store get_UserCAStore() { }

	// RVA: 0x12A5420 Offset: 0x12A1420 VA: 0x12A5420
	private X509Certificate2Collection get_CertificateCollection() { }

	// RVA: 0x12A4638 Offset: 0x12A0638 VA: 0x12A4638
	private X509ChainStatusFlags BuildChainFrom(X509Certificate2 certificate) { }

	// RVA: 0x12A5918 Offset: 0x12A1918 VA: 0x12A5918
	private X509Certificate2 SelectBestFromCollection(X509Certificate2 child, X509Certificate2Collection c) { }

	// RVA: 0x12A573C Offset: 0x12A173C VA: 0x12A573C
	private X509Certificate2 FindParent(X509Certificate2 certificate) { }

	// RVA: 0x12A5850 Offset: 0x12A1850 VA: 0x12A5850
	private bool IsChainComplete(X509Certificate2 certificate) { }

	// RVA: 0x12A5BDC Offset: 0x12A1BDC VA: 0x12A5BDC
	private bool IsSelfIssued(X509Certificate2 certificate) { }

	// RVA: 0x12A4720 Offset: 0x12A0720 VA: 0x12A4720
	private void ValidateChain(X509ChainStatusFlags flag) { }

	// RVA: 0x12A5C24 Offset: 0x12A1C24 VA: 0x12A5C24
	private void Process(int n) { }

	// RVA: 0x12A5E98 Offset: 0x12A1E98 VA: 0x12A5E98
	private void PrepareForNextCertificate(int n) { }

	// RVA: 0x12A6254 Offset: 0x12A2254 VA: 0x12A6254
	private void WrapUp() { }

	// RVA: 0x12A63E0 Offset: 0x12A23E0 VA: 0x12A63E0
	private void ProcessCertificateExtensions(X509ChainElement element) { }

	// RVA: 0x12A63A8 Offset: 0x12A23A8 VA: 0x12A63A8
	private bool IsSignedWith(X509Certificate2 signed, AsymmetricAlgorithm pubkey) { }

	// RVA: 0x12A5B2C Offset: 0x12A1B2C VA: 0x12A5B2C
	private string GetSubjectKeyIdentifier(X509Certificate2 certificate) { }

	// RVA: 0x12A5A98 Offset: 0x12A1A98 VA: 0x12A5A98
	private static string GetAuthorityKeyIdentifier(X509Certificate2 certificate) { }

	// RVA: 0x12A662C Offset: 0x12A262C VA: 0x12A662C
	private static string GetAuthorityKeyIdentifier(X509Crl crl) { }

	// RVA: 0x12A64C8 Offset: 0x12A24C8 VA: 0x12A64C8
	private static string GetAuthorityKeyIdentifier(X509Extension ext) { }

	// RVA: 0x12A6084 Offset: 0x12A2084 VA: 0x12A6084
	private void CheckRevocationOnChain(X509ChainStatusFlags flag) { }

	// RVA: 0x12A66B8 Offset: 0x12A26B8 VA: 0x12A66B8
	private X509ChainStatusFlags CheckRevocation(X509Certificate2 certificate, int ca, bool online) { }

	// RVA: 0x12A6784 Offset: 0x12A2784 VA: 0x12A6784
	private X509ChainStatusFlags CheckRevocation(X509Certificate2 certificate, X509Certificate2 ca_cert, bool online) { }

	// RVA: 0x12A70F4 Offset: 0x12A30F4 VA: 0x12A70F4
	private static X509Crl CheckCrls(string subject, string ski, X509Store store) { }

	// RVA: 0x12A6938 Offset: 0x12A2938 VA: 0x12A6938
	private X509Crl FindCrl(X509Certificate2 caCertificate) { }

	// RVA: 0x12A6DB4 Offset: 0x12A2DB4 VA: 0x12A6DB4
	private bool ProcessCrlExtensions(X509Crl crl) { }

	// RVA: 0x12A6AAC Offset: 0x12A2AAC VA: 0x12A6AAC
	private bool ProcessCrlEntryExtensions(X509Crl.X509CrlEntry entry) { }

	// RVA: 0x12A7474 Offset: 0x12A3474 VA: 0x12A7474
	private static void .cctor() { }
}


// Namespace: System.Security.Cryptography.X509Certificates
public sealed class X509ChainPolicy // TypeDefIndex: 3426
{
	// Fields
	private OidCollection apps; // 0x10
	private OidCollection cert; // 0x18
	private X509CertificateCollection store; // 0x20
	private X509Certificate2Collection store2; // 0x28
	private X509RevocationFlag rflag; // 0x30
	private X509RevocationMode mode; // 0x34
	private TimeSpan timeout; // 0x38
	private X509VerificationFlags vflags; // 0x40
	private DateTime vtime; // 0x48

	// Properties
	public X509Certificate2Collection ExtraStore { get; }
	public X509RevocationMode RevocationMode { set; }
	public X509VerificationFlags VerificationFlags { set; }

	// Methods

	// RVA: 0x12A412C Offset: 0x12A012C VA: 0x12A412C
	public void .ctor() { }

	// RVA: 0x12A54DC Offset: 0x12A14DC VA: 0x12A54DC
	public X509Certificate2Collection get_ExtraStore() { }

	// RVA: 0x12A75C4 Offset: 0x12A35C4 VA: 0x12A75C4
	public void set_RevocationMode(X509RevocationMode value) { }

	// RVA: 0x12A7624 Offset: 0x12A3624 VA: 0x12A7624
	public void set_VerificationFlags(X509VerificationFlags value) { }

	// RVA: 0x12A74DC Offset: 0x12A34DC VA: 0x12A74DC
	public void Reset() { }
}


// Namespace: System.Security.Cryptography.X509Certificates
public struct X509ChainStatus // TypeDefIndex: 3427
{
	// Fields
	private X509ChainStatusFlags status; // 0x0
	private string info; // 0x8

	// Methods

	// RVA: 0x12A4834 Offset: 0x12A0834 VA: 0x12A4834
	internal void .ctor(X509ChainStatusFlags flag) { }

	// RVA: 0x12A33C4 Offset: 0x129F3C4 VA: 0x12A33C4
	internal static string GetInformation(X509ChainStatusFlags flags) { }
}


// Namespace: System.Security.Cryptography.X509Certificates
public sealed class X509EnhancedKeyUsageExtension : X509Extension // TypeDefIndex: 3428
{
	// Fields
	private OidCollection _enhKeyUsage; // 0x28
	private AsnDecodeStatus _status; // 0x30

	// Methods

	// RVA: 0x129E514 Offset: 0x129A514 VA: 0x129E514
	public void .ctor() { }

	// RVA: 0x129A2A0 Offset: 0x12962A0 VA: 0x129A2A0
	public void .ctor(AsnEncodedData encodedEnhancedKeyUsages, bool critical) { }

	// RVA: 0x12A78C4 Offset: 0x12A38C4 VA: 0x12A78C4
	public void .ctor(OidCollection enhancedKeyUsages, bool critical) { }

	// RVA: 0x12A7AFC Offset: 0x12A3AFC VA: 0x12A7AFC Slot: 4
	public override void CopyFrom(AsnEncodedData asnEncodedData) { }

	// RVA: 0x12A7684 Offset: 0x12A3684 VA: 0x12A7684
	internal AsnDecodeStatus Decode(byte[] extension) { }

	// RVA: 0x12A7A40 Offset: 0x12A3A40 VA: 0x12A7A40
	internal byte[] Encode() { }

	// RVA: 0x12A7CC4 Offset: 0x12A3CC4 VA: 0x12A7CC4 Slot: 6
	internal override string ToString(bool multiLine) { }
}


// Namespace: System.Security.Cryptography.X509Certificates
public class X509Extension : AsnEncodedData // TypeDefIndex: 3429
{
	// Fields
	private bool _critical; // 0x20

	// Methods

	// RVA: 0x129B9AC Offset: 0x12979AC VA: 0x129B9AC
	protected void .ctor() { }

	// RVA: 0x12A7FA4 Offset: 0x12A3FA4 VA: 0x12A7FA4
	public void .ctor(string oid, byte[] rawData, bool critical) { }

	// RVA: 0x12A7FC8 Offset: 0x12A3FC8 VA: 0x12A7FC8 Slot: 4
	public override void CopyFrom(AsnEncodedData asnEncodedData) { }

	// RVA: 0x129C370 Offset: 0x1298370 VA: 0x129C370
	internal string FormatUnkownData(byte[] data) { }
}


// Namespace: System.Security.Cryptography.X509Certificates
[DefaultMember("Item")]
public sealed class X509ExtensionCollection : ICollection, IEnumerable // TypeDefIndex: 3430
{
	// Fields
	private static byte[] Empty; // 0x0
	private ArrayList _list; // 0x10

	// Properties
	public int Count { get; }
	public bool IsSynchronized { get; }
	public object SyncRoot { get; }
	public X509Extension Item { get; }

	// Methods

	// RVA: 0x129CAC0 Offset: 0x1298AC0 VA: 0x129CAC0
	public void .ctor() { }

	// RVA: 0x129E238 Offset: 0x129A238 VA: 0x129E238 Slot: 5
	public int get_Count() { }

	// RVA: 0x12A80E8 Offset: 0x12A40E8 VA: 0x12A80E8 Slot: 7
	public bool get_IsSynchronized() { }

	// RVA: 0x12A810C Offset: 0x12A410C VA: 0x12A810C Slot: 6
	public object get_SyncRoot() { }

	// RVA: 0x129EC90 Offset: 0x129AC90 VA: 0x129EC90
	public X509Extension get_Item(string oid) { }

	// RVA: 0x129CD74 Offset: 0x1298D74 VA: 0x129CD74
	public int Add(X509Extension extension) { }

	// RVA: 0x12A8110 Offset: 0x12A4110 VA: 0x12A8110 Slot: 4
	private void System.Collections.ICollection.CopyTo(Array array, int index) { }

	// RVA: 0x129E25C Offset: 0x129A25C VA: 0x129E25C
	public X509ExtensionEnumerator GetEnumerator() { }

	// RVA: 0x12A824C Offset: 0x12A424C VA: 0x12A824C Slot: 8
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	// RVA: 0x12A82A8 Offset: 0x12A42A8 VA: 0x12A82A8
	private static void .cctor() { }
}


// Namespace: System.Security.Cryptography.X509Certificates
public sealed class X509ExtensionEnumerator : IEnumerator // TypeDefIndex: 3431
{
	// Fields
	private IEnumerator enumerator; // 0x10

	// Properties
	public X509Extension Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	// RVA: 0x12A8208 Offset: 0x12A4208 VA: 0x12A8208
	internal void .ctor(ArrayList list) { }

	// RVA: 0x129E2B8 Offset: 0x129A2B8 VA: 0x129E2B8
	public X509Extension get_Current() { }

	// RVA: 0x12A8310 Offset: 0x12A4310 VA: 0x12A8310 Slot: 5
	private object System.Collections.IEnumerator.get_Current() { }

	// RVA: 0x129E3A8 Offset: 0x129A3A8 VA: 0x129E3A8 Slot: 4
	public bool MoveNext() { }

	// RVA: 0x12A83B4 Offset: 0x12A43B4 VA: 0x12A83B4 Slot: 6
	public void Reset() { }
}


// Namespace: System.Security.Cryptography.X509Certificates
internal static class X509Helper2 // TypeDefIndex: 3432
{
	// Methods

	// RVA: 0x12A62E0 Offset: 0x12A22E0 VA: 0x12A62E0
	internal static X509Certificate GetMonoCertificate(X509Certificate2 certificate) { }

	// RVA: 0x12A2FDC Offset: 0x129EFDC VA: 0x12A2FDC
	internal static X509ChainImpl CreateChainImpl(bool useMachineContext) { }

	// RVA: 0x12A8458 Offset: 0x12A4458 VA: 0x12A8458
	public static bool IsValid(X509ChainImpl impl) { }

	// RVA: 0x12A2F48 Offset: 0x129EF48 VA: 0x12A2F48
	internal static void ThrowIfContextInvalid(X509ChainImpl impl) { }

	// RVA: 0x12A3F50 Offset: 0x129FF50 VA: 0x12A3F50
	internal static Exception GetInvalidChainContextException() { }
}


// Namespace: System.Security.Cryptography.X509Certificates
public sealed class X509KeyUsageExtension : X509Extension // TypeDefIndex: 3433
{
	// Fields
	private X509KeyUsageFlags _keyUsages; // 0x24
	private AsnDecodeStatus _status; // 0x28

	// Properties
	public X509KeyUsageFlags KeyUsages { get; }

	// Methods

	// RVA: 0x129E474 Offset: 0x129A474 VA: 0x129E474
	public void .ctor() { }

	// RVA: 0x129A374 Offset: 0x1296374 VA: 0x129A374
	public void .ctor(AsnEncodedData encodedKeyUsage, bool critical) { }

	// RVA: 0x12A8620 Offset: 0x12A4620 VA: 0x12A8620
	public void .ctor(X509KeyUsageFlags keyUsages, bool critical) { }

	// RVA: 0x12A059C Offset: 0x129C59C VA: 0x12A059C
	public X509KeyUsageFlags get_KeyUsages() { }

	// RVA: 0x12A8864 Offset: 0x12A4864 VA: 0x12A8864 Slot: 4
	public override void CopyFrom(AsnEncodedData asnEncodedData) { }

	// RVA: 0x12A86F8 Offset: 0x12A46F8 VA: 0x12A86F8
	internal X509KeyUsageFlags GetValidFlags(X509KeyUsageFlags flags) { }

	// RVA: 0x12A846C Offset: 0x12A446C VA: 0x12A846C
	internal AsnDecodeStatus Decode(byte[] extension) { }

	// RVA: 0x12A8708 Offset: 0x12A4708 VA: 0x12A8708
	internal byte[] Encode() { }

	// RVA: 0x12A8A2C Offset: 0x12A4A2C VA: 0x12A8A2C Slot: 6
	internal override string ToString(bool multiLine) { }
}


// Namespace: System.Security.Cryptography.X509Certificates
public sealed class X509Store : IDisposable // TypeDefIndex: 3434
{
	// Fields
	private string _name; // 0x10
	private StoreLocation _location; // 0x18
	private X509Certificate2Collection list; // 0x20
	private OpenFlags _flags; // 0x28
	private X509Store store; // 0x30

	// Properties
	public X509Certificate2Collection Certificates { get; }
	private X509Stores Factory { get; }

	// Methods

	// RVA: 0x12A4F14 Offset: 0x12A0F14 VA: 0x12A4F14
	public void .ctor(StoreName storeName, StoreLocation storeLocation) { }

	// RVA: 0x12A4C00 Offset: 0x12A0C00 VA: 0x12A4C00
	public X509Certificate2Collection get_Certificates() { }

	// RVA: 0x12A8F88 Offset: 0x12A4F88 VA: 0x12A8F88
	private X509Stores get_Factory() { }

	// RVA: 0x12A4950 Offset: 0x12A0950 VA: 0x12A4950
	public void Close() { }

	// RVA: 0x12A8FA4 Offset: 0x12A4FA4 VA: 0x12A8FA4 Slot: 4
	public void Dispose() { }

	// RVA: 0x12A5040 Offset: 0x12A1040 VA: 0x12A5040
	public void Open(OpenFlags flags) { }
}


// Namespace: System.Security.Cryptography.X509Certificates
public sealed class X509SubjectKeyIdentifierExtension : X509Extension // TypeDefIndex: 3435
{
	// Fields
	private byte[] _subjectKeyIdentifier; // 0x28
	private string _ski; // 0x30
	private AsnDecodeStatus _status; // 0x38

	// Properties
	public string SubjectKeyIdentifier { get; }

	// Methods

	// RVA: 0x129E5B4 Offset: 0x129A5B4 VA: 0x129E5B4
	public void .ctor() { }

	// RVA: 0x129A448 Offset: 0x1296448 VA: 0x129A448
	public void .ctor(AsnEncodedData encodedSubjectKeyIdentifier, bool critical) { }

	// RVA: 0x12A9124 Offset: 0x12A5124 VA: 0x12A9124
	public void .ctor(byte[] subjectKeyIdentifier, bool critical) { }

	// RVA: 0x12A9348 Offset: 0x12A5348 VA: 0x12A9348
	public void .ctor(string subjectKeyIdentifier, bool critical) { }

	// RVA: 0x12A959C Offset: 0x12A559C VA: 0x12A959C
	public void .ctor(PublicKey key, bool critical) { }

	// RVA: 0x129F024 Offset: 0x129B024 VA: 0x129F024
	public void .ctor(PublicKey key, X509SubjectKeyIdentifierHashAlgorithm algorithm, bool critical) { }

	// RVA: 0x129F3D4 Offset: 0x129B3D4 VA: 0x129F3D4
	public string get_SubjectKeyIdentifier() { }

	// RVA: 0x12A95A8 Offset: 0x12A55A8 VA: 0x12A95A8 Slot: 4
	public override void CopyFrom(AsnEncodedData asnEncodedData) { }

	// RVA: 0x12A9770 Offset: 0x12A5770 VA: 0x12A9770
	internal static byte FromHexChar(char c) { }

	// RVA: 0x12A97B4 Offset: 0x12A57B4 VA: 0x12A97B4
	internal static byte FromHexChars(char c1, char c2) { }

	// RVA: 0x12A94A8 Offset: 0x12A54A8 VA: 0x12A94A8
	internal static byte[] FromHex(string hex) { }

	// RVA: 0x12A8FC0 Offset: 0x12A4FC0 VA: 0x12A8FC0
	internal AsnDecodeStatus Decode(byte[] extension) { }

	// RVA: 0x12A92D4 Offset: 0x12A52D4 VA: 0x12A92D4
	internal byte[] Encode() { }

	// RVA: 0x12A9850 Offset: 0x12A5850 VA: 0x12A9850 Slot: 6
	internal override string ToString(bool multiLine) { }
}


// Namespace: System.ComponentModel
[Usage(32767)]
public class DefaultValueAttribute : Attribute // TypeDefIndex: 3436
{
	// Fields
	private object _value; // 0x10

	// Properties
	public virtual object Value { get; }

	// Methods

	// RVA: 0x12A9A88 Offset: 0x12A5A88 VA: 0x12A9A88
	public void .ctor(int value) { }

	// RVA: 0x12A9AF4 Offset: 0x12A5AF4 VA: 0x12A9AF4
	public void .ctor(long value) { }

	// RVA: 0x12A9B60 Offset: 0x12A5B60 VA: 0x12A9B60
	public void .ctor(bool value) { }

	// RVA: 0x12A9BD0 Offset: 0x12A5BD0 VA: 0x12A9BD0
	public void .ctor(string value) { }

	// RVA: 0x12A9BF8 Offset: 0x12A5BF8 VA: 0x12A9BF8
	public void .ctor(object value) { }

	// RVA: 0x12A9C20 Offset: 0x12A5C20 VA: 0x12A9C20 Slot: 7
	public virtual object get_Value() { }

	// RVA: 0x12A9C28 Offset: 0x12A5C28 VA: 0x12A9C28 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x12A9CF0 Offset: 0x12A5CF0 VA: 0x12A9CF0 Slot: 2
	public override int GetHashCode() { }
}


// Namespace: System.ComponentModel
public sealed class AsyncOperation // TypeDefIndex: 3437
{
	// Fields
	private readonly SynchronizationContext _syncContext; // 0x10
	private readonly object _userSuppliedState; // 0x18
	private bool _alreadyCompleted; // 0x20

	// Methods

	// RVA: 0x12A9CF8 Offset: 0x12A5CF8 VA: 0x12A9CF8
	private void .ctor(object userSuppliedState, SynchronizationContext syncContext) { }

	// RVA: 0x12A9D3C Offset: 0x12A5D3C VA: 0x12A9D3C Slot: 1
	protected override void Finalize() { }

	// RVA: 0x12A9DE8 Offset: 0x12A5DE8 VA: 0x12A9DE8
	public void Post(SendOrPostCallback d, object arg) { }

	// RVA: 0x12A9E50 Offset: 0x12A5E50 VA: 0x12A9E50
	public void PostOperationCompleted(SendOrPostCallback d, object arg) { }

	// RVA: 0x12A9DF0 Offset: 0x12A5DF0 VA: 0x12A9DF0
	private void PostCore(SendOrPostCallback d, object arg, bool markCompleted) { }

	// RVA: 0x12A9E6C Offset: 0x12A5E6C VA: 0x12A9E6C
	private void OperationCompletedCore() { }

	// RVA: 0x12A9F58 Offset: 0x12A5F58 VA: 0x12A9F58
	private void VerifyNotCompleted() { }

	// RVA: 0x12A9FB4 Offset: 0x12A5FB4 VA: 0x12A9FB4
	private void VerifyDelegateNotNull(SendOrPostCallback d) { }

	// RVA: 0x12AA020 Offset: 0x12A6020 VA: 0x12AA020
	internal static AsyncOperation CreateOperation(object userSuppliedState, SynchronizationContext syncContext) { }
}


// Namespace: System.ComponentModel
public static class AsyncOperationManager // TypeDefIndex: 3438
{
	// Properties
	public static SynchronizationContext SynchronizationContext { get; }

	// Methods

	// RVA: 0x12AA088 Offset: 0x12A6088 VA: 0x12AA088
	public static AsyncOperation CreateOperation(object userSuppliedState) { }

	// RVA: 0x12AA0A4 Offset: 0x12A60A4 VA: 0x12AA0A4
	public static SynchronizationContext get_SynchronizationContext() { }
}


// Namespace: System.ComponentModel
[Usage(32767)]
public sealed class BrowsableAttribute : Attribute // TypeDefIndex: 3439
{
	// Fields
	public static readonly BrowsableAttribute Yes; // 0x0
	public static readonly BrowsableAttribute No; // 0x8
	public static readonly BrowsableAttribute Default; // 0x10
	[CompilerGenerated]
	private readonly bool <Browsable>k__BackingField; // 0x10

	// Properties
	public bool Browsable { get; }

	// Methods

	// RVA: 0x12AA108 Offset: 0x12A6108 VA: 0x12AA108
	public void .ctor(bool browsable) { }

	[CompilerGenerated]
	// RVA: 0x12AA130 Offset: 0x12A6130 VA: 0x12AA130
	public bool get_Browsable() { }

	// RVA: 0x12AA138 Offset: 0x12A6138 VA: 0x12AA138 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x12AA208 Offset: 0x12A6208 VA: 0x12AA208 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x12AA274 Offset: 0x12A6274 VA: 0x12AA274 Slot: 6
	public override bool IsDefaultAttribute() { }

	// RVA: 0x12AA2DC Offset: 0x12A62DC VA: 0x12AA2DC
	private static void .cctor() { }
}


// Namespace: System.ComponentModel
[DefaultMember("Item")]
public class ComponentCollection : ReadOnlyCollectionBase // TypeDefIndex: 3440
{
	// Properties
	public virtual IComponent Item { get; }

	// Methods

	// RVA: 0x12AA368 Offset: 0x12A6368 VA: 0x12AA368 Slot: 11
	public virtual IComponent get_Item(string name) { }
}


// Namespace: System.ComponentModel
[Usage(32767)]
public class DescriptionAttribute : Attribute // TypeDefIndex: 3441
{
	// Fields
	public static readonly DescriptionAttribute Default; // 0x0
	[CompilerGenerated]
	private string <DescriptionValue>k__BackingField; // 0x10

	// Properties
	public virtual string Description { get; }

	// Methods

	// RVA: 0x12AA8DC Offset: 0x12A68DC VA: 0x12AA8DC
	public void .ctor() { }

	// RVA: 0x12AA938 Offset: 0x12A6938 VA: 0x12AA938
	public void .ctor(string description) { }

	// RVA: 0x12AA960 Offset: 0x12A6960 VA: 0x12AA960 Slot: 7
	public virtual string get_Description() { }

	// RVA: 0x12AA968 Offset: 0x12A6968 VA: 0x12AA968 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x12AAA34 Offset: 0x12A6A34 VA: 0x12AAA34 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x12AAA5C Offset: 0x12A6A5C VA: 0x12AAA5C Slot: 6
	public override bool IsDefaultAttribute() { }

	// RVA: 0x12AAAC4 Offset: 0x12A6AC4 VA: 0x12AAAC4
	private static void .cctor() { }
}


// Namespace: System.ComponentModel
[Usage(32767)]
public sealed class DesignOnlyAttribute : Attribute // TypeDefIndex: 3442
{
	// Fields
	[CompilerGenerated]
	private readonly bool <IsDesignOnly>k__BackingField; // 0x10
	public static readonly DesignOnlyAttribute Yes; // 0x0
	public static readonly DesignOnlyAttribute No; // 0x8
	public static readonly DesignOnlyAttribute Default; // 0x10

	// Properties
	public bool IsDesignOnly { get; }

	// Methods

	// RVA: 0x12AAB1C Offset: 0x12A6B1C VA: 0x12AAB1C
	public void .ctor(bool isDesignOnly) { }

	[CompilerGenerated]
	// RVA: 0x12AAB44 Offset: 0x12A6B44 VA: 0x12AAB44
	public bool get_IsDesignOnly() { }

	// RVA: 0x12AAB4C Offset: 0x12A6B4C VA: 0x12AAB4C Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x12AAC1C Offset: 0x12A6C1C VA: 0x12AAC1C Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x12AAC88 Offset: 0x12A6C88 VA: 0x12AAC88 Slot: 6
	public override bool IsDefaultAttribute() { }

	// RVA: 0x12AACFC Offset: 0x12A6CFC VA: 0x12AACFC
	private static void .cctor() { }
}


// Namespace: System.ComponentModel
public enum DesignerSerializationVisibility // TypeDefIndex: 3443
{
	// Fields
	public int value__; // 0x0
	public const DesignerSerializationVisibility Hidden = 0;
	public const DesignerSerializationVisibility Visible = 1;
	public const DesignerSerializationVisibility Content = 2;
}


// Namespace: System.ComponentModel
[Usage(960)]
public sealed class DesignerSerializationVisibilityAttribute : Attribute // TypeDefIndex: 3444
{
	// Fields
	public static readonly DesignerSerializationVisibilityAttribute Content; // 0x0
	public static readonly DesignerSerializationVisibilityAttribute Hidden; // 0x8
	public static readonly DesignerSerializationVisibilityAttribute Visible; // 0x10
	public static readonly DesignerSerializationVisibilityAttribute Default; // 0x18
	[CompilerGenerated]
	private readonly DesignerSerializationVisibility <Visibility>k__BackingField; // 0x10

	// Properties
	public DesignerSerializationVisibility Visibility { get; }

	// Methods

	// RVA: 0x12AAD84 Offset: 0x12A6D84 VA: 0x12AAD84
	public void .ctor(DesignerSerializationVisibility visibility) { }

	[CompilerGenerated]
	// RVA: 0x12AADAC Offset: 0x12A6DAC VA: 0x12AADAC
	public DesignerSerializationVisibility get_Visibility() { }

	// RVA: 0x12AADB4 Offset: 0x12A6DB4 VA: 0x12AADB4 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x12AAE80 Offset: 0x12A6E80 VA: 0x12AAE80 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x12AAE88 Offset: 0x12A6E88 VA: 0x12AAE88 Slot: 6
	public override bool IsDefaultAttribute() { }

	// RVA: 0x12AAEF0 Offset: 0x12A6EF0 VA: 0x12AAEF0
	private static void .cctor() { }
}


// Namespace: System.ComponentModel
[Usage(708)]
public class DisplayNameAttribute : Attribute // TypeDefIndex: 3445
{
	// Fields
	public static readonly DisplayNameAttribute Default; // 0x0
	[CompilerGenerated]
	private string <DisplayNameValue>k__BackingField; // 0x10

	// Methods

	// RVA: 0x12AAF9C Offset: 0x12A6F9C VA: 0x12AAF9C
	public void .ctor() { }

	// RVA: 0x12AAFF8 Offset: 0x12A6FF8 VA: 0x12AAFF8
	public void .ctor(string displayName) { }

	// RVA: 0x12AB020 Offset: 0x12A7020 VA: 0x12AB020 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x12AB0CC Offset: 0x12A70CC VA: 0x12AB0CC Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x12AB0EC Offset: 0x12A70EC VA: 0x12AB0EC Slot: 6
	public override bool IsDefaultAttribute() { }

	// RVA: 0x12AB154 Offset: 0x12A7154 VA: 0x12AB154
	private static void .cctor() { }
}


// Namespace: 
private sealed class EventHandlerList.ListEntry // TypeDefIndex: 3446
{
	// Fields
	internal EventHandlerList.ListEntry _next; // 0x10
	internal object _key; // 0x18
	internal Delegate _handler; // 0x20
}


// Namespace: System.ComponentModel
[DefaultMember("Item")]
public sealed class EventHandlerList // TypeDefIndex: 3447
{
	// Fields
	private EventHandlerList.ListEntry _head; // 0x10
	private Component _parent; // 0x18

	// Properties
	public Delegate Item { get; }

	// Methods

	// RVA: 0x12AB1AC Offset: 0x12A71AC VA: 0x12AB1AC
	public Delegate get_Item(object key) { }

	// RVA: 0x12AB1D8 Offset: 0x12A71D8 VA: 0x12AB1D8
	private EventHandlerList.ListEntry Find(object key) { }
}


// Namespace: System.ComponentModel
public interface IContainer : IDisposable // TypeDefIndex: 3448
{
	// Properties
	public abstract ComponentCollection Components { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract ComponentCollection get_Components();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void Remove(IComponent component);
}


// Namespace: System.ComponentModel
public interface ISite : IServiceProvider // TypeDefIndex: 3449
{
	// Properties
	public abstract IContainer Container { get; }
	public abstract bool DesignMode { get; }
	public abstract string Name { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract IContainer get_Container();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract bool get_DesignMode();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract string get_Name();
}


// Namespace: System.ComponentModel
[Serializable]
public class InvalidEnumArgumentException : ArgumentException // TypeDefIndex: 3450
{
	// Methods

	// RVA: 0x12AB1F0 Offset: 0x12A71F0 VA: 0x12AB1F0
	public void .ctor() { }

	// RVA: 0x12AB1FC Offset: 0x12A71FC VA: 0x12AB1FC
	public void .ctor(string message) { }

	// RVA: 0x12AB204 Offset: 0x12A7204 VA: 0x12AB204
	protected void .ctor(SerializationInfo info, StreamingContext context) { }
}


// Namespace: System.ComponentModel
[Usage(32767)]
public sealed class ReadOnlyAttribute : Attribute // TypeDefIndex: 3451
{
	// Fields
	public static readonly ReadOnlyAttribute Yes; // 0x0
	public static readonly ReadOnlyAttribute No; // 0x8
	public static readonly ReadOnlyAttribute Default; // 0x10
	[CompilerGenerated]
	private readonly bool <IsReadOnly>k__BackingField; // 0x10

	// Properties
	public bool IsReadOnly { get; }

	// Methods

	// RVA: 0x12AB20C Offset: 0x12A720C VA: 0x12AB20C
	public void .ctor(bool isReadOnly) { }

	[CompilerGenerated]
	// RVA: 0x12AB234 Offset: 0x12A7234 VA: 0x12AB234
	public bool get_IsReadOnly() { }

	// RVA: 0x12AB23C Offset: 0x12A723C VA: 0x12AB23C Slot: 0
	public override bool Equals(object value) { }

	// RVA: 0x12AB30C Offset: 0x12A730C VA: 0x12AB30C Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x12AB314 Offset: 0x12A7314 VA: 0x12AB314 Slot: 6
	public override bool IsDefaultAttribute() { }

	// RVA: 0x12AB388 Offset: 0x12A7388 VA: 0x12AB388
	private static void .cctor() { }
}


// Namespace: System.ComponentModel
[Usage(32767)]
public sealed class AmbientValueAttribute : Attribute // TypeDefIndex: 3452
{
	// Fields
	[CompilerGenerated]
	private readonly object <Value>k__BackingField; // 0x10
}


// Namespace: 
private class ArrayConverter.ArrayPropertyDescriptor : TypeConverter.SimplePropertyDescriptor // TypeDefIndex: 3453
{
	// Fields
	private readonly int _index; // 0x98

	// Methods

	// RVA: 0x12AB7B4 Offset: 0x12A77B4 VA: 0x12AB7B4
	public void .ctor(Type arrayType, Type elementType, int index) { }

	// RVA: 0x12AB87C Offset: 0x12A787C VA: 0x12AB87C Slot: 18
	public override object GetValue(object instance) { }

	// RVA: 0x12AB930 Offset: 0x12A7930 VA: 0x12AB930 Slot: 21
	public override void SetValue(object instance, object value) { }
}


// Namespace: System.ComponentModel
public class ArrayConverter : CollectionConverter // TypeDefIndex: 3454
{
	// Methods

	// RVA: 0x12AB410 Offset: 0x12A7410 VA: 0x12AB410 Slot: 7
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType) { }

	// RVA: 0x12AB5D8 Offset: 0x12A75D8 VA: 0x12AB5D8 Slot: 10
	public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes) { }

	// RVA: 0x12AB86C Offset: 0x12A786C VA: 0x12AB86C Slot: 11
	public override bool GetPropertiesSupported(ITypeDescriptorContext context) { }

	// RVA: 0x12AB874 Offset: 0x12A7874 VA: 0x12AB874
	public void .ctor() { }
}


// Namespace: 
private struct AttributeCollection.AttributeEntry // TypeDefIndex: 3455
{
	// Fields
	public Type type; // 0x0
	public int index; // 0x8
}


// Namespace: System.ComponentModel
[DefaultMember("Item")]
public class AttributeCollection : ICollection, IEnumerable // TypeDefIndex: 3456
{
	// Fields
	public static readonly AttributeCollection Empty; // 0x0
	private static Hashtable s_defaultAttributes; // 0x8
	private readonly Attribute[] _attributes; // 0x10
	private static readonly object s_internalSyncObject; // 0x10
	private AttributeCollection.AttributeEntry[] _foundAttributeTypes; // 0x18
	private int _index; // 0x20

	// Properties
	public int Count { get; }
	public virtual Attribute Item { get; }
	private bool System.Collections.ICollection.IsSynchronized { get; }
	private object System.Collections.ICollection.SyncRoot { get; }
	private int System.Collections.ICollection.Count { get; }

	// Methods

	// RVA: 0x12ABA30 Offset: 0x12A7A30 VA: 0x12ABA30
	public void .ctor(Attribute[] attributes) { }

	// RVA: 0x12ABB2C Offset: 0x12A7B2C VA: 0x12ABB2C
	public int get_Count() { }

	// RVA: 0x12ABB48 Offset: 0x12A7B48 VA: 0x12ABB48 Slot: 9
	public virtual Attribute get_Item(Type attributeType) { }

	// RVA: 0x12AC4F8 Offset: 0x12A84F8 VA: 0x12AC4F8
	public bool Contains(Attribute attribute) { }

	// RVA: 0x12ABFEC Offset: 0x12A7FEC VA: 0x12ABFEC
	protected Attribute GetDefaultAttribute(Type attributeType) { }

	// RVA: 0x12AC558 Offset: 0x12A8558 VA: 0x12AC558
	public IEnumerator GetEnumerator() { }

	// RVA: 0x12AC574 Offset: 0x12A8574 VA: 0x12AC574 Slot: 7
	private bool System.Collections.ICollection.get_IsSynchronized() { }

	// RVA: 0x12AC57C Offset: 0x12A857C VA: 0x12AC57C Slot: 6
	private object System.Collections.ICollection.get_SyncRoot() { }

	// RVA: 0x12AC584 Offset: 0x12A8584 VA: 0x12AC584 Slot: 5
	private int System.Collections.ICollection.get_Count() { }

	// RVA: 0x12AC5A0 Offset: 0x12A85A0 VA: 0x12AC5A0 Slot: 8
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	// RVA: 0x12AC5BC Offset: 0x12A85BC VA: 0x12AC5BC Slot: 4
	public void CopyTo(Array array, int index) { }

	// RVA: 0x12AC5E8 Offset: 0x12A85E8 VA: 0x12AC5E8
	private static void .cctor() { }
}


// Namespace: System.ComponentModel
[Usage(128)]
public class AttributeProviderAttribute : Attribute // TypeDefIndex: 3457
{
	// Fields
	[CompilerGenerated]
	private readonly string <TypeName>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly string <PropertyName>k__BackingField; // 0x18
}


// Namespace: System.ComponentModel
public abstract class BaseNumberConverter : TypeConverter // TypeDefIndex: 3458
{
	// Properties
	internal virtual bool AllowHex { get; }
	internal abstract Type TargetType { get; }

	// Methods

	// RVA: 0x12AC678 Offset: 0x12A8678 VA: 0x12AC678
	internal void .ctor() { }

	// RVA: 0x12AC680 Offset: 0x12A8680 VA: 0x12AC680 Slot: 16
	internal virtual bool get_AllowHex() { }

	// RVA: -1 Offset: -1 Slot: 17
	internal abstract Type get_TargetType();

	// RVA: -1 Offset: -1 Slot: 18
	internal abstract object FromString(string value, int radix);

	// RVA: -1 Offset: -1 Slot: 19
	internal abstract object FromString(string value, NumberFormatInfo formatInfo);

	// RVA: -1 Offset: -1 Slot: 20
	internal abstract string ToString(object value, NumberFormatInfo formatInfo);

	// RVA: 0x12AC688 Offset: 0x12A8688 VA: 0x12AC688 Slot: 4
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType) { }

	// RVA: 0x12AC750 Offset: 0x12A8750 VA: 0x12AC750 Slot: 6
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value) { }

	// RVA: 0x12ACB48 Offset: 0x12A8B48 VA: 0x12ACB48 Slot: 7
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType) { }

	// RVA: 0x12ACDE8 Offset: 0x12A8DE8 VA: 0x12ACDE8 Slot: 5
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType) { }
}


// Namespace: System.ComponentModel
public class BooleanConverter : TypeConverter // TypeDefIndex: 3459
{
	// Fields
	private static TypeConverter.StandardValuesCollection s_values; // 0x0

	// Methods

	// RVA: 0x12ACE20 Offset: 0x12A8E20 VA: 0x12ACE20 Slot: 4
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType) { }

	// RVA: 0x12ACEE8 Offset: 0x12A8EE8 VA: 0x12ACEE8 Slot: 6
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value) { }

	// RVA: 0x12AD0E0 Offset: 0x12A90E0 VA: 0x12AD0E0 Slot: 12
	public override TypeConverter.StandardValuesCollection GetStandardValues(ITypeDescriptorContext context) { }

	// RVA: 0x12AD240 Offset: 0x12A9240 VA: 0x12AD240 Slot: 13
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context) { }

	// RVA: 0x12AD248 Offset: 0x12A9248 VA: 0x12AD248 Slot: 14
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context) { }

	// RVA: 0x12AD250 Offset: 0x12A9250 VA: 0x12AD250
	public void .ctor() { }
}


// Namespace: System.ComponentModel
public class ByteConverter : BaseNumberConverter // TypeDefIndex: 3460
{
	// Properties
	internal override Type TargetType { get; }

	// Methods

	// RVA: 0x12AD258 Offset: 0x12A9258 VA: 0x12AD258 Slot: 17
	internal override Type get_TargetType() { }

	// RVA: 0x12AD2C4 Offset: 0x12A92C4 VA: 0x12AD2C4 Slot: 18
	internal override object FromString(string value, int radix) { }

	// RVA: 0x12AD358 Offset: 0x12A9358 VA: 0x12AD358 Slot: 19
	internal override object FromString(string value, NumberFormatInfo formatInfo) { }

	// RVA: 0x12AD3CC Offset: 0x12A93CC VA: 0x12AD3CC Slot: 20
	internal override string ToString(object value, NumberFormatInfo formatInfo) { }

	// RVA: 0x12AD47C Offset: 0x12A947C VA: 0x12AD47C
	public void .ctor() { }
}


// Namespace: System.ComponentModel
public class CharConverter : TypeConverter // TypeDefIndex: 3461
{
	// Methods

	// RVA: 0x12AD484 Offset: 0x12A9484 VA: 0x12AD484 Slot: 4
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType) { }

	// RVA: 0x12AD54C Offset: 0x12A954C VA: 0x12AD54C Slot: 7
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType) { }

	// RVA: 0x12AD67C Offset: 0x12A967C VA: 0x12AD67C Slot: 6
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value) { }

	// RVA: 0x12AD804 Offset: 0x12A9804 VA: 0x12AD804
	public void .ctor() { }
}


// Namespace: System.ComponentModel
public enum CollectionChangeAction // TypeDefIndex: 3462
{
	// Fields
	public int value__; // 0x0
	public const CollectionChangeAction Add = 1;
	public const CollectionChangeAction Remove = 2;
	public const CollectionChangeAction Refresh = 3;
}


// Namespace: System.ComponentModel
public class CollectionChangeEventArgs : EventArgs // TypeDefIndex: 3463
{
	// Fields
	[CompilerGenerated]
	private readonly CollectionChangeAction <Action>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly object <Element>k__BackingField; // 0x18

	// Methods

	// RVA: 0x12AD80C Offset: 0x12A980C VA: 0x12AD80C
	public void .ctor(CollectionChangeAction action, object element) { }
}


// Namespace: System.ComponentModel
public sealed class CollectionChangeEventHandler : MulticastDelegate // TypeDefIndex: 3464
{
	// Methods

	// RVA: 0x12AD880 Offset: 0x12A9880 VA: 0x12AD880
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x12AD984 Offset: 0x12A9984 VA: 0x12AD984 Slot: 12
	public virtual void Invoke(object sender, CollectionChangeEventArgs e) { }
}


// Namespace: 
private class CultureInfoConverter.CultureComparer : IComparer // TypeDefIndex: 3465
{
	// Fields
	private CultureInfoConverter _converter; // 0x10

	// Methods

	// RVA: 0x12AEAAC Offset: 0x12AAAAC VA: 0x12AEAAC
	public void .ctor(CultureInfoConverter cultureConverter) { }

	// RVA: 0x12AEAD4 Offset: 0x12AAAD4 VA: 0x12AEAD4 Slot: 4
	public int Compare(object item1, object item2) { }
}


// Namespace: 
private static class CultureInfoConverter.CultureInfoMapper // TypeDefIndex: 3466
{
	// Fields
	private static readonly Dictionary<string, string> s_cultureInfoNameMap; // 0x0

	// Methods

	// RVA: 0x12AEC40 Offset: 0x12AAC40 VA: 0x12AEC40
	private static Dictionary<string, string> CreateMap() { }

	// RVA: 0x12B2D20 Offset: 0x12AED20 VA: 0x12B2D20
	public static string GetCultureInfoName(string cultureInfoDisplayName) { }

	// RVA: 0x12B2DC0 Offset: 0x12AEDC0 VA: 0x12B2DC0
	private static void .cctor() { }
}


// Namespace: System.ComponentModel
public class CultureInfoConverter : TypeConverter // TypeDefIndex: 3467
{
	// Fields
	private TypeConverter.StandardValuesCollection _values; // 0x10
	private const string DefaultInvariantCultureString = "(Default)";

	// Properties
	private string DefaultCultureString { get; }

	// Methods

	// RVA: 0x12AD998 Offset: 0x12A9998 VA: 0x12AD998
	private string get_DefaultCultureString() { }

	// RVA: 0x12AD9D8 Offset: 0x12A99D8 VA: 0x12AD9D8 Slot: 16
	protected virtual string GetCultureName(CultureInfo culture) { }

	// RVA: 0x12AD9F0 Offset: 0x12A99F0 VA: 0x12AD9F0 Slot: 4
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType) { }

	// RVA: 0x12ADAB8 Offset: 0x12A9AB8 VA: 0x12ADAB8 Slot: 5
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType) { }

	// RVA: 0x12ADB80 Offset: 0x12A9B80 VA: 0x12ADB80 Slot: 6
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value) { }

	// RVA: 0x12AE478 Offset: 0x12AA478 VA: 0x12AE478 Slot: 7
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType) { }

	// RVA: 0x12AE8B4 Offset: 0x12AA8B4 VA: 0x12AE8B4 Slot: 12
	public override TypeConverter.StandardValuesCollection GetStandardValues(ITypeDescriptorContext context) { }

	// RVA: 0x12AEA94 Offset: 0x12AAA94 VA: 0x12AEA94 Slot: 13
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context) { }

	// RVA: 0x12AEA9C Offset: 0x12AAA9C VA: 0x12AEA9C Slot: 14
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context) { }

	// RVA: 0x12AEAA4 Offset: 0x12AAAA4 VA: 0x12AEAA4
	public void .ctor() { }
}


// Namespace: System.ComponentModel
public abstract class CustomTypeDescriptor : ICustomTypeDescriptor // TypeDefIndex: 3468
{
	// Fields
	private readonly ICustomTypeDescriptor _parent; // 0x10

	// Methods

	// RVA: 0x12B2E0C Offset: 0x12AEE0C VA: 0x12B2E0C
	protected void .ctor() { }

	// RVA: 0x12B2E14 Offset: 0x12AEE14 VA: 0x12B2E14 Slot: 9
	public virtual AttributeCollection GetAttributes() { }

	// RVA: 0x12B2EEC Offset: 0x12AEEEC VA: 0x12B2EEC Slot: 10
	public virtual TypeConverter GetConverter() { }

	// RVA: 0x12B2FC4 Offset: 0x12AEFC4 VA: 0x12B2FC4 Slot: 11
	public virtual PropertyDescriptorCollection GetProperties() { }

	// RVA: 0x12B30A0 Offset: 0x12AF0A0 VA: 0x12B30A0 Slot: 12
	public virtual PropertyDescriptorCollection GetProperties(Attribute[] attributes) { }

	// RVA: 0x12B3184 Offset: 0x12AF184 VA: 0x12B3184 Slot: 13
	public virtual object GetPropertyOwner(PropertyDescriptor pd) { }
}


// Namespace: System.ComponentModel
public class DateTimeConverter : TypeConverter // TypeDefIndex: 3469
{
	// Methods

	// RVA: 0x12B323C Offset: 0x12AF23C VA: 0x12B323C Slot: 4
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType) { }

	// RVA: 0x12B3304 Offset: 0x12AF304 VA: 0x12B3304 Slot: 5
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType) { }

	// RVA: 0x12B33CC Offset: 0x12AF3CC VA: 0x12B33CC Slot: 6
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value) { }

	// RVA: 0x12B36F4 Offset: 0x12AF6F4 VA: 0x12B36F4 Slot: 7
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType) { }

	// RVA: 0x12B3A8C Offset: 0x12AFA8C VA: 0x12B3A8C
	public void .ctor() { }
}


// Namespace: System.ComponentModel
public class DecimalConverter : BaseNumberConverter // TypeDefIndex: 3470
{
	// Properties
	internal override bool AllowHex { get; }
	internal override Type TargetType { get; }

	// Methods

	// RVA: 0x12B3A94 Offset: 0x12AFA94 VA: 0x12B3A94 Slot: 16
	internal override bool get_AllowHex() { }

	// RVA: 0x12B3A9C Offset: 0x12AFA9C VA: 0x12B3A9C Slot: 17
	internal override Type get_TargetType() { }

	// RVA: 0x12B3B08 Offset: 0x12AFB08 VA: 0x12B3B08 Slot: 5
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType) { }

	// RVA: 0x12B3BD0 Offset: 0x12AFBD0 VA: 0x12B3BD0 Slot: 7
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType) { }

	// RVA: 0x12B3EF4 Offset: 0x12AFEF4 VA: 0x12B3EF4 Slot: 18
	internal override object FromString(string value, int radix) { }

	// RVA: 0x12B3FE0 Offset: 0x12AFFE0 VA: 0x12B3FE0 Slot: 19
	internal override object FromString(string value, NumberFormatInfo formatInfo) { }

	// RVA: 0x12B408C Offset: 0x12B008C VA: 0x12B408C Slot: 20
	internal override string ToString(object value, NumberFormatInfo formatInfo) { }

	// RVA: 0x12B4174 Offset: 0x12B0174 VA: 0x12B4174
	public void .ctor() { }
}


// Namespace: System.ComponentModel
internal sealed class DelegatingTypeDescriptionProvider : TypeDescriptionProvider // TypeDefIndex: 3471
{
	// Fields
	private readonly Type _type; // 0x20

	// Properties
	internal TypeDescriptionProvider Provider { get; }

	// Methods

	// RVA: 0x12B417C Offset: 0x12B017C VA: 0x12B417C
	internal void .ctor(Type type) { }

	// RVA: 0x12B41AC Offset: 0x12B01AC VA: 0x12B41AC
	internal TypeDescriptionProvider get_Provider() { }

	// RVA: 0x12B4208 Offset: 0x12B0208 VA: 0x12B4208 Slot: 4
	public override object CreateInstance(IServiceProvider provider, Type objectType, Type[] argTypes, object[] args) { }

	// RVA: 0x12B4258 Offset: 0x12B0258 VA: 0x12B4258 Slot: 5
	public override IDictionary GetCache(object instance) { }

	// RVA: 0x12B4280 Offset: 0x12B0280 VA: 0x12B4280 Slot: 6
	public override ICustomTypeDescriptor GetExtendedTypeDescriptor(object instance) { }

	// RVA: 0x12B42A8 Offset: 0x12B02A8 VA: 0x12B42A8 Slot: 7
	protected internal override IExtenderProvider[] GetExtenderProviders(object instance) { }

	// RVA: 0x12B42D0 Offset: 0x12B02D0 VA: 0x12B42D0 Slot: 8
	public override Type GetReflectionType(Type objectType, object instance) { }

	// RVA: 0x12B4308 Offset: 0x12B0308 VA: 0x12B4308 Slot: 9
	public override ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance) { }
}


// Namespace: System.ComponentModel
public class DoubleConverter : BaseNumberConverter // TypeDefIndex: 3472
{
	// Properties
	internal override bool AllowHex { get; }
	internal override Type TargetType { get; }

	// Methods

	// RVA: 0x12B4340 Offset: 0x12B0340 VA: 0x12B4340 Slot: 16
	internal override bool get_AllowHex() { }

	// RVA: 0x12B4348 Offset: 0x12B0348 VA: 0x12B4348 Slot: 17
	internal override Type get_TargetType() { }

	// RVA: 0x12B43B4 Offset: 0x12B03B4 VA: 0x12B43B4 Slot: 18
	internal override object FromString(string value, int radix) { }

	// RVA: 0x12B4474 Offset: 0x12B0474 VA: 0x12B4474 Slot: 19
	internal override object FromString(string value, NumberFormatInfo formatInfo) { }

	// RVA: 0x12B44E4 Offset: 0x12B04E4 VA: 0x12B44E4 Slot: 20
	internal override string ToString(object value, NumberFormatInfo formatInfo) { }

	// RVA: 0x12B4594 Offset: 0x12B0594 VA: 0x12B4594
	public void .ctor() { }
}


// Namespace: System.ComponentModel
public abstract class EventDescriptor : MemberDescriptor // TypeDefIndex: 3473
{}


// Namespace: 
private class EventDescriptorCollection.ArraySubsetEnumerator : IEnumerator // TypeDefIndex: 3474
{
	// Fields
	private readonly Array _array; // 0x10
	private readonly int _total; // 0x18
	private int _current; // 0x1C

	// Properties
	public object Current { get; }

	// Methods

	// RVA: 0x12B4F58 Offset: 0x12B0F58 VA: 0x12B4F58
	public void .ctor(Array array, int count) { }

	// RVA: 0x12B54C4 Offset: 0x12B14C4 VA: 0x12B54C4 Slot: 4
	public bool MoveNext() { }

	// RVA: 0x12B54E8 Offset: 0x12B14E8 VA: 0x12B54E8 Slot: 6
	public void Reset() { }

	// RVA: 0x12B54F4 Offset: 0x12B14F4 VA: 0x12B54F4 Slot: 5
	public object get_Current() { }
}


// Namespace: System.ComponentModel
[DefaultMember("Item")]
public class EventDescriptorCollection : ICollection, IEnumerable, IList // TypeDefIndex: 3475
{
	// Fields
	private EventDescriptor[] _events; // 0x10
	private string[] _namedSort; // 0x18
	private readonly IComparer _comparer; // 0x20
	private bool _eventsOwned; // 0x28
	private bool _needSort; // 0x29
	private readonly bool _readOnly; // 0x2A
	public static readonly EventDescriptorCollection Empty; // 0x0
	[CompilerGenerated]
	private int <Count>k__BackingField; // 0x2C

	// Properties
	public virtual EventDescriptor Item { get; }
	private bool System.Collections.ICollection.IsSynchronized { get; }
	private object System.Collections.ICollection.SyncRoot { get; }
	private int System.Collections.ICollection.Count { get; }
	private object System.Collections.IList.Item { get; set; }
	private bool System.Collections.IList.IsReadOnly { get; }
	private bool System.Collections.IList.IsFixedSize { get; }

	// Methods

	// RVA: 0x12B459C Offset: 0x12B059C VA: 0x12B459C
	public void .ctor(EventDescriptor[] events) { }

	// RVA: 0x12B4628 Offset: 0x12B0628 VA: 0x12B4628
	public void .ctor(EventDescriptor[] events, bool readOnly) { }

	// RVA: 0x12B464C Offset: 0x12B064C VA: 0x12B464C Slot: 20
	public virtual EventDescriptor get_Item(int index) { }

	// RVA: 0x12B477C Offset: 0x12B077C VA: 0x12B477C
	public int Add(EventDescriptor value) { }

	// RVA: 0x12B4944 Offset: 0x12B0944 VA: 0x12B4944
	public void Clear() { }

	// RVA: 0x12B4990 Offset: 0x12B0990 VA: 0x12B4990
	public bool Contains(EventDescriptor value) { }

	// RVA: 0x12B4A08 Offset: 0x12B0A08 VA: 0x12B4A08 Slot: 4
	private void System.Collections.ICollection.CopyTo(Array array, int index) { }

	// RVA: 0x12B46D0 Offset: 0x12B06D0 VA: 0x12B46D0
	private void EnsureEventsOwned() { }

	// RVA: 0x12B4844 Offset: 0x12B0844 VA: 0x12B4844
	private void EnsureSize(int sizeNeeded) { }

	// RVA: 0x12B49A8 Offset: 0x12B09A8 VA: 0x12B49A8
	public int IndexOf(EventDescriptor value) { }

	// RVA: 0x12B4CC8 Offset: 0x12B0CC8 VA: 0x12B4CC8
	public void Insert(int index, EventDescriptor value) { }

	// RVA: 0x12B4DB0 Offset: 0x12B0DB0 VA: 0x12B4DB0
	public void Remove(EventDescriptor value) { }

	// RVA: 0x12B4E18 Offset: 0x12B0E18 VA: 0x12B4E18
	public void RemoveAt(int index) { }

	// RVA: 0x12B4EC4 Offset: 0x12B0EC4 VA: 0x12B4EC4
	public IEnumerator GetEnumerator() { }

	// RVA: 0x12B4A44 Offset: 0x12B0A44 VA: 0x12B4A44
	protected void InternalSort(string[] names) { }

	// RVA: 0x12B4F8C Offset: 0x12B0F8C VA: 0x12B4F8C
	protected void InternalSort(IComparer sorter) { }

	// RVA: 0x12B5004 Offset: 0x12B1004 VA: 0x12B5004 Slot: 7
	private bool System.Collections.ICollection.get_IsSynchronized() { }

	// RVA: 0x12B500C Offset: 0x12B100C VA: 0x12B500C Slot: 6
	private object System.Collections.ICollection.get_SyncRoot() { }

	// RVA: 0x12B5014 Offset: 0x12B1014 VA: 0x12B5014 Slot: 5
	private int System.Collections.ICollection.get_Count() { }

	// RVA: 0x12B501C Offset: 0x12B101C VA: 0x12B501C Slot: 8
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	// RVA: 0x12B5020 Offset: 0x12B1020 VA: 0x12B5020 Slot: 9
	private object System.Collections.IList.get_Item(int index) { }

	// RVA: 0x12B5030 Offset: 0x12B1030 VA: 0x12B5030 Slot: 10
	private void System.Collections.IList.set_Item(int index, object value) { }

	// RVA: 0x12B5198 Offset: 0x12B1198 VA: 0x12B5198 Slot: 11
	private int System.Collections.IList.Add(object value) { }

	// RVA: 0x12B521C Offset: 0x12B121C VA: 0x12B521C Slot: 12
	private bool System.Collections.IList.Contains(object value) { }

	// RVA: 0x12B52AC Offset: 0x12B12AC VA: 0x12B52AC Slot: 13
	private void System.Collections.IList.Clear() { }

	// RVA: 0x12B52B0 Offset: 0x12B12B0 VA: 0x12B52B0 Slot: 16
	private int System.Collections.IList.IndexOf(object value) { }

	// RVA: 0x12B5334 Offset: 0x12B1334 VA: 0x12B5334 Slot: 17
	private void System.Collections.IList.Insert(int index, object value) { }

	// RVA: 0x12B53C8 Offset: 0x12B13C8 VA: 0x12B53C8 Slot: 18
	private void System.Collections.IList.Remove(object value) { }

	// RVA: 0x12B544C Offset: 0x12B144C VA: 0x12B544C Slot: 19
	private void System.Collections.IList.RemoveAt(int index) { }

	// RVA: 0x12B5450 Offset: 0x12B1450 VA: 0x12B5450 Slot: 14
	private bool System.Collections.IList.get_IsReadOnly() { }

	// RVA: 0x12B5458 Offset: 0x12B1458 VA: 0x12B5458 Slot: 15
	private bool System.Collections.IList.get_IsFixedSize() { }

	// RVA: 0x12B5460 Offset: 0x12B1460 VA: 0x12B5460
	private static void .cctor() { }
}


// Namespace: System.ComponentModel
public class ExpandableObjectConverter : TypeConverter // TypeDefIndex: 3476
{
	// Methods

	// RVA: 0x12B5550 Offset: 0x12B1550 VA: 0x12B5550
	public void .ctor() { }

	// RVA: 0x12B5558 Offset: 0x12B1558 VA: 0x12B5558 Slot: 10
	public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes) { }

	// RVA: 0x12B55C0 Offset: 0x12B15C0 VA: 0x12B55C0 Slot: 11
	public override bool GetPropertiesSupported(ITypeDescriptorContext context) { }
}


// Namespace: System.ComponentModel
internal sealed class ExtendedPropertyDescriptor : PropertyDescriptor // TypeDefIndex: 3477
{
	// Fields
	private readonly ReflectPropertyDescriptor _extenderInfo; // 0x88
	private readonly IExtenderProvider _provider; // 0x90

	// Properties
	public override Type ComponentType { get; }
	public override bool IsReadOnly { get; }
	public override Type PropertyType { get; }
	public override string DisplayName { get; }

	// Methods

	// RVA: 0x12B55C8 Offset: 0x12B15C8 VA: 0x12B55C8
	public void .ctor(ReflectPropertyDescriptor extenderInfo, Type receiverType, IExtenderProvider provider, Attribute[] attributes) { }

	// RVA: 0x12B57F8 Offset: 0x12B17F8 VA: 0x12B57F8 Slot: 17
	public override bool CanResetValue(object comp) { }

	// RVA: 0x12B5AA0 Offset: 0x12B1AA0 VA: 0x12B5AA0 Slot: 13
	public override Type get_ComponentType() { }

	// RVA: 0x12B5ABC Offset: 0x12B1ABC VA: 0x12B5ABC Slot: 15
	public override bool get_IsReadOnly() { }

	// RVA: 0x12B5BB4 Offset: 0x12B1BB4 VA: 0x12B5BB4 Slot: 16
	public override Type get_PropertyType() { }

	// RVA: 0x12B5BD0 Offset: 0x12B1BD0 VA: 0x12B5BD0 Slot: 9
	public override string get_DisplayName() { }

	// RVA: 0x12B5FB8 Offset: 0x12B1FB8 VA: 0x12B5FB8 Slot: 18
	public override object GetValue(object comp) { }

	// RVA: 0x12B610C Offset: 0x12B210C VA: 0x12B610C Slot: 20
	public override void ResetValue(object comp) { }

	// RVA: 0x12B6640 Offset: 0x12B2640 VA: 0x12B6640 Slot: 21
	public override void SetValue(object component, object value) { }

	// RVA: 0x12B6AD4 Offset: 0x12B2AD4 VA: 0x12B6AD4 Slot: 22
	public override bool ShouldSerializeValue(object comp) { }
}


// Namespace: System.ComponentModel
[Usage(32767)]
public sealed class ExtenderProvidedPropertyAttribute : Attribute // TypeDefIndex: 3478
{
	// Fields
	[CompilerGenerated]
	private PropertyDescriptor <ExtenderProperty>k__BackingField; // 0x10
	[CompilerGenerated]
	private IExtenderProvider <Provider>k__BackingField; // 0x18
	[CompilerGenerated]
	private Type <ReceiverType>k__BackingField; // 0x20

	// Methods

	// RVA: 0x12B5780 Offset: 0x12B1780 VA: 0x12B5780
	internal static ExtenderProvidedPropertyAttribute Create(PropertyDescriptor extenderProperty, Type receiverType, IExtenderProvider provider) { }

	// RVA: 0x12B6F2C Offset: 0x12B2F2C VA: 0x12B6F2C
	public void .ctor() { }

	// RVA: 0x12B6F34 Offset: 0x12B2F34 VA: 0x12B6F34 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x12B7008 Offset: 0x12B3008 VA: 0x12B7008 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x12B7010 Offset: 0x12B3010 VA: 0x12B7010 Slot: 6
	public override bool IsDefaultAttribute() { }
}


// Namespace: System.ComponentModel
public class GuidConverter : TypeConverter // TypeDefIndex: 3479
{
	// Methods

	// RVA: 0x12B7070 Offset: 0x12B3070 VA: 0x12B7070 Slot: 4
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType) { }

	// RVA: 0x12B7138 Offset: 0x12B3138 VA: 0x12B7138 Slot: 5
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType) { }

	// RVA: 0x12B7200 Offset: 0x12B3200 VA: 0x12B7200 Slot: 6
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value) { }

	// RVA: 0x12B72E0 Offset: 0x12B32E0 VA: 0x12B72E0 Slot: 7
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType) { }

	// RVA: 0x12B7600 Offset: 0x12B3600 VA: 0x12B7600
	public void .ctor() { }
}


// Namespace: System.ComponentModel
public interface IBindingList : IList, ICollection, IEnumerable // TypeDefIndex: 3480
{}


// Namespace: System.ComponentModel
public interface ICustomTypeDescriptor // TypeDefIndex: 3481
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract AttributeCollection GetAttributes();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract TypeConverter GetConverter();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract PropertyDescriptorCollection GetProperties();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract PropertyDescriptorCollection GetProperties(Attribute[] attributes);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract object GetPropertyOwner(PropertyDescriptor pd);
}


// Namespace: System.ComponentModel
public interface IExtenderProvider // TypeDefIndex: 3482
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool CanExtend(object extendee);
}


// Namespace: System.ComponentModel
public interface ITypeDescriptorContext : IServiceProvider // TypeDefIndex: 3483
{
	// Properties
	public abstract IContainer Container { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract IContainer get_Container();
}


// Namespace: System.ComponentModel
public class Int16Converter : BaseNumberConverter // TypeDefIndex: 3484
{
	// Properties
	internal override Type TargetType { get; }

	// Methods

	// RVA: 0x12B7608 Offset: 0x12B3608 VA: 0x12B7608 Slot: 17
	internal override Type get_TargetType() { }

	// RVA: 0x12B7674 Offset: 0x12B3674 VA: 0x12B7674 Slot: 18
	internal override object FromString(string value, int radix) { }

	// RVA: 0x12B7708 Offset: 0x12B3708 VA: 0x12B7708 Slot: 19
	internal override object FromString(string value, NumberFormatInfo formatInfo) { }

	// RVA: 0x12B777C Offset: 0x12B377C VA: 0x12B777C Slot: 20
	internal override string ToString(object value, NumberFormatInfo formatInfo) { }

	// RVA: 0x12B782C Offset: 0x12B382C VA: 0x12B782C
	public void .ctor() { }
}


// Namespace: System.ComponentModel
public class Int32Converter : BaseNumberConverter // TypeDefIndex: 3485
{
	// Properties
	internal override Type TargetType { get; }

	// Methods

	// RVA: 0x12B7834 Offset: 0x12B3834 VA: 0x12B7834 Slot: 17
	internal override Type get_TargetType() { }

	// RVA: 0x12B78A0 Offset: 0x12B38A0 VA: 0x12B78A0 Slot: 18
	internal override object FromString(string value, int radix) { }

	// RVA: 0x12B7934 Offset: 0x12B3934 VA: 0x12B7934 Slot: 19
	internal override object FromString(string value, NumberFormatInfo formatInfo) { }

	// RVA: 0x12B79A8 Offset: 0x12B39A8 VA: 0x12B79A8 Slot: 20
	internal override string ToString(object value, NumberFormatInfo formatInfo) { }

	// RVA: 0x12B7A58 Offset: 0x12B3A58 VA: 0x12B7A58
	public void .ctor() { }
}


// Namespace: System.ComponentModel
public class Int64Converter : BaseNumberConverter // TypeDefIndex: 3486
{
	// Properties
	internal override Type TargetType { get; }

	// Methods

	// RVA: 0x12B7A60 Offset: 0x12B3A60 VA: 0x12B7A60 Slot: 17
	internal override Type get_TargetType() { }

	// RVA: 0x12B7ACC Offset: 0x12B3ACC VA: 0x12B7ACC Slot: 18
	internal override object FromString(string value, int radix) { }

	// RVA: 0x12B7B60 Offset: 0x12B3B60 VA: 0x12B7B60 Slot: 19
	internal override object FromString(string value, NumberFormatInfo formatInfo) { }

	// RVA: 0x12B7BD4 Offset: 0x12B3BD4 VA: 0x12B7BD4 Slot: 20
	internal override string ToString(object value, NumberFormatInfo formatInfo) { }

	// RVA: 0x12B7C84 Offset: 0x12B3C84 VA: 0x12B7C84
	public void .ctor() { }
}


// Namespace: System.ComponentModel
[Usage(32767)]
public sealed class ListBindableAttribute : Attribute // TypeDefIndex: 3487
{
	// Fields
	public static readonly ListBindableAttribute Yes; // 0x0
	public static readonly ListBindableAttribute No; // 0x8
	public static readonly ListBindableAttribute Default; // 0x10
	private bool _isDefault; // 0x10
	[CompilerGenerated]
	private readonly bool <ListBindable>k__BackingField; // 0x11

	// Methods

	// RVA: 0x12B7C8C Offset: 0x12B3C8C VA: 0x12B7C8C
	public void .ctor(bool listBindable) { }

	// RVA: 0x12B7CB4 Offset: 0x12B3CB4 VA: 0x12B7CB4 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x12B7D40 Offset: 0x12B3D40 VA: 0x12B7D40 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x12B7D48 Offset: 0x12B3D48 VA: 0x12B7D48 Slot: 6
	public override bool IsDefaultAttribute() { }

	// RVA: 0x12B7DCC Offset: 0x12B3DCC VA: 0x12B7DCC
	private static void .cctor() { }
}


// Namespace: System.ComponentModel
public class ListChangedEventArgs : EventArgs // TypeDefIndex: 3488
{
	// Fields
	[CompilerGenerated]
	private readonly ListChangedType <ListChangedType>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly int <NewIndex>k__BackingField; // 0x14
	[CompilerGenerated]
	private readonly int <OldIndex>k__BackingField; // 0x18
	[CompilerGenerated]
	private readonly PropertyDescriptor <PropertyDescriptor>k__BackingField; // 0x20

	// Methods

	// RVA: 0x12B7E58 Offset: 0x12B3E58 VA: 0x12B7E58
	public void .ctor(ListChangedType listChangedType, int newIndex) { }

	// RVA: 0x12B7EE0 Offset: 0x12B3EE0 VA: 0x12B7EE0
	public void .ctor(ListChangedType listChangedType, int newIndex, PropertyDescriptor propDesc) { }

	// RVA: 0x12B7F10 Offset: 0x12B3F10 VA: 0x12B7F10
	public void .ctor(ListChangedType listChangedType, PropertyDescriptor propDesc) { }

	// RVA: 0x12B7E60 Offset: 0x12B3E60 VA: 0x12B7E60
	public void .ctor(ListChangedType listChangedType, int newIndex, int oldIndex) { }
}


// Namespace: System.ComponentModel
public sealed class ListChangedEventHandler : MulticastDelegate // TypeDefIndex: 3489
{
	// Methods

	// RVA: 0x12B7F84 Offset: 0x12B3F84 VA: 0x12B7F84
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x12B8088 Offset: 0x12B4088 VA: 0x12B8088 Slot: 12
	public virtual void Invoke(object sender, ListChangedEventArgs e) { }
}


// Namespace: System.ComponentModel
public enum ListChangedType // TypeDefIndex: 3490
{
	// Fields
	public int value__; // 0x0
	public const ListChangedType Reset = 0;
	public const ListChangedType ItemAdded = 1;
	public const ListChangedType ItemDeleted = 2;
	public const ListChangedType ItemMoved = 3;
	public const ListChangedType ItemChanged = 4;
	public const ListChangedType PropertyDescriptorAdded = 5;
	public const ListChangedType PropertyDescriptorDeleted = 6;
	public const ListChangedType PropertyDescriptorChanged = 7;
}


// Namespace: System.ComponentModel
[TypeConverter(typeof(ComponentConverter))]
public class MarshalByValueComponent : IComponent, IDisposable, IServiceProvider // TypeDefIndex: 3491
{
	// Fields
	private static readonly object s_eventDisposed; // 0x0
	private ISite _site; // 0x10
	private EventHandlerList _events; // 0x18

	// Properties
	[DesignerSerializationVisibility(0)]
	[Browsable(False)]
	public virtual ISite Site { get; }

	// Methods

	// RVA: 0x12B809C Offset: 0x12B409C VA: 0x12B809C
	public void .ctor() { }

	// RVA: 0x12B80A4 Offset: 0x12B40A4 VA: 0x12B80A4 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x12B8144 Offset: 0x12B4144 VA: 0x12B8144 Slot: 7
	public virtual ISite get_Site() { }

	// RVA: 0x12B814C Offset: 0x12B414C VA: 0x12B814C Slot: 5
	public void Dispose() { }

	// RVA: 0x12B81B8 Offset: 0x12B41B8 VA: 0x12B81B8 Slot: 8
	protected virtual void Dispose(bool disposing) { }

	// RVA: 0x12B8444 Offset: 0x12B4444 VA: 0x12B8444 Slot: 9
	public virtual object GetService(Type service) { }

	// RVA: 0x12B84F8 Offset: 0x12B44F8 VA: 0x12B84F8 Slot: 3
	public override string ToString() { }

	// RVA: 0x12B8628 Offset: 0x12B4628 VA: 0x12B8628
	private static void .cctor() { }
}


// Namespace: System.ComponentModel
public class MultilineStringConverter : TypeConverter // TypeDefIndex: 3492
{
	// Methods

	// RVA: 0x12B8698 Offset: 0x12B4698 VA: 0x12B8698 Slot: 7
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType) { }

	// RVA: 0x12B8818 Offset: 0x12B4818 VA: 0x12B8818 Slot: 10
	public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes) { }

	// RVA: 0x12B8820 Offset: 0x12B4820 VA: 0x12B8820 Slot: 11
	public override bool GetPropertiesSupported(ITypeDescriptorContext context) { }

	// RVA: 0x12B8828 Offset: 0x12B4828 VA: 0x12B8828
	public void .ctor() { }
}


// Namespace: System.ComponentModel
public class NullableConverter : TypeConverter // TypeDefIndex: 3493
{
	// Fields
	[CompilerGenerated]
	private readonly Type <NullableType>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly Type <UnderlyingType>k__BackingField; // 0x18
	[CompilerGenerated]
	private readonly TypeConverter <UnderlyingTypeConverter>k__BackingField; // 0x20

	// Properties
	public Type NullableType { get; }
	public Type UnderlyingType { get; }
	public TypeConverter UnderlyingTypeConverter { get; }

	// Methods

	// RVA: 0x12B8830 Offset: 0x12B4830 VA: 0x12B8830
	public void .ctor(Type type) { }

	// RVA: 0x12B8958 Offset: 0x12B4958 VA: 0x12B8958 Slot: 4
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType) { }

	// RVA: 0x12B8A1C Offset: 0x12B4A1C VA: 0x12B8A1C Slot: 6
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value) { }

	// RVA: 0x12B8B58 Offset: 0x12B4B58 VA: 0x12B8B58 Slot: 5
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType) { }

	// RVA: 0x12B8C1C Offset: 0x12B4C1C VA: 0x12B8C1C Slot: 7
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType) { }

	// RVA: 0x12B8E08 Offset: 0x12B4E08 VA: 0x12B8E08 Slot: 8
	public override object CreateInstance(ITypeDescriptorContext context, IDictionary propertyValues) { }

	// RVA: 0x12B8E2C Offset: 0x12B4E2C VA: 0x12B8E2C Slot: 9
	public override bool GetCreateInstanceSupported(ITypeDescriptorContext context) { }

	// RVA: 0x12B8E50 Offset: 0x12B4E50 VA: 0x12B8E50 Slot: 10
	public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes) { }

	// RVA: 0x12B8E74 Offset: 0x12B4E74 VA: 0x12B8E74 Slot: 11
	public override bool GetPropertiesSupported(ITypeDescriptorContext context) { }

	// RVA: 0x12B8E98 Offset: 0x12B4E98 VA: 0x12B8E98 Slot: 12
	public override TypeConverter.StandardValuesCollection GetStandardValues(ITypeDescriptorContext context) { }

	// RVA: 0x12B9240 Offset: 0x12B5240 VA: 0x12B9240 Slot: 13
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context) { }

	// RVA: 0x12B9268 Offset: 0x12B5268 VA: 0x12B9268 Slot: 14
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context) { }

	// RVA: 0x12B9290 Offset: 0x12B5290 VA: 0x12B9290 Slot: 15
	public override bool IsValid(ITypeDescriptorContext context, object value) { }

	[CompilerGenerated]
	// RVA: 0x12B92C4 Offset: 0x12B52C4 VA: 0x12B92C4
	public Type get_NullableType() { }

	[CompilerGenerated]
	// RVA: 0x12B92CC Offset: 0x12B52CC VA: 0x12B92CC
	public Type get_UnderlyingType() { }

	[CompilerGenerated]
	// RVA: 0x12B92D4 Offset: 0x12B52D4 VA: 0x12B92D4
	public TypeConverter get_UnderlyingTypeConverter() { }
}


// Namespace: System.ComponentModel
public abstract class PropertyDescriptor : MemberDescriptor // TypeDefIndex: 3494
{
	// Fields
	private TypeConverter _converter; // 0x60
	private Hashtable _valueChangedHandlers; // 0x68
	private object[] _editors; // 0x70
	private Type[] _editorTypes; // 0x78
	private int _editorCount; // 0x80

	// Properties
	public abstract Type ComponentType { get; }
	public virtual TypeConverter Converter { get; }
	public abstract bool IsReadOnly { get; }
	public abstract Type PropertyType { get; }

	// Methods

	// RVA: 0x12B92DC Offset: 0x12B52DC VA: 0x12B92DC
	protected void .ctor(string name, Attribute[] attrs) { }

	// RVA: 0x12B577C Offset: 0x12B177C VA: 0x12B577C
	protected void .ctor(MemberDescriptor descr, Attribute[] attrs) { }

	// RVA: -1 Offset: -1 Slot: 13
	public abstract Type get_ComponentType();

	// RVA: 0x12B98A8 Offset: 0x12B58A8 VA: 0x12B98A8 Slot: 14
	public virtual TypeConverter get_Converter() { }

	// RVA: -1 Offset: -1 Slot: 15
	public abstract bool get_IsReadOnly();

	// RVA: -1 Offset: -1 Slot: 16
	public abstract Type get_PropertyType();

	// RVA: -1 Offset: -1 Slot: 17
	public abstract bool CanResetValue(object component);

	// RVA: 0x12B9F04 Offset: 0x12B5F04 VA: 0x12B9F04 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x12B9CF8 Offset: 0x12B5CF8 VA: 0x12B9CF8
	protected object CreateInstance(Type type) { }

	// RVA: 0x12BA104 Offset: 0x12B6104 VA: 0x12BA104 Slot: 11
	protected override void FillAttributes(IList attributeList) { }

	// RVA: 0x12BA208 Offset: 0x12B6208 VA: 0x12BA208 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x12BA25C Offset: 0x12B625C VA: 0x12BA25C Slot: 12
	protected override object GetInvocationTarget(Type type, object instance) { }

	// RVA: 0x12B9AFC Offset: 0x12B5AFC VA: 0x12B9AFC
	protected Type GetTypeFromName(string typeName) { }

	// RVA: -1 Offset: -1 Slot: 18
	public abstract object GetValue(object component);

	// RVA: 0x12BA448 Offset: 0x12B6448 VA: 0x12BA448 Slot: 19
	protected virtual void OnValueChanged(object component, EventArgs e) { }

	// RVA: -1 Offset: -1 Slot: 20
	public abstract void ResetValue(object component);

	// RVA: -1 Offset: -1 Slot: 21
	public abstract void SetValue(object component, object value);

	// RVA: -1 Offset: -1 Slot: 22
	public abstract bool ShouldSerializeValue(object component);
}


// Namespace: 
private class PropertyDescriptorCollection.PropertyDescriptorEnumerator : IDictionaryEnumerator, IEnumerator // TypeDefIndex: 3495
{
	// Fields
	private PropertyDescriptorCollection _owner; // 0x10
	private int _index; // 0x18

	// Properties
	public object Current { get; }
	public DictionaryEntry Entry { get; }
	public object Key { get; }
	public object Value { get; }

	// Methods

	// RVA: 0x12BB7B0 Offset: 0x12B77B0 VA: 0x12BB7B0
	public void .ctor(PropertyDescriptorCollection owner) { }

	// RVA: 0x12BC3A8 Offset: 0x12B83A8 VA: 0x12BC3A8 Slot: 8
	public object get_Current() { }

	// RVA: 0x12BC40C Offset: 0x12B840C VA: 0x12BC40C Slot: 6
	public DictionaryEntry get_Entry() { }

	// RVA: 0x12BC474 Offset: 0x12B8474 VA: 0x12BC474 Slot: 4
	public object get_Key() { }

	// RVA: 0x12BC4B0 Offset: 0x12B84B0 VA: 0x12BC4B0 Slot: 5
	public object get_Value() { }

	// RVA: 0x12BC4EC Offset: 0x12B84EC VA: 0x12BC4EC Slot: 7
	public bool MoveNext() { }

	// RVA: 0x12BC528 Offset: 0x12B8528 VA: 0x12BC528 Slot: 9
	public void Reset() { }
}


// Namespace: System.ComponentModel
[DefaultMember("Item")]
public class PropertyDescriptorCollection : ICollection, IEnumerable, IList, IDictionary // TypeDefIndex: 3496
{
	// Fields
	public static readonly PropertyDescriptorCollection Empty; // 0x0
	private IDictionary _cachedFoundProperties; // 0x10
	private bool _cachedIgnoreCase; // 0x18
	private PropertyDescriptor[] _properties; // 0x20
	private readonly string[] _namedSort; // 0x28
	private readonly IComparer _comparer; // 0x30
	private bool _propsOwned; // 0x38
	private bool _needSort; // 0x39
	private bool _readOnly; // 0x3A
	private readonly object _internalSyncObject; // 0x40
	[CompilerGenerated]
	private int <Count>k__BackingField; // 0x48

	// Properties
	public virtual PropertyDescriptor Item { get; }
	public virtual PropertyDescriptor Item { get; }
	private bool System.Collections.ICollection.IsSynchronized { get; }
	private object System.Collections.ICollection.SyncRoot { get; }
	private int System.Collections.ICollection.Count { get; }
	private bool System.Collections.IDictionary.IsReadOnly { get; }
	private object System.Collections.IDictionary.Item { get; set; }
	private ICollection System.Collections.IDictionary.Keys { get; }
	private ICollection System.Collections.IDictionary.Values { get; }
	private bool System.Collections.IList.IsReadOnly { get; }
	private bool System.Collections.IList.IsFixedSize { get; }
	private object System.Collections.IList.Item { get; set; }

	// Methods

	// RVA: 0x12BA4F8 Offset: 0x12B64F8 VA: 0x12BA4F8
	public void .ctor(PropertyDescriptor[] properties) { }

	// RVA: 0x12BA5BC Offset: 0x12B65BC VA: 0x12BA5BC
	public void .ctor(PropertyDescriptor[] properties, bool readOnly) { }

	// RVA: 0x12BA5E0 Offset: 0x12B65E0 VA: 0x12BA5E0
	private void .ctor(PropertyDescriptor[] properties, int propCount, string[] namedSort, IComparer comparer) { }

	// RVA: 0x12BA6E0 Offset: 0x12B66E0 VA: 0x12BA6E0 Slot: 30
	public virtual PropertyDescriptor get_Item(int index) { }

	// RVA: 0x12BA810 Offset: 0x12B6810 VA: 0x12BA810 Slot: 31
	public virtual PropertyDescriptor get_Item(string name) { }

	// RVA: 0x12BA824 Offset: 0x12B6824 VA: 0x12BA824
	public int Add(PropertyDescriptor value) { }

	// RVA: 0x12BA9EC Offset: 0x12B69EC VA: 0x12BA9EC
	public void Clear() { }

	// RVA: 0x12BAA3C Offset: 0x12B6A3C VA: 0x12BAA3C
	public bool Contains(PropertyDescriptor value) { }

	// RVA: 0x12BAAB4 Offset: 0x12B6AB4 VA: 0x12BAAB4 Slot: 4
	public void CopyTo(Array array, int index) { }

	// RVA: 0x12BA764 Offset: 0x12B6764 VA: 0x12BA764
	private void EnsurePropsOwned() { }

	// RVA: 0x12BA8EC Offset: 0x12B68EC VA: 0x12BA8EC
	private void EnsureSize(int sizeNeeded) { }

	// RVA: 0x12BAD74 Offset: 0x12B6D74 VA: 0x12BAD74 Slot: 32
	public virtual PropertyDescriptor Find(string name, bool ignoreCase) { }

	// RVA: 0x12BAA54 Offset: 0x12B6A54 VA: 0x12BAA54
	public int IndexOf(PropertyDescriptor value) { }

	// RVA: 0x12BB248 Offset: 0x12B7248 VA: 0x12BB248
	public void Insert(int index, PropertyDescriptor value) { }

	// RVA: 0x12BB330 Offset: 0x12B7330 VA: 0x12BB330
	public void Remove(PropertyDescriptor value) { }

	// RVA: 0x12BB398 Offset: 0x12B7398 VA: 0x12BB398
	public void RemoveAt(int index) { }

	// RVA: 0x12BB444 Offset: 0x12B7444 VA: 0x12BB444 Slot: 33
	public virtual PropertyDescriptorCollection Sort(string[] names) { }

	// RVA: 0x12BAAF0 Offset: 0x12B6AF0 VA: 0x12BAAF0
	protected void InternalSort(string[] names) { }

	// RVA: 0x12BB4C0 Offset: 0x12B74C0 VA: 0x12BB4C0
	protected void InternalSort(IComparer sorter) { }

	// RVA: 0x12BB538 Offset: 0x12B7538 VA: 0x12BB538 Slot: 34
	public virtual IEnumerator GetEnumerator() { }

	// RVA: 0x12BB5D4 Offset: 0x12B75D4 VA: 0x12BB5D4 Slot: 7
	private bool System.Collections.ICollection.get_IsSynchronized() { }

	// RVA: 0x12BB5DC Offset: 0x12B75DC VA: 0x12BB5DC Slot: 6
	private object System.Collections.ICollection.get_SyncRoot() { }

	// RVA: 0x12BB5E4 Offset: 0x12B75E4 VA: 0x12BB5E4 Slot: 5
	private int System.Collections.ICollection.get_Count() { }

	// RVA: 0x12BB5EC Offset: 0x12B75EC VA: 0x12BB5EC Slot: 13
	private void System.Collections.IList.Clear() { }

	// RVA: 0x12BB5F0 Offset: 0x12B75F0 VA: 0x12BB5F0 Slot: 26
	private void System.Collections.IDictionary.Clear() { }

	// RVA: 0x12BB5F4 Offset: 0x12B75F4 VA: 0x12BB5F4 Slot: 8
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	// RVA: 0x12BB604 Offset: 0x12B7604 VA: 0x12BB604 Slot: 19
	private void System.Collections.IList.RemoveAt(int index) { }

	// RVA: 0x12BB608 Offset: 0x12B7608 VA: 0x12BB608 Slot: 25
	private void System.Collections.IDictionary.Add(object key, object value) { }

	// RVA: 0x12BB6CC Offset: 0x12B76CC VA: 0x12BB6CC Slot: 24
	private bool System.Collections.IDictionary.Contains(object key) { }

	// RVA: 0x12BB74C Offset: 0x12B774C VA: 0x12BB74C Slot: 28
	private IDictionaryEnumerator System.Collections.IDictionary.GetEnumerator() { }

	// RVA: 0x12BB7E0 Offset: 0x12B77E0 VA: 0x12BB7E0 Slot: 27
	private bool System.Collections.IDictionary.get_IsReadOnly() { }

	// RVA: 0x12BB7E8 Offset: 0x12B77E8 VA: 0x12BB7E8 Slot: 20
	private object System.Collections.IDictionary.get_Item(object key) { }

	// RVA: 0x12BB864 Offset: 0x12B7864 VA: 0x12BB864 Slot: 21
	private void System.Collections.IDictionary.set_Item(object key, object value) { }

	// RVA: 0x12BBC14 Offset: 0x12B7C14 VA: 0x12BBC14 Slot: 22
	private ICollection System.Collections.IDictionary.get_Keys() { }

	// RVA: 0x12BBCDC Offset: 0x12B7CDC VA: 0x12BBCDC Slot: 23
	private ICollection System.Collections.IDictionary.get_Values() { }

	// RVA: 0x12BBDB4 Offset: 0x12B7DB4 VA: 0x12BBDB4 Slot: 29
	private void System.Collections.IDictionary.Remove(object key) { }

	// RVA: 0x12BBEA8 Offset: 0x12B7EA8 VA: 0x12BBEA8 Slot: 11
	private int System.Collections.IList.Add(object value) { }

	// RVA: 0x12BBF2C Offset: 0x12B7F2C VA: 0x12BBF2C Slot: 12
	private bool System.Collections.IList.Contains(object value) { }

	// RVA: 0x12BBFBC Offset: 0x12B7FBC VA: 0x12BBFBC Slot: 16
	private int System.Collections.IList.IndexOf(object value) { }

	// RVA: 0x12BC040 Offset: 0x12B8040 VA: 0x12BC040 Slot: 17
	private void System.Collections.IList.Insert(int index, object value) { }

	// RVA: 0x12BC0D4 Offset: 0x12B80D4 VA: 0x12BC0D4 Slot: 14
	private bool System.Collections.IList.get_IsReadOnly() { }

	// RVA: 0x12BC0DC Offset: 0x12B80DC VA: 0x12BC0DC Slot: 15
	private bool System.Collections.IList.get_IsFixedSize() { }

	// RVA: 0x12BC0E4 Offset: 0x12B80E4 VA: 0x12BC0E4 Slot: 18
	private void System.Collections.IList.Remove(object value) { }

	// RVA: 0x12BC168 Offset: 0x12B8168 VA: 0x12BC168 Slot: 9
	private object System.Collections.IList.get_Item(int index) { }

	// RVA: 0x12BC178 Offset: 0x12B8178 VA: 0x12BC178 Slot: 10
	private void System.Collections.IList.set_Item(int index, object value) { }

	// RVA: 0x12BC344 Offset: 0x12B8344 VA: 0x12BC344
	private static void .cctor() { }
}


// Namespace: System.ComponentModel
[Usage(4, AllowMultiple = True)]
public sealed class ProvidePropertyAttribute : Attribute // TypeDefIndex: 3497
{
	// Fields
	[CompilerGenerated]
	private readonly string <PropertyName>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly string <ReceiverTypeName>k__BackingField; // 0x18
}


// Namespace: 
private class ReferenceConverter.ReferenceComparer : IComparer // TypeDefIndex: 3498
{
	// Fields
	private ReferenceConverter _converter; // 0x10

	// Methods

	// RVA: 0x12BD4A8 Offset: 0x12B94A8 VA: 0x12BD4A8
	public void .ctor(ReferenceConverter converter) { }

	// RVA: 0x12BD548 Offset: 0x12B9548 VA: 0x12BD548 Slot: 4
	public int Compare(object item1, object item2) { }
}


// Namespace: System.ComponentModel
public class ReferenceConverter : TypeConverter // TypeDefIndex: 3499
{
	// Fields
	private static readonly string s_none; // 0x0
	private Type _type; // 0x10

	// Methods

	// RVA: 0x12BC534 Offset: 0x12B8534 VA: 0x12BC534
	public void .ctor(Type type) { }

	// RVA: 0x12BC55C Offset: 0x12B855C VA: 0x12BC55C Slot: 4
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType) { }

	// RVA: 0x12BC628 Offset: 0x12B8628 VA: 0x12BC628 Slot: 6
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value) { }

	// RVA: 0x12BC970 Offset: 0x12B8970 VA: 0x12BC970 Slot: 7
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType) { }

	// RVA: 0x12BCDC0 Offset: 0x12B8DC0 VA: 0x12BCDC0 Slot: 12
	public override TypeConverter.StandardValuesCollection GetStandardValues(ITypeDescriptorContext context) { }

	// RVA: 0x12BD4D0 Offset: 0x12B94D0 VA: 0x12BD4D0 Slot: 13
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context) { }

	// RVA: 0x12BD4D8 Offset: 0x12B94D8 VA: 0x12BD4D8 Slot: 14
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context) { }

	// RVA: 0x12BD4E0 Offset: 0x12B94E0 VA: 0x12BD4E0 Slot: 16
	protected virtual bool IsValueAllowed(ITypeDescriptorContext context, object value) { }

	// RVA: 0x12BD4E8 Offset: 0x12B94E8 VA: 0x12BD4E8
	private static void .cctor() { }
}


// Namespace: System.ComponentModel
public class RefreshEventArgs : EventArgs // TypeDefIndex: 3500
{
	// Fields
	[CompilerGenerated]
	private readonly Type <TypeChanged>k__BackingField; // 0x10

	// Methods

	// RVA: 0x12BD600 Offset: 0x12B9600 VA: 0x12BD600
	public void .ctor(Type typeChanged) { }
}


// Namespace: System.ComponentModel
public sealed class RefreshEventHandler : MulticastDelegate // TypeDefIndex: 3501
{
	// Methods

	// RVA: 0x12BD66C Offset: 0x12B966C VA: 0x12BD66C
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x12BD76C Offset: 0x12B976C VA: 0x12BD76C Slot: 12
	public virtual void Invoke(RefreshEventArgs e) { }
}


// Namespace: System.ComponentModel
public class SByteConverter : BaseNumberConverter // TypeDefIndex: 3502
{
	// Properties
	internal override Type TargetType { get; }

	// Methods

	// RVA: 0x12BD780 Offset: 0x12B9780 VA: 0x12BD780 Slot: 17
	internal override Type get_TargetType() { }

	// RVA: 0x12BD7EC Offset: 0x12B97EC VA: 0x12BD7EC Slot: 18
	internal override object FromString(string value, int radix) { }

	// RVA: 0x12BD880 Offset: 0x12B9880 VA: 0x12BD880 Slot: 19
	internal override object FromString(string value, NumberFormatInfo formatInfo) { }

	// RVA: 0x12BD8F4 Offset: 0x12B98F4 VA: 0x12BD8F4 Slot: 20
	internal override string ToString(object value, NumberFormatInfo formatInfo) { }

	// RVA: 0x12BD9A4 Offset: 0x12B99A4 VA: 0x12BD9A4
	public void .ctor() { }
}


// Namespace: System.ComponentModel
public class SingleConverter : BaseNumberConverter // TypeDefIndex: 3503
{
	// Properties
	internal override bool AllowHex { get; }
	internal override Type TargetType { get; }

	// Methods

	// RVA: 0x12BD9AC Offset: 0x12B99AC VA: 0x12BD9AC Slot: 16
	internal override bool get_AllowHex() { }

	// RVA: 0x12BD9B4 Offset: 0x12B99B4 VA: 0x12BD9B4 Slot: 17
	internal override Type get_TargetType() { }

	// RVA: 0x12BDA20 Offset: 0x12B9A20 VA: 0x12BDA20 Slot: 18
	internal override object FromString(string value, int radix) { }

	// RVA: 0x12BDAE0 Offset: 0x12B9AE0 VA: 0x12BDAE0 Slot: 19
	internal override object FromString(string value, NumberFormatInfo formatInfo) { }

	// RVA: 0x12BDB50 Offset: 0x12B9B50 VA: 0x12BDB50 Slot: 20
	internal override string ToString(object value, NumberFormatInfo formatInfo) { }

	// RVA: 0x12BDC00 Offset: 0x12B9C00 VA: 0x12BDC00
	public void .ctor() { }
}


// Namespace: System.ComponentModel
public class StringConverter : TypeConverter // TypeDefIndex: 3504
{
	// Methods

	// RVA: 0x12BDC08 Offset: 0x12B9C08 VA: 0x12BDC08 Slot: 4
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType) { }

	// RVA: 0x12BDCD0 Offset: 0x12B9CD0 VA: 0x12BDCD0 Slot: 6
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value) { }

	// RVA: 0x12BDD74 Offset: 0x12B9D74 VA: 0x12BDD74
	public void .ctor() { }
}


// Namespace: System.ComponentModel
public class TimeSpanConverter : TypeConverter // TypeDefIndex: 3505
{
	// Methods

	// RVA: 0x12BDD7C Offset: 0x12B9D7C VA: 0x12BDD7C Slot: 4
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType) { }

	// RVA: 0x12BDE44 Offset: 0x12B9E44 VA: 0x12BDE44 Slot: 5
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType) { }

	// RVA: 0x12BDF0C Offset: 0x12B9F0C VA: 0x12BDF0C Slot: 6
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value) { }

	// RVA: 0x12BE104 Offset: 0x12BA104 VA: 0x12BE104 Slot: 7
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType) { }

	// RVA: 0x12BE410 Offset: 0x12BA410 VA: 0x12BE410
	public void .ctor() { }
}


// Namespace: System.ComponentModel
[Usage(32767)]
public sealed class TypeConverterAttribute : Attribute // TypeDefIndex: 3506
{
	// Fields
	public static readonly TypeConverterAttribute Default; // 0x0
	[CompilerGenerated]
	private readonly string <ConverterTypeName>k__BackingField; // 0x10

	// Properties
	public string ConverterTypeName { get; }

	// Methods

	// RVA: 0x12BE418 Offset: 0x12BA418 VA: 0x12BE418
	public void .ctor() { }

	// RVA: 0x12BE474 Offset: 0x12BA474 VA: 0x12BE474
	public void .ctor(Type type) { }

	// RVA: 0x12BE4B8 Offset: 0x12BA4B8 VA: 0x12BE4B8
	public void .ctor(string typeName) { }

	[CompilerGenerated]
	// RVA: 0x12BE4E0 Offset: 0x12BA4E0 VA: 0x12BE4E0
	public string get_ConverterTypeName() { }

	// RVA: 0x12BE4E8 Offset: 0x12BA4E8 VA: 0x12BE4E8 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x12BE568 Offset: 0x12BA568 VA: 0x12BE568 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x12BE588 Offset: 0x12BA588 VA: 0x12BE588
	private static void .cctor() { }
}


// Namespace: 
private sealed class TypeDescriptionProvider.EmptyCustomTypeDescriptor : CustomTypeDescriptor // TypeDefIndex: 3507
{
	// Methods

	// RVA: 0x12BE78C Offset: 0x12BA78C VA: 0x12BE78C
	public void .ctor() { }
}


// Namespace: System.ComponentModel
public abstract class TypeDescriptionProvider // TypeDefIndex: 3508
{
	// Fields
	private readonly TypeDescriptionProvider _parent; // 0x10
	private TypeDescriptionProvider.EmptyCustomTypeDescriptor _emptyDescriptor; // 0x18

	// Methods

	// RVA: 0x12B41A4 Offset: 0x12B01A4 VA: 0x12B41A4
	protected void .ctor() { }

	// RVA: 0x12BE5E0 Offset: 0x12BA5E0 VA: 0x12BE5E0 Slot: 4
	public virtual object CreateInstance(IServiceProvider provider, Type objectType, Type[] argTypes, object[] args) { }

	// RVA: 0x12BE6EC Offset: 0x12BA6EC VA: 0x12BE6EC Slot: 5
	public virtual IDictionary GetCache(object instance) { }

	// RVA: 0x12BE704 Offset: 0x12BA704 VA: 0x12BE704 Slot: 6
	public virtual ICustomTypeDescriptor GetExtendedTypeDescriptor(object instance) { }

	// RVA: 0x12BE794 Offset: 0x12BA794 VA: 0x12BE794 Slot: 7
	protected internal virtual IExtenderProvider[] GetExtenderProviders(object instance) { }

	// RVA: 0x12BE860 Offset: 0x12BA860 VA: 0x12BE860
	public Type GetReflectionType(Type objectType) { }

	// RVA: 0x12BE870 Offset: 0x12BA870 VA: 0x12BE870 Slot: 8
	public virtual Type GetReflectionType(Type objectType, object instance) { }

	// RVA: 0x12BE88C Offset: 0x12BA88C VA: 0x12BE88C
	public ICustomTypeDescriptor GetTypeDescriptor(Type objectType) { }

	// RVA: 0x12BE89C Offset: 0x12BA89C VA: 0x12BE89C
	public ICustomTypeDescriptor GetTypeDescriptor(object instance) { }

	// RVA: 0x12BE924 Offset: 0x12BA924 VA: 0x12BE924 Slot: 9
	public virtual ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance) { }
}


// Namespace: System.ComponentModel
[Usage(4, Inherited = True)]
public sealed class TypeDescriptionProviderAttribute : Attribute // TypeDefIndex: 3509
{
	// Fields
	[CompilerGenerated]
	private readonly string <TypeName>k__BackingField; // 0x10

	// Methods

	// RVA: 0x12BE9C0 Offset: 0x12BA9C0 VA: 0x12BE9C0
	public void .ctor(string typeName) { }
}


// Namespace: System.ComponentModel
public abstract class TypeListConverter : TypeConverter // TypeDefIndex: 3510
{
	// Fields
	private readonly Type[] _types; // 0x10
	private TypeConverter.StandardValuesCollection _values; // 0x18

	// Methods

	// RVA: 0x12BEA34 Offset: 0x12BAA34 VA: 0x12BEA34
	protected void .ctor(Type[] types) { }

	// RVA: 0x12BEA5C Offset: 0x12BAA5C VA: 0x12BEA5C Slot: 4
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType) { }

	// RVA: 0x12BEB24 Offset: 0x12BAB24 VA: 0x12BEB24 Slot: 5
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType) { }

	// RVA: 0x12BEBEC Offset: 0x12BABEC VA: 0x12BEBEC Slot: 6
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value) { }

	// RVA: 0x12BECFC Offset: 0x12BACFC VA: 0x12BECFC Slot: 7
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType) { }

	// RVA: 0x12BEEAC Offset: 0x12BAEAC VA: 0x12BEEAC Slot: 12
	public override TypeConverter.StandardValuesCollection GetStandardValues(ITypeDescriptorContext context) { }

	// RVA: 0x12BEF68 Offset: 0x12BAF68 VA: 0x12BEF68 Slot: 13
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context) { }

	// RVA: 0x12BEF70 Offset: 0x12BAF70 VA: 0x12BEF70 Slot: 14
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context) { }
}


// Namespace: System.ComponentModel
public class UInt16Converter : BaseNumberConverter // TypeDefIndex: 3511
{
	// Properties
	internal override Type TargetType { get; }

	// Methods

	// RVA: 0x12BEF78 Offset: 0x12BAF78 VA: 0x12BEF78 Slot: 17
	internal override Type get_TargetType() { }

	// RVA: 0x12BEFE4 Offset: 0x12BAFE4 VA: 0x12BEFE4 Slot: 18
	internal override object FromString(string value, int radix) { }

	// RVA: 0x12BF078 Offset: 0x12BB078 VA: 0x12BF078 Slot: 19
	internal override object FromString(string value, NumberFormatInfo formatInfo) { }

	// RVA: 0x12BF0EC Offset: 0x12BB0EC VA: 0x12BF0EC Slot: 20
	internal override string ToString(object value, NumberFormatInfo formatInfo) { }

	// RVA: 0x12BF19C Offset: 0x12BB19C VA: 0x12BF19C
	public void .ctor() { }
}


// Namespace: System.ComponentModel
public class UInt32Converter : BaseNumberConverter // TypeDefIndex: 3512
{
	// Properties
	internal override Type TargetType { get; }

	// Methods

	// RVA: 0x12BF1A4 Offset: 0x12BB1A4 VA: 0x12BF1A4 Slot: 17
	internal override Type get_TargetType() { }

	// RVA: 0x12BF210 Offset: 0x12BB210 VA: 0x12BF210 Slot: 18
	internal override object FromString(string value, int radix) { }

	// RVA: 0x12BF2A4 Offset: 0x12BB2A4 VA: 0x12BF2A4 Slot: 19
	internal override object FromString(string value, NumberFormatInfo formatInfo) { }

	// RVA: 0x12BF318 Offset: 0x12BB318 VA: 0x12BF318 Slot: 20
	internal override string ToString(object value, NumberFormatInfo formatInfo) { }

	// RVA: 0x12BF3C8 Offset: 0x12BB3C8 VA: 0x12BF3C8
	public void .ctor() { }
}


// Namespace: System.ComponentModel
public class UInt64Converter : BaseNumberConverter // TypeDefIndex: 3513
{
	// Properties
	internal override Type TargetType { get; }

	// Methods

	// RVA: 0x12BF3D0 Offset: 0x12BB3D0 VA: 0x12BF3D0 Slot: 17
	internal override Type get_TargetType() { }

	// RVA: 0x12BF43C Offset: 0x12BB43C VA: 0x12BF43C Slot: 18
	internal override object FromString(string value, int radix) { }

	// RVA: 0x12BF4D0 Offset: 0x12BB4D0 VA: 0x12BF4D0 Slot: 19
	internal override object FromString(string value, NumberFormatInfo formatInfo) { }

	// RVA: 0x12BF544 Offset: 0x12BB544 VA: 0x12BF544 Slot: 20
	internal override string ToString(object value, NumberFormatInfo formatInfo) { }

	// RVA: 0x12BF5F4 Offset: 0x12BB5F4 VA: 0x12BF5F4
	public void .ctor() { }
}


// Namespace: System.ComponentModel
public interface IChangeTracking // TypeDefIndex: 3514
{
	// Properties
	public abstract bool IsChanged { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool get_IsChanged();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void AcceptChanges();
}


// Namespace: System.ComponentModel
public interface IRevertibleChangeTracking : IChangeTracking // TypeDefIndex: 3515
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void RejectChanges();
}


// Namespace: System.ComponentModel
public class PropertyChangedEventArgs : EventArgs // TypeDefIndex: 3516
{
	// Fields
	private readonly string _propertyName; // 0x10

	// Methods

	// RVA: 0x12BF5FC Offset: 0x12BB5FC VA: 0x12BF5FC
	public void .ctor(string propertyName) { }
}


// Namespace: System.ComponentModel
public sealed class PropertyChangedEventHandler : MulticastDelegate // TypeDefIndex: 3517
{
	// Methods

	// RVA: 0x12BF668 Offset: 0x12BB668 VA: 0x12BF668
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x12BF76C Offset: 0x12BB76C VA: 0x12BF76C Slot: 12
	public virtual void Invoke(object sender, PropertyChangedEventArgs e) { }
}


// Namespace: System.ComponentModel
public class PropertyChangingEventArgs : EventArgs // TypeDefIndex: 3518
{
	// Fields
	private readonly string _propertyName; // 0x10

	// Methods

	// RVA: 0x12BF780 Offset: 0x12BB780 VA: 0x12BF780
	public void .ctor(string propertyName) { }
}


// Namespace: System.ComponentModel
public sealed class PropertyChangingEventHandler : MulticastDelegate // TypeDefIndex: 3519
{
	// Methods

	// RVA: 0x12BF7EC Offset: 0x12BB7EC VA: 0x12BF7EC
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x12BF8F0 Offset: 0x12BB8F0 VA: 0x12BF8F0 Slot: 12
	public virtual void Invoke(object sender, PropertyChangingEventArgs e) { }
}


// Namespace: System.ComponentModel
public class AsyncCompletedEventArgs : EventArgs // TypeDefIndex: 3520
{
	// Fields
	private readonly Exception error; // 0x10
	private readonly bool cancelled; // 0x18
	private readonly object userState; // 0x20

	// Properties
	public Exception Error { get; }

	// Methods

	// RVA: 0x12BF904 Offset: 0x12BB904 VA: 0x12BF904
	public void .ctor(Exception error, bool cancelled, object userState) { }

	// RVA: 0x12BF98C Offset: 0x12BB98C VA: 0x12BF98C
	public Exception get_Error() { }

	// RVA: 0x12BF994 Offset: 0x12BB994 VA: 0x12BF994
	protected void RaiseExceptionIfNecessary() { }
}


// Namespace: System.ComponentModel
public sealed class AsyncCompletedEventHandler : MulticastDelegate // TypeDefIndex: 3521
{
	// Methods

	// RVA: 0x12BFA68 Offset: 0x12BBA68 VA: 0x12BFA68
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x12BFB6C Offset: 0x12BBB6C VA: 0x12BFB6C Slot: 12
	public virtual void Invoke(object sender, AsyncCompletedEventArgs e) { }
}


// Namespace: System.ComponentModel
public class CollectionConverter : TypeConverter // TypeDefIndex: 3522
{
	// Methods

	// RVA: 0x12BFB80 Offset: 0x12BBB80 VA: 0x12BFB80 Slot: 7
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType) { }

	// RVA: 0x12BFD00 Offset: 0x12BBD00 VA: 0x12BFD00 Slot: 10
	public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes) { }

	// RVA: 0x12BFD08 Offset: 0x12BBD08 VA: 0x12BFD08 Slot: 11
	public override bool GetPropertiesSupported(ITypeDescriptorContext context) { }

	// RVA: 0x12BFD10 Offset: 0x12BBD10 VA: 0x12BFD10
	public void .ctor() { }
}


// Namespace: System.ComponentModel
public class Component : MarshalByRefObject, IComponent, IDisposable // TypeDefIndex: 3523
{
	// Fields
	private static readonly object EventDisposed; // 0x0
	private ISite site; // 0x18
	private EventHandlerList events; // 0x20

	// Properties
	[Browsable(False)]
	[DesignerSerializationVisibility(0)]
	public virtual ISite Site { get; }

	// Methods

	// RVA: 0x12BFD18 Offset: 0x12BBD18 VA: 0x12BFD18 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x12BFDB8 Offset: 0x12BBDB8 VA: 0x12BFDB8 Slot: 6
	public virtual ISite get_Site() { }

	// RVA: 0x12BFDC0 Offset: 0x12BBDC0 VA: 0x12BFDC0 Slot: 5
	public void Dispose() { }

	// RVA: 0x12BFE2C Offset: 0x12BBE2C VA: 0x12BFE2C Slot: 7
	protected virtual void Dispose(bool disposing) { }

	// RVA: 0x12C012C Offset: 0x12BC12C VA: 0x12C012C Slot: 3
	public override string ToString() { }

	// RVA: 0x12C025C Offset: 0x12BC25C VA: 0x12C025C
	public void .ctor() { }

	// RVA: 0x12C0264 Offset: 0x12BC264 VA: 0x12C0264
	private static void .cctor() { }
}


// Namespace: System.ComponentModel
public class ComponentConverter : ReferenceConverter // TypeDefIndex: 3524
{
	// Methods

	// RVA: 0x12C02D4 Offset: 0x12BC2D4 VA: 0x12C02D4
	public void .ctor(Type type) { }

	// RVA: 0x12C0340 Offset: 0x12BC340 VA: 0x12C0340 Slot: 10
	public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes) { }

	// RVA: 0x12C03A8 Offset: 0x12BC3A8 VA: 0x12C03A8 Slot: 11
	public override bool GetPropertiesSupported(ITypeDescriptorContext context) { }
}


// Namespace: System.ComponentModel
public class DateTimeOffsetConverter : TypeConverter // TypeDefIndex: 3525
{
	// Methods

	// RVA: 0x12C03B0 Offset: 0x12BC3B0 VA: 0x12C03B0 Slot: 4
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType) { }

	// RVA: 0x12C0478 Offset: 0x12BC478 VA: 0x12C0478 Slot: 5
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType) { }

	// RVA: 0x12C0540 Offset: 0x12BC540 VA: 0x12C0540 Slot: 6
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value) { }

	// RVA: 0x12C08D8 Offset: 0x12BC8D8 VA: 0x12C08D8 Slot: 7
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType) { }

	// RVA: 0x12C1458 Offset: 0x12BD458 VA: 0x12C1458
	public void .ctor() { }
}


// Namespace: System.ComponentModel
public class EnumConverter : TypeConverter // TypeDefIndex: 3526
{
	// Fields
	private TypeConverter.StandardValuesCollection values; // 0x10
	private Type type; // 0x18

	// Properties
	protected Type EnumType { get; }
	protected TypeConverter.StandardValuesCollection Values { get; set; }
	protected virtual IComparer Comparer { get; }

	// Methods

	// RVA: 0x12C1460 Offset: 0x12BD460 VA: 0x12C1460
	public void .ctor(Type type) { }

	// RVA: 0x12C1488 Offset: 0x12BD488 VA: 0x12C1488
	protected Type get_EnumType() { }

	// RVA: 0x12C1490 Offset: 0x12BD490 VA: 0x12C1490
	protected TypeConverter.StandardValuesCollection get_Values() { }

	// RVA: 0x12C1498 Offset: 0x12BD498 VA: 0x12C1498
	protected void set_Values(TypeConverter.StandardValuesCollection value) { }

	// RVA: 0x12C14A0 Offset: 0x12BD4A0 VA: 0x12C14A0 Slot: 4
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType) { }

	// RVA: 0x12C15B0 Offset: 0x12BD5B0 VA: 0x12C15B0 Slot: 5
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType) { }

	// RVA: 0x12C16C0 Offset: 0x12BD6C0 VA: 0x12C16C0 Slot: 16
	protected virtual IComparer get_Comparer() { }

	// RVA: 0x12C1718 Offset: 0x12BD718 VA: 0x12C1718 Slot: 6
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value) { }

	// RVA: 0x12C1C3C Offset: 0x12BDC3C VA: 0x12C1C3C Slot: 7
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType) { }

	// RVA: 0x12C2974 Offset: 0x12BE974 VA: 0x12C2974 Slot: 12
	public override TypeConverter.StandardValuesCollection GetStandardValues(ITypeDescriptorContext context) { }

	// RVA: 0x12C2D70 Offset: 0x12BED70 VA: 0x12C2D70 Slot: 13
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context) { }

	// RVA: 0x12C2E18 Offset: 0x12BEE18 VA: 0x12C2E18 Slot: 14
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context) { }

	// RVA: 0x12C2E20 Offset: 0x12BEE20 VA: 0x12C2E20 Slot: 15
	public override bool IsValid(ITypeDescriptorContext context, object value) { }
}


// Namespace: System.ComponentModel
[TypeConverter(typeof(ComponentConverter))]
public interface IComponent : IDisposable // TypeDefIndex: 3527
{
	// Properties
	public abstract ISite Site { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract ISite get_Site();
}


// Namespace: System.ComponentModel
public abstract class MemberDescriptor // TypeDefIndex: 3528
{
	// Fields
	private string name; // 0x10
	private string displayName; // 0x18
	private int nameHash; // 0x20
	private AttributeCollection attributeCollection; // 0x28
	private Attribute[] attributes; // 0x30
	private Attribute[] originalAttributes; // 0x38
	private bool attributesFiltered; // 0x40
	private bool attributesFilled; // 0x41
	private int metadataVersion; // 0x44
	private string category; // 0x48
	private string description; // 0x50
	private object lockCookie; // 0x58

	// Properties
	protected virtual Attribute[] AttributeArray { get; set; }
	public virtual AttributeCollection Attributes { get; }
	public virtual string Name { get; }
	protected virtual int NameHashCode { get; }
	public virtual string DisplayName { get; }

	// Methods

	// RVA: 0x12B92E0 Offset: 0x12B52E0 VA: 0x12B92E0
	protected void .ctor(string name, Attribute[] attributes) { }

	// RVA: 0x12B9470 Offset: 0x12B5470 VA: 0x12B9470
	protected void .ctor(MemberDescriptor oldMemberDescriptor, Attribute[] newAttributes) { }

	// RVA: 0x12C2E8C Offset: 0x12BEE8C VA: 0x12C2E8C Slot: 4
	protected virtual Attribute[] get_AttributeArray() { }

	// RVA: 0x12C3654 Offset: 0x12BF654 VA: 0x12C3654 Slot: 5
	protected virtual void set_AttributeArray(Attribute[] value) { }

	// RVA: 0x12C3718 Offset: 0x12BF718 VA: 0x12C3718 Slot: 6
	public virtual AttributeCollection get_Attributes() { }

	// RVA: 0x12C37FC Offset: 0x12BF7FC VA: 0x12C37FC Slot: 7
	public virtual string get_Name() { }

	// RVA: 0x12C384C Offset: 0x12BF84C VA: 0x12C384C Slot: 8
	protected virtual int get_NameHashCode() { }

	// RVA: 0x12B5DA4 Offset: 0x12B1DA4 VA: 0x12B5DA4 Slot: 9
	public virtual string get_DisplayName() { }

	// RVA: 0x12C2EAC Offset: 0x12BEEAC VA: 0x12C2EAC
	private void CheckAttributesValid() { }

	// RVA: 0x12C3854 Offset: 0x12BF854 VA: 0x12C3854 Slot: 10
	protected virtual AttributeCollection CreateAttributeCollection() { }

	// RVA: 0x12C38C8 Offset: 0x12BF8C8 VA: 0x12C38C8 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x12BA114 Offset: 0x12B6114 VA: 0x12BA114 Slot: 11
	protected virtual void FillAttributes(IList attributeList) { }

	// RVA: 0x12C2F24 Offset: 0x12BEF24 VA: 0x12C2F24
	private void FilterAttributesIfNeeded() { }

	// RVA: 0x12C3B3C Offset: 0x12BFB3C VA: 0x12C3B3C
	protected static MethodInfo FindMethod(Type componentClass, string name, Type[] args, Type returnType) { }

	// RVA: 0x12C3B44 Offset: 0x12BFB44 VA: 0x12C3B44
	protected static MethodInfo FindMethod(Type componentClass, string name, Type[] args, Type returnType, bool publicOnly) { }

	// RVA: 0x12C3BE8 Offset: 0x12BFBE8 VA: 0x12C3BE8 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x12BA33C Offset: 0x12B633C VA: 0x12BA33C Slot: 12
	protected virtual object GetInvocationTarget(Type type, object instance) { }

	// RVA: 0x12B5EBC Offset: 0x12B1EBC VA: 0x12B5EBC
	protected static ISite GetSite(object component) { }
}


// Namespace: System.ComponentModel
public class ProgressChangedEventArgs : EventArgs // TypeDefIndex: 3529
{
	// Fields
	private readonly int progressPercentage; // 0x10
	private readonly object userState; // 0x18

	// Methods

	// RVA: 0x12C3BF0 Offset: 0x12BFBF0 VA: 0x12C3BF0
	public void .ctor(int progressPercentage, object userState) { }
}


// Namespace: System.ComponentModel
internal sealed class ReflectPropertyDescriptor : PropertyDescriptor // TypeDefIndex: 3530
{
	// Fields
	private static readonly Type[] argsNone; // 0x0
	private static readonly object noValue; // 0x8
	private static TraceSwitch PropDescCreateSwitch; // 0x10
	private static TraceSwitch PropDescUsageSwitch; // 0x18
	private static readonly int BitDefaultValueQueried; // 0x20
	private static readonly int BitGetQueried; // 0x24
	private static readonly int BitSetQueried; // 0x28
	private static readonly int BitShouldSerializeQueried; // 0x2C
	private static readonly int BitResetQueried; // 0x30
	private static readonly int BitChangedQueried; // 0x34
	private static readonly int BitIPropChangedQueried; // 0x38
	private static readonly int BitReadOnlyChecked; // 0x3C
	private static readonly int BitAmbientValueQueried; // 0x40
	private static readonly int BitSetOnDemand; // 0x44
	private BitVector32 state; // 0x84
	private Type componentClass; // 0x88
	private Type type; // 0x90
	private object defaultValue; // 0x98
	private object ambientValue; // 0xA0
	private PropertyInfo propInfo; // 0xA8
	private MethodInfo getMethod; // 0xB0
	private MethodInfo setMethod; // 0xB8
	private MethodInfo shouldSerializeMethod; // 0xC0
	private MethodInfo resetMethod; // 0xC8
	private EventDescriptor realChangedEvent; // 0xD0
	private Type receiverType; // 0xD8

	// Properties
	private object AmbientValue { get; }
	public override Type ComponentType { get; }
	private object DefaultValue { get; }
	private MethodInfo GetMethodValue { get; }
	private bool IsExtender { get; }
	public override bool IsReadOnly { get; }
	public override Type PropertyType { get; }
	private MethodInfo ResetMethodValue { get; }
	private MethodInfo SetMethodValue { get; }
	private MethodInfo ShouldSerializeMethodValue { get; }

	// Methods

	// RVA: 0x12C3C64 Offset: 0x12BFC64 VA: 0x12C3C64
	public void .ctor(Type componentClass, string name, Type type, Attribute[] attributes) { }

	// RVA: 0x12C3F38 Offset: 0x12BFF38 VA: 0x12C3F38
	public void .ctor(Type componentClass, string name, Type type, PropertyInfo propInfo, MethodInfo getMethod, MethodInfo setMethod, Attribute[] attrs) { }

	// RVA: 0x12C4058 Offset: 0x12C0058 VA: 0x12C4058
	public void .ctor(Type componentClass, string name, Type type, Type receiverType, MethodInfo getMethod, MethodInfo setMethod, Attribute[] attrs) { }

	// RVA: 0x12C4120 Offset: 0x12C0120 VA: 0x12C4120
	private object get_AmbientValue() { }

	// RVA: 0x12C429C Offset: 0x12C029C VA: 0x12C429C Slot: 13
	public override Type get_ComponentType() { }

	// RVA: 0x12C42A4 Offset: 0x12C02A4 VA: 0x12C42A4
	private object get_DefaultValue() { }

	// RVA: 0x12C44F4 Offset: 0x12C04F4 VA: 0x12C44F4
	private MethodInfo get_GetMethodValue() { }

	// RVA: 0x12C4914 Offset: 0x12C0914 VA: 0x12C4914
	private bool get_IsExtender() { }

	// RVA: 0x12C4974 Offset: 0x12C0974 VA: 0x12C4974 Slot: 15
	public override bool get_IsReadOnly() { }

	// RVA: 0x12C4F5C Offset: 0x12C0F5C VA: 0x12C4F5C Slot: 16
	public override Type get_PropertyType() { }

	// RVA: 0x12C4F64 Offset: 0x12C0F64 VA: 0x12C4F64
	private MethodInfo get_ResetMethodValue() { }

	// RVA: 0x12C4A74 Offset: 0x12C0A74 VA: 0x12C4A74
	private MethodInfo get_SetMethodValue() { }

	// RVA: 0x12C5164 Offset: 0x12C1164 VA: 0x12C5164
	private MethodInfo get_ShouldSerializeMethodValue() { }

	// RVA: 0x12B581C Offset: 0x12B181C VA: 0x12B581C
	internal bool ExtenderCanResetValue(IExtenderProvider provider, object component) { }

	// RVA: 0x12B5FDC Offset: 0x12B1FDC VA: 0x12B5FDC
	internal object ExtenderGetValue(IExtenderProvider provider, object component) { }

	// RVA: 0x12B6130 Offset: 0x12B2130 VA: 0x12B6130
	internal void ExtenderResetValue(IExtenderProvider provider, object component, PropertyDescriptor notifyDesc) { }

	// RVA: 0x12B6668 Offset: 0x12B2668 VA: 0x12B6668
	internal void ExtenderSetValue(IExtenderProvider provider, object component, object value, PropertyDescriptor notifyDesc) { }

	// RVA: 0x12B6AF8 Offset: 0x12B2AF8 VA: 0x12B6AF8
	internal bool ExtenderShouldSerializeValue(IExtenderProvider provider, object component) { }

	// RVA: 0x12C5364 Offset: 0x12C1364 VA: 0x12C5364 Slot: 17
	public override bool CanResetValue(object component) { }

	// RVA: 0x12C55D8 Offset: 0x12C15D8 VA: 0x12C55D8 Slot: 11
	protected override void FillAttributes(IList attributes) { }

	// RVA: 0x12C64BC Offset: 0x12C24BC VA: 0x12C64BC Slot: 18
	public override object GetValue(object component) { }

	// RVA: 0x12C687C Offset: 0x12C287C VA: 0x12C687C Slot: 19
	protected override void OnValueChanged(object component, EventArgs e) { }

	// RVA: 0x12C6920 Offset: 0x12C2920 VA: 0x12C6920 Slot: 20
	public override void ResetValue(object component) { }

	// RVA: 0x12C6D84 Offset: 0x12C2D84 VA: 0x12C6D84 Slot: 21
	public override void SetValue(object component, object value) { }

	// RVA: 0x12C7360 Offset: 0x12C3360 VA: 0x12C7360 Slot: 22
	public override bool ShouldSerializeValue(object component) { }

	// RVA: 0x12C7690 Offset: 0x12C3690 VA: 0x12C7690
	private static void .cctor() { }
}


// Namespace: 
private class ReflectTypeDescriptionProvider.ReflectedTypeData // TypeDefIndex: 3531
{
	// Fields
	private Type _type; // 0x10
	private AttributeCollection _attributes; // 0x18
	private EventDescriptorCollection _events; // 0x20
	private PropertyDescriptorCollection _properties; // 0x28
	private TypeConverter _converter; // 0x30
	private object[] _editors; // 0x38
	private Type[] _editorTypes; // 0x40
	private int _editorCount; // 0x48

	// Properties
	internal bool IsPopulated { get; }

	// Methods

	// RVA: 0x12CC978 Offset: 0x12C8978 VA: 0x12CC978
	internal void .ctor(Type type) { }

	// RVA: 0x12CC9A0 Offset: 0x12C89A0 VA: 0x12CC9A0
	internal bool get_IsPopulated() { }

	// RVA: 0x12CC9BC Offset: 0x12C89BC VA: 0x12CC9BC
	internal AttributeCollection GetAttributes() { }

	// RVA: 0x12CD2B8 Offset: 0x12C92B8 VA: 0x12CD2B8
	internal TypeConverter GetConverter(object instance) { }

	// RVA: 0x12CD968 Offset: 0x12C9968 VA: 0x12CD968
	internal PropertyDescriptorCollection GetProperties() { }

	// RVA: 0x12CD7BC Offset: 0x12C97BC VA: 0x12CD7BC
	private Type GetTypeFromName(string typeName) { }

	// RVA: 0x12CDC68 Offset: 0x12C9C68 VA: 0x12CDC68
	internal void Refresh() { }
}


// Namespace: System.ComponentModel
internal sealed class ReflectTypeDescriptionProvider : TypeDescriptionProvider // TypeDefIndex: 3532
{
	// Fields
	private Hashtable _typeData; // 0x20
	private static Type[] _typeConstructor; // 0x0
	private static Hashtable _intrinsicTypeConverters; // 0x8
	private static object _intrinsicReferenceKey; // 0x10
	private static object _intrinsicNullableKey; // 0x18
	private static object _dictionaryKey; // 0x20
	private static Hashtable _propertyCache; // 0x28
	private static Hashtable _attributeCache; // 0x30
	private static Hashtable _extendedPropertyCache; // 0x38
	private static readonly Guid _extenderProviderKey; // 0x40
	private static readonly Guid _extenderPropertiesKey; // 0x50
	private static readonly Guid _extenderProviderPropertiesKey; // 0x60
	private static readonly Type[] _skipInterfaceAttributeList; // 0x70
	private static object _internalSyncObject; // 0x78

	// Properties
	private static Hashtable IntrinsicTypeConverters { get; }

	// Methods

	// RVA: 0x12C78C0 Offset: 0x12C38C0 VA: 0x12C78C0
	internal void .ctor() { }

	// RVA: 0x12C78C8 Offset: 0x12C38C8 VA: 0x12C78C8
	private static Hashtable get_IntrinsicTypeConverters() { }

	// RVA: 0x12C83AC Offset: 0x12C43AC VA: 0x12C83AC Slot: 4
	public override object CreateInstance(IServiceProvider provider, Type objectType, Type[] argTypes, object[] args) { }

	// RVA: 0x12C856C Offset: 0x12C456C VA: 0x12C856C
	private static object CreateInstance(Type objectType, Type callingType) { }

	// RVA: 0x12C8668 Offset: 0x12C4668 VA: 0x12C8668
	internal AttributeCollection GetAttributes(Type type) { }

	// RVA: 0x12C88F4 Offset: 0x12C48F4 VA: 0x12C88F4 Slot: 5
	public override IDictionary GetCache(object instance) { }

	// RVA: 0x12C8C58 Offset: 0x12C4C58 VA: 0x12C8C58
	internal TypeConverter GetConverter(Type type, object instance) { }

	// RVA: 0x12C8C80 Offset: 0x12C4C80 VA: 0x12C8C80
	internal TypeConverter GetExtendedConverter(object instance) { }

	// RVA: 0x12C8CBC Offset: 0x12C4CBC VA: 0x12C8CBC
	internal PropertyDescriptorCollection GetExtendedProperties(object instance) { }

	// RVA: 0x12CA13C Offset: 0x12C613C VA: 0x12CA13C Slot: 7
	protected internal override IExtenderProvider[] GetExtenderProviders(object instance) { }

	// RVA: 0x12CA5C8 Offset: 0x12C65C8 VA: 0x12CA5C8
	private static IExtenderProvider[] GetExtenders(ICollection components, object instance, IDictionary cache) { }

	// RVA: 0x12CB0CC Offset: 0x12C70CC VA: 0x12CB0CC
	internal object GetExtendedPropertyOwner(object instance, PropertyDescriptor pd) { }

	// RVA: 0x12CB160 Offset: 0x12C7160 VA: 0x12CB160 Slot: 6
	public override ICustomTypeDescriptor GetExtendedTypeDescriptor(object instance) { }

	// RVA: 0x12CB168 Offset: 0x12C7168 VA: 0x12CB168
	internal PropertyDescriptorCollection GetProperties(Type type) { }

	// RVA: 0x12CB0F8 Offset: 0x12C70F8 VA: 0x12CB0F8
	internal object GetPropertyOwner(Type type, object instance, PropertyDescriptor pd) { }

	// RVA: 0x12CB188 Offset: 0x12C7188 VA: 0x12CB188 Slot: 8
	public override Type GetReflectionType(Type objectType, object instance) { }

	// RVA: 0x12C8688 Offset: 0x12C4688 VA: 0x12C8688
	private ReflectTypeDescriptionProvider.ReflectedTypeData GetTypeData(Type type, bool createIfNeeded) { }

	// RVA: 0x12CB190 Offset: 0x12C7190 VA: 0x12CB190 Slot: 9
	public override ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance) { }

	// RVA: 0x12CB198 Offset: 0x12C7198 VA: 0x12CB198
	private static Type GetTypeFromName(string typeName) { }

	// RVA: 0x12CB2A8 Offset: 0x12C72A8 VA: 0x12CB2A8
	internal bool IsPopulated(Type type) { }

	// RVA: 0x12CB2CC Offset: 0x12C72CC VA: 0x12CB2CC
	private static Attribute[] ReflectGetAttributes(Type type) { }

	// RVA: 0x12C6078 Offset: 0x12C2078 VA: 0x12C6078
	internal static Attribute[] ReflectGetAttributes(MemberInfo member) { }

	// RVA: 0x12C920C Offset: 0x12C520C VA: 0x12C920C
	private static PropertyDescriptor[] ReflectGetExtendedProperties(IExtenderProvider provider) { }

	// RVA: 0x12CB710 Offset: 0x12C7710 VA: 0x12CB710
	private static PropertyDescriptor[] ReflectGetProperties(Type type) { }

	// RVA: 0x12CBD0C Offset: 0x12C7D0C VA: 0x12CBD0C
	internal void Refresh(Type type) { }

	// RVA: 0x12CBD30 Offset: 0x12C7D30 VA: 0x12CBD30
	private static object SearchIntrinsicTable(Hashtable table, Type callingType) { }

	// RVA: 0x12CC6A4 Offset: 0x12C86A4 VA: 0x12CC6A4
	private static void .cctor() { }
}


// Namespace: 
protected abstract class TypeConverter.SimplePropertyDescriptor : PropertyDescriptor // TypeDefIndex: 3533
{
	// Fields
	private Type componentType; // 0x88
	private Type propertyType; // 0x90

	// Properties
	public override Type ComponentType { get; }
	public override bool IsReadOnly { get; }
	public override Type PropertyType { get; }

	// Methods

	// RVA: 0x12CEFDC Offset: 0x12CAFDC VA: 0x12CEFDC
	protected void .ctor(Type componentType, string name, Type propertyType) { }

	// RVA: 0x12CF05C Offset: 0x12CB05C VA: 0x12CF05C
	protected void .ctor(Type componentType, string name, Type propertyType, Attribute[] attributes) { }

	// RVA: 0x12CF090 Offset: 0x12CB090 VA: 0x12CF090 Slot: 13
	public override Type get_ComponentType() { }

	// RVA: 0x12CF098 Offset: 0x12CB098 VA: 0x12CF098 Slot: 15
	public override bool get_IsReadOnly() { }

	// RVA: 0x12CF11C Offset: 0x12CB11C VA: 0x12CF11C Slot: 16
	public override Type get_PropertyType() { }

	// RVA: 0x12CF124 Offset: 0x12CB124 VA: 0x12CF124 Slot: 17
	public override bool CanResetValue(object component) { }

	// RVA: 0x12CF260 Offset: 0x12CB260 VA: 0x12CF260 Slot: 20
	public override void ResetValue(object component) { }

	// RVA: 0x12CF384 Offset: 0x12CB384 VA: 0x12CF384 Slot: 22
	public override bool ShouldSerializeValue(object component) { }
}


// Namespace: 
[DefaultMember("Item")]
public class TypeConverter.StandardValuesCollection : ICollection, IEnumerable // TypeDefIndex: 3534
{
	// Fields
	private ICollection values; // 0x10
	private Array valueArray; // 0x18

	// Properties
	public int Count { get; }
	public object Item { get; }
	private int System.Collections.ICollection.Count { get; }
	private bool System.Collections.ICollection.IsSynchronized { get; }
	private object System.Collections.ICollection.SyncRoot { get; }

	// Methods

	// RVA: 0x12CF38C Offset: 0x12CB38C VA: 0x12CF38C
	public void .ctor(ICollection values) { }

	// RVA: 0x12CF43C Offset: 0x12CB43C VA: 0x12CF43C
	public int get_Count() { }

	// RVA: 0x12CF4F8 Offset: 0x12CB4F8 VA: 0x12CF4F8
	public object get_Item(int index) { }

	// RVA: 0x12CF6E8 Offset: 0x12CB6E8 VA: 0x12CF6E8
	public void CopyTo(Array array, int index) { }

	// RVA: 0x12CF7A0 Offset: 0x12CB7A0 VA: 0x12CF7A0
	public IEnumerator GetEnumerator() { }

	// RVA: 0x12CF840 Offset: 0x12CB840 VA: 0x12CF840 Slot: 5
	private int System.Collections.ICollection.get_Count() { }

	// RVA: 0x12CF844 Offset: 0x12CB844 VA: 0x12CF844 Slot: 7
	private bool System.Collections.ICollection.get_IsSynchronized() { }

	// RVA: 0x12CF84C Offset: 0x12CB84C VA: 0x12CF84C Slot: 6
	private object System.Collections.ICollection.get_SyncRoot() { }

	// RVA: 0x12CF854 Offset: 0x12CB854 VA: 0x12CF854 Slot: 4
	private void System.Collections.ICollection.CopyTo(Array array, int index) { }

	// RVA: 0x12CF858 Offset: 0x12CB858 VA: 0x12CF858 Slot: 8
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }
}


// Namespace: System.ComponentModel
public class TypeConverter // TypeDefIndex: 3535
{
	// Fields
	private const string s_UseCompatibleTypeConverterBehavior = "UseCompatibleTypeConverterBehavior";
	private static bool useCompatibleTypeConversion; // 0x0

	// Properties
	private static bool UseCompatibleTypeConversion { get; }

	// Methods

	// RVA: 0x12CDC80 Offset: 0x12C9C80 VA: 0x12CDC80
	private static bool get_UseCompatibleTypeConversion() { }

	// RVA: 0x12CDCD0 Offset: 0x12C9CD0 VA: 0x12CDCD0
	public bool CanConvertFrom(Type sourceType) { }

	// RVA: 0x12CDCE4 Offset: 0x12C9CE4 VA: 0x12CDCE4 Slot: 4
	public virtual bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType) { }

	// RVA: 0x12CDD6C Offset: 0x12C9D6C VA: 0x12CDD6C
	public bool CanConvertTo(Type destinationType) { }

	// RVA: 0x12CDD80 Offset: 0x12C9D80 VA: 0x12CDD80 Slot: 5
	public virtual bool CanConvertTo(ITypeDescriptorContext context, Type destinationType) { }

	// RVA: 0x12CDE08 Offset: 0x12C9E08 VA: 0x12CDE08
	public object ConvertFrom(object value) { }

	// RVA: 0x12CDE84 Offset: 0x12C9E84 VA: 0x12CDE84 Slot: 6
	public virtual object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value) { }

	// RVA: 0x12CE370 Offset: 0x12CA370 VA: 0x12CE370
	public object ConvertFromInvariantString(string text) { }

	// RVA: 0x12CE3F8 Offset: 0x12CA3F8 VA: 0x12CE3F8
	public object ConvertFromInvariantString(ITypeDescriptorContext context, string text) { }

	// RVA: 0x12CE478 Offset: 0x12CA478 VA: 0x12CE478
	public object ConvertFromString(string text) { }

	// RVA: 0x12CE490 Offset: 0x12CA490 VA: 0x12CE490
	public object ConvertFromString(ITypeDescriptorContext context, string text) { }

	// RVA: 0x12CE3EC Offset: 0x12CA3EC VA: 0x12CE3EC
	public object ConvertFromString(ITypeDescriptorContext context, CultureInfo culture, string text) { }

	// RVA: 0x12CE510 Offset: 0x12CA510 VA: 0x12CE510
	public object ConvertTo(object value, Type destinationType) { }

	// RVA: 0x12CE52C Offset: 0x12CA52C VA: 0x12CE52C Slot: 7
	public virtual object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType) { }

	// RVA: 0x12CE8D8 Offset: 0x12CA8D8 VA: 0x12CE8D8
	public string ConvertToInvariantString(object value) { }

	// RVA: 0x12CEA28 Offset: 0x12CAA28 VA: 0x12CEA28
	public string ConvertToInvariantString(ITypeDescriptorContext context, object value) { }

	// RVA: 0x12CEAA0 Offset: 0x12CAAA0 VA: 0x12CEAA0
	public string ConvertToString(object value) { }

	// RVA: 0x12CEBA0 Offset: 0x12CABA0 VA: 0x12CEBA0
	public string ConvertToString(ITypeDescriptorContext context, object value) { }

	// RVA: 0x12CE94C Offset: 0x12CA94C VA: 0x12CE94C
	public string ConvertToString(ITypeDescriptorContext context, CultureInfo culture, object value) { }

	// RVA: 0x12CECA4 Offset: 0x12CACA4 VA: 0x12CECA4
	public object CreateInstance(IDictionary propertyValues) { }

	// RVA: 0x12CECB8 Offset: 0x12CACB8 VA: 0x12CECB8 Slot: 8
	public virtual object CreateInstance(ITypeDescriptorContext context, IDictionary propertyValues) { }

	// RVA: 0x12CE244 Offset: 0x12CA244 VA: 0x12CE244
	protected Exception GetConvertFromException(object value) { }

	// RVA: 0x12CE760 Offset: 0x12CA760 VA: 0x12CE760
	protected Exception GetConvertToException(object value, Type destinationType) { }

	// RVA: 0x12CECC0 Offset: 0x12CACC0 VA: 0x12CECC0
	public bool GetCreateInstanceSupported() { }

	// RVA: 0x12CECD0 Offset: 0x12CACD0 VA: 0x12CECD0 Slot: 9
	public virtual bool GetCreateInstanceSupported(ITypeDescriptorContext context) { }

	// RVA: 0x12CECD8 Offset: 0x12CACD8 VA: 0x12CECD8
	public PropertyDescriptorCollection GetProperties(object value) { }

	// RVA: 0x12CECE4 Offset: 0x12CACE4 VA: 0x12CECE4
	public PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value) { }

	// RVA: 0x12CEDD4 Offset: 0x12CADD4 VA: 0x12CEDD4 Slot: 10
	public virtual PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes) { }

	// RVA: 0x12CEDDC Offset: 0x12CADDC VA: 0x12CEDDC
	public bool GetPropertiesSupported() { }

	// RVA: 0x12CEDEC Offset: 0x12CADEC VA: 0x12CEDEC Slot: 11
	public virtual bool GetPropertiesSupported(ITypeDescriptorContext context) { }

	// RVA: 0x12CEDF4 Offset: 0x12CADF4 VA: 0x12CEDF4
	public ICollection GetStandardValues() { }

	// RVA: 0x12CEE04 Offset: 0x12CAE04 VA: 0x12CEE04 Slot: 12
	public virtual TypeConverter.StandardValuesCollection GetStandardValues(ITypeDescriptorContext context) { }

	// RVA: 0x12CEE0C Offset: 0x12CAE0C VA: 0x12CEE0C
	public bool GetStandardValuesExclusive() { }

	// RVA: 0x12CEE20 Offset: 0x12CAE20 VA: 0x12CEE20 Slot: 13
	public virtual bool GetStandardValuesExclusive(ITypeDescriptorContext context) { }

	// RVA: 0x12CEE28 Offset: 0x12CAE28 VA: 0x12CEE28
	public bool GetStandardValuesSupported() { }

	// RVA: 0x12CEE3C Offset: 0x12CAE3C VA: 0x12CEE3C Slot: 14
	public virtual bool GetStandardValuesSupported(ITypeDescriptorContext context) { }

	// RVA: 0x12CEE44 Offset: 0x12CAE44 VA: 0x12CEE44
	public bool IsValid(object value) { }

	// RVA: 0x12CEE5C Offset: 0x12CAE5C VA: 0x12CEE5C Slot: 15
	public virtual bool IsValid(ITypeDescriptorContext context, object value) { }

	// RVA: 0x12CEF9C Offset: 0x12CAF9C VA: 0x12CEF9C
	protected PropertyDescriptorCollection SortProperties(PropertyDescriptorCollection props, string[] names) { }

	// RVA: 0x12CEFD4 Offset: 0x12CAFD4 VA: 0x12CEFD4
	public void .ctor() { }
}


// Namespace: 
private sealed class TypeDescriptor.AttributeFilterCacheItem // TypeDefIndex: 3536
{
	// Fields
	private Attribute[] _filter; // 0x10
	internal ICollection FilteredMembers; // 0x18

	// Methods

	// RVA: 0x12D6A24 Offset: 0x12D2A24 VA: 0x12D6A24
	internal void .ctor(Attribute[] filter, ICollection filteredMembers) { }

	// RVA: 0x12D6998 Offset: 0x12D2998 VA: 0x12D6998
	internal bool IsValid(Attribute[] filter) { }
}


// Namespace: 
private sealed class TypeDescriptor.FilterCacheItem // TypeDefIndex: 3537
{
	// Fields
	private ITypeDescriptorFilterService _filterService; // 0x10
	internal ICollection FilteredMembers; // 0x18

	// Methods

	// RVA: 0x12D6B8C Offset: 0x12D2B8C VA: 0x12D6B8C
	internal void .ctor(ITypeDescriptorFilterService filterService, ICollection filteredMembers) { }

	// RVA: 0x12D6A50 Offset: 0x12D2A50 VA: 0x12D6A50
	internal bool IsValid(ITypeDescriptorFilterService filterService) { }
}


// Namespace: 
private interface TypeDescriptor.IUnimplemented // TypeDefIndex: 3538
{}


// Namespace: 
private sealed class TypeDescriptor.MemberDescriptorComparer : IComparer // TypeDefIndex: 3539
{
	// Fields
	public static readonly TypeDescriptor.MemberDescriptorComparer Instance; // 0x0

	// Methods

	// RVA: 0x12D70BC Offset: 0x12D30BC VA: 0x12D70BC Slot: 4
	public int Compare(object left, object right) { }

	// RVA: 0x12D71D8 Offset: 0x12D31D8 VA: 0x12D71D8
	public void .ctor() { }

	// RVA: 0x12D71E0 Offset: 0x12D31E0 VA: 0x12D71E0
	private static void .cctor() { }
}


// Namespace: 
private sealed class TypeDescriptor.MergedTypeDescriptor : ICustomTypeDescriptor // TypeDefIndex: 3540
{
	// Fields
	private ICustomTypeDescriptor _primary; // 0x10
	private ICustomTypeDescriptor _secondary; // 0x18

	// Methods

	// RVA: 0x12D5490 Offset: 0x12D1490 VA: 0x12D5490
	internal void .ctor(ICustomTypeDescriptor primary, ICustomTypeDescriptor secondary) { }

	// RVA: 0x12D723C Offset: 0x12D323C VA: 0x12D723C Slot: 4
	private AttributeCollection System.ComponentModel.ICustomTypeDescriptor.GetAttributes() { }

	// RVA: 0x12D734C Offset: 0x12D334C VA: 0x12D734C Slot: 5
	private TypeConverter System.ComponentModel.ICustomTypeDescriptor.GetConverter() { }

	// RVA: 0x12D7464 Offset: 0x12D3464 VA: 0x12D7464 Slot: 6
	private PropertyDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetProperties() { }

	// RVA: 0x12D757C Offset: 0x12D357C VA: 0x12D757C Slot: 7
	private PropertyDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetProperties(Attribute[] attributes) { }

	// RVA: 0x12D76AC Offset: 0x12D36AC VA: 0x12D76AC Slot: 8
	private object System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner(PropertyDescriptor pd) { }
}


// Namespace: 
private struct TypeDescriptor.TypeDescriptionNode.DefaultExtendedTypeDescriptor : ICustomTypeDescriptor // TypeDefIndex: 3541
{
	// Fields
	private TypeDescriptor.TypeDescriptionNode _node; // 0x0
	private object _instance; // 0x8

	// Methods

	// RVA: 0x12D7A68 Offset: 0x12D3A68 VA: 0x12D7A68
	internal void .ctor(TypeDescriptor.TypeDescriptionNode node, object instance) { }

	// RVA: 0x12D7D08 Offset: 0x12D3D08 VA: 0x12D7D08 Slot: 4
	private AttributeCollection System.ComponentModel.ICustomTypeDescriptor.GetAttributes() { }

	// RVA: 0x12D7FC8 Offset: 0x12D3FC8 VA: 0x12D7FC8 Slot: 5
	private TypeConverter System.ComponentModel.ICustomTypeDescriptor.GetConverter() { }

	// RVA: 0x12D826C Offset: 0x12D426C VA: 0x12D826C Slot: 6
	private PropertyDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetProperties() { }

	// RVA: 0x12D8510 Offset: 0x12D4510 VA: 0x12D8510 Slot: 7
	private PropertyDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetProperties(Attribute[] attributes) { }

	// RVA: 0x12D87BC Offset: 0x12D47BC VA: 0x12D87BC Slot: 8
	private object System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner(PropertyDescriptor pd) { }
}


// Namespace: 
private struct TypeDescriptor.TypeDescriptionNode.DefaultTypeDescriptor : ICustomTypeDescriptor // TypeDefIndex: 3542
{
	// Fields
	private TypeDescriptor.TypeDescriptionNode _node; // 0x0
	private Type _objectType; // 0x8
	private object _instance; // 0x10

	// Methods

	// RVA: 0x12D7CFC Offset: 0x12D3CFC VA: 0x12D7CFC
	internal void .ctor(TypeDescriptor.TypeDescriptionNode node, Type objectType, object instance) { }

	// RVA: 0x12D89E0 Offset: 0x12D49E0 VA: 0x12D89E0 Slot: 4
	private AttributeCollection System.ComponentModel.ICustomTypeDescriptor.GetAttributes() { }

	// RVA: 0x12D8C80 Offset: 0x12D4C80 VA: 0x12D8C80 Slot: 5
	private TypeConverter System.ComponentModel.ICustomTypeDescriptor.GetConverter() { }

	// RVA: 0x12D8F24 Offset: 0x12D4F24 VA: 0x12D8F24 Slot: 6
	private PropertyDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetProperties() { }

	// RVA: 0x12D91C8 Offset: 0x12D51C8 VA: 0x12D91C8 Slot: 7
	private PropertyDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetProperties(Attribute[] attributes) { }

	// RVA: 0x12D9474 Offset: 0x12D5474 VA: 0x12D9474 Slot: 8
	private object System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner(PropertyDescriptor pd) { }
}


// Namespace: 
private sealed class TypeDescriptor.TypeDescriptionNode : TypeDescriptionProvider // TypeDefIndex: 3543
{
	// Fields
	internal TypeDescriptor.TypeDescriptionNode Next; // 0x20
	internal TypeDescriptionProvider Provider; // 0x28

	// Methods

	// RVA: 0x12D008C Offset: 0x12CC08C VA: 0x12D008C
	internal void .ctor(TypeDescriptionProvider provider) { }

	// RVA: 0x12D77DC Offset: 0x12D37DC VA: 0x12D77DC Slot: 4
	public override object CreateInstance(IServiceProvider provider, Type objectType, Type[] argTypes, object[] args) { }

	// RVA: 0x12D7954 Offset: 0x12D3954 VA: 0x12D7954 Slot: 5
	public override IDictionary GetCache(object instance) { }

	// RVA: 0x12D79C0 Offset: 0x12D39C0 VA: 0x12D79C0 Slot: 6
	public override ICustomTypeDescriptor GetExtendedTypeDescriptor(object instance) { }

	// RVA: 0x12D7A70 Offset: 0x12D3A70 VA: 0x12D7A70 Slot: 7
	protected internal override IExtenderProvider[] GetExtenderProviders(object instance) { }

	// RVA: 0x12D7ADC Offset: 0x12D3ADC VA: 0x12D7ADC Slot: 8
	public override Type GetReflectionType(Type objectType, object instance) { }

	// RVA: 0x12D7BB4 Offset: 0x12D3BB4 VA: 0x12D7BB4 Slot: 9
	public override ICustomTypeDescriptor GetTypeDescriptor(Type objectType, object instance) { }
}


// Namespace: 
[TypeDescriptionProvider("System.Windows.Forms.ComponentModel.Com2Interop.ComNativeDescriptor, System.Windows.Forms, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089")]
private sealed class TypeDescriptor.TypeDescriptorComObject // TypeDefIndex: 3544
{}


// Namespace: 
private sealed class TypeDescriptor.TypeDescriptorInterface // TypeDefIndex: 3545
{}


// Namespace: System.ComponentModel
public sealed class TypeDescriptor // TypeDefIndex: 3546
{
	// Fields
	private static WeakHashtable _providerTable; // 0x0
	private static Hashtable _providerTypeTable; // 0x8
	private static Hashtable _defaultProviders; // 0x10
	private static WeakHashtable _associationTable; // 0x18
	private static int _metadataVersion; // 0x20
	private static int _collisionIndex; // 0x24
	private static BooleanSwitch TraceDescriptor; // 0x28
	private static readonly Guid[] _pipelineInitializeKeys; // 0x30
	private static readonly Guid[] _pipelineMergeKeys; // 0x38
	private static readonly Guid[] _pipelineFilterKeys; // 0x40
	private static readonly Guid[] _pipelineAttributeFilterKeys; // 0x48
	private static object _internalSyncObject; // 0x50
	[CompilerGenerated]
	private static RefreshEventHandler Refreshed; // 0x58

	// Properties
	public static Type ComObjectType { get; }
	public static Type InterfaceType { get; }

	// Methods

	// RVA: 0x12CF85C Offset: 0x12CB85C VA: 0x12CF85C
	public static Type get_ComObjectType() { }

	// RVA: 0x12CF8C8 Offset: 0x12CB8C8 VA: 0x12CF8C8
	public static Type get_InterfaceType() { }

	// RVA: 0x12CF934 Offset: 0x12CB934 VA: 0x12CF934
	public static void AddProvider(TypeDescriptionProvider provider, Type type) { }

	// RVA: 0x12D06AC Offset: 0x12CC6AC VA: 0x12D06AC
	private static void CheckDefaultProvider(Type type) { }

	// RVA: 0x12D0CC8 Offset: 0x12CCCC8 VA: 0x12D0CC8
	public static object CreateInstance(IServiceProvider provider, Type objectType, Type[] argTypes, object[] args) { }

	// RVA: 0x12D0FDC Offset: 0x12CCFDC VA: 0x12D0FDC
	private static ArrayList FilterMembers(IList members, Attribute[] attributes) { }

	// RVA: 0x12D13C4 Offset: 0x12CD3C4 VA: 0x12D13C4
	public static object GetAssociation(Type type, object primary) { }

	// RVA: 0x12CCEF8 Offset: 0x12C8EF8 VA: 0x12CCEF8
	public static AttributeCollection GetAttributes(Type componentType) { }

	// RVA: 0x12CD764 Offset: 0x12C9764 VA: 0x12CD764
	public static AttributeCollection GetAttributes(object component) { }

	// RVA: 0x12D1B40 Offset: 0x12CDB40 VA: 0x12D1B40
	public static AttributeCollection GetAttributes(object component, bool noCustomTypeDesc) { }

	// RVA: 0x12D4BD0 Offset: 0x12D0BD0 VA: 0x12D4BD0
	internal static IDictionary GetCache(object instance) { }

	// RVA: 0x12D53A8 Offset: 0x12D13A8 VA: 0x12D53A8
	public static TypeConverter GetConverter(Type type) { }

	// RVA: 0x12D1A5C Offset: 0x12CDA5C VA: 0x12D1A5C
	internal static ICustomTypeDescriptor GetDescriptor(Type type, string typeName) { }

	// RVA: 0x12D1F54 Offset: 0x12CDF54 VA: 0x12D1F54
	internal static ICustomTypeDescriptor GetDescriptor(object component, bool noCustomTypeDesc) { }

	// RVA: 0x12D215C Offset: 0x12CE15C VA: 0x12D215C
	internal static ICustomTypeDescriptor GetExtendedDescriptor(object component) { }

	// RVA: 0x12D54BC Offset: 0x12D14BC VA: 0x12D54BC
	private static string GetExtenderCollisionSuffix(MemberDescriptor member) { }

	// RVA: 0x12D57D4 Offset: 0x12D17D4 VA: 0x12D57D4
	private static Type GetNodeForBaseType(Type searchType) { }

	// RVA: 0x12D58A8 Offset: 0x12D18A8 VA: 0x12D58A8
	public static PropertyDescriptorCollection GetProperties(object component) { }

	// RVA: 0x12D5900 Offset: 0x12D1900 VA: 0x12D5900
	public static PropertyDescriptorCollection GetProperties(object component, bool noCustomTypeDesc) { }

	// RVA: 0x12D5FC4 Offset: 0x12D1FC4 VA: 0x12D5FC4
	public static PropertyDescriptorCollection GetProperties(object component, Attribute[] attributes) { }

	// RVA: 0x12D602C Offset: 0x12D202C VA: 0x12D602C
	public static PropertyDescriptorCollection GetProperties(object component, Attribute[] attributes, bool noCustomTypeDesc) { }

	// RVA: 0x12D596C Offset: 0x12D196C VA: 0x12D596C
	private static PropertyDescriptorCollection GetPropertiesImpl(object component, Attribute[] attributes, bool noCustomTypeDesc, bool noAttributes) { }

	// RVA: 0x12D66F4 Offset: 0x12D26F4 VA: 0x12D66F4
	internal static TypeDescriptionProvider GetProviderRecursive(Type type) { }

	// RVA: 0x12D674C Offset: 0x12D274C VA: 0x12D674C
	public static Type GetReflectionType(Type type) { }

	// RVA: 0x12D0F84 Offset: 0x12CCF84 VA: 0x12D0F84
	private static TypeDescriptor.TypeDescriptionNode NodeFor(Type type) { }

	// RVA: 0x12CFBA0 Offset: 0x12CBBA0 VA: 0x12CFBA0
	private static TypeDescriptor.TypeDescriptionNode NodeFor(Type type, bool createDelegator) { }

	// RVA: 0x12D5350 Offset: 0x12D1350 VA: 0x12D5350
	private static TypeDescriptor.TypeDescriptionNode NodeFor(object instance) { }

	// RVA: 0x12D6834 Offset: 0x12D2834 VA: 0x12D6834
	private static TypeDescriptor.TypeDescriptionNode NodeFor(object instance, bool createDelegator) { }

	// RVA: 0x12D609C Offset: 0x12D209C VA: 0x12D609C
	private static ICollection PipelineAttributeFilter(int pipelineType, ICollection members, Attribute[] filter, object instance, IDictionary cache) { }

	// RVA: 0x12D3358 Offset: 0x12CF358 VA: 0x12D3358
	private static ICollection PipelineFilter(int pipelineType, ICollection members, object instance, IDictionary cache) { }

	// RVA: 0x12D4C3C Offset: 0x12D0C3C VA: 0x12D4C3C
	private static ICollection PipelineInitialize(int pipelineType, ICollection members, IDictionary cache) { }

	// RVA: 0x12D2214 Offset: 0x12CE214 VA: 0x12D2214
	private static ICollection PipelineMerge(int pipelineType, ICollection primary, ICollection secondary, object instance, IDictionary cache) { }

	// RVA: 0x12D6BB8 Offset: 0x12D2BB8 VA: 0x12D6BB8
	private static void RaiseRefresh(Type type) { }

	// RVA: 0x12D00B4 Offset: 0x12CC0B4 VA: 0x12D00B4
	public static void Refresh(Type type) { }

	// RVA: 0x12D1334 Offset: 0x12CD334 VA: 0x12D1334
	private static bool ShouldHideMember(MemberDescriptor member, Attribute attribute) { }

	// RVA: 0x12D6C64 Offset: 0x12D2C64 VA: 0x12D6C64
	public static void SortDescriptorArray(IList infos) { }

	// RVA: 0x12D6D38 Offset: 0x12D2D38 VA: 0x12D6D38
	private static void .cctor() { }
}


// Namespace: System.ComponentModel
[Serializable]
public class Win32Exception : ExternalException, ISerializable // TypeDefIndex: 3547
{
	// Fields
	private readonly int nativeErrorCode; // 0x8C

	// Methods

	// RVA: 0x12D9698 Offset: 0x12D5698 VA: 0x12D9698
	public void .ctor() { }

	// RVA: 0x12D970C Offset: 0x12D570C VA: 0x12D970C
	public void .ctor(int error) { }

	// RVA: 0x12DA038 Offset: 0x12D6038 VA: 0x12DA038
	public void .ctor(int error, string message) { }

	// RVA: 0x12DA064 Offset: 0x12D6064 VA: 0x12DA064
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x12DA0EC Offset: 0x12D60EC VA: 0x12DA0EC Slot: 10
	public override void GetObjectData(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x12D9744 Offset: 0x12D5744 VA: 0x12D9744
	internal static string GetErrorMessage(int error) { }
}


// Namespace: 
private class WeakHashtable.WeakKeyComparer : IEqualityComparer // TypeDefIndex: 3548
{
	// Methods

	// RVA: 0x12DA23C Offset: 0x12D623C VA: 0x12DA23C Slot: 4
	private bool System.Collections.IEqualityComparer.Equals(object x, object y) { }

	// RVA: 0x12DA398 Offset: 0x12D6398 VA: 0x12DA398 Slot: 5
	private int System.Collections.IEqualityComparer.GetHashCode(object obj) { }

	// RVA: 0x12DA234 Offset: 0x12D6234 VA: 0x12DA234
	public void .ctor() { }
}


// Namespace: System.ComponentModel
internal sealed class WeakHashtable : Hashtable // TypeDefIndex: 3549
{
	// Fields
	private static IEqualityComparer _comparer; // 0x0

	// Methods

	// RVA: 0x12D7058 Offset: 0x12D3058 VA: 0x12D7058
	internal void .ctor() { }

	// RVA: 0x12DA1B4 Offset: 0x12D61B4 VA: 0x12DA1B4 Slot: 23
	public override void Clear() { }

	// RVA: 0x12DA1BC Offset: 0x12D61BC VA: 0x12DA1BC Slot: 37
	public override void Remove(object key) { }

	// RVA: 0x12DA1C4 Offset: 0x12D61C4 VA: 0x12DA1C4
	private static void .cctor() { }
}


// Namespace: System.ComponentModel.Design
[Serializable]
public class CheckoutException : ExternalException // TypeDefIndex: 3550
{
	// Fields
	public static readonly CheckoutException Canceled; // 0x0

	// Methods

	// RVA: 0x12DA3BC Offset: 0x12D63BC VA: 0x12DA3BC
	public void .ctor() { }

	// RVA: 0x12DA3C4 Offset: 0x12D63C4 VA: 0x12DA3C4
	public void .ctor(string message, int errorCode) { }

	// RVA: 0x12DA3CC Offset: 0x12D63CC VA: 0x12DA3CC
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x12DA3D4 Offset: 0x12D63D4 VA: 0x12DA3D4
	private static void .cctor() { }
}


// Namespace: System.ComponentModel.Design
public interface IComponentChangeService // TypeDefIndex: 3551
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnComponentChanged(object component, MemberDescriptor member, object oldValue, object newValue);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void OnComponentChanging(object component, MemberDescriptor member);
}


// Namespace: System.ComponentModel.Design
public interface IDesigner : IDisposable // TypeDefIndex: 3552
{}


// Namespace: System.ComponentModel.Design
public interface IDesignerHost : IServiceProvider // TypeDefIndex: 3553
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract IDesigner GetDesigner(IComponent component);
}


// Namespace: System.ComponentModel.Design
public interface IDictionaryService // TypeDefIndex: 3554
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract object GetValue(object key);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void SetValue(object key, object value);
}


// Namespace: System.ComponentModel.Design
public interface IExtenderListService // TypeDefIndex: 3555
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract IExtenderProvider[] GetExtenderProviders();
}


// Namespace: System.ComponentModel.Design
public interface IReferenceService // TypeDefIndex: 3556
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract object GetReference(string name);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract string GetName(object reference);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract object[] GetReferences(Type baseType);
}


// Namespace: System.ComponentModel.Design
public interface ITypeDescriptorFilterService // TypeDefIndex: 3557
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool FilterAttributes(IComponent component, IDictionary attributes);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract bool FilterEvents(IComponent component, IDictionary events);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract bool FilterProperties(IComponent component, IDictionary properties);
}


// Namespace: 
private sealed class DesignerOptionService.DesignerOptionCollection.WrappedPropertyDescriptor : PropertyDescriptor // TypeDefIndex: 3558
{
	// Fields
	private object target; // 0x88
	private PropertyDescriptor property; // 0x90

	// Properties
	public override AttributeCollection Attributes { get; }
	public override Type ComponentType { get; }
	public override bool IsReadOnly { get; }
	public override Type PropertyType { get; }

	// Methods

	// RVA: 0x12DAC34 Offset: 0x12D6C34 VA: 0x12DAC34
	internal void .ctor(PropertyDescriptor property, object target) { }

	// RVA: 0x12DAD00 Offset: 0x12D6D00 VA: 0x12DAD00 Slot: 6
	public override AttributeCollection get_Attributes() { }

	// RVA: 0x12DAD20 Offset: 0x12D6D20 VA: 0x12DAD20 Slot: 13
	public override Type get_ComponentType() { }

	// RVA: 0x12DAD44 Offset: 0x12D6D44 VA: 0x12DAD44 Slot: 15
	public override bool get_IsReadOnly() { }

	// RVA: 0x12DAD68 Offset: 0x12D6D68 VA: 0x12DAD68 Slot: 16
	public override Type get_PropertyType() { }

	// RVA: 0x12DAD8C Offset: 0x12D6D8C VA: 0x12DAD8C Slot: 17
	public override bool CanResetValue(object component) { }

	// RVA: 0x12DADB8 Offset: 0x12D6DB8 VA: 0x12DADB8 Slot: 18
	public override object GetValue(object component) { }

	// RVA: 0x12DADE4 Offset: 0x12D6DE4 VA: 0x12DADE4 Slot: 20
	public override void ResetValue(object component) { }

	// RVA: 0x12DAE10 Offset: 0x12D6E10 VA: 0x12DAE10 Slot: 21
	public override void SetValue(object component, object value) { }

	// RVA: 0x12DAE3C Offset: 0x12D6E3C VA: 0x12DAE3C Slot: 22
	public override bool ShouldSerializeValue(object component) { }
}


// Namespace: 
[TypeConverter(typeof(DesignerOptionService.DesignerOptionConverter))]
[DefaultMember("Item")]
public sealed class DesignerOptionService.DesignerOptionCollection : ICollection // TypeDefIndex: 3559
{
	// Fields
	private string _name; // 0x10
	private object _value; // 0x18
	private ArrayList _children; // 0x20
	private PropertyDescriptorCollection _properties; // 0x28

	// Properties
	public int Count { get; }
	public PropertyDescriptorCollection Properties { get; }
	private bool System.Collections.ICollection.IsSynchronized { get; }
	private object System.Collections.ICollection.SyncRoot { get; }

	// Methods

	// RVA: 0x12DA450 Offset: 0x12D6450 VA: 0x12DA450 Slot: 5
	public int get_Count() { }

	// RVA: 0x12DA4E0 Offset: 0x12D64E0 VA: 0x12DA4E0
	public PropertyDescriptorCollection get_Properties() { }

	// RVA: 0x12DAC84 Offset: 0x12D6C84 VA: 0x12DAC84 Slot: 4
	public void CopyTo(Array array, int index) { }

	// RVA: 0x12DA47C Offset: 0x12D647C VA: 0x12DA47C
	private void EnsurePopulated() { }

	// RVA: 0x12DACC8 Offset: 0x12D6CC8 VA: 0x12DACC8 Slot: 8
	public IEnumerator GetEnumerator() { }

	// RVA: 0x12DACF4 Offset: 0x12D6CF4 VA: 0x12DACF4 Slot: 7
	private bool System.Collections.ICollection.get_IsSynchronized() { }

	// RVA: 0x12DACFC Offset: 0x12D6CFC VA: 0x12DACFC Slot: 6
	private object System.Collections.ICollection.get_SyncRoot() { }
}


// Namespace: 
private class DesignerOptionService.DesignerOptionConverter.OptionPropertyDescriptor : PropertyDescriptor // TypeDefIndex: 3560
{
	// Fields
	private DesignerOptionService.DesignerOptionCollection _option; // 0x88

	// Properties
	public override Type ComponentType { get; }
	public override bool IsReadOnly { get; }
	public override Type PropertyType { get; }

	// Methods

	// RVA: 0x12DB458 Offset: 0x12D7458 VA: 0x12DB458
	internal void .ctor(DesignerOptionService.DesignerOptionCollection option) { }

	// RVA: 0x12DB57C Offset: 0x12D757C VA: 0x12DB57C Slot: 13
	public override Type get_ComponentType() { }

	// RVA: 0x12DB598 Offset: 0x12D7598 VA: 0x12DB598 Slot: 15
	public override bool get_IsReadOnly() { }

	// RVA: 0x12DB5A0 Offset: 0x12D75A0 VA: 0x12DB5A0 Slot: 16
	public override Type get_PropertyType() { }

	// RVA: 0x12DB5BC Offset: 0x12D75BC VA: 0x12DB5BC Slot: 17
	public override bool CanResetValue(object component) { }

	// RVA: 0x12DB5C4 Offset: 0x12D75C4 VA: 0x12DB5C4 Slot: 18
	public override object GetValue(object component) { }

	// RVA: 0x12DB5CC Offset: 0x12D75CC VA: 0x12DB5CC Slot: 20
	public override void ResetValue(object component) { }

	// RVA: 0x12DB5D0 Offset: 0x12D75D0 VA: 0x12DB5D0 Slot: 21
	public override void SetValue(object component, object value) { }

	// RVA: 0x12DB5D4 Offset: 0x12D75D4 VA: 0x12DB5D4 Slot: 22
	public override bool ShouldSerializeValue(object component) { }
}


// Namespace: 
internal sealed class DesignerOptionService.DesignerOptionConverter : TypeConverter // TypeDefIndex: 3561
{
	// Methods

	// RVA: 0x12DAE68 Offset: 0x12D6E68 VA: 0x12DAE68 Slot: 11
	public override bool GetPropertiesSupported(ITypeDescriptorContext cxt) { }

	// RVA: 0x12DAE70 Offset: 0x12D6E70 VA: 0x12DAE70 Slot: 10
	public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext cxt, object value, Attribute[] attributes) { }

	// RVA: 0x12DB490 Offset: 0x12D7490 VA: 0x12DB490 Slot: 7
	public override object ConvertTo(ITypeDescriptorContext cxt, CultureInfo culture, object value, Type destinationType) { }

	// RVA: 0x12DB574 Offset: 0x12D7574 VA: 0x12DB574
	public void .ctor() { }
}


// Namespace: System.ComponentModel.Design
public abstract class DesignerOptionService // TypeDefIndex: 3562
{}


// Namespace: System.ComponentModel.Design.Serialization
public sealed class InstanceDescriptor // TypeDefIndex: 3563
{
	// Fields
	[CompilerGenerated]
	private readonly ICollection <Arguments>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly bool <IsComplete>k__BackingField; // 0x18
	[CompilerGenerated]
	private readonly MemberInfo <MemberInfo>k__BackingField; // 0x20

	// Methods

	// RVA: 0x12DB5DC Offset: 0x12D75DC VA: 0x12DB5DC
	public void .ctor(MemberInfo member, ICollection arguments) { }

	// RVA: 0x12DB5E4 Offset: 0x12D75E4 VA: 0x12DB5E4
	public void .ctor(MemberInfo member, ICollection arguments, bool isComplete) { }

	// RVA: 0x12CDEEC Offset: 0x12C9EEC VA: 0x12CDEEC
	public object Invoke() { }
}


// Namespace: System.Collections
[Extension]
internal static class HashtableExtensions // TypeDefIndex: 3564
{
	// Methods

	[Extension]
	// RVA: -1 Offset: -1
	public static bool TryGetValue<T>(Hashtable table, object key, out T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8CCB0 Offset: 0xB88CB0 VA: 0xB8CCB0
	|-HashtableExtensions.TryGetValue<__Il2CppFullySharedGenericType>
	*/
}


// Namespace: System.Collections.Specialized
[DefaultMember("Item")]
public struct BitVector32 // TypeDefIndex: 3565
{
	// Fields
	private uint _data; // 0x0

	// Properties
	public bool Item { get; set; }

	// Methods

	// RVA: 0x12DBAB8 Offset: 0x12D7AB8 VA: 0x12DBAB8
	public bool get_Item(int bit) { }

	// RVA: 0x12DBAC8 Offset: 0x12D7AC8 VA: 0x12DBAC8
	public void set_Item(int bit, bool value) { }

	// RVA: 0x12DBAE4 Offset: 0x12D7AE4 VA: 0x12DBAE4
	public static int CreateMask() { }

	// RVA: 0x12DBAEC Offset: 0x12D7AEC VA: 0x12DBAEC
	public static int CreateMask(int previous) { }

	// RVA: 0x12DBB58 Offset: 0x12D7B58 VA: 0x12DBB58 Slot: 0
	public override bool Equals(object o) { }

	// RVA: 0x12DBBD0 Offset: 0x12D7BD0 VA: 0x12DBBD0 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x12DBC34 Offset: 0x12D7C34 VA: 0x12DBC34
	public static string ToString(BitVector32 value) { }

	// RVA: 0x12DBD04 Offset: 0x12D7D04 VA: 0x12DBD04 Slot: 3
	public override string ToString() { }
}


// Namespace: System.Collections.Specialized
[DefaultMember("Item")]
public interface IOrderedDictionary : IDictionary, ICollection, IEnumerable // TypeDefIndex: 3566
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract IDictionaryEnumerator GetEnumerator();
}


// Namespace: 
private class ListDictionary.NodeEnumerator : IDictionaryEnumerator, IEnumerator // TypeDefIndex: 3567
{
	// Fields
	private ListDictionary _list; // 0x10
	private ListDictionary.DictionaryNode _current; // 0x18
	private int _version; // 0x20
	private bool _start; // 0x24

	// Properties
	public object Current { get; }
	public DictionaryEntry Entry { get; }
	public object Key { get; }
	public object Value { get; }

	// Methods

	// RVA: 0x12DC76C Offset: 0x12D876C VA: 0x12DC76C
	public void .ctor(ListDictionary list) { }

	// RVA: 0x12DC99C Offset: 0x12D899C VA: 0x12DC99C Slot: 8
	public object get_Current() { }

	// RVA: 0x12DCA00 Offset: 0x12D8A00 VA: 0x12DCA00 Slot: 6
	public DictionaryEntry get_Entry() { }

	// RVA: 0x12DCA7C Offset: 0x12D8A7C VA: 0x12DCA7C Slot: 4
	public object get_Key() { }

	// RVA: 0x12DCADC Offset: 0x12D8ADC VA: 0x12DCADC Slot: 5
	public object get_Value() { }

	// RVA: 0x12DCB3C Offset: 0x12D8B3C VA: 0x12DCB3C Slot: 7
	public bool MoveNext() { }

	// RVA: 0x12DCBD8 Offset: 0x12D8BD8 VA: 0x12DCBD8 Slot: 9
	public void Reset() { }
}


// Namespace: 
private class ListDictionary.NodeKeyValueCollection.NodeKeyValueEnumerator : IEnumerator // TypeDefIndex: 3568
{
	// Fields
	private ListDictionary _list; // 0x10
	private ListDictionary.DictionaryNode _current; // 0x18
	private int _version; // 0x20
	private bool _isKeys; // 0x24
	private bool _start; // 0x25

	// Properties
	public object Current { get; }

	// Methods

	// RVA: 0x12DCE54 Offset: 0x12D8E54 VA: 0x12DCE54
	public void .ctor(ListDictionary list, bool isKeys) { }

	// RVA: 0x12DCEA0 Offset: 0x12D8EA0 VA: 0x12DCEA0 Slot: 5
	public object get_Current() { }

	// RVA: 0x12DCF14 Offset: 0x12D8F14 VA: 0x12DCF14 Slot: 4
	public bool MoveNext() { }

	// RVA: 0x12DCFB0 Offset: 0x12D8FB0 VA: 0x12DCFB0 Slot: 6
	public void Reset() { }
}


// Namespace: 
private class ListDictionary.NodeKeyValueCollection : ICollection, IEnumerable // TypeDefIndex: 3569
{
	// Fields
	private ListDictionary _list; // 0x10
	private bool _isKeys; // 0x18

	// Properties
	private int System.Collections.ICollection.Count { get; }
	private bool System.Collections.ICollection.IsSynchronized { get; }
	private object System.Collections.ICollection.SyncRoot { get; }

	// Methods

	// RVA: 0x12DC0CC Offset: 0x12D80CC VA: 0x12DC0CC
	public void .ctor(ListDictionary list, bool isKeys) { }

	// RVA: 0x12DCC54 Offset: 0x12D8C54 VA: 0x12DCC54 Slot: 4
	private void System.Collections.ICollection.CopyTo(Array array, int index) { }

	// RVA: 0x12DCD98 Offset: 0x12D8D98 VA: 0x12DCD98 Slot: 5
	private int System.Collections.ICollection.get_Count() { }

	// RVA: 0x12DCDD0 Offset: 0x12D8DD0 VA: 0x12DCDD0 Slot: 7
	private bool System.Collections.ICollection.get_IsSynchronized() { }

	// RVA: 0x12DCDD8 Offset: 0x12D8DD8 VA: 0x12DCDD8 Slot: 6
	private object System.Collections.ICollection.get_SyncRoot() { }

	// RVA: 0x12DCDF0 Offset: 0x12D8DF0 VA: 0x12DCDF0 Slot: 8
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }
}


// Namespace: 
[Serializable]
public class ListDictionary.DictionaryNode // TypeDefIndex: 3570
{
	// Fields
	public object key; // 0x10
	public object value; // 0x18
	public ListDictionary.DictionaryNode next; // 0x20

	// Methods

	// RVA: 0x12DC058 Offset: 0x12D8058 VA: 0x12DC058
	public void .ctor() { }
}


// Namespace: System.Collections.Specialized
[DefaultMember("Item")]
[Serializable]
public class ListDictionary : IDictionary, ICollection, IEnumerable // TypeDefIndex: 3571
{
	// Fields
	private ListDictionary.DictionaryNode head; // 0x10
	private int version; // 0x18
	private int count; // 0x1C
	private readonly IComparer comparer; // 0x20
	private object _syncRoot; // 0x28

	// Properties
	public object Item { get; set; }
	public int Count { get; }
	public ICollection Keys { get; }
	public bool IsReadOnly { get; }
	public bool IsSynchronized { get; }
	public object SyncRoot { get; }
	public ICollection Values { get; }

	// Methods

	// RVA: 0x12DBD0C Offset: 0x12D7D0C VA: 0x12DBD0C
	public void .ctor() { }

	// RVA: 0x12DBD14 Offset: 0x12D7D14 VA: 0x12DBD14
	public void .ctor(IComparer comparer) { }

	// RVA: 0x12DBD3C Offset: 0x12D7D3C VA: 0x12DBD3C Slot: 4
	public object get_Item(object key) { }

	// RVA: 0x12DBE98 Offset: 0x12D7E98 VA: 0x12DBE98 Slot: 5
	public void set_Item(object key, object value) { }

	// RVA: 0x12DC060 Offset: 0x12D8060 VA: 0x12DC060 Slot: 15
	public int get_Count() { }

	// RVA: 0x12DC068 Offset: 0x12D8068 VA: 0x12DC068 Slot: 6
	public ICollection get_Keys() { }

	// RVA: 0x12DC0FC Offset: 0x12D80FC VA: 0x12DC0FC Slot: 11
	public bool get_IsReadOnly() { }

	// RVA: 0x12DC104 Offset: 0x12D8104 VA: 0x12DC104 Slot: 17
	public bool get_IsSynchronized() { }

	// RVA: 0x12DC10C Offset: 0x12D810C VA: 0x12DC10C Slot: 16
	public object get_SyncRoot() { }

	// RVA: 0x12DC180 Offset: 0x12D8180 VA: 0x12DC180 Slot: 7
	public ICollection get_Values() { }

	// RVA: 0x12DC1E0 Offset: 0x12D81E0 VA: 0x12DC1E0 Slot: 9
	public void Add(object key, object value) { }

	// RVA: 0x12DC3EC Offset: 0x12D83EC VA: 0x12DC3EC Slot: 10
	public void Clear() { }

	// RVA: 0x12DC400 Offset: 0x12D8400 VA: 0x12DC400 Slot: 8
	public bool Contains(object key) { }

	// RVA: 0x12DC550 Offset: 0x12D8550 VA: 0x12DC550 Slot: 14
	public void CopyTo(Array array, int index) { }

	// RVA: 0x12DC714 Offset: 0x12D8714 VA: 0x12DC714 Slot: 12
	public IDictionaryEnumerator GetEnumerator() { }

	// RVA: 0x12DC7B0 Offset: 0x12D87B0 VA: 0x12DC7B0 Slot: 18
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	// RVA: 0x12DC808 Offset: 0x12D8808 VA: 0x12DC808 Slot: 13
	public void Remove(object key) { }
}


// Namespace: System.Collections.Specialized
[DefaultMember("Item")]
[Serializable]
public class NameValueCollection : NameObjectCollectionBase // TypeDefIndex: 3572
{
	// Fields
	private string[] _all; // 0x50
	private string[] _allKeys; // 0x58

	// Properties
	public string Item { get; set; }
	public string Item { get; }
	public virtual string[] AllKeys { get; }

	// Methods

	// RVA: 0x12DD02C Offset: 0x12D902C VA: 0x12DD02C
	public void .ctor() { }

	// RVA: 0x12DD0E0 Offset: 0x12D90E0 VA: 0x12DD0E0
	public void .ctor(int capacity, IEqualityComparer equalityComparer) { }

	// RVA: 0x12DD180 Offset: 0x12D9180 VA: 0x12DD180
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x12DD214 Offset: 0x12D9214 VA: 0x12DD214
	protected void InvalidateCachedArrays() { }

	// RVA: 0x12DD21C Offset: 0x12D921C VA: 0x12DD21C
	private static string GetAsOneString(ArrayList list) { }

	// RVA: 0x12DD3CC Offset: 0x12D93CC VA: 0x12DD3CC
	private static string[] GetAsStringArray(ArrayList list) { }

	// RVA: 0x12DD46C Offset: 0x12D946C VA: 0x12DD46C Slot: 15
	public virtual void Add(string name, string value) { }

	// RVA: 0x12DD744 Offset: 0x12D9744 VA: 0x12DD744 Slot: 16
	public virtual string Get(string name) { }

	// RVA: 0x12DD7D0 Offset: 0x12D97D0 VA: 0x12DD7D0 Slot: 17
	public virtual string[] GetValues(string name) { }

	// RVA: 0x12DD85C Offset: 0x12D985C VA: 0x12DD85C Slot: 18
	public virtual void Set(string name, string value) { }

	// RVA: 0x12DD9EC Offset: 0x12D99EC VA: 0x12DD9EC Slot: 19
	public virtual void Remove(string name) { }

	// RVA: 0x12DDBF8 Offset: 0x12D9BF8 VA: 0x12DDBF8
	public string get_Item(string name) { }

	// RVA: 0x12DDC08 Offset: 0x12D9C08 VA: 0x12DDC08
	public void set_Item(string name, string value) { }

	// RVA: 0x12DDC18 Offset: 0x12D9C18 VA: 0x12DDC18 Slot: 20
	public virtual string Get(int index) { }

	// RVA: 0x12DDD38 Offset: 0x12D9D38 VA: 0x12DDD38 Slot: 21
	public virtual string GetKey(int index) { }

	// RVA: 0x12DDDD8 Offset: 0x12D9DD8 VA: 0x12DDDD8
	public string get_Item(int index) { }

	// RVA: 0x12DDDE8 Offset: 0x12D9DE8 VA: 0x12DDDE8 Slot: 22
	public virtual string[] get_AllKeys() { }

	// RVA: 0x12DDED0 Offset: 0x12D9ED0 VA: 0x12DDED0
	internal void .ctor(DBNull dummy) { }
}


// Namespace: 
private class OrderedDictionary.OrderedDictionaryEnumerator : IDictionaryEnumerator, IEnumerator // TypeDefIndex: 3573
{
	// Fields
	private int _objectReturnType; // 0x10
	private IEnumerator _arrayEnumerator; // 0x18

	// Properties
	public object Current { get; }
	public DictionaryEntry Entry { get; }
	public object Key { get; }
	public object Value { get; }

	// Methods

	// RVA: 0x12DE598 Offset: 0x12DA598 VA: 0x12DE598
	internal void .ctor(ArrayList array, int objectReturnType) { }

	// RVA: 0x12DEBE4 Offset: 0x12DABE4 VA: 0x12DEBE4 Slot: 8
	public object get_Current() { }

	// RVA: 0x12DEDA8 Offset: 0x12DADA8 VA: 0x12DEDA8 Slot: 6
	public DictionaryEntry get_Entry() { }

	// RVA: 0x12DEF3C Offset: 0x12DAF3C VA: 0x12DEF3C Slot: 4
	public object get_Key() { }

	// RVA: 0x12DF020 Offset: 0x12DB020 VA: 0x12DF020 Slot: 5
	public object get_Value() { }

	// RVA: 0x12DF104 Offset: 0x12DB104 VA: 0x12DF104 Slot: 7
	public bool MoveNext() { }

	// RVA: 0x12DF1A4 Offset: 0x12DB1A4 VA: 0x12DF1A4 Slot: 9
	public void Reset() { }
}


// Namespace: 
private class OrderedDictionary.OrderedDictionaryKeyValueCollection : ICollection, IEnumerable // TypeDefIndex: 3574
{
	// Fields
	private ArrayList _objects; // 0x10
	private bool _isKeys; // 0x18

	// Properties
	private int System.Collections.ICollection.Count { get; }
	private bool System.Collections.ICollection.IsSynchronized { get; }
	private object System.Collections.ICollection.SyncRoot { get; }

	// Methods

	// RVA: 0x12DE098 Offset: 0x12DA098 VA: 0x12DE098
	public void .ctor(ArrayList array, bool isKeys) { }

	// RVA: 0x12DF248 Offset: 0x12DB248 VA: 0x12DF248 Slot: 4
	private void System.Collections.ICollection.CopyTo(Array array, int index) { }

	// RVA: 0x12DF63C Offset: 0x12DB63C VA: 0x12DF63C Slot: 5
	private int System.Collections.ICollection.get_Count() { }

	// RVA: 0x12DF660 Offset: 0x12DB660 VA: 0x12DF660 Slot: 7
	private bool System.Collections.ICollection.get_IsSynchronized() { }

	// RVA: 0x12DF668 Offset: 0x12DB668 VA: 0x12DF668 Slot: 6
	private object System.Collections.ICollection.get_SyncRoot() { }

	// RVA: 0x12DF68C Offset: 0x12DB68C VA: 0x12DF68C Slot: 8
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }
}


// Namespace: System.Collections.Specialized
[DefaultMember("Item")]
[Serializable]
public class OrderedDictionary : IOrderedDictionary, IDictionary, ICollection, IEnumerable, ISerializable, IDeserializationCallback // TypeDefIndex: 3575
{
	// Fields
	private ArrayList _objectsArray; // 0x10
	private Hashtable _objectsTable; // 0x18
	private int _initialCapacity; // 0x20
	private IEqualityComparer _comparer; // 0x28
	private bool _readOnly; // 0x30
	private object _syncRoot; // 0x38
	private SerializationInfo _siInfo; // 0x40

	// Properties
	public int Count { get; }
	public bool IsReadOnly { get; }
	private bool System.Collections.ICollection.IsSynchronized { get; }
	public ICollection Keys { get; }
	private ArrayList objectsArray { get; }
	private Hashtable objectsTable { get; }
	private object System.Collections.ICollection.SyncRoot { get; }
	public object Item { get; set; }
	public ICollection Values { get; }

	// Methods

	// RVA: 0x12DDF30 Offset: 0x12D9F30 VA: 0x12DDF30
	public void .ctor() { }

	// RVA: 0x12CD050 Offset: 0x12C9050 VA: 0x12CD050
	public void .ctor(int capacity) { }

	// RVA: 0x12DDF50 Offset: 0x12D9F50 VA: 0x12DDF50
	public void .ctor(int capacity, IEqualityComparer comparer) { }

	// RVA: 0x12DDF80 Offset: 0x12D9F80 VA: 0x12DDF80
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x12CD224 Offset: 0x12C9224 VA: 0x12CD224 Slot: 16
	public int get_Count() { }

	// RVA: 0x12DE014 Offset: 0x12DA014 VA: 0x12DE014 Slot: 12
	public bool get_IsReadOnly() { }

	// RVA: 0x12DE01C Offset: 0x12DA01C VA: 0x12DE01C Slot: 18
	private bool System.Collections.ICollection.get_IsSynchronized() { }

	// RVA: 0x12DE024 Offset: 0x12DA024 VA: 0x12DE024 Slot: 7
	public ICollection get_Keys() { }

	// RVA: 0x12DDFA8 Offset: 0x12D9FA8 VA: 0x12DDFA8
	private ArrayList get_objectsArray() { }

	// RVA: 0x12DE0C8 Offset: 0x12DA0C8 VA: 0x12DE0C8
	private Hashtable get_objectsTable() { }

	// RVA: 0x12DE144 Offset: 0x12DA144 VA: 0x12DE144 Slot: 17
	private object System.Collections.ICollection.get_SyncRoot() { }

	// RVA: 0x12D6A60 Offset: 0x12D2A60 VA: 0x12D6A60 Slot: 5
	public object get_Item(object key) { }

	// RVA: 0x12CD0A8 Offset: 0x12C90A8 VA: 0x12CD0A8 Slot: 6
	public void set_Item(object key, object value) { }

	// RVA: 0x12CD248 Offset: 0x12C9248 VA: 0x12CD248 Slot: 8
	public ICollection get_Values() { }

	// RVA: 0x12DE338 Offset: 0x12DA338 VA: 0x12DE338 Slot: 10
	public void Add(object key, object value) { }

	// RVA: 0x12DE45C Offset: 0x12DA45C VA: 0x12DE45C Slot: 11
	public void Clear() { }

	// RVA: 0x12CD07C Offset: 0x12C907C VA: 0x12CD07C Slot: 9
	public bool Contains(object key) { }

	// RVA: 0x12DE4F0 Offset: 0x12DA4F0 VA: 0x12DE4F0 Slot: 15
	public void CopyTo(Array array, int index) { }

	// RVA: 0x12DE1B8 Offset: 0x12DA1B8 VA: 0x12DE1B8
	private int IndexOfKey(object key) { }

	// RVA: 0x12D6A8C Offset: 0x12D2A8C VA: 0x12D6A8C Slot: 14
	public void Remove(object key) { }

	// RVA: 0x12DE52C Offset: 0x12DA52C VA: 0x12DE52C Slot: 22
	public virtual IDictionaryEnumerator GetEnumerator() { }

	// RVA: 0x12DE5E4 Offset: 0x12DA5E4 VA: 0x12DE5E4 Slot: 19
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	// RVA: 0x12DE650 Offset: 0x12DA650 VA: 0x12DE650 Slot: 23
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x12DE824 Offset: 0x12DA824 VA: 0x12DE824 Slot: 21
	private void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(object sender) { }

	// RVA: 0x12DE834 Offset: 0x12DA834 VA: 0x12DE834 Slot: 24
	protected virtual void OnDeserialization(object sender) { }
}


// Namespace: System.Collections.Specialized
[DefaultMember("Item")]
[Serializable]
public class StringCollection : IList, ICollection, IEnumerable // TypeDefIndex: 3576
{
	// Fields
	private readonly ArrayList data; // 0x10

	// Properties
	public string Item { get; set; }
	public int Count { get; }
	private bool System.Collections.IList.IsReadOnly { get; }
	private bool System.Collections.IList.IsFixedSize { get; }
	public bool IsSynchronized { get; }
	public object SyncRoot { get; }
	private object System.Collections.IList.Item { get; set; }

	// Methods

	// RVA: 0x12DF6FC Offset: 0x12DB6FC VA: 0x12DF6FC
	public string get_Item(int index) { }

	// RVA: 0x12DF778 Offset: 0x12DB778 VA: 0x12DF778
	public void set_Item(int index, string value) { }

	// RVA: 0x12DF79C Offset: 0x12DB79C VA: 0x12DF79C Slot: 16
	public int get_Count() { }

	// RVA: 0x12DF7C0 Offset: 0x12DB7C0 VA: 0x12DF7C0 Slot: 9
	private bool System.Collections.IList.get_IsReadOnly() { }

	// RVA: 0x12DF7C8 Offset: 0x12DB7C8 VA: 0x12DF7C8 Slot: 10
	private bool System.Collections.IList.get_IsFixedSize() { }

	// RVA: 0x12DF7D0 Offset: 0x12DB7D0 VA: 0x12DF7D0
	public int Add(string value) { }

	// RVA: 0x12DF7F4 Offset: 0x12DB7F4 VA: 0x12DF7F4 Slot: 8
	public void Clear() { }

	// RVA: 0x12DF818 Offset: 0x12DB818 VA: 0x12DF818
	public bool Contains(string value) { }

	// RVA: 0x12DF83C Offset: 0x12DB83C VA: 0x12DF83C
	public void CopyTo(string[] array, int index) { }

	// RVA: 0x12DF860 Offset: 0x12DB860 VA: 0x12DF860
	public int IndexOf(string value) { }

	// RVA: 0x12DF884 Offset: 0x12DB884 VA: 0x12DF884
	public void Insert(int index, string value) { }

	// RVA: 0x12DF8A8 Offset: 0x12DB8A8 VA: 0x12DF8A8 Slot: 18
	public bool get_IsSynchronized() { }

	// RVA: 0x12DF8B0 Offset: 0x12DB8B0 VA: 0x12DF8B0
	public void Remove(string value) { }

	// RVA: 0x12DF8D4 Offset: 0x12DB8D4 VA: 0x12DF8D4 Slot: 14
	public void RemoveAt(int index) { }

	// RVA: 0x12DF8F8 Offset: 0x12DB8F8 VA: 0x12DF8F8 Slot: 17
	public object get_SyncRoot() { }

	// RVA: 0x12DF91C Offset: 0x12DB91C VA: 0x12DF91C Slot: 4
	private object System.Collections.IList.get_Item(int index) { }

	// RVA: 0x12DF920 Offset: 0x12DB920 VA: 0x12DF920 Slot: 5
	private void System.Collections.IList.set_Item(int index, object value) { }

	// RVA: 0x12DF9AC Offset: 0x12DB9AC VA: 0x12DF9AC Slot: 6
	private int System.Collections.IList.Add(object value) { }

	// RVA: 0x12DFA28 Offset: 0x12DBA28 VA: 0x12DFA28 Slot: 7
	private bool System.Collections.IList.Contains(object value) { }

	// RVA: 0x12DFAA4 Offset: 0x12DBAA4 VA: 0x12DFAA4 Slot: 11
	private int System.Collections.IList.IndexOf(object value) { }

	// RVA: 0x12DFB20 Offset: 0x12DBB20 VA: 0x12DFB20 Slot: 12
	private void System.Collections.IList.Insert(int index, object value) { }

	// RVA: 0x12DFBAC Offset: 0x12DBBAC VA: 0x12DFBAC Slot: 13
	private void System.Collections.IList.Remove(object value) { }

	// RVA: 0x12DFC28 Offset: 0x12DBC28 VA: 0x12DFC28 Slot: 15
	private void System.Collections.ICollection.CopyTo(Array array, int index) { }

	// RVA: 0x12DFC4C Offset: 0x12DBC4C VA: 0x12DFC4C Slot: 19
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	// RVA: 0x12DFC70 Offset: 0x12DBC70 VA: 0x12DFC70
	public void .ctor() { }
}


// Namespace: System.Collections.Specialized
[DefaultMember("Item")]
[Serializable]
public class StringDictionary : IEnumerable // TypeDefIndex: 3577
{
	// Fields
	internal Hashtable contents; // 0x10

	// Properties
	public virtual string Item { get; }

	// Methods

	// RVA: 0x12DFCD0 Offset: 0x12DBCD0 VA: 0x12DFCD0
	public void .ctor() { }

	// RVA: 0x12DFD30 Offset: 0x12DBD30 VA: 0x12DFD30 Slot: 5
	public virtual string get_Item(string key) { }

	// RVA: 0x12DFE08 Offset: 0x12DBE08 VA: 0x12DFE08 Slot: 6
	public virtual IEnumerator GetEnumerator() { }
}


// Namespace: System.Collections.Specialized
public enum NotifyCollectionChangedAction // TypeDefIndex: 3578
{
	// Fields
	public int value__; // 0x0
	public const NotifyCollectionChangedAction Add = 0;
	public const NotifyCollectionChangedAction Remove = 1;
	public const NotifyCollectionChangedAction Replace = 2;
	public const NotifyCollectionChangedAction Move = 3;
	public const NotifyCollectionChangedAction Reset = 4;
}


// Namespace: System.Collections.Specialized
public class NotifyCollectionChangedEventArgs : EventArgs // TypeDefIndex: 3579
{
	// Fields
	private NotifyCollectionChangedAction _action; // 0x10
	private IList _newItems; // 0x18
	private IList _oldItems; // 0x20
	private int _newStartingIndex; // 0x28
	private int _oldStartingIndex; // 0x2C

	// Methods

	// RVA: 0x12DFE2C Offset: 0x12DBE2C VA: 0x12DFE2C
	public void .ctor(NotifyCollectionChangedAction action) { }

	// RVA: 0x12DFFE4 Offset: 0x12DBFE4 VA: 0x12DFFE4
	public void .ctor(NotifyCollectionChangedAction action, object changedItem, int index) { }

	// RVA: 0x12E01EC Offset: 0x12DC1EC VA: 0x12E01EC
	public void .ctor(NotifyCollectionChangedAction action, object newItem, object oldItem, int index) { }

	// RVA: 0x12E0408 Offset: 0x12DC408 VA: 0x12E0408
	public void .ctor(NotifyCollectionChangedAction action, IList newItems, IList oldItems, int startingIndex) { }

	// RVA: 0x12E01D4 Offset: 0x12DC1D4 VA: 0x12E01D4
	private void InitializeAddOrRemove(NotifyCollectionChangedAction action, IList changedItems, int startingIndex) { }

	// RVA: 0x12DFF60 Offset: 0x12DBF60 VA: 0x12DFF60
	private void InitializeAdd(NotifyCollectionChangedAction action, IList newItems, int newStartingIndex) { }

	// RVA: 0x12E05B8 Offset: 0x12DC5B8 VA: 0x12E05B8
	private void InitializeRemove(NotifyCollectionChangedAction action, IList oldItems, int oldStartingIndex) { }

	// RVA: 0x12E03C4 Offset: 0x12DC3C4 VA: 0x12E03C4
	private void InitializeMoveOrReplace(NotifyCollectionChangedAction action, IList newItems, IList oldItems, int startingIndex, int oldStartingIndex) { }
}


// Namespace: System.Collections.Specialized
public sealed class NotifyCollectionChangedEventHandler : MulticastDelegate // TypeDefIndex: 3580
{
	// Methods

	// RVA: 0x12E0664 Offset: 0x12DC664 VA: 0x12E0664
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x12E0768 Offset: 0x12DC768 VA: 0x12E0768 Slot: 12
	public virtual void Invoke(object sender, NotifyCollectionChangedEventArgs e) { }
}


// Namespace: System.Collections.Specialized
[DefaultMember("Item")]
internal sealed class ReadOnlyList : IList, ICollection, IEnumerable // TypeDefIndex: 3581
{
	// Fields
	private readonly IList _list; // 0x10

	// Properties
	public int Count { get; }
	public bool IsReadOnly { get; }
	public bool IsFixedSize { get; }
	public bool IsSynchronized { get; }
	public object Item { get; set; }
	public object SyncRoot { get; }

	// Methods

	// RVA: 0x12E063C Offset: 0x12DC63C VA: 0x12E063C
	internal void .ctor(IList list) { }

	// RVA: 0x12E077C Offset: 0x12DC77C VA: 0x12E077C Slot: 16
	public int get_Count() { }

	// RVA: 0x12E0820 Offset: 0x12DC820 VA: 0x12E0820 Slot: 9
	public bool get_IsReadOnly() { }

	// RVA: 0x12E0828 Offset: 0x12DC828 VA: 0x12E0828 Slot: 10
	public bool get_IsFixedSize() { }

	// RVA: 0x12E0830 Offset: 0x12DC830 VA: 0x12E0830 Slot: 18
	public bool get_IsSynchronized() { }

	// RVA: 0x12E08D4 Offset: 0x12DC8D4 VA: 0x12E08D4 Slot: 4
	public object get_Item(int index) { }

	// RVA: 0x12E097C Offset: 0x12DC97C VA: 0x12E097C Slot: 5
	public void set_Item(int index, object value) { }

	// RVA: 0x12E09C8 Offset: 0x12DC9C8 VA: 0x12E09C8 Slot: 17
	public object get_SyncRoot() { }

	// RVA: 0x12E0A6C Offset: 0x12DCA6C VA: 0x12E0A6C Slot: 6
	public int Add(object value) { }

	// RVA: 0x12E0AB8 Offset: 0x12DCAB8 VA: 0x12E0AB8 Slot: 8
	public void Clear() { }

	// RVA: 0x12E0B04 Offset: 0x12DCB04 VA: 0x12E0B04 Slot: 7
	public bool Contains(object value) { }

	// RVA: 0x12E0BB0 Offset: 0x12DCBB0 VA: 0x12E0BB0 Slot: 15
	public void CopyTo(Array array, int index) { }

	// RVA: 0x12E0C68 Offset: 0x12DCC68 VA: 0x12E0C68 Slot: 19
	public IEnumerator GetEnumerator() { }

	// RVA: 0x12E0D08 Offset: 0x12DCD08 VA: 0x12E0D08 Slot: 11
	public int IndexOf(object value) { }

	// RVA: 0x12E0DB4 Offset: 0x12DCDB4 VA: 0x12E0DB4 Slot: 12
	public void Insert(int index, object value) { }

	// RVA: 0x12E0E00 Offset: 0x12DCE00 VA: 0x12E0E00 Slot: 13
	public void Remove(object value) { }

	// RVA: 0x12E0E4C Offset: 0x12DCE4C VA: 0x12E0E4C Slot: 14
	public void RemoveAt(int index) { }
}


// Namespace: 
internal class NameObjectCollectionBase.NameObjectEntry // TypeDefIndex: 3582
{
	// Fields
	internal string Key; // 0x10
	internal object Value; // 0x18

	// Methods

	// RVA: 0x12E1FD8 Offset: 0x12DDFD8 VA: 0x12E1FD8
	internal void .ctor(string name, object value) { }
}


// Namespace: 
[Serializable]
internal class NameObjectCollectionBase.NameObjectKeysEnumerator : IEnumerator // TypeDefIndex: 3583
{
	// Fields
	private int _pos; // 0x10
	private NameObjectCollectionBase _coll; // 0x18
	private int _version; // 0x20

	// Properties
	public object Current { get; }

	// Methods

	// RVA: 0x12E205C Offset: 0x12DE05C VA: 0x12E205C
	internal void .ctor(NameObjectCollectionBase coll) { }

	// RVA: 0x12E24C0 Offset: 0x12DE4C0 VA: 0x12E24C0 Slot: 4
	public bool MoveNext() { }

	// RVA: 0x12E2598 Offset: 0x12DE598 VA: 0x12E2598 Slot: 6
	public void Reset() { }

	// RVA: 0x12E2620 Offset: 0x12DE620 VA: 0x12E2620 Slot: 5
	public object get_Current() { }
}


// Namespace: System.Collections.Specialized
[Serializable]
public abstract class NameObjectCollectionBase : ICollection, IEnumerable, ISerializable, IDeserializationCallback // TypeDefIndex: 3584
{
	// Fields
	private bool _readOnly; // 0x10
	private ArrayList _entriesArray; // 0x18
	private IEqualityComparer _keyComparer; // 0x20
	private Hashtable _entriesTable; // 0x28
	private NameObjectCollectionBase.NameObjectEntry _nullKeyEntry; // 0x30
	private SerializationInfo _serializationInfo; // 0x38
	private int _version; // 0x40
	private object _syncRoot; // 0x48
	private static StringComparer defaultComparer; // 0x0

	// Properties
	public virtual int Count { get; }
	private object System.Collections.ICollection.SyncRoot { get; }
	private bool System.Collections.ICollection.IsSynchronized { get; }

	// Methods

	// RVA: 0x12DD080 Offset: 0x12D9080 VA: 0x12DD080
	protected void .ctor() { }

	// RVA: 0x12E0E98 Offset: 0x12DCE98 VA: 0x12E0E98
	protected void .ctor(IEqualityComparer equalityComparer) { }

	// RVA: 0x12DD154 Offset: 0x12D9154 VA: 0x12DD154
	protected void .ctor(int capacity, IEqualityComparer equalityComparer) { }

	// RVA: 0x12DDF28 Offset: 0x12D9F28 VA: 0x12DDF28
	internal void .ctor(DBNull dummy) { }

	// RVA: 0x12DD1EC Offset: 0x12D91EC VA: 0x12DD1EC
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x12E107C Offset: 0x12DD07C VA: 0x12E107C Slot: 11
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x12E17B0 Offset: 0x12DD7B0 VA: 0x12E17B0 Slot: 12
	public virtual void OnDeserialization(object sender) { }

	// RVA: 0x12E0F18 Offset: 0x12DCF18 VA: 0x12E0F18
	private void Reset() { }

	// RVA: 0x12E0FC4 Offset: 0x12DCFC4 VA: 0x12E0FC4
	private void Reset(int capacity) { }

	// RVA: 0x12E1F20 Offset: 0x12DDF20 VA: 0x12E1F20
	private NameObjectCollectionBase.NameObjectEntry FindEntry(string key) { }

	// RVA: 0x12DD5EC Offset: 0x12D95EC VA: 0x12DD5EC
	protected void BaseAdd(string name, object value) { }

	// RVA: 0x12DD9F4 Offset: 0x12D99F4 VA: 0x12DD9F4
	protected void BaseRemove(string name) { }

	// RVA: 0x12DD5D4 Offset: 0x12D95D4 VA: 0x12DD5D4
	protected object BaseGet(string name) { }

	// RVA: 0x12DD944 Offset: 0x12D9944 VA: 0x12DD944
	protected void BaseSet(string name, object value) { }

	// RVA: 0x12DDC9C Offset: 0x12D9C9C VA: 0x12DDC9C
	protected object BaseGet(int index) { }

	// RVA: 0x12DDD3C Offset: 0x12D9D3C VA: 0x12DDD3C
	protected string BaseGetKey(int index) { }

	// RVA: 0x12E2004 Offset: 0x12DE004 VA: 0x12E2004 Slot: 13
	public virtual IEnumerator GetEnumerator() { }

	// RVA: 0x12E209C Offset: 0x12DE09C VA: 0x12E209C Slot: 14
	public virtual int get_Count() { }

	// RVA: 0x12E20C0 Offset: 0x12DE0C0 VA: 0x12E20C0 Slot: 4
	private void System.Collections.ICollection.CopyTo(Array array, int index) { }

	// RVA: 0x12E23CC Offset: 0x12DE3CC VA: 0x12E23CC Slot: 6
	private object System.Collections.ICollection.get_SyncRoot() { }

	// RVA: 0x12E2440 Offset: 0x12DE440 VA: 0x12E2440 Slot: 7
	private bool System.Collections.ICollection.get_IsSynchronized() { }

	// RVA: 0x12DDE0C Offset: 0x12D9E0C VA: 0x12DDE0C
	protected string[] BaseGetAllKeys() { }

	// RVA: 0x12E2448 Offset: 0x12DE448 VA: 0x12E2448
	private static void .cctor() { }
}


// Namespace: System.Collections.Specialized
[Serializable]
internal class CompatibleComparer : IEqualityComparer // TypeDefIndex: 3585
{
	// Fields
	private IComparer _comparer; // 0x10
	private static IComparer defaultComparer; // 0x0
	private IHashCodeProvider _hcp; // 0x18
	private static IHashCodeProvider defaultHashProvider; // 0x8

	// Properties
	public static IComparer DefaultComparer { get; }
	public static IHashCodeProvider DefaultHashCodeProvider { get; }

	// Methods

	// RVA: 0x12E1EF4 Offset: 0x12DDEF4 VA: 0x12E1EF4
	internal void .ctor(IComparer comparer, IHashCodeProvider hashCodeProvider) { }

	// RVA: 0x12E26C0 Offset: 0x12DE6C0 VA: 0x12E26C0 Slot: 4
	public bool Equals(object a, object b) { }

	// RVA: 0x12E28C0 Offset: 0x12DE8C0 VA: 0x12E28C0 Slot: 5
	public int GetHashCode(object obj) { }

	// RVA: 0x12E16DC Offset: 0x12DD6DC VA: 0x12E16DC
	public static IComparer get_DefaultComparer() { }

	// RVA: 0x12E1604 Offset: 0x12DD604 VA: 0x12E1604
	public static IHashCodeProvider get_DefaultHashCodeProvider() { }
}


// Namespace: 
private sealed class ConcurrentBag.WorkStealingQueue<T> // TypeDefIndex: 3586
{
	// Fields
	private int _headIndex; // 0x0
	private int _tailIndex; // 0x0
	private T[] _array; // 0x0
	private int _mask; // 0x0
	private int _addTakeCount; // 0x0
	private int _stealCount; // 0x0
	internal int _currentOp; // 0x0
	internal bool _frozen; // 0x0
	internal readonly ConcurrentBag.WorkStealingQueue<T> _nextQueue; // 0x0
	internal readonly int _ownerThreadId; // 0x0

	// Properties
	internal int DangerousCount { get; }

	// Methods

	// RVA: -1 Offset: -1
	internal void .ctor(ConcurrentBag.WorkStealingQueue<T> nextQueue) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBA614 Offset: 0xCB6614 VA: 0xCBA614
	|-ConcurrentBag.WorkStealingQueue<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal void LocalPush(T item, ref long emptyToNonEmptyListTransitionCount) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBA690 Offset: 0xCB6690 VA: 0xCBA690
	|-ConcurrentBag.WorkStealingQueue<__Il2CppFullySharedGenericType>.LocalPush
	*/

	// RVA: -1 Offset: -1
	internal int DangerousCopyTo(T[] array, int arrayIndex) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBAC94 Offset: 0xCB6C94 VA: 0xCBAC94
	|-ConcurrentBag.WorkStealingQueue<__Il2CppFullySharedGenericType>.DangerousCopyTo
	*/

	// RVA: -1 Offset: -1
	internal int get_DangerousCount() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBAE04 Offset: 0xCB6E04 VA: 0xCBAE04
	|-ConcurrentBag.WorkStealingQueue<__Il2CppFullySharedGenericType>.get_DangerousCount
	*/
}


// Namespace: 
[Serializable]
private sealed class ConcurrentBag.Enumerator<T> : IEnumerator<T>, IDisposable, IEnumerator // TypeDefIndex: 3587
{
	// Fields
	private readonly T[] _array; // 0x0
	private T _current; // 0x0
	private int _index; // 0x0

	// Properties
	public T Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(T[] array) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0CC30 Offset: 0xC08C30 VA: 0xC0CC30
	|-ConcurrentBag.Enumerator<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public bool MoveNext() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0CC84 Offset: 0xC08C84 VA: 0xC0CC84
	|-ConcurrentBag.Enumerator<__Il2CppFullySharedGenericType>.MoveNext
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public T get_Current() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0CE68 Offset: 0xC08E68 VA: 0xC0CE68
	|-ConcurrentBag.Enumerator<__Il2CppFullySharedGenericType>.get_Current
	*/

	// RVA: -1 Offset: -1 Slot: 7
	private object System.Collections.IEnumerator.get_Current() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0CF04 Offset: 0xC08F04 VA: 0xC0CF04
	|-ConcurrentBag.Enumerator<__Il2CppFullySharedGenericType>.System.Collections.IEnumerator.get_Current
	*/

	// RVA: -1 Offset: -1 Slot: 8
	public void Reset() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0D064 Offset: 0xC09064 VA: 0xC0D064
	|-ConcurrentBag.Enumerator<__Il2CppFullySharedGenericType>.Reset
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public void Dispose() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0D0E0 Offset: 0xC090E0 VA: 0xC0D0E0
	|-ConcurrentBag.Enumerator<__Il2CppFullySharedGenericType>.Dispose
	*/
}


// Namespace: System.Collections.Concurrent
[Serializable]
public class ConcurrentBag<T> : IEnumerable<T>, IEnumerable, ICollection, IReadOnlyCollection<T> // TypeDefIndex: 3588
{
	// Fields
	private readonly ThreadLocal<ConcurrentBag.WorkStealingQueue<T>> _locals; // 0x0
	private ConcurrentBag.WorkStealingQueue<T> _workStealingQueues; // 0x0
	private long _emptyToNonEmptyListTransitionCount; // 0x0

	// Properties
	public int Count { get; }
	private int DangerousCount { get; }
	private bool System.Collections.ICollection.IsSynchronized { get; }
	private object System.Collections.ICollection.SyncRoot { get; }

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE957C Offset: 0xBE557C VA: 0xBE957C
	|-ConcurrentBag<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	public void Add(T item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE95D4 Offset: 0xBE55D4 VA: 0xBE95D4
	|-ConcurrentBag<__Il2CppFullySharedGenericType>.Add
	*/

	// RVA: -1 Offset: -1
	private ConcurrentBag.WorkStealingQueue<T> GetCurrentThreadWorkStealingQueue(bool forceCreate) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE96C8 Offset: 0xBE56C8 VA: 0xBE96C8
	|-ConcurrentBag<__Il2CppFullySharedGenericType>.GetCurrentThreadWorkStealingQueue
	*/

	// RVA: -1 Offset: -1
	private ConcurrentBag.WorkStealingQueue<T> CreateWorkStealingQueueForCurrentThread() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE9730 Offset: 0xBE5730 VA: 0xBE9730
	|-ConcurrentBag<__Il2CppFullySharedGenericType>.CreateWorkStealingQueueForCurrentThread
	*/

	// RVA: -1 Offset: -1
	private ConcurrentBag.WorkStealingQueue<T> GetUnownedWorkStealingQueue() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE9884 Offset: 0xBE5884 VA: 0xBE9884
	|-ConcurrentBag<__Il2CppFullySharedGenericType>.GetUnownedWorkStealingQueue
	*/

	// RVA: -1 Offset: -1 Slot: 11
	public void CopyTo(T[] array, int index) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE98CC Offset: 0xBE58CC VA: 0xBE98CC
	|-ConcurrentBag<__Il2CppFullySharedGenericType>.CopyTo
	*/

	// RVA: -1 Offset: -1
	private int CopyFromEachQueueToArray(T[] array, int index) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE9B90 Offset: 0xBE5B90 VA: 0xBE9B90
	|-ConcurrentBag<__Il2CppFullySharedGenericType>.CopyFromEachQueueToArray
	*/

	// RVA: -1 Offset: -1 Slot: 6
	private void System.Collections.ICollection.CopyTo(Array array, int index) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE9BF8 Offset: 0xBE5BF8 VA: 0xBE9BF8
	|-ConcurrentBag<__Il2CppFullySharedGenericType>.System.Collections.ICollection.CopyTo
	*/

	// RVA: -1 Offset: -1 Slot: 12
	public T[] ToArray() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE9CF4 Offset: 0xBE5CF4 VA: 0xBE9CF4
	|-ConcurrentBag<__Il2CppFullySharedGenericType>.ToArray
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public IEnumerator<T> GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE9E88 Offset: 0xBE5E88 VA: 0xBE9E88
	|-ConcurrentBag<__Il2CppFullySharedGenericType>.GetEnumerator
	*/

	// RVA: -1 Offset: -1 Slot: 5
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE9EF8 Offset: 0xBE5EF8 VA: 0xBE9EF8
	|-ConcurrentBag<__Il2CppFullySharedGenericType>.System.Collections.IEnumerable.GetEnumerator
	*/

	// RVA: -1 Offset: -1 Slot: 10
	public int get_Count() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE9F08 Offset: 0xBE5F08 VA: 0xBE9F08
	|-ConcurrentBag<__Il2CppFullySharedGenericType>.get_Count
	*/

	// RVA: -1 Offset: -1
	private int get_DangerousCount() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE9FD8 Offset: 0xBE5FD8 VA: 0xBE9FD8
	|-ConcurrentBag<__Il2CppFullySharedGenericType>.get_DangerousCount
	*/

	// RVA: -1 Offset: -1 Slot: 9
	private bool System.Collections.ICollection.get_IsSynchronized() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBEA038 Offset: 0xBE6038 VA: 0xBEA038
	|-ConcurrentBag<__Il2CppFullySharedGenericType>.System.Collections.ICollection.get_IsSynchronized
	*/

	// RVA: -1 Offset: -1 Slot: 8
	private object System.Collections.ICollection.get_SyncRoot() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBEA040 Offset: 0xBE6040 VA: 0xBEA040
	|-ConcurrentBag<__Il2CppFullySharedGenericType>.System.Collections.ICollection.get_SyncRoot
	*/

	// RVA: -1 Offset: -1
	private void FreezeBag(ref bool lockTaken) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBEA088 Offset: 0xBE6088 VA: 0xBEA088
	|-ConcurrentBag<__Il2CppFullySharedGenericType>.FreezeBag
	*/

	// RVA: -1 Offset: -1
	private void UnfreezeBag(bool lockTaken) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBEA168 Offset: 0xBE6168 VA: 0xBEA168
	|-ConcurrentBag<__Il2CppFullySharedGenericType>.UnfreezeBag
	*/
}


// Namespace: System.Collections.Generic
[DefaultMember("Item")]
[Obsolete("Types with embedded references are not supported in this version of your compiler.", True)]
[IsByRefLike]
internal struct ValueListBuilder<T> // TypeDefIndex: 3589
{
	// Fields
	private Span<T> _span; // 0x0
	private T[] _arrayFromPool; // 0x0
	private int _pos; // 0x0

	// Properties
	public T Item { get; }

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(Span<T> initialSpan) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC82C88 Offset: 0xC7EC88 VA: 0xC82C88
	|-ValueListBuilder<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	public ref T get_Item(int index) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC82C98 Offset: 0xC7EC98 VA: 0xC82C98
	|-ValueListBuilder<__Il2CppFullySharedGenericType>.get_Item
	*/

	// RVA: -1 Offset: -1
	public void Append(T item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC82D0C Offset: 0xC7ED0C VA: 0xC82D0C
	|-ValueListBuilder<__Il2CppFullySharedGenericType>.Append
	*/

	// RVA: -1 Offset: -1
	public ReadOnlySpan<T> AsSpan() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC82EAC Offset: 0xC7EEAC VA: 0xC82EAC
	|-ValueListBuilder<__Il2CppFullySharedGenericType>.AsSpan
	*/

	// RVA: -1 Offset: -1
	public void Dispose() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC82F60 Offset: 0xC7EF60 VA: 0xC82F60
	|-ValueListBuilder<__Il2CppFullySharedGenericType>.Dispose
	*/

	// RVA: -1 Offset: -1
	private void Grow() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC83000 Offset: 0xC7F000 VA: 0xC83000
	|-ValueListBuilder<__Il2CppFullySharedGenericType>.Grow
	*/

	// RVA: -1 Offset: -1
	public T Pop() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC831B0 Offset: 0xC7F1B0 VA: 0xC831B0
	|-ValueListBuilder<__Il2CppFullySharedGenericType>.Pop
	*/
}


// Namespace: 
[Serializable]
public struct LinkedList.Enumerator<T> : IEnumerator<T>, IDisposable, IEnumerator, ISerializable, IDeserializationCallback // TypeDefIndex: 3590
{
	// Fields
	private LinkedList<T> _list; // 0x0
	private LinkedListNode<T> _node; // 0x0
	private int _version; // 0x0
	private T _current; // 0x0
	private int _index; // 0x0

	// Properties
	public T Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	// RVA: -1 Offset: -1
	internal void .ctor(LinkedList<T> list) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0DB14 Offset: 0xC09B14 VA: 0xC0DB14
	|-LinkedList.Enumerator<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	private void .ctor(SerializationInfo info, StreamingContext context) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0DCAC Offset: 0xC09CAC VA: 0xC0DCAC
	|-LinkedList.Enumerator<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public T get_Current() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0DCE0 Offset: 0xC09CE0 VA: 0xC0DCE0
	|-LinkedList.Enumerator<__Il2CppFullySharedGenericType>.get_Current
	*/

	// RVA: -1 Offset: -1 Slot: 7
	private object System.Collections.IEnumerator.get_Current() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0DDD0 Offset: 0xC09DD0 VA: 0xC0DDD0
	|-LinkedList.Enumerator<__Il2CppFullySharedGenericType>.System.Collections.IEnumerator.get_Current
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public bool MoveNext() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0DFA8 Offset: 0xC09FA8 VA: 0xC0DFA8
	|-LinkedList.Enumerator<__Il2CppFullySharedGenericType>.MoveNext
	*/

	// RVA: -1 Offset: -1 Slot: 8
	private void System.Collections.IEnumerator.Reset() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0E3DC Offset: 0xC0A3DC VA: 0xC0E3DC
	|-LinkedList.Enumerator<__Il2CppFullySharedGenericType>.System.Collections.IEnumerator.Reset
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public void Dispose() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0E5BC Offset: 0xC0A5BC VA: 0xC0E5BC
	|-LinkedList.Enumerator<__Il2CppFullySharedGenericType>.Dispose
	*/

	// RVA: -1 Offset: -1 Slot: 9
	private void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo info, StreamingContext context) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0E5C0 Offset: 0xC0A5C0 VA: 0xC0E5C0
	|-LinkedList.Enumerator<__Il2CppFullySharedGenericType>.System.Runtime.Serialization.ISerializable.GetObjectData
	*/

	// RVA: -1 Offset: -1 Slot: 10
	private void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(object sender) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0E5F4 Offset: 0xC0A5F4 VA: 0xC0E5F4
	|-LinkedList.Enumerator<__Il2CppFullySharedGenericType>.System.Runtime.Serialization.IDeserializationCallback.OnDeserialization
	*/
}


// Namespace: System.Collections.Generic
[Serializable]
public class LinkedList<T> : ICollection<T>, IEnumerable<T>, IEnumerable, ICollection, IReadOnlyCollection<T>, ISerializable, IDeserializationCallback // TypeDefIndex: 3591
{
	// Fields
	internal LinkedListNode<T> head; // 0x0
	internal int count; // 0x0
	internal int version; // 0x0
	private object _syncRoot; // 0x0
	private SerializationInfo _siInfo; // 0x0
	private const string VersionName = "Version";
	private const string CountName = "Count";
	private const string ValuesName = "Data";

	// Properties
	public int Count { get; }
	public LinkedListNode<T> First { get; }
	public LinkedListNode<T> Last { get; }
	private bool System.Collections.Generic.ICollection<T>.IsReadOnly { get; }
	private bool System.Collections.ICollection.IsSynchronized { get; }
	private object System.Collections.ICollection.SyncRoot { get; }

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2DAE8 Offset: 0xC29AE8 VA: 0xC2DAE8
	|-LinkedList<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	protected void .ctor(SerializationInfo info, StreamingContext context) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2DAF0 Offset: 0xC29AF0 VA: 0xC2DAF0
	|-LinkedList<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 17
	public int get_Count() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2DB18 Offset: 0xC29B18 VA: 0xC2DB18
	|-LinkedList<__Il2CppFullySharedGenericType>.get_Count
	*/

	// RVA: -1 Offset: -1
	public LinkedListNode<T> get_First() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2DB20 Offset: 0xC29B20 VA: 0xC2DB20
	|-LinkedList<__Il2CppFullySharedGenericType>.get_First
	*/

	// RVA: -1 Offset: -1
	public LinkedListNode<T> get_Last() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2DB28 Offset: 0xC29B28 VA: 0xC2DB28
	|-LinkedList<__Il2CppFullySharedGenericType>.get_Last
	*/

	// RVA: -1 Offset: -1 Slot: 5
	private bool System.Collections.Generic.ICollection<T>.get_IsReadOnly() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2DB58 Offset: 0xC29B58 VA: 0xC2DB58
	|-LinkedList<__Il2CppFullySharedGenericType>.System.Collections.Generic.ICollection<T>.get_IsReadOnly
	*/

	// RVA: -1 Offset: -1 Slot: 6
	private void System.Collections.Generic.ICollection<T>.Add(T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2DB60 Offset: 0xC29B60 VA: 0xC2DB60
	|-LinkedList<__Il2CppFullySharedGenericType>.System.Collections.Generic.ICollection<T>.Add
	*/

	// RVA: -1 Offset: -1
	public LinkedListNode<T> AddFirst(T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2DC3C Offset: 0xC29C3C VA: 0xC2DC3C
	|-LinkedList<__Il2CppFullySharedGenericType>.AddFirst
	*/

	// RVA: -1 Offset: -1
	public LinkedListNode<T> AddLast(T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2DD84 Offset: 0xC29D84 VA: 0xC2DD84
	|-LinkedList<__Il2CppFullySharedGenericType>.AddLast
	*/

	// RVA: -1 Offset: -1
	public void AddLast(LinkedListNode<T> node) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2DEC8 Offset: 0xC29EC8 VA: 0xC2DEC8
	|-LinkedList<__Il2CppFullySharedGenericType>.AddLast
	*/

	// RVA: -1 Offset: -1 Slot: 7
	public void Clear() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2DF60 Offset: 0xC29F60 VA: 0xC2DF60
	|-LinkedList<__Il2CppFullySharedGenericType>.Clear
	*/

	// RVA: -1 Offset: -1 Slot: 8
	public bool Contains(T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2DFD0 Offset: 0xC29FD0 VA: 0xC2DFD0
	|-LinkedList<__Il2CppFullySharedGenericType>.Contains
	*/

	// RVA: -1 Offset: -1 Slot: 9
	public void CopyTo(T[] array, int index) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2E0B4 Offset: 0xC2A0B4 VA: 0xC2E0B4
	|-LinkedList<__Il2CppFullySharedGenericType>.CopyTo
	*/

	// RVA: -1 Offset: -1
	public LinkedListNode<T> Find(T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2E374 Offset: 0xC2A374 VA: 0xC2E374
	|-LinkedList<__Il2CppFullySharedGenericType>.Find
	*/

	// RVA: -1 Offset: -1
	public LinkedList.Enumerator<T> GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2E5BC Offset: 0xC2A5BC VA: 0xC2E5BC
	|-LinkedList<__Il2CppFullySharedGenericType>.GetEnumerator
	*/

	// RVA: -1 Offset: -1 Slot: 11
	private IEnumerator<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2E66C Offset: 0xC2A66C VA: 0xC2E66C
	|-LinkedList<__Il2CppFullySharedGenericType>.System.Collections.Generic.IEnumerable<T>.GetEnumerator
	*/

	// RVA: -1 Offset: -1 Slot: 10
	public bool Remove(T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2E6FC Offset: 0xC2A6FC VA: 0xC2E6FC
	|-LinkedList<__Il2CppFullySharedGenericType>.Remove
	*/

	// RVA: -1 Offset: -1
	public void Remove(LinkedListNode<T> node) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2E80C Offset: 0xC2A80C VA: 0xC2E80C
	|-LinkedList<__Il2CppFullySharedGenericType>.Remove
	*/

	// RVA: -1 Offset: -1
	public void RemoveFirst() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2E850 Offset: 0xC2A850 VA: 0xC2E850
	|-LinkedList<__Il2CppFullySharedGenericType>.RemoveFirst
	*/

	// RVA: -1 Offset: -1 Slot: 20
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2E8BC Offset: 0xC2A8BC VA: 0xC2E8BC
	|-LinkedList<__Il2CppFullySharedGenericType>.GetObjectData
	*/

	// RVA: -1 Offset: -1 Slot: 21
	public virtual void OnDeserialization(object sender) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2EA50 Offset: 0xC2AA50 VA: 0xC2EA50
	|-LinkedList<__Il2CppFullySharedGenericType>.OnDeserialization
	*/

	// RVA: -1 Offset: -1
	private void InternalInsertNodeBefore(LinkedListNode<T> node, LinkedListNode<T> newNode) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2ECEC Offset: 0xC2ACEC VA: 0xC2ECEC
	|-LinkedList<__Il2CppFullySharedGenericType>.InternalInsertNodeBefore
	*/

	// RVA: -1 Offset: -1
	private void InternalInsertNodeToEmptyList(LinkedListNode<T> newNode) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2EE40 Offset: 0xC2AE40 VA: 0xC2EE40
	|-LinkedList<__Il2CppFullySharedGenericType>.InternalInsertNodeToEmptyList
	*/

	// RVA: -1 Offset: -1
	internal void InternalRemoveNode(LinkedListNode<T> node) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2EEE4 Offset: 0xC2AEE4 VA: 0xC2EEE4
	|-LinkedList<__Il2CppFullySharedGenericType>.InternalRemoveNode
	*/

	// RVA: -1 Offset: -1
	internal void ValidateNewNode(LinkedListNode<T> node) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2F08C Offset: 0xC2B08C VA: 0xC2F08C
	|-LinkedList<__Il2CppFullySharedGenericType>.ValidateNewNode
	*/

	// RVA: -1 Offset: -1
	internal void ValidateNode(LinkedListNode<T> node) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2F13C Offset: 0xC2B13C VA: 0xC2F13C
	|-LinkedList<__Il2CppFullySharedGenericType>.ValidateNode
	*/

	// RVA: -1 Offset: -1 Slot: 16
	private bool System.Collections.ICollection.get_IsSynchronized() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2F1F4 Offset: 0xC2B1F4 VA: 0xC2F1F4
	|-LinkedList<__Il2CppFullySharedGenericType>.System.Collections.ICollection.get_IsSynchronized
	*/

	// RVA: -1 Offset: -1 Slot: 15
	private object System.Collections.ICollection.get_SyncRoot() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2F1FC Offset: 0xC2B1FC VA: 0xC2F1FC
	|-LinkedList<__Il2CppFullySharedGenericType>.System.Collections.ICollection.get_SyncRoot
	*/

	// RVA: -1 Offset: -1 Slot: 13
	private void System.Collections.ICollection.CopyTo(Array array, int index) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2F26C Offset: 0xC2B26C VA: 0xC2F26C
	|-LinkedList<__Il2CppFullySharedGenericType>.System.Collections.ICollection.CopyTo
	*/

	// RVA: -1 Offset: -1 Slot: 12
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2F668 Offset: 0xC2B668 VA: 0xC2F668
	|-LinkedList<__Il2CppFullySharedGenericType>.System.Collections.IEnumerable.GetEnumerator
	*/
}


// Namespace: System.Collections.Generic
public sealed class LinkedListNode<T> // TypeDefIndex: 3592
{
	// Fields
	internal LinkedList<T> list; // 0x0
	internal LinkedListNode<T> next; // 0x0
	internal LinkedListNode<T> prev; // 0x0
	internal T item; // 0x0

	// Properties
	public LinkedListNode<T> Next { get; }
	public LinkedListNode<T> Previous { get; }
	public T Value { get; }

	// Methods

	// RVA: -1 Offset: -1
	internal void .ctor(LinkedList<T> list, T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2D750 Offset: 0xC29750 VA: 0xC2D750
	|-LinkedListNode<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	public LinkedListNode<T> get_Next() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2D85C Offset: 0xC2985C VA: 0xC2D85C
	|-LinkedListNode<__Il2CppFullySharedGenericType>.get_Next
	*/

	// RVA: -1 Offset: -1
	public LinkedListNode<T> get_Previous() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2D910 Offset: 0xC29910 VA: 0xC2D910
	|-LinkedListNode<__Il2CppFullySharedGenericType>.get_Previous
	*/

	// RVA: -1 Offset: -1
	public T get_Value() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2D9A4 Offset: 0xC299A4 VA: 0xC2D9A4
	|-LinkedListNode<__Il2CppFullySharedGenericType>.get_Value
	*/

	// RVA: -1 Offset: -1
	internal void Invalidate() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2DA40 Offset: 0xC29A40 VA: 0xC2DA40
	|-LinkedListNode<__Il2CppFullySharedGenericType>.Invalidate
	*/
}


// Namespace: System.Collections.Generic
public interface ISet<T> : ICollection<T>, IEnumerable<T>, IEnumerable // TypeDefIndex: 3593
{}


// Namespace: 
private sealed class ChunkedMemoryStream.MemoryChunk // TypeDefIndex: 3594
{
	// Fields
	internal readonly byte[] _buffer; // 0x10
	internal int _freeOffset; // 0x18
	internal ChunkedMemoryStream.MemoryChunk _next; // 0x20

	// Methods

	// RVA: 0x12E2DA0 Offset: 0x12DEDA0 VA: 0x12E2DA0
	internal void .ctor(int bufferSize) { }
}


// Namespace: System.IO
internal sealed class ChunkedMemoryStream : Stream // TypeDefIndex: 3595
{
	// Fields
	private ChunkedMemoryStream.MemoryChunk _headChunk; // 0x28
	private ChunkedMemoryStream.MemoryChunk _currentChunk; // 0x30
	private int _totalLength; // 0x38

	// Properties
	public override bool CanRead { get; }
	public override bool CanSeek { get; }
	public override bool CanWrite { get; }
	public override long Length { get; }
	public override long Position { get; set; }

	// Methods

	// RVA: 0x12E29C8 Offset: 0x12DE9C8 VA: 0x12E29C8
	internal void .ctor() { }

	// RVA: 0x12E2A20 Offset: 0x12DEA20 VA: 0x12E2A20
	public byte[] ToArray() { }

	// RVA: 0x12E2AAC Offset: 0x12DEAAC VA: 0x12E2AAC Slot: 30
	public override void Write(byte[] buffer, int offset, int count) { }

	// RVA: 0x12E2CAC Offset: 0x12DECAC VA: 0x12E2CAC Slot: 23
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken) { }

	// RVA: 0x12E2BC4 Offset: 0x12DEBC4 VA: 0x12E2BC4
	private void AppendChunk(long count) { }

	// RVA: 0x12E2E08 Offset: 0x12DEE08 VA: 0x12E2E08 Slot: 5
	public override bool get_CanRead() { }

	// RVA: 0x12E2E10 Offset: 0x12DEE10 VA: 0x12E2E10 Slot: 6
	public override bool get_CanSeek() { }

	// RVA: 0x12E2E18 Offset: 0x12DEE18 VA: 0x12E2E18 Slot: 8
	public override bool get_CanWrite() { }

	// RVA: 0x12E2E20 Offset: 0x12DEE20 VA: 0x12E2E20 Slot: 9
	public override long get_Length() { }

	// RVA: 0x12E2E28 Offset: 0x12DEE28 VA: 0x12E2E28 Slot: 16
	public override void Flush() { }

	// RVA: 0x12E2E2C Offset: 0x12DEE2C VA: 0x12E2E2C Slot: 10
	public override long get_Position() { }

	// RVA: 0x12E2E64 Offset: 0x12DEE64 VA: 0x12E2E64 Slot: 11
	public override void set_Position(long value) { }

	// RVA: 0x12E2E9C Offset: 0x12DEE9C VA: 0x12E2E9C Slot: 27
	public override int Read(byte[] buffer, int offset, int count) { }

	// RVA: 0x12E2ED4 Offset: 0x12DEED4 VA: 0x12E2ED4 Slot: 25
	public override long Seek(long offset, SeekOrigin origin) { }

	// RVA: 0x12E2F0C Offset: 0x12DEF0C VA: 0x12E2F0C Slot: 26
	public override void SetLength(long value) { }
}


// Namespace: System.IO.Compression
public enum CompressionMode // TypeDefIndex: 3596
{
	// Fields
	public int value__; // 0x0
	public const CompressionMode Decompress = 0;
	public const CompressionMode Compress = 1;
}


// Namespace: System.IO.Compression
public class GZipStream : Stream // TypeDefIndex: 3597
{
	// Fields
	private DeflateStream _deflateStream; // 0x28

	// Properties
	public override bool CanRead { get; }
	public override bool CanWrite { get; }
	public override bool CanSeek { get; }
	public override long Length { get; }
	public override long Position { get; set; }

	// Methods

	// RVA: 0x12E2F54 Offset: 0x12DEF54 VA: 0x12E2F54
	public void .ctor(Stream stream, CompressionMode mode) { }

	// RVA: 0x12E2F5C Offset: 0x12DEF5C VA: 0x12E2F5C
	public void .ctor(Stream stream, CompressionMode mode, bool leaveOpen) { }

	// RVA: 0x12E3018 Offset: 0x12DF018 VA: 0x12E3018 Slot: 5
	public override bool get_CanRead() { }

	// RVA: 0x12E3030 Offset: 0x12DF030 VA: 0x12E3030 Slot: 8
	public override bool get_CanWrite() { }

	// RVA: 0x12E3048 Offset: 0x12DF048 VA: 0x12E3048 Slot: 6
	public override bool get_CanSeek() { }

	// RVA: 0x12E3060 Offset: 0x12DF060 VA: 0x12E3060 Slot: 9
	public override long get_Length() { }

	// RVA: 0x12E30AC Offset: 0x12DF0AC VA: 0x12E30AC Slot: 10
	public override long get_Position() { }

	// RVA: 0x12E30F8 Offset: 0x12DF0F8 VA: 0x12E30F8 Slot: 11
	public override void set_Position(long value) { }

	// RVA: 0x12E3144 Offset: 0x12DF144 VA: 0x12E3144 Slot: 16
	public override void Flush() { }

	// RVA: 0x12E3180 Offset: 0x12DF180 VA: 0x12E3180 Slot: 25
	public override long Seek(long offset, SeekOrigin origin) { }

	// RVA: 0x12E31CC Offset: 0x12DF1CC VA: 0x12E31CC Slot: 26
	public override void SetLength(long value) { }

	// RVA: 0x12E3218 Offset: 0x12DF218 VA: 0x12E3218 Slot: 29
	public override int ReadByte() { }

	// RVA: 0x12E323C Offset: 0x12DF23C VA: 0x12E323C Slot: 17
	public override IAsyncResult BeginRead(byte[] array, int offset, int count, AsyncCallback asyncCallback, object asyncState) { }

	// RVA: 0x12E32F0 Offset: 0x12DF2F0 VA: 0x12E32F0 Slot: 18
	public override int EndRead(IAsyncResult asyncResult) { }

	// RVA: 0x12E334C Offset: 0x12DF34C VA: 0x12E334C Slot: 27
	public override int Read(byte[] array, int offset, int count) { }

	// RVA: 0x12E3370 Offset: 0x12DF370 VA: 0x12E3370 Slot: 28
	public override int Read(Span<byte> buffer) { }

	// RVA: 0x12E3578 Offset: 0x12DF578 VA: 0x12E3578 Slot: 21
	public override IAsyncResult BeginWrite(byte[] array, int offset, int count, AsyncCallback asyncCallback, object asyncState) { }

	// RVA: 0x12E362C Offset: 0x12DF62C VA: 0x12E362C Slot: 22
	public override void EndWrite(IAsyncResult asyncResult) { }

	// RVA: 0x12E3638 Offset: 0x12DF638 VA: 0x12E3638 Slot: 30
	public override void Write(byte[] array, int offset, int count) { }

	// RVA: 0x12E365C Offset: 0x12DF65C VA: 0x12E365C Slot: 31
	public override void Write(ReadOnlySpan<byte> buffer) { }

	// RVA: 0x12E37C0 Offset: 0x12DF7C0 VA: 0x12E37C0 Slot: 15
	protected override void Dispose(bool disposing) { }

	// RVA: 0x12E3878 Offset: 0x12DF878 VA: 0x12E3878 Slot: 19
	public override Task<int> ReadAsync(byte[] array, int offset, int count, CancellationToken cancellationToken) { }

	// RVA: 0x12E389C Offset: 0x12DF89C VA: 0x12E389C Slot: 20
	public override ValueTask<int> ReadAsync(Memory<byte> buffer, CancellationToken cancellationToken) { }

	// RVA: 0x12E397C Offset: 0x12DF97C VA: 0x12E397C Slot: 23
	public override Task WriteAsync(byte[] array, int offset, int count, CancellationToken cancellationToken) { }

	// RVA: 0x12E39A0 Offset: 0x12DF9A0 VA: 0x12E39A0 Slot: 24
	public override ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, CancellationToken cancellationToken) { }

	// RVA: 0x12E3168 Offset: 0x12DF168 VA: 0x12E3168
	private void CheckDeflateStream() { }

	// RVA: 0x12E3A80 Offset: 0x12DFA80 VA: 0x12E3A80
	private static void ThrowStreamClosedException() { }
}


// Namespace: 
private sealed class DeflateStream.ReadMethod : MulticastDelegate // TypeDefIndex: 3598
{
	// Methods

	// RVA: 0x12E484C Offset: 0x12E084C VA: 0x12E484C
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x12E518C Offset: 0x12E118C VA: 0x12E518C Slot: 12
	public virtual int Invoke(byte[] array, int offset, int count) { }

	// RVA: 0x12E48EC Offset: 0x12E08EC VA: 0x12E48EC Slot: 13
	public virtual IAsyncResult BeginInvoke(byte[] array, int offset, int count, AsyncCallback callback, object object) { }

	// RVA: 0x12E4E7C Offset: 0x12E0E7C VA: 0x12E4E7C Slot: 14
	public virtual int EndInvoke(IAsyncResult result) { }
}


// Namespace: 
private sealed class DeflateStream.WriteMethod : MulticastDelegate // TypeDefIndex: 3599
{
	// Methods

	// RVA: 0x12E4BF8 Offset: 0x12E0BF8 VA: 0x12E4BF8
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x12E51A0 Offset: 0x12E11A0 VA: 0x12E51A0 Slot: 12
	public virtual void Invoke(byte[] array, int offset, int count) { }

	// RVA: 0x12E4C98 Offset: 0x12E0C98 VA: 0x12E4C98 Slot: 13
	public virtual IAsyncResult BeginInvoke(byte[] array, int offset, int count, AsyncCallback callback, object object) { }

	// RVA: 0x12E4FE4 Offset: 0x12E0FE4 VA: 0x12E4FE4 Slot: 14
	public virtual void EndInvoke(IAsyncResult result) { }
}


// Namespace: System.IO.Compression
public class DeflateStream : Stream // TypeDefIndex: 3600
{
	// Fields
	private Stream base_stream; // 0x28
	private CompressionMode mode; // 0x30
	private bool leaveOpen; // 0x34
	private bool disposed; // 0x35
	private DeflateStreamNative native; // 0x38

	// Properties
	public override bool CanRead { get; }
	public override bool CanSeek { get; }
	public override bool CanWrite { get; }
	public override long Length { get; }
	public override long Position { get; set; }

	// Methods

	// RVA: 0x12E3AD0 Offset: 0x12DFAD0 VA: 0x12E3AD0
	public void .ctor(Stream stream, CompressionMode mode) { }

	// RVA: 0x12E300C Offset: 0x12DF00C VA: 0x12E300C
	internal void .ctor(Stream stream, CompressionMode mode, bool leaveOpen, int windowsBits) { }

	// RVA: 0x12E3ADC Offset: 0x12DFADC VA: 0x12E3ADC
	internal void .ctor(Stream compressedStream, CompressionMode mode, bool leaveOpen, bool gzip) { }

	// RVA: 0x12E3D68 Offset: 0x12DFD68 VA: 0x12E3D68 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x12E3E0C Offset: 0x12DFE0C VA: 0x12E3E0C Slot: 15
	protected override void Dispose(bool disposing) { }

	// RVA: 0x12E3FC8 Offset: 0x12DFFC8 VA: 0x12E3FC8
	private int ReadInternal(byte[] array, int offset, int count) { }

	// RVA: 0x12E3974 Offset: 0x12DF974 VA: 0x12E3974
	internal ValueTask<int> ReadAsyncMemory(Memory<byte> destination, CancellationToken cancellationToken) { }

	// RVA: 0x12E345C Offset: 0x12DF45C VA: 0x12E345C
	internal int ReadCore(Span<byte> destination) { }

	// RVA: 0x12E4088 Offset: 0x12E0088 VA: 0x12E4088 Slot: 27
	public override int Read(byte[] array, int offset, int count) { }

	// RVA: 0x12E4258 Offset: 0x12E0258 VA: 0x12E4258
	private void WriteInternal(byte[] array, int offset, int count) { }

	// RVA: 0x12E3A78 Offset: 0x12DFA78 VA: 0x12E3A78
	internal ValueTask WriteAsyncMemory(ReadOnlyMemory<byte> source, CancellationToken cancellationToken) { }

	// RVA: 0x12E3748 Offset: 0x12DF748 VA: 0x12E3748
	internal void WriteCore(ReadOnlySpan<byte> source) { }

	// RVA: 0x12E4308 Offset: 0x12E0308 VA: 0x12E4308 Slot: 30
	public override void Write(byte[] array, int offset, int count) { }

	// RVA: 0x12E44E4 Offset: 0x12E04E4 VA: 0x12E44E4 Slot: 16
	public override void Flush() { }

	// RVA: 0x12E45E8 Offset: 0x12E05E8 VA: 0x12E45E8 Slot: 17
	public override IAsyncResult BeginRead(byte[] array, int offset, int count, AsyncCallback asyncCallback, object asyncState) { }

	// RVA: 0x12E4994 Offset: 0x12E0994 VA: 0x12E4994 Slot: 21
	public override IAsyncResult BeginWrite(byte[] array, int offset, int count, AsyncCallback asyncCallback, object asyncState) { }

	// RVA: 0x12E4D40 Offset: 0x12E0D40 VA: 0x12E4D40 Slot: 18
	public override int EndRead(IAsyncResult asyncResult) { }

	// RVA: 0x12E4EA4 Offset: 0x12E0EA4 VA: 0x12E4EA4 Slot: 22
	public override void EndWrite(IAsyncResult asyncResult) { }

	// RVA: 0x12E4FF0 Offset: 0x12E0FF0 VA: 0x12E4FF0 Slot: 25
	public override long Seek(long offset, SeekOrigin origin) { }

	// RVA: 0x12E5028 Offset: 0x12E1028 VA: 0x12E5028 Slot: 26
	public override void SetLength(long value) { }

	// RVA: 0x12E5060 Offset: 0x12E1060 VA: 0x12E5060 Slot: 5
	public override bool get_CanRead() { }

	// RVA: 0x12E509C Offset: 0x12E109C VA: 0x12E509C Slot: 6
	public override bool get_CanSeek() { }

	// RVA: 0x12E50A4 Offset: 0x12E10A4 VA: 0x12E50A4 Slot: 8
	public override bool get_CanWrite() { }

	// RVA: 0x12E50E4 Offset: 0x12E10E4 VA: 0x12E50E4 Slot: 9
	public override long get_Length() { }

	// RVA: 0x12E511C Offset: 0x12E111C VA: 0x12E511C Slot: 10
	public override long get_Position() { }

	// RVA: 0x12E5154 Offset: 0x12E1154 VA: 0x12E5154 Slot: 11
	public override void set_Position(long value) { }
}


// Namespace: 
[UnmanagedFunctionPointer(2)]
private sealed class DeflateStreamNative.UnmanagedReadOrWrite : MulticastDelegate // TypeDefIndex: 3601
{
	// Methods

	// RVA: 0x12E5334 Offset: 0x12E1334 VA: 0x12E5334
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x12E5B10 Offset: 0x12E1B10 VA: 0x12E5B10 Slot: 12
	public virtual int Invoke(IntPtr buffer, int length, IntPtr data) { }
}


// Namespace: 
private sealed class DeflateStreamNative.SafeDeflateStreamHandle : SafeHandle // TypeDefIndex: 3602
{
	// Properties
	public override bool IsInvalid { get; }

	// Methods

	// RVA: 0x12E5B24 Offset: 0x12E1B24 VA: 0x12E5B24 Slot: 5
	public override bool get_IsInvalid() { }

	// RVA: 0x12E5AFC Offset: 0x12E1AFC VA: 0x12E5AFC
	private void .ctor() { }

	// RVA: 0x12E5B34 Offset: 0x12E1B34 VA: 0x12E5B34 Slot: 7
	protected override bool ReleaseHandle() { }
}


// Namespace: System.IO.Compression
internal class DeflateStreamNative // TypeDefIndex: 3603
{
	// Fields
	private DeflateStreamNative.UnmanagedReadOrWrite feeder; // 0x10
	private Stream base_stream; // 0x18
	private DeflateStreamNative.SafeDeflateStreamHandle z_stream; // 0x20
	private GCHandle data; // 0x28
	private bool disposed; // 0x30
	private byte[] io_buffer; // 0x38
	private Exception last_error; // 0x40

	// Methods

	// RVA: 0x12E532C Offset: 0x12E132C VA: 0x12E532C
	private void .ctor() { }

	// RVA: 0x12E3C3C Offset: 0x12DFC3C VA: 0x12E3C3C
	public static DeflateStreamNative Create(Stream compressedStream, CompressionMode mode, bool gzip) { }

	// RVA: 0x12E5464 Offset: 0x12E1464 VA: 0x12E5464 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x12E3EC4 Offset: 0x12DFEC4 VA: 0x12E3EC4
	public void Dispose(bool disposing) { }

	// RVA: 0x12E4594 Offset: 0x12E0594 VA: 0x12E4594
	public void Flush() { }

	// RVA: 0x12E4010 Offset: 0x12E0010 VA: 0x12E4010
	public int ReadZStream(IntPtr buffer, int length) { }

	// RVA: 0x12E429C Offset: 0x12E029C VA: 0x12E429C
	public void WriteZStream(IntPtr buffer, int length) { }

	[MonoPInvokeCallback(typeof(DeflateStreamNative.UnmanagedReadOrWrite))]
	// RVA: 0x12E51B4 Offset: 0x12E11B4 VA: 0x12E51B4
	private static int UnmanagedRead(IntPtr buffer, int length, IntPtr data) { }

	// RVA: 0x12E5784 Offset: 0x12E1784 VA: 0x12E5784
	private int UnmanagedRead(IntPtr buffer, int length) { }

	[MonoPInvokeCallback(typeof(DeflateStreamNative.UnmanagedReadOrWrite))]
	// RVA: 0x12E5270 Offset: 0x12E1270 VA: 0x12E5270
	private static int UnmanagedWrite(IntPtr buffer, int length, IntPtr data) { }

	// RVA: 0x12E5928 Offset: 0x12E1928 VA: 0x12E5928
	private int UnmanagedWrite(IntPtr buffer, int length) { }

	// RVA: 0x12E5560 Offset: 0x12E1560 VA: 0x12E5560
	private void CheckResult(int result, string where) { }

	// RVA: 0x12E53C0 Offset: 0x12E13C0 VA: 0x12E53C0
	private static extern DeflateStreamNative.SafeDeflateStreamHandle CreateZStream(CompressionMode compress, bool gzip, DeflateStreamNative.UnmanagedReadOrWrite feeder, IntPtr data) { }

	// RVA: 0x12E5B0C Offset: 0x12E1B0C VA: 0x12E5B0C
	private static extern int CloseZStream(IntPtr stream) { }

	// RVA: 0x12E54FC Offset: 0x12E14FC VA: 0x12E54FC
	private static extern int Flush(DeflateStreamNative.SafeDeflateStreamHandle stream) { }

	// RVA: 0x12E568C Offset: 0x12E168C VA: 0x12E568C
	private static extern int ReadZStream(DeflateStreamNative.SafeDeflateStreamHandle stream, IntPtr buffer, int length) { }

	// RVA: 0x12E5708 Offset: 0x12E1708 VA: 0x12E5708
	private static extern int WriteZStream(DeflateStreamNative.SafeDeflateStreamHandle stream, IntPtr buffer, int length) { }
}


// Namespace: 
[Flags]
private enum ContextAwareResult.StateFlags // TypeDefIndex: 3604
{
	// Fields
	public byte value__; // 0x0
	public const ContextAwareResult.StateFlags None = 0;
	public const ContextAwareResult.StateFlags CaptureIdentity = 1;
	public const ContextAwareResult.StateFlags CaptureContext = 2;
	public const ContextAwareResult.StateFlags ThreadSafeContextCopy = 4;
	public const ContextAwareResult.StateFlags PostBlockStarted = 8;
	public const ContextAwareResult.StateFlags PostBlockFinished = 16;
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class ContextAwareResult.<>c // TypeDefIndex: 3605
{
	// Fields
	public static readonly ContextAwareResult.<>c <>9; // 0x0
	public static ContextCallback <>9__17_0; // 0x8

	// Methods

	// RVA: 0x12E6194 Offset: 0x12E2194 VA: 0x12E6194
	private static void .cctor() { }

	// RVA: 0x12E61F0 Offset: 0x12E21F0 VA: 0x12E61F0
	public void .ctor() { }

	// RVA: 0x12E61F8 Offset: 0x12E21F8 VA: 0x12E61F8
	internal void <Complete>b__17_0(object s) { }
}


// Namespace: System.Net
internal class ContextAwareResult : LazyAsyncResult // TypeDefIndex: 3606
{
	// Fields
	private ExecutionContext _context; // 0x40
	private object _lock; // 0x48
	private ContextAwareResult.StateFlags _flags; // 0x50

	// Methods

	// RVA: 0x12E5BBC Offset: 0x12E1BBC VA: 0x12E5BBC
	internal void .ctor(object myObject, object myState, AsyncCallback myCallBack) { }

	// RVA: 0x12E5BC4 Offset: 0x12E1BC4 VA: 0x12E5BC4
	internal void .ctor(bool captureIdentity, bool forceCaptureContext, object myObject, object myState, AsyncCallback myCallBack) { }

	// RVA: 0x12E5C14 Offset: 0x12E1C14 VA: 0x12E5C14
	internal void .ctor(bool captureIdentity, bool forceCaptureContext, bool threadSafeContextCopy, object myObject, object myState, AsyncCallback myCallBack) { }

	// RVA: 0x12E5C8C Offset: 0x12E1C8C VA: 0x12E5C8C
	internal object StartPostingAsyncOp() { }

	// RVA: 0x12E5C94 Offset: 0x12E1C94 VA: 0x12E5C94
	internal object StartPostingAsyncOp(bool lockCapture) { }

	// RVA: 0x12E5D68 Offset: 0x12E1D68 VA: 0x12E5D68
	internal bool FinishPostingAsyncOp() { }

	// RVA: 0x12E5EFC Offset: 0x12E1EFC VA: 0x12E5EFC Slot: 9
	protected override void Cleanup() { }

	// RVA: 0x12E5DA8 Offset: 0x12E1DA8 VA: 0x12E5DA8
	private bool CaptureOrComplete(ref ExecutionContext cachedContext, bool returnContext) { }

	// RVA: 0x12E5F68 Offset: 0x12E1F68 VA: 0x12E5F68 Slot: 8
	protected override void Complete(IntPtr userToken) { }

	// RVA: 0x12E6138 Offset: 0x12E2138 VA: 0x12E6138
	private void CompleteCallback() { }
}


// Namespace: System.Net
internal static class HttpStatusDescription // TypeDefIndex: 3607
{
	// Methods

	// RVA: 0x12E6278 Offset: 0x12E2278 VA: 0x12E6278
	internal static string Get(HttpStatusCode code) { }

	// RVA: 0x12E627C Offset: 0x12E227C VA: 0x12E627C
	internal static string Get(int code) { }
}


// Namespace: System.Net
internal static class HttpValidationHelpers // TypeDefIndex: 3608
{
	// Fields
	private static readonly char[] s_httpTrimCharacters; // 0x0

	// Methods

	// RVA: 0x12E6914 Offset: 0x12E2914 VA: 0x12E6914
	public static string CheckBadHeaderValueChars(string value) { }

	// RVA: 0x12E6AF8 Offset: 0x12E2AF8 VA: 0x12E6AF8
	public static bool IsInvalidMethodOrHeaderString(string stringValue) { }

	// RVA: 0x12E6BF8 Offset: 0x12E2BF8 VA: 0x12E6BF8
	private static void .cctor() { }
}


// Namespace: 
public class NetEventSource.Keywords // TypeDefIndex: 3609
{
	// Fields
	public const EventKeywords Default = 1;
	public const EventKeywords Debug = 2;
	public const EventKeywords EnterExit = 4;
}


// Namespace: System.Net
internal sealed class NetEventSource : EventSource // TypeDefIndex: 3610
{
	// Fields
	public static readonly NetEventSource Log; // 0x0

	// Properties
	public static bool IsEnabled { get; }

	// Methods

	// RVA: 0x12E6134 Offset: 0x12E2134 VA: 0x12E6134
	public static void Info(object thisOrContextObject, FormattableString formattableString, string memberName) { }

	// RVA: 0x12E5D64 Offset: 0x12E1D64 VA: 0x12E5D64
	public static void Fail(object thisOrContextObject, object message, string memberName) { }

	// RVA: 0x12E5F60 Offset: 0x12E1F60 VA: 0x12E5F60
	public static bool get_IsEnabled() { }

	// RVA: 0x12E6C8C Offset: 0x12E2C8C VA: 0x12E6C8C
	public void .ctor() { }

	// RVA: 0x12E6C94 Offset: 0x12E2C94 VA: 0x12E6C94
	private static void .cctor() { }
}


// Namespace: System.Net
internal static class TcpValidationHelpers // TypeDefIndex: 3611
{
	// Methods

	// RVA: 0x12E6CF0 Offset: 0x12E2CF0 VA: 0x12E6CF0
	public static bool ValidatePortNumber(int port) { }
}


// Namespace: System.Net
internal class TlsStream : NetworkStream // TypeDefIndex: 3612
{
	// Fields
	private SslStream _sslStream; // 0x48
	private string _host; // 0x50
	private X509CertificateCollection _clientCertificates; // 0x58

	// Methods

	// RVA: 0x12E6CFC Offset: 0x12E2CFC VA: 0x12E6CFC
	public void .ctor(NetworkStream stream, Socket socket, string host, X509CertificateCollection clientCertificates) { }

	// RVA: 0x12E6DC8 Offset: 0x12E2DC8 VA: 0x12E6DC8
	public void AuthenticateAsClient() { }

	// RVA: 0x12E6E58 Offset: 0x12E2E58 VA: 0x12E6E58
	public IAsyncResult BeginAuthenticateAsClient(AsyncCallback asyncCallback, object state) { }

	// RVA: 0x12E6F00 Offset: 0x12E2F00 VA: 0x12E6F00
	public void EndAuthenticateAsClient(IAsyncResult asyncResult) { }

	// RVA: 0x12E6F24 Offset: 0x12E2F24 VA: 0x12E6F24 Slot: 21
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int size, AsyncCallback callback, object state) { }

	// RVA: 0x12E6F48 Offset: 0x12E2F48 VA: 0x12E6F48 Slot: 22
	public override void EndWrite(IAsyncResult result) { }

	// RVA: 0x12E6F6C Offset: 0x12E2F6C VA: 0x12E6F6C Slot: 30
	public override void Write(byte[] buffer, int offset, int size) { }

	// RVA: 0x12E6F90 Offset: 0x12E2F90 VA: 0x12E6F90 Slot: 27
	public override int Read(byte[] buffer, int offset, int size) { }

	// RVA: 0x12E6FB4 Offset: 0x12E2FB4 VA: 0x12E6FB4 Slot: 17
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state) { }

	// RVA: 0x12E6FD8 Offset: 0x12E2FD8 VA: 0x12E6FD8 Slot: 18
	public override int EndRead(IAsyncResult asyncResult) { }

	// RVA: 0x12E6FFC Offset: 0x12E2FFC VA: 0x12E6FFC Slot: 14
	public override void Close() { }
}


// Namespace: System.Net
public enum HttpStatusCode // TypeDefIndex: 3613
{
	// Fields
	public int value__; // 0x0
	public const HttpStatusCode Continue = 100;
	public const HttpStatusCode SwitchingProtocols = 101;
	public const HttpStatusCode Processing = 102;
	public const HttpStatusCode EarlyHints = 103;
	public const HttpStatusCode OK = 200;
	public const HttpStatusCode Created = 201;
	public const HttpStatusCode Accepted = 202;
	public const HttpStatusCode NonAuthoritativeInformation = 203;
	public const HttpStatusCode NoContent = 204;
	public const HttpStatusCode ResetContent = 205;
	public const HttpStatusCode PartialContent = 206;
	public const HttpStatusCode MultiStatus = 207;
	public const HttpStatusCode AlreadyReported = 208;
	public const HttpStatusCode IMUsed = 226;
	public const HttpStatusCode MultipleChoices = 300;
	public const HttpStatusCode Ambiguous = 300;
	public const HttpStatusCode MovedPermanently = 301;
	public const HttpStatusCode Moved = 301;
	public const HttpStatusCode Found = 302;
	public const HttpStatusCode Redirect = 302;
	public const HttpStatusCode SeeOther = 303;
	public const HttpStatusCode RedirectMethod = 303;
	public const HttpStatusCode NotModified = 304;
	public const HttpStatusCode UseProxy = 305;
	public const HttpStatusCode Unused = 306;
	public const HttpStatusCode TemporaryRedirect = 307;
	public const HttpStatusCode RedirectKeepVerb = 307;
	public const HttpStatusCode PermanentRedirect = 308;
	public const HttpStatusCode BadRequest = 400;
	public const HttpStatusCode Unauthorized = 401;
	public const HttpStatusCode PaymentRequired = 402;
	public const HttpStatusCode Forbidden = 403;
	public const HttpStatusCode NotFound = 404;
	public const HttpStatusCode MethodNotAllowed = 405;
	public const HttpStatusCode NotAcceptable = 406;
	public const HttpStatusCode ProxyAuthenticationRequired = 407;
	public const HttpStatusCode RequestTimeout = 408;
	public const HttpStatusCode Conflict = 409;
	public const HttpStatusCode Gone = 410;
	public const HttpStatusCode LengthRequired = 411;
	public const HttpStatusCode PreconditionFailed = 412;
	public const HttpStatusCode RequestEntityTooLarge = 413;
	public const HttpStatusCode RequestUriTooLong = 414;
	public const HttpStatusCode UnsupportedMediaType = 415;
	public const HttpStatusCode RequestedRangeNotSatisfiable = 416;
	public const HttpStatusCode ExpectationFailed = 417;
	public const HttpStatusCode MisdirectedRequest = 421;
	public const HttpStatusCode UnprocessableEntity = 422;
	public const HttpStatusCode Locked = 423;
	public const HttpStatusCode FailedDependency = 424;
	public const HttpStatusCode UpgradeRequired = 426;
	public const HttpStatusCode PreconditionRequired = 428;
	public const HttpStatusCode TooManyRequests = 429;
	public const HttpStatusCode RequestHeaderFieldsTooLarge = 431;
	public const HttpStatusCode UnavailableForLegalReasons = 451;
	public const HttpStatusCode InternalServerError = 500;
	public const HttpStatusCode NotImplemented = 501;
	public const HttpStatusCode BadGateway = 502;
	public const HttpStatusCode ServiceUnavailable = 503;
	public const HttpStatusCode GatewayTimeout = 504;
	public const HttpStatusCode HttpVersionNotSupported = 505;
	public const HttpStatusCode VariantAlsoNegotiates = 506;
	public const HttpStatusCode InsufficientStorage = 507;
	public const HttpStatusCode LoopDetected = 508;
	public const HttpStatusCode NotExtended = 510;
	public const HttpStatusCode NetworkAuthenticationRequired = 511;
}


// Namespace: System.Net
public class HttpVersion // TypeDefIndex: 3614
{
	// Fields
	public static readonly Version Unknown; // 0x0
	public static readonly Version Version10; // 0x8
	public static readonly Version Version11; // 0x10
	public static readonly Version Version20; // 0x18

	// Methods

	// RVA: 0x12E7030 Offset: 0x12E3030 VA: 0x12E7030
	private static void .cctor() { }
}


// Namespace: 
private sealed class IPAddress.ReadOnlyIPAddress : IPAddress // TypeDefIndex: 3615
{
	// Methods

	// RVA: 0x12E8238 Offset: 0x12E4238 VA: 0x12E8238
	public void .ctor(long newAddress) { }
}


// Namespace: System.Net
[Serializable]
public class IPAddress // TypeDefIndex: 3616
{
	// Fields
	public static readonly IPAddress Any; // 0x0
	public static readonly IPAddress Loopback; // 0x8
	public static readonly IPAddress Broadcast; // 0x10
	public static readonly IPAddress None; // 0x18
	public static readonly IPAddress IPv6Any; // 0x20
	public static readonly IPAddress IPv6Loopback; // 0x28
	public static readonly IPAddress IPv6None; // 0x30
	private uint _addressOrScopeId; // 0x10
	private readonly ushort[] _numbers; // 0x18
	private string _toString; // 0x20
	private int _hashCode; // 0x28

	// Properties
	private bool IsIPv4 { get; }
	private bool IsIPv6 { get; }
	private uint PrivateAddress { set; }
	private uint PrivateScopeId { set; }
	public AddressFamily AddressFamily { get; }
	public long ScopeId { get; }

	// Methods

	// RVA: 0x12E7120 Offset: 0x12E3120 VA: 0x12E7120
	private bool get_IsIPv4() { }

	// RVA: 0x12E7130 Offset: 0x12E3130 VA: 0x12E7130
	private bool get_IsIPv6() { }

	// RVA: 0x12E7140 Offset: 0x12E3140 VA: 0x12E7140
	private void set_PrivateAddress(uint value) { }

	// RVA: 0x12E7150 Offset: 0x12E3150 VA: 0x12E7150
	private void set_PrivateScopeId(uint value) { }

	// RVA: 0x12E7160 Offset: 0x12E3160 VA: 0x12E7160
	public void .ctor(long newAddress) { }

	// RVA: 0x12E71E0 Offset: 0x12E31E0 VA: 0x12E71E0
	public void .ctor(byte[] address, long scopeid) { }

	// RVA: 0x12E72A8 Offset: 0x12E32A8 VA: 0x12E72A8
	public void .ctor(ReadOnlySpan<byte> address, long scopeid) { }

	// RVA: 0x12E7418 Offset: 0x12E3418 VA: 0x12E7418
	internal void .ctor(ushort* numbers, int numbersLength, uint scopeid) { }

	// RVA: 0x12E74D0 Offset: 0x12E34D0 VA: 0x12E74D0
	private void .ctor(ushort[] numbers, uint scopeid) { }

	// RVA: 0x12E7504 Offset: 0x12E3504 VA: 0x12E7504
	public static bool TryParse(string ipString, out IPAddress address) { }

	// RVA: 0x12E7574 Offset: 0x12E3574 VA: 0x12E7574
	public static IPAddress Parse(string ipString) { }

	// RVA: 0x12E7610 Offset: 0x12E3610 VA: 0x12E7610
	public bool TryWriteBytes(Span<byte> destination, out int bytesWritten) { }

	// RVA: 0x12E76DC Offset: 0x12E36DC VA: 0x12E76DC
	private void WriteIPv6Bytes(Span<byte> destination) { }

	// RVA: 0x12E7768 Offset: 0x12E3768 VA: 0x12E7768
	private void WriteIPv4Bytes(Span<byte> destination) { }

	// RVA: 0x12E77B4 Offset: 0x12E37B4 VA: 0x12E77B4
	public byte[] GetAddressBytes() { }

	// RVA: 0x12E78FC Offset: 0x12E38FC VA: 0x12E78FC
	public AddressFamily get_AddressFamily() { }

	// RVA: 0x12E7914 Offset: 0x12E3914 VA: 0x12E7914
	public long get_ScopeId() { }

	// RVA: 0x12E7964 Offset: 0x12E3964 VA: 0x12E7964 Slot: 3
	public override string ToString() { }

	// RVA: 0x12E79A4 Offset: 0x12E39A4 VA: 0x12E79A4
	public static bool IsLoopback(IPAddress address) { }

	// RVA: 0x12E7A6C Offset: 0x12E3A6C VA: 0x12E7A6C
	internal bool Equals(object comparandObj, bool compareScopeId) { }

	// RVA: 0x12E7BA0 Offset: 0x12E3BA0 VA: 0x12E7BA0 Slot: 0
	public override bool Equals(object comparand) { }

	// RVA: 0x12E7BA8 Offset: 0x12E3BA8 VA: 0x12E7BA8 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x12E7ED8 Offset: 0x12E3ED8 VA: 0x12E7ED8
	public IPAddress MapToIPv6() { }

	// RVA: 0x12E725C Offset: 0x12E325C VA: 0x12E725C
	private static byte[] ThrowAddressNullException() { }

	// RVA: 0x12E7FB4 Offset: 0x12E3FB4 VA: 0x12E7FB4
	private static void .cctor() { }
}


// Namespace: System.Net
internal class IPAddressParser // TypeDefIndex: 3617
{
	// Methods

	// RVA: 0x12E82A0 Offset: 0x12E42A0 VA: 0x12E82A0
	internal static IPAddress Parse(ReadOnlySpan<char> ipSpan, bool tryParse) { }

	// RVA: 0x12E8730 Offset: 0x12E4730 VA: 0x12E8730
	internal static string IPv4AddressToString(uint address) { }

	// RVA: 0x12E882C Offset: 0x12E482C VA: 0x12E882C
	internal static void IPv4AddressToString(uint address, StringBuilder destination) { }

	// RVA: 0x12E8790 Offset: 0x12E4790 VA: 0x12E8790
	private static int IPv4AddressToStringHelper(uint address, char* addressString) { }

	// RVA: 0x12E8954 Offset: 0x12E4954 VA: 0x12E8954
	internal static string IPv6AddressToString(ushort[] address, uint scopeId) { }

	// RVA: 0x12E8968 Offset: 0x12E4968 VA: 0x12E8968
	internal static StringBuilder IPv6AddressToStringHelper(ushort[] address, uint scopeId) { }

	// RVA: 0x12E889C Offset: 0x12E489C VA: 0x12E889C
	private static void FormatIPv4AddressNumber(int number, char* addressString, ref int offset) { }

	// RVA: 0x12E868C Offset: 0x12E468C VA: 0x12E868C
	public static bool Ipv4StringToAddress(ReadOnlySpan<char> ipSpan, out long address) { }

	// RVA: 0x12E8524 Offset: 0x12E4524 VA: 0x12E8524
	public static bool Ipv6StringToAddress(ReadOnlySpan<char> ipSpan, ushort* numbers, int numbersLength, out uint scope) { }

	// RVA: 0x12E8A88 Offset: 0x12E4A88 VA: 0x12E8A88
	private static void AppendSections(ushort[] address, int fromInclusive, int toExclusive, StringBuilder buffer) { }

	// RVA: 0x12E8CA0 Offset: 0x12E4CA0 VA: 0x12E8CA0
	private static void AppendHex(ushort value, StringBuilder buffer) { }

	// RVA: 0x12E8C6C Offset: 0x12E4C6C VA: 0x12E8C6C
	private static uint ExtractIPv4Address(ushort[] address) { }

	// RVA: 0x12E8D08 Offset: 0x12E4D08 VA: 0x12E8D08
	private static ushort Reverse(ushort number) { }
}


// Namespace: System.Net
[Serializable]
public class IPEndPoint : EndPoint // TypeDefIndex: 3618
{
	// Fields
	private IPAddress _address; // 0x10
	private int _port; // 0x18
	internal static IPEndPoint Any; // 0x0
	internal static IPEndPoint IPv6Any; // 0x8

	// Properties
	public override AddressFamily AddressFamily { get; }

	// Methods

	// RVA: 0x12E8D14 Offset: 0x12E4D14 VA: 0x12E8D14 Slot: 4
	public override AddressFamily get_AddressFamily() { }

	// RVA: 0x12E8D30 Offset: 0x12E4D30 VA: 0x12E8D30
	public void .ctor(IPAddress address, int port) { }

	// RVA: 0x12E8DF8 Offset: 0x12E4DF8 VA: 0x12E8DF8 Slot: 3
	public override string ToString() { }

	// RVA: 0x12E8EC4 Offset: 0x12E4EC4 VA: 0x12E8EC4 Slot: 5
	public override SocketAddress Serialize() { }

	// RVA: 0x12E8F84 Offset: 0x12E4F84 VA: 0x12E8F84 Slot: 6
	public override EndPoint Create(SocketAddress socketAddress) { }

	// RVA: 0x12E9230 Offset: 0x12E5230 VA: 0x12E9230 Slot: 0
	public override bool Equals(object comparand) { }

	// RVA: 0x12E92E4 Offset: 0x12E52E4 VA: 0x12E92E4 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x12E9314 Offset: 0x12E5314 VA: 0x12E9314
	private static void .cctor() { }
}


// Namespace: 
internal enum CommandStream.PipelineInstruction // TypeDefIndex: 3619
{
	// Fields
	public int value__; // 0x0
	public const CommandStream.PipelineInstruction Abort = 0;
	public const CommandStream.PipelineInstruction Advance = 1;
	public const CommandStream.PipelineInstruction Pause = 2;
	public const CommandStream.PipelineInstruction Reread = 3;
	public const CommandStream.PipelineInstruction GiveStream = 4;
}


// Namespace: 
[Flags]
internal enum CommandStream.PipelineEntryFlags // TypeDefIndex: 3620
{
	// Fields
	public int value__; // 0x0
	public const CommandStream.PipelineEntryFlags UserCommand = 1;
	public const CommandStream.PipelineEntryFlags GiveDataStream = 2;
	public const CommandStream.PipelineEntryFlags CreateDataConnection = 4;
	public const CommandStream.PipelineEntryFlags DontLogParameter = 8;
}


// Namespace: 
internal class CommandStream.PipelineEntry // TypeDefIndex: 3621
{
	// Fields
	internal string Command; // 0x10
	internal CommandStream.PipelineEntryFlags Flags; // 0x18

	// Methods

	// RVA: 0x12EB110 Offset: 0x12E7110 VA: 0x12EB110
	internal void .ctor(string command) { }

	// RVA: 0x12EB138 Offset: 0x12E7138 VA: 0x12EB138
	internal void .ctor(string command, CommandStream.PipelineEntryFlags flags) { }

	// RVA: 0x12EB168 Offset: 0x12E7168 VA: 0x12EB168
	internal bool HasFlag(CommandStream.PipelineEntryFlags flags) { }
}


// Namespace: System.Net
internal class CommandStream : NetworkStreamWrapper // TypeDefIndex: 3622
{
	// Fields
	private static readonly AsyncCallback s_writeCallbackDelegate; // 0x0
	private static readonly AsyncCallback s_readCallbackDelegate; // 0x8
	private bool _recoverableFailure; // 0x38
	protected WebRequest _request; // 0x40
	protected bool _isAsync; // 0x48
	private bool _aborted; // 0x49
	protected CommandStream.PipelineEntry[] _commands; // 0x50
	protected int _index; // 0x58
	private bool _doRead; // 0x5C
	private bool _doSend; // 0x5D
	private ResponseDescription _currentResponseDescription; // 0x60
	protected string _abortReason; // 0x68
	private string _buffer; // 0x70
	private Encoding _encoding; // 0x78
	private Decoder _decoder; // 0x80

	// Properties
	protected Encoding Encoding { set; }

	// Methods

	// RVA: 0x12E93DC Offset: 0x12E53DC VA: 0x12E93DC
	internal void .ctor(TcpClient client) { }

	// RVA: 0x12E94F4 Offset: 0x12E54F4 VA: 0x12E94F4 Slot: 33
	internal virtual void Abort(Exception e) { }

	// RVA: 0x12E96C0 Offset: 0x12E56C0 VA: 0x12E96C0 Slot: 15
	protected override void Dispose(bool disposing) { }

	// RVA: 0x12E9720 Offset: 0x12E5720 VA: 0x12E9720
	protected void InvokeRequestCallback(object obj) { }

	// RVA: 0x12E97A0 Offset: 0x12E57A0 VA: 0x12E97A0
	protected void MarkAsRecoverableFailure() { }

	// RVA: 0x12E97B8 Offset: 0x12E57B8 VA: 0x12E97B8
	internal Stream SubmitRequest(WebRequest request, bool isAsync, bool readInitalResponseOnConnect) { }

	// RVA: 0x12E9BAC Offset: 0x12E5BAC VA: 0x12E9BAC Slot: 34
	protected virtual void ClearState() { }

	// RVA: 0x12E9BBC Offset: 0x12E5BBC VA: 0x12E9BBC Slot: 35
	protected virtual CommandStream.PipelineEntry[] BuildCommandsList(WebRequest request) { }

	// RVA: 0x12E9BC4 Offset: 0x12E5BC4 VA: 0x12E9BC4
	protected Exception GenerateException(string message, WebExceptionStatus status, Exception innerException) { }

	// RVA: 0x12E9C50 Offset: 0x12E5C50 VA: 0x12E9C50
	protected Exception GenerateException(FtpStatusCode code, string statusDescription, Exception innerException) { }

	// RVA: 0x12E9838 Offset: 0x12E5838 VA: 0x12E9838
	protected void InitCommandPipeline(WebRequest request, CommandStream.PipelineEntry[] commands, bool isAsync) { }

	// RVA: 0x12E9D10 Offset: 0x12E5D10 VA: 0x12E9D10
	internal void CheckContinuePipeline() { }

	// RVA: 0x12E98CC Offset: 0x12E58CC VA: 0x12E98CC
	protected Stream ContinueCommandPipeline() { }

	// RVA: 0x12E9DCC Offset: 0x12E5DCC VA: 0x12E9DCC
	private bool PostSendCommandProcessing(ref Stream stream) { }

	// RVA: 0x12EA240 Offset: 0x12E6240 VA: 0x12EA240
	private bool PostReadCommandProcessing(ref Stream stream) { }

	// RVA: 0x12EA464 Offset: 0x12E6464 VA: 0x12EA464 Slot: 36
	protected virtual CommandStream.PipelineInstruction PipelineCallback(CommandStream.PipelineEntry entry, ResponseDescription response, bool timeout, ref Stream stream) { }

	// RVA: 0x12EA46C Offset: 0x12E646C VA: 0x12EA46C
	private static void ReadCallback(IAsyncResult asyncResult) { }

	// RVA: 0x12EACB4 Offset: 0x12E6CB4 VA: 0x12EACB4
	private static void WriteCallback(IAsyncResult asyncResult) { }

	// RVA: 0x12EAF68 Offset: 0x12E6F68 VA: 0x12EAF68
	protected void set_Encoding(Encoding value) { }

	// RVA: 0x12EAFA0 Offset: 0x12E6FA0 VA: 0x12EAFA0 Slot: 37
	protected virtual bool CheckValid(ResponseDescription response, ref int validThrough, ref int completeLength) { }

	// RVA: 0x12E9EFC Offset: 0x12E5EFC VA: 0x12E9EFC
	private ResponseDescription ReceiveCommandResponse() { }

	// RVA: 0x12EA768 Offset: 0x12E6768 VA: 0x12EA768
	private void ReceiveCommandResponseCallback(ReceiveState state, int bytesRead) { }

	// RVA: 0x12EB040 Offset: 0x12E7040 VA: 0x12EB040
	private static void .cctor() { }
}


// Namespace: System.Net
internal class ResponseDescription // TypeDefIndex: 3623
{
	// Fields
	internal bool Multiline; // 0x10
	internal int Status; // 0x14
	internal string StatusDescription; // 0x18
	internal StringBuilder StatusBuffer; // 0x20
	internal string StatusCodeString; // 0x28

	// Properties
	internal bool PositiveIntermediate { get; }
	internal bool PositiveCompletion { get; }
	internal bool TransientFailure { get; }
	internal bool PermanentFailure { get; }
	internal bool InvalidStatusCode { get; }

	// Methods

	// RVA: 0x12EB178 Offset: 0x12E7178 VA: 0x12EB178
	internal bool get_PositiveIntermediate() { }

	// RVA: 0x12EB18C Offset: 0x12E718C VA: 0x12EB18C
	internal bool get_PositiveCompletion() { }

	// RVA: 0x12EB1A0 Offset: 0x12E71A0 VA: 0x12EB1A0
	internal bool get_TransientFailure() { }

	// RVA: 0x12EB1B4 Offset: 0x12E71B4 VA: 0x12EB1B4
	internal bool get_PermanentFailure() { }

	// RVA: 0x12EB1C8 Offset: 0x12E71C8 VA: 0x12EB1C8
	internal bool get_InvalidStatusCode() { }

	// RVA: 0x12EB1DC Offset: 0x12E71DC VA: 0x12EB1DC
	public void .ctor() { }
}


// Namespace: System.Net
internal class ReceiveState // TypeDefIndex: 3624
{
	// Fields
	internal ResponseDescription Resp; // 0x10
	internal int ValidThrough; // 0x18
	internal byte[] Buffer; // 0x20
	internal CommandStream Connection; // 0x28

	// Methods

	// RVA: 0x12EAFA8 Offset: 0x12E6FA8 VA: 0x12EAFA8
	internal void .ctor(CommandStream connection) { }
}


// Namespace: System.Net
internal enum FtpLoginState // TypeDefIndex: 3625
{
	// Fields
	public byte value__; // 0x0
	public const FtpLoginState NotLoggedIn = 0;
	public const FtpLoginState LoggedIn = 1;
	public const FtpLoginState LoggedInButNeedsRelogin = 2;
	public const FtpLoginState ReloginFailed = 3;
}


// Namespace: 
private enum FtpControlStream.GetPathOption // TypeDefIndex: 3626
{
	// Fields
	public int value__; // 0x0
	public const FtpControlStream.GetPathOption Normal = 0;
	public const FtpControlStream.GetPathOption AssumeFilename = 1;
	public const FtpControlStream.GetPathOption AssumeNoFilename = 2;
}


// Namespace: 
[CompilerGenerated]
private sealed class FtpControlStream.<>c__DisplayClass31_0 // TypeDefIndex: 3627
{
	// Fields
	public FtpControlStream <>4__this; // 0x10
	public TlsStream tlsStream; // 0x18

	// Methods

	// RVA: 0x12EC9F8 Offset: 0x12E89F8 VA: 0x12EC9F8
	public void .ctor() { }

	// RVA: 0x12EF94C Offset: 0x12EB94C VA: 0x12EF94C
	internal void <PipelineCallback>b__0(IAsyncResult ar) { }
}


// Namespace: System.Net
internal class FtpControlStream : CommandStream // TypeDefIndex: 3628
{
	// Fields
	private Socket _dataSocket; // 0x88
	private IPEndPoint _passiveEndPoint; // 0x90
	private TlsStream _tlsStream; // 0x98
	private StringBuilder _bannerMessage; // 0xA0
	private StringBuilder _welcomeMessage; // 0xA8
	private StringBuilder _exitMessage; // 0xB0
	private WeakReference _credentials; // 0xB8
	private string _currentTypeSetting; // 0xC0
	private long _contentLength; // 0xC8
	private DateTime _lastModified; // 0xD0
	private bool _dataHandshakeStarted; // 0xD8
	private string _loginDirectory; // 0xE0
	private string _establishedServerDirectory; // 0xE8
	private string _requestedServerDirectory; // 0xF0
	private Uri _responseUri; // 0xF8
	private FtpLoginState _loginState; // 0x100
	internal FtpStatusCode StatusCode; // 0x104
	internal string StatusLine; // 0x108
	private static readonly AsyncCallback s_acceptCallbackDelegate; // 0x0
	private static readonly AsyncCallback s_connectCallbackDelegate; // 0x8
	private static readonly AsyncCallback s_SSLHandshakeCallback; // 0x10

	// Properties
	internal NetworkCredential Credentials { get; set; }
	internal string BannerMessage { get; }
	internal string WelcomeMessage { get; }
	internal string ExitMessage { get; }

	// Methods

	// RVA: 0x12EB244 Offset: 0x12E7244 VA: 0x12EB244
	internal NetworkCredential get_Credentials() { }

	// RVA: 0x12EB2EC Offset: 0x12E72EC VA: 0x12EB2EC
	internal void set_Credentials(NetworkCredential value) { }

	// RVA: 0x12EB36C Offset: 0x12E736C VA: 0x12EB36C
	internal void .ctor(TcpClient client) { }

	// RVA: 0x12EB3F8 Offset: 0x12E73F8 VA: 0x12EB3F8
	internal void AbortConnect() { }

	// RVA: 0x12EB484 Offset: 0x12E7484 VA: 0x12EB484
	private static void AcceptCallback(IAsyncResult asyncResult) { }

	// RVA: 0x12EB880 Offset: 0x12E7880 VA: 0x12EB880
	private static void ConnectCallback(IAsyncResult asyncResult) { }

	// RVA: 0x12EBA30 Offset: 0x12E7A30 VA: 0x12EBA30
	private static void SSLHandshakeCallback(IAsyncResult asyncResult) { }

	// RVA: 0x12EBBE0 Offset: 0x12E7BE0 VA: 0x12EBBE0
	private CommandStream.PipelineInstruction QueueOrCreateFtpDataStream(ref Stream stream) { }

	// RVA: 0x12EC124 Offset: 0x12E8124 VA: 0x12EC124 Slot: 34
	protected override void ClearState() { }

	// RVA: 0x12EC1B4 Offset: 0x12E81B4 VA: 0x12EC1B4 Slot: 36
	protected override CommandStream.PipelineInstruction PipelineCallback(CommandStream.PipelineEntry entry, ResponseDescription response, bool timeout, ref Stream stream) { }

	// RVA: 0x12ED978 Offset: 0x12E9978 VA: 0x12ED978 Slot: 35
	protected override CommandStream.PipelineEntry[] BuildCommandsList(WebRequest req) { }

	// RVA: 0x12ECA00 Offset: 0x12E8A00 VA: 0x12ECA00
	private CommandStream.PipelineInstruction QueueOrCreateDataConection(CommandStream.PipelineEntry entry, ResponseDescription response, bool timeout, ref Stream stream, out bool isSocketReady) { }

	// RVA: 0x12EE818 Offset: 0x12EA818 VA: 0x12EE818
	private static void GetPathInfo(FtpControlStream.GetPathOption pathOption, Uri uri, out string path, out string directory, out string filename) { }

	// RVA: 0x12EF1D8 Offset: 0x12EB1D8 VA: 0x12EF1D8
	private string FormatAddress(IPAddress address, int Port) { }

	// RVA: 0x12EF304 Offset: 0x12EB304 VA: 0x12EF304
	private string FormatAddressV6(IPAddress address, int port) { }

	// RVA: 0x12EF414 Offset: 0x12EB414 VA: 0x12EF414
	internal string get_BannerMessage() { }

	// RVA: 0x12EF42C Offset: 0x12EB42C VA: 0x12EF42C
	internal string get_WelcomeMessage() { }

	// RVA: 0x12EF444 Offset: 0x12EB444 VA: 0x12EF444
	internal string get_ExitMessage() { }

	// RVA: 0x12ED410 Offset: 0x12E9410 VA: 0x12ED410
	private long GetContentLengthFrom213Response(string responseString) { }

	// RVA: 0x12ED548 Offset: 0x12E9548 VA: 0x12ED548
	private DateTime GetLastModifiedFrom213Response(string str) { }

	// RVA: 0x12ED0BC Offset: 0x12E90BC VA: 0x12ED0BC
	private void TryUpdateResponseUri(string str, FtpWebRequest request) { }

	// RVA: 0x12ECFC4 Offset: 0x12E8FC4 VA: 0x12ECFC4
	private void TryUpdateContentLength(string str) { }

	// RVA: 0x12ED8C8 Offset: 0x12E98C8 VA: 0x12ED8C8
	private string GetLoginDirectory(string str) { }

	// RVA: 0x12EED2C Offset: 0x12EAD2C VA: 0x12EED2C
	private int GetPortV4(string responseString) { }

	// RVA: 0x12EEF14 Offset: 0x12EAF14 VA: 0x12EEF14
	private int GetPortV6(string responseString) { }

	// RVA: 0x12EE9B8 Offset: 0x12EA9B8 VA: 0x12EE9B8
	private void CreateFtpListenerSocket(FtpWebRequest request) { }

	// RVA: 0x12EEB2C Offset: 0x12EAB2C VA: 0x12EEB2C
	private string GetPortCommandLine(FtpWebRequest request) { }

	// RVA: 0x12EE704 Offset: 0x12EA704 VA: 0x12EE704
	private string FormatFtpCommand(string command, string parameter) { }

	// RVA: 0x12EF0CC Offset: 0x12EB0CC VA: 0x12EF0CC
	protected Socket CreateFtpDataSocket(FtpWebRequest request, Socket templateSocket) { }

	// RVA: 0x12EF45C Offset: 0x12EB45C VA: 0x12EF45C Slot: 37
	protected override bool CheckValid(ResponseDescription response, ref int validThrough, ref int completeLength) { }

	// RVA: 0x12EBE68 Offset: 0x12E7E68 VA: 0x12EBE68
	private TriState IsFtpDataStreamWriteable() { }

	// RVA: 0x12EF838 Offset: 0x12EB838 VA: 0x12EF838
	private static void .cctor() { }
}


// Namespace: System.Net
internal class FtpDataStream : Stream, ICloseEx // TypeDefIndex: 3629
{
	// Fields
	private FtpWebRequest _request; // 0x28
	private NetworkStream _networkStream; // 0x30
	private bool _writeable; // 0x38
	private bool _readable; // 0x39
	private bool _isFullyRead; // 0x3A
	private bool _closing; // 0x3B

	// Properties
	public override bool CanRead { get; }
	public override bool CanSeek { get; }
	public override bool CanWrite { get; }
	public override long Length { get; }
	public override long Position { get; set; }
	public override bool CanTimeout { get; }
	public override int ReadTimeout { set; }
	public override int WriteTimeout { set; }

	// Methods

	// RVA: 0x12EBEEC Offset: 0x12E7EEC VA: 0x12EBEEC
	internal void .ctor(NetworkStream networkStream, FtpWebRequest request, TriState writeOnly) { }

	// RVA: 0x12EFA30 Offset: 0x12EBA30 VA: 0x12EFA30 Slot: 15
	protected override void Dispose(bool disposing) { }

	// RVA: 0x12EFBB8 Offset: 0x12EBBB8 VA: 0x12EFBB8 Slot: 33
	private void System.Net.ICloseEx.CloseEx(CloseExState closeState) { }

	// RVA: 0x12EFF9C Offset: 0x12EBF9C VA: 0x12EFF9C
	private void CheckError() { }

	// RVA: 0x12EFFDC Offset: 0x12EBFDC VA: 0x12EFFDC Slot: 5
	public override bool get_CanRead() { }

	// RVA: 0x12EFFE4 Offset: 0x12EBFE4 VA: 0x12EFFE4 Slot: 6
	public override bool get_CanSeek() { }

	// RVA: 0x12EFFEC Offset: 0x12EBFEC VA: 0x12EFFEC Slot: 8
	public override bool get_CanWrite() { }

	// RVA: 0x12EFFF4 Offset: 0x12EBFF4 VA: 0x12EFFF4 Slot: 9
	public override long get_Length() { }

	// RVA: 0x12F0014 Offset: 0x12EC014 VA: 0x12F0014 Slot: 10
	public override long get_Position() { }

	// RVA: 0x12F0034 Offset: 0x12EC034 VA: 0x12F0034 Slot: 11
	public override void set_Position(long value) { }

	// RVA: 0x12F0054 Offset: 0x12EC054 VA: 0x12F0054 Slot: 25
	public override long Seek(long offset, SeekOrigin origin) { }

	// RVA: 0x12F0120 Offset: 0x12EC120 VA: 0x12F0120 Slot: 27
	public override int Read(byte[] buffer, int offset, int size) { }

	// RVA: 0x12F0224 Offset: 0x12EC224 VA: 0x12F0224 Slot: 30
	public override void Write(byte[] buffer, int offset, int size) { }

	// RVA: 0x12F02FC Offset: 0x12EC2FC VA: 0x12F02FC
	private void AsyncReadCallback(IAsyncResult ar) { }

	// RVA: 0x12F05AC Offset: 0x12EC5AC VA: 0x12F05AC Slot: 17
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int size, AsyncCallback callback, object state) { }

	// RVA: 0x12F0744 Offset: 0x12EC744 VA: 0x12F0744 Slot: 18
	public override int EndRead(IAsyncResult ar) { }

	// RVA: 0x12F08E4 Offset: 0x12EC8E4 VA: 0x12F08E4 Slot: 21
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int size, AsyncCallback callback, object state) { }

	// RVA: 0x12F09D8 Offset: 0x12EC9D8 VA: 0x12F09D8 Slot: 22
	public override void EndWrite(IAsyncResult asyncResult) { }

	// RVA: 0x12F0A78 Offset: 0x12ECA78 VA: 0x12F0A78 Slot: 16
	public override void Flush() { }

	// RVA: 0x12F0A7C Offset: 0x12ECA7C VA: 0x12F0A7C Slot: 26
	public override void SetLength(long value) { }

	// RVA: 0x12F0AA0 Offset: 0x12ECAA0 VA: 0x12F0AA0 Slot: 7
	public override bool get_CanTimeout() { }

	// RVA: 0x12F0AA8 Offset: 0x12ECAA8 VA: 0x12F0AA8 Slot: 12
	public override void set_ReadTimeout(int value) { }

	// RVA: 0x12F0AC8 Offset: 0x12ECAC8 VA: 0x12F0AC8 Slot: 13
	public override void set_WriteTimeout(int value) { }

	// RVA: 0x12F0AEC Offset: 0x12ECAEC VA: 0x12F0AEC
	internal void SetSocketTimeoutOption(int timeout) { }
}


// Namespace: System.Net
internal enum FtpOperation // TypeDefIndex: 3630
{
	// Fields
	public int value__; // 0x0
	public const FtpOperation DownloadFile = 0;
	public const FtpOperation ListDirectory = 1;
	public const FtpOperation ListDirectoryDetails = 2;
	public const FtpOperation UploadFile = 3;
	public const FtpOperation UploadFileUnique = 4;
	public const FtpOperation AppendFile = 5;
	public const FtpOperation DeleteFile = 6;
	public const FtpOperation GetDateTimestamp = 7;
	public const FtpOperation GetFileSize = 8;
	public const FtpOperation Rename = 9;
	public const FtpOperation MakeDirectory = 10;
	public const FtpOperation RemoveDirectory = 11;
	public const FtpOperation PrintWorkingDirectory = 12;
	public const FtpOperation Other = 13;
}


// Namespace: System.Net
[Flags]
internal enum FtpMethodFlags // TypeDefIndex: 3631
{
	// Fields
	public int value__; // 0x0
	public const FtpMethodFlags None = 0;
	public const FtpMethodFlags IsDownload = 1;
	public const FtpMethodFlags IsUpload = 2;
	public const FtpMethodFlags TakesParameter = 4;
	public const FtpMethodFlags MayTakeParameter = 8;
	public const FtpMethodFlags DoesNotTakeParameter = 16;
	public const FtpMethodFlags ParameterIsDirectory = 32;
	public const FtpMethodFlags ShouldParseForResponseUri = 64;
	public const FtpMethodFlags HasHttpCommand = 128;
	public const FtpMethodFlags MustChangeWorkingDirectoryToPath = 256;
}


// Namespace: System.Net
internal class FtpMethodInfo // TypeDefIndex: 3632
{
	// Fields
	internal string Method; // 0x10
	internal FtpOperation Operation; // 0x18
	internal FtpMethodFlags Flags; // 0x1C
	internal string HttpCommand; // 0x20
	private static readonly FtpMethodInfo[] s_knownMethodInfo; // 0x0

	// Properties
	internal bool IsCommandOnly { get; }
	internal bool IsUpload { get; }
	internal bool IsDownload { get; }
	internal bool ShouldParseForResponseUri { get; }

	// Methods

	// RVA: 0x12F0B38 Offset: 0x12ECB38 VA: 0x12F0B38
	internal void .ctor(string method, FtpOperation operation, FtpMethodFlags flags, string httpCommand) { }

	// RVA: 0x12EE808 Offset: 0x12EA808 VA: 0x12EE808
	internal bool HasFlag(FtpMethodFlags flags) { }

	// RVA: 0x12EE9A8 Offset: 0x12EA9A8 VA: 0x12EE9A8
	internal bool get_IsCommandOnly() { }

	// RVA: 0x12EF820 Offset: 0x12EB820 VA: 0x12EF820
	internal bool get_IsUpload() { }

	// RVA: 0x12EF82C Offset: 0x12EB82C VA: 0x12EF82C
	internal bool get_IsDownload() { }

	// RVA: 0x12ED0B0 Offset: 0x12E90B0 VA: 0x12ED0B0
	internal bool get_ShouldParseForResponseUri() { }

	// RVA: 0x12F0B7C Offset: 0x12ECB7C VA: 0x12F0B7C
	internal static FtpMethodInfo GetMethodInfo(string method) { }

	// RVA: 0x12F0CDC Offset: 0x12ECCDC VA: 0x12F0CDC
	private static void .cctor() { }
}


// Namespace: 
private enum FtpWebRequest.RequestStage // TypeDefIndex: 3633
{
	// Fields
	public int value__; // 0x0
	public const FtpWebRequest.RequestStage CheckForError = 0;
	public const FtpWebRequest.RequestStage RequestStarted = 1;
	public const FtpWebRequest.RequestStage WriteReady = 2;
	public const FtpWebRequest.RequestStage ReadReady = 3;
	public const FtpWebRequest.RequestStage ReleaseConnection = 4;
}


// Namespace: 
[CompilerGenerated]
private struct FtpWebRequest.<CreateConnectionAsync>d__86 : IAsyncStateMachine // TypeDefIndex: 3634
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncVoidMethodBuilder <>t__builder; // 0x8
	public FtpWebRequest <>4__this; // 0x28
	private TcpClient <client>5__2; // 0x30
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter <>u__1; // 0x38

	// Methods

	// RVA: 0x12F5A9C Offset: 0x12F1A9C VA: 0x12F5A9C Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x12F5D9C Offset: 0x12F1D9C VA: 0x12F5D9C Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class FtpWebRequest.<>c // TypeDefIndex: 3635
{
	// Fields
	public static readonly FtpWebRequest.<>c <>9; // 0x0
	public static Func<X509CertificateCollection> <>9__114_0; // 0x8

	// Methods

	// RVA: 0x12F5DA8 Offset: 0x12F1DA8 VA: 0x12F5DA8
	private static void .cctor() { }

	// RVA: 0x12F5E04 Offset: 0x12F1E04 VA: 0x12F5E04
	public void .ctor() { }

	// RVA: 0x12F5E0C Offset: 0x12F1E0C VA: 0x12F5E0C
	internal X509CertificateCollection <get_ClientCertificates>b__114_0() { }
}


// Namespace: System.Net
public sealed class FtpWebRequest : WebRequest // TypeDefIndex: 3636
{
	// Fields
	private object _syncObject; // 0x38
	private ICredentials _authInfo; // 0x40
	private readonly Uri _uri; // 0x48
	private FtpMethodInfo _methodInfo; // 0x50
	private string _renameTo; // 0x58
	private bool _getRequestStreamStarted; // 0x60
	private bool _getResponseStarted; // 0x61
	private DateTime _startTime; // 0x68
	private int _timeout; // 0x70
	private int _remainingTimeout; // 0x74
	private long _contentLength; // 0x78
	private long _contentOffset; // 0x80
	private X509CertificateCollection _clientCertificates; // 0x88
	private bool _passive; // 0x90
	private bool _binary; // 0x91
	private bool _async; // 0x92
	private bool _aborted; // 0x93
	private bool _timedOut; // 0x94
	private Exception _exception; // 0x98
	private TimerThread.Queue _timerQueue; // 0xA0
	private TimerThread.Callback _timerCallback; // 0xA8
	private bool _enableSsl; // 0xB0
	private FtpControlStream _connection; // 0xB8
	private Stream _stream; // 0xC0
	private FtpWebRequest.RequestStage _requestStage; // 0xC8
	private bool _onceFailed; // 0xCC
	private WebHeaderCollection _ftpRequestHeaders; // 0xD0
	private FtpWebResponse _ftpWebResponse; // 0xD8
	private int _readWriteTimeout; // 0xE0
	private ContextAwareResult _writeAsyncResult; // 0xE8
	private LazyAsyncResult _readAsyncResult; // 0xF0
	private LazyAsyncResult _requestCompleteAsyncResult; // 0xF8
	private static readonly NetworkCredential s_defaultFtpNetworkCredential; // 0x0
	private static readonly TimerThread.Queue s_DefaultTimerQueue; // 0x8

	// Properties
	public override string Method { get; set; }
	public override ICredentials Credentials { get; set; }
	public override Uri RequestUri { get; }
	public override long ContentLength { get; set; }
	public override IWebProxy Proxy { get; set; }
	private TimerThread.Queue TimerQueue { get; }
	public override RequestCachePolicy CachePolicy { set; }
	public X509CertificateCollection ClientCertificates { get; }
	public override WebHeaderCollection Headers { get; set; }
	public override string ContentType { set; }
	public override bool UseDefaultCredentials { get; }
	private bool InUse { get; }

	// Methods

	// RVA: 0x12F12A4 Offset: 0x12ED2A4 VA: 0x12F12A4 Slot: 7
	public override string get_Method() { }

	// RVA: 0x12F12C0 Offset: 0x12ED2C0 VA: 0x12F12C0 Slot: 8
	public override void set_Method(string value) { }

	// RVA: 0x12F1478 Offset: 0x12ED478 VA: 0x12F1478 Slot: 15
	public override ICredentials get_Credentials() { }

	// RVA: 0x12F1480 Offset: 0x12ED480 VA: 0x12F1480 Slot: 16
	public override void set_Credentials(ICredentials value) { }

	// RVA: 0x12F15C4 Offset: 0x12ED5C4 VA: 0x12F15C4 Slot: 9
	public override Uri get_RequestUri() { }

	// RVA: 0x12F15CC Offset: 0x12ED5CC VA: 0x12F15CC Slot: 12
	public override long get_ContentLength() { }

	// RVA: 0x12F15D4 Offset: 0x12ED5D4 VA: 0x12F15D4 Slot: 13
	public override void set_ContentLength(long value) { }

	// RVA: 0x12F15DC Offset: 0x12ED5DC VA: 0x12F15DC Slot: 18
	public override IWebProxy get_Proxy() { }

	// RVA: 0x12F15E4 Offset: 0x12ED5E4 VA: 0x12F15E4 Slot: 19
	public override void set_Proxy(IWebProxy value) { }

	// RVA: 0x12F1648 Offset: 0x12ED648 VA: 0x12F1648
	internal void .ctor(Uri uri) { }

	// RVA: 0x12F1A30 Offset: 0x12EDA30 VA: 0x12F1A30 Slot: 20
	public override WebResponse GetResponse() { }

	// RVA: 0x12F3050 Offset: 0x12EF050 VA: 0x12F3050 Slot: 21
	public override IAsyncResult BeginGetResponse(AsyncCallback callback, object state) { }

	// RVA: 0x12F3598 Offset: 0x12EF598 VA: 0x12F3598 Slot: 22
	public override WebResponse EndGetResponse(IAsyncResult asyncResult) { }

	// RVA: 0x12F3818 Offset: 0x12EF818 VA: 0x12F3818 Slot: 23
	public override IAsyncResult BeginGetRequestStream(AsyncCallback callback, object state) { }

	// RVA: 0x12F3BFC Offset: 0x12EFBFC VA: 0x12F3BFC Slot: 24
	public override Stream EndGetRequestStream(IAsyncResult asyncResult) { }

	// RVA: 0x12F23C0 Offset: 0x12EE3C0 VA: 0x12F23C0
	private void SubmitRequest(bool isAsync) { }

	// RVA: 0x12F47A8 Offset: 0x12F07A8 VA: 0x12F47A8
	private Exception TranslateConnectException(Exception e) { }

	[AsyncStateMachine(typeof(FtpWebRequest.<CreateConnectionAsync>d__86))]
	// RVA: 0x12F3EE0 Offset: 0x12EFEE0 VA: 0x12F3EE0
	private void CreateConnectionAsync() { }

	// RVA: 0x12F3F70 Offset: 0x12EFF70 VA: 0x12F3F70
	private FtpControlStream CreateConnection() { }

	// RVA: 0x12F4120 Offset: 0x12F0120 VA: 0x12F4120
	private Stream TimedSubmitRequestHelper(bool isAsync) { }

	// RVA: 0x12F4904 Offset: 0x12F0904 VA: 0x12F4904
	private void TimerCallback(TimerThread.Timer timer, int timeNoticed, object context) { }

	// RVA: 0x12F4898 Offset: 0x12F0898 VA: 0x12F4898
	private TimerThread.Queue get_TimerQueue() { }

	// RVA: 0x12F4530 Offset: 0x12F0530 VA: 0x12F4530
	private bool AttemptedRecovery(Exception e) { }

	// RVA: 0x12F2D20 Offset: 0x12EED20 VA: 0x12F2D20
	private void SetException(Exception exception) { }

	// RVA: 0x12F1EC4 Offset: 0x12EDEC4 VA: 0x12F1EC4
	private void CheckError() { }

	// RVA: 0x12E9790 Offset: 0x12E5790 VA: 0x12E9790
	internal void RequestCallback(object obj) { }

	// RVA: 0x12F4FC4 Offset: 0x12F0FC4 VA: 0x12F4FC4
	private void SyncRequestCallback(object obj) { }

	// RVA: 0x12F4990 Offset: 0x12F0990 VA: 0x12F4990
	private void AsyncRequestCallback(object obj) { }

	// RVA: 0x12F1F50 Offset: 0x12EDF50 VA: 0x12F1F50
	private FtpWebRequest.RequestStage FinishRequestStage(FtpWebRequest.RequestStage stage) { }

	// RVA: 0x12F5238 Offset: 0x12F1238 VA: 0x12F5238 Slot: 27
	public override void Abort() { }

	// RVA: 0x12F5500 Offset: 0x12F1500 VA: 0x12F5500 Slot: 6
	public override void set_CachePolicy(RequestCachePolicy value) { }

	// RVA: 0x12EC030 Offset: 0x12E8030 VA: 0x12EC030
	public X509CertificateCollection get_ClientCertificates() { }

	// RVA: 0x12F5564 Offset: 0x12F1564 VA: 0x12F5564 Slot: 10
	public override WebHeaderCollection get_Headers() { }

	// RVA: 0x12F5628 Offset: 0x12F1628 VA: 0x12F5628 Slot: 11
	public override void set_Headers(WebHeaderCollection value) { }

	// RVA: 0x12F5630 Offset: 0x12F1630 VA: 0x12F5630 Slot: 14
	public override void set_ContentType(string value) { }

	// RVA: 0x12F56D4 Offset: 0x12F16D4 VA: 0x12F56D4 Slot: 17
	public override bool get_UseDefaultCredentials() { }

	// RVA: 0x12F1460 Offset: 0x12ED460 VA: 0x12F1460
	private bool get_InUse() { }

	// RVA: 0x12F2840 Offset: 0x12EE840 VA: 0x12F2840
	private void EnsureFtpWebResponse(Exception exception) { }

	// RVA: 0x12F5854 Offset: 0x12F1854 VA: 0x12F5854
	internal void DataStreamClosed(CloseExState closeState) { }

	// RVA: 0x12F58D0 Offset: 0x12F18D0 VA: 0x12F58D0
	private static void .cctor() { }
}


// Namespace: System.Net
internal class FtpWebRequestCreator : IWebRequestCreate // TypeDefIndex: 3637
{
	// Methods

	// RVA: 0x12F5E60 Offset: 0x12F1E60 VA: 0x12F5E60
	internal void .ctor() { }

	// RVA: 0x12F5E68 Offset: 0x12F1E68 VA: 0x12F5E68 Slot: 4
	public WebRequest Create(Uri uri) { }
}


// Namespace: 
internal sealed class FtpWebResponse.EmptyStream : MemoryStream // TypeDefIndex: 3638
{
	// Methods

	// RVA: 0x12F5F20 Offset: 0x12F1F20 VA: 0x12F5F20
	internal void .ctor() { }
}


// Namespace: System.Net
public class FtpWebResponse : WebResponse, IDisposable // TypeDefIndex: 3639
{
	// Fields
	internal Stream _responseStream; // 0x20
	private long _contentLength; // 0x28
	private Uri _responseUri; // 0x30
	private FtpStatusCode _statusCode; // 0x38
	private string _statusLine; // 0x40
	private WebHeaderCollection _ftpRequestHeaders; // 0x48
	private DateTime _lastModified; // 0x50
	private string _bannerMessage; // 0x58
	private string _welcomeMessage; // 0x60
	private string _exitMessage; // 0x68

	// Properties
	public override long ContentLength { get; }
	public override WebHeaderCollection Headers { get; }
	public override Uri ResponseUri { get; }

	// Methods

	// RVA: 0x12F578C Offset: 0x12F178C VA: 0x12F578C
	internal void .ctor(Stream responseStream, long contentLength, Uri responseUri, FtpStatusCode statusCode, string statusLine, DateTime lastModified, string bannerMessage, string welcomeMessage, string exitMessage) { }

	// RVA: 0x12F4980 Offset: 0x12F0980 VA: 0x12F4980
	internal void UpdateStatus(FtpStatusCode statusCode, string statusLine, string exitMessage) { }

	// RVA: 0x12F5EC0 Offset: 0x12F1EC0 VA: 0x12F5EC0 Slot: 10
	public override Stream GetResponseStream() { }

	// RVA: 0x12F56F8 Offset: 0x12F16F8 VA: 0x12F56F8
	internal void SetResponseStream(Stream stream) { }

	// RVA: 0x12F5F88 Offset: 0x12F1F88 VA: 0x12F5F88 Slot: 7
	public override void Close() { }

	// RVA: 0x12F6000 Offset: 0x12F2000 VA: 0x12F6000 Slot: 9
	public override long get_ContentLength() { }

	// RVA: 0x12F6008 Offset: 0x12F2008 VA: 0x12F6008 Slot: 12
	public override WebHeaderCollection get_Headers() { }

	// RVA: 0x12F6114 Offset: 0x12F2114 VA: 0x12F6114 Slot: 11
	public override Uri get_ResponseUri() { }
}


// Namespace: System.Net
internal class NetworkStreamWrapper : Stream // TypeDefIndex: 3640
{
	// Fields
	private TcpClient _client; // 0x28
	private NetworkStream _networkStream; // 0x30

	// Properties
	protected bool UsingSecureStream { get; }
	internal IPAddress ServerAddress { get; }
	internal Socket Socket { get; }
	public override bool CanRead { get; }
	public override bool CanSeek { get; }
	public override bool CanWrite { get; }
	public override bool CanTimeout { get; }
	public override int ReadTimeout { set; }
	public override int WriteTimeout { set; }
	public override long Length { get; }
	public override long Position { get; set; }

	// Methods

	// RVA: 0x12E9470 Offset: 0x12E5470 VA: 0x12E9470
	internal void .ctor(TcpClient client) { }

	// RVA: 0x12EBFB4 Offset: 0x12E7FB4 VA: 0x12EBFB4
	protected bool get_UsingSecureStream() { }

	// RVA: 0x12EB7D8 Offset: 0x12E77D8 VA: 0x12EB7D8
	internal IPAddress get_ServerAddress() { }

	// RVA: 0x12ED3F4 Offset: 0x12E93F4 VA: 0x12ED3F4
	internal Socket get_Socket() { }

	// RVA: 0x12F611C Offset: 0x12F211C VA: 0x12F611C Slot: 5
	public override bool get_CanRead() { }

	// RVA: 0x12F6138 Offset: 0x12F2138 VA: 0x12F6138 Slot: 6
	public override bool get_CanSeek() { }

	// RVA: 0x12F6140 Offset: 0x12F2140 VA: 0x12F6140 Slot: 8
	public override bool get_CanWrite() { }

	// RVA: 0x12F615C Offset: 0x12F215C VA: 0x12F615C Slot: 7
	public override bool get_CanTimeout() { }

	// RVA: 0x12F6164 Offset: 0x12F2164 VA: 0x12F6164 Slot: 12
	public override void set_ReadTimeout(int value) { }

	// RVA: 0x12F6184 Offset: 0x12F2184 VA: 0x12F6184 Slot: 13
	public override void set_WriteTimeout(int value) { }

	// RVA: 0x12F61A8 Offset: 0x12F21A8 VA: 0x12F61A8 Slot: 9
	public override long get_Length() { }

	// RVA: 0x12F61C8 Offset: 0x12F21C8 VA: 0x12F61C8 Slot: 10
	public override long get_Position() { }

	// RVA: 0x12F61E8 Offset: 0x12F21E8 VA: 0x12F61E8 Slot: 11
	public override void set_Position(long value) { }

	// RVA: 0x12F6208 Offset: 0x12F2208 VA: 0x12F6208 Slot: 25
	public override long Seek(long offset, SeekOrigin origin) { }

	// RVA: 0x12F622C Offset: 0x12F222C VA: 0x12F622C Slot: 27
	public override int Read(byte[] buffer, int offset, int size) { }

	// RVA: 0x12F6250 Offset: 0x12F2250 VA: 0x12F6250 Slot: 30
	public override void Write(byte[] buffer, int offset, int size) { }

	// RVA: 0x12F6274 Offset: 0x12F2274 VA: 0x12F6274 Slot: 15
	protected override void Dispose(bool disposing) { }

	// RVA: 0x12EA730 Offset: 0x12E6730 VA: 0x12EA730
	internal void CloseSocket() { }

	// RVA: 0x12E9690 Offset: 0x12E5690 VA: 0x12E9690
	public void Close(int timeout) { }

	// RVA: 0x12F6320 Offset: 0x12F2320 VA: 0x12F6320 Slot: 17
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int size, AsyncCallback callback, object state) { }

	// RVA: 0x12F6344 Offset: 0x12F2344 VA: 0x12F6344 Slot: 18
	public override int EndRead(IAsyncResult asyncResult) { }

	// RVA: 0x12F6368 Offset: 0x12F2368 VA: 0x12F6368 Slot: 19
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken) { }

	// RVA: 0x12F638C Offset: 0x12F238C VA: 0x12F638C Slot: 21
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int size, AsyncCallback callback, object state) { }

	// RVA: 0x12F63B0 Offset: 0x12F23B0 VA: 0x12F63B0 Slot: 22
	public override void EndWrite(IAsyncResult asyncResult) { }

	// RVA: 0x12F63D4 Offset: 0x12F23D4 VA: 0x12F63D4 Slot: 23
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken) { }

	// RVA: 0x12F63F8 Offset: 0x12F23F8 VA: 0x12F63F8 Slot: 16
	public override void Flush() { }

	// RVA: 0x12F63FC Offset: 0x12F23FC VA: 0x12F63FC Slot: 26
	public override void SetLength(long value) { }

	// RVA: 0x12F40D4 Offset: 0x12F00D4 VA: 0x12F40D4
	internal void SetSocketTimeoutOption(int timeout) { }
}


// Namespace: System.Net
[Flags]
public enum SecurityProtocolType // TypeDefIndex: 3641
{
	// Fields
	public int value__; // 0x0
	public const SecurityProtocolType SystemDefault = 0;
	public const SecurityProtocolType Ssl3 = 48;
	public const SecurityProtocolType Tls = 192;
	public const SecurityProtocolType Tls11 = 768;
	public const SecurityProtocolType Tls12 = 3072;
	public const SecurityProtocolType Tls13 = 12288;
}


// Namespace: 
private sealed class WebClient.ProgressData // TypeDefIndex: 3642
{
	// Fields
	internal long BytesSent; // 0x10
	internal long TotalBytesToSend; // 0x18
	internal long BytesReceived; // 0x20
	internal long TotalBytesToReceive; // 0x28
	internal bool HasUploadPhase; // 0x30

	// Methods

	// RVA: 0x12F6A1C Offset: 0x12F2A1C VA: 0x12F6A1C
	internal void Reset() { }

	// RVA: 0x12F6D20 Offset: 0x12F2D20 VA: 0x12F6D20
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private struct WebClient.<GetWebResponseTaskAsync>d__112 : IAsyncStateMachine // TypeDefIndex: 3643
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<WebResponse> <>t__builder; // 0x8
	public WebRequest request; // 0x20
	public WebClient <>4__this; // 0x28
	private WebRequest <>7__wrap1; // 0x30
	private object <>u__1; // 0x38

	// Methods

	// RVA: 0x12F8D58 Offset: 0x12F4D58 VA: 0x12F8D58 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x12F90A4 Offset: 0x12F50A4 VA: 0x12F90A4 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct WebClient.<DownloadBitsAsync>d__150 : IAsyncStateMachine // TypeDefIndex: 3644
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncVoidMethodBuilder <>t__builder; // 0x8
	public WebClient <>4__this; // 0x28
	public WebRequest request; // 0x30
	public Stream writeStream; // 0x38
	public AsyncOperation asyncOp; // 0x40
	public Action<byte[], Exception, AsyncOperation> completionDelegate; // 0x48
	private Exception <exception>5__2; // 0x50
	private byte[] <copyBuffer>5__3; // 0x58
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<WebResponse> <>u__1; // 0x60
	private Stream <>7__wrap3; // 0x70
	private Stream <readStream>5__5; // 0x78
	private ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter<int> <>u__2; // 0x80
	private ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter <>u__3; // 0x90

	// Methods

	// RVA: 0x12F9120 Offset: 0x12F5120 VA: 0x12F9120 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x12F9F44 Offset: 0x12F5F44 VA: 0x12F9F44 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct WebClient.<UploadBitsAsync>d__152 : IAsyncStateMachine // TypeDefIndex: 3645
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncVoidMethodBuilder <>t__builder; // 0x8
	public WebClient <>4__this; // 0x28
	public WebRequest request; // 0x30
	public byte[] header; // 0x38
	public byte[] footer; // 0x40
	public AsyncOperation asyncOp; // 0x48
	public Stream readStream; // 0x50
	public byte[] buffer; // 0x58
	public int chunkSize; // 0x60
	public Action<byte[], Exception, AsyncOperation> completionDelegate; // 0x68
	private Exception <exception>5__2; // 0x70
	private Stream <writeStream>5__3; // 0x78
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<Stream> <>u__1; // 0x80
	private ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter <>u__2; // 0x90
	private Stream <>7__wrap3; // 0xA0
	private int <bytesRead>5__5; // 0xA8
	private ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter<int> <>u__3; // 0xB0
	private int <toWrite>5__6; // 0xC0

	// Methods

	// RVA: 0x12F9F50 Offset: 0x12F5F50 VA: 0x12F9F50 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x12FB6A4 Offset: 0x12F76A4 VA: 0x12FB6A4 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class WebClient.<>c__DisplayClass182_0 // TypeDefIndex: 3646
{
	// Fields
	public WebClient <>4__this; // 0x10
	public AsyncOperation asyncOp; // 0x18

	// Methods

	// RVA: 0x12F82C0 Offset: 0x12F42C0 VA: 0x12F82C0
	public void .ctor() { }

	// RVA: 0x12FB6B0 Offset: 0x12F76B0 VA: 0x12FB6B0
	internal void <UploadDataAsync>b__0(byte[] result, Exception error, AsyncOperation uploadAsyncOp) { }
}


// Namespace: System.Net
public class WebClient : Component // TypeDefIndex: 3647
{
	// Fields
	private Uri _baseAddress; // 0x28
	private ICredentials _credentials; // 0x30
	private WebHeaderCollection _headers; // 0x38
	private NameValueCollection _requestParameters; // 0x40
	private WebResponse _webResponse; // 0x48
	private WebRequest _webRequest; // 0x50
	private Encoding _encoding; // 0x58
	private string _method; // 0x60
	private long _contentLength; // 0x68
	private bool _initWebClientAsync; // 0x70
	private bool _canceled; // 0x71
	private WebClient.ProgressData _progress; // 0x78
	private IWebProxy _proxy; // 0x80
	private bool _proxySet; // 0x88
	private int _callNesting; // 0x8C
	private AsyncOperation _asyncOp; // 0x90
	private SendOrPostCallback _downloadDataOperationCompleted; // 0x98
	private SendOrPostCallback _openReadOperationCompleted; // 0xA0
	private SendOrPostCallback _openWriteOperationCompleted; // 0xA8
	private SendOrPostCallback _downloadStringOperationCompleted; // 0xB0
	private SendOrPostCallback _downloadFileOperationCompleted; // 0xB8
	private SendOrPostCallback _uploadStringOperationCompleted; // 0xC0
	private SendOrPostCallback _uploadDataOperationCompleted; // 0xC8
	private SendOrPostCallback _uploadFileOperationCompleted; // 0xD0
	private SendOrPostCallback _uploadValuesOperationCompleted; // 0xD8
	private SendOrPostCallback _reportDownloadProgressChanged; // 0xE0
	private SendOrPostCallback _reportUploadProgressChanged; // 0xE8
	[CompilerGenerated]
	private DownloadStringCompletedEventHandler DownloadStringCompleted; // 0xF0
	[CompilerGenerated]
	private DownloadDataCompletedEventHandler DownloadDataCompleted; // 0xF8
	[CompilerGenerated]
	private AsyncCompletedEventHandler DownloadFileCompleted; // 0x100
	[CompilerGenerated]
	private UploadStringCompletedEventHandler UploadStringCompleted; // 0x108
	[CompilerGenerated]
	private UploadDataCompletedEventHandler UploadDataCompleted; // 0x110
	[CompilerGenerated]
	private UploadFileCompletedEventHandler UploadFileCompleted; // 0x118
	[CompilerGenerated]
	private UploadValuesCompletedEventHandler UploadValuesCompleted; // 0x120
	[CompilerGenerated]
	private OpenReadCompletedEventHandler OpenReadCompleted; // 0x128
	[CompilerGenerated]
	private OpenWriteCompletedEventHandler OpenWriteCompleted; // 0x130
	[CompilerGenerated]
	private DownloadProgressChangedEventHandler DownloadProgressChanged; // 0x138
	[CompilerGenerated]
	private UploadProgressChangedEventHandler UploadProgressChanged; // 0x140
	[CompilerGenerated]
	private RequestCachePolicy <CachePolicy>k__BackingField; // 0x148
	private static readonly char[] s_parseContentTypeSeparators; // 0x0
	private static readonly Encoding[] s_knownEncodings; // 0x8

	// Properties
	public WebHeaderCollection Headers { get; }
	public WebHeaderCollection ResponseHeaders { get; }

	// Methods

	// RVA: 0x12F6420 Offset: 0x12F2420 VA: 0x12F6420
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x12F6544 Offset: 0x12F2544 VA: 0x12F6544
	public void add_DownloadDataCompleted(DownloadDataCompletedEventHandler value) { }

	[CompilerGenerated]
	// RVA: 0x12F65E0 Offset: 0x12F25E0 VA: 0x12F65E0
	public void remove_DownloadDataCompleted(DownloadDataCompletedEventHandler value) { }

	[CompilerGenerated]
	// RVA: 0x12F667C Offset: 0x12F267C VA: 0x12F667C
	public void add_UploadDataCompleted(UploadDataCompletedEventHandler value) { }

	[CompilerGenerated]
	// RVA: 0x12F671C Offset: 0x12F271C VA: 0x12F671C
	public void remove_UploadDataCompleted(UploadDataCompletedEventHandler value) { }

	// RVA: 0x12F67BC Offset: 0x12F27BC VA: 0x12F67BC Slot: 8
	protected virtual void OnDownloadStringCompleted(DownloadStringCompletedEventArgs e) { }

	// RVA: 0x12F67E4 Offset: 0x12F27E4 VA: 0x12F67E4 Slot: 9
	protected virtual void OnDownloadDataCompleted(DownloadDataCompletedEventArgs e) { }

	// RVA: 0x12F680C Offset: 0x12F280C VA: 0x12F680C Slot: 10
	protected virtual void OnDownloadFileCompleted(AsyncCompletedEventArgs e) { }

	// RVA: 0x12F6834 Offset: 0x12F2834 VA: 0x12F6834 Slot: 11
	protected virtual void OnDownloadProgressChanged(DownloadProgressChangedEventArgs e) { }

	// RVA: 0x12F685C Offset: 0x12F285C VA: 0x12F685C Slot: 12
	protected virtual void OnUploadStringCompleted(UploadStringCompletedEventArgs e) { }

	// RVA: 0x12F6884 Offset: 0x12F2884 VA: 0x12F6884 Slot: 13
	protected virtual void OnUploadDataCompleted(UploadDataCompletedEventArgs e) { }

	// RVA: 0x12F68AC Offset: 0x12F28AC VA: 0x12F68AC Slot: 14
	protected virtual void OnUploadFileCompleted(UploadFileCompletedEventArgs e) { }

	// RVA: 0x12F68D4 Offset: 0x12F28D4 VA: 0x12F68D4 Slot: 15
	protected virtual void OnUploadValuesCompleted(UploadValuesCompletedEventArgs e) { }

	// RVA: 0x12F68FC Offset: 0x12F28FC VA: 0x12F68FC Slot: 16
	protected virtual void OnUploadProgressChanged(UploadProgressChangedEventArgs e) { }

	// RVA: 0x12F6924 Offset: 0x12F2924 VA: 0x12F6924 Slot: 17
	protected virtual void OnOpenReadCompleted(OpenReadCompletedEventArgs e) { }

	// RVA: 0x12F694C Offset: 0x12F294C VA: 0x12F694C Slot: 18
	protected virtual void OnOpenWriteCompleted(OpenWriteCompletedEventArgs e) { }

	// RVA: 0x12F6974 Offset: 0x12F2974 VA: 0x12F6974
	private void StartOperation() { }

	// RVA: 0x12F6A30 Offset: 0x12F2A30 VA: 0x12F6A30
	private AsyncOperation StartAsyncOperation(object userToken) { }

	// RVA: 0x12F6A10 Offset: 0x12F2A10 VA: 0x12F6A10
	private void EndOperation() { }

	// RVA: 0x12F6D34 Offset: 0x12F2D34 VA: 0x12F6D34
	public WebHeaderCollection get_Headers() { }

	// RVA: 0x12F6D94 Offset: 0x12F2D94 VA: 0x12F6D94
	public WebHeaderCollection get_ResponseHeaders() { }

	// RVA: 0x12F6DAC Offset: 0x12F2DAC VA: 0x12F6DAC Slot: 19
	protected virtual WebRequest GetWebRequest(Uri address) { }

	// RVA: 0x12F72B4 Offset: 0x12F32B4 VA: 0x12F72B4 Slot: 20
	protected virtual WebResponse GetWebResponse(WebRequest request, IAsyncResult result) { }

	[AsyncStateMachine(typeof(WebClient.<GetWebResponseTaskAsync>d__112))]
	// RVA: 0x12F72EC Offset: 0x12F32EC VA: 0x12F72EC
	private Task<WebResponse> GetWebResponseTaskAsync(WebRequest request) { }

	// RVA: 0x12F73D4 Offset: 0x12F33D4 VA: 0x12F73D4
	private static void AbortRequest(WebRequest request) { }

	// RVA: 0x12F6ECC Offset: 0x12F2ECC VA: 0x12F6ECC
	private void CopyHeadersTo(WebRequest request) { }

	// RVA: 0x12F74B4 Offset: 0x12F34B4 VA: 0x12F74B4
	private Uri GetUri(Uri address) { }

	[AsyncStateMachine(typeof(WebClient.<DownloadBitsAsync>d__150))]
	// RVA: 0x12F77D0 Offset: 0x12F37D0 VA: 0x12F77D0
	private void DownloadBitsAsync(WebRequest request, Stream writeStream, AsyncOperation asyncOp, Action<byte[], Exception, AsyncOperation> completionDelegate) { }

	[AsyncStateMachine(typeof(WebClient.<UploadBitsAsync>d__152))]
	// RVA: 0x12F7890 Offset: 0x12F3890 VA: 0x12F7890
	private void UploadBitsAsync(WebRequest request, Stream readStream, byte[] buffer, int chunkSize, byte[] header, byte[] footer, AsyncOperation asyncOp, Action<byte[], Exception, AsyncOperation> completionDelegate) { }

	// RVA: 0x12F7974 Offset: 0x12F3974 VA: 0x12F7974
	private string MapToDefaultMethod(Uri address) { }

	// RVA: 0x12F7A9C Offset: 0x12F3A9C VA: 0x12F7A9C
	private void InvokeOperationCompleted(AsyncOperation asyncOp, SendOrPostCallback callback, AsyncCompletedEventArgs eventArgs) { }

	// RVA: 0x12F7B14 Offset: 0x12F3B14 VA: 0x12F7B14
	private void DownloadDataAsyncCallback(byte[] returnBytes, Exception exception, object state) { }

	// RVA: 0x12F7C18 Offset: 0x12F3C18 VA: 0x12F7C18
	public void DownloadDataAsync(Uri address) { }

	// RVA: 0x12F7C20 Offset: 0x12F3C20 VA: 0x12F7C20
	public void DownloadDataAsync(Uri address, object userToken) { }

	// RVA: 0x12F7F48 Offset: 0x12F3F48 VA: 0x12F7F48
	public void UploadDataAsync(Uri address, byte[] data) { }

	// RVA: 0x12F7F58 Offset: 0x12F3F58 VA: 0x12F7F58
	public void UploadDataAsync(Uri address, string method, byte[] data, object userToken) { }

	// RVA: 0x12F7E64 Offset: 0x12F3E64 VA: 0x12F7E64
	private static Exception GetExceptionToPropagate(Exception e) { }

	// RVA: 0x12F8300 Offset: 0x12F4300 VA: 0x12F8300
	public void CancelAsync() { }

	// RVA: 0x12F8360 Offset: 0x12F4360 VA: 0x12F8360
	private void PostProgressChanged(AsyncOperation asyncOp, WebClient.ProgressData progress) { }

	// RVA: 0x12F7784 Offset: 0x12F3784 VA: 0x12F7784
	private static void ThrowIfNull(object argument, string parameterName) { }

	// RVA: 0x12F8594 Offset: 0x12F4594 VA: 0x12F8594
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x12F873C Offset: 0x12F473C VA: 0x12F873C
	private void <StartAsyncOperation>b__78_0(object arg) { }

	[CompilerGenerated]
	// RVA: 0x12F87CC Offset: 0x12F47CC VA: 0x12F87CC
	private void <StartAsyncOperation>b__78_1(object arg) { }

	[CompilerGenerated]
	// RVA: 0x12F885C Offset: 0x12F485C VA: 0x12F885C
	private void <StartAsyncOperation>b__78_2(object arg) { }

	[CompilerGenerated]
	// RVA: 0x12F88E8 Offset: 0x12F48E8 VA: 0x12F88E8
	private void <StartAsyncOperation>b__78_3(object arg) { }

	[CompilerGenerated]
	// RVA: 0x12F8974 Offset: 0x12F4974 VA: 0x12F8974
	private void <StartAsyncOperation>b__78_4(object arg) { }

	[CompilerGenerated]
	// RVA: 0x12F8A00 Offset: 0x12F4A00 VA: 0x12F8A00
	private void <StartAsyncOperation>b__78_5(object arg) { }

	[CompilerGenerated]
	// RVA: 0x12F8A8C Offset: 0x12F4A8C VA: 0x12F8A8C
	private void <StartAsyncOperation>b__78_6(object arg) { }

	[CompilerGenerated]
	// RVA: 0x12F8B1C Offset: 0x12F4B1C VA: 0x12F8B1C
	private void <StartAsyncOperation>b__78_7(object arg) { }

	[CompilerGenerated]
	// RVA: 0x12F8BAC Offset: 0x12F4BAC VA: 0x12F8BAC
	private void <StartAsyncOperation>b__78_8(object arg) { }

	[CompilerGenerated]
	// RVA: 0x12F8C3C Offset: 0x12F4C3C VA: 0x12F8C3C
	private void <StartAsyncOperation>b__78_9(object arg) { }

	[CompilerGenerated]
	// RVA: 0x12F8CC8 Offset: 0x12F4CC8 VA: 0x12F8CC8
	private void <StartAsyncOperation>b__78_10(object arg) { }
}


// Namespace: System.Net
public sealed class OpenReadCompletedEventHandler : MulticastDelegate // TypeDefIndex: 3648
{
	// Methods

	// RVA: 0x12FB768 Offset: 0x12F7768 VA: 0x12FB768
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x12FB86C Offset: 0x12F786C VA: 0x12FB86C Slot: 12
	public virtual void Invoke(object sender, OpenReadCompletedEventArgs e) { }
}


// Namespace: System.Net
public sealed class OpenWriteCompletedEventHandler : MulticastDelegate // TypeDefIndex: 3649
{
	// Methods

	// RVA: 0x12FB880 Offset: 0x12F7880 VA: 0x12FB880
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x12FB984 Offset: 0x12F7984 VA: 0x12FB984 Slot: 12
	public virtual void Invoke(object sender, OpenWriteCompletedEventArgs e) { }
}


// Namespace: System.Net
public sealed class DownloadStringCompletedEventHandler : MulticastDelegate // TypeDefIndex: 3650
{
	// Methods

	// RVA: 0x12FB998 Offset: 0x12F7998 VA: 0x12FB998
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x12FBA9C Offset: 0x12F7A9C VA: 0x12FBA9C Slot: 12
	public virtual void Invoke(object sender, DownloadStringCompletedEventArgs e) { }
}


// Namespace: System.Net
public sealed class DownloadDataCompletedEventHandler : MulticastDelegate // TypeDefIndex: 3651
{
	// Methods

	// RVA: 0x12FBAB0 Offset: 0x12F7AB0 VA: 0x12FBAB0
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x12FBBB4 Offset: 0x12F7BB4 VA: 0x12FBBB4 Slot: 12
	public virtual void Invoke(object sender, DownloadDataCompletedEventArgs e) { }
}


// Namespace: System.Net
public sealed class UploadStringCompletedEventHandler : MulticastDelegate // TypeDefIndex: 3652
{
	// Methods

	// RVA: 0x12FBBC8 Offset: 0x12F7BC8 VA: 0x12FBBC8
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x12FBCCC Offset: 0x12F7CCC VA: 0x12FBCCC Slot: 12
	public virtual void Invoke(object sender, UploadStringCompletedEventArgs e) { }
}


// Namespace: System.Net
public sealed class UploadDataCompletedEventHandler : MulticastDelegate // TypeDefIndex: 3653
{
	// Methods

	// RVA: 0x12FBCE0 Offset: 0x12F7CE0 VA: 0x12FBCE0
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x12FBDE4 Offset: 0x12F7DE4 VA: 0x12FBDE4 Slot: 12
	public virtual void Invoke(object sender, UploadDataCompletedEventArgs e) { }
}


// Namespace: System.Net
public sealed class UploadFileCompletedEventHandler : MulticastDelegate // TypeDefIndex: 3654
{
	// Methods

	// RVA: 0x12FBDF8 Offset: 0x12F7DF8 VA: 0x12FBDF8
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x12FBEFC Offset: 0x12F7EFC VA: 0x12FBEFC Slot: 12
	public virtual void Invoke(object sender, UploadFileCompletedEventArgs e) { }
}


// Namespace: System.Net
public sealed class UploadValuesCompletedEventHandler : MulticastDelegate // TypeDefIndex: 3655
{
	// Methods

	// RVA: 0x12FBF10 Offset: 0x12F7F10 VA: 0x12FBF10
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x12FC014 Offset: 0x12F8014 VA: 0x12FC014 Slot: 12
	public virtual void Invoke(object sender, UploadValuesCompletedEventArgs e) { }
}


// Namespace: System.Net
public sealed class DownloadProgressChangedEventHandler : MulticastDelegate // TypeDefIndex: 3656
{
	// Methods

	// RVA: 0x12FC028 Offset: 0x12F8028 VA: 0x12FC028
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x12FC12C Offset: 0x12F812C VA: 0x12FC12C Slot: 12
	public virtual void Invoke(object sender, DownloadProgressChangedEventArgs e) { }
}


// Namespace: System.Net
public sealed class UploadProgressChangedEventHandler : MulticastDelegate // TypeDefIndex: 3657
{
	// Methods

	// RVA: 0x12FC140 Offset: 0x12F8140 VA: 0x12FC140
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x12FC244 Offset: 0x12F8244 VA: 0x12FC244 Slot: 12
	public virtual void Invoke(object sender, UploadProgressChangedEventArgs e) { }
}


// Namespace: System.Net
public class OpenReadCompletedEventArgs : AsyncCompletedEventArgs // TypeDefIndex: 3658
{}


// Namespace: System.Net
public class OpenWriteCompletedEventArgs : AsyncCompletedEventArgs // TypeDefIndex: 3659
{}


// Namespace: System.Net
public class DownloadStringCompletedEventArgs : AsyncCompletedEventArgs // TypeDefIndex: 3660
{}


// Namespace: System.Net
public class DownloadDataCompletedEventArgs : AsyncCompletedEventArgs // TypeDefIndex: 3661
{
	// Fields
	private readonly byte[] _result; // 0x28

	// Properties
	public byte[] Result { get; }

	// Methods

	// RVA: 0x12F7BE0 Offset: 0x12F3BE0 VA: 0x12F7BE0
	internal void .ctor(byte[] result, Exception exception, bool cancelled, object userToken) { }

	// RVA: 0x12FC258 Offset: 0x12F8258 VA: 0x12FC258
	public byte[] get_Result() { }
}


// Namespace: System.Net
public class UploadStringCompletedEventArgs : AsyncCompletedEventArgs // TypeDefIndex: 3662
{}


// Namespace: System.Net
public class UploadDataCompletedEventArgs : AsyncCompletedEventArgs // TypeDefIndex: 3663
{
	// Fields
	private readonly byte[] _result; // 0x28

	// Properties
	public byte[] Result { get; }

	// Methods

	// RVA: 0x12F82C8 Offset: 0x12F42C8 VA: 0x12F82C8
	internal void .ctor(byte[] result, Exception exception, bool cancelled, object userToken) { }

	// RVA: 0x12FC274 Offset: 0x12F8274 VA: 0x12FC274
	public byte[] get_Result() { }
}


// Namespace: System.Net
public class UploadFileCompletedEventArgs : AsyncCompletedEventArgs // TypeDefIndex: 3664
{}


// Namespace: System.Net
public class UploadValuesCompletedEventArgs : AsyncCompletedEventArgs // TypeDefIndex: 3665
{}


// Namespace: System.Net
public class DownloadProgressChangedEventArgs : ProgressChangedEventArgs // TypeDefIndex: 3666
{
	// Fields
	[CompilerGenerated]
	private readonly long <BytesReceived>k__BackingField; // 0x20
	[CompilerGenerated]
	private readonly long <TotalBytesToReceive>k__BackingField; // 0x28

	// Methods

	// RVA: 0x12F8568 Offset: 0x12F4568 VA: 0x12F8568
	internal void .ctor(int progressPercentage, object userToken, long bytesReceived, long totalBytesToReceive) { }
}


// Namespace: System.Net
public class UploadProgressChangedEventArgs : ProgressChangedEventArgs // TypeDefIndex: 3667
{
	// Fields
	[CompilerGenerated]
	private readonly long <BytesReceived>k__BackingField; // 0x20
	[CompilerGenerated]
	private readonly long <TotalBytesToReceive>k__BackingField; // 0x28
	[CompilerGenerated]
	private readonly long <BytesSent>k__BackingField; // 0x30
	[CompilerGenerated]
	private readonly long <TotalBytesToSend>k__BackingField; // 0x38

	// Methods

	// RVA: 0x12F8528 Offset: 0x12F4528 VA: 0x12F8528
	internal void .ctor(int progressPercentage, object userToken, long bytesSent, long totalBytesToSend, long bytesReceived, long totalBytesToReceive) { }
}


// Namespace: System.Net
public class Authorization // TypeDefIndex: 3668
{
	// Fields
	private string m_Message; // 0x10
	private bool m_Complete; // 0x18
	internal string ModuleAuthenticationType; // 0x20

	// Methods

	// RVA: 0x12FC290 Offset: 0x12F8290 VA: 0x12FC290
	public void .ctor(string token) { }

	// RVA: 0x12FC334 Offset: 0x12F8334 VA: 0x12FC334
	public void .ctor(string token, bool finished) { }
}


// Namespace: System.Net
internal class SystemNetworkCredential : NetworkCredential // TypeDefIndex: 3669
{
	// Fields
	internal static readonly SystemNetworkCredential defaultCredential; // 0x0

	// Methods

	// RVA: 0x12FC3C8 Offset: 0x12F83C8 VA: 0x12FC3C8
	private void .ctor() { }

	// RVA: 0x12FC420 Offset: 0x12F8420 VA: 0x12FC420
	private static void .cctor() { }
}


// Namespace: System.Net
[Serializable]
public abstract class EndPoint // TypeDefIndex: 3670
{
	// Properties
	public virtual AddressFamily AddressFamily { get; }

	// Methods

	// RVA: 0x12FC478 Offset: 0x12F8478 VA: 0x12FC478 Slot: 4
	public virtual AddressFamily get_AddressFamily() { }

	// RVA: 0x12FC51C Offset: 0x12F851C VA: 0x12FC51C Slot: 5
	public virtual SocketAddress Serialize() { }

	// RVA: 0x12FC5C0 Offset: 0x12F85C0 VA: 0x12FC5C0 Slot: 6
	public virtual EndPoint Create(SocketAddress socketAddress) { }

	// RVA: 0x12E8DF0 Offset: 0x12E4DF0 VA: 0x12E8DF0
	protected void .ctor() { }
}


// Namespace: System.Net
public enum FtpStatusCode // TypeDefIndex: 3671
{
	// Fields
	public int value__; // 0x0
	public const FtpStatusCode Undefined = 0;
	public const FtpStatusCode RestartMarker = 110;
	public const FtpStatusCode ServiceTemporarilyNotAvailable = 120;
	public const FtpStatusCode DataAlreadyOpen = 125;
	public const FtpStatusCode OpeningData = 150;
	public const FtpStatusCode CommandOK = 200;
	public const FtpStatusCode CommandExtraneous = 202;
	public const FtpStatusCode DirectoryStatus = 212;
	public const FtpStatusCode FileStatus = 213;
	public const FtpStatusCode SystemType = 215;
	public const FtpStatusCode SendUserCommand = 220;
	public const FtpStatusCode ClosingControl = 221;
	public const FtpStatusCode ClosingData = 226;
	public const FtpStatusCode EnteringPassive = 227;
	public const FtpStatusCode LoggedInProceed = 230;
	public const FtpStatusCode ServerWantsSecureSession = 234;
	public const FtpStatusCode FileActionOK = 250;
	public const FtpStatusCode PathnameCreated = 257;
	public const FtpStatusCode SendPasswordCommand = 331;
	public const FtpStatusCode NeedLoginAccount = 332;
	public const FtpStatusCode FileCommandPending = 350;
	public const FtpStatusCode ServiceNotAvailable = 421;
	public const FtpStatusCode CantOpenData = 425;
	public const FtpStatusCode ConnectionClosed = 426;
	public const FtpStatusCode ActionNotTakenFileUnavailableOrBusy = 450;
	public const FtpStatusCode ActionAbortedLocalProcessingError = 451;
	public const FtpStatusCode ActionNotTakenInsufficientSpace = 452;
	public const FtpStatusCode CommandSyntaxError = 500;
	public const FtpStatusCode ArgumentSyntaxError = 501;
	public const FtpStatusCode CommandNotImplemented = 502;
	public const FtpStatusCode BadCommandSequence = 503;
	public const FtpStatusCode NotLoggedIn = 530;
	public const FtpStatusCode AccountNeeded = 532;
	public const FtpStatusCode ActionNotTakenFileUnavailable = 550;
	public const FtpStatusCode ActionAbortedUnknownPageType = 551;
	public const FtpStatusCode FileActionAborted = 552;
	public const FtpStatusCode ActionNotTakenFilenameNotAllowed = 553;
}


// Namespace: System.Net
public enum HttpRequestHeader // TypeDefIndex: 3672
{
	// Fields
	public int value__; // 0x0
	public const HttpRequestHeader CacheControl = 0;
	public const HttpRequestHeader Connection = 1;
	public const HttpRequestHeader Date = 2;
	public const HttpRequestHeader KeepAlive = 3;
	public const HttpRequestHeader Pragma = 4;
	public const HttpRequestHeader Trailer = 5;
	public const HttpRequestHeader TransferEncoding = 6;
	public const HttpRequestHeader Upgrade = 7;
	public const HttpRequestHeader Via = 8;
	public const HttpRequestHeader Warning = 9;
	public const HttpRequestHeader Allow = 10;
	public const HttpRequestHeader ContentLength = 11;
	public const HttpRequestHeader ContentType = 12;
	public const HttpRequestHeader ContentEncoding = 13;
	public const HttpRequestHeader ContentLanguage = 14;
	public const HttpRequestHeader ContentLocation = 15;
	public const HttpRequestHeader ContentMd5 = 16;
	public const HttpRequestHeader ContentRange = 17;
	public const HttpRequestHeader Expires = 18;
	public const HttpRequestHeader LastModified = 19;
	public const HttpRequestHeader Accept = 20;
	public const HttpRequestHeader AcceptCharset = 21;
	public const HttpRequestHeader AcceptEncoding = 22;
	public const HttpRequestHeader AcceptLanguage = 23;
	public const HttpRequestHeader Authorization = 24;
	public const HttpRequestHeader Cookie = 25;
	public const HttpRequestHeader Expect = 26;
	public const HttpRequestHeader From = 27;
	public const HttpRequestHeader Host = 28;
	public const HttpRequestHeader IfMatch = 29;
	public const HttpRequestHeader IfModifiedSince = 30;
	public const HttpRequestHeader IfNoneMatch = 31;
	public const HttpRequestHeader IfRange = 32;
	public const HttpRequestHeader IfUnmodifiedSince = 33;
	public const HttpRequestHeader MaxForwards = 34;
	public const HttpRequestHeader ProxyAuthorization = 35;
	public const HttpRequestHeader Referer = 36;
	public const HttpRequestHeader Range = 37;
	public const HttpRequestHeader Te = 38;
	public const HttpRequestHeader Translate = 39;
	public const HttpRequestHeader UserAgent = 40;
}


// Namespace: System.Net
public interface IAuthenticationModule // TypeDefIndex: 3673
{
	// Properties
	public abstract string AuthenticationType { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract Authorization Authenticate(string challenge, WebRequest request, ICredentials credentials);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract Authorization PreAuthenticate(WebRequest request, ICredentials credentials);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract string get_AuthenticationType();
}


// Namespace: System.Net
public interface ICertificatePolicy // TypeDefIndex: 3674
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool CheckValidationResult(ServicePoint srvPoint, X509Certificate certificate, WebRequest request, int certificateProblem);
}


// Namespace: System.Net
public interface ICredentials // TypeDefIndex: 3675
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract NetworkCredential GetCredential(Uri uri, string authType);
}


// Namespace: System.Net
public class IPHostEntry // TypeDefIndex: 3676
{
	// Fields
	private string hostName; // 0x10
	private string[] aliases; // 0x18
	private IPAddress[] addressList; // 0x20
	internal bool isTrustedHost; // 0x28

	// Methods

	// RVA: 0x12FC5E4 Offset: 0x12F85E4 VA: 0x12FC5E4
	public void .ctor() { }
}


// Namespace: System.Net
public interface IWebRequestCreate // TypeDefIndex: 3677
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract WebRequest Create(Uri uri);
}


// Namespace: System.Net
internal class InternalException : SystemException // TypeDefIndex: 3678
{
	// Methods

	// RVA: 0x12E9DC4 Offset: 0x12E5DC4 VA: 0x12E9DC4
	internal void .ctor() { }
}


// Namespace: System.Net
internal static class NclUtilities // TypeDefIndex: 3679
{
	// Fields
	private static IPAddress[] _LocalAddresses; // 0x0
	private static object _LocalAddressesLock; // 0x8
	internal static string _LocalDomainName; // 0x10

	// Properties
	internal static IPAddress[] LocalAddresses { get; }
	private static object LocalAddressesLock { get; }

	// Methods

	// RVA: 0x12FC5F4 Offset: 0x12F85F4 VA: 0x12FC5F4
	internal static bool IsFatal(Exception exception) { }

	// RVA: 0x12FC6B4 Offset: 0x12F86B4 VA: 0x12FC6B4
	internal static bool IsAddressLocal(IPAddress ipAddress) { }

	// RVA: 0x12FCB04 Offset: 0x12F8B04 VA: 0x12FCB04
	private static IPHostEntry GetLocalHost() { }

	// RVA: 0x12FC744 Offset: 0x12F8744 VA: 0x12FC744
	internal static IPAddress[] get_LocalAddresses() { }

	// RVA: 0x12FCB1C Offset: 0x12F8B1C VA: 0x12FCB1C
	private static object get_LocalAddressesLock() { }
}


// Namespace: System.Net
internal static class ValidationHelper // TypeDefIndex: 3680
{
	// Fields
	public static string[] EmptyArray; // 0x0
	internal static readonly char[] InvalidMethodChars; // 0x8
	internal static readonly char[] InvalidParamChars; // 0x10

	// Methods

	// RVA: 0x12FC320 Offset: 0x12F8320 VA: 0x12FC320
	public static string MakeStringNull(string stringValue) { }

	// RVA: 0x12FCBB8 Offset: 0x12F8BB8 VA: 0x12FCBB8
	public static bool IsBlankString(string stringValue) { }

	// RVA: 0x12FCBD4 Offset: 0x12F8BD4 VA: 0x12FCBD4
	public static bool ValidateTcpPort(int port) { }

	// RVA: 0x12FCBE0 Offset: 0x12F8BE0 VA: 0x12FCBE0
	private static void .cctor() { }
}


// Namespace: System.Net
internal static class ExceptionHelper // TypeDefIndex: 3681
{
	// Properties
	internal static NotImplementedException MethodNotImplementedException { get; }
	internal static NotImplementedException PropertyNotImplementedException { get; }
	internal static WebException TimeoutException { get; }
	internal static NotSupportedException PropertyNotSupportedException { get; }
	internal static WebException RequestAbortedException { get; }

	// Methods

	// RVA: 0x12FC540 Offset: 0x12F8540 VA: 0x12FC540
	internal static NotImplementedException get_MethodNotImplementedException() { }

	// RVA: 0x12FC49C Offset: 0x12F849C VA: 0x12FC49C
	internal static NotImplementedException get_PropertyNotImplementedException() { }

	// RVA: 0x12F1ED8 Offset: 0x12EDED8 VA: 0x12F1ED8
	internal static WebException get_TimeoutException() { }

	// RVA: 0x12F5654 Offset: 0x12F1654 VA: 0x12F5654
	internal static NotSupportedException get_PropertyNotSupportedException() { }

	// RVA: 0x12EF148 Offset: 0x12EB148 VA: 0x12EF148
	internal static WebException get_RequestAbortedException() { }
}


// Namespace: System.Net
internal class WebRequestPrefixElement // TypeDefIndex: 3682
{
	// Fields
	public string Prefix; // 0x10
	internal IWebRequestCreate creator; // 0x18
	internal Type creatorType; // 0x20

	// Properties
	public IWebRequestCreate Creator { get; }

	// Methods

	// RVA: 0x12FCCE4 Offset: 0x12F8CE4 VA: 0x12FCCE4
	public IWebRequestCreate get_Creator() { }

	// RVA: 0x12FCEDC Offset: 0x12F8EDC VA: 0x12FCEDC
	public void .ctor(string P, IWebRequestCreate C) { }
}


// Namespace: System.Net
public sealed class HttpContinueDelegate : MulticastDelegate // TypeDefIndex: 3683
{
	// Methods

	// RVA: 0x12FCF08 Offset: 0x12F8F08 VA: 0x12FCF08
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x12FCF94 Offset: 0x12F8F94 VA: 0x12FCF94 Slot: 12
	public virtual void Invoke(int StatusCode, WebHeaderCollection httpHeaders) { }
}


// Namespace: System.Net
internal class KnownHttpVerb // TypeDefIndex: 3684
{
	// Fields
	internal string Name; // 0x10
	internal bool RequireContentBody; // 0x18
	internal bool ContentBodyNotAllowed; // 0x19
	internal bool ConnectRequest; // 0x1A
	internal bool ExpectNoContentResponse; // 0x1B
	private static ListDictionary NamedHeaders; // 0x0
	internal static KnownHttpVerb Get; // 0x8
	internal static KnownHttpVerb Connect; // 0x10
	internal static KnownHttpVerb Head; // 0x18
	internal static KnownHttpVerb Put; // 0x20
	internal static KnownHttpVerb Post; // 0x28
	internal static KnownHttpVerb MkCol; // 0x30

	// Methods

	// RVA: 0x12FCFA8 Offset: 0x12F8FA8 VA: 0x12FCFA8
	internal void .ctor(string name, bool requireContentBody, bool contentBodyNotAllowed, bool connectRequest, bool expectNoContentResponse) { }

	// RVA: 0x12FD000 Offset: 0x12F9000 VA: 0x12FD000
	private static void .cctor() { }

	// RVA: 0x12FD30C Offset: 0x12F930C VA: 0x12FD30C
	public static KnownHttpVerb Parse(string name) { }
}


// Namespace: System.Net
internal enum TriState // TypeDefIndex: 3685
{
	// Fields
	public int value__; // 0x0
	public const TriState Unspecified = -1;
	public const TriState False = 0;
	public const TriState True = 1;
}


// Namespace: System.Net
public class NetworkCredential : ICredentials // TypeDefIndex: 3686
{
	// Fields
	private string m_domain; // 0x10
	private string m_userName; // 0x18
	private SecureString m_password; // 0x20

	// Properties
	public string UserName { set; }
	public string Password { get; set; }
	public string Domain { set; }

	// Methods

	// RVA: 0x12F19C8 Offset: 0x12ED9C8 VA: 0x12F19C8
	public void .ctor(string userName, string password) { }

	// RVA: 0x12F59E0 Offset: 0x12F19E0 VA: 0x12F59E0
	public void .ctor(string userName, string password, string domain) { }

	// RVA: 0x12FD3D0 Offset: 0x12F93D0 VA: 0x12FD3D0
	public void set_UserName(string value) { }

	// RVA: 0x12EE7FC Offset: 0x12EA7FC VA: 0x12EE7FC
	public string get_Password() { }

	// RVA: 0x12FD428 Offset: 0x12F9428 VA: 0x12FD428
	public void set_Password(string value) { }

	// RVA: 0x12FD448 Offset: 0x12F9448 VA: 0x12FD448
	public void set_Domain(string value) { }

	// RVA: 0x12FD4A0 Offset: 0x12F94A0 VA: 0x12FD4A0
	internal string InternalGetPassword() { }

	// RVA: 0x12FD4AC Offset: 0x12F94AC VA: 0x12FD4AC Slot: 4
	public NetworkCredential GetCredential(Uri uri, string authType) { }
}


// Namespace: System.Net
[Serializable]
public class ProtocolViolationException : InvalidOperationException, ISerializable // TypeDefIndex: 3687
{
	// Methods

	// RVA: 0x12FD4B0 Offset: 0x12F94B0 VA: 0x12FD4B0
	public void .ctor() { }

	// RVA: 0x12F3BF4 Offset: 0x12EFBF4 VA: 0x12F3BF4
	public void .ctor(string message) { }

	// RVA: 0x12FD4B8 Offset: 0x12F94B8 VA: 0x12FD4B8
	protected void .ctor(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x12FD4C0 Offset: 0x12F94C0 VA: 0x12FD4C0 Slot: 4
	private void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x12FD4C8 Offset: 0x12F94C8 VA: 0x12FD4C8 Slot: 10
	public override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }
}


// Namespace: System.Net
[DefaultMember("Item")]
public class SocketAddress // TypeDefIndex: 3688
{
	// Fields
	internal int m_Size; // 0x10
	internal byte[] m_Buffer; // 0x18
	private bool m_changed; // 0x20
	private int m_hash; // 0x24

	// Properties
	public AddressFamily Family { get; }
	public byte Item { get; }

	// Methods

	// RVA: 0x12E9168 Offset: 0x12E5168 VA: 0x12E9168
	public AddressFamily get_Family() { }

	// RVA: 0x12FD4D0 Offset: 0x12F94D0 VA: 0x12FD4D0
	public byte get_Item(int offset) { }

	// RVA: 0x12FD544 Offset: 0x12F9544 VA: 0x12FD544
	public void .ctor(AddressFamily family, int size) { }

	// RVA: 0x12FD660 Offset: 0x12F9660 VA: 0x12FD660
	internal void .ctor(IPAddress ipAddress) { }

	// RVA: 0x12E8F28 Offset: 0x12E4F28 VA: 0x12E8F28
	internal void .ctor(IPAddress ipaddress, int port) { }

	// RVA: 0x12FD8B4 Offset: 0x12F98B4 VA: 0x12FD8B4
	internal IPAddress GetIPAddress() { }

	// RVA: 0x12E9198 Offset: 0x12E5198 VA: 0x12E9198
	internal IPEndPoint GetIPEndPoint() { }

	// RVA: 0x12FDAA0 Offset: 0x12F9AA0 VA: 0x12FDAA0 Slot: 0
	public override bool Equals(object comparand) { }

	// RVA: 0x12FDB8C Offset: 0x12F9B8C VA: 0x12FDB8C Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x12FDCBC Offset: 0x12F9CBC VA: 0x12FDCBC Slot: 3
	public override string ToString() { }
}


// Namespace: System.Net
[Serializable]
public class WebException : InvalidOperationException, ISerializable // TypeDefIndex: 3689
{
	// Fields
	private WebExceptionStatus m_Status; // 0x8C
	private WebResponse m_Response; // 0x90
	private WebExceptionInternalStatus m_InternalStatus; // 0x98

	// Properties
	public WebExceptionStatus Status { get; }
	public WebResponse Response { get; }

	// Methods

	// RVA: 0x12FDEF4 Offset: 0x12F9EF4 VA: 0x12FDEF4
	public void .ctor() { }

	// RVA: 0x12EA450 Offset: 0x12E6450 VA: 0x12EA450
	public void .ctor(string message) { }

	// RVA: 0x12F4970 Offset: 0x12F0970 VA: 0x12F4970
	public void .ctor(string message, Exception innerException) { }

	// RVA: 0x12EB86C Offset: 0x12E786C VA: 0x12EB86C
	public void .ctor(string message, WebExceptionStatus status) { }

	// RVA: 0x12FDF04 Offset: 0x12F9F04 VA: 0x12FDF04
	internal void .ctor(string message, WebExceptionStatus status, WebExceptionInternalStatus internalStatus, Exception innerException) { }

	// RVA: 0x12E9C3C Offset: 0x12E5C3C VA: 0x12E9C3C
	public void .ctor(string message, Exception innerException, WebExceptionStatus status, WebResponse response) { }

	// RVA: 0x12FDF38 Offset: 0x12F9F38 VA: 0x12FDF38
	internal void .ctor(string message, string data, Exception innerException, WebExceptionStatus status, WebResponse response) { }

	// RVA: 0x12FDF20 Offset: 0x12F9F20 VA: 0x12FDF20
	internal void .ctor(string message, Exception innerException, WebExceptionStatus status, WebResponse response, WebExceptionInternalStatus internalStatus) { }

	// RVA: 0x12FE018 Offset: 0x12FA018 VA: 0x12FE018
	internal void .ctor(string message, string data, Exception innerException, WebExceptionStatus status, WebResponse response, WebExceptionInternalStatus internalStatus) { }

	// RVA: 0x12FE108 Offset: 0x12FA108 VA: 0x12FE108
	protected void .ctor(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x12FE118 Offset: 0x12FA118 VA: 0x12FE118 Slot: 4
	private void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x12FE124 Offset: 0x12FA124 VA: 0x12FE124 Slot: 10
	public override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x12FE12C Offset: 0x12FA12C VA: 0x12FE12C
	public WebExceptionStatus get_Status() { }

	// RVA: 0x12FE134 Offset: 0x12FA134 VA: 0x12FE134
	public WebResponse get_Response() { }
}


// Namespace: System.Net
internal enum WebExceptionInternalStatus // TypeDefIndex: 3690
{
	// Fields
	public int value__; // 0x0
	public const WebExceptionInternalStatus RequestFatal = 0;
	public const WebExceptionInternalStatus ServicePointFatal = 1;
	public const WebExceptionInternalStatus Recoverable = 2;
	public const WebExceptionInternalStatus Isolated = 3;
}


// Namespace: System.Net
public enum WebExceptionStatus // TypeDefIndex: 3691
{
	// Fields
	public int value__; // 0x0
	public const WebExceptionStatus Success = 0;
	public const WebExceptionStatus NameResolutionFailure = 1;
	public const WebExceptionStatus ConnectFailure = 2;
	public const WebExceptionStatus ReceiveFailure = 3;
	public const WebExceptionStatus SendFailure = 4;
	public const WebExceptionStatus PipelineFailure = 5;
	public const WebExceptionStatus RequestCanceled = 6;
	public const WebExceptionStatus ProtocolError = 7;
	public const WebExceptionStatus ConnectionClosed = 8;
	public const WebExceptionStatus TrustFailure = 9;
	public const WebExceptionStatus SecureChannelFailure = 10;
	public const WebExceptionStatus ServerProtocolViolation = 11;
	public const WebExceptionStatus KeepAliveFailure = 12;
	public const WebExceptionStatus Pending = 13;
	public const WebExceptionStatus Timeout = 14;
	public const WebExceptionStatus ProxyNameResolutionFailure = 15;
	public const WebExceptionStatus UnknownError = 16;
	public const WebExceptionStatus MessageLengthLimitExceeded = 17;
	public const WebExceptionStatus CacheEntryNotFound = 18;
	public const WebExceptionStatus RequestProhibitedByCachePolicy = 19;
	public const WebExceptionStatus RequestProhibitedByProxy = 20;
}


// Namespace: System.Net
internal static class WebExceptionMapping // TypeDefIndex: 3692
{
	// Fields
	private static readonly string[] s_Mapping; // 0x0

	// Methods

	// RVA: 0x12FE13C Offset: 0x12FA13C VA: 0x12FE13C
	internal static string GetWebStatusString(WebExceptionStatus status) { }

	// RVA: 0x12FE2CC Offset: 0x12FA2CC VA: 0x12FE2CC
	private static void .cctor() { }
}


// Namespace: System.Net
internal enum WebHeaderCollectionType // TypeDefIndex: 3693
{
	// Fields
	public ushort value__; // 0x0
	public const WebHeaderCollectionType Unknown = 0;
	public const WebHeaderCollectionType WebRequest = 1;
	public const WebHeaderCollectionType WebResponse = 2;
	public const WebHeaderCollectionType HttpWebRequest = 3;
	public const WebHeaderCollectionType HttpWebResponse = 4;
	public const WebHeaderCollectionType HttpListenerRequest = 5;
	public const WebHeaderCollectionType HttpListenerResponse = 6;
	public const WebHeaderCollectionType FtpWebRequest = 7;
	public const WebHeaderCollectionType FtpWebResponse = 8;
	public const WebHeaderCollectionType FileWebRequest = 9;
	public const WebHeaderCollectionType FileWebResponse = 10;
}


// Namespace: 
private enum WebHeaderCollection.RfcChar // TypeDefIndex: 3694
{
	// Fields
	public byte value__; // 0x0
	public const WebHeaderCollection.RfcChar High = 0;
	public const WebHeaderCollection.RfcChar Reg = 1;
	public const WebHeaderCollection.RfcChar Ctl = 2;
	public const WebHeaderCollection.RfcChar CR = 3;
	public const WebHeaderCollection.RfcChar LF = 4;
	public const WebHeaderCollection.RfcChar WS = 5;
	public const WebHeaderCollection.RfcChar Colon = 6;
	public const WebHeaderCollection.RfcChar Delim = 7;
}


// Namespace: System.Net
[DefaultMember("Item")]
[Serializable]
public class WebHeaderCollection : NameValueCollection, ISerializable // TypeDefIndex: 3695
{
	// Fields
	private static readonly HeaderInfoTable HInfo; // 0x0
	private string[] m_CommonHeaders; // 0x60
	private int m_NumCommonHeaders; // 0x68
	private static readonly string[] s_CommonHeaderNames; // 0x8
	private static readonly sbyte[] s_CommonHeaderHints; // 0x10
	private NameValueCollection m_InnerCollection; // 0x70
	private WebHeaderCollectionType m_Type; // 0x78
	private static readonly char[] HttpTrimCharacters; // 0x18
	private static WebHeaderCollection.RfcChar[] RfcCharMap; // 0x20

	// Properties
	private NameValueCollection InnerCollection { get; }
	private bool AllowHttpRequestHeader { get; }
	public HttpRequestHeader Item { set; }
	public override int Count { get; }
	public override string[] AllKeys { get; }

	// Methods

	// RVA: 0x12FE334 Offset: 0x12FA334 VA: 0x12FE334
	private void NormalizeCommonHeaders() { }

	// RVA: 0x12FE434 Offset: 0x12FA434 VA: 0x12FE434
	private NameValueCollection get_InnerCollection() { }

	// RVA: 0x12FE4D0 Offset: 0x12FA4D0 VA: 0x12FE4D0
	internal static bool AllowMultiValues(string name) { }

	// RVA: 0x12FE57C Offset: 0x12FA57C VA: 0x12FE57C
	private bool get_AllowHttpRequestHeader() { }

	// RVA: 0x12FE5BC Offset: 0x12FA5BC VA: 0x12FE5BC
	public void set_Item(HttpRequestHeader header, string value) { }

	// RVA: 0x12FE6B4 Offset: 0x12FA6B4 VA: 0x12FE6B4
	public void Remove(HttpRequestHeader header) { }

	// RVA: 0x12FE7A4 Offset: 0x12FA7A4 VA: 0x12FE7A4
	internal void AddInternal(string name, string value) { }

	// RVA: 0x12FE7F8 Offset: 0x12FA7F8 VA: 0x12FE7F8
	internal void ChangeInternal(string name, string value) { }

	// RVA: 0x12FE84C Offset: 0x12FA84C VA: 0x12FE84C
	internal void RemoveInternal(string name) { }

	// RVA: 0x12FE8A8 Offset: 0x12FA8A8 VA: 0x12FE8A8
	internal void CheckUpdate(string name, string value) { }

	// RVA: 0x12FE920 Offset: 0x12FA920 VA: 0x12FE920
	internal static string CheckBadChars(string name, bool isHeaderValue) { }

	// RVA: 0x12FECB0 Offset: 0x12FACB0 VA: 0x12FECB0
	internal static bool ContainsNonAsciiChars(string token) { }

	// RVA: 0x12FED34 Offset: 0x12FAD34 VA: 0x12FED34
	internal void ThrowOnRestrictedHeader(string headerName) { }

	// RVA: 0x12FEEA8 Offset: 0x12FAEA8 VA: 0x12FEEA8 Slot: 15
	public override void Add(string name, string value) { }

	// RVA: 0x12FF058 Offset: 0x12FB058 VA: 0x12FF058
	public void Add(string header) { }

	// RVA: 0x12FF328 Offset: 0x12FB328 VA: 0x12FF328 Slot: 18
	public override void Set(string name, string value) { }

	// RVA: 0x12FF550 Offset: 0x12FB550 VA: 0x12FF550
	internal void SetInternal(string name, string value) { }

	// RVA: 0x12FF76C Offset: 0x12FB76C VA: 0x12FF76C Slot: 19
	public override void Remove(string name) { }

	// RVA: 0x12FF8A4 Offset: 0x12FB8A4 VA: 0x12FF8A4 Slot: 17
	public override string[] GetValues(string header) { }

	// RVA: 0x12FFAA8 Offset: 0x12FBAA8 VA: 0x12FFAA8 Slot: 3
	public override string ToString() { }

	// RVA: 0x12FFB04 Offset: 0x12FBB04 VA: 0x12FFB04
	internal static string GetAsString(NameValueCollection cc, bool winInetCompat, bool forTrace) { }

	// RVA: 0x12F55C4 Offset: 0x12F15C4 VA: 0x12F55C4
	public void .ctor() { }

	// RVA: 0x12FFDB0 Offset: 0x12FBDB0 VA: 0x12FFDB0
	internal void .ctor(WebHeaderCollectionType type) { }

	// RVA: 0x12FFE94 Offset: 0x12FBE94 VA: 0x12FFE94
	protected void .ctor(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x1300054 Offset: 0x12FC054 VA: 0x1300054 Slot: 12
	public override void OnDeserialization(object sender) { }

	// RVA: 0x1300058 Offset: 0x12FC058 VA: 0x1300058 Slot: 11
	public override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x13001D8 Offset: 0x12FC1D8 VA: 0x13001D8 Slot: 9
	private void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x13001E4 Offset: 0x12FC1E4 VA: 0x13001E4 Slot: 16
	public override string Get(string name) { }

	// RVA: 0x1300510 Offset: 0x12FC510 VA: 0x1300510 Slot: 13
	public override IEnumerator GetEnumerator() { }

	// RVA: 0x1300584 Offset: 0x12FC584 VA: 0x1300584 Slot: 14
	public override int get_Count() { }

	// RVA: 0x13005B4 Offset: 0x12FC5B4 VA: 0x13005B4 Slot: 20
	public override string Get(int index) { }

	// RVA: 0x13005F4 Offset: 0x12FC5F4 VA: 0x13005F4 Slot: 21
	public override string GetKey(int index) { }

	// RVA: 0x1300634 Offset: 0x12FC634 VA: 0x1300634 Slot: 22
	public override string[] get_AllKeys() { }

	// RVA: 0x1300664 Offset: 0x12FC664 VA: 0x1300664
	private static void .cctor() { }
}


// Namespace: System.Net
internal class CaseInsensitiveAscii : IEqualityComparer, IComparer // TypeDefIndex: 3696
{
	// Fields
	internal static readonly CaseInsensitiveAscii StaticInstance; // 0x0
	internal static readonly byte[] AsciiToLower; // 0x8

	// Methods

	// RVA: 0x1300C54 Offset: 0x12FCC54 VA: 0x1300C54 Slot: 5
	public int GetHashCode(object myObject) { }

	// RVA: 0x1300D6C Offset: 0x12FCD6C VA: 0x1300D6C Slot: 6
	public int Compare(object firstObject, object secondObject) { }

	// RVA: 0x1300EDC Offset: 0x12FCEDC VA: 0x1300EDC
	private int FastGetHashCode(string myString) { }

	// RVA: 0x1300FCC Offset: 0x12FCFCC VA: 0x1300FCC Slot: 4
	public bool Equals(object firstObject, object secondObject) { }

	// RVA: 0x130114C Offset: 0x12FD14C VA: 0x130114C
	public void .ctor() { }

	// RVA: 0x1301154 Offset: 0x12FD154 VA: 0x1301154
	private static void .cctor() { }
}


// Namespace: 
internal class WebRequest.DesignerWebRequestCreate : IWebRequestCreate // TypeDefIndex: 3697
{
	// Methods

	// RVA: 0x1302A9C Offset: 0x12FEA9C VA: 0x1302A9C Slot: 4
	public WebRequest Create(Uri uri) { }

	// RVA: 0x13028AC Offset: 0x12FE8AC VA: 0x13028AC
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class WebRequest.<>c__DisplayClass78_0 // TypeDefIndex: 3698
{
	// Fields
	public WindowsIdentity currentUser; // 0x10
	public WebRequest <>4__this; // 0x18

	// Methods

	// RVA: 0x13020EC Offset: 0x12FE0EC VA: 0x13020EC
	public void .ctor() { }

	// RVA: 0x1302AF0 Offset: 0x12FEAF0 VA: 0x1302AF0
	internal Task<Stream> <GetRequestStreamAsync>b__1() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class WebRequest.<>c__DisplayClass79_0 // TypeDefIndex: 3699
{
	// Fields
	public WindowsIdentity currentUser; // 0x10
	public WebRequest <>4__this; // 0x18

	// Methods

	// RVA: 0x13023C8 Offset: 0x12FE3C8 VA: 0x13023C8
	public void .ctor() { }

	// RVA: 0x1302E88 Offset: 0x12FEE88 VA: 0x1302E88
	internal Task<WebResponse> <GetResponseAsync>b__1() { }
}


// Namespace: System.Net
[Serializable]
public abstract class WebRequest : MarshalByRefObject, ISerializable // TypeDefIndex: 3700
{
	// Fields
	private static ArrayList s_PrefixList; // 0x0
	private static object s_InternalSyncObject; // 0x8
	private static TimerThread.Queue s_DefaultTimerQueue; // 0x10
	private AuthenticationLevel m_AuthenticationLevel; // 0x18
	private TokenImpersonationLevel m_ImpersonationLevel; // 0x1C
	private RequestCachePolicy m_CachePolicy; // 0x20
	private RequestCacheProtocol m_CacheProtocol; // 0x28
	private RequestCacheBinding m_CacheBinding; // 0x30
	private static WebRequest.DesignerWebRequestCreate webRequestCreate; // 0x18
	private static IWebProxy s_DefaultWebProxy; // 0x20
	private static bool s_DefaultWebProxyInitialized; // 0x28

	// Properties
	private static object InternalSyncObject { get; }
	internal static ArrayList PrefixList { get; }
	public virtual RequestCachePolicy CachePolicy { set; }
	public virtual string Method { get; set; }
	public virtual Uri RequestUri { get; }
	public virtual WebHeaderCollection Headers { get; set; }
	public virtual long ContentLength { get; set; }
	public virtual string ContentType { set; }
	public virtual ICredentials Credentials { get; set; }
	public virtual bool UseDefaultCredentials { get; }
	public virtual IWebProxy Proxy { get; set; }
	internal static IWebProxy InternalDefaultWebProxy { get; }

	// Methods

	// RVA: 0x1301208 Offset: 0x12FD208 VA: 0x1301208
	private static object get_InternalSyncObject() { }

	// RVA: 0x13012D4 Offset: 0x12FD2D4 VA: 0x13012D4
	private static WebRequest Create(Uri requestUri, bool useUriBase) { }

	// RVA: 0x13016D0 Offset: 0x12FD6D0 VA: 0x13016D0
	public static WebRequest Create(string requestUriString) { }

	// RVA: 0x13017A0 Offset: 0x12FD7A0 VA: 0x13017A0
	public static WebRequest Create(Uri requestUri) { }

	// RVA: 0x130153C Offset: 0x12FD53C VA: 0x130153C
	internal static ArrayList get_PrefixList() { }

	// RVA: 0x1301878 Offset: 0x12FD878 VA: 0x1301878
	private static ArrayList PopulatePrefixList() { }

	// RVA: 0x1301AA8 Offset: 0x12FDAA8 VA: 0x1301AA8
	protected void .ctor() { }

	// RVA: 0x1301ACC Offset: 0x12FDACC VA: 0x1301ACC
	protected void .ctor(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x1301AD4 Offset: 0x12FDAD4 VA: 0x1301AD4 Slot: 4
	private void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x1301AE0 Offset: 0x12FDAE0 VA: 0x1301AE0 Slot: 5
	protected virtual void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x1301AE4 Offset: 0x12FDAE4 VA: 0x1301AE4 Slot: 6
	public virtual void set_CachePolicy(RequestCachePolicy value) { }

	// RVA: 0x1301AE8 Offset: 0x12FDAE8 VA: 0x1301AE8
	private void InternalSetCachePolicy(RequestCachePolicy policy) { }

	// RVA: 0x1301B98 Offset: 0x12FDB98 VA: 0x1301B98 Slot: 7
	public virtual string get_Method() { }

	// RVA: 0x1301BC0 Offset: 0x12FDBC0 VA: 0x1301BC0 Slot: 8
	public virtual void set_Method(string value) { }

	// RVA: 0x1301BE8 Offset: 0x12FDBE8 VA: 0x1301BE8 Slot: 9
	public virtual Uri get_RequestUri() { }

	// RVA: 0x1301C10 Offset: 0x12FDC10 VA: 0x1301C10 Slot: 10
	public virtual WebHeaderCollection get_Headers() { }

	// RVA: 0x1301C38 Offset: 0x12FDC38 VA: 0x1301C38 Slot: 11
	public virtual void set_Headers(WebHeaderCollection value) { }

	// RVA: 0x1301C60 Offset: 0x12FDC60 VA: 0x1301C60 Slot: 12
	public virtual long get_ContentLength() { }

	// RVA: 0x1301C88 Offset: 0x12FDC88 VA: 0x1301C88 Slot: 13
	public virtual void set_ContentLength(long value) { }

	// RVA: 0x1301CB0 Offset: 0x12FDCB0 VA: 0x1301CB0 Slot: 14
	public virtual void set_ContentType(string value) { }

	// RVA: 0x1301CD8 Offset: 0x12FDCD8 VA: 0x1301CD8 Slot: 15
	public virtual ICredentials get_Credentials() { }

	// RVA: 0x1301D00 Offset: 0x12FDD00 VA: 0x1301D00 Slot: 16
	public virtual void set_Credentials(ICredentials value) { }

	// RVA: 0x1301D28 Offset: 0x12FDD28 VA: 0x1301D28 Slot: 17
	public virtual bool get_UseDefaultCredentials() { }

	// RVA: 0x1301D50 Offset: 0x12FDD50 VA: 0x1301D50 Slot: 18
	public virtual IWebProxy get_Proxy() { }

	// RVA: 0x1301D78 Offset: 0x12FDD78 VA: 0x1301D78 Slot: 19
	public virtual void set_Proxy(IWebProxy value) { }

	// RVA: 0x1301DA0 Offset: 0x12FDDA0 VA: 0x1301DA0 Slot: 20
	public virtual WebResponse GetResponse() { }

	// RVA: 0x1301DC8 Offset: 0x12FDDC8 VA: 0x1301DC8 Slot: 21
	public virtual IAsyncResult BeginGetResponse(AsyncCallback callback, object state) { }

	// RVA: 0x1301DF0 Offset: 0x12FDDF0 VA: 0x1301DF0 Slot: 22
	public virtual WebResponse EndGetResponse(IAsyncResult asyncResult) { }

	// RVA: 0x1301E18 Offset: 0x12FDE18 VA: 0x1301E18 Slot: 23
	public virtual IAsyncResult BeginGetRequestStream(AsyncCallback callback, object state) { }

	// RVA: 0x1301E40 Offset: 0x12FDE40 VA: 0x1301E40 Slot: 24
	public virtual Stream EndGetRequestStream(IAsyncResult asyncResult) { }

	// RVA: 0x1301E68 Offset: 0x12FDE68 VA: 0x1301E68 Slot: 25
	public virtual Task<Stream> GetRequestStreamAsync() { }

	// RVA: 0x1302144 Offset: 0x12FE144 VA: 0x1302144 Slot: 26
	public virtual Task<WebResponse> GetResponseAsync() { }

	// RVA: 0x13020F4 Offset: 0x12FE0F4 VA: 0x13020F4
	private WindowsIdentity SafeCaptureIdenity() { }

	// RVA: 0x13023D0 Offset: 0x12FE3D0 VA: 0x13023D0 Slot: 27
	public virtual void Abort() { }

	// RVA: 0x13023F8 Offset: 0x12FE3F8 VA: 0x13023F8
	internal static IWebProxy get_InternalDefaultWebProxy() { }

	// RVA: 0x13025C4 Offset: 0x12FE5C4 VA: 0x13025C4
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x13028B4 Offset: 0x12FE8B4 VA: 0x13028B4
	private Task<Stream> <GetRequestStreamAsync>b__78_0() { }

	[CompilerGenerated]
	// RVA: 0x13029A8 Offset: 0x12FE9A8 VA: 0x13029A8
	private Task<WebResponse> <GetResponseAsync>b__79_0() { }
}


// Namespace: System.Net
[Serializable]
public abstract class WebResponse : MarshalByRefObject, ISerializable, IDisposable // TypeDefIndex: 3701
{
	// Fields
	private bool m_IsFromCache; // 0x18

	// Properties
	public virtual long ContentLength { get; }
	public virtual Uri ResponseUri { get; }
	public virtual WebHeaderCollection Headers { get; }

	// Methods

	// RVA: 0x1303220 Offset: 0x12FF220 VA: 0x1303220
	protected void .ctor() { }

	// RVA: 0x1303228 Offset: 0x12FF228 VA: 0x1303228
	protected void .ctor(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x1303230 Offset: 0x12FF230 VA: 0x1303230 Slot: 4
	private void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x130323C Offset: 0x12FF23C VA: 0x130323C Slot: 6
	protected virtual void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x1303240 Offset: 0x12FF240 VA: 0x1303240 Slot: 7
	public virtual void Close() { }

	// RVA: 0x1303244 Offset: 0x12FF244 VA: 0x1303244 Slot: 5
	public void Dispose() { }

	// RVA: 0x13032B0 Offset: 0x12FF2B0 VA: 0x13032B0 Slot: 8
	protected virtual void Dispose(bool disposing) { }

	// RVA: 0x130333C Offset: 0x12FF33C VA: 0x130333C Slot: 9
	public virtual long get_ContentLength() { }

	// RVA: 0x1303364 Offset: 0x12FF364 VA: 0x1303364 Slot: 10
	public virtual Stream GetResponseStream() { }

	// RVA: 0x130338C Offset: 0x12FF38C VA: 0x130338C Slot: 11
	public virtual Uri get_ResponseUri() { }

	// RVA: 0x13033B4 Offset: 0x12FF3B4 VA: 0x13033B4 Slot: 12
	public virtual WebHeaderCollection get_Headers() { }
}


// Namespace: System.Net
internal class BufferOffsetSize // TypeDefIndex: 3702
{
	// Fields
	internal byte[] Buffer; // 0x10
	internal int Offset; // 0x18
	internal int Size; // 0x1C

	// Methods

	// RVA: 0x13033DC Offset: 0x12FF3DC VA: 0x13033DC
	internal void .ctor(byte[] buffer, int offset, int size, bool copyBuffer) { }

	// RVA: 0x1303488 Offset: 0x12FF488 VA: 0x1303488
	internal void .ctor(byte[] buffer, bool copyBuffer) { }
}


// Namespace: System.Net
internal sealed class HeaderParser : MulticastDelegate // TypeDefIndex: 3703
{
	// Methods

	// RVA: 0x13034A8 Offset: 0x12FF4A8 VA: 0x13034A8
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x1303544 Offset: 0x12FF544 VA: 0x1303544 Slot: 12
	public virtual string[] Invoke(string value) { }
}


// Namespace: System.Net
internal class HeaderInfo // TypeDefIndex: 3704
{
	// Fields
	internal readonly bool IsRequestRestricted; // 0x10
	internal readonly bool IsResponseRestricted; // 0x11
	internal readonly HeaderParser Parser; // 0x18
	internal readonly string HeaderName; // 0x20
	internal readonly bool AllowMultiValues; // 0x28

	// Methods

	// RVA: 0x1303558 Offset: 0x12FF558 VA: 0x1303558
	internal void .ctor(string name, bool requestRestricted, bool responseRestricted, bool multi, HeaderParser p) { }
}


// Namespace: System.Net
[DefaultMember("Item")]
internal class HeaderInfoTable // TypeDefIndex: 3705
{
	// Fields
	private static Hashtable HeaderHashTable; // 0x0
	private static HeaderInfo UnknownHeaderInfo; // 0x8
	private static HeaderParser SingleParser; // 0x10
	private static HeaderParser MultiParser; // 0x18

	// Properties
	internal HeaderInfo Item { get; }

	// Methods

	// RVA: 0x13035AC Offset: 0x12FF5AC VA: 0x13035AC
	private static string[] ParseSingleValue(string value) { }

	// RVA: 0x1303610 Offset: 0x12FF610 VA: 0x1303610
	private static string[] ParseMultiValue(string value) { }

	// RVA: 0x1303814 Offset: 0x12FF814 VA: 0x1303814
	private static void .cctor() { }

	// RVA: 0x1305028 Offset: 0x1301028 VA: 0x1305028
	internal HeaderInfo get_Item(string name) { }

	// RVA: 0x1305104 Offset: 0x1301104 VA: 0x1305104
	public void .ctor() { }
}


// Namespace: System.Net
[Flags]
internal enum CloseExState // TypeDefIndex: 3706
{
	// Fields
	public int value__; // 0x0
	public const CloseExState Normal = 0;
	public const CloseExState Abort = 1;
	public const CloseExState Silent = 2;
}


// Namespace: System.Net
internal interface ICloseEx // TypeDefIndex: 3707
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void CloseEx(CloseExState closeState);
}


// Namespace: 
private class LazyAsyncResult.ThreadContext // TypeDefIndex: 3708
{
	// Fields
	internal int m_NestedIOCount; // 0x10

	// Methods

	// RVA: 0x1305198 Offset: 0x1301198 VA: 0x1305198
	public void .ctor() { }
}


// Namespace: System.Net
internal class LazyAsyncResult : IAsyncResult // TypeDefIndex: 3709
{
	// Fields
	[ThreadStatic]
	private static LazyAsyncResult.ThreadContext t_ThreadContext; // 0x80000000
	private object m_AsyncObject; // 0x10
	private object m_AsyncState; // 0x18
	private AsyncCallback m_AsyncCallback; // 0x20
	private object m_Result; // 0x28
	private int m_IntCompleted; // 0x30
	private bool m_EndCalled; // 0x34
	private bool m_UserEvent; // 0x35
	private object m_Event; // 0x38

	// Properties
	private static LazyAsyncResult.ThreadContext CurrentThreadContext { get; }
	public object AsyncState { get; }
	public WaitHandle AsyncWaitHandle { get; }
	public bool CompletedSynchronously { get; }
	public bool IsCompleted { get; }
	internal bool InternalPeekCompleted { get; }
	internal bool EndCalled { get; set; }

	// Methods

	// RVA: 0x130510C Offset: 0x130110C VA: 0x130510C
	private static LazyAsyncResult.ThreadContext get_CurrentThreadContext() { }

	// RVA: 0x13051A0 Offset: 0x13011A0 VA: 0x13051A0
	internal void .ctor(object myObject, object myState, AsyncCallback myCallBack) { }

	// RVA: 0x1305230 Offset: 0x1301230 VA: 0x1305230 Slot: 6
	public object get_AsyncState() { }

	// RVA: 0x1305238 Offset: 0x1301238 VA: 0x1305238 Slot: 5
	public WaitHandle get_AsyncWaitHandle() { }

	// RVA: 0x13052D0 Offset: 0x13012D0 VA: 0x13052D0
	private bool LazilyCreateEvent(out ManualResetEvent waitHandle) { }

	// RVA: 0x1305484 Offset: 0x1301484 VA: 0x1305484 Slot: 7
	public bool get_CompletedSynchronously() { }

	// RVA: 0x13054B4 Offset: 0x13014B4 VA: 0x13054B4 Slot: 4
	public bool get_IsCompleted() { }

	// RVA: 0x1305474 Offset: 0x1301474 VA: 0x1305474
	internal bool get_InternalPeekCompleted() { }

	// RVA: 0x13054E4 Offset: 0x13014E4 VA: 0x13054E4
	internal bool get_EndCalled() { }

	// RVA: 0x13054EC Offset: 0x13014EC VA: 0x13054EC
	internal void set_EndCalled(bool value) { }

	// RVA: 0x13054F8 Offset: 0x13014F8 VA: 0x13054F8
	protected void ProtectedInvokeCallback(object result, IntPtr userToken) { }

	// RVA: 0x13056CC Offset: 0x13016CC VA: 0x13056CC
	internal void InvokeCallback(object result) { }

	// RVA: 0x13056D4 Offset: 0x13016D4 VA: 0x13056D4
	internal void InvokeCallback() { }

	// RVA: 0x13056E0 Offset: 0x13016E0 VA: 0x13056E0 Slot: 8
	protected virtual void Complete(IntPtr userToken) { }

	// RVA: 0x1305868 Offset: 0x1301868 VA: 0x1305868
	private void WorkerThreadComplete(object state) { }

	// RVA: 0x1305914 Offset: 0x1301914 VA: 0x1305914 Slot: 9
	protected virtual void Cleanup() { }

	// RVA: 0x1305918 Offset: 0x1301918 VA: 0x1305918
	internal object InternalWaitForCompletion() { }

	// RVA: 0x1305920 Offset: 0x1301920 VA: 0x1305920
	private object WaitForCompletion(bool snap) { }
}


// Namespace: System.Net
internal class NetRes // TypeDefIndex: 3710
{
	// Methods

	// RVA: 0x1305BC0 Offset: 0x1301BC0 VA: 0x1305BC0
	public static string GetWebStatusString(string Res, WebExceptionStatus Status) { }

	// RVA: 0x1305C80 Offset: 0x1301C80 VA: 0x1305C80
	public static string GetWebStatusString(WebExceptionStatus Status) { }

	// RVA: 0x1305CE0 Offset: 0x1301CE0 VA: 0x1305CE0
	public static string GetWebStatusCodeString(FtpStatusCode statusCode, string statusDescription) { }
}


// Namespace: 
internal abstract class TimerThread.Queue // TypeDefIndex: 3711
{
	// Fields
	private readonly int m_DurationMilliseconds; // 0x10

	// Methods

	// RVA: 0x130769C Offset: 0x130369C VA: 0x130769C
	internal void .ctor(int durationMilliseconds) { }

	// RVA: -1 Offset: -1 Slot: 4
	internal abstract TimerThread.Timer CreateTimer(TimerThread.Callback callback, object context);
}


// Namespace: 
internal abstract class TimerThread.Timer : IDisposable // TypeDefIndex: 3712
{
	// Fields
	private readonly int m_StartTimeMilliseconds; // 0x10
	private readonly int m_DurationMilliseconds; // 0x14

	// Properties
	internal int Expiration { get; }
	internal abstract bool HasExpired { get; }

	// Methods

	// RVA: 0x13076C4 Offset: 0x13036C4 VA: 0x13076C4
	internal void .ctor(int durationMilliseconds) { }

	// RVA: 0x13076F8 Offset: 0x13036F8 VA: 0x13076F8
	internal int get_Expiration() { }

	// RVA: -1 Offset: -1 Slot: 5
	internal abstract bool Cancel();

	// RVA: -1 Offset: -1 Slot: 6
	internal abstract bool get_HasExpired();

	// RVA: 0x1307704 Offset: 0x1303704 VA: 0x1307704 Slot: 4
	public void Dispose() { }
}


// Namespace: 
internal sealed class TimerThread.Callback : MulticastDelegate // TypeDefIndex: 3713
{
	// Methods

	// RVA: 0x1307710 Offset: 0x1303710 VA: 0x1307710
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x1307814 Offset: 0x1303814 VA: 0x1307814 Slot: 12
	public virtual void Invoke(TimerThread.Timer timer, int timeNoticed, object context) { }
}


// Namespace: 
private class TimerThread.TimerQueue : TimerThread.Queue // TypeDefIndex: 3714
{
	// Fields
	private IntPtr m_ThisHandle; // 0x18
	private readonly TimerThread.TimerNode m_Timers; // 0x20

	// Methods

	// RVA: 0x1306154 Offset: 0x1302154 VA: 0x1306154
	internal void .ctor(int durationMilliseconds) { }

	// RVA: 0x1307858 Offset: 0x1303858 VA: 0x1307858 Slot: 4
	internal override TimerThread.Timer CreateTimer(TimerThread.Callback callback, object context) { }

	// RVA: 0x13073A8 Offset: 0x13033A8 VA: 0x13073A8
	internal bool Fire(out int nextExpiration) { }
}


// Namespace: 
private class TimerThread.InfiniteTimerQueue : TimerThread.Queue // TypeDefIndex: 3715
{
	// Methods

	// RVA: 0x1306134 Offset: 0x1302134 VA: 0x1306134
	internal void .ctor() { }

	// RVA: 0x1307D00 Offset: 0x1303D00 VA: 0x1307D00 Slot: 4
	internal override TimerThread.Timer CreateTimer(TimerThread.Callback callback, object context) { }
}


// Namespace: 
private enum TimerThread.TimerNode.TimerState // TypeDefIndex: 3716
{
	// Fields
	public int value__; // 0x0
	public const TimerThread.TimerNode.TimerState Ready = 0;
	public const TimerThread.TimerNode.TimerState Fired = 1;
	public const TimerThread.TimerNode.TimerState Cancelled = 2;
	public const TimerThread.TimerNode.TimerState Sentinel = 3;
}


// Namespace: 
private class TimerThread.TimerNode : TimerThread.Timer // TypeDefIndex: 3717
{
	// Fields
	private TimerThread.TimerNode.TimerState m_TimerState; // 0x18
	private TimerThread.Callback m_Callback; // 0x20
	private object m_Context; // 0x28
	private object m_QueueLock; // 0x30
	private TimerThread.TimerNode next; // 0x38
	private TimerThread.TimerNode prev; // 0x40

	// Properties
	internal override bool HasExpired { get; }

	// Methods

	// RVA: 0x1307A38 Offset: 0x1303A38 VA: 0x1307A38
	internal void .ctor(TimerThread.Callback callback, object context, int durationMilliseconds, object queueLock) { }

	// RVA: 0x1307828 Offset: 0x1303828 VA: 0x1307828
	internal void .ctor() { }

	// RVA: 0x1307D94 Offset: 0x1303D94 VA: 0x1307D94 Slot: 6
	internal override bool get_HasExpired() { }

	// RVA: 0x1307DA4 Offset: 0x1303DA4 VA: 0x1307DA4 Slot: 5
	internal override bool Cancel() { }

	// RVA: 0x1307A90 Offset: 0x1303A90 VA: 0x1307A90
	internal bool Fire() { }
}


// Namespace: 
private class TimerThread.InfiniteTimer : TimerThread.Timer // TypeDefIndex: 3718
{
	// Fields
	private int cancelled; // 0x18

	// Properties
	internal override bool HasExpired { get; }

	// Methods

	// RVA: 0x1307D68 Offset: 0x1303D68 VA: 0x1307D68
	internal void .ctor() { }

	// RVA: 0x1307EC4 Offset: 0x1303EC4 VA: 0x1307EC4 Slot: 6
	internal override bool get_HasExpired() { }

	// RVA: 0x1307ECC Offset: 0x1303ECC VA: 0x1307ECC Slot: 5
	internal override bool Cancel() { }
}


// Namespace: System.Net
internal static class TimerThread // TypeDefIndex: 3719
{
	// Fields
	private static LinkedList<WeakReference> s_Queues; // 0x0
	private static LinkedList<WeakReference> s_NewQueues; // 0x8
	private static int s_ThreadState; // 0x10
	private static AutoResetEvent s_ThreadReadyEvent; // 0x18
	private static ManualResetEvent s_ThreadShutdownEvent; // 0x20
	private static WaitHandle[] s_ThreadEvents; // 0x28
	private static int s_CacheScanIteration; // 0x30
	private static Hashtable s_QueuesCache; // 0x38

	// Methods

	// RVA: 0x1305EC0 Offset: 0x1301EC0 VA: 0x1305EC0
	private static void .cctor() { }

	// RVA: 0x1302670 Offset: 0x12FE670 VA: 0x1302670
	internal static TimerThread.Queue CreateQueue(int durationMilliseconds) { }

	// RVA: 0x13061E4 Offset: 0x13021E4 VA: 0x13061E4
	internal static TimerThread.Queue GetOrCreateQueue(int durationMilliseconds) { }

	// RVA: 0x1306AF4 Offset: 0x1302AF4 VA: 0x1306AF4
	private static void Prod() { }

	// RVA: 0x1306C04 Offset: 0x1302C04 VA: 0x1306C04
	private static void ThreadProc() { }

	// RVA: 0x130755C Offset: 0x130355C VA: 0x130755C
	private static void StopTimerThread() { }

	// RVA: 0x1307538 Offset: 0x1303538 VA: 0x1307538
	private static bool IsTickBetween(int start, int end, int comparand) { }

	// RVA: 0x13075D8 Offset: 0x13035D8 VA: 0x13075D8
	private static void OnDomainUnload(object sender, EventArgs e) { }
}


// Namespace: System.Net
internal enum CookieVariant // TypeDefIndex: 3720
{
	// Fields
	public int value__; // 0x0
	public const CookieVariant Unknown = 0;
	public const CookieVariant Plain = 1;
	public const CookieVariant Rfc2109 = 2;
	public const CookieVariant Rfc2965 = 3;
	public const CookieVariant Default = 2;
}


// Namespace: System.Net
[Serializable]
public sealed class Cookie // TypeDefIndex: 3721
{
	// Fields
	internal static readonly char[] PortSplitDelimiters; // 0x0
	internal static readonly char[] Reserved2Name; // 0x8
	internal static readonly char[] Reserved2Value; // 0x10
	private static Comparer staticComparer; // 0x18
	private string m_comment; // 0x10
	private Uri m_commentUri; // 0x18
	private CookieVariant m_cookieVariant; // 0x20
	private bool m_discard; // 0x24
	private string m_domain; // 0x28
	private bool m_domain_implicit; // 0x30
	private DateTime m_expires; // 0x38
	private string m_name; // 0x40
	private string m_path; // 0x48
	private bool m_path_implicit; // 0x50
	private string m_port; // 0x58
	private bool m_port_implicit; // 0x60
	private int[] m_port_list; // 0x68
	private bool m_secure; // 0x70
	[OptionalField]
	private bool m_httpOnly; // 0x71
	private DateTime m_timeStamp; // 0x78
	private string m_value; // 0x80
	private int m_version; // 0x88
	private string m_domainKey; // 0x90
	internal bool IsQuotedVersion; // 0x98
	internal bool IsQuotedDomain; // 0x99

	// Properties
	public string Comment { set; }
	public string Domain { set; }
	private string _Domain { get; }
	public bool Expired { get; }
	public string Path { set; }
	private string _Path { get; }
	internal bool Plain { get; }
	public string Port { set; }
	private string _Port { get; }
	public string Value { set; }
	internal string DomainKey { get; }
	public int Version { set; }
	private string _Version { get; }

	// Methods

	// RVA: 0x1307EF0 Offset: 0x1303EF0 VA: 0x1307EF0
	public void .ctor() { }

	// RVA: 0x1307FD0 Offset: 0x1303FD0 VA: 0x1307FD0
	public void set_Comment(string value) { }

	// RVA: 0x1308028 Offset: 0x1304028 VA: 0x1308028
	public void set_Domain(string value) { }

	// RVA: 0x130809C Offset: 0x130409C VA: 0x130809C
	private string get__Domain() { }

	// RVA: 0x1308178 Offset: 0x1304178 VA: 0x1308178
	public bool get_Expired() { }

	// RVA: 0x1308230 Offset: 0x1304230 VA: 0x1308230
	internal bool InternalSetName(string value) { }

	// RVA: 0x1308334 Offset: 0x1304334 VA: 0x1308334
	public void set_Path(string value) { }

	// RVA: 0x13083A0 Offset: 0x13043A0 VA: 0x13083A0
	private string get__Path() { }

	// RVA: 0x1308168 Offset: 0x1304168 VA: 0x1308168
	internal bool get_Plain() { }

	// RVA: 0x130843C Offset: 0x130443C VA: 0x130843C
	private static bool IsDomainEqualToHost(string domain, string host) { }

	// RVA: 0x1308494 Offset: 0x1304494 VA: 0x1308494
	internal bool VerifySetDefaults(CookieVariant variant, Uri uri, bool isLocalDomain, string localDomain, bool set_default, bool isThrow) { }

	// RVA: 0x1308E68 Offset: 0x1304E68 VA: 0x1308E68
	private static bool DomainCharsTest(string name) { }

	// RVA: 0x1308FE0 Offset: 0x1304FE0 VA: 0x1308FE0
	public void set_Port(string value) { }

	// RVA: 0x13092D0 Offset: 0x13052D0 VA: 0x13092D0
	private string get__Port() { }

	// RVA: 0x1309398 Offset: 0x1305398 VA: 0x1309398
	public void set_Value(string value) { }

	// RVA: 0x1309400 Offset: 0x1305400 VA: 0x1309400
	internal string get_DomainKey() { }

	// RVA: 0x130941C Offset: 0x130541C VA: 0x130941C
	public void set_Version(int value) { }

	// RVA: 0x1309490 Offset: 0x1305490 VA: 0x1309490
	private string get__Version() { }

	// RVA: 0x130959C Offset: 0x130559C VA: 0x130959C Slot: 0
	public override bool Equals(object comparand) { }

	// RVA: 0x130966C Offset: 0x130566C VA: 0x130966C Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x13097CC Offset: 0x13057CC VA: 0x13097CC Slot: 3
	public override string ToString() { }

	// RVA: 0x1309A18 Offset: 0x1305A18 VA: 0x1309A18
	private static void .cctor() { }
}


// Namespace: System.Net
internal enum CookieToken // TypeDefIndex: 3722
{
	// Fields
	public int value__; // 0x0
	public const CookieToken Nothing = 0;
	public const CookieToken NameValuePair = 1;
	public const CookieToken Attribute = 2;
	public const CookieToken EndToken = 3;
	public const CookieToken EndCookie = 4;
	public const CookieToken End = 5;
	public const CookieToken Equals = 6;
	public const CookieToken Comment = 7;
	public const CookieToken CommentUrl = 8;
	public const CookieToken CookieName = 9;
	public const CookieToken Discard = 10;
	public const CookieToken Domain = 11;
	public const CookieToken Expires = 12;
	public const CookieToken MaxAge = 13;
	public const CookieToken Path = 14;
	public const CookieToken Port = 15;
	public const CookieToken Secure = 16;
	public const CookieToken HttpOnly = 17;
	public const CookieToken Unknown = 18;
	public const CookieToken Version = 19;
}


// Namespace: 
private struct CookieTokenizer.RecognizedAttribute // TypeDefIndex: 3723
{
	// Fields
	private string m_name; // 0x0
	private CookieToken m_token; // 0x8

	// Methods

	// RVA: 0x130A534 Offset: 0x1306534 VA: 0x130A534
	internal void .ctor(string name, CookieToken token) { }

	// RVA: 0x130A200 Offset: 0x1306200 VA: 0x130A200
	internal bool IsEqualTo(string value) { }
}


// Namespace: System.Net
internal class CookieTokenizer // TypeDefIndex: 3724
{
	// Fields
	private bool m_eofCookie; // 0x10
	private int m_index; // 0x14
	private int m_length; // 0x18
	private string m_name; // 0x20
	private bool m_quoted; // 0x28
	private int m_start; // 0x2C
	private CookieToken m_token; // 0x30
	private int m_tokenLength; // 0x34
	private string m_tokenStream; // 0x38
	private string m_value; // 0x40
	private static CookieTokenizer.RecognizedAttribute[] RecognizedAttributes; // 0x0
	private static CookieTokenizer.RecognizedAttribute[] RecognizedServerAttributes; // 0x8

	// Properties
	internal bool Eof { get; }

	// Methods

	// RVA: 0x1309B68 Offset: 0x1305B68 VA: 0x1309B68
	internal void .ctor(string tokenStream) { }

	// RVA: 0x1309BA0 Offset: 0x1305BA0 VA: 0x1309BA0
	internal bool get_Eof() { }

	// RVA: 0x1309BB0 Offset: 0x1305BB0 VA: 0x1309BB0
	internal string Extract() { }

	// RVA: 0x1309C38 Offset: 0x1305C38 VA: 0x1309C38
	internal CookieToken FindNext(bool ignoreComma, bool ignoreEquals) { }

	// RVA: 0x1309ED8 Offset: 0x1305ED8 VA: 0x1309ED8
	internal CookieToken Next(bool first, bool parseResponseCookies) { }

	// RVA: 0x1309FDC Offset: 0x1305FDC VA: 0x1309FDC
	internal void Reset() { }

	// RVA: 0x130A044 Offset: 0x1306044 VA: 0x130A044
	internal CookieToken TokenFromName(bool parseResponseCookies) { }

	// RVA: 0x130A224 Offset: 0x1306224 VA: 0x130A224
	private static void .cctor() { }
}


// Namespace: System.Net
internal class CookieParser // TypeDefIndex: 3725
{
	// Fields
	private CookieTokenizer m_tokenizer; // 0x10

	// Methods

	// RVA: 0x130A540 Offset: 0x1306540 VA: 0x130A540
	internal void .ctor(string cookieString) { }

	// RVA: 0x130A5B0 Offset: 0x13065B0 VA: 0x130A5B0
	internal Cookie Get() { }

	// RVA: 0x1308F1C Offset: 0x1304F1C VA: 0x1308F1C
	internal static string CheckQuoted(string value) { }
}


// Namespace: System.Net
internal class Comparer : IComparer // TypeDefIndex: 3726
{
	// Methods

	// RVA: 0x130AB2C Offset: 0x1306B2C VA: 0x130AB2C Slot: 4
	private int System.Collections.IComparer.Compare(object ol, object or) { }

	// RVA: 0x1309B60 Offset: 0x1305B60 VA: 0x1309B60
	public void .ctor() { }
}


// Namespace: 
internal enum CookieCollection.Stamp // TypeDefIndex: 3727
{
	// Fields
	public int value__; // 0x0
	public const CookieCollection.Stamp Check = 0;
	public const CookieCollection.Stamp Set = 1;
	public const CookieCollection.Stamp SetToUnused = 2;
	public const CookieCollection.Stamp SetToMaxUsed = 3;
}


// Namespace: 
private class CookieCollection.CookieCollectionEnumerator : IEnumerator // TypeDefIndex: 3728
{
	// Fields
	private CookieCollection m_cookies; // 0x10
	private int m_count; // 0x18
	private int m_index; // 0x1C
	private int m_version; // 0x20

	// Properties
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	// RVA: 0x130BB00 Offset: 0x1307B00 VA: 0x130BB00
	internal void .ctor(CookieCollection cookies) { }

	// RVA: 0x130BB5C Offset: 0x1307B5C VA: 0x130BB5C Slot: 5
	private object System.Collections.IEnumerator.get_Current() { }

	// RVA: 0x130BC00 Offset: 0x1307C00 VA: 0x130BC00 Slot: 4
	private bool System.Collections.IEnumerator.MoveNext() { }

	// RVA: 0x130BC9C Offset: 0x1307C9C VA: 0x130BC9C Slot: 6
	private void System.Collections.IEnumerator.Reset() { }
}


// Namespace: System.Net
[DefaultMember("Item")]
[Serializable]
public class CookieCollection : ICollection, IEnumerable // TypeDefIndex: 3729
{
	// Fields
	internal int m_version; // 0x10
	private ArrayList m_list; // 0x18
	private DateTime m_TimeStamp; // 0x20
	private bool m_has_other_versions; // 0x28
	[OptionalField]
	private bool m_IsReadOnly; // 0x29

	// Properties
	public Cookie Item { get; }
	public int Count { get; }
	public bool IsSynchronized { get; }
	public object SyncRoot { get; }

	// Methods

	// RVA: 0x130AC10 Offset: 0x1306C10 VA: 0x130AC10
	public void .ctor() { }

	// RVA: 0x130ACB8 Offset: 0x1306CB8 VA: 0x130ACB8
	public Cookie get_Item(int index) { }

	// RVA: 0x130ADA0 Offset: 0x1306DA0 VA: 0x130ADA0
	public void Add(Cookie cookie) { }

	// RVA: 0x130B1E0 Offset: 0x13071E0 VA: 0x130B1E0
	public void Add(CookieCollection cookies) { }

	// RVA: 0x130B534 Offset: 0x1307534 VA: 0x130B534 Slot: 5
	public int get_Count() { }

	// RVA: 0x130B558 Offset: 0x1307558 VA: 0x130B558 Slot: 7
	public bool get_IsSynchronized() { }

	// RVA: 0x130B560 Offset: 0x1307560 VA: 0x130B560 Slot: 6
	public object get_SyncRoot() { }

	// RVA: 0x130B564 Offset: 0x1307564 VA: 0x130B564 Slot: 4
	public void CopyTo(Array array, int index) { }

	// RVA: 0x130B588 Offset: 0x1307588 VA: 0x130B588
	internal DateTime TimeStamp(CookieCollection.Stamp how) { }

	// RVA: 0x130B658 Offset: 0x1307658 VA: 0x130B658
	internal int InternalAdd(Cookie cookie, bool isStrict) { }

	// RVA: 0x130AE60 Offset: 0x1306E60 VA: 0x130AE60
	internal int IndexOf(Cookie cookie) { }

	// RVA: 0x130BADC Offset: 0x1307ADC VA: 0x130BADC
	internal void RemoveAt(int idx) { }

	// RVA: 0x130B4DC Offset: 0x13074DC VA: 0x130B4DC Slot: 8
	public IEnumerator GetEnumerator() { }
}


// Namespace: System.Net
internal struct HeaderVariantInfo // TypeDefIndex: 3730
{
	// Fields
	private string m_name; // 0x0
	private CookieVariant m_variant; // 0x8

	// Methods

	// RVA: 0x130BCA8 Offset: 0x1307CA8 VA: 0x130BCA8
	internal void .ctor(string name, CookieVariant variant) { }
}


// Namespace: System.Net
[Serializable]
public class CookieContainer // TypeDefIndex: 3731
{
	// Fields
	private static readonly HeaderVariantInfo[] HeaderInfo; // 0x0
	private Hashtable m_domainTable; // 0x10
	private int m_maxCookieSize; // 0x18
	private int m_maxCookies; // 0x1C
	private int m_maxCookiesPerDomain; // 0x20
	private int m_count; // 0x24
	private string m_fqdnMyDomain; // 0x28

	// Methods

	// RVA: 0x130BCB4 Offset: 0x1307CB4 VA: 0x130BCB4
	public void .ctor() { }

	// RVA: 0x130BDAC Offset: 0x1307DAC VA: 0x130BDAC
	private void AddRemoveDomain(string key, PathList value) { }

	// RVA: 0x130BED0 Offset: 0x1307ED0 VA: 0x130BED0
	internal void Add(Cookie cookie, bool throwOnError) { }

	// RVA: 0x130CD0C Offset: 0x1308D0C VA: 0x130CD0C
	private bool AgeCookies(string domain) { }

	// RVA: 0x130E270 Offset: 0x130A270 VA: 0x130E270
	private int ExpireCollection(CookieCollection cc) { }

	// RVA: 0x130E400 Offset: 0x130A400 VA: 0x130E400
	internal bool IsLocalDomain(string host) { }

	// RVA: 0x130E6A0 Offset: 0x130A6A0 VA: 0x130E6A0
	internal CookieCollection CookieCutter(Uri uri, string headerName, string setCookieHeader, bool isThrow) { }

	// RVA: 0x130ED78 Offset: 0x130AD78 VA: 0x130ED78
	internal CookieCollection InternalGetCookies(Uri uri) { }

	// RVA: 0x130F070 Offset: 0x130B070 VA: 0x130F070
	private void BuildCookieCollectionFromDomainMatches(Uri uri, bool isSecure, int port, CookieCollection cookies, List<string> domainAttribute, bool matchOnlyPlainCookie) { }

	// RVA: 0x130F8B0 Offset: 0x130B8B0 VA: 0x130F8B0
	private void MergeUpdateCollections(CookieCollection destination, CookieCollection source, int port, bool isSecure, bool isPlainOnly) { }

	// RVA: 0x130FABC Offset: 0x130BABC VA: 0x130FABC
	public string GetCookieHeader(Uri uri) { }

	// RVA: 0x130FB88 Offset: 0x130BB88 VA: 0x130FB88
	internal string GetCookieHeader(Uri uri, out string optCookie2) { }

	// RVA: 0x130FF20 Offset: 0x130BF20 VA: 0x130FF20
	private static void .cctor() { }
}


// Namespace: 
[Serializable]
private class PathList.PathListComparer : IComparer // TypeDefIndex: 3732
{
	// Fields
	internal static readonly PathList.PathListComparer StaticInstance; // 0x0

	// Methods

	// RVA: 0x130FFE4 Offset: 0x130BFE4 VA: 0x130FFE4 Slot: 4
	private int System.Collections.IComparer.Compare(object ol, object or) { }

	// RVA: 0x131014C Offset: 0x130C14C VA: 0x131014C
	public void .ctor() { }

	// RVA: 0x1310154 Offset: 0x130C154 VA: 0x1310154
	private static void .cctor() { }
}


// Namespace: System.Net
[DefaultMember("Item")]
[Serializable]
internal class PathList // TypeDefIndex: 3733
{
	// Fields
	private SortedList m_list; // 0x10

	// Properties
	public int Count { get; }
	public ICollection Values { get; }
	public object Item { get; set; }
	public object SyncRoot { get; }

	// Methods

	// RVA: 0x130C6DC Offset: 0x13086DC VA: 0x130C6DC
	public void .ctor() { }

	// RVA: 0x130E3DC Offset: 0x130A3DC VA: 0x130E3DC
	public int get_Count() { }

	// RVA: 0x130C77C Offset: 0x130877C VA: 0x130C77C
	public int GetCookiesCount() { }

	// RVA: 0x130E24C Offset: 0x130A24C VA: 0x130E24C
	public ICollection get_Values() { }

	// RVA: 0x130CBEC Offset: 0x1308BEC VA: 0x130CBEC
	public object get_Item(string s) { }

	// RVA: 0x130CC10 Offset: 0x1308C10 VA: 0x130CC10
	public void set_Item(string s, object value) { }

	// RVA: 0x130F88C Offset: 0x130B88C VA: 0x130F88C
	public IEnumerator GetEnumerator() { }

	// RVA: 0x130CBC8 Offset: 0x1308BC8 VA: 0x130CBC8
	public object get_SyncRoot() { }
}


// Namespace: System.Net
[Serializable]
public class CookieException : FormatException, ISerializable // TypeDefIndex: 3734
{
	// Methods

	// RVA: 0x13101B0 Offset: 0x130C1B0 VA: 0x13101B0
	public void .ctor() { }

	// RVA: 0x1308E60 Offset: 0x1304E60 VA: 0x1308E60
	internal void .ctor(string message) { }

	// RVA: 0x130E244 Offset: 0x130A244 VA: 0x130E244
	internal void .ctor(string message, Exception inner) { }

	// RVA: 0x13101B8 Offset: 0x130C1B8 VA: 0x13101B8
	protected void .ctor(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x13101C0 Offset: 0x130C1C0 VA: 0x13101C0 Slot: 4
	private void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x13101C8 Offset: 0x130C1C8 VA: 0x13101C8 Slot: 10
	public override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }
}


// Namespace: System.Net
[Serializable]
public class FileWebRequest : WebRequest, ISerializable // TypeDefIndex: 3735
{
	// Fields
	private static WaitCallback s_GetRequestStreamCallback; // 0x0
	private static WaitCallback s_GetResponseCallback; // 0x8
	private string m_connectionGroupName; // 0x38
	private long m_contentLength; // 0x40
	private ICredentials m_credentials; // 0x48
	private FileAccess m_fileAccess; // 0x50
	private WebHeaderCollection m_headers; // 0x58
	private string m_method; // 0x60
	private IWebProxy m_proxy; // 0x68
	private ManualResetEvent m_readerEvent; // 0x70
	private bool m_readPending; // 0x78
	private WebResponse m_response; // 0x80
	private Stream m_stream; // 0x88
	private bool m_syncHint; // 0x90
	private int m_timeout; // 0x94
	private Uri m_uri; // 0x98
	private bool m_writePending; // 0xA0
	private bool m_writing; // 0xA1
	private LazyAsyncResult m_WriteAResult; // 0xA8
	private LazyAsyncResult m_ReadAResult; // 0xB0
	private int m_Aborted; // 0xB8

	// Properties
	internal bool Aborted { get; }
	public override long ContentLength { get; set; }
	public override string ContentType { set; }
	public override ICredentials Credentials { get; set; }
	public override WebHeaderCollection Headers { get; }
	public override string Method { get; set; }
	public override IWebProxy Proxy { get; set; }
	public override Uri RequestUri { get; }
	public override bool UseDefaultCredentials { get; }

	// Methods

	// RVA: 0x13101D0 Offset: 0x130C1D0 VA: 0x13101D0
	internal void .ctor(Uri uri) { }

	[Obsolete("Serialization is obsoleted for this type. http://go.microsoft.com/fwlink/?linkid=14202")]
	// RVA: 0x1310344 Offset: 0x130C344 VA: 0x1310344
	protected void .ctor(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x13106E0 Offset: 0x130C6E0 VA: 0x13106E0 Slot: 4
	private void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x13106EC Offset: 0x130C6EC VA: 0x13106EC Slot: 5
	protected override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x131097C Offset: 0x130C97C VA: 0x131097C
	internal bool get_Aborted() { }

	// RVA: 0x131098C Offset: 0x130C98C VA: 0x131098C Slot: 12
	public override long get_ContentLength() { }

	// RVA: 0x1310994 Offset: 0x130C994 VA: 0x1310994 Slot: 13
	public override void set_ContentLength(long value) { }

	// RVA: 0x1310A14 Offset: 0x130CA14 VA: 0x1310A14 Slot: 14
	public override void set_ContentType(string value) { }

	// RVA: 0x1310A70 Offset: 0x130CA70 VA: 0x1310A70 Slot: 15
	public override ICredentials get_Credentials() { }

	// RVA: 0x1310A78 Offset: 0x130CA78 VA: 0x1310A78 Slot: 16
	public override void set_Credentials(ICredentials value) { }

	// RVA: 0x1310A80 Offset: 0x130CA80 VA: 0x1310A80 Slot: 10
	public override WebHeaderCollection get_Headers() { }

	// RVA: 0x1310A88 Offset: 0x130CA88 VA: 0x1310A88 Slot: 7
	public override string get_Method() { }

	// RVA: 0x1310A90 Offset: 0x130CA90 VA: 0x1310A90 Slot: 8
	public override void set_Method(string value) { }

	// RVA: 0x1310B64 Offset: 0x130CB64 VA: 0x1310B64 Slot: 18
	public override IWebProxy get_Proxy() { }

	// RVA: 0x1310B6C Offset: 0x130CB6C VA: 0x1310B6C Slot: 19
	public override void set_Proxy(IWebProxy value) { }

	// RVA: 0x1310B74 Offset: 0x130CB74 VA: 0x1310B74 Slot: 9
	public override Uri get_RequestUri() { }

	// RVA: 0x1310B7C Offset: 0x130CB7C VA: 0x1310B7C Slot: 23
	public override IAsyncResult BeginGetRequestStream(AsyncCallback callback, object state) { }

	// RVA: 0x1310F40 Offset: 0x130CF40 VA: 0x1310F40 Slot: 21
	public override IAsyncResult BeginGetResponse(AsyncCallback callback, object state) { }

	// RVA: 0x1310ECC Offset: 0x130CECC VA: 0x1310ECC
	private bool CanGetRequestStream() { }

	// RVA: 0x13111B4 Offset: 0x130D1B4 VA: 0x13111B4 Slot: 24
	public override Stream EndGetRequestStream(IAsyncResult asyncResult) { }

	// RVA: 0x1311444 Offset: 0x130D444 VA: 0x1311444 Slot: 22
	public override WebResponse EndGetResponse(IAsyncResult asyncResult) { }

	// RVA: 0x13116D4 Offset: 0x130D6D4 VA: 0x13116D4 Slot: 20
	public override WebResponse GetResponse() { }

	// RVA: 0x1311990 Offset: 0x130D990 VA: 0x1311990
	private static void GetRequestStreamCallback(object state) { }

	// RVA: 0x1311C40 Offset: 0x130DC40 VA: 0x1311C40
	private static void GetResponseCallback(object state) { }

	// RVA: 0x131220C Offset: 0x130E20C VA: 0x131220C
	internal void UnblockReader() { }

	// RVA: 0x13122E4 Offset: 0x130E2E4 VA: 0x13122E4 Slot: 17
	public override bool get_UseDefaultCredentials() { }

	// RVA: 0x131230C Offset: 0x130E30C VA: 0x131230C Slot: 27
	public override void Abort() { }

	// RVA: 0x1312658 Offset: 0x130E658 VA: 0x1312658
	private static void .cctor() { }
}


// Namespace: System.Net
internal class FileWebRequestCreator : IWebRequestCreate // TypeDefIndex: 3736
{
	// Methods

	// RVA: 0x1301AA0 Offset: 0x12FDAA0 VA: 0x1301AA0
	internal void .ctor() { }

	// RVA: 0x1312728 Offset: 0x130E728 VA: 0x1312728 Slot: 4
	public WebRequest Create(Uri uri) { }
}


// Namespace: System.Net
internal sealed class FileWebStream : FileStream, ICloseEx // TypeDefIndex: 3737
{
	// Fields
	private FileWebRequest m_request; // 0x70

	// Methods

	// RVA: 0x1311BA4 Offset: 0x130DBA4 VA: 0x1311BA4
	public void .ctor(FileWebRequest request, string path, FileMode mode, FileAccess access, FileShare sharing) { }

	// RVA: 0x1312780 Offset: 0x130E780 VA: 0x1312780
	public void .ctor(FileWebRequest request, string path, FileMode mode, FileAccess access, FileShare sharing, int length, bool async) { }

	// RVA: 0x1312834 Offset: 0x130E834 VA: 0x1312834 Slot: 15
	protected override void Dispose(bool disposing) { }

	// RVA: 0x13128E4 Offset: 0x130E8E4 VA: 0x13128E4 Slot: 34
	private void System.Net.ICloseEx.CloseEx(CloseExState closeState) { }

	// RVA: 0x1312920 Offset: 0x130E920 VA: 0x1312920 Slot: 27
	public override int Read(byte[] buffer, int offset, int size) { }

	// RVA: 0x1312A64 Offset: 0x130EA64 VA: 0x1312A64 Slot: 30
	public override void Write(byte[] buffer, int offset, int size) { }

	// RVA: 0x1312B2C Offset: 0x130EB2C VA: 0x1312B2C Slot: 17
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int size, AsyncCallback callback, object state) { }

	// RVA: 0x1312C0C Offset: 0x130EC0C VA: 0x1312C0C Slot: 18
	public override int EndRead(IAsyncResult ar) { }

	// RVA: 0x1312CAC Offset: 0x130ECAC VA: 0x1312CAC Slot: 21
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int size, AsyncCallback callback, object state) { }

	// RVA: 0x1312D8C Offset: 0x130ED8C VA: 0x1312D8C Slot: 22
	public override void EndWrite(IAsyncResult ar) { }

	// RVA: 0x13129E8 Offset: 0x130E9E8 VA: 0x13129E8
	private void CheckError() { }
}


// Namespace: System.Net
[Serializable]
public class FileWebResponse : WebResponse, ISerializable, ICloseEx // TypeDefIndex: 3738
{
	// Fields
	private bool m_closed; // 0x19
	private long m_contentLength; // 0x20
	private FileAccess m_fileAccess; // 0x28
	private WebHeaderCollection m_headers; // 0x30
	private Stream m_stream; // 0x38
	private Uri m_uri; // 0x40

	// Properties
	public override long ContentLength { get; }
	public override WebHeaderCollection Headers { get; }
	public override Uri ResponseUri { get; }

	// Methods

	// RVA: 0x1311F3C Offset: 0x130DF3C VA: 0x1311F3C
	internal void .ctor(FileWebRequest request, Uri uri, FileAccess access, bool asyncHint) { }

	[Obsolete("Serialization is obsoleted for this type. http://go.microsoft.com/fwlink/?linkid=14202")]
	// RVA: 0x1312E2C Offset: 0x130EE2C VA: 0x1312E2C
	protected void .ctor(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x1313060 Offset: 0x130F060 VA: 0x1313060 Slot: 4
	private void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x131306C Offset: 0x130F06C VA: 0x131306C Slot: 6
	protected override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x13131FC Offset: 0x130F1FC VA: 0x13131FC Slot: 9
	public override long get_ContentLength() { }

	// RVA: 0x1313290 Offset: 0x130F290 VA: 0x1313290 Slot: 12
	public override WebHeaderCollection get_Headers() { }

	// RVA: 0x13132A8 Offset: 0x130F2A8 VA: 0x13132A8 Slot: 11
	public override Uri get_ResponseUri() { }

	// RVA: 0x1313214 Offset: 0x130F214 VA: 0x1313214
	private void CheckDisposed() { }

	// RVA: 0x13132C0 Offset: 0x130F2C0 VA: 0x13132C0 Slot: 7
	public override void Close() { }

	// RVA: 0x1313358 Offset: 0x130F358 VA: 0x1313358 Slot: 13
	private void System.Net.ICloseEx.CloseEx(CloseExState closeState) { }

	// RVA: 0x1313488 Offset: 0x130F488 VA: 0x1313488 Slot: 10
	public override Stream GetResponseStream() { }
}


// Namespace: System.Net
public interface IWebProxy // TypeDefIndex: 3739
{
	// Properties
	public abstract ICredentials Credentials { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract Uri GetProxy(Uri destination);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract bool IsBypassed(Uri host);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract ICredentials get_Credentials();
}


// Namespace: System.Net
[Serializable]
public class WebProxy : IWebProxy, ISerializable // TypeDefIndex: 3740
{
	// Fields
	private bool _UseRegistry; // 0x10
	private bool _BypassOnLocal; // 0x11
	private bool m_EnableAutoproxy; // 0x12
	private Uri _ProxyAddress; // 0x18
	private ArrayList _BypassList; // 0x20
	private ICredentials _Credentials; // 0x28
	private Regex[] _RegExBypassList; // 0x30
	private Hashtable _ProxyHostAddresses; // 0x38
	private AutoWebProxyScriptEngine m_ScriptEngine; // 0x40

	// Properties
	public ICredentials Credentials { get; }
	public bool UseDefaultCredentials { get; set; }

	// Methods

	// RVA: 0x13134A0 Offset: 0x130F4A0 VA: 0x13134A0
	public void .ctor() { }

	// RVA: 0x13134B4 Offset: 0x130F4B4 VA: 0x13134B4
	public void .ctor(Uri Address, bool BypassOnLocal, string[] BypassList, ICredentials Credentials) { }

	// RVA: 0x1313794 Offset: 0x130F794 VA: 0x1313794 Slot: 6
	public ICredentials get_Credentials() { }

	// RVA: 0x131379C Offset: 0x130F79C VA: 0x131379C
	public bool get_UseDefaultCredentials() { }

	// RVA: 0x1313818 Offset: 0x130F818 VA: 0x1313818
	public void set_UseDefaultCredentials(bool value) { }

	// RVA: 0x1313890 Offset: 0x130F890 VA: 0x1313890 Slot: 4
	public Uri GetProxy(Uri destination) { }

	// RVA: 0x1313560 Offset: 0x130F560 VA: 0x1313560
	private void UpdateRegExList(bool canThrow) { }

	// RVA: 0x1313B3C Offset: 0x130FB3C VA: 0x1313B3C
	private bool IsMatchInBypassList(Uri input) { }

	// RVA: 0x1313CD4 Offset: 0x130FCD4 VA: 0x1313CD4
	private bool IsLocal(Uri host) { }

	// RVA: 0x1313E30 Offset: 0x130FE30 VA: 0x1313E30
	private bool IsLocalInProxyHash(Uri host) { }

	// RVA: 0x1313F20 Offset: 0x130FF20 VA: 0x1313F20 Slot: 5
	public bool IsBypassed(Uri host) { }

	// RVA: 0x1313A74 Offset: 0x130FA74 VA: 0x1313A74
	private bool IsBypassedManual(Uri host) { }

	// RVA: 0x1314044 Offset: 0x1310044 VA: 0x1314044
	protected void .ctor(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x13143A4 Offset: 0x13103A4 VA: 0x13143A4 Slot: 7
	private void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x13143B0 Offset: 0x13103B0 VA: 0x13143B0 Slot: 8
	protected virtual void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x13144D4 Offset: 0x13104D4 VA: 0x13144D4
	public static IWebProxy CreateDefaultProxy() { }

	// RVA: 0x1314534 Offset: 0x1310534 VA: 0x1314534
	internal void .ctor(bool enableAutoproxy) { }

	// RVA: 0x1314398 Offset: 0x1310398 VA: 0x1314398
	internal void UnsafeUpdateFromRegistry() { }

	// RVA: 0x1313A28 Offset: 0x130FA28 VA: 0x1313A28
	private bool GetProxyAuto(Uri destination, out Uri proxyUri) { }

	// RVA: 0x1314000 Offset: 0x1310000 VA: 0x1314000
	private bool IsBypassedAuto(Uri destination, out bool isBypassed) { }

	// RVA: 0x1314570 Offset: 0x1310570 VA: 0x1314570
	private static bool AreAllBypassed(IEnumerable<string> proxies, bool checkFirstOnly) { }

	// RVA: 0x1314874 Offset: 0x1310874 VA: 0x1314874
	private static Uri ProxyUri(string proxyName) { }
}


// Namespace: System.Net
internal class AutoWebProxyScriptEngine // TypeDefIndex: 3741
{
	// Methods

	// RVA: 0x1314564 Offset: 0x1310564 VA: 0x1314564
	public bool GetProxies(Uri destination, out IList<string> proxyList) { }

	// RVA: 0x1314910 Offset: 0x1310910 VA: 0x1314910
	public bool GetProxies(Uri destination, out IList<string> proxyList, ref int syncStatus) { }
}


// Namespace: 
internal static class UnsafeNclNativeMethods.HttpApi.HTTP_REQUEST_HEADER_ID // TypeDefIndex: 3742
{
	// Fields
	private static string[] m_Strings; // 0x0

	// Methods

	// RVA: 0x1314DC8 Offset: 0x1310DC8 VA: 0x1314DC8
	internal static string ToString(int position) { }

	// RVA: 0x1314E44 Offset: 0x1310E44 VA: 0x1314E44
	private static void .cctor() { }
}


// Namespace: 
internal static class UnsafeNclNativeMethods.HttpApi // TypeDefIndex: 3743
{
	// Fields
	private static string[] m_Strings; // 0x0

	// Methods

	// RVA: 0x131491C Offset: 0x131091C VA: 0x131491C
	private static void .cctor() { }
}


// Namespace: 
internal static class UnsafeNclNativeMethods.SecureStringHelper // TypeDefIndex: 3744
{
	// Methods

	// RVA: 0x131547C Offset: 0x131147C VA: 0x131547C
	internal static string CreateString(SecureString secureString) { }

	// RVA: 0x13155F0 Offset: 0x13115F0 VA: 0x13155F0
	internal static SecureString CreateSecureString(string plainString) { }
}


// Namespace: System.Net
internal static class UnsafeNclNativeMethods // TypeDefIndex: 3745
{}


// Namespace: 
private class ServerCertValidationCallback.CallbackContext // TypeDefIndex: 3746
{
	// Fields
	internal readonly object request; // 0x10
	internal readonly X509Certificate certificate; // 0x18
	internal readonly X509Chain chain; // 0x20
	internal readonly SslPolicyErrors sslPolicyErrors; // 0x28
	internal bool result; // 0x2C

	// Methods

	// RVA: 0x131591C Offset: 0x131191C VA: 0x131591C
	internal void .ctor(object request, X509Certificate certificate, X509Chain chain, SslPolicyErrors sslPolicyErrors) { }
}


// Namespace: System.Net
internal class ServerCertValidationCallback // TypeDefIndex: 3747
{
	// Fields
	private readonly RemoteCertificateValidationCallback m_ValidationCallback; // 0x10
	private readonly ExecutionContext m_Context; // 0x18

	// Methods

	// RVA: 0x131568C Offset: 0x131168C VA: 0x131568C
	internal void .ctor(RemoteCertificateValidationCallback validationCallback) { }

	// RVA: 0x1315704 Offset: 0x1311704 VA: 0x1315704
	internal void Callback(object state) { }

	// RVA: 0x13157B0 Offset: 0x13117B0 VA: 0x13157B0
	internal bool Invoke(object request, X509Certificate certificate, X509Chain chain, SslPolicyErrors sslPolicyErrors) { }
}


// Namespace: System.Net
public class AuthenticationManager // TypeDefIndex: 3748
{
	// Fields
	private static ArrayList modules; // 0x0
	private static object locker; // 0x8
	private static ICredentialPolicy credential_policy; // 0x10

	// Methods

	// RVA: 0x1315960 Offset: 0x1311960 VA: 0x1315960
	private static void EnsureModules() { }

	// RVA: 0x1315BDC Offset: 0x1311BDC VA: 0x1315BDC
	public static Authorization Authenticate(string challenge, WebRequest request, ICredentials credentials) { }

	// RVA: 0x1315CDC Offset: 0x1311CDC VA: 0x1315CDC
	private static Authorization DoAuthenticate(string challenge, WebRequest request, ICredentials credentials) { }

	// RVA: 0x13161C8 Offset: 0x13121C8 VA: 0x13161C8
	public static Authorization PreAuthenticate(WebRequest request, ICredentials credentials) { }

	// RVA: 0x1316700 Offset: 0x1312700 VA: 0x1316700
	private static void .cctor() { }
}


// Namespace: System.Net
internal class BasicClient : IAuthenticationModule // TypeDefIndex: 3749
{
	// Properties
	public string AuthenticationType { get; }

	// Methods

	// RVA: 0x1316770 Offset: 0x1312770 VA: 0x1316770 Slot: 4
	public Authorization Authenticate(string challenge, WebRequest webRequest, ICredentials credentials) { }

	// RVA: 0x1316B10 Offset: 0x1312B10 VA: 0x1316B10
	private static byte[] GetBytes(string str) { }

	// RVA: 0x131681C Offset: 0x131281C VA: 0x131681C
	private static Authorization InternalAuthenticate(WebRequest webRequest, ICredentials credentials) { }

	// RVA: 0x1316BAC Offset: 0x1312BAC VA: 0x1316BAC Slot: 5
	public Authorization PreAuthenticate(WebRequest webRequest, ICredentials credentials) { }

	// RVA: 0x1316BB8 Offset: 0x1312BB8 VA: 0x1316BB8 Slot: 6
	public string get_AuthenticationType() { }

	// RVA: 0x1315BD4 Offset: 0x1311BD4 VA: 0x1315BD4
	public void .ctor() { }
}


// Namespace: System.Net
public sealed class BindIPEndPoint : MulticastDelegate // TypeDefIndex: 3750
{
	// Methods

	// RVA: 0x1316BF8 Offset: 0x1312BF8 VA: 0x1316BF8
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x1316CFC Offset: 0x1312CFC VA: 0x1316CFC Slot: 12
	public virtual IPEndPoint Invoke(ServicePoint servicePoint, IPEndPoint remoteEndPoint, int retryCount) { }
}


// Namespace: 
[CompilerGenerated]
private struct BufferedReadStream.<ProcessReadAsync>d__2 : IAsyncStateMachine // TypeDefIndex: 3751
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<int> <>t__builder; // 0x8
	public CancellationToken cancellationToken; // 0x20
	public BufferedReadStream <>4__this; // 0x28
	public int size; // 0x30
	public byte[] buffer; // 0x38
	public int offset; // 0x40
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<int> <>u__1; // 0x48

	// Methods

	// RVA: 0x1316ED8 Offset: 0x1312ED8 VA: 0x1316ED8 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x13171FC Offset: 0x13131FC VA: 0x13171FC Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: System.Net
internal class BufferedReadStream : WebReadStream // TypeDefIndex: 3752
{
	// Fields
	private readonly BufferOffsetSize readBuffer; // 0x40

	// Methods

	// RVA: 0x1316D10 Offset: 0x1312D10 VA: 0x1316D10
	public void .ctor(WebOperation operation, Stream innerStream, BufferOffsetSize readBuffer) { }

	[AsyncStateMachine(typeof(BufferedReadStream.<ProcessReadAsync>d__2))]
	// RVA: 0x1316D38 Offset: 0x1312D38 VA: 0x1316D38 Slot: 33
	protected override Task<int> ProcessReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken) { }

	// RVA: 0x1316E48 Offset: 0x1312E48 VA: 0x1316E48
	internal bool TryReadFromBuffer(byte[] buffer, int offset, int size, out int result) { }
}


// Namespace: 
internal enum ContentDecodeStream.Mode // TypeDefIndex: 3753
{
	// Fields
	public int value__; // 0x0
	public const ContentDecodeStream.Mode GZip = 0;
	public const ContentDecodeStream.Mode Deflate = 1;
}


// Namespace: System.Net
internal class ContentDecodeStream : WebReadStream // TypeDefIndex: 3754
{
	// Fields
	[CompilerGenerated]
	private readonly Stream <OriginalInnerStream>k__BackingField; // 0x40

	// Methods

	// RVA: 0x1317278 Offset: 0x1313278 VA: 0x1317278
	public static ContentDecodeStream Create(WebOperation operation, Stream innerStream, ContentDecodeStream.Mode mode) { }

	// RVA: 0x1317354 Offset: 0x1313354 VA: 0x1317354
	private void .ctor(WebOperation operation, Stream decodeStream, Stream originalInnerStream) { }

	// RVA: 0x131737C Offset: 0x131337C VA: 0x131737C Slot: 33
	protected override Task<int> ProcessReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken) { }

	// RVA: 0x13173A0 Offset: 0x13133A0 VA: 0x13173A0 Slot: 34
	internal override Task FinishReading(CancellationToken cancellationToken) { }
}


// Namespace: System.Net
[Flags]
public enum DecompressionMethods // TypeDefIndex: 3755
{
	// Fields
	public int value__; // 0x0
	public const DecompressionMethods None = 0;
	public const DecompressionMethods GZip = 1;
	public const DecompressionMethods Deflate = 2;
}


// Namespace: System.Net
internal class DefaultCertificatePolicy // TypeDefIndex: 3756
{}


// Namespace: System.Net
internal class DigestHeaderParser // TypeDefIndex: 3757
{
	// Fields
	private string header; // 0x10
	private int length; // 0x18
	private int pos; // 0x1C
	private static string[] keywords; // 0x0
	private string[] values; // 0x20

	// Properties
	public string Realm { get; }
	public string Opaque { get; }
	public string Nonce { get; }
	public string Algorithm { get; }
	public string QOP { get; }

	// Methods

	// RVA: 0x1317460 Offset: 0x1313460 VA: 0x1317460
	public void .ctor(string header) { }

	// RVA: 0x1317514 Offset: 0x1313514 VA: 0x1317514
	public string get_Realm() { }

	// RVA: 0x131753C Offset: 0x131353C VA: 0x131753C
	public string get_Opaque() { }

	// RVA: 0x1317568 Offset: 0x1313568 VA: 0x1317568
	public string get_Nonce() { }

	// RVA: 0x1317594 Offset: 0x1313594 VA: 0x1317594
	public string get_Algorithm() { }

	// RVA: 0x13175C0 Offset: 0x13135C0 VA: 0x13175C0
	public string get_QOP() { }

	// RVA: 0x13175EC Offset: 0x13135EC VA: 0x13175EC
	public bool Parse() { }

	// RVA: 0x1317914 Offset: 0x1313914 VA: 0x1317914
	private void SkipWhitespace() { }

	// RVA: 0x1317994 Offset: 0x1313994 VA: 0x1317994
	private string GetKey() { }

	// RVA: 0x1317784 Offset: 0x1313784 VA: 0x1317784
	private bool GetKeywordAndValue(out string key, out string value) { }

	// RVA: 0x1317A24 Offset: 0x1313A24 VA: 0x1317A24
	private static void .cctor() { }
}


// Namespace: System.Net
internal class DigestSession // TypeDefIndex: 3758
{
	// Fields
	private static RandomNumberGenerator rng; // 0x0
	private DateTime lastUse; // 0x10
	private int _nc; // 0x18
	private HashAlgorithm hash; // 0x20
	private DigestHeaderParser parser; // 0x28
	private string _cnonce; // 0x30

	// Properties
	public string Algorithm { get; }
	public string Realm { get; }
	public string Nonce { get; }
	public string Opaque { get; }
	public string QOP { get; }
	public string CNonce { get; }

	// Methods

	// RVA: 0x1317B4C Offset: 0x1313B4C VA: 0x1317B4C
	private static void .cctor() { }

	// RVA: 0x1317B9C Offset: 0x1313B9C VA: 0x1317B9C
	public void .ctor() { }

	// RVA: 0x1317C0C Offset: 0x1313C0C VA: 0x1317C0C
	public string get_Algorithm() { }

	// RVA: 0x1317C24 Offset: 0x1313C24 VA: 0x1317C24
	public string get_Realm() { }

	// RVA: 0x1317C3C Offset: 0x1313C3C VA: 0x1317C3C
	public string get_Nonce() { }

	// RVA: 0x1317C54 Offset: 0x1313C54 VA: 0x1317C54
	public string get_Opaque() { }

	// RVA: 0x1317C6C Offset: 0x1313C6C VA: 0x1317C6C
	public string get_QOP() { }

	// RVA: 0x1317C84 Offset: 0x1313C84 VA: 0x1317C84
	public string get_CNonce() { }

	// RVA: 0x1317D78 Offset: 0x1313D78 VA: 0x1317D78
	public bool Parse(string challenge) { }

	// RVA: 0x1317E54 Offset: 0x1313E54 VA: 0x1317E54
	private string HashToHexString(string toBeHashed) { }

	// RVA: 0x1317FA8 Offset: 0x1313FA8 VA: 0x1317FA8
	private string HA1(string username, string password) { }

	// RVA: 0x13180CC Offset: 0x13140CC VA: 0x13180CC
	private string HA2(HttpWebRequest webRequest) { }

	// RVA: 0x1318180 Offset: 0x1314180 VA: 0x1318180
	private string Response(string username, string password, HttpWebRequest webRequest) { }

	// RVA: 0x13182E0 Offset: 0x13142E0 VA: 0x13182E0
	public Authorization Authenticate(WebRequest webRequest, ICredentials credentials) { }
}


// Namespace: System.Net
internal class DigestClient : IAuthenticationModule // TypeDefIndex: 3759
{
	// Fields
	private static readonly Hashtable cache; // 0x0

	// Properties
	private static Hashtable Cache { get; }
	public string AuthenticationType { get; }

	// Methods

	// RVA: 0x1318890 Offset: 0x1314890 VA: 0x1318890
	private static Hashtable get_Cache() { }

	// RVA: 0x13189F4 Offset: 0x13149F4 VA: 0x13189F4
	private static void CheckExpired(int count) { }

	// RVA: 0x1319220 Offset: 0x1315220 VA: 0x1319220 Slot: 4
	public Authorization Authenticate(string challenge, WebRequest webRequest, ICredentials credentials) { }

	// RVA: 0x13194B8 Offset: 0x13154B8 VA: 0x13194B8 Slot: 5
	public Authorization PreAuthenticate(WebRequest webRequest, ICredentials credentials) { }

	// RVA: 0x1319638 Offset: 0x1315638 VA: 0x1319638 Slot: 6
	public string get_AuthenticationType() { }

	// RVA: 0x1315BCC Offset: 0x1311BCC VA: 0x1315BCC
	public void .ctor() { }

	// RVA: 0x1319678 Offset: 0x1315678 VA: 0x1319678
	private static void .cctor() { }
}


// Namespace: 
private sealed class Dns.GetHostAddressesCallback : MulticastDelegate // TypeDefIndex: 3760
{
	// Methods

	// RVA: 0x131987C Offset: 0x131587C VA: 0x131987C
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x131A4E8 Offset: 0x13164E8 VA: 0x131A4E8 Slot: 12
	public virtual IPAddress[] Invoke(string hostName) { }

	// RVA: 0x1319918 Offset: 0x1315918 VA: 0x1319918 Slot: 13
	public virtual IAsyncResult BeginInvoke(string hostName, AsyncCallback callback, object object) { }

	// RVA: 0x1319A34 Offset: 0x1315A34 VA: 0x1319A34 Slot: 14
	public virtual IPAddress[] EndInvoke(IAsyncResult result) { }
}


// Namespace: System.Net
public static class Dns // TypeDefIndex: 3761
{
	// Methods

	// RVA: 0x13196F4 Offset: 0x13156F4 VA: 0x13196F4
	public static IAsyncResult BeginGetHostAddresses(string hostNameOrAddress, AsyncCallback requestCallback, object state) { }

	// RVA: 0x1319938 Offset: 0x1315938 VA: 0x1319938
	public static IPAddress[] EndGetHostAddresses(IAsyncResult asyncResult) { }

	// RVA: 0x1319A40 Offset: 0x1315A40 VA: 0x1319A40
	private static bool GetHostByName_icall(string host, out string h_name, out string[] h_aliases, out string[] h_addr_list, int hint) { }

	// RVA: 0x1319A44 Offset: 0x1315A44 VA: 0x1319A44
	private static bool GetHostByAddr_icall(string addr, out string h_name, out string[] h_aliases, out string[] h_addr_list, int hint) { }

	// RVA: 0x1319A48 Offset: 0x1315A48 VA: 0x1319A48
	private static bool GetHostName_icall(out string h_name) { }

	// RVA: 0x1319A4C Offset: 0x1315A4C VA: 0x1319A4C
	private static void Error_11001(string hostName) { }

	// RVA: 0x1319AB0 Offset: 0x1315AB0 VA: 0x1319AB0
	private static IPHostEntry hostent_to_IPHostEntry(string originalHostName, string h_name, string[] h_aliases, string[] h_addrlist) { }

	// RVA: 0x1319DE4 Offset: 0x1315DE4 VA: 0x1319DE4
	private static IPHostEntry GetHostByAddressFromString(string address, bool parse) { }

	// RVA: 0x1319F10 Offset: 0x1315F10 VA: 0x1319F10
	public static IPHostEntry GetHostEntry(string hostNameOrAddress) { }

	// RVA: 0x131A07C Offset: 0x131607C VA: 0x131A07C
	public static IPHostEntry GetHostEntry(IPAddress address) { }

	// RVA: 0x131A1CC Offset: 0x13161CC VA: 0x131A1CC
	public static IPAddress[] GetHostAddresses(string hostNameOrAddress) { }

	[Obsolete("Use GetHostEntry instead")]
	// RVA: 0x131A0E4 Offset: 0x13160E4 VA: 0x131A0E4
	public static IPHostEntry GetHostByName(string hostName) { }

	// RVA: 0x131A3A0 Offset: 0x13163A0 VA: 0x131A3A0
	public static string GetHostName() { }

	// RVA: 0x131A3CC Offset: 0x13163CC VA: 0x131A3CC
	public static Task<IPAddress[]> GetHostAddressesAsync(string hostNameOrAddress) { }
}


// Namespace: 
[CompilerGenerated]
private struct FixedSizeReadStream.<ProcessReadAsync>d__5 : IAsyncStateMachine // TypeDefIndex: 3762
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<int> <>t__builder; // 0x8
	public CancellationToken cancellationToken; // 0x20
	public FixedSizeReadStream <>4__this; // 0x28
	public int size; // 0x30
	public byte[] buffer; // 0x38
	public int offset; // 0x40
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<int> <>u__1; // 0x48

	// Methods

	// RVA: 0x131A634 Offset: 0x1316634 VA: 0x131A634 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x131A948 Offset: 0x1316948 VA: 0x131A948 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: System.Net
internal class FixedSizeReadStream : WebReadStream // TypeDefIndex: 3763
{
	// Fields
	[CompilerGenerated]
	private readonly long <ContentLength>k__BackingField; // 0x40
	private long position; // 0x48

	// Methods

	// RVA: 0x131A4FC Offset: 0x13164FC VA: 0x131A4FC
	public void .ctor(WebOperation operation, Stream innerStream, long contentLength) { }

	[AsyncStateMachine(typeof(FixedSizeReadStream.<ProcessReadAsync>d__5))]
	// RVA: 0x131A524 Offset: 0x1316524 VA: 0x131A524 Slot: 33
	protected override Task<int> ProcessReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken) { }
}


// Namespace: System.Net
internal class HttpRequestCreator : IWebRequestCreate // TypeDefIndex: 3764
{
	// Methods

	// RVA: 0x1301A98 Offset: 0x12FDA98 VA: 0x1301A98
	internal void .ctor() { }

	// RVA: 0x131A9C4 Offset: 0x13169C4 VA: 0x131A9C4 Slot: 4
	public WebRequest Create(Uri uri) { }
}


// Namespace: 
private enum HttpWebRequest.NtlmAuthState // TypeDefIndex: 3765
{
	// Fields
	public int value__; // 0x0
	public const HttpWebRequest.NtlmAuthState None = 0;
	public const HttpWebRequest.NtlmAuthState Challenge = 1;
	public const HttpWebRequest.NtlmAuthState Response = 2;
}


// Namespace: 
private struct HttpWebRequest.AuthorizationState // TypeDefIndex: 3766
{
	// Fields
	private readonly HttpWebRequest request; // 0x0
	private readonly bool isProxy; // 0x8
	private bool isCompleted; // 0x9
	private HttpWebRequest.NtlmAuthState ntlm_auth_state; // 0xC

	// Properties
	public bool IsNtlmAuthenticated { get; }

	// Methods

	// RVA: 0x131EC3C Offset: 0x131AC3C VA: 0x131EC3C
	public bool get_IsNtlmAuthenticated() { }

	// RVA: 0x131EC5C Offset: 0x131AC5C VA: 0x131EC5C
	public void .ctor(HttpWebRequest request, bool isProxy) { }

	// RVA: 0x131EC74 Offset: 0x131AC74 VA: 0x131EC74
	public bool CheckAuthorization(WebResponse response, HttpStatusCode code) { }

	// RVA: 0x131EF8C Offset: 0x131AF8C VA: 0x131EF8C
	public void Reset() { }

	// RVA: 0x131F010 Offset: 0x131B010 VA: 0x131F010 Slot: 3
	public override string ToString() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class HttpWebRequest.<>c__241<T> // TypeDefIndex: 3767
{
	// Fields
	public static readonly HttpWebRequest.<>c__241<T> <>9; // 0x0
	public static Func<Task<T>, Nullable<int>> <>9__241_0; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB88B0 Offset: 0xBB48B0 VA: 0xBB88B0
	|-HttpWebRequest.<>c__241<__Il2CppFullySharedGenericType>..cctor
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB896C Offset: 0xBB496C VA: 0xBB896C
	|-HttpWebRequest.<>c__241<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal Nullable<int> <RunWithTimeoutWorker>b__241_0(Task<T> t) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB8974 Offset: 0xBB4974 VA: 0xBB8974
	|-HttpWebRequest.<>c__241<__Il2CppFullySharedGenericType>.<RunWithTimeoutWorker>b__241_0
	*/
}


// Namespace: 
[CompilerGenerated]
private struct HttpWebRequest.<RunWithTimeoutWorker>d__241<T> : IAsyncStateMachine // TypeDefIndex: 3768
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<T> <>t__builder; // 0x0
	public Task<T> workerTask; // 0x0
	public int timeout; // 0x0
	public CancellationTokenSource cts; // 0x0
	public Action abort; // 0x0
	public Func<bool> aborted; // 0x0
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<bool> <>u__1; // 0x0

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	private void MoveNext() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC13E0 Offset: 0xBBD3E0 VA: 0xBC13E0
	|-HttpWebRequest.<RunWithTimeoutWorker>d__241<__Il2CppFullySharedGenericType>.MoveNext
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC1C74 Offset: 0xBBDC74 VA: 0xBC1C74
	|-HttpWebRequest.<RunWithTimeoutWorker>d__241<__Il2CppFullySharedGenericType>.SetStateMachine
	*/
}


// Namespace: 
[CompilerGenerated]
private struct HttpWebRequest.<MyGetResponseAsync>d__243 : IAsyncStateMachine // TypeDefIndex: 3769
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<HttpWebResponse> <>t__builder; // 0x8
	public HttpWebRequest <>4__this; // 0x20
	public CancellationToken cancellationToken; // 0x28
	private WebCompletionSource <completion>5__2; // 0x30
	private WebOperation <operation>5__3; // 0x38
	private WebException <throwMe>5__4; // 0x40
	private HttpWebResponse <response>5__5; // 0x48
	private WebResponseStream <stream>5__6; // 0x50
	private bool <redirect>5__7; // 0x58
	private bool <mustReadAll>5__8; // 0x59
	private WebOperation <ntlm>5__9; // 0x60
	private BufferOffsetSize <writeBuffer>5__10; // 0x68
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<WebRequestStream> <>u__1; // 0x70
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter <>u__2; // 0x80
	private TaskAwaiter<WebResponseStream> <>u__3; // 0x90
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<ValueTuple<HttpWebResponse, bool, bool, BufferOffsetSize, WebOperation>> <>u__4; // 0x98

	// Methods

	// RVA: 0x131F110 Offset: 0x131B110 VA: 0x131F110 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x13204DC Offset: 0x131C4DC VA: 0x13204DC Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct HttpWebRequest.<GetResponseFromData>d__244 : IAsyncStateMachine // TypeDefIndex: 3770
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse, bool, bool, BufferOffsetSize, WebOperation>> <>t__builder; // 0x8
	public HttpWebRequest <>4__this; // 0x20
	public WebResponseStream stream; // 0x28
	public CancellationToken cancellationToken; // 0x30
	private HttpWebResponse <response>5__2; // 0x38
	private WebException <throwMe>5__3; // 0x40
	private bool <redirect>5__4; // 0x48
	private bool <mustReadAll>5__5; // 0x49
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter <>u__1; // 0x50
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<BufferOffsetSize> <>u__2; // 0x60

	// Methods

	// RVA: 0x1320558 Offset: 0x131C558 VA: 0x1320558 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x1321004 Offset: 0x131D004 VA: 0x1321004 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct HttpWebRequest.<<GetRewriteHandler>b__271_0>d : IAsyncStateMachine // TypeDefIndex: 3771
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<BufferOffsetSize> <>t__builder; // 0x8
	public HttpWebRequest <>4__this; // 0x20
	private MemoryStream <ms>5__2; // 0x28
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter <>u__1; // 0x30

	// Methods

	// RVA: 0x1321080 Offset: 0x131D080 VA: 0x1321080 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x13214E0 Offset: 0x131D4E0 VA: 0x13214E0 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: System.Net
[Serializable]
public class HttpWebRequest : WebRequest, ISerializable // TypeDefIndex: 3772
{
	// Fields
	private Uri requestUri; // 0x38
	private Uri actualUri; // 0x40
	private bool hostChanged; // 0x48
	private bool allowAutoRedirect; // 0x49
	private bool allowBuffering; // 0x4A
	private X509CertificateCollection certificates; // 0x50
	private string connectionGroup; // 0x58
	private bool haveContentLength; // 0x60
	private long contentLength; // 0x68
	private HttpContinueDelegate continueDelegate; // 0x70
	private CookieContainer cookieContainer; // 0x78
	private ICredentials credentials; // 0x80
	private bool haveResponse; // 0x88
	private bool requestSent; // 0x89
	private WebHeaderCollection webHeaders; // 0x90
	private bool keepAlive; // 0x98
	private int maxAutoRedirect; // 0x9C
	private string mediaType; // 0xA0
	private string method; // 0xA8
	private string initialMethod; // 0xB0
	private bool pipelined; // 0xB8
	private bool preAuthenticate; // 0xB9
	private bool usedPreAuth; // 0xBA
	private Version version; // 0xC0
	private bool force_version; // 0xC8
	private Version actualVersion; // 0xD0
	private IWebProxy proxy; // 0xD8
	private bool sendChunked; // 0xE0
	private ServicePoint servicePoint; // 0xE8
	private int timeout; // 0xF0
	private int continueTimeout; // 0xF4
	private WebRequestStream writeStream; // 0xF8
	private HttpWebResponse webResponse; // 0x100
	private WebCompletionSource responseTask; // 0x108
	private WebOperation currentOperation; // 0x110
	private int aborted; // 0x118
	private bool gotRequestStream; // 0x11C
	private int redirects; // 0x120
	private bool expectContinue; // 0x124
	private bool getResponseCalled; // 0x125
	private object locker; // 0x128
	private bool finished_reading; // 0x130
	private DecompressionMethods auto_decomp; // 0x134
	private static int defaultMaxResponseHeadersLength; // 0x0
	private static int defaultMaximumErrorResponseLength; // 0x4
	private static RequestCachePolicy defaultCachePolicy; // 0x8
	private int readWriteTimeout; // 0x138
	private MobileTlsProvider tlsProvider; // 0x140
	private MonoTlsSettings tlsSettings; // 0x148
	private ServerCertValidationCallback certValidationCallback; // 0x150
	private bool hostHasPort; // 0x158
	private Uri hostUri; // 0x160
	private HttpWebRequest.AuthorizationState auth_state; // 0x168
	private HttpWebRequest.AuthorizationState proxy_auth_state; // 0x178
	internal Func<Stream, Task> ResendContentFactory; // 0x188
	[CompilerGenerated]
	private bool <ThrowOnError>k__BackingField; // 0x190
	private bool unsafe_auth_blah; // 0x191

	// Properties
	public string Accept { set; }
	public DecompressionMethods AutomaticDecompression { set; }
	internal bool InternalAllowBuffering { get; }
	private bool MethodWithBuffer { get; }
	public X509CertificateCollection ClientCertificates { get; }
	public string Connection { set; }
	public override long ContentLength { get; set; }
	public override string ContentType { set; }
	public override ICredentials Credentials { get; set; }
	public string Expect { set; }
	public override WebHeaderCollection Headers { get; set; }
	public string Host { get; set; }
	public override string Method { get; set; }
	public override IWebProxy Proxy { get; set; }
	public string Referer { set; }
	public override Uri RequestUri { get; }
	public ServicePoint ServicePoint { get; }
	public string TransferEncoding { get; }
	public override bool UseDefaultCredentials { get; }
	public string UserAgent { set; }
	internal bool ProxyQuery { get; }
	public RemoteCertificateValidationCallback ServerCertificateValidationCallback { get; }
	internal bool Aborted { get; }

	// Methods

	// RVA: 0x131ABBC Offset: 0x1316BBC VA: 0x131ABBC
	private static void .cctor() { }

	// RVA: 0x131AA1C Offset: 0x1316A1C VA: 0x131AA1C
	public void .ctor(Uri uri) { }

	[Obsolete("Serialization is obsoleted for this type.  http://go.microsoft.com/fwlink/?linkid=14202")]
	// RVA: 0x131ACA0 Offset: 0x1316CA0 VA: 0x131ACA0
	protected void .ctor(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x131AC40 Offset: 0x1316C40 VA: 0x131AC40
	private void ResetAuthorization() { }

	// RVA: 0x131ADC4 Offset: 0x1316DC4 VA: 0x131ADC4
	private void SetSpecialHeaders(string HeaderName, string value) { }

	// RVA: 0x131AE84 Offset: 0x1316E84 VA: 0x131AE84
	public void set_Accept(string value) { }

	// RVA: 0x131AF40 Offset: 0x1316F40 VA: 0x131AF40
	public void set_AutomaticDecompression(DecompressionMethods value) { }

	// RVA: 0x131AF64 Offset: 0x1316F64 VA: 0x131AF64
	internal bool get_InternalAllowBuffering() { }

	// RVA: 0x131AF78 Offset: 0x1316F78 VA: 0x131AF78
	private bool get_MethodWithBuffer() { }

	// RVA: 0x131B074 Offset: 0x1317074 VA: 0x131B074
	public X509CertificateCollection get_ClientCertificates() { }

	// RVA: 0x131B0D8 Offset: 0x13170D8 VA: 0x131B0D8
	public void set_Connection(string value) { }

	// RVA: 0x131B264 Offset: 0x1317264 VA: 0x131B264 Slot: 12
	public override long get_ContentLength() { }

	// RVA: 0x131B26C Offset: 0x131726C VA: 0x131B26C Slot: 13
	public override void set_ContentLength(long value) { }

	// RVA: 0x131B2F8 Offset: 0x13172F8 VA: 0x131B2F8 Slot: 14
	public override void set_ContentType(string value) { }

	// RVA: 0x131B350 Offset: 0x1317350 VA: 0x131B350 Slot: 15
	public override ICredentials get_Credentials() { }

	// RVA: 0x131B358 Offset: 0x1317358 VA: 0x131B358 Slot: 16
	public override void set_Credentials(ICredentials value) { }

	// RVA: 0x131B360 Offset: 0x1317360 VA: 0x131B360
	public void set_Expect(string value) { }

	// RVA: 0x131B488 Offset: 0x1317488 VA: 0x131B488 Slot: 10
	public override WebHeaderCollection get_Headers() { }

	// RVA: 0x131B490 Offset: 0x1317490 VA: 0x131B490 Slot: 11
	public override void set_Headers(WebHeaderCollection value) { }

	// RVA: 0x131B594 Offset: 0x1317594 VA: 0x131B594
	public string get_Host() { }

	// RVA: 0x131B69C Offset: 0x131769C VA: 0x131B69C
	public void set_Host(string value) { }

	// RVA: 0x131B804 Offset: 0x1317804 VA: 0x131B804
	private bool TryGetHostUri(string hostName, out Uri hostUri) { }

	// RVA: 0x131B8D4 Offset: 0x13178D4 VA: 0x131B8D4 Slot: 7
	public override string get_Method() { }

	// RVA: 0x131B8DC Offset: 0x13178DC VA: 0x131B8DC Slot: 8
	public override void set_Method(string value) { }

	// RVA: 0x131BB04 Offset: 0x1317B04 VA: 0x131BB04 Slot: 18
	public override IWebProxy get_Proxy() { }

	// RVA: 0x131BB0C Offset: 0x1317B0C VA: 0x131BB0C Slot: 19
	public override void set_Proxy(IWebProxy value) { }

	// RVA: 0x131BC68 Offset: 0x1317C68 VA: 0x131BC68
	public void set_Referer(string value) { }

	// RVA: 0x131BD04 Offset: 0x1317D04 VA: 0x131BD04 Slot: 9
	public override Uri get_RequestUri() { }

	// RVA: 0x131BD0C Offset: 0x1317D0C VA: 0x131BD0C
	public ServicePoint get_ServicePoint() { }

	// RVA: 0x131BD10 Offset: 0x1317D10 VA: 0x131BD10
	public string get_TransferEncoding() { }

	// RVA: 0x131BD64 Offset: 0x1317D64 VA: 0x131BD64 Slot: 17
	public override bool get_UseDefaultCredentials() { }

	// RVA: 0x131BDCC Offset: 0x1317DCC VA: 0x131BDCC
	public void set_UserAgent(string value) { }

	// RVA: 0x131BE28 Offset: 0x1317E28 VA: 0x131BE28
	internal bool get_ProxyQuery() { }

	// RVA: 0x131BE5C Offset: 0x1317E5C VA: 0x131BE5C
	public RemoteCertificateValidationCallback get_ServerCertificateValidationCallback() { }

	// RVA: 0x131BB38 Offset: 0x1317B38 VA: 0x131BB38
	internal ServicePoint GetServicePoint() { }

	// RVA: 0x131BE74 Offset: 0x1317E74 VA: 0x131BE74
	private WebOperation SendRequest(bool redirecting, BufferOffsetSize writeBuffer, CancellationToken cancellationToken) { }

	// RVA: 0x131C094 Offset: 0x1318094 VA: 0x131C094
	private Task<Stream> MyGetRequestStreamAsync(CancellationToken cancellationToken) { }

	// RVA: 0x131C4D8 Offset: 0x13184D8 VA: 0x131C4D8 Slot: 23
	public override IAsyncResult BeginGetRequestStream(AsyncCallback callback, object state) { }

	// RVA: 0x131C590 Offset: 0x1318590 VA: 0x131C590 Slot: 24
	public override Stream EndGetRequestStream(IAsyncResult asyncResult) { }

	// RVA: 0x131C744 Offset: 0x1318744 VA: 0x131C744 Slot: 25
	public override Task<Stream> GetRequestStreamAsync() { }

	// RVA: -1 Offset: -1
	internal static Task<T> RunWithTimeout<T>(Func<CancellationToken, Task<T>> func, int timeout, Action abort, Func<bool> aborted, CancellationToken cancellationToken) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8CF58 Offset: 0xB88F58 VA: 0xB8CF58
	|-HttpWebRequest.RunWithTimeout<__Il2CppFullySharedGenericType>
	*/

	[AsyncStateMachine(typeof(HttpWebRequest.<RunWithTimeoutWorker>d__241<T>))]
	// RVA: -1 Offset: -1
	private static Task<T> RunWithTimeoutWorker<T>(Task<T> workerTask, int timeout, Action abort, Func<bool> aborted, CancellationTokenSource cts) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8D060 Offset: 0xB89060 VA: 0xB8D060
	|-HttpWebRequest.RunWithTimeoutWorker<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	private Task<T> RunWithTimeout<T>(Func<CancellationToken, Task<T>> func) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8CDF8 Offset: 0xB88DF8 VA: 0xB8CDF8
	|-HttpWebRequest.RunWithTimeout<__Il2CppFullySharedGenericType>
	*/

	[AsyncStateMachine(typeof(HttpWebRequest.<MyGetResponseAsync>d__243))]
	// RVA: 0x131C7DC Offset: 0x13187DC VA: 0x131C7DC
	private Task<HttpWebResponse> MyGetResponseAsync(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(HttpWebRequest.<GetResponseFromData>d__244))]
	// RVA: 0x131C8D0 Offset: 0x13188D0 VA: 0x131C8D0
	private Task<ValueTuple<HttpWebResponse, bool, bool, BufferOffsetSize, WebOperation>> GetResponseFromData(WebResponseStream stream, CancellationToken cancellationToken) { }

	// RVA: 0x131C9C8 Offset: 0x13189C8 VA: 0x131C9C8
	internal static Exception FlattenException(Exception e) { }

	// RVA: 0x131C6C0 Offset: 0x13186C0 VA: 0x131C6C0
	private WebException GetWebException(Exception e) { }

	// RVA: 0x131CA84 Offset: 0x1318A84 VA: 0x131CA84
	private static WebException GetWebException(Exception e, bool aborted) { }

	// RVA: 0x131C41C Offset: 0x131841C VA: 0x131C41C
	internal static WebException CreateRequestAbortedException() { }

	// RVA: 0x131CC28 Offset: 0x1318C28 VA: 0x131CC28 Slot: 21
	public override IAsyncResult BeginGetResponse(AsyncCallback callback, object state) { }

	// RVA: 0x131CD98 Offset: 0x1318D98 VA: 0x131CD98 Slot: 22
	public override WebResponse EndGetResponse(IAsyncResult asyncResult) { }

	// RVA: 0x131CEC8 Offset: 0x1318EC8 VA: 0x131CEC8 Slot: 20
	public override WebResponse GetResponse() { }

	// RVA: 0x131C3F4 Offset: 0x13183F4 VA: 0x131C3F4
	internal bool get_Aborted() { }

	// RVA: 0x131CFD0 Offset: 0x1318FD0 VA: 0x131CFD0 Slot: 27
	public override void Abort() { }

	// RVA: 0x131D0E0 Offset: 0x13190E0 VA: 0x131D0E0 Slot: 4
	private void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x131D118 Offset: 0x1319118 VA: 0x131D118 Slot: 5
	protected override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x131AEE4 Offset: 0x1316EE4 VA: 0x131AEE4
	private void CheckRequestStarted() { }

	// RVA: 0x131D150 Offset: 0x1319150 VA: 0x131D150
	internal void DoContinueDelegate(int statusCode, WebHeaderCollection headers) { }

	// RVA: 0x131D16C Offset: 0x131916C VA: 0x131D16C
	private void RewriteRedirectToGet() { }

	// RVA: 0x131D1E4 Offset: 0x13191E4 VA: 0x131D1E4
	private bool Redirect(HttpStatusCode code, WebResponse response) { }

	// RVA: 0x131D698 Offset: 0x1319698 VA: 0x131D698
	private string GetHeaders() { }

	// RVA: 0x131DCE4 Offset: 0x1319CE4 VA: 0x131DCE4
	private void DoPreAuthenticate() { }

	// RVA: 0x131DEE0 Offset: 0x1319EE0 VA: 0x131DEE0
	internal byte[] GetRequestHeaders() { }

	// RVA: 0x131E1D8 Offset: 0x131A1D8 VA: 0x131E1D8
	private ValueTuple<WebOperation, bool> HandleNtlmAuth(WebResponseStream stream, HttpWebResponse response, BufferOffsetSize writeBuffer, CancellationToken cancellationToken) { }

	// RVA: 0x131E458 Offset: 0x131A458 VA: 0x131E458
	private bool CheckAuthorization(WebResponse response, HttpStatusCode code) { }

	// RVA: 0x131E478 Offset: 0x131A478 VA: 0x131E478
	private ValueTuple<Task<BufferOffsetSize>, WebException> GetRewriteHandler(HttpWebResponse response, bool redirect) { }

	// RVA: 0x131E670 Offset: 0x131A670 VA: 0x131E670
	private ValueTuple<bool, bool, Task<BufferOffsetSize>, WebException> CheckFinalStatus(HttpWebResponse response) { }

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	private bool <RunWithTimeout>b__242_0<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8CDF0 Offset: 0xB88DF0 VA: 0xB8CDF0
	|-HttpWebRequest.<RunWithTimeout>b__242_0<__Il2CppFullySharedGenericType>
	*/

	[AsyncStateMachine(typeof(HttpWebRequest.<<GetRewriteHandler>b__271_0>d))]
	[CompilerGenerated]
	// RVA: 0x131EB28 Offset: 0x131AB28 VA: 0x131EB28
	private Task<BufferOffsetSize> <GetRewriteHandler>b__271_0() { }

	[Obsolete("This API supports the .NET Framework infrastructure and is not intended to be used directly from your code.", True)]
	// RVA: 0x131EC04 Offset: 0x131AC04 VA: 0x131EC04
	public void .ctor() { }
}


// Namespace: System.Net
[Serializable]
public class HttpWebResponse : WebResponse, ISerializable, IDisposable // TypeDefIndex: 3773
{
	// Fields
	private Uri uri; // 0x20
	private WebHeaderCollection webHeaders; // 0x28
	private CookieCollection cookieCollection; // 0x30
	private string method; // 0x38
	private Version version; // 0x40
	private HttpStatusCode statusCode; // 0x48
	private string statusDescription; // 0x50
	private long contentLength; // 0x58
	private string contentType; // 0x60
	private CookieContainer cookie_container; // 0x68
	private bool disposed; // 0x70
	private Stream stream; // 0x78

	// Properties
	public override long ContentLength { get; }
	public override WebHeaderCollection Headers { get; }
	public override Uri ResponseUri { get; }
	public virtual HttpStatusCode StatusCode { get; }
	public virtual string StatusDescription { get; }

	// Methods

	// RVA: 0x132155C Offset: 0x131D55C VA: 0x132155C
	public void .ctor() { }

	// RVA: 0x1321564 Offset: 0x131D564 VA: 0x1321564
	internal void .ctor(Uri uri, string method, HttpStatusCode status, WebHeaderCollection headers) { }

	// RVA: 0x1320D1C Offset: 0x131CD1C VA: 0x1320D1C
	internal void .ctor(Uri uri, string method, WebResponseStream stream, CookieContainer container) { }

	[Obsolete("Serialization is obsoleted for this type", False)]
	// RVA: 0x132182C Offset: 0x131D82C VA: 0x132182C
	protected void .ctor(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x1321BC8 Offset: 0x131DBC8 VA: 0x1321BC8 Slot: 9
	public override long get_ContentLength() { }

	// RVA: 0x1321BD0 Offset: 0x131DBD0 VA: 0x1321BD0 Slot: 12
	public override WebHeaderCollection get_Headers() { }

	// RVA: 0x1321BD8 Offset: 0x131DBD8 VA: 0x1321BD8 Slot: 11
	public override Uri get_ResponseUri() { }

	// RVA: 0x1321C6C Offset: 0x131DC6C VA: 0x1321C6C Slot: 13
	public virtual HttpStatusCode get_StatusCode() { }

	// RVA: 0x1321C74 Offset: 0x131DC74 VA: 0x1321C74 Slot: 14
	public virtual string get_StatusDescription() { }

	// RVA: 0x1321C8C Offset: 0x131DC8C VA: 0x1321C8C Slot: 10
	public override Stream GetResponseStream() { }

	// RVA: 0x1321D28 Offset: 0x131DD28 VA: 0x1321D28 Slot: 4
	private void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x1321D34 Offset: 0x131DD34 VA: 0x1321D34 Slot: 6
	protected override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x1321EF4 Offset: 0x131DEF4 VA: 0x1321EF4 Slot: 7
	public override void Close() { }

	// RVA: 0x1321F24 Offset: 0x131DF24 VA: 0x1321F24 Slot: 5
	private void System.IDisposable.Dispose() { }

	// RVA: 0x1321F34 Offset: 0x131DF34 VA: 0x1321F34 Slot: 8
	protected override void Dispose(bool disposing) { }

	// RVA: 0x1321BF0 Offset: 0x131DBF0 VA: 0x1321BF0
	private void CheckDisposed() { }

	// RVA: 0x1321618 Offset: 0x131D618 VA: 0x1321618
	private void FillCookies() { }
}


// Namespace: System.Net
public interface ICredentialPolicy // TypeDefIndex: 3774
{}


// Namespace: 
private enum MonoChunkParser.State // TypeDefIndex: 3775
{
	// Fields
	public int value__; // 0x0
	public const MonoChunkParser.State None = 0;
	public const MonoChunkParser.State PartialSize = 1;
	public const MonoChunkParser.State Body = 2;
	public const MonoChunkParser.State BodyFinished = 3;
	public const MonoChunkParser.State Trailer = 4;
}


// Namespace: 
private class MonoChunkParser.Chunk // TypeDefIndex: 3776
{
	// Fields
	public byte[] Bytes; // 0x10
	public int Offset; // 0x18

	// Methods

	// RVA: 0x1322CF8 Offset: 0x131ECF8 VA: 0x1322CF8
	public void .ctor(byte[] chunk) { }

	// RVA: 0x1322230 Offset: 0x131E230 VA: 0x1322230
	public int Read(byte[] buffer, int offset, int size) { }
}


// Namespace: System.Net
internal class MonoChunkParser // TypeDefIndex: 3777
{
	// Fields
	private WebHeaderCollection headers; // 0x10
	private int chunkSize; // 0x18
	private int chunkRead; // 0x1C
	private int totalWritten; // 0x20
	private MonoChunkParser.State state; // 0x24
	private StringBuilder saved; // 0x28
	private bool sawCR; // 0x30
	private bool gotit; // 0x31
	private int trailerState; // 0x34
	private ArrayList chunks; // 0x38

	// Properties
	public bool WantMore { get; }
	public bool DataAvailable { get; }
	public int ChunkLeft { get; }

	// Methods

	// RVA: 0x1321F48 Offset: 0x131DF48 VA: 0x1321F48
	public void .ctor(WebHeaderCollection headers) { }

	// RVA: 0x1321FF4 Offset: 0x131DFF4 VA: 0x1321FF4
	public int Read(byte[] buffer, int offset, int size) { }

	// RVA: 0x1321FF8 Offset: 0x131DFF8 VA: 0x1321FF8
	private int ReadFromChunks(byte[] buffer, int offset, int size) { }

	// RVA: 0x1322290 Offset: 0x131E290 VA: 0x1322290
	public void Write(byte[] buffer, int offset, int size) { }

	// RVA: 0x13222B0 Offset: 0x131E2B0 VA: 0x13222B0
	private void InternalWrite(byte[] buffer, ref int offset, int size) { }

	// RVA: 0x1322BC8 Offset: 0x131EBC8 VA: 0x1322BC8
	public bool get_WantMore() { }

	// RVA: 0x1322BEC Offset: 0x131EBEC VA: 0x1322BEC
	public bool get_DataAvailable() { }

	// RVA: 0x1322CEC Offset: 0x131ECEC VA: 0x1322CEC
	public int get_ChunkLeft() { }

	// RVA: 0x13226E4 Offset: 0x131E6E4 VA: 0x13226E4
	private MonoChunkParser.State ReadBody(byte[] buffer, ref int offset, int size) { }

	// RVA: 0x13223EC Offset: 0x131E3EC VA: 0x13223EC
	private MonoChunkParser.State GetChunkSize(byte[] buffer, ref int offset, int size) { }

	// RVA: 0x1322D70 Offset: 0x131ED70 VA: 0x1322D70
	private static string RemoveChunkExtension(string input) { }

	// RVA: 0x1322818 Offset: 0x131E818 VA: 0x1322818
	private MonoChunkParser.State ReadCRLF(byte[] buffer, ref int offset, int size) { }

	// RVA: 0x1322918 Offset: 0x131E918 VA: 0x1322918
	private MonoChunkParser.State ReadTrailer(byte[] buffer, ref int offset, int size) { }

	// RVA: 0x1322D20 Offset: 0x131ED20 VA: 0x1322D20
	private static void ThrowProtocolViolation(string message) { }
}


// Namespace: 
[CompilerGenerated]
private struct MonoChunkStream.<ProcessReadAsync>d__7 : IAsyncStateMachine // TypeDefIndex: 3778
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<int> <>t__builder; // 0x8
	public CancellationToken cancellationToken; // 0x20
	public MonoChunkStream <>4__this; // 0x28
	public byte[] buffer; // 0x30
	public int offset; // 0x38
	public int size; // 0x3C
	private byte[] <moreBytes>5__2; // 0x40
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<int> <>u__1; // 0x48

	// Methods

	// RVA: 0x13231C4 Offset: 0x131F1C4 VA: 0x13231C4 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x13235A8 Offset: 0x131F5A8 VA: 0x13235A8 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct MonoChunkStream.<FinishReading>d__8 : IAsyncStateMachine // TypeDefIndex: 3779
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public MonoChunkStream <>4__this; // 0x20
	public CancellationToken cancellationToken; // 0x28
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter <>u__1; // 0x30
	private byte[] <buffer>5__2; // 0x40
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<int> <>u__2; // 0x48

	// Methods

	// RVA: 0x1323624 Offset: 0x131F624 VA: 0x1323624 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x1323A70 Offset: 0x131FA70 VA: 0x1323A70 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: System.Net
internal class MonoChunkStream : WebReadStream // TypeDefIndex: 3780
{
	// Fields
	[CompilerGenerated]
	private readonly WebHeaderCollection <Headers>k__BackingField; // 0x40
	[CompilerGenerated]
	private readonly MonoChunkParser <Decoder>k__BackingField; // 0x48

	// Methods

	// RVA: 0x1322DB8 Offset: 0x131EDB8 VA: 0x1322DB8
	public void .ctor(WebOperation operation, Stream innerStream, WebHeaderCollection headers) { }

	[AsyncStateMachine(typeof(MonoChunkStream.<ProcessReadAsync>d__7))]
	// RVA: 0x1322EB0 Offset: 0x131EEB0 VA: 0x1322EB0 Slot: 33
	protected override Task<int> ProcessReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(MonoChunkStream.<FinishReading>d__8))]
	// RVA: 0x1322FBC Offset: 0x131EFBC VA: 0x1322FBC Slot: 34
	internal override Task FinishReading(CancellationToken cancellationToken) { }

	// RVA: 0x1323094 Offset: 0x131F094 VA: 0x1323094
	private static void ThrowExpectingChunkTrailer() { }

	[CompilerGenerated]
	[DebuggerHidden]
	// RVA: 0x13230EC Offset: 0x131F0EC VA: 0x13230EC
	private Task <>n__0(CancellationToken cancellationToken) { }
}


// Namespace: System.Net
internal class NtlmClient : IAuthenticationModule // TypeDefIndex: 3781
{
	// Fields
	private IAuthenticationModule authObject; // 0x10

	// Properties
	public string AuthenticationType { get; }

	// Methods

	// RVA: 0x1323AD8 Offset: 0x131FAD8 VA: 0x1323AD8
	public void .ctor() { }

	// RVA: 0x1323B3C Offset: 0x131FB3C VA: 0x1323B3C Slot: 4
	public Authorization Authenticate(string challenge, WebRequest webRequest, ICredentials credentials) { }

	// RVA: 0x1323C0C Offset: 0x131FC0C VA: 0x1323C0C Slot: 5
	public Authorization PreAuthenticate(WebRequest webRequest, ICredentials credentials) { }

	// RVA: 0x1323C14 Offset: 0x131FC14 VA: 0x1323C14 Slot: 6
	public string get_AuthenticationType() { }
}


// Namespace: System.Net
public class ServicePoint // TypeDefIndex: 3782
{
	// Fields
	private readonly Uri uri; // 0x10
	private DateTime lastDnsResolve; // 0x18
	private Version protocolVersion; // 0x20
	private IPHostEntry host; // 0x28
	private bool usesProxy; // 0x30
	private bool sendContinue; // 0x31
	private bool useConnect; // 0x32
	private object hostE; // 0x38
	private bool useNagle; // 0x40
	private BindIPEndPoint endPointCallback; // 0x48
	private bool tcp_keepalive; // 0x50
	private int tcp_keepalive_time; // 0x54
	private int tcp_keepalive_interval; // 0x58
	private bool disposed; // 0x5C
	private int connectionLeaseTimeout; // 0x60
	private int receiveBufferSize; // 0x64
	[CompilerGenerated]
	private readonly ServicePointManager.SPKey <Key>k__BackingField; // 0x68
	[CompilerGenerated]
	private ServicePointScheduler <Scheduler>k__BackingField; // 0x70
	private int connectionLimit; // 0x78
	private int maxIdleTime; // 0x7C
	private object m_ServerCertificateOrBytes; // 0x80
	private object m_ClientCertificateOrBytes; // 0x88

	// Properties
	internal bool SendContinue { get; }
	private bool HasTimedOut { get; }
	internal IPHostEntry HostEntry { get; }

	// Methods

	// RVA: 0x1323C54 Offset: 0x131FC54 VA: 0x1323C54
	internal void .ctor(ServicePointManager.SPKey key, Uri uri, int connectionLimit, int maxIdleTime) { }

	// RVA: 0x1323F04 Offset: 0x131FF04 VA: 0x1323F04
	internal bool get_SendContinue() { }

	// RVA: 0x1323FA0 Offset: 0x131FFA0 VA: 0x1323FA0
	public void SetTcpKeepAlive(bool enabled, int keepAliveTime, int keepAliveInterval) { }

	// RVA: 0x1324050 Offset: 0x1320050 VA: 0x1324050
	internal void KeepAliveSetup(Socket socket) { }

	// RVA: 0x1324104 Offset: 0x1320104 VA: 0x1324104
	private static void PutBytes(byte[] bytes, uint v, int offset) { }

	// RVA: 0x1324184 Offset: 0x1320184 VA: 0x1324184
	private bool get_HasTimedOut() { }

	// RVA: 0x1324280 Offset: 0x1320280 VA: 0x1324280
	internal IPHostEntry get_HostEntry() { }

	// RVA: 0x1324604 Offset: 0x1320604 VA: 0x1324604
	internal void SendRequest(WebOperation operation, string groupName) { }

	// RVA: 0x132485C Offset: 0x132085C VA: 0x132485C
	internal void FreeServicePoint() { }

	// RVA: 0x132486C Offset: 0x132086C VA: 0x132486C
	internal void UpdateServerCertificate(X509Certificate certificate) { }

	// RVA: 0x13248A0 Offset: 0x13208A0 VA: 0x13248A0
	internal void UpdateClientCertificate(X509Certificate certificate) { }

	// RVA: 0x13248D4 Offset: 0x13208D4 VA: 0x13248D4
	internal bool CallEndPointDelegate(Socket sock, IPEndPoint remote) { }
}


// Namespace: 
internal class ServicePointManager.SPKey // TypeDefIndex: 3783
{
	// Fields
	private Uri uri; // 0x10
	private Uri proxy; // 0x18
	private bool use_connect; // 0x20

	// Properties
	public bool UsesProxy { get; }

	// Methods

	// RVA: 0x1325274 Offset: 0x1321274 VA: 0x1325274
	public void .ctor(Uri uri, Uri proxy, bool use_connect) { }

	// RVA: 0x1325348 Offset: 0x1321348 VA: 0x1325348
	public bool get_UsesProxy() { }

	// RVA: 0x13253A8 Offset: 0x13213A8 VA: 0x13253A8 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x132547C Offset: 0x132147C VA: 0x132547C Slot: 0
	public override bool Equals(object obj) { }
}


// Namespace: System.Net
public class ServicePointManager // TypeDefIndex: 3784
{
	// Fields
	private static ConcurrentDictionary<ServicePointManager.SPKey, ServicePoint> servicePoints; // 0x0
	private static ICertificatePolicy policy; // 0x8
	private static int defaultConnectionLimit; // 0x10
	private static int maxServicePointIdleTime; // 0x14
	private static int maxServicePoints; // 0x18
	private static int dnsRefreshTimeout; // 0x1C
	private static bool _checkCRL; // 0x20
	private static SecurityProtocolType _securityProtocol; // 0x24
	private static bool expectContinue; // 0x28
	private static bool useNagle; // 0x29
	private static ServerCertValidationCallback server_cert_cb; // 0x30
	private static bool tcp_keepalive; // 0x38
	private static int tcp_keepalive_time; // 0x3C
	private static int tcp_keepalive_interval; // 0x40

	// Properties
	public static bool CheckCertificateRevocationList { get; }
	public static RemoteCertificateValidationCallback ServerCertificateValidationCallback { get; }

	// Methods

	// RVA: 0x1324A78 Offset: 0x1320A78 VA: 0x1324A78
	private static void .cctor() { }

	// RVA: 0x1324B28 Offset: 0x1320B28 VA: 0x1324B28
	public static bool get_CheckCertificateRevocationList() { }

	// RVA: 0x1324B80 Offset: 0x1320B80 VA: 0x1324B80
	public static RemoteCertificateValidationCallback get_ServerCertificateValidationCallback() { }

	// RVA: 0x1324C08 Offset: 0x1320C08 VA: 0x1324C08
	public static ServicePoint FindServicePoint(Uri address, IWebProxy proxy) { }

	// RVA: 0x13252B0 Offset: 0x13212B0 VA: 0x13252B0
	internal static void RemoveServicePoint(ServicePoint sp) { }
}


// Namespace: 
private class ServicePointScheduler.ConnectionGroup // TypeDefIndex: 3785
{
	// Fields
	[CompilerGenerated]
	private readonly ServicePointScheduler <Scheduler>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly string <Name>k__BackingField; // 0x18
	private static int nextId; // 0x0
	public readonly int ID; // 0x20
	private LinkedList<WebConnection> connections; // 0x28
	private LinkedList<WebOperation> queue; // 0x30

	// Methods

	// RVA: 0x1325610 Offset: 0x1321610 VA: 0x1325610
	public void .ctor(ServicePointScheduler scheduler, string name) { }

	// RVA: 0x1325C34 Offset: 0x1321C34 VA: 0x1325C34
	public bool IsEmpty() { }

	// RVA: 0x1326264 Offset: 0x1322264 VA: 0x1326264
	public void RemoveConnection(WebConnection connection) { }

	// RVA: 0x13263A0 Offset: 0x13223A0 VA: 0x13263A0
	public void Cleanup() { }

	// RVA: 0x1326A40 Offset: 0x1322A40 VA: 0x1326A40
	public void EnqueueOperation(WebOperation operation) { }

	// RVA: 0x132664C Offset: 0x132264C VA: 0x132664C
	public WebOperation GetNextOperation() { }

	// RVA: 0x1326C1C Offset: 0x1322C1C VA: 0x1326C1C
	public WebConnection FindIdleConnection(WebOperation operation) { }

	// RVA: 0x1326474 Offset: 0x1322474 VA: 0x1326474
	public ValueTuple<WebConnection, bool> CreateOrReuseConnection(WebOperation operation, bool force) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class ServicePointScheduler.AsyncManualResetEvent.<>c // TypeDefIndex: 3786
{
	// Fields
	public static readonly ServicePointScheduler.AsyncManualResetEvent.<>c <>9; // 0x0
	public static Func<object, bool> <>9__4_0; // 0x8

	// Methods

	// RVA: 0x13273A4 Offset: 0x13233A4 VA: 0x13273A4
	private static void .cctor() { }

	// RVA: 0x1327400 Offset: 0x1323400 VA: 0x1327400
	public void .ctor() { }

	// RVA: 0x1327408 Offset: 0x1323408 VA: 0x1327408
	internal bool <Set>b__4_0(object s) { }
}


// Namespace: 
private class ServicePointScheduler.AsyncManualResetEvent // TypeDefIndex: 3787
{
	// Fields
	private TaskCompletionSource<bool> m_tcs; // 0x10

	// Methods

	// RVA: 0x1327374 Offset: 0x1323374 VA: 0x1327374
	public Task<bool> WaitAsync(int millisecondTimeout) { }

	// RVA: 0x13257DC Offset: 0x13217DC VA: 0x13257DC
	public void Set() { }

	// RVA: 0x1325D58 Offset: 0x1321D58 VA: 0x1325D58
	public void Reset() { }

	// RVA: 0x1325570 Offset: 0x1321570 VA: 0x1325570
	public void .ctor(bool state) { }
}


// Namespace: 
[CompilerGenerated]
private struct ServicePointScheduler.<RunScheduler>d__32 : IAsyncStateMachine // TypeDefIndex: 3788
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public ServicePointScheduler <>4__this; // 0x20
	private ValueTuple<ServicePointScheduler.ConnectionGroup, WebOperation>[] <operationArray>5__2; // 0x28
	private ValueTuple<ServicePointScheduler.ConnectionGroup, WebConnection, Task>[] <idleArray>5__3; // 0x30
	private List<Task> <taskList>5__4; // 0x38
	private Task<bool> <schedulerTask>5__5; // 0x40
	private bool <finalCleanup>5__6; // 0x48
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<Task> <>u__1; // 0x50

	// Methods

	// RVA: 0x13274B4 Offset: 0x13234B4 VA: 0x13274B4 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x1327F10 Offset: 0x1323F10 VA: 0x1327F10 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct ServicePointScheduler.<WaitAsync>d__46 : IAsyncStateMachine // TypeDefIndex: 3789
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<bool> <>t__builder; // 0x8
	public int millisecondTimeout; // 0x20
	public Task workerTask; // 0x28
	private CancellationTokenSource <cts>5__2; // 0x30
	private Task <timeoutTask>5__3; // 0x38
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<Task> <>u__1; // 0x40

	// Methods

	// RVA: 0x1327F78 Offset: 0x1323F78 VA: 0x1327F78 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x1328418 Offset: 0x1324418 VA: 0x1328418 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: System.Net
internal class ServicePointScheduler // TypeDefIndex: 3790
{
	// Fields
	[CompilerGenerated]
	private ServicePoint <ServicePoint>k__BackingField; // 0x10
	private int running; // 0x18
	private int maxIdleTime; // 0x1C
	private ServicePointScheduler.AsyncManualResetEvent schedulerEvent; // 0x20
	private ServicePointScheduler.ConnectionGroup defaultGroup; // 0x28
	private Dictionary<string, ServicePointScheduler.ConnectionGroup> groups; // 0x30
	private LinkedList<ValueTuple<ServicePointScheduler.ConnectionGroup, WebOperation>> operations; // 0x38
	private LinkedList<ValueTuple<ServicePointScheduler.ConnectionGroup, WebConnection, Task>> idleConnections; // 0x40
	private int currentConnections; // 0x48
	private int connectionLimit; // 0x4C
	private DateTime idleSince; // 0x50
	private static int nextId; // 0x0
	public readonly int ID; // 0x58

	// Methods

	// RVA: 0x1323D30 Offset: 0x131FD30 VA: 0x1323D30
	public void .ctor(ServicePoint servicePoint, int connectionLimit, int maxIdleTime) { }

	// RVA: 0x1325718 Offset: 0x1321718 VA: 0x1325718
	public void Run() { }

	[AsyncStateMachine(typeof(ServicePointScheduler.<RunScheduler>d__32))]
	// RVA: 0x132599C Offset: 0x132199C VA: 0x132599C
	private Task RunScheduler() { }

	// RVA: 0x1325A64 Offset: 0x1321A64 VA: 0x1325A64
	private void Cleanup() { }

	// RVA: 0x1325C70 Offset: 0x1321C70 VA: 0x1325C70
	private void RunSchedulerIteration() { }

	// RVA: 0x1325EF4 Offset: 0x1321EF4 VA: 0x1325EF4
	private bool OperationCompleted(ServicePointScheduler.ConnectionGroup group, WebOperation operation) { }

	// RVA: 0x1326614 Offset: 0x1322614 VA: 0x1326614
	private void CloseIdleConnection(ServicePointScheduler.ConnectionGroup group, WebConnection connection) { }

	// RVA: 0x1325E0C Offset: 0x1321E0C VA: 0x1325E0C
	private bool SchedulerIteration(ServicePointScheduler.ConnectionGroup group) { }

	// RVA: 0x132671C Offset: 0x132271C VA: 0x132671C
	private void RemoveOperation(WebOperation operation) { }

	// RVA: 0x13262EC Offset: 0x13222EC VA: 0x13262EC
	private void RemoveIdleConnection(WebConnection connection) { }

	// RVA: 0x13267D0 Offset: 0x13227D0 VA: 0x13267D0
	private void FinalCleanup() { }

	// RVA: 0x1324774 Offset: 0x1320774 VA: 0x1324774
	public void SendRequest(WebOperation operation, string groupName) { }

	// RVA: 0x1326850 Offset: 0x1322850 VA: 0x1326850
	private ServicePointScheduler.ConnectionGroup GetConnectionGroup(string name) { }

	// RVA: 0x1326A98 Offset: 0x1322A98 VA: 0x1326A98
	private void OnConnectionCreated(WebConnection connection) { }

	// RVA: 0x1326AA4 Offset: 0x1322AA4 VA: 0x1326AA4
	private void OnConnectionClosed(WebConnection connection) { }

	[AsyncStateMachine(typeof(ServicePointScheduler.<WaitAsync>d__46))]
	// RVA: 0x1326AC0 Offset: 0x1322AC0 VA: 0x1326AC0
	public static Task<bool> WaitAsync(Task workerTask, int millisecondTimeout) { }

	[CompilerGenerated]
	// RVA: 0x1326BB0 Offset: 0x1322BB0 VA: 0x1326BB0
	private Task <Run>b__31_0() { }
}


// Namespace: 
internal enum WebCompletionSource.Status<T> // TypeDefIndex: 3791
{
	// Fields
	public int value__; // 0x0
	public const WebCompletionSource.Status<T> Running = 0;
	public const WebCompletionSource.Status<T> Completed = 1;
	public const WebCompletionSource.Status<T> Canceled = 2;
	public const WebCompletionSource.Status<T> Faulted = 3;
}


// Namespace: 
internal class WebCompletionSource.Result<T> // TypeDefIndex: 3792
{
	// Fields
	[CompilerGenerated]
	private readonly WebCompletionSource.Status<T> <Status>k__BackingField; // 0x0
	[CompilerGenerated]
	private readonly ExceptionDispatchInfo <Error>k__BackingField; // 0x0
	[CompilerGenerated]
	private readonly T <Argument>k__BackingField; // 0x0

	// Properties
	public bool Success { get; }
	public ExceptionDispatchInfo Error { get; }

	// Methods

	// RVA: -1 Offset: -1
	public bool get_Success() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC56E58 Offset: 0xC52E58 VA: 0xC56E58
	|-WebCompletionSource.Result<__Il2CppFullySharedGenericType>.get_Success
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public ExceptionDispatchInfo get_Error() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC56E84 Offset: 0xC52E84 VA: 0xC56E84
	|-WebCompletionSource.Result<__Il2CppFullySharedGenericType>.get_Error
	*/

	// RVA: -1 Offset: -1
	public void .ctor(T argument) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC56EAC Offset: 0xC52EAC VA: 0xC56EAC
	|-WebCompletionSource.Result<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	public void .ctor(WebCompletionSource.Status<T> state, ExceptionDispatchInfo error) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC56FB8 Offset: 0xC52FB8 VA: 0xC56FB8
	|-WebCompletionSource.Result<__Il2CppFullySharedGenericType>..ctor
	*/
}


// Namespace: 
[CompilerGenerated]
private struct WebCompletionSource.<WaitForCompletion>d__15<T> : IAsyncStateMachine // TypeDefIndex: 3793
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<T> <>t__builder; // 0x0
	public WebCompletionSource<T> <>4__this; // 0x0
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<WebCompletionSource.Result<T>> <>u__1; // 0x0

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	private void MoveNext() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC5A18 Offset: 0xBC1A18 VA: 0xBC5A18
	|-WebCompletionSource.<WaitForCompletion>d__15<__Il2CppFullySharedGenericType>.MoveNext
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC5E84 Offset: 0xBC1E84 VA: 0xBC5E84
	|-WebCompletionSource.<WaitForCompletion>d__15<__Il2CppFullySharedGenericType>.SetStateMachine
	*/
}


// Namespace: System.Net
internal class WebCompletionSource<T> // TypeDefIndex: 3794
{
	// Fields
	private TaskCompletionSource<WebCompletionSource.Result<T>> completion; // 0x0
	private WebCompletionSource.Result<T> currentResult; // 0x0

	// Properties
	internal Task Task { get; }

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(bool runAsync = True) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCB777C Offset: 0xCB377C VA: 0xCB777C
	|-WebCompletionSource<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal Task get_Task() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCB77F0 Offset: 0xCB37F0 VA: 0xCB77F0
	|-WebCompletionSource<__Il2CppFullySharedGenericType>.get_Task
	*/

	// RVA: -1 Offset: -1
	public bool TrySetCompleted(T argument) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCB780C Offset: 0xCB380C VA: 0xCB780C
	|-WebCompletionSource<__Il2CppFullySharedGenericType>.TrySetCompleted
	*/

	// RVA: -1 Offset: -1
	public bool TrySetCompleted() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCB7954 Offset: 0xCB3954 VA: 0xCB7954
	|-WebCompletionSource<__Il2CppFullySharedGenericType>.TrySetCompleted
	*/

	// RVA: -1 Offset: -1
	public bool TrySetCanceled() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCB79F4 Offset: 0xCB39F4 VA: 0xCB79F4
	|-WebCompletionSource<__Il2CppFullySharedGenericType>.TrySetCanceled
	*/

	// RVA: -1 Offset: -1
	public bool TrySetCanceled(OperationCanceledException error) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCB7A68 Offset: 0xCB3A68 VA: 0xCB7A68
	|-WebCompletionSource<__Il2CppFullySharedGenericType>.TrySetCanceled
	*/

	// RVA: -1 Offset: -1
	public bool TrySetException(Exception error) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCB7B24 Offset: 0xCB3B24 VA: 0xCB7B24
	|-WebCompletionSource<__Il2CppFullySharedGenericType>.TrySetException
	*/

	// RVA: -1 Offset: -1
	public void ThrowOnError() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCB7BE0 Offset: 0xCB3BE0 VA: 0xCB7BE0
	|-WebCompletionSource<__Il2CppFullySharedGenericType>.ThrowOnError
	*/

	[AsyncStateMachine(typeof(WebCompletionSource.<WaitForCompletion>d__15<T>))]
	// RVA: -1 Offset: -1
	public Task<T> WaitForCompletion() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCB7C7C Offset: 0xCB3C7C VA: 0xCB7C7C
	|-WebCompletionSource<__Il2CppFullySharedGenericType>.WaitForCompletion
	*/
}


// Namespace: System.Net
internal class WebCompletionSource : WebCompletionSource<object> // TypeDefIndex: 3795
{
	// Methods

	// RVA: 0x131FFD8 Offset: 0x131BFD8 VA: 0x131FFD8
	public void .ctor() { }
}


// Namespace: System.Net
internal enum ReadState // TypeDefIndex: 3796
{
	// Fields
	public int value__; // 0x0
	public const ReadState None = 0;
	public const ReadState Status = 1;
	public const ReadState Headers = 2;
	public const ReadState Content = 3;
	public const ReadState Aborted = 4;
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class WebConnection.<>c // TypeDefIndex: 3797
{
	// Fields
	public static readonly WebConnection.<>c <>9; // 0x0
	public static Func<IPEndPoint, AsyncCallback, object, IAsyncResult> <>9__16_0; // 0x8
	public static Action<IAsyncResult> <>9__16_1; // 0x10

	// Methods

	// RVA: 0x1329504 Offset: 0x1325504 VA: 0x1329504
	private static void .cctor() { }

	// RVA: 0x1329560 Offset: 0x1325560 VA: 0x1329560
	public void .ctor() { }

	// RVA: 0x1329568 Offset: 0x1325568 VA: 0x1329568
	internal IAsyncResult <Connect>b__16_0(IPEndPoint targetEndPoint, AsyncCallback callback, object state) { }

	// RVA: 0x1329608 Offset: 0x1325608 VA: 0x1329608
	internal void <Connect>b__16_1(IAsyncResult asyncResult) { }
}


// Namespace: 
[CompilerGenerated]
private struct WebConnection.<Connect>d__16 : IAsyncStateMachine // TypeDefIndex: 3798
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public WebConnection <>4__this; // 0x20
	public WebOperation operation; // 0x28
	public CancellationToken cancellationToken; // 0x30
	private Exception <connectException>5__2; // 0x38
	private IPAddress[] <>7__wrap2; // 0x40
	private int <>7__wrap3; // 0x48
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter <>u__1; // 0x50

	// Methods

	// RVA: 0x13296FC Offset: 0x13256FC VA: 0x13296FC Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x132A0E4 Offset: 0x13260E4 VA: 0x132A0E4 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct WebConnection.<CreateStream>d__18 : IAsyncStateMachine // TypeDefIndex: 3799
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<bool> <>t__builder; // 0x8
	public WebConnection <>4__this; // 0x20
	public WebOperation operation; // 0x28
	public bool reused; // 0x30
	public CancellationToken cancellationToken; // 0x38
	private NetworkStream <stream>5__2; // 0x40
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter <>u__1; // 0x48
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<Stream> <>u__2; // 0x58

	// Methods

	// RVA: 0x132A14C Offset: 0x132614C VA: 0x132A14C Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x132A934 Offset: 0x1326934 VA: 0x132A934 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct WebConnection.<InitConnection>d__19 : IAsyncStateMachine // TypeDefIndex: 3800
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<WebRequestStream> <>t__builder; // 0x8
	public WebOperation operation; // 0x20
	public CancellationToken cancellationToken; // 0x28
	public WebConnection <>4__this; // 0x30
	private bool <reused>5__2; // 0x38
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter <>u__1; // 0x40
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<bool> <>u__2; // 0x50

	// Methods

	// RVA: 0x132A9B0 Offset: 0x13269B0 VA: 0x132A9B0 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x132B0CC Offset: 0x13270CC VA: 0x132B0CC Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: System.Net
internal class WebConnection : IDisposable // TypeDefIndex: 3801
{
	// Fields
	private NetworkCredential ntlm_credentials; // 0x10
	private bool ntlm_authenticated; // 0x18
	private bool unsafe_sharing; // 0x19
	private Stream networkStream; // 0x20
	private Socket socket; // 0x28
	private MonoTlsStream monoTlsStream; // 0x30
	private WebConnectionTunnel tunnel; // 0x38
	private int disposed; // 0x40
	[CompilerGenerated]
	private readonly ServicePoint <ServicePoint>k__BackingField; // 0x48
	private DateTime idleSince; // 0x50
	private WebOperation currentOperation; // 0x58

	// Properties
	public bool Closed { get; }

	// Methods

	// RVA: 0x132734C Offset: 0x132334C VA: 0x132734C
	public void .ctor(ServicePoint sPoint) { }

	// RVA: 0x1328494 Offset: 0x1324494 VA: 0x1328494
	private bool CanReuse() { }

	// RVA: 0x13284C4 Offset: 0x13244C4 VA: 0x13284C4
	private bool CheckReusable() { }

	[AsyncStateMachine(typeof(WebConnection.<Connect>d__16))]
	// RVA: 0x1328560 Offset: 0x1324560 VA: 0x1328560
	private Task Connect(WebOperation operation, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(WebConnection.<CreateStream>d__18))]
	// RVA: 0x132863C Offset: 0x132463C VA: 0x132863C
	private Task<bool> CreateStream(WebOperation operation, bool reused, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(WebConnection.<InitConnection>d__19))]
	// RVA: 0x1328748 Offset: 0x1324748 VA: 0x1328748
	internal Task<WebRequestStream> InitConnection(WebOperation operation, CancellationToken cancellationToken) { }

	// RVA: 0x132883C Offset: 0x132483C VA: 0x132883C
	internal static WebException GetException(WebExceptionStatus status, Exception error) { }

	// RVA: 0x13289BC Offset: 0x13249BC VA: 0x13289BC
	internal static bool ReadLine(byte[] buffer, ref int start, int max, ref string output) { }

	// RVA: 0x1326DF8 Offset: 0x1322DF8 VA: 0x1326DF8
	internal bool CanReuseConnection(WebOperation operation) { }

	// RVA: 0x1328B88 Offset: 0x1324B88 VA: 0x1328B88
	private bool PrepareSharingNtlm(WebOperation operation) { }

	// RVA: 0x1328DF4 Offset: 0x1324DF4 VA: 0x1328DF4
	private void Reset() { }

	// RVA: 0x1328EB8 Offset: 0x1324EB8 VA: 0x1328EB8
	private void Close(bool reset) { }

	// RVA: 0x1328F80 Offset: 0x1324F80 VA: 0x1328F80
	private void CloseSocket() { }

	// RVA: 0x1326BBC Offset: 0x1322BBC VA: 0x1326BBC
	public bool get_Closed() { }

	// RVA: 0x1327158 Offset: 0x1323158 VA: 0x1327158
	public bool StartOperation(WebOperation operation, bool reused) { }

	// RVA: 0x1326104 Offset: 0x1322104 VA: 0x1326104
	public bool Continue(WebOperation next) { }

	// RVA: 0x13294CC Offset: 0x13254CC VA: 0x13294CC
	private void Dispose(bool disposing) { }

	// RVA: 0x1326BB4 Offset: 0x1322BB4 VA: 0x1326BB4 Slot: 4
	public void Dispose() { }

	// RVA: 0x1328EAC Offset: 0x1324EAC VA: 0x1328EAC
	private void ResetNtlm() { }
}


// Namespace: System.Net
internal abstract class WebConnectionStream : Stream // TypeDefIndex: 3802
{
	// Fields
	protected bool closed; // 0x28
	private bool disposed; // 0x29
	private object locker; // 0x30
	private int read_timeout; // 0x38
	private int write_timeout; // 0x3C
	[CompilerGenerated]
	private readonly HttpWebRequest <Request>k__BackingField; // 0x40
	[CompilerGenerated]
	private readonly WebConnection <Connection>k__BackingField; // 0x48
	[CompilerGenerated]
	private readonly WebOperation <Operation>k__BackingField; // 0x50

	// Properties
	internal ServicePoint ServicePoint { get; }
	public override bool CanTimeout { get; }
	public override int ReadTimeout { set; }
	public override int WriteTimeout { set; }
	public override bool CanSeek { get; }
	public override long Length { get; }
	public override long Position { get; set; }

	// Methods

	// RVA: 0x132B148 Offset: 0x1327148 VA: 0x132B148
	protected void .ctor(WebConnection cnc, WebOperation operation) { }

	// RVA: 0x132B208 Offset: 0x1327208 VA: 0x132B208
	internal ServicePoint get_ServicePoint() { }

	// RVA: 0x132B224 Offset: 0x1327224 VA: 0x132B224 Slot: 7
	public override bool get_CanTimeout() { }

	// RVA: 0x132B22C Offset: 0x132722C VA: 0x132B22C Slot: 12
	public override void set_ReadTimeout(int value) { }

	// RVA: 0x132B28C Offset: 0x132728C VA: 0x132B28C Slot: 13
	public override void set_WriteTimeout(int value) { }

	// RVA: 0x132B2EC Offset: 0x13272EC VA: 0x132B2EC
	protected Exception GetException(Exception e) { }

	// RVA: -1 Offset: -1 Slot: 33
	protected abstract bool TryReadFromBufferedContent(byte[] buffer, int offset, int count, out int result);

	// RVA: 0x132B454 Offset: 0x1327454 VA: 0x132B454 Slot: 27
	public override int Read(byte[] buffer, int offset, int count) { }

	// RVA: 0x132B750 Offset: 0x1327750 VA: 0x132B750 Slot: 17
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback cb, object state) { }

	// RVA: 0x132B910 Offset: 0x1327910 VA: 0x132B910 Slot: 18
	public override int EndRead(IAsyncResult r) { }

	// RVA: 0x132BA40 Offset: 0x1327A40 VA: 0x132BA40 Slot: 21
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback cb, object state) { }

	// RVA: 0x132BC00 Offset: 0x1327C00 VA: 0x132BC00 Slot: 22
	public override void EndWrite(IAsyncResult r) { }

	// RVA: 0x132BCF4 Offset: 0x1327CF4 VA: 0x132BCF4 Slot: 30
	public override void Write(byte[] buffer, int offset, int count) { }

	// RVA: 0x132BEDC Offset: 0x1327EDC VA: 0x132BEDC Slot: 16
	public override void Flush() { }

	// RVA: 0x132BEE0 Offset: 0x1327EE0 VA: 0x132BEE0
	internal void InternalClose() { }

	// RVA: -1 Offset: -1 Slot: 34
	protected abstract void Close_internal(ref bool disposed);

	// RVA: 0x132BEEC Offset: 0x1327EEC VA: 0x132BEEC Slot: 14
	public override void Close() { }

	// RVA: 0x132BF00 Offset: 0x1327F00 VA: 0x132BF00 Slot: 25
	public override long Seek(long a, SeekOrigin b) { }

	// RVA: 0x132BF4C Offset: 0x1327F4C VA: 0x132BF4C Slot: 26
	public override void SetLength(long a) { }

	// RVA: 0x132BF98 Offset: 0x1327F98 VA: 0x132BF98 Slot: 6
	public override bool get_CanSeek() { }

	// RVA: 0x132BFA0 Offset: 0x1327FA0 VA: 0x132BFA0 Slot: 9
	public override long get_Length() { }

	// RVA: 0x132BFEC Offset: 0x1327FEC VA: 0x132BFEC Slot: 10
	public override long get_Position() { }

	// RVA: 0x132C038 Offset: 0x1328038 VA: 0x132C038 Slot: 11
	public override void set_Position(long value) { }
}


// Namespace: 
private enum WebConnectionTunnel.NtlmAuthState // TypeDefIndex: 3803
{
	// Fields
	public int value__; // 0x0
	public const WebConnectionTunnel.NtlmAuthState None = 0;
	public const WebConnectionTunnel.NtlmAuthState Challenge = 1;
	public const WebConnectionTunnel.NtlmAuthState Response = 2;
}


// Namespace: 
[CompilerGenerated]
private struct WebConnectionTunnel.<Initialize>d__42 : IAsyncStateMachine // TypeDefIndex: 3804
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public WebConnectionTunnel <>4__this; // 0x20
	public Stream stream; // 0x28
	public CancellationToken cancellationToken; // 0x30
	private bool <have_auth>5__2; // 0x38
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter <>u__1; // 0x40
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<ValueTuple<WebHeaderCollection, byte[], int>> <>u__2; // 0x50

	// Methods

	// RVA: 0x132C22C Offset: 0x132822C VA: 0x132C22C Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x132CF28 Offset: 0x1328F28 VA: 0x132CF28 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct WebConnectionTunnel.<ReadHeaders>d__43 : IAsyncStateMachine // TypeDefIndex: 3805
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection, byte[], int>> <>t__builder; // 0x8
	public CancellationToken cancellationToken; // 0x20
	public Stream stream; // 0x28
	public WebConnectionTunnel <>4__this; // 0x30
	private byte[] <retBuffer>5__2; // 0x38
	private int <status>5__3; // 0x40
	private byte[] <buffer>5__4; // 0x48
	private MemoryStream <ms>5__5; // 0x50
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<int> <>u__1; // 0x58

	// Methods

	// RVA: 0x132CF90 Offset: 0x1328F90 VA: 0x132CF90 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x132D7D0 Offset: 0x13297D0 VA: 0x132D7D0 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: System.Net
internal class WebConnectionTunnel // TypeDefIndex: 3806
{
	// Fields
	[CompilerGenerated]
	private readonly HttpWebRequest <Request>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly Uri <ConnectUri>k__BackingField; // 0x18
	private HttpWebRequest connectRequest; // 0x20
	private WebConnectionTunnel.NtlmAuthState ntlmAuthState; // 0x28
	[CompilerGenerated]
	private bool <Success>k__BackingField; // 0x2C
	[CompilerGenerated]
	private bool <CloseConnection>k__BackingField; // 0x2D
	[CompilerGenerated]
	private int <StatusCode>k__BackingField; // 0x30
	[CompilerGenerated]
	private string <StatusDescription>k__BackingField; // 0x38
	[CompilerGenerated]
	private string[] <Challenge>k__BackingField; // 0x40
	[CompilerGenerated]
	private WebHeaderCollection <Headers>k__BackingField; // 0x48
	[CompilerGenerated]
	private Version <ProxyVersion>k__BackingField; // 0x50
	[CompilerGenerated]
	private byte[] <Data>k__BackingField; // 0x58

	// Properties
	private bool Success { set; }
	public string[] Challenge { get; }
	public byte[] Data { get; }

	// Methods

	// RVA: 0x132A82C Offset: 0x132682C VA: 0x132A82C
	public void .ctor(HttpWebRequest request, Uri connectUri) { }

	[CompilerGenerated]
	// RVA: 0x132C084 Offset: 0x1328084 VA: 0x132C084
	private void set_Success(bool value) { }

	[CompilerGenerated]
	// RVA: 0x132C090 Offset: 0x1328090 VA: 0x132C090
	public string[] get_Challenge() { }

	[CompilerGenerated]
	// RVA: 0x132C098 Offset: 0x1328098 VA: 0x132C098
	public byte[] get_Data() { }

	[AsyncStateMachine(typeof(WebConnectionTunnel.<Initialize>d__42))]
	// RVA: 0x132A858 Offset: 0x1326858 VA: 0x132A858
	internal Task Initialize(Stream stream, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(WebConnectionTunnel.<ReadHeaders>d__43))]
	// RVA: 0x132C0A0 Offset: 0x13280A0 VA: 0x132C0A0
	private Task<ValueTuple<WebHeaderCollection, byte[], int>> ReadHeaders(Stream stream, CancellationToken cancellationToken) { }

	// RVA: 0x132C198 Offset: 0x1328198 VA: 0x132C198
	private void FlushContents(Stream stream, int contentLength) { }
}


// Namespace: 
[CompilerGenerated]
private struct WebOperation.<GetRequestStream>d__50 : IAsyncStateMachine // TypeDefIndex: 3807
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<Stream> <>t__builder; // 0x8
	public WebOperation <>4__this; // 0x20
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<WebRequestStream> <>u__1; // 0x28

	// Methods

	// RVA: 0x132E19C Offset: 0x132A19C VA: 0x132E19C Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x132E400 Offset: 0x132A400 VA: 0x132E400 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct WebOperation.<Run>d__58 : IAsyncStateMachine // TypeDefIndex: 3808
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncVoidMethodBuilder <>t__builder; // 0x8
	public WebOperation <>4__this; // 0x28
	private WebRequestStream <requestStream>5__2; // 0x30
	private WebResponseStream <stream>5__3; // 0x38
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<WebRequestStream> <>u__1; // 0x40
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter <>u__2; // 0x50

	// Methods

	// RVA: 0x132E47C Offset: 0x132A47C VA: 0x132E47C Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x132EC28 Offset: 0x132AC28 VA: 0x132EC28 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: System.Net
internal class WebOperation // TypeDefIndex: 3809
{
	// Fields
	[CompilerGenerated]
	private readonly HttpWebRequest <Request>k__BackingField; // 0x10
	[CompilerGenerated]
	private WebConnection <Connection>k__BackingField; // 0x18
	[CompilerGenerated]
	private ServicePoint <ServicePoint>k__BackingField; // 0x20
	[CompilerGenerated]
	private readonly BufferOffsetSize <WriteBuffer>k__BackingField; // 0x28
	[CompilerGenerated]
	private readonly bool <IsNtlmChallenge>k__BackingField; // 0x30
	private CancellationTokenSource cts; // 0x38
	private WebCompletionSource<WebRequestStream> requestTask; // 0x40
	private WebCompletionSource<WebRequestStream> requestWrittenTask; // 0x48
	private WebCompletionSource<WebResponseStream> responseTask; // 0x50
	private WebCompletionSource<ValueTuple<bool, WebOperation>> finishedTask; // 0x58
	private WebRequestStream writeStream; // 0x60
	private WebResponseStream responseStream; // 0x68
	private ExceptionDispatchInfo disposedInfo; // 0x70
	private ExceptionDispatchInfo closedInfo; // 0x78
	private WebOperation priorityRequest; // 0x80
	private int requestSent; // 0x88
	private int finished; // 0x8C

	// Properties
	public bool Aborted { get; }
	public bool Closed { get; }
	public WebRequestStream WriteStream { get; }
	internal WebCompletionSource<ValueTuple<bool, WebOperation>> Finished { get; }

	// Methods

	// RVA: 0x132D84C Offset: 0x132984C VA: 0x132D84C
	public void .ctor(HttpWebRequest request, BufferOffsetSize writeBuffer, bool isNtlmChallenge, CancellationToken cancellationToken) { }

	// RVA: 0x1326BCC Offset: 0x1322BCC VA: 0x1326BCC
	public bool get_Aborted() { }

	// RVA: 0x132D9E0 Offset: 0x13299E0 VA: 0x132D9E0
	public bool get_Closed() { }

	// RVA: 0x132DA0C Offset: 0x1329A0C VA: 0x132DA0C
	public void Abort() { }

	// RVA: 0x132DC04 Offset: 0x1329C04 VA: 0x132DC04
	public void Close() { }

	// RVA: 0x132DB3C Offset: 0x1329B3C VA: 0x132DB3C
	private void SetCanceled() { }

	// RVA: 0x132DCB0 Offset: 0x1329CB0 VA: 0x132DCB0
	private void SetError(Exception error) { }

	// RVA: 0x132DA4C Offset: 0x1329A4C VA: 0x132DA4C
	private ValueTuple<ExceptionDispatchInfo, bool> SetDisposed(ref ExceptionDispatchInfo field) { }

	// RVA: 0x132DD54 Offset: 0x1329D54 VA: 0x132DD54
	internal ExceptionDispatchInfo CheckDisposed(CancellationToken cancellationToken) { }

	// RVA: 0x132DE34 Offset: 0x1329E34 VA: 0x132DE34
	internal void ThrowIfDisposed() { }

	// RVA: 0x132A064 Offset: 0x1326064 VA: 0x132A064
	internal void ThrowIfDisposed(CancellationToken cancellationToken) { }

	// RVA: 0x132B6F0 Offset: 0x13276F0 VA: 0x132B6F0
	internal void ThrowIfClosedOrDisposed() { }

	// RVA: 0x132AEDC Offset: 0x1326EDC VA: 0x132AEDC
	internal void ThrowIfClosedOrDisposed(CancellationToken cancellationToken) { }

	// RVA: 0x132DDDC Offset: 0x1329DDC VA: 0x132DDDC
	private ExceptionDispatchInfo CheckThrowDisposed(bool throwIt, ref ExceptionDispatchInfo field) { }

	// RVA: 0x13291DC Offset: 0x13251DC VA: 0x13291DC
	internal void RegisterRequest(ServicePoint servicePoint, WebConnection connection) { }

	// RVA: 0x132DE94 Offset: 0x1329E94 VA: 0x132DE94
	public void SetPriorityRequest(WebOperation operation) { }

	[AsyncStateMachine(typeof(WebOperation.<GetRequestStream>d__50))]
	// RVA: 0x132E010 Offset: 0x132A010 VA: 0x132E010
	public Task<Stream> GetRequestStream() { }

	// RVA: 0x132003C Offset: 0x131C03C VA: 0x132003C
	internal Task<WebRequestStream> GetRequestStreamInternal() { }

	// RVA: 0x1320024 Offset: 0x131C024 VA: 0x1320024
	public WebRequestStream get_WriteStream() { }

	// RVA: 0x1320160 Offset: 0x131C160 VA: 0x1320160
	public Task<WebResponseStream> GetResponseStream() { }

	// RVA: 0x132E0F0 Offset: 0x132A0F0 VA: 0x132E0F0
	internal WebCompletionSource<ValueTuple<bool, WebOperation>> get_Finished() { }

	[AsyncStateMachine(typeof(WebOperation.<Run>d__58))]
	// RVA: 0x132943C Offset: 0x132543C VA: 0x132943C
	internal void Run() { }

	// RVA: 0x132E0F8 Offset: 0x132A0F8 VA: 0x132E0F8
	internal void CompleteRequestWritten(WebRequestStream stream, Exception error) { }

	// RVA: 0x1320294 Offset: 0x131C294 VA: 0x1320294
	internal void Finish(bool ok, Exception error) { }

	[CompilerGenerated]
	// RVA: 0x132E178 Offset: 0x132A178 VA: 0x132E178
	private void <RegisterRequest>b__48_0() { }
}


// Namespace: 
[CompilerGenerated]
private struct WebReadStream.<ReadAsync>d__28 : IAsyncStateMachine // TypeDefIndex: 3810
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<int> <>t__builder; // 0x8
	public WebReadStream <>4__this; // 0x20
	public CancellationToken cancellationToken; // 0x28
	public byte[] buffer; // 0x30
	public int offset; // 0x38
	public int size; // 0x3C
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<int> <>u__1; // 0x40
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter <>u__2; // 0x50

	// Methods

	// RVA: 0x132F558 Offset: 0x132B558 VA: 0x132F558 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x132FB18 Offset: 0x132BB18 VA: 0x132FB18 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: System.Net
internal abstract class WebReadStream : Stream // TypeDefIndex: 3811
{
	// Fields
	[CompilerGenerated]
	private readonly WebOperation <Operation>k__BackingField; // 0x28
	[CompilerGenerated]
	private readonly Stream <InnerStream>k__BackingField; // 0x30
	private bool disposed; // 0x38

	// Properties
	public override long Length { get; }
	public override long Position { get; set; }
	public override bool CanSeek { get; }
	public override bool CanRead { get; }
	public override bool CanWrite { get; }

	// Methods

	// RVA: 0x1322E40 Offset: 0x131EE40 VA: 0x1322E40
	public void .ctor(WebOperation operation, Stream innerStream) { }

	// RVA: 0x132EC34 Offset: 0x132AC34 VA: 0x132EC34 Slot: 9
	public override long get_Length() { }

	// RVA: 0x132EC6C Offset: 0x132AC6C VA: 0x132EC6C Slot: 10
	public override long get_Position() { }

	// RVA: 0x132ECA4 Offset: 0x132ACA4 VA: 0x132ECA4 Slot: 11
	public override void set_Position(long value) { }

	// RVA: 0x132ECDC Offset: 0x132ACDC VA: 0x132ECDC Slot: 6
	public override bool get_CanSeek() { }

	// RVA: 0x132ECE4 Offset: 0x132ACE4 VA: 0x132ECE4 Slot: 5
	public override bool get_CanRead() { }

	// RVA: 0x132ECEC Offset: 0x132ACEC VA: 0x132ECEC Slot: 8
	public override bool get_CanWrite() { }

	// RVA: 0x132ECF4 Offset: 0x132ACF4 VA: 0x132ECF4 Slot: 26
	public override void SetLength(long value) { }

	// RVA: 0x132ED2C Offset: 0x132AD2C VA: 0x132ED2C Slot: 25
	public override long Seek(long offset, SeekOrigin origin) { }

	// RVA: 0x132ED64 Offset: 0x132AD64 VA: 0x132ED64 Slot: 30
	public override void Write(byte[] buffer, int offset, int count) { }

	// RVA: 0x132ED9C Offset: 0x132AD9C VA: 0x132ED9C Slot: 16
	public override void Flush() { }

	// RVA: 0x132EDD4 Offset: 0x132ADD4 VA: 0x132EDD4
	protected Exception GetException(Exception e) { }

	// RVA: 0x132EF3C Offset: 0x132AF3C VA: 0x132EF3C Slot: 27
	public override int Read(byte[] buffer, int offset, int size) { }

	// RVA: 0x132F15C Offset: 0x132B15C VA: 0x132F15C Slot: 17
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int size, AsyncCallback cb, object state) { }

	// RVA: 0x132F2D4 Offset: 0x132B2D4 VA: 0x132F2D4 Slot: 18
	public override int EndRead(IAsyncResult r) { }

	[AsyncStateMachine(typeof(WebReadStream.<ReadAsync>d__28))]
	// RVA: 0x132F404 Offset: 0x132B404 VA: 0x132F404 Slot: 19
	public sealed override Task<int> ReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken) { }

	// RVA: -1 Offset: -1 Slot: 33
	protected abstract Task<int> ProcessReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken);

	// RVA: 0x13230F0 Offset: 0x131F0F0 VA: 0x13230F0 Slot: 34
	internal virtual Task FinishReading(CancellationToken cancellationToken) { }

	// RVA: 0x132F50C Offset: 0x132B50C VA: 0x132F50C Slot: 15
	protected override void Dispose(bool disposing) { }
}


// Namespace: 
[CompilerGenerated]
private struct WebRequestStream.<FinishWriting>d__31 : IAsyncStateMachine // TypeDefIndex: 3812
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public WebRequestStream <>4__this; // 0x20
	public CancellationToken cancellationToken; // 0x28
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter <>u__1; // 0x30

	// Methods

	// RVA: 0x1330804 Offset: 0x132C804 VA: 0x1330804 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x1330B2C Offset: 0x132CB2C VA: 0x1330B2C Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct WebRequestStream.<WriteAsyncInner>d__33 : IAsyncStateMachine // TypeDefIndex: 3813
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public WebRequestStream <>4__this; // 0x20
	public byte[] buffer; // 0x28
	public int offset; // 0x30
	public int size; // 0x34
	public CancellationToken cancellationToken; // 0x38
	public WebCompletionSource completion; // 0x40
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter <>u__1; // 0x48
	private TaskAwaiter <>u__2; // 0x58

	// Methods

	// RVA: 0x1330B94 Offset: 0x132CB94 VA: 0x1330B94 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x1331060 Offset: 0x132D060 VA: 0x1331060 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct WebRequestStream.<ProcessWrite>d__34 : IAsyncStateMachine // TypeDefIndex: 3814
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public WebRequestStream <>4__this; // 0x20
	public CancellationToken cancellationToken; // 0x28
	public int size; // 0x30
	public byte[] buffer; // 0x38
	public int offset; // 0x40
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter <>u__1; // 0x48

	// Methods

	// RVA: 0x13310C8 Offset: 0x132D0C8 VA: 0x13310C8 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x13315FC Offset: 0x132D5FC VA: 0x13315FC Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct WebRequestStream.<Initialize>d__36 : IAsyncStateMachine // TypeDefIndex: 3815
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public WebRequestStream <>4__this; // 0x20
	public CancellationToken cancellationToken; // 0x28
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter <>u__1; // 0x30
	private TaskAwaiter <>u__2; // 0x40

	// Methods

	// RVA: 0x1331664 Offset: 0x132D664 VA: 0x1331664 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x13319C8 Offset: 0x132D9C8 VA: 0x13319C8 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct WebRequestStream.<SetHeadersAsync>d__37 : IAsyncStateMachine // TypeDefIndex: 3816
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public WebRequestStream <>4__this; // 0x20
	public CancellationToken cancellationToken; // 0x28
	public bool setInternalLength; // 0x30
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter <>u__1; // 0x38

	// Methods

	// RVA: 0x1331A30 Offset: 0x132DA30 VA: 0x1331A30 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x13320E8 Offset: 0x132E0E8 VA: 0x13320E8 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct WebRequestStream.<WriteRequestAsync>d__38 : IAsyncStateMachine // TypeDefIndex: 3817
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public WebRequestStream <>4__this; // 0x20
	public CancellationToken cancellationToken; // 0x28
	private BufferOffsetSize <buffer>5__2; // 0x30
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter <>u__1; // 0x38
	private TaskAwaiter <>u__2; // 0x48

	// Methods

	// RVA: 0x1332150 Offset: 0x132E150 VA: 0x1332150 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x133262C Offset: 0x132E62C VA: 0x133262C Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct WebRequestStream.<WriteChunkTrailer_inner>d__39 : IAsyncStateMachine // TypeDefIndex: 3818
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public WebRequestStream <>4__this; // 0x20
	public CancellationToken cancellationToken; // 0x28
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter <>u__1; // 0x30

	// Methods

	// RVA: 0x1332694 Offset: 0x132E694 VA: 0x1332694 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x1332910 Offset: 0x132E910 VA: 0x1332910 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct WebRequestStream.<WriteChunkTrailer>d__40 : IAsyncStateMachine // TypeDefIndex: 3819
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public WebRequestStream <>4__this; // 0x20
	private CancellationTokenSource <cts>5__2; // 0x28
	private Task <timeoutTask>5__3; // 0x30
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<Task> <>u__1; // 0x38
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter <>u__2; // 0x48

	// Methods

	// RVA: 0x1332978 Offset: 0x132E978 VA: 0x1332978 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x1333048 Offset: 0x132F048 VA: 0x1333048 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: System.Net
internal class WebRequestStream : WebConnectionStream // TypeDefIndex: 3820
{
	// Fields
	private static byte[] crlf; // 0x0
	private MemoryStream writeBuffer; // 0x58
	private bool requestWritten; // 0x60
	private bool allowBuffering; // 0x61
	private bool sendChunked; // 0x62
	private WebCompletionSource pendingWrite; // 0x68
	private long totalWritten; // 0x70
	private byte[] headers; // 0x78
	private bool headersSent; // 0x80
	private int completeRequestWritten; // 0x84
	private int chunkTrailerWritten; // 0x88
	[CompilerGenerated]
	private readonly Stream <InnerStream>k__BackingField; // 0x90
	[CompilerGenerated]
	private readonly bool <KeepAlive>k__BackingField; // 0x98

	// Properties
	public override bool CanRead { get; }
	public override bool CanWrite { get; }
	internal bool HasWriteBuffer { get; }
	internal int WriteBufferLength { get; }

	// Methods

	// RVA: 0x132AF64 Offset: 0x1326F64 VA: 0x132AF64
	public void .ctor(WebConnection connection, WebOperation operation, Stream stream, WebConnectionTunnel tunnel) { }

	// RVA: 0x132FB94 Offset: 0x132BB94 VA: 0x132FB94 Slot: 5
	public override bool get_CanRead() { }

	// RVA: 0x132FB9C Offset: 0x132BB9C VA: 0x132FB9C Slot: 8
	public override bool get_CanWrite() { }

	// RVA: 0x132FBA4 Offset: 0x132BBA4 VA: 0x132FBA4
	internal bool get_HasWriteBuffer() { }

	// RVA: 0x132FBD8 Offset: 0x132BBD8 VA: 0x132FBD8
	internal int get_WriteBufferLength() { }

	// RVA: 0x132FC1C Offset: 0x132BC1C VA: 0x132FC1C
	internal BufferOffsetSize GetWriteBuffer() { }

	[AsyncStateMachine(typeof(WebRequestStream.<FinishWriting>d__31))]
	// RVA: 0x132FCF0 Offset: 0x132BCF0 VA: 0x132FCF0
	private Task FinishWriting(CancellationToken cancellationToken) { }

	// RVA: 0x132FDC0 Offset: 0x132BDC0 VA: 0x132FDC0 Slot: 23
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(WebRequestStream.<WriteAsyncInner>d__33))]
	// RVA: 0x133001C Offset: 0x132C01C VA: 0x133001C
	private Task WriteAsyncInner(byte[] buffer, int offset, int size, WebCompletionSource completion, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(WebRequestStream.<ProcessWrite>d__34))]
	// RVA: 0x1330118 Offset: 0x132C118 VA: 0x1330118
	private Task ProcessWrite(byte[] buffer, int offset, int size, CancellationToken cancellationToken) { }

	// RVA: 0x1330210 Offset: 0x132C210 VA: 0x1330210
	private void CheckWriteOverflow(long contentLength, long totalWritten, long size) { }

	[AsyncStateMachine(typeof(WebRequestStream.<Initialize>d__36))]
	// RVA: 0x132EA04 Offset: 0x132AA04 VA: 0x132EA04
	internal Task Initialize(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(WebRequestStream.<SetHeadersAsync>d__37))]
	// RVA: 0x13302A8 Offset: 0x132C2A8 VA: 0x13302A8
	private Task SetHeadersAsync(bool setInternalLength, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(WebRequestStream.<WriteRequestAsync>d__38))]
	// RVA: 0x132008C Offset: 0x131C08C VA: 0x132008C
	internal Task WriteRequestAsync(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(WebRequestStream.<WriteChunkTrailer_inner>d__39))]
	// RVA: 0x1330388 Offset: 0x132C388 VA: 0x1330388
	private Task WriteChunkTrailer_inner(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(WebRequestStream.<WriteChunkTrailer>d__40))]
	// RVA: 0x1330458 Offset: 0x132C458 VA: 0x1330458
	private Task WriteChunkTrailer() { }

	// RVA: 0x1320FFC Offset: 0x131CFFC VA: 0x1320FFC
	internal void KillBuffer() { }

	// RVA: 0x1330524 Offset: 0x132C524 VA: 0x1330524 Slot: 19
	public override Task<int> ReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken) { }

	// RVA: 0x13305D4 Offset: 0x132C5D4 VA: 0x13305D4 Slot: 33
	protected override bool TryReadFromBufferedContent(byte[] buffer, int offset, int count, out int result) { }

	// RVA: 0x133060C Offset: 0x132C60C VA: 0x133060C Slot: 34
	protected override void Close_internal(ref bool disposed) { }

	// RVA: 0x1330770 Offset: 0x132C770 VA: 0x1330770
	private static void .cctor() { }
}


// Namespace: 
[CompilerGenerated]
private struct WebResponseStream.<ReadAsync>d__40 : IAsyncStateMachine // TypeDefIndex: 3821
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<int> <>t__builder; // 0x8
	public CancellationToken cancellationToken; // 0x20
	public byte[] buffer; // 0x28
	public int offset; // 0x30
	public int count; // 0x34
	public WebResponseStream <>4__this; // 0x38
	private WebCompletionSource <completion>5__2; // 0x40
	private int <nbytes>5__3; // 0x48
	private Exception <throwMe>5__4; // 0x50
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<object> <>u__1; // 0x58
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<int> <>u__2; // 0x68

	// Methods

	// RVA: 0x125DEB8 Offset: 0x1259EB8 VA: 0x125DEB8 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x125E814 Offset: 0x125A814 VA: 0x125E814 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class WebResponseStream.<>c__DisplayClass41_0 // TypeDefIndex: 3822
{
	// Fields
	public WebResponseStream <>4__this; // 0x10
	public byte[] buffer; // 0x18
	public int offset; // 0x20
	public int size; // 0x24

	// Methods

	// RVA: 0x125E890 Offset: 0x125A890 VA: 0x125E890
	public void .ctor() { }

	// RVA: 0x125E898 Offset: 0x125A898 VA: 0x125E898
	internal Task<int> <ProcessRead>b__0(CancellationToken ct) { }

	// RVA: 0x125E8D4 Offset: 0x125A8D4 VA: 0x125E8D4
	internal void <ProcessRead>b__1() { }

	// RVA: 0x125E914 Offset: 0x125A914 VA: 0x125E914
	internal bool <ProcessRead>b__2() { }
}


// Namespace: 
[CompilerGenerated]
private struct WebResponseStream.<ReadAllAsyncInner>d__47 : IAsyncStateMachine // TypeDefIndex: 3823
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<byte[]> <>t__builder; // 0x8
	public CancellationToken cancellationToken; // 0x20
	public WebResponseStream <>4__this; // 0x28
	private long <maximumSize>5__2; // 0x30
	private MemoryStream <ms>5__3; // 0x38
	private byte[] <buffer>5__4; // 0x40
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<int> <>u__1; // 0x48

	// Methods

	// RVA: 0x125E938 Offset: 0x125A938 VA: 0x125E938 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x125EECC Offset: 0x125AECC VA: 0x125EECC Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct WebResponseStream.<ReadAllAsync>d__48 : IAsyncStateMachine // TypeDefIndex: 3824
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public WebResponseStream <>4__this; // 0x20
	public CancellationToken cancellationToken; // 0x28
	public bool resending; // 0x30
	private WebCompletionSource <completion>5__2; // 0x38
	private CancellationTokenSource <timeoutCts>5__3; // 0x40
	private Task <timeoutTask>5__4; // 0x48
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<Task> <>u__1; // 0x50
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<byte[]> <>u__2; // 0x60

	// Methods

	// RVA: 0x125EF48 Offset: 0x125AF48 VA: 0x125EF48 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x125F8DC Offset: 0x125B8DC VA: 0x125F8DC Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct WebResponseStream.<InitReadAsync>d__52 : IAsyncStateMachine // TypeDefIndex: 3825
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public WebResponseStream <>4__this; // 0x20
	public CancellationToken cancellationToken; // 0x28
	private BufferOffsetSize <buffer>5__2; // 0x30
	private ReadState <state>5__3; // 0x38
	private int <position>5__4; // 0x3C
	private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<int> <>u__1; // 0x40

	// Methods

	// RVA: 0x125F944 Offset: 0x125B944 VA: 0x125F944 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x1260048 Offset: 0x125C048 VA: 0x1260048 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: System.Net
internal class WebResponseStream : WebConnectionStream // TypeDefIndex: 3826
{
	// Fields
	private WebReadStream innerStream; // 0x58
	private bool nextReadCalled; // 0x60
	private bool bufferedEntireContent; // 0x61
	private WebCompletionSource pendingRead; // 0x68
	private object locker; // 0x70
	private int nestedRead; // 0x78
	private bool read_eof; // 0x7C
	[CompilerGenerated]
	private readonly WebRequestStream <RequestStream>k__BackingField; // 0x80
	[CompilerGenerated]
	private WebHeaderCollection <Headers>k__BackingField; // 0x88
	[CompilerGenerated]
	private HttpStatusCode <StatusCode>k__BackingField; // 0x90
	[CompilerGenerated]
	private string <StatusDescription>k__BackingField; // 0x98
	[CompilerGenerated]
	private Version <Version>k__BackingField; // 0xA0
	[CompilerGenerated]
	private bool <KeepAlive>k__BackingField; // 0xA8
	[CompilerGenerated]
	private bool <ChunkedRead>k__BackingField; // 0xA9

	// Properties
	public override bool CanRead { get; }
	public override bool CanWrite { get; }
	private bool ChunkedRead { set; }
	private bool ExpectContent { get; }

	// Methods

	// RVA: 0x132EAD8 Offset: 0x132AAD8 VA: 0x132EAD8
	public void .ctor(WebRequestStream request) { }

	// RVA: 0x13330B0 Offset: 0x132F0B0 VA: 0x13330B0 Slot: 5
	public override bool get_CanRead() { }

	// RVA: 0x13330B8 Offset: 0x132F0B8 VA: 0x13330B8 Slot: 8
	public override bool get_CanWrite() { }

	[CompilerGenerated]
	// RVA: 0x13330C0 Offset: 0x132F0C0 VA: 0x13330C0
	private void set_ChunkedRead(bool value) { }

	[AsyncStateMachine(typeof(WebResponseStream.<ReadAsync>d__40))]
	// RVA: 0x13330CC Offset: 0x132F0CC VA: 0x13330CC Slot: 19
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken) { }

	// RVA: 0x13331DC Offset: 0x132F1DC VA: 0x13331DC
	private Task<int> ProcessRead(byte[] buffer, int offset, int size, CancellationToken cancellationToken) { }

	// RVA: 0x133344C Offset: 0x132F44C VA: 0x133344C Slot: 33
	protected override bool TryReadFromBufferedContent(byte[] buffer, int offset, int count, out int result) { }

	// RVA: 0x1333518 Offset: 0x132F518 VA: 0x1333518
	private bool get_ExpectContent() { }

	// RVA: 0x13335A4 Offset: 0x132F5A4 VA: 0x13335A4
	private void Initialize(BufferOffsetSize buffer) { }

	[AsyncStateMachine(typeof(WebResponseStream.<ReadAllAsyncInner>d__47))]
	// RVA: 0x1333AAC Offset: 0x132FAAC VA: 0x1333AAC
	private Task<byte[]> ReadAllAsyncInner(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(WebResponseStream.<ReadAllAsync>d__48))]
	// RVA: 0x13201B0 Offset: 0x131C1B0 VA: 0x13201B0
	internal Task ReadAllAsync(bool resending, CancellationToken cancellationToken) { }

	// RVA: 0x1333B9C Offset: 0x132FB9C VA: 0x1333B9C Slot: 23
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken) { }

	// RVA: 0x1333C38 Offset: 0x132FC38 VA: 0x1333C38 Slot: 34
	protected override void Close_internal(ref bool disposed) { }

	// RVA: 0x1333CC0 Offset: 0x132FCC0 VA: 0x1333CC0
	private WebException GetReadException(WebExceptionStatus status, Exception error, string where) { }

	[AsyncStateMachine(typeof(WebResponseStream.<InitReadAsync>d__52))]
	// RVA: 0x132EB54 Offset: 0x132AB54 VA: 0x132EB54
	internal Task InitReadAsync(CancellationToken cancellationToken) { }

	// RVA: 0x1333F50 Offset: 0x132FF50 VA: 0x1333F50
	private bool GetResponse(BufferOffsetSize buffer, ref int pos, ref ReadState state) { }
}


// Namespace: System.Net.NetworkInformation
public abstract class IPGlobalProperties // TypeDefIndex: 3827
{
	// Properties
	public abstract string DomainName { get; }

	// Methods

	// RVA: 0x12600B0 Offset: 0x125C0B0 VA: 0x12600B0
	public static IPGlobalProperties GetIPGlobalProperties() { }

	// RVA: 0x12600FC Offset: 0x125C0FC VA: 0x12600FC
	internal static IPGlobalProperties InternalGetIPGlobalProperties() { }

	// RVA: -1 Offset: -1 Slot: 4
	public abstract string get_DomainName();

	// RVA: 0x1260100 Offset: 0x125C100 VA: 0x1260100
	protected void .ctor() { }
}


// Namespace: System.Net.NetworkInformation
[Serializable]
public class NetworkInformationException : Win32Exception // TypeDefIndex: 3828
{
	// Methods

	// RVA: 0x1260108 Offset: 0x125C108 VA: 0x1260108
	public void .ctor() { }

	// RVA: 0x126016C Offset: 0x125C16C VA: 0x126016C
	protected void .ctor(SerializationInfo serializationInfo, StreamingContext streamingContext) { }
}


// Namespace: System.Net.NetworkInformation
public enum NetworkInterfaceComponent // TypeDefIndex: 3829
{
	// Fields
	public int value__; // 0x0
	public const NetworkInterfaceComponent IPv4 = 0;
	public const NetworkInterfaceComponent IPv6 = 1;
}


// Namespace: System.Net.NetworkInformation
internal static class IPGlobalPropertiesFactoryPal // TypeDefIndex: 3830
{
	// Methods

	// RVA: 0x12600B4 Offset: 0x125C0B4 VA: 0x12600B4
	public static IPGlobalProperties Create() { }
}


// Namespace: System.Net.NetworkInformation
internal abstract class CommonUnixIPGlobalProperties : IPGlobalProperties // TypeDefIndex: 3831
{
	// Properties
	public override string DomainName { get; }

	// Methods

	// RVA: 0x12602BC Offset: 0x125C2BC VA: 0x12602BC
	private static extern int getdomainname(byte[] name, int len) { }

	// RVA: 0x1260348 Offset: 0x125C348 VA: 0x1260348 Slot: 4
	public override string get_DomainName() { }

	// RVA: 0x12604D4 Offset: 0x125C4D4 VA: 0x12604D4
	protected void .ctor() { }
}


// Namespace: System.Net.NetworkInformation
internal class UnixIPGlobalProperties : CommonUnixIPGlobalProperties // TypeDefIndex: 3832
{
	// Methods

	// RVA: 0x12604DC Offset: 0x125C4DC VA: 0x12604DC
	public void .ctor() { }
}


// Namespace: System.Net.NetworkInformation
internal sealed class UnixNoLibCIPGlobalProperties : UnixIPGlobalProperties // TypeDefIndex: 3833
{
	// Properties
	public override string DomainName { get; }

	// Methods

	// RVA: 0x12604E4 Offset: 0x125C4E4 VA: 0x12604E4 Slot: 4
	public override string get_DomainName() { }

	// RVA: 0x126052C Offset: 0x125C52C VA: 0x126052C
	public void .ctor() { }
}


// Namespace: System.Net.NetworkInformation
internal class MibIPGlobalProperties : UnixIPGlobalProperties // TypeDefIndex: 3834
{
	// Fields
	public readonly string StatisticsFile; // 0x10
	public readonly string StatisticsFileIPv6; // 0x18
	public readonly string TcpFile; // 0x20
	public readonly string Tcp6File; // 0x28
	public readonly string UdpFile; // 0x30
	public readonly string Udp6File; // 0x38
	private static readonly char[] wsChars; // 0x0

	// Methods

	// RVA: 0x1260534 Offset: 0x125C534 VA: 0x1260534
	public void .ctor(string procDir) { }

	// RVA: 0x126069C Offset: 0x125C69C VA: 0x126069C
	private static void .cctor() { }
}


// Namespace: System.Net.NetworkInformation
internal static class UnixIPGlobalPropertiesFactoryPal // TypeDefIndex: 3835
{
	// Fields
	[CompilerGenerated]
	private static readonly bool <PlatformNeedsLibCWorkaround>k__BackingField; // 0x0

	// Methods

	// RVA: 0x1260174 Offset: 0x125C174 VA: 0x1260174
	public static IPGlobalProperties Create() { }
}


// Namespace: System.Net.Configuration
internal sealed class DefaultProxySectionInternal // TypeDefIndex: 3836
{
	// Fields
	private IWebProxy webProxy; // 0x10
	private static object classSyncObject; // 0x0

	// Properties
	internal static object ClassSyncObject { get; }

	// Methods

	// RVA: 0x1260730 Offset: 0x125C730 VA: 0x1260730
	private static IWebProxy GetDefaultProxy_UsingOldMonoCode() { }

	// RVA: 0x1260738 Offset: 0x125C738 VA: 0x1260738
	private static IWebProxy GetSystemWebProxy() { }

	// RVA: 0x1260740 Offset: 0x125C740 VA: 0x1260740
	internal static object get_ClassSyncObject() { }

	// RVA: 0x12607D8 Offset: 0x125C7D8 VA: 0x12607D8
	internal static DefaultProxySectionInternal GetSection() { }

	// RVA: 0x12608E8 Offset: 0x125C8E8 VA: 0x12608E8
	public void .ctor() { }
}


// Namespace: System.Net.Configuration
internal sealed class SettingsSectionInternal // TypeDefIndex: 3837
{
	// Fields
	private static readonly SettingsSectionInternal instance; // 0x0
	internal readonly bool HttpListenerUnescapeRequestUrl; // 0x10
	internal readonly IPProtectionLevel IPProtectionLevel; // 0x14

	// Methods

	// RVA: 0x12608F0 Offset: 0x125C8F0 VA: 0x12608F0
	public void .ctor() { }

	// RVA: 0x1260908 Offset: 0x125C908 VA: 0x1260908
	private static void .cctor() { }
}


// Namespace: System.Net.Cache
internal abstract class RequestCache // TypeDefIndex: 3838
{
	// Fields
	internal static readonly char[] LineSplits; // 0x0

	// Methods

	// RVA: 0x1260974 Offset: 0x125C974 VA: 0x1260974
	private static void .cctor() { }
}


// Namespace: System.Net.Cache
internal class RequestCacheValidator // TypeDefIndex: 3839
{
	// Methods

	// RVA: 0x1260A08 Offset: 0x125CA08 VA: 0x1260A08
	public object CreateValidator() { }
}


// Namespace: System.Net.Cache
internal class RequestCacheBinding // TypeDefIndex: 3840
{
	// Fields
	private RequestCache m_RequestCache; // 0x10
	private RequestCacheValidator m_CacheValidator; // 0x18
}


// Namespace: System.Net.Cache
public enum RequestCacheLevel // TypeDefIndex: 3841
{
	// Fields
	public int value__; // 0x0
	public const RequestCacheLevel Default = 0;
	public const RequestCacheLevel BypassCache = 1;
	public const RequestCacheLevel CacheOnly = 2;
	public const RequestCacheLevel CacheIfAvailable = 3;
	public const RequestCacheLevel Revalidate = 4;
	public const RequestCacheLevel Reload = 5;
	public const RequestCacheLevel NoCacheNoStore = 6;
}


// Namespace: System.Net.Cache
public class RequestCachePolicy // TypeDefIndex: 3842
{
	// Fields
	private RequestCacheLevel m_Level; // 0x10

	// Methods

	// RVA: 0x1260A40 Offset: 0x125CA40 VA: 0x1260A40
	public void .ctor(RequestCacheLevel level) { }

	// RVA: 0x1260AB8 Offset: 0x125CAB8 VA: 0x1260AB8 Slot: 3
	public override string ToString() { }
}


// Namespace: System.Net.Cache
internal class RequestCacheProtocol // TypeDefIndex: 3843
{
	// Methods

	// RVA: 0x1260B50 Offset: 0x125CB50 VA: 0x1260B50
	public void .ctor(object arg1, object arg2) { }
}


// Namespace: System.Net.Sockets
public class NetworkStream : Stream // TypeDefIndex: 3844
{
	// Fields
	private readonly Socket _streamSocket; // 0x28
	private readonly bool _ownsSocket; // 0x30
	private bool _readable; // 0x31
	private bool _writeable; // 0x32
	private int _closeTimeout; // 0x34
	private bool _cleanedUp; // 0x38
	private int _currentReadTimeout; // 0x3C
	private int _currentWriteTimeout; // 0x40

	// Properties
	public override bool CanRead { get; }
	public override bool CanSeek { get; }
	public override bool CanWrite { get; }
	public override bool CanTimeout { get; }
	public override int ReadTimeout { set; }
	public override int WriteTimeout { set; }
	public override long Length { get; }
	public override long Position { get; set; }
	internal Socket InternalSocket { get; }

	// Methods

	// RVA: 0x1260B90 Offset: 0x125CB90 VA: 0x1260B90
	public void .ctor(Socket socket) { }

	// RVA: 0x1260D3C Offset: 0x125CD3C VA: 0x1260D3C
	public void .ctor(Socket socket, bool ownsSocket) { }

	// RVA: 0x1260B9C Offset: 0x125CB9C VA: 0x1260B9C
	public void .ctor(Socket socket, FileAccess access, bool ownsSocket) { }

	// RVA: 0x1260D48 Offset: 0x125CD48 VA: 0x1260D48 Slot: 5
	public override bool get_CanRead() { }

	// RVA: 0x1260D50 Offset: 0x125CD50 VA: 0x1260D50 Slot: 6
	public override bool get_CanSeek() { }

	// RVA: 0x1260D58 Offset: 0x125CD58 VA: 0x1260D58 Slot: 8
	public override bool get_CanWrite() { }

	// RVA: 0x1260D60 Offset: 0x125CD60 VA: 0x1260D60 Slot: 7
	public override bool get_CanTimeout() { }

	// RVA: 0x1260D68 Offset: 0x125CD68 VA: 0x1260D68 Slot: 12
	public override void set_ReadTimeout(int value) { }

	// RVA: 0x1260EDC Offset: 0x125CEDC VA: 0x1260EDC Slot: 13
	public override void set_WriteTimeout(int value) { }

	// RVA: 0x1260F60 Offset: 0x125CF60 VA: 0x1260F60 Slot: 9
	public override long get_Length() { }

	// RVA: 0x1260FAC Offset: 0x125CFAC VA: 0x1260FAC Slot: 10
	public override long get_Position() { }

	// RVA: 0x1260FF8 Offset: 0x125CFF8 VA: 0x1260FF8 Slot: 11
	public override void set_Position(long value) { }

	// RVA: 0x1261044 Offset: 0x125D044 VA: 0x1261044 Slot: 25
	public override long Seek(long offset, SeekOrigin origin) { }

	// RVA: 0x1261090 Offset: 0x125D090 VA: 0x1261090 Slot: 27
	public override int Read(byte[] buffer, int offset, int size) { }

	// RVA: 0x12613C8 Offset: 0x125D3C8 VA: 0x12613C8 Slot: 28
	public override int Read(Span<byte> destination) { }

	// RVA: 0x126170C Offset: 0x125D70C VA: 0x126170C Slot: 29
	public override int ReadByte() { }

	// RVA: 0x126180C Offset: 0x125D80C VA: 0x126180C Slot: 30
	public override void Write(byte[] buffer, int offset, int size) { }

	// RVA: 0x1261B44 Offset: 0x125DB44 VA: 0x1261B44 Slot: 31
	public override void Write(ReadOnlySpan<byte> source) { }

	// RVA: 0x1261E18 Offset: 0x125DE18 VA: 0x1261E18 Slot: 32
	public override void WriteByte(byte value) { }

	// RVA: 0x1261F0C Offset: 0x125DF0C VA: 0x1261F0C
	public void Close(int timeout) { }

	// RVA: 0x1261F70 Offset: 0x125DF70 VA: 0x1261F70 Slot: 15
	protected override void Dispose(bool disposing) { }

	// RVA: 0x1262078 Offset: 0x125E078 VA: 0x1262078 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x126211C Offset: 0x125E11C VA: 0x126211C Slot: 17
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int size, AsyncCallback callback, object state) { }

	// RVA: 0x1262484 Offset: 0x125E484 VA: 0x1262484 Slot: 18
	public override int EndRead(IAsyncResult asyncResult) { }

	// RVA: 0x12626E8 Offset: 0x125E6E8 VA: 0x12626E8 Slot: 21
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int size, AsyncCallback callback, object state) { }

	// RVA: 0x1262A50 Offset: 0x125EA50 VA: 0x1262A50 Slot: 22
	public override void EndWrite(IAsyncResult asyncResult) { }

	// RVA: 0x1262CB4 Offset: 0x125ECB4 VA: 0x1262CB4 Slot: 19
	public override Task<int> ReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken) { }

	// RVA: 0x1263300 Offset: 0x125F300 VA: 0x1263300 Slot: 20
	public override ValueTask<int> ReadAsync(Memory<byte> buffer, CancellationToken cancellationToken) { }

	// RVA: 0x1263534 Offset: 0x125F534 VA: 0x1263534 Slot: 23
	public override Task WriteAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken) { }

	// RVA: 0x1263B88 Offset: 0x125FB88 VA: 0x1263B88 Slot: 24
	public override ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, CancellationToken cancellationToken) { }

	// RVA: 0x1263DB8 Offset: 0x125FDB8 VA: 0x1263DB8 Slot: 16
	public override void Flush() { }

	// RVA: 0x1263DBC Offset: 0x125FDBC VA: 0x1263DBC Slot: 26
	public override void SetLength(long value) { }

	// RVA: 0x1260DEC Offset: 0x125CDEC VA: 0x1260DEC
	internal void SetSocketTimeoutOption(SocketShutdown mode, int timeout, bool silent) { }

	// RVA: 0x1263F44 Offset: 0x125FF44 VA: 0x1263F44
	internal Socket get_InternalSocket() { }
}


// Namespace: 
private sealed class Socket.CachedEventArgs // TypeDefIndex: 3845
{
	// Fields
	public Socket.TaskSocketAsyncEventArgs<Socket> TaskAccept; // 0x10
	public Socket.Int32TaskSocketAsyncEventArgs TaskReceive; // 0x18
	public Socket.Int32TaskSocketAsyncEventArgs TaskSend; // 0x20
	public Socket.AwaitableSocketAsyncEventArgs ValueTaskReceive; // 0x28
	public Socket.AwaitableSocketAsyncEventArgs ValueTaskSend; // 0x30

	// Methods

	// RVA: 0x126C50C Offset: 0x126850C VA: 0x126C50C
	public void .ctor() { }
}


// Namespace: 
private class Socket.TaskSocketAsyncEventArgs<TResult> : SocketAsyncEventArgs // TypeDefIndex: 3846
{
	// Fields
	internal AsyncTaskMethodBuilder<TResult> _builder; // 0x0
	internal bool _accessed; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	internal void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC61014 Offset: 0xC5D014 VA: 0xC61014
	|-Socket.TaskSocketAsyncEventArgs<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal AsyncTaskMethodBuilder<TResult> GetCompletionResponsibility(out bool responsibleForReturningToPool) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC61020 Offset: 0xC5D020 VA: 0xC61020
	|-Socket.TaskSocketAsyncEventArgs<__Il2CppFullySharedGenericType>.GetCompletionResponsibility
	*/
}


// Namespace: 
private sealed class Socket.Int32TaskSocketAsyncEventArgs : Socket.TaskSocketAsyncEventArgs<int> // TypeDefIndex: 3847
{
	// Fields
	internal bool _wrapExceptionsInIOExceptions; // 0x99

	// Methods

	// RVA: 0x126C4C4 Offset: 0x12684C4 VA: 0x126C4C4
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class Socket.AwaitableSocketAsyncEventArgs.<>c // TypeDefIndex: 3848
{
	// Fields
	public static readonly Socket.AwaitableSocketAsyncEventArgs.<>c <>9; // 0x0
	public static ContextCallback <>9__14_0; // 0x8
	public static SendOrPostCallback <>9__20_0; // 0x10

	// Methods

	// RVA: 0x126D110 Offset: 0x1269110 VA: 0x126D110
	private static void .cctor() { }

	// RVA: 0x126D16C Offset: 0x126916C VA: 0x126D16C
	public void .ctor() { }

	// RVA: 0x126D174 Offset: 0x1269174 VA: 0x126D174
	internal void <OnCompleted>b__14_0(object runState) { }

	// RVA: 0x126D200 Offset: 0x1269200 VA: 0x126D200
	internal void <InvokeContinuation>b__20_0(object s) { }

	// RVA: 0x126D294 Offset: 0x1269294 VA: 0x126D294
	internal void <.cctor>b__27_0(object state) { }

	// RVA: 0x126D2E0 Offset: 0x12692E0 VA: 0x126D2E0
	internal void <.cctor>b__27_1(object state) { }
}


// Namespace: 
internal sealed class Socket.AwaitableSocketAsyncEventArgs : SocketAsyncEventArgs, IValueTaskSource, IValueTaskSource<int> // TypeDefIndex: 3849
{
	// Fields
	internal static readonly Socket.AwaitableSocketAsyncEventArgs Reserved; // 0x0
	private static readonly Action<object> s_completedSentinel; // 0x8
	private static readonly Action<object> s_availableSentinel; // 0x10
	private Action<object> _continuation; // 0x80
	private ExecutionContext _executionContext; // 0x88
	private object _scheduler; // 0x90
	private short _token; // 0x98
	[CompilerGenerated]
	private bool <WrapExceptionsInIOExceptions>k__BackingField; // 0x9A

	// Methods

	// RVA: 0x126C514 Offset: 0x1268514 VA: 0x126C514
	public void .ctor() { }

	// RVA: 0x1263FD8 Offset: 0x125FFD8 VA: 0x1263FD8
	public bool Reserve() { }

	// RVA: 0x126C608 Offset: 0x1268608 VA: 0x126C608
	private void Release() { }

	// RVA: 0x126C678 Offset: 0x1268678 VA: 0x126C678 Slot: 5
	protected override void OnCompleted(SocketAsyncEventArgs _) { }

	// RVA: 0x1264140 Offset: 0x1260140 VA: 0x1264140
	public ValueTask<int> ReceiveAsync(Socket socket) { }

	// RVA: 0x1264518 Offset: 0x1260518 VA: 0x1264518
	public ValueTask SendAsyncForNetworkStream(Socket socket) { }

	// RVA: 0x126CC18 Offset: 0x1268C18 VA: 0x126CC18 Slot: 9
	public ValueTaskSourceStatus GetStatus(short token) { }

	// RVA: 0x126CCF8 Offset: 0x1268CF8 VA: 0x126CCF8 Slot: 10
	public void OnCompleted(Action<object> continuation, object state, short token, ValueTaskSourceOnCompletedFlags flags) { }

	// RVA: 0x126C880 Offset: 0x1268880 VA: 0x126C880
	private void InvokeContinuation(Action<object> continuation, object state, bool forceAsync) { }

	// RVA: 0x126CF28 Offset: 0x1268F28 VA: 0x126CF28 Slot: 11
	public int GetResult(short token) { }

	// RVA: 0x126CF94 Offset: 0x1268F94 VA: 0x126CF94 Slot: 8
	private void System.Threading.Tasks.Sources.IValueTaskSource.GetResult(short token) { }

	// RVA: 0x126CCAC Offset: 0x1268CAC VA: 0x126CCAC
	private void ThrowIncorrectTokenException() { }

	// RVA: 0x126CEDC Offset: 0x1268EDC VA: 0x126CEDC
	private void ThrowMultipleContinuationsException() { }

	// RVA: 0x126CF70 Offset: 0x1268F70 VA: 0x126CF70
	private void ThrowException(SocketError error) { }

	// RVA: 0x126CB2C Offset: 0x1268B2C VA: 0x126CB2C
	private Exception CreateException(SocketError error) { }

	// RVA: 0x126CFD4 Offset: 0x1268FD4 VA: 0x126CFD4
	private static void .cctor() { }
}


// Namespace: 
private struct Socket.WSABUF // TypeDefIndex: 3850
{
	// Fields
	public int len; // 0x0
	public IntPtr buf; // 0x8
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class Socket.<>c // TypeDefIndex: 3851
{
	// Fields
	public static readonly Socket.<>c <>9; // 0x0
	public static Func<Socket.CachedEventArgs> <>9__14_0; // 0x8
	public static Func<Socket.AwaitableSocketAsyncEventArgs> <>9__14_1; // 0x10
	public static AsyncCallback <>9__15_0; // 0x18
	public static AsyncCallback <>9__15_1; // 0x20
	public static Func<Socket.CachedEventArgs> <>9__22_0; // 0x28
	public static Func<Socket.AwaitableSocketAsyncEventArgs> <>9__22_1; // 0x30
	public static AsyncCallback <>9__23_0; // 0x38
	public static AsyncCallback <>9__23_1; // 0x40
	public static IOAsyncCallback <>9__295_0; // 0x48
	public static IOAsyncCallback <>9__297_0; // 0x50

	// Methods

	// RVA: 0x126D32C Offset: 0x126932C VA: 0x126D32C
	private static void .cctor() { }

	// RVA: 0x126D388 Offset: 0x1269388 VA: 0x126D388
	public void .ctor() { }

	// RVA: 0x126D390 Offset: 0x1269390 VA: 0x126D390
	internal Socket.CachedEventArgs <ReceiveAsync>b__14_0() { }

	// RVA: 0x126D3E4 Offset: 0x12693E4 VA: 0x126D3E4
	internal Socket.AwaitableSocketAsyncEventArgs <ReceiveAsync>b__14_1() { }

	// RVA: 0x126D434 Offset: 0x1269434 VA: 0x126D434
	internal void <ReceiveAsyncApm>b__15_0(IAsyncResult iar) { }

	// RVA: 0x126D65C Offset: 0x126965C VA: 0x126D65C
	internal void <ReceiveAsyncApm>b__15_1(IAsyncResult iar) { }

	// RVA: 0x126DAA8 Offset: 0x1269AA8 VA: 0x126DAA8
	internal Socket.CachedEventArgs <SendAsyncForNetworkStream>b__22_0() { }

	// RVA: 0x126DAFC Offset: 0x1269AFC VA: 0x126DAFC
	internal Socket.AwaitableSocketAsyncEventArgs <SendAsyncForNetworkStream>b__22_1() { }

	// RVA: 0x126DB4C Offset: 0x1269B4C VA: 0x126DB4C
	internal void <SendAsyncApm>b__23_0(IAsyncResult iar) { }

	// RVA: 0x126DD74 Offset: 0x1269D74 VA: 0x126DD74
	internal void <SendAsyncApm>b__23_1(IAsyncResult iar) { }

	// RVA: 0x126E0D8 Offset: 0x126A0D8 VA: 0x126E0D8
	internal void <SendAsync>b__295_0(IOAsyncResult s) { }

	// RVA: 0x126E168 Offset: 0x126A168 VA: 0x126E168
	internal void <BeginSend>b__297_0(IOAsyncResult s) { }

	// RVA: 0x126E1F8 Offset: 0x126A1F8 VA: 0x126E1F8
	internal void <.cctor>b__367_0(object s, SocketAsyncEventArgs e) { }

	// RVA: 0x126E2EC Offset: 0x126A2EC VA: 0x126E2EC
	internal void <.cctor>b__367_1(object s, SocketAsyncEventArgs e) { }

	// RVA: 0x126E3C8 Offset: 0x126A3C8 VA: 0x126E3C8
	internal void <.cctor>b__367_2(object s, SocketAsyncEventArgs e) { }

	// RVA: 0x126E4A4 Offset: 0x126A4A4 VA: 0x126E4A4
	internal void <.cctor>b__367_3(IAsyncResult ares) { }

	// RVA: 0x126E728 Offset: 0x126A728 VA: 0x126E728
	internal void <.cctor>b__367_4(IOAsyncResult ares) { }

	// RVA: 0x126E854 Offset: 0x126A854 VA: 0x126E854
	internal void <.cctor>b__367_5(IOAsyncResult ares) { }

	// RVA: 0x126EA84 Offset: 0x126AA84 VA: 0x126EA84
	internal void <.cctor>b__367_6(IAsyncResult ares) { }

	// RVA: 0x126ED0C Offset: 0x126AD0C VA: 0x126ED0C
	internal void <.cctor>b__367_7(IOAsyncResult ares) { }

	// RVA: 0x126F174 Offset: 0x126B174 VA: 0x126F174
	internal void <.cctor>b__367_8(IAsyncResult ares) { }

	// RVA: 0x126F3FC Offset: 0x126B3FC VA: 0x126F3FC
	internal void <.cctor>b__367_9(IOAsyncResult ares) { }

	// RVA: 0x126F4F8 Offset: 0x126B4F8 VA: 0x126F4F8
	internal void <.cctor>b__367_10(IAsyncResult ares) { }

	// RVA: 0x126F78C Offset: 0x126B78C VA: 0x126F78C
	internal void <.cctor>b__367_11(IOAsyncResult ares) { }

	// RVA: 0x126FA2C Offset: 0x126BA2C VA: 0x126FA2C
	internal void <.cctor>b__367_12(IOAsyncResult ares) { }

	// RVA: 0x126FB34 Offset: 0x126BB34 VA: 0x126FB34
	internal void <.cctor>b__367_13(IAsyncResult ares) { }

	// RVA: 0x126FDE4 Offset: 0x126BDE4 VA: 0x126FDE4
	internal void <.cctor>b__367_14(IOAsyncResult ares) { }

	// RVA: 0x126FF50 Offset: 0x126BF50 VA: 0x126FF50
	internal void <.cctor>b__367_15(IAsyncResult ares) { }

	// RVA: 0x12701E4 Offset: 0x126C1E4 VA: 0x12701E4
	internal void <.cctor>b__367_16(IOAsyncResult ares) { }

	// RVA: 0x12702EC Offset: 0x126C2EC VA: 0x12702EC
	internal void <.cctor>b__367_17(IAsyncResult ares) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class Socket.<>c__DisplayClass240_0 // TypeDefIndex: 3852
{
	// Fields
	public SocketAsyncResult sockares; // 0x10

	// Methods

	// RVA: 0x12694B0 Offset: 0x12654B0 VA: 0x12694B0
	public void .ctor() { }

	// RVA: 0x1270580 Offset: 0x126C580 VA: 0x1270580
	internal void <BeginConnect>b__0(Task<IPAddress[]> t) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class Socket.<>c__DisplayClass298_0 // TypeDefIndex: 3853
{
	// Fields
	public int sent_so_far; // 0x10

	// Methods

	// RVA: 0x126B5F4 Offset: 0x12675F4 VA: 0x126B5F4
	public void .ctor() { }

	// RVA: 0x12706B0 Offset: 0x126C6B0 VA: 0x12706B0
	internal void <BeginSendCallback>b__0(IOAsyncResult s) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class Socket.<>c__DisplayClass355_0 // TypeDefIndex: 3854
{
	// Fields
	public Socket <>4__this; // 0x10
	public IOSelectorJob job; // 0x18
	public IntPtr handle; // 0x20

	// Methods

	// RVA: 0x126BB78 Offset: 0x1267B78 VA: 0x126BB78
	public void .ctor() { }

	// RVA: 0x1270750 Offset: 0x126C750 VA: 0x1270750
	internal void <QueueIOSelectorJob>b__0(Task t) { }
}


// Namespace: System.Net.Sockets
public class Socket : IDisposable // TypeDefIndex: 3855
{
	// Fields
	private static readonly EventHandler<SocketAsyncEventArgs> AcceptCompletedHandler; // 0x0
	private static readonly EventHandler<SocketAsyncEventArgs> ReceiveCompletedHandler; // 0x8
	private static readonly EventHandler<SocketAsyncEventArgs> SendCompletedHandler; // 0x10
	private static readonly Socket.TaskSocketAsyncEventArgs<Socket> s_rentedSocketSentinel; // 0x18
	private static readonly Socket.Int32TaskSocketAsyncEventArgs s_rentedInt32Sentinel; // 0x20
	private static readonly Task<int> s_zeroTask; // 0x28
	private Socket.CachedEventArgs _cachedTaskEventArgs; // 0x10
	private static object s_InternalSyncObject; // 0x30
	internal static bool s_SupportsIPv4; // 0x38
	internal static bool s_SupportsIPv6; // 0x39
	internal static bool s_OSSupportsIPv6; // 0x3A
	internal static bool s_Initialized; // 0x3B
	private static bool s_LoggingEnabled; // 0x3C
	private bool is_closed; // 0x18
	private bool is_listening; // 0x19
	private int linger_timeout; // 0x1C
	private AddressFamily addressFamily; // 0x20
	private SocketType socketType; // 0x24
	private ProtocolType protocolType; // 0x28
	internal SafeSocketHandle m_Handle; // 0x30
	internal EndPoint seed_endpoint; // 0x38
	internal SemaphoreSlim ReadSem; // 0x40
	internal SemaphoreSlim WriteSem; // 0x48
	internal bool is_blocking; // 0x50
	internal bool is_bound; // 0x51
	internal bool is_connected; // 0x52
	private int m_IntCleanedUp; // 0x54
	internal bool connect_in_progress; // 0x58
	private static AsyncCallback AcceptAsyncCallback; // 0x40
	private static IOAsyncCallback BeginAcceptCallback; // 0x48
	private static IOAsyncCallback BeginAcceptReceiveCallback; // 0x50
	private static AsyncCallback ConnectAsyncCallback; // 0x58
	private static IOAsyncCallback BeginConnectCallback; // 0x60
	private static AsyncCallback DisconnectAsyncCallback; // 0x68
	private static IOAsyncCallback BeginDisconnectCallback; // 0x70
	private static AsyncCallback ReceiveAsyncCallback; // 0x78
	private static IOAsyncCallback BeginReceiveCallback; // 0x80
	private static IOAsyncCallback BeginReceiveGenericCallback; // 0x88
	private static AsyncCallback ReceiveFromAsyncCallback; // 0x90
	private static IOAsyncCallback BeginReceiveFromCallback; // 0x98
	private static AsyncCallback SendAsyncCallback; // 0xA0
	private static IOAsyncCallback BeginSendGenericCallback; // 0xA8
	private static AsyncCallback SendToAsyncCallback; // 0xB0

	// Properties
	public static bool OSSupportsIPv4 { get; }
	public static bool OSSupportsIPv6 { get; }
	public IntPtr Handle { get; }
	public bool DontFragment { set; }
	public bool DualMode { get; set; }
	private bool IsDualMode { get; }
	private static object InternalSyncObject { get; }
	internal bool CleanedUp { get; }
	public EndPoint LocalEndPoint { get; }
	public bool Blocking { set; }
	public bool NoDelay { set; }
	public EndPoint RemoteEndPoint { get; }
	internal static int FamilyHint { get; }

	// Methods

	// RVA: 0x1263018 Offset: 0x125F018 VA: 0x1263018
	internal ValueTask<int> ReceiveAsync(Memory<byte> buffer, SocketFlags socketFlags, bool fromNetworkStream, CancellationToken cancellationToken) { }

	// RVA: 0x12641EC Offset: 0x12601EC VA: 0x12641EC
	private Task<int> ReceiveAsyncApm(Memory<byte> buffer, SocketFlags socketFlags) { }

	// RVA: 0x12638A4 Offset: 0x125F8A4 VA: 0x12638A4
	internal ValueTask SendAsyncForNetworkStream(ReadOnlyMemory<byte> buffer, SocketFlags socketFlags, CancellationToken cancellationToken) { }

	// RVA: 0x1264574 Offset: 0x1260574 VA: 0x1264574
	private Task<int> SendAsyncApm(ReadOnlyMemory<byte> buffer, SocketFlags socketFlags) { }

	// RVA: 0x12648F0 Offset: 0x12608F0 VA: 0x12648F0
	private static void CompleteAccept(Socket s, Socket.TaskSocketAsyncEventArgs<Socket> saea) { }

	// RVA: 0x1264B70 Offset: 0x1260B70 VA: 0x1264B70
	private static void CompleteSendReceive(Socket s, Socket.Int32TaskSocketAsyncEventArgs saea, bool isReceive) { }

	// RVA: 0x1264A88 Offset: 0x1260A88 VA: 0x1264A88
	private static Exception GetException(SocketError error, bool wrapExceptionsInIOExceptions = False) { }

	// RVA: 0x1264CE4 Offset: 0x1260CE4 VA: 0x1264CE4
	private void ReturnSocketAsyncEventArgs(Socket.Int32TaskSocketAsyncEventArgs saea, bool isReceive) { }

	// RVA: 0x1264A48 Offset: 0x1260A48 VA: 0x1264A48
	private void ReturnSocketAsyncEventArgs(Socket.TaskSocketAsyncEventArgs<Socket> saea) { }

	// RVA: 0x1264D30 Offset: 0x1260D30 VA: 0x1264D30
	public void .ctor(AddressFamily addressFamily, SocketType socketType, ProtocolType protocolType) { }

	// RVA: 0x12653B8 Offset: 0x12613B8 VA: 0x12653B8
	public static bool get_OSSupportsIPv4() { }

	// RVA: 0x126541C Offset: 0x126141C VA: 0x126541C
	public static bool get_OSSupportsIPv6() { }

	// RVA: 0x1265480 Offset: 0x1261480 VA: 0x1265480
	public IntPtr get_Handle() { }

	// RVA: 0x126549C Offset: 0x126149C VA: 0x126549C
	public void set_DontFragment(bool value) { }

	// RVA: 0x1265630 Offset: 0x1261630 VA: 0x1265630
	public bool get_DualMode() { }

	// RVA: 0x12658A8 Offset: 0x12618A8 VA: 0x12658A8
	public void set_DualMode(bool value) { }

	// RVA: 0x1265928 Offset: 0x1261928 VA: 0x1265928
	private bool get_IsDualMode() { }

	// RVA: 0x1265940 Offset: 0x1261940 VA: 0x1265940
	internal bool CanTryAddressFamily(AddressFamily family) { }

	// RVA: 0x1265978 Offset: 0x1261978 VA: 0x1265978
	public int Send(IList<ArraySegment<byte>> buffers, SocketFlags socketFlags) { }

	// RVA: 0x1261AE8 Offset: 0x125DAE8 VA: 0x1261AE8
	public int Send(byte[] buffer, int offset, int size, SocketFlags socketFlags) { }

	// RVA: 0x126136C Offset: 0x125D36C VA: 0x126136C
	public int Receive(byte[] buffer, int offset, int size, SocketFlags socketFlags) { }

	// RVA: 0x126614C Offset: 0x126214C VA: 0x126614C
	public int Receive(IList<ArraySegment<byte>> buffers, SocketFlags socketFlags) { }

	// RVA: 0x1266664 Offset: 0x1262664 VA: 0x1266664
	public int IOControl(IOControlCode ioControlCode, byte[] optionInValue, byte[] optionOutValue) { }

	// RVA: 0x1265200 Offset: 0x1261200 VA: 0x1265200
	public void SetIPProtectionLevel(IPProtectionLevel level) { }

	// RVA: 0x12629DC Offset: 0x125E9DC VA: 0x12629DC
	public IAsyncResult BeginSend(byte[] buffer, int offset, int size, SocketFlags socketFlags, AsyncCallback callback, object state) { }

	// RVA: 0x1262C58 Offset: 0x125EC58 VA: 0x1262C58
	public int EndSend(IAsyncResult asyncResult) { }

	// RVA: 0x1262410 Offset: 0x125E410 VA: 0x1262410
	public IAsyncResult BeginReceive(byte[] buffer, int offset, int size, SocketFlags socketFlags, AsyncCallback callback, object state) { }

	// RVA: 0x126268C Offset: 0x125E68C VA: 0x126268C
	public int EndReceive(IAsyncResult asyncResult) { }

	// RVA: 0x1266D54 Offset: 0x1262D54 VA: 0x1266D54
	private static object get_InternalSyncObject() { }

	// RVA: 0x1266E20 Offset: 0x1262E20 VA: 0x1266E20
	internal bool get_CleanedUp() { }

	// RVA: 0x1264F34 Offset: 0x1260F34 VA: 0x1264F34
	internal static void InitializeSockets() { }

	// RVA: 0x1266E84 Offset: 0x1262E84 VA: 0x1266E84 Slot: 4
	public void Dispose() { }

	// RVA: 0x1266EF0 Offset: 0x1262EF0 VA: 0x1266EF0 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x1261FE8 Offset: 0x125DFE8 VA: 0x1261FE8
	internal void InternalShutdown(SocketShutdown how) { }

	// RVA: 0x1263E08 Offset: 0x125FE08 VA: 0x1263E08
	internal void SetSocketOption(SocketOptionLevel optionLevel, SocketOptionName optionName, int optionValue, bool silent) { }

	// RVA: 0x1267208 Offset: 0x1263208 VA: 0x1267208
	internal void .ctor(AddressFamily family, SocketType type, ProtocolType proto, SafeSocketHandle safe_handle) { }

	// RVA: 0x12652E4 Offset: 0x12612E4 VA: 0x12652E4
	private void SocketDefaults() { }

	// RVA: 0x1265118 Offset: 0x1261118 VA: 0x1265118
	private static IntPtr Socket_icall(AddressFamily family, SocketType type, ProtocolType proto, out int error) { }

	// RVA: 0x1267338 Offset: 0x1263338 VA: 0x1267338
	public EndPoint get_LocalEndPoint() { }

	// RVA: 0x12674A4 Offset: 0x12634A4 VA: 0x12674A4
	private static SocketAddress LocalEndPoint_internal(SafeSocketHandle safeHandle, int family, out int error) { }

	// RVA: 0x12675E4 Offset: 0x12635E4 VA: 0x12675E4
	private static SocketAddress LocalEndPoint_icall(IntPtr socket, int family, out int error) { }

	// RVA: 0x12675E8 Offset: 0x12635E8 VA: 0x12675E8
	public void set_Blocking(bool value) { }

	// RVA: 0x12676A8 Offset: 0x12636A8 VA: 0x12676A8
	private static void Blocking_internal(SafeSocketHandle safeHandle, bool block, out int error) { }

	// RVA: 0x12677CC Offset: 0x12637CC VA: 0x12677CC
	internal static void Blocking_icall(IntPtr socket, bool block, out int error) { }

	// RVA: 0x12672F8 Offset: 0x12632F8 VA: 0x12672F8
	public void set_NoDelay(bool value) { }

	// RVA: 0x1267820 Offset: 0x1263820 VA: 0x1267820
	public EndPoint get_RemoteEndPoint() { }

	// RVA: 0x1267910 Offset: 0x1263910 VA: 0x1267910
	private static SocketAddress RemoteEndPoint_internal(SafeSocketHandle safeHandle, int family, out int error) { }

	// RVA: 0x1267A50 Offset: 0x1263A50 VA: 0x1267A50
	private static SocketAddress RemoteEndPoint_icall(IntPtr socket, int family, out int error) { }

	// RVA: 0x1267A54 Offset: 0x1263A54 VA: 0x1267A54
	public bool Poll(int microSeconds, SelectMode mode) { }

	// RVA: 0x1267BE4 Offset: 0x1263BE4 VA: 0x1267BE4
	private static bool Poll_internal(SafeSocketHandle safeHandle, SelectMode mode, int timeout, out int error) { }

	// RVA: 0x1267D34 Offset: 0x1263D34 VA: 0x1267D34
	private static bool Poll_icall(IntPtr socket, SelectMode mode, int timeout, out int error) { }

	// RVA: 0x1267D38 Offset: 0x1263D38 VA: 0x1267D38
	public Socket Accept() { }

	// RVA: 0x1267FA8 Offset: 0x1263FA8 VA: 0x1267FA8
	internal void Accept(Socket acceptSocket) { }

	// RVA: 0x12680B8 Offset: 0x12640B8 VA: 0x12680B8
	public IAsyncResult BeginAccept(AsyncCallback callback, object state) { }

	// RVA: 0x12683B0 Offset: 0x12643B0 VA: 0x12683B0
	public Socket EndAccept(IAsyncResult asyncResult) { }

	// RVA: 0x12683D8 Offset: 0x12643D8 VA: 0x12683D8
	public Socket EndAccept(out byte[] buffer, out int bytesTransferred, IAsyncResult asyncResult) { }

	// RVA: 0x1267E68 Offset: 0x1263E68 VA: 0x1267E68
	private static SafeSocketHandle Accept_internal(SafeSocketHandle safeHandle, out int error, bool blocking) { }

	// RVA: 0x12687DC Offset: 0x12647DC VA: 0x12687DC
	private static IntPtr Accept_icall(IntPtr sock, out int error, bool blocking) { }

	// RVA: 0x12687E4 Offset: 0x12647E4 VA: 0x12687E4
	public void Bind(EndPoint localEP) { }

	// RVA: 0x1268A10 Offset: 0x1264A10 VA: 0x1268A10
	private static void Bind_internal(SafeSocketHandle safeHandle, SocketAddress sa, out int error) { }

	// RVA: 0x1268B34 Offset: 0x1264B34 VA: 0x1268B34
	private static void Bind_icall(IntPtr sock, SocketAddress sa, out int error) { }

	// RVA: 0x1268B38 Offset: 0x1264B38 VA: 0x1268B38
	public void Listen(int backlog) { }

	// RVA: 0x1268C1C Offset: 0x1264C1C VA: 0x1268C1C
	private static void Listen_internal(SafeSocketHandle safeHandle, int backlog, out int error) { }

	// RVA: 0x1268D40 Offset: 0x1264D40 VA: 0x1268D40
	private static void Listen_icall(IntPtr sock, int backlog, out int error) { }

	// RVA: 0x1268D44 Offset: 0x1264D44 VA: 0x1268D44
	public void Connect(IPAddress address, int port) { }

	// RVA: 0x1268DB8 Offset: 0x1264DB8 VA: 0x1268DB8
	public void Connect(EndPoint remoteEP) { }

	// RVA: 0x1269220 Offset: 0x1265220 VA: 0x1269220
	public IAsyncResult BeginConnect(string host, int port, AsyncCallback callback, object state) { }

	// RVA: 0x12694B8 Offset: 0x12654B8 VA: 0x12694B8
	public IAsyncResult BeginConnect(EndPoint remoteEP, AsyncCallback callback, object state) { }

	// RVA: 0x1269A20 Offset: 0x1265A20 VA: 0x1269A20
	private static bool BeginMConnect(SocketAsyncResult sockares) { }

	// RVA: 0x12695EC Offset: 0x12655EC VA: 0x12695EC
	private static bool BeginSConnect(SocketAsyncResult sockares) { }

	// RVA: 0x1269C44 Offset: 0x1265C44 VA: 0x1269C44
	public void EndConnect(IAsyncResult asyncResult) { }

	// RVA: 0x1269110 Offset: 0x1265110 VA: 0x1269110
	private static void Connect_internal(SafeSocketHandle safeHandle, SocketAddress sa, out int error, bool blocking) { }

	// RVA: 0x1269CF0 Offset: 0x1265CF0 VA: 0x1269CF0
	private static void Connect_icall(IntPtr sock, SocketAddress sa, out int error, bool blocking) { }

	// RVA: 0x1269CF8 Offset: 0x1265CF8 VA: 0x1269CF8
	public void Disconnect(bool reuseSocket) { }

	// RVA: 0x1269F00 Offset: 0x1265F00 VA: 0x1269F00
	public void EndDisconnect(IAsyncResult asyncResult) { }

	// RVA: 0x1269DDC Offset: 0x1265DDC VA: 0x1269DDC
	private static void Disconnect_internal(SafeSocketHandle safeHandle, bool reuse, out int error) { }

	// RVA: 0x1269FAC Offset: 0x1265FAC VA: 0x1269FAC
	private static void Disconnect_icall(IntPtr sock, bool reuse, out int error) { }

	// RVA: 0x1266024 Offset: 0x1262024 VA: 0x1266024
	public int Receive(byte[] buffer, int offset, int size, SocketFlags socketFlags, out SocketError errorCode) { }

	// RVA: 0x126A25C Offset: 0x126625C VA: 0x126A25C
	private int Receive(Memory<byte> buffer, int offset, int size, SocketFlags socketFlags, out SocketError errorCode) { }

	// RVA: 0x12661A8 Offset: 0x12621A8 VA: 0x12661A8
	public int Receive(IList<ArraySegment<byte>> buffers, SocketFlags socketFlags, out SocketError errorCode) { }

	// RVA: 0x1261610 Offset: 0x125D610 VA: 0x1261610
	public int Receive(Span<byte> buffer, SocketFlags socketFlags, out SocketError errorCode) { }

	// RVA: 0x1261D8C Offset: 0x125DD8C VA: 0x1261D8C
	public int Send(ReadOnlySpan<byte> buffer, SocketFlags socketFlags, out SocketError errorCode) { }

	// RVA: 0x126A594 Offset: 0x1266594 VA: 0x126A594
	public bool ReceiveAsync(SocketAsyncEventArgs e) { }

	// RVA: 0x1266AD8 Offset: 0x1262AD8 VA: 0x1266AD8
	public IAsyncResult BeginReceive(byte[] buffer, int offset, int size, SocketFlags socketFlags, out SocketError errorCode, AsyncCallback callback, object state) { }

	// RVA: 0x1266C6C Offset: 0x1262C6C VA: 0x1266C6C
	public int EndReceive(IAsyncResult asyncResult, out SocketError errorCode) { }

	// RVA: 0x126A464 Offset: 0x1266464 VA: 0x126A464
	private static int Receive_internal(SafeSocketHandle safeHandle, Socket.WSABUF* bufarray, int count, SocketFlags flags, out int error, bool blocking) { }

	// RVA: 0x126A89C Offset: 0x126689C VA: 0x126A89C
	private static int Receive_array_icall(IntPtr sock, Socket.WSABUF* bufarray, int count, SocketFlags flags, out int error, bool blocking) { }

	// RVA: 0x126A12C Offset: 0x126612C VA: 0x126A12C
	private static int Receive_internal(SafeSocketHandle safeHandle, byte* buffer, int count, SocketFlags flags, out int error, bool blocking) { }

	// RVA: 0x126A8A4 Offset: 0x12668A4 VA: 0x126A8A4
	private static int Receive_icall(IntPtr sock, byte* buffer, int count, SocketFlags flags, out int error, bool blocking) { }

	// RVA: 0x126A8AC Offset: 0x12668AC VA: 0x126A8AC
	private int ReceiveFrom(Memory<byte> buffer, int offset, int size, SocketFlags socketFlags, ref EndPoint remoteEP, out SocketError errorCode) { }

	// RVA: 0x126AC68 Offset: 0x1266C68 VA: 0x126AC68
	private int EndReceiveFrom_internal(SocketAsyncResult sockares, SocketAsyncEventArgs ares) { }

	// RVA: 0x126AB28 Offset: 0x1266B28 VA: 0x126AB28
	private static int ReceiveFrom_internal(SafeSocketHandle safeHandle, byte* buffer, int count, SocketFlags flags, ref SocketAddress sockaddr, out int error, bool blocking) { }

	// RVA: 0x126AD30 Offset: 0x1266D30 VA: 0x126AD30
	private static int ReceiveFrom_icall(IntPtr sock, byte* buffer, int count, SocketFlags flags, ref SocketAddress sockaddr, out int error, bool blocking) { }

	// RVA: 0x1265EE0 Offset: 0x1261EE0 VA: 0x1265EE0
	public int Send(byte[] buffer, int offset, int size, SocketFlags socketFlags, out SocketError errorCode) { }

	// RVA: 0x12659D4 Offset: 0x12619D4 VA: 0x12659D4
	public int Send(IList<ArraySegment<byte>> buffers, SocketFlags socketFlags, out SocketError errorCode) { }

	// RVA: 0x126AF98 Offset: 0x1266F98 VA: 0x126AF98
	public bool SendAsync(SocketAsyncEventArgs e) { }

	// RVA: 0x12667E0 Offset: 0x12627E0 VA: 0x12667E0
	public IAsyncResult BeginSend(byte[] buffer, int offset, int size, SocketFlags socketFlags, out SocketError errorCode, AsyncCallback callback, object state) { }

	// RVA: 0x126B278 Offset: 0x1267278 VA: 0x126B278
	private static void BeginSendCallback(SocketAsyncResult sockares, int sent_so_far) { }

	// RVA: 0x12669F0 Offset: 0x12629F0 VA: 0x12669F0
	public int EndSend(IAsyncResult asyncResult, out SocketError errorCode) { }

	// RVA: 0x126AE68 Offset: 0x1266E68 VA: 0x126AE68
	private static int Send_internal(SafeSocketHandle safeHandle, Socket.WSABUF* bufarray, int count, SocketFlags flags, out int error, bool blocking) { }

	// RVA: 0x126B60C Offset: 0x126760C VA: 0x126B60C
	private static int Send_array_icall(IntPtr sock, Socket.WSABUF* bufarray, int count, SocketFlags flags, out int error, bool blocking) { }

	// RVA: 0x126AD38 Offset: 0x1266D38 VA: 0x126AD38
	private static int Send_internal(SafeSocketHandle safeHandle, byte* buffer, int count, SocketFlags flags, out int error, bool blocking) { }

	// RVA: 0x126B614 Offset: 0x1267614 VA: 0x126B614
	private static int Send_icall(IntPtr sock, byte* buffer, int count, SocketFlags flags, out int error, bool blocking) { }

	// RVA: 0x126B61C Offset: 0x126761C VA: 0x126B61C
	public int EndSendTo(IAsyncResult asyncResult) { }

	// RVA: 0x1265710 Offset: 0x1261710 VA: 0x1265710
	public object GetSocketOption(SocketOptionLevel optionLevel, SocketOptionName optionName) { }

	// RVA: 0x126B6D0 Offset: 0x12676D0 VA: 0x126B6D0
	private static void GetSocketOption_obj_internal(SafeSocketHandle safeHandle, SocketOptionLevel level, SocketOptionName name, out object obj_val, out int error) { }

	// RVA: 0x126B80C Offset: 0x126780C VA: 0x126B80C
	private static void GetSocketOption_obj_icall(IntPtr socket, SocketOptionLevel level, SocketOptionName name, out object obj_val, out int error) { }

	// RVA: 0x1265518 Offset: 0x1261518 VA: 0x1265518
	public void SetSocketOption(SocketOptionLevel optionLevel, SocketOptionName optionName, int optionValue) { }

	// RVA: 0x12670B4 Offset: 0x12630B4 VA: 0x12670B4
	private static void SetSocketOption_internal(SafeSocketHandle safeHandle, SocketOptionLevel level, SocketOptionName name, object obj_val, byte[] byte_val, int int_val, out int error) { }

	// RVA: 0x126B810 Offset: 0x1267810 VA: 0x126B810
	private static void SetSocketOption_icall(IntPtr socket, SocketOptionLevel level, SocketOptionName name, object obj_val, byte[] byte_val, int int_val, out int error) { }

	// RVA: 0x1266668 Offset: 0x1262668 VA: 0x1266668
	public int IOControl(int ioControlCode, byte[] optionInValue, byte[] optionOutValue) { }

	// RVA: 0x126B814 Offset: 0x1267814 VA: 0x126B814
	private static int IOControl_internal(SafeSocketHandle safeHandle, int ioctl_code, byte[] input, byte[] output, out int error) { }

	// RVA: 0x126B96C Offset: 0x126796C VA: 0x126B96C
	private static int IOControl_icall(IntPtr sock, int ioctl_code, byte[] input, byte[] output, out int error) { }

	// RVA: 0x126B970 Offset: 0x1267970 VA: 0x126B970
	public void Close() { }

	// RVA: 0x1262070 Offset: 0x125E070 VA: 0x1262070
	public void Close(int timeout) { }

	// RVA: 0x126B978 Offset: 0x1267978 VA: 0x126B978
	internal static void Close_icall(IntPtr socket, out int error) { }

	// RVA: 0x1266F90 Offset: 0x1262F90 VA: 0x1266F90
	private static void Shutdown_internal(SafeSocketHandle safeHandle, SocketShutdown how, out int error) { }

	// RVA: 0x126B97C Offset: 0x126797C VA: 0x126B97C
	internal static void Shutdown_icall(IntPtr socket, SocketShutdown how, out int error) { }

	// RVA: 0x126B980 Offset: 0x1267980 VA: 0x126B980 Slot: 5
	protected virtual void Dispose(bool disposing) { }

	// RVA: 0x126B9E0 Offset: 0x12679E0 VA: 0x126B9E0
	private void Linger(IntPtr handle) { }

	// RVA: 0x1267420 Offset: 0x1263420 VA: 0x1267420
	private void ThrowIfDisposedAndClosed() { }

	// RVA: 0x1269FB4 Offset: 0x1265FB4 VA: 0x1269FB4
	private void ThrowIfBufferNull(byte[] buffer) { }

	// RVA: 0x126A008 Offset: 0x1266008 VA: 0x126A008
	private void ThrowIfBufferOutOfRange(byte[] buffer, int offset, int size) { }

	// RVA: 0x12677D4 Offset: 0x12637D4 VA: 0x12677D4
	private void ThrowIfUdp() { }

	// RVA: 0x12684C8 Offset: 0x12644C8 VA: 0x12684C8
	private SocketAsyncResult ValidateEndIAsyncResult(IAsyncResult ares, string methodName, string argName) { }

	// RVA: 0x1268274 Offset: 0x1264274 VA: 0x1268274
	private void QueueIOSelectorJob(SemaphoreSlim sem, IntPtr handle, IOSelectorJob job) { }

	// RVA: 0x126A7B0 Offset: 0x12667B0 VA: 0x126A7B0
	private void InitSocketAsyncEventArgs(SocketAsyncEventArgs e, AsyncCallback callback, object state, SocketOperation operation) { }

	// RVA: 0x126BC34 Offset: 0x1267C34 VA: 0x126BC34
	private SocketAsyncOperation SocketOperationToSocketAsyncOperation(SocketOperation op) { }

	// RVA: 0x1268950 Offset: 0x1264950 VA: 0x1268950
	private IPEndPoint RemapIPEndPoint(IPEndPoint input) { }

	// RVA: 0x126BD98 Offset: 0x1267D98 VA: 0x126BD98
	internal static void cancel_blocking_socket_operation(Thread thread) { }

	// RVA: 0x126BD9C Offset: 0x1267D9C VA: 0x126BD9C
	internal static int get_FamilyHint() { }

	// RVA: 0x126BE20 Offset: 0x1267E20 VA: 0x126BE20
	private static bool IsProtocolSupported_internal(NetworkInterfaceComponent networkInterface) { }

	// RVA: 0x1266E30 Offset: 0x1262E30 VA: 0x1266E30
	private static bool IsProtocolSupported(NetworkInterfaceComponent networkInterface) { }

	// RVA: 0x126BE24 Offset: 0x1267E24 VA: 0x126BE24
	private static void .cctor() { }
}


// Namespace: System.Net.Sockets
[Serializable]
public class SocketException : Win32Exception // TypeDefIndex: 3856
{
	// Fields
	private EndPoint m_EndPoint; // 0x90

	// Properties
	public override string Message { get; }

	// Methods

	// RVA: 0x1270794 Offset: 0x126C794 VA: 0x1270794
	private static int WSAGetLastError_icall() { }

	// RVA: 0x12651E0 Offset: 0x12611E0 VA: 0x12651E0
	public void .ctor() { }

	// RVA: 0x1270798 Offset: 0x126C798 VA: 0x1270798
	internal void .ctor(int error, string message) { }

	// RVA: 0x1261704 Offset: 0x125D704 VA: 0x1261704
	public void .ctor(int errorCode) { }

	// RVA: 0x1265ED8 Offset: 0x1261ED8 VA: 0x1265ED8
	internal void .ctor(SocketError socketError) { }

	// RVA: 0x12707A0 Offset: 0x126C7A0 VA: 0x12707A0
	protected void .ctor(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	// RVA: 0x12707A8 Offset: 0x126C7A8 VA: 0x12707A8 Slot: 5
	public override string get_Message() { }
}


// Namespace: System.Net.Sockets
public enum AddressFamily // TypeDefIndex: 3857
{
	// Fields
	public int value__; // 0x0
	public const AddressFamily Unknown = -1;
	public const AddressFamily Unspecified = 0;
	public const AddressFamily Unix = 1;
	public const AddressFamily InterNetwork = 2;
	public const AddressFamily ImpLink = 3;
	public const AddressFamily Pup = 4;
	public const AddressFamily Chaos = 5;
	public const AddressFamily NS = 6;
	public const AddressFamily Ipx = 6;
	public const AddressFamily Iso = 7;
	public const AddressFamily Osi = 7;
	public const AddressFamily Ecma = 8;
	public const AddressFamily DataKit = 9;
	public const AddressFamily Ccitt = 10;
	public const AddressFamily Sna = 11;
	public const AddressFamily DecNet = 12;
	public const AddressFamily DataLink = 13;
	public const AddressFamily Lat = 14;
	public const AddressFamily HyperChannel = 15;
	public const AddressFamily AppleTalk = 16;
	public const AddressFamily NetBios = 17;
	public const AddressFamily VoiceView = 18;
	public const AddressFamily FireFox = 19;
	public const AddressFamily Banyan = 21;
	public const AddressFamily Atm = 22;
	public const AddressFamily InterNetworkV6 = 23;
	public const AddressFamily Cluster = 24;
	public const AddressFamily Ieee12844 = 25;
	public const AddressFamily Irda = 26;
	public const AddressFamily NetworkDesigners = 28;
	public const AddressFamily Max = 29;
}


// Namespace: System.Net.Sockets
public enum IOControlCode // TypeDefIndex: 3858
{
	// Fields
	public long value__; // 0x0
	public const IOControlCode AsyncIO = 2147772029;
	public const IOControlCode NonBlockingIO = 2147772030;
	public const IOControlCode DataToRead = 1074030207;
	public const IOControlCode OobDataRead = 1074033415;
	public const IOControlCode AssociateHandle = 2281701377;
	public const IOControlCode EnableCircularQueuing = 671088642;
	public const IOControlCode Flush = 671088644;
	public const IOControlCode GetBroadcastAddress = 1207959557;
	public const IOControlCode GetExtensionFunctionPointer = 3355443206;
	public const IOControlCode GetQos = 3355443207;
	public const IOControlCode GetGroupQos = 3355443208;
	public const IOControlCode MultipointLoopback = 2281701385;
	public const IOControlCode MulticastScope = 2281701386;
	public const IOControlCode SetQos = 2281701387;
	public const IOControlCode SetGroupQos = 2281701388;
	public const IOControlCode TranslateHandle = 3355443213;
	public const IOControlCode RoutingInterfaceQuery = 3355443220;
	public const IOControlCode RoutingInterfaceChange = 2281701397;
	public const IOControlCode AddressListQuery = 1207959574;
	public const IOControlCode AddressListChange = 671088663;
	public const IOControlCode QueryTargetPnpHandle = 1207959576;
	public const IOControlCode NamespaceChange = 2281701401;
	public const IOControlCode AddressListSort = 3355443225;
	public const IOControlCode ReceiveAll = 2550136833;
	public const IOControlCode ReceiveAllMulticast = 2550136834;
	public const IOControlCode ReceiveAllIgmpMulticast = 2550136835;
	public const IOControlCode KeepAliveValues = 2550136836;
	public const IOControlCode AbsorbRouterAlert = 2550136837;
	public const IOControlCode UnicastInterface = 2550136838;
	public const IOControlCode LimitBroadcasts = 2550136839;
	public const IOControlCode BindToInterface = 2550136840;
	public const IOControlCode MulticastInterface = 2550136841;
	public const IOControlCode AddMulticastGroupOnInterface = 2550136842;
	public const IOControlCode DeleteMulticastGroupFromInterface = 2550136843;
}


// Namespace: System.Net.Sockets
public enum IPProtectionLevel // TypeDefIndex: 3859
{
	// Fields
	public int value__; // 0x0
	public const IPProtectionLevel Unspecified = -1;
	public const IPProtectionLevel Unrestricted = 10;
	public const IPProtectionLevel EdgeRestricted = 20;
	public const IPProtectionLevel Restricted = 30;
}


// Namespace: System.Net.Sockets
public class LingerOption // TypeDefIndex: 3860
{
	// Fields
	private bool enabled; // 0x10
	private int lingerTime; // 0x14

	// Methods

	// RVA: 0x126BB48 Offset: 0x1267B48 VA: 0x126BB48
	public void .ctor(bool enable, int seconds) { }
}


// Namespace: System.Net.Sockets
public class MulticastOption // TypeDefIndex: 3861
{}


// Namespace: System.Net.Sockets
public enum ProtocolType // TypeDefIndex: 3862
{
	// Fields
	public int value__; // 0x0
	public const ProtocolType IP = 0;
	public const ProtocolType IPv6HopByHopOptions = 0;
	public const ProtocolType Icmp = 1;
	public const ProtocolType Igmp = 2;
	public const ProtocolType Ggp = 3;
	public const ProtocolType IPv4 = 4;
	public const ProtocolType Tcp = 6;
	public const ProtocolType Pup = 12;
	public const ProtocolType Udp = 17;
	public const ProtocolType Idp = 22;
	public const ProtocolType IPv6 = 41;
	public const ProtocolType IPv6RoutingHeader = 43;
	public const ProtocolType IPv6FragmentHeader = 44;
	public const ProtocolType IPSecEncapsulatingSecurityPayload = 50;
	public const ProtocolType IPSecAuthenticationHeader = 51;
	public const ProtocolType IcmpV6 = 58;
	public const ProtocolType IPv6NoNextHeader = 59;
	public const ProtocolType IPv6DestinationOptions = 60;
	public const ProtocolType ND = 77;
	public const ProtocolType Raw = 255;
	public const ProtocolType Unspecified = 0;
	public const ProtocolType Ipx = 1000;
	public const ProtocolType Spx = 1256;
	public const ProtocolType SpxII = 1257;
	public const ProtocolType Unknown = -1;
}


// Namespace: System.Net.Sockets
public enum SelectMode // TypeDefIndex: 3863
{
	// Fields
	public int value__; // 0x0
	public const SelectMode SelectRead = 0;
	public const SelectMode SelectWrite = 1;
	public const SelectMode SelectError = 2;
}


// Namespace: System.Net.Sockets
public enum SocketAsyncOperation // TypeDefIndex: 3864
{
	// Fields
	public int value__; // 0x0
	public const SocketAsyncOperation None = 0;
	public const SocketAsyncOperation Accept = 1;
	public const SocketAsyncOperation Connect = 2;
	public const SocketAsyncOperation Disconnect = 3;
	public const SocketAsyncOperation Receive = 4;
	public const SocketAsyncOperation ReceiveFrom = 5;
	public const SocketAsyncOperation ReceiveMessageFrom = 6;
	public const SocketAsyncOperation Send = 7;
	public const SocketAsyncOperation SendPackets = 8;
	public const SocketAsyncOperation SendTo = 9;
}


// Namespace: System.Net.Sockets
public enum SocketError // TypeDefIndex: 3865
{
	// Fields
	public int value__; // 0x0
	public const SocketError Success = 0;
	public const SocketError SocketError = -1;
	public const SocketError Interrupted = 10004;
	public const SocketError AccessDenied = 10013;
	public const SocketError Fault = 10014;
	public const SocketError InvalidArgument = 10022;
	public const SocketError TooManyOpenSockets = 10024;
	public const SocketError WouldBlock = 10035;
	public const SocketError InProgress = 10036;
	public const SocketError AlreadyInProgress = 10037;
	public const SocketError NotSocket = 10038;
	public const SocketError DestinationAddressRequired = 10039;
	public const SocketError MessageSize = 10040;
	public const SocketError ProtocolType = 10041;
	public const SocketError ProtocolOption = 10042;
	public const SocketError ProtocolNotSupported = 10043;
	public const SocketError SocketNotSupported = 10044;
	public const SocketError OperationNotSupported = 10045;
	public const SocketError ProtocolFamilyNotSupported = 10046;
	public const SocketError AddressFamilyNotSupported = 10047;
	public const SocketError AddressAlreadyInUse = 10048;
	public const SocketError AddressNotAvailable = 10049;
	public const SocketError NetworkDown = 10050;
	public const SocketError NetworkUnreachable = 10051;
	public const SocketError NetworkReset = 10052;
	public const SocketError ConnectionAborted = 10053;
	public const SocketError ConnectionReset = 10054;
	public const SocketError NoBufferSpaceAvailable = 10055;
	public const SocketError IsConnected = 10056;
	public const SocketError NotConnected = 10057;
	public const SocketError Shutdown = 10058;
	public const SocketError TimedOut = 10060;
	public const SocketError ConnectionRefused = 10061;
	public const SocketError HostDown = 10064;
	public const SocketError HostUnreachable = 10065;
	public const SocketError ProcessLimit = 10067;
	public const SocketError SystemNotReady = 10091;
	public const SocketError VersionNotSupported = 10092;
	public const SocketError NotInitialized = 10093;
	public const SocketError Disconnecting = 10101;
	public const SocketError TypeNotFound = 10109;
	public const SocketError HostNotFound = 11001;
	public const SocketError TryAgain = 11002;
	public const SocketError NoRecovery = 11003;
	public const SocketError NoData = 11004;
	public const SocketError IOPending = 997;
	public const SocketError OperationAborted = 995;
}


// Namespace: System.Net.Sockets
[Flags]
public enum SocketFlags // TypeDefIndex: 3866
{
	// Fields
	public int value__; // 0x0
	public const SocketFlags None = 0;
	public const SocketFlags OutOfBand = 1;
	public const SocketFlags Peek = 2;
	public const SocketFlags DontRoute = 4;
	public const SocketFlags MaxIOVectorLength = 16;
	public const SocketFlags Truncated = 256;
	public const SocketFlags ControlDataTruncated = 512;
	public const SocketFlags Broadcast = 1024;
	public const SocketFlags Multicast = 2048;
	public const SocketFlags Partial = 32768;
}


// Namespace: System.Net.Sockets
public enum SocketOptionLevel // TypeDefIndex: 3867
{
	// Fields
	public int value__; // 0x0
	public const SocketOptionLevel Socket = 65535;
	public const SocketOptionLevel IP = 0;
	public const SocketOptionLevel IPv6 = 41;
	public const SocketOptionLevel Tcp = 6;
	public const SocketOptionLevel Udp = 17;
}


// Namespace: System.Net.Sockets
public enum SocketOptionName // TypeDefIndex: 3868
{
	// Fields
	public int value__; // 0x0
	public const SocketOptionName Debug = 1;
	public const SocketOptionName AcceptConnection = 2;
	public const SocketOptionName ReuseAddress = 4;
	public const SocketOptionName KeepAlive = 8;
	public const SocketOptionName DontRoute = 16;
	public const SocketOptionName Broadcast = 32;
	public const SocketOptionName UseLoopback = 64;
	public const SocketOptionName Linger = 128;
	public const SocketOptionName OutOfBandInline = 256;
	public const SocketOptionName DontLinger = -129;
	public const SocketOptionName ExclusiveAddressUse = -5;
	public const SocketOptionName SendBuffer = 4097;
	public const SocketOptionName ReceiveBuffer = 4098;
	public const SocketOptionName SendLowWater = 4099;
	public const SocketOptionName ReceiveLowWater = 4100;
	public const SocketOptionName SendTimeout = 4101;
	public const SocketOptionName ReceiveTimeout = 4102;
	public const SocketOptionName Error = 4103;
	public const SocketOptionName Type = 4104;
	public const SocketOptionName ReuseUnicastPort = 12295;
	public const SocketOptionName MaxConnections = 2147483647;
	public const SocketOptionName IPOptions = 1;
	public const SocketOptionName HeaderIncluded = 2;
	public const SocketOptionName TypeOfService = 3;
	public const SocketOptionName IpTimeToLive = 4;
	public const SocketOptionName MulticastInterface = 9;
	public const SocketOptionName MulticastTimeToLive = 10;
	public const SocketOptionName MulticastLoopback = 11;
	public const SocketOptionName AddMembership = 12;
	public const SocketOptionName DropMembership = 13;
	public const SocketOptionName DontFragment = 14;
	public const SocketOptionName AddSourceMembership = 15;
	public const SocketOptionName DropSourceMembership = 16;
	public const SocketOptionName BlockSource = 17;
	public const SocketOptionName UnblockSource = 18;
	public const SocketOptionName PacketInformation = 19;
	public const SocketOptionName HopLimit = 21;
	public const SocketOptionName IPProtectionLevel = 23;
	public const SocketOptionName IPv6Only = 27;
	public const SocketOptionName NoDelay = 1;
	public const SocketOptionName BsdUrgent = 2;
	public const SocketOptionName Expedited = 2;
	public const SocketOptionName NoChecksum = 1;
	public const SocketOptionName ChecksumCoverage = 20;
	public const SocketOptionName UpdateAcceptContext = 28683;
	public const SocketOptionName UpdateConnectContext = 28688;
}


// Namespace: System.Net.Sockets
public enum SocketShutdown // TypeDefIndex: 3869
{
	// Fields
	public int value__; // 0x0
	public const SocketShutdown Receive = 0;
	public const SocketShutdown Send = 1;
	public const SocketShutdown Both = 2;
}


// Namespace: System.Net.Sockets
public enum SocketType // TypeDefIndex: 3870
{
	// Fields
	public int value__; // 0x0
	public const SocketType Stream = 1;
	public const SocketType Dgram = 2;
	public const SocketType Raw = 3;
	public const SocketType Rdm = 4;
	public const SocketType Seqpacket = 5;
	public const SocketType Unknown = -1;
}


// Namespace: System.Net.Sockets
public class TcpClient : IDisposable // TypeDefIndex: 3871
{
	// Fields
	private Socket m_ClientSocket; // 0x10
	private bool m_Active; // 0x18
	private NetworkStream m_DataStream; // 0x20
	private AddressFamily m_Family; // 0x28
	private bool m_CleanedUp; // 0x2C

	// Methods

	// RVA: 0x1270838 Offset: 0x126C838 VA: 0x1270838
	public void .ctor() { }

	// RVA: 0x1270868 Offset: 0x126C868 VA: 0x1270868
	public void .ctor(AddressFamily family) { }

	// RVA: 0x12709CC Offset: 0x126C9CC VA: 0x12709CC
	public void Connect(string hostname, int port) { }

	// RVA: 0x1271034 Offset: 0x126D034 VA: 0x1271034
	public void Connect(IPEndPoint remoteEP) { }

	// RVA: 0x127111C Offset: 0x126D11C VA: 0x127111C
	public IAsyncResult BeginConnect(string host, int port, AsyncCallback requestCallback, object state) { }

	// RVA: 0x1271134 Offset: 0x126D134 VA: 0x1271134
	public void EndConnect(IAsyncResult asyncResult) { }

	// RVA: 0x127115C Offset: 0x126D15C VA: 0x127115C
	public Task ConnectAsync(string host, int port) { }

	// RVA: 0x12712A0 Offset: 0x126D2A0 VA: 0x12712A0
	public NetworkStream GetStream() { }

	// RVA: 0x12713C8 Offset: 0x126D3C8 VA: 0x12713C8 Slot: 5
	protected virtual void Dispose(bool disposing) { }

	// RVA: 0x1271558 Offset: 0x126D558 VA: 0x1271558 Slot: 4
	public void Dispose() { }

	// RVA: 0x1271568 Offset: 0x126D568 VA: 0x1271568 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x1270964 Offset: 0x126C964 VA: 0x1270964
	private void initialize() { }
}


// Namespace: System.Net.Sockets
internal sealed class SafeSocketHandle : SafeHandleMinusOneIsInvalid // TypeDefIndex: 3872
{
	// Fields
	private List<Thread> blocking_threads; // 0x20
	private Dictionary<Thread, StackTrace> threads_stacktraces; // 0x28
	private bool in_cleanup; // 0x30
	private static bool THROW_ON_ABORT_RETRIES; // 0x0

	// Methods

	// RVA: 0x126511C Offset: 0x126111C VA: 0x126511C
	public void .ctor(IntPtr preexistingHandle, bool ownsHandle) { }

	// RVA: 0x1271608 Offset: 0x126D608 VA: 0x1271608 Slot: 7
	protected override bool ReleaseHandle() { }

	// RVA: 0x12686A0 Offset: 0x12646A0 VA: 0x12686A0
	public void RegisterForBlockingSyscall() { }

	// RVA: 0x1271A74 Offset: 0x126DA74 VA: 0x1271A74
	public void UnRegisterForBlockingSyscall() { }

	// RVA: 0x1271C58 Offset: 0x126DC58 VA: 0x1271C58
	private static void .cctor() { }
}


// Namespace: System.Net.Sockets
public class SocketAsyncEventArgs : EventArgs, IDisposable // TypeDefIndex: 3873
{
	// Fields
	private bool disposed; // 0x10
	internal int in_progress; // 0x14
	private EndPoint remote_ep; // 0x18
	private Socket current_socket; // 0x20
	internal SocketAsyncResult socket_async_result; // 0x28
	[CompilerGenerated]
	private Socket <AcceptSocket>k__BackingField; // 0x30
	[CompilerGenerated]
	private int <BytesTransferred>k__BackingField; // 0x38
	[CompilerGenerated]
	private SocketAsyncOperation <LastOperation>k__BackingField; // 0x3C
	[CompilerGenerated]
	private SocketError <SocketError>k__BackingField; // 0x40
	[CompilerGenerated]
	private SocketFlags <SocketFlags>k__BackingField; // 0x44
	[CompilerGenerated]
	private object <UserToken>k__BackingField; // 0x48
	[CompilerGenerated]
	private EventHandler<SocketAsyncEventArgs> Completed; // 0x50
	private Memory<byte> _buffer; // 0x58
	private int _offset; // 0x68
	private int _count; // 0x6C
	private bool _bufferIsExplicitArray; // 0x70
	private IList<ArraySegment<byte>> _bufferList; // 0x78

	// Methods

	// RVA: 0x126C57C Offset: 0x126857C VA: 0x126C57C
	internal void .ctor(bool flowExecutionContext) { }

	// RVA: 0x1271CF4 Offset: 0x126DCF4 VA: 0x1271CF4 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x1271D04 Offset: 0x126DD04 VA: 0x1271D04
	private void Dispose(bool disposing) { }

	// RVA: 0x1271D18 Offset: 0x126DD18 VA: 0x1271D18 Slot: 4
	public void Dispose() { }

	// RVA: 0x126BCD8 Offset: 0x1267CD8 VA: 0x126BCD8
	internal void SetLastOperation(SocketAsyncOperation op) { }

	// RVA: 0x1271D7C Offset: 0x126DD7C VA: 0x1271D7C
	internal void Complete_internal() { }

	// RVA: 0x1271DA4 Offset: 0x126DDA4 VA: 0x1271DA4 Slot: 5
	protected virtual void OnCompleted(SocketAsyncEventArgs e) { }

	// RVA: 0x1264054 Offset: 0x1260054 VA: 0x1264054
	public void SetBuffer(Memory<byte> buffer) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class SocketAsyncResult.<>c // TypeDefIndex: 3874
{
	// Fields
	public static readonly SocketAsyncResult.<>c <>9; // 0x0
	public static WaitCallback <>9__27_0; // 0x8

	// Methods

	// RVA: 0x1271DD0 Offset: 0x126DDD0 VA: 0x1271DD0
	private static void .cctor() { }

	// RVA: 0x1271E2C Offset: 0x126DE2C VA: 0x1271E2C
	public void .ctor() { }

	// RVA: 0x1271E34 Offset: 0x126DE34 VA: 0x1271E34
	internal void <Complete>b__27_0(object state) { }
}


// Namespace: System.Net.Sockets
internal sealed class SocketAsyncResult : IOAsyncResult // TypeDefIndex: 3875
{
	// Fields
	public Socket socket; // 0x30
	public SocketOperation operation; // 0x38
	private Exception DelayedException; // 0x40
	public EndPoint EndPoint; // 0x48
	public Memory<byte> Buffer; // 0x50
	public int Offset; // 0x60
	public int Size; // 0x64
	public SocketFlags SockFlags; // 0x68
	public Socket AcceptSocket; // 0x70
	public IPAddress[] Addresses; // 0x78
	public int Port; // 0x80
	public IList<ArraySegment<byte>> Buffers; // 0x88
	public bool ReuseSocket; // 0x90
	public int CurrentAddress; // 0x94
	public Socket AcceptedSocket; // 0x98
	public int Total; // 0xA0
	internal int error; // 0xA4
	public int EndCalled; // 0xA8

	// Properties
	public IntPtr Handle { get; }
	public SocketError ErrorCode { get; }

	// Methods

	// RVA: 0x1268248 Offset: 0x1264248 VA: 0x1268248
	public IntPtr get_Handle() { }

	// RVA: 0x1271CEC Offset: 0x126DCEC VA: 0x1271CEC
	public void .ctor() { }

	// RVA: 0x126BB80 Offset: 0x1267B80 VA: 0x126BB80
	public void Init(Socket socket, AsyncCallback callback, object state, SocketOperation operation) { }

	// RVA: 0x1268210 Offset: 0x1264210 VA: 0x1268210
	public void .ctor(Socket socket, AsyncCallback callback, object state, SocketOperation operation) { }

	// RVA: 0x126A81C Offset: 0x126681C VA: 0x126A81C
	public SocketError get_ErrorCode() { }

	// RVA: 0x1268600 Offset: 0x1264600 VA: 0x1268600
	public void CheckIfThrowDelayedException() { }

	// RVA: 0x1271DCC Offset: 0x126DDCC VA: 0x1271DCC Slot: 8
	internal override void CompleteDisposed() { }

	// RVA: 0x126EF94 Offset: 0x126AF94 VA: 0x126EF94
	public void Complete() { }

	// RVA: 0x1269C38 Offset: 0x1265C38 VA: 0x1269C38
	public void Complete(bool synch) { }

	// RVA: 0x126B604 Offset: 0x1267604 VA: 0x126B604
	public void Complete(int total) { }

	// RVA: 0x1269C28 Offset: 0x1265C28 VA: 0x1269C28
	public void Complete(Exception e, bool synch) { }

	// RVA: 0x126B5FC Offset: 0x12675FC VA: 0x126B5FC
	public void Complete(Exception e) { }

	// RVA: 0x126E84C Offset: 0x126A84C VA: 0x126E84C
	public void Complete(Socket s) { }

	// RVA: 0x126EA78 Offset: 0x126AA78 VA: 0x126EA78
	public void Complete(Socket s, int total) { }
}


// Namespace: System.Net.Sockets
internal enum SocketOperation // TypeDefIndex: 3876
{
	// Fields
	public int value__; // 0x0
	public const SocketOperation Accept = 0;
	public const SocketOperation Connect = 1;
	public const SocketOperation Receive = 2;
	public const SocketOperation ReceiveFrom = 3;
	public const SocketOperation Send = 4;
	public const SocketOperation SendTo = 5;
	public const SocketOperation RecvJustCallback = 6;
	public const SocketOperation SendJustCallback = 7;
	public const SocketOperation Disconnect = 8;
	public const SocketOperation AcceptReceive = 9;
	public const SocketOperation ReceiveGeneric = 10;
	public const SocketOperation SendGeneric = 11;
}


// Namespace: System.Net.Security
public class SslClientAuthenticationOptions // TypeDefIndex: 3877
{
	// Fields
	private EncryptionPolicy _encryptionPolicy; // 0x10
	private X509RevocationMode _checkCertificateRevocation; // 0x14
	private SslProtocols _enabledSslProtocols; // 0x18
	private bool _allowRenegotiation; // 0x1C
	[CompilerGenerated]
	private string <TargetHost>k__BackingField; // 0x20
	[CompilerGenerated]
	private X509CertificateCollection <ClientCertificates>k__BackingField; // 0x28

	// Properties
	public X509RevocationMode CertificateRevocationCheckMode { set; }
	public EncryptionPolicy EncryptionPolicy { set; }

	// Methods

	// RVA: 0x1271EAC Offset: 0x126DEAC VA: 0x1271EAC
	public void set_CertificateRevocationCheckMode(X509RevocationMode value) { }

	// RVA: 0x1271F48 Offset: 0x126DF48 VA: 0x1271F48
	public void set_EncryptionPolicy(EncryptionPolicy value) { }

	// RVA: 0x1271FE4 Offset: 0x126DFE4 VA: 0x1271FE4
	public void .ctor() { }
}


// Namespace: System.Net.Security
public abstract class AuthenticatedStream : Stream // TypeDefIndex: 3878
{
	// Fields
	private Stream _InnerStream; // 0x28
	private bool _LeaveStreamOpen; // 0x30

	// Properties
	public abstract bool IsAuthenticated { get; }

	// Methods

	// RVA: 0x1271FF4 Offset: 0x126DFF4 VA: 0x1271FF4
	protected void .ctor(Stream innerStream, bool leaveInnerStreamOpen) { }

	// RVA: 0x1272184 Offset: 0x126E184 VA: 0x1272184 Slot: 15
	protected override void Dispose(bool disposing) { }

	// RVA: -1 Offset: -1 Slot: 33
	public abstract bool get_IsAuthenticated();
}


// Namespace: System.Net.Security
public enum AuthenticationLevel // TypeDefIndex: 3879
{
	// Fields
	public int value__; // 0x0
	public const AuthenticationLevel None = 0;
	public const AuthenticationLevel MutualAuthRequested = 1;
	public const AuthenticationLevel MutualAuthRequired = 2;
}


// Namespace: System.Net.Security
public enum EncryptionPolicy // TypeDefIndex: 3880
{
	// Fields
	public int value__; // 0x0
	public const EncryptionPolicy RequireEncryption = 0;
	public const EncryptionPolicy AllowNoEncryption = 1;
	public const EncryptionPolicy NoEncryption = 2;
}


// Namespace: System.Net.Security
public sealed class LocalCertificateSelectionCallback : MulticastDelegate // TypeDefIndex: 3881
{
	// Methods

	// RVA: 0x127226C Offset: 0x126E26C VA: 0x127226C
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x1272370 Offset: 0x126E370 VA: 0x1272370 Slot: 12
	public virtual X509Certificate Invoke(object sender, string targetHost, X509CertificateCollection localCertificates, X509Certificate remoteCertificate, string[] acceptableIssuers) { }
}


// Namespace: System.Net.Security
public sealed class RemoteCertificateValidationCallback : MulticastDelegate // TypeDefIndex: 3882
{
	// Methods

	// RVA: 0x1272384 Offset: 0x126E384 VA: 0x1272384
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x1272488 Offset: 0x126E488 VA: 0x1272488 Slot: 12
	public virtual bool Invoke(object sender, X509Certificate certificate, X509Chain chain, SslPolicyErrors sslPolicyErrors) { }
}


// Namespace: System.Net.Security
[Flags]
public enum SslPolicyErrors // TypeDefIndex: 3883
{
	// Fields
	public int value__; // 0x0
	public const SslPolicyErrors None = 0;
	public const SslPolicyErrors RemoteCertificateNotAvailable = 1;
	public const SslPolicyErrors RemoteCertificateNameMismatch = 2;
	public const SslPolicyErrors RemoteCertificateChainErrors = 4;
}


// Namespace: System.Net.Security
internal sealed class LocalCertSelectionCallback : MulticastDelegate // TypeDefIndex: 3884
{
	// Methods

	// RVA: 0x127249C Offset: 0x126E49C VA: 0x127249C
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x127253C Offset: 0x126E53C VA: 0x127253C Slot: 12
	public virtual X509Certificate Invoke(string targetHost, X509CertificateCollection localCertificates, X509Certificate remoteCertificate, string[] acceptableIssuers) { }
}


// Namespace: System.Net.Security
internal sealed class ServerCertSelectionCallback : MulticastDelegate // TypeDefIndex: 3885
{
	// Methods

	// RVA: 0x1272550 Offset: 0x126E550 VA: 0x1272550
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x12725EC Offset: 0x126E5EC VA: 0x12725EC Slot: 12
	public virtual X509Certificate Invoke(string hostName) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class SslStream.<>c__DisplayClass21_0 // TypeDefIndex: 3886
{
	// Fields
	public LocalCertificateSelectionCallback callback; // 0x10
	public SslStream <>4__this; // 0x18

	// Methods

	// RVA: 0x1272B0C Offset: 0x126EB0C VA: 0x1272B0C
	public void .ctor() { }

	// RVA: 0x1273204 Offset: 0x126F204 VA: 0x1273204
	internal X509Certificate <SetAndVerifySelectionCallback>b__0(string t, X509CertificateCollection lc, X509Certificate rc, string[] ai) { }
}


// Namespace: System.Net.Security
public class SslStream : AuthenticatedStream // TypeDefIndex: 3887
{
	// Fields
	private MobileTlsProvider provider; // 0x38
	private MonoTlsSettings settings; // 0x40
	private RemoteCertificateValidationCallback validationCallback; // 0x48
	private LocalCertificateSelectionCallback selectionCallback; // 0x50
	private MobileAuthenticatedStream impl; // 0x58
	private bool explicitSettings; // 0x60

	// Properties
	internal MobileAuthenticatedStream Impl { get; }
	internal string InternalTargetHost { get; }
	public override bool IsAuthenticated { get; }
	public virtual X509Certificate LocalCertificate { get; }
	public override bool CanSeek { get; }
	public override bool CanRead { get; }
	public override bool CanTimeout { get; }
	public override bool CanWrite { get; }
	public override int ReadTimeout { set; }
	public override int WriteTimeout { set; }
	public override long Length { get; }
	public override long Position { get; set; }

	// Methods

	// RVA: 0x1272600 Offset: 0x126E600 VA: 0x1272600
	internal MobileAuthenticatedStream get_Impl() { }

	// RVA: 0x1272674 Offset: 0x126E674 VA: 0x1272674
	internal string get_InternalTargetHost() { }

	// RVA: 0x1272698 Offset: 0x126E698 VA: 0x1272698
	private static MobileTlsProvider GetProvider() { }

	// RVA: 0x1272708 Offset: 0x126E708 VA: 0x1272708
	public void .ctor(Stream innerStream, bool leaveInnerStreamOpen, RemoteCertificateValidationCallback userCertificateValidationCallback) { }

	// RVA: 0x1272714 Offset: 0x126E714 VA: 0x1272714
	public void .ctor(Stream innerStream, bool leaveInnerStreamOpen, RemoteCertificateValidationCallback userCertificateValidationCallback, LocalCertificateSelectionCallback userCertificateSelectionCallback) { }

	// RVA: 0x12729E8 Offset: 0x126E9E8 VA: 0x12729E8
	internal void .ctor(Stream innerStream, bool leaveInnerStreamOpen, MonoTlsProvider provider, MonoTlsSettings settings) { }

	// RVA: 0x12727A4 Offset: 0x126E7A4 VA: 0x12727A4
	private void SetAndVerifyValidationCallback(RemoteCertificateValidationCallback callback) { }

	// RVA: 0x127287C Offset: 0x126E87C VA: 0x127287C
	private void SetAndVerifySelectionCallback(LocalCertificateSelectionCallback callback) { }

	// RVA: 0x1272B14 Offset: 0x126EB14 VA: 0x1272B14 Slot: 34
	public virtual void AuthenticateAsClient(string targetHost, X509CertificateCollection clientCertificates, SslProtocols enabledSslProtocols, bool checkCertificateRevocation) { }

	// RVA: 0x1272B68 Offset: 0x126EB68 VA: 0x1272B68 Slot: 35
	public virtual IAsyncResult BeginAuthenticateAsClient(string targetHost, X509CertificateCollection clientCertificates, SslProtocols enabledSslProtocols, bool checkCertificateRevocation, AsyncCallback asyncCallback, object asyncState) { }

	// RVA: 0x1272BDC Offset: 0x126EBDC VA: 0x1272BDC Slot: 36
	public virtual void EndAuthenticateAsClient(IAsyncResult asyncResult) { }

	// RVA: 0x1272BE8 Offset: 0x126EBE8 VA: 0x1272BE8 Slot: 37
	public virtual Task AuthenticateAsClientAsync(string targetHost, X509CertificateCollection clientCertificates, SslProtocols enabledSslProtocols, bool checkCertificateRevocation) { }

	// RVA: 0x1272C3C Offset: 0x126EC3C VA: 0x1272C3C Slot: 33
	public override bool get_IsAuthenticated() { }

	// RVA: 0x1272C68 Offset: 0x126EC68 VA: 0x1272C68 Slot: 38
	public virtual X509Certificate get_LocalCertificate() { }

	// RVA: 0x1272C8C Offset: 0x126EC8C VA: 0x1272C8C Slot: 6
	public override bool get_CanSeek() { }

	// RVA: 0x1272C94 Offset: 0x126EC94 VA: 0x1272C94 Slot: 5
	public override bool get_CanRead() { }

	// RVA: 0x1272CAC Offset: 0x126ECAC VA: 0x1272CAC Slot: 7
	public override bool get_CanTimeout() { }

	// RVA: 0x1272CCC Offset: 0x126ECCC VA: 0x1272CCC Slot: 8
	public override bool get_CanWrite() { }

	// RVA: 0x1272CE4 Offset: 0x126ECE4 VA: 0x1272CE4 Slot: 12
	public override void set_ReadTimeout(int value) { }

	// RVA: 0x1272D1C Offset: 0x126ED1C VA: 0x1272D1C Slot: 13
	public override void set_WriteTimeout(int value) { }

	// RVA: 0x1272D58 Offset: 0x126ED58 VA: 0x1272D58 Slot: 9
	public override long get_Length() { }

	// RVA: 0x1272D80 Offset: 0x126ED80 VA: 0x1272D80 Slot: 10
	public override long get_Position() { }

	// RVA: 0x1272DA8 Offset: 0x126EDA8 VA: 0x1272DA8 Slot: 11
	public override void set_Position(long value) { }

	// RVA: 0x1272E00 Offset: 0x126EE00 VA: 0x1272E00 Slot: 26
	public override void SetLength(long value) { }

	// RVA: 0x1272E3C Offset: 0x126EE3C VA: 0x1272E3C Slot: 25
	public override long Seek(long offset, SeekOrigin origin) { }

	// RVA: 0x1272E94 Offset: 0x126EE94 VA: 0x1272E94 Slot: 16
	public override void Flush() { }

	// RVA: 0x1272618 Offset: 0x126E618 VA: 0x1272618
	private void CheckDisposed() { }

	// RVA: 0x1272EB8 Offset: 0x126EEB8 VA: 0x1272EB8 Slot: 15
	protected override void Dispose(bool disposing) { }

	// RVA: 0x1272F64 Offset: 0x126EF64 VA: 0x1272F64 Slot: 27
	public override int Read(byte[] buffer, int offset, int count) { }

	// RVA: 0x1272FB8 Offset: 0x126EFB8 VA: 0x1272FB8 Slot: 30
	public override void Write(byte[] buffer, int offset, int count) { }

	// RVA: 0x127300C Offset: 0x126F00C VA: 0x127300C Slot: 19
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken) { }

	// RVA: 0x1273068 Offset: 0x126F068 VA: 0x1273068 Slot: 23
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken) { }

	// RVA: 0x12730C4 Offset: 0x126F0C4 VA: 0x12730C4 Slot: 17
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state) { }

	// RVA: 0x1273130 Offset: 0x126F130 VA: 0x1273130 Slot: 18
	public override int EndRead(IAsyncResult asyncResult) { }

	// RVA: 0x127318C Offset: 0x126F18C VA: 0x127318C Slot: 21
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback callback, object state) { }

	// RVA: 0x12731F8 Offset: 0x126F1F8 VA: 0x12731F8 Slot: 22
	public override void EndWrite(IAsyncResult asyncResult) { }
}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=6 // TypeDefIndex: 3888
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=9 // TypeDefIndex: 3889
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=10 // TypeDefIndex: 3890
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=12 // TypeDefIndex: 3891
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=14 // TypeDefIndex: 3892
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=32 // TypeDefIndex: 3893
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=44 // TypeDefIndex: 3894
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=128 // TypeDefIndex: 3895
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=256 // TypeDefIndex: 3896
{}


// Namespace: 
[CompilerGenerated]
internal sealed class <PrivateImplementationDetails> // TypeDefIndex: 3897
{
	// Fields
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=256 00C700F38385659BA060672F86D4A9A5376EADF9ED1CABB1C63290A0FDEFE36A /*Metadata offset 0x387340*/; // 0x0
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=32 04D9D643E5A26924DC98C9906714082D395DCB17CEE9674D5EBFEC15D098C2B5 /*Metadata offset 0x387448*/; // 0x100
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=32 063691760A57230E8119DF650327304D68AE1C009E476E48BE8C73DCA199D374 /*Metadata offset 0x387470*/; // 0x120
	internal static readonly long 1417FCAA8455DC8E3C88BF916DD5C75746A2597CC052F212A8E4394C890E012B = 2533330625626144; // 0x140
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=9 27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811 /*Metadata offset 0x3874A8*/; // 0x148
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=32 2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70 /*Metadata offset 0x3874B8*/; // 0x151
	internal static readonly long 3505B8A2248AC03FE41ACADF8F29294572BBADEE1DD2E1A45D025766681C012C = 2533317740920864; // 0x178
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=12 356A582FCE68ACAE8FC944F7B4F0C0DA2BFF4A90D3767C75905F3EDE2E4E66CF /*Metadata offset 0x3874F0*/; // 0x180
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=6 3981C8DFF7DC0FD5962B5FB863DD1A0D4119D320706BFF88FD6F636AC6B93AFF /*Metadata offset 0x387500*/; // 0x18C
	internal static readonly long 6C8F647E1FCD63826D12272FF0930E9C16F1FFEF719948703A4C0F3B90052885 = 2814805604696096; // 0x198
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=128 8109EF063456779751E8A4AEE94A0BE9AE32827B6EB153ABD7F40057FF2C9CE3 /*Metadata offset 0x387518*/; // 0x1A0
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=44 9001C3EDE1D7E939C07996B84F82F7CBE59A7266C1FC2735E959E3C8609602E8 /*Metadata offset 0x3875A0*/; // 0x220
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=6 9F58F1261D211553DE8FBC1AFA477C84EA3974B9BFF38223D771D0CDA787E15A /*Metadata offset 0x3875D0*/; // 0x24C
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=128 B849624EC20707184A433E21DAAC963906D4B261A19BD8F139F0E269E59E308C /*Metadata offset 0x3875D8*/; // 0x252
	internal static readonly long BB6BB42AC5453BD8AA992CCB8929F1CB7D4E112E3FC56E57D711E106D1F72859 = 11540663026319392; // 0x2D8
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=14 DFA7289CF8D8029ACEE90F30530C6926950E8DD20285772458F271AFD015BAD5 /*Metadata offset 0x387670*/; // 0x2E0
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=10 E478CC6C0579E2198C99BFDE0ABAADC66644AF69312CB9D6E94E2D4E3559482A /*Metadata offset 0x387680*/; // 0x2EE

	// Methods

	// RVA: 0x127323C Offset: 0x126F23C VA: 0x127323C
	internal static uint ComputeStringHash(string s) { }
}


// Namespace: Unity
internal sealed class ThrowStub : ObjectDisposedException // TypeDefIndex: 3898
{
	// Methods

	// RVA: 0x12732B8 Offset: 0x126F2B8 VA: 0x12732B8
	public static void ThrowNotSupportedException() { }
}
