namespace Unity.Services.Analytics.Internal;

internal interface IBuffer
{
	int Length { get; }

	void PushStandardEventStart(string name, int version);

	void PushCustomEventStart(string name);

	void PushEndEvent();

	void PushDouble(string name, double value);

	void PushString(string name, string value);

	void PushInt64(string name, long value);

	void PushBool(string name, bool value);

	void PushObject(string name, object value);

	void FlushToDisk();

	void ClearDiskCache();

	byte[] Serialize();

	void ClearBuffer();

	void ClearBuffer(long upTo);
}
