namespace Mono.Security.Protocol.Ntlm;

public static class NtlmSettings
{
	private static NtlmAuthLevel defaultAuthLevel;

	public static NtlmAuthLevel DefaultAuthLevel => NtlmAuthLevel.LM_and_NTLM;
}
