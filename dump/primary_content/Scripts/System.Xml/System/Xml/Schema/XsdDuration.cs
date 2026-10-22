namespace System.Xml.Schema;

internal struct XsdDuration
{
	private enum Parts
	{
		HasNone = 0,
		HasYears = 1,
		HasMonths = 2,
		HasDays = 4,
		HasHours = 8,
		HasMinutes = 0x10,
		HasSeconds = 0x20
	}

	public enum DurationType
	{
		Duration = 0,
		YearMonthDuration = 1,
		DayTimeDuration = 2
	}

	private int years = 0;

	private int months = 0;

	private int days = 0;

	private int hours = 0;

	private int minutes = 0;

	private int seconds = 0;

	private uint nanoseconds = 0u;

	public bool IsNegative => false;

	public int Nanoseconds => 0;

	public XsdDuration(bool isNegative, int years, int months, int days, int hours, int minutes, int seconds, int nanoseconds)
	{
	}

	public XsdDuration(TimeSpan timeSpan)
	{
	}

	public XsdDuration(TimeSpan timeSpan, DurationType durationType)
	{
	}

	public XsdDuration(string s)
	{
	}

	public XsdDuration(string s, DurationType durationType)
	{
	}

	public TimeSpan ToTimeSpan()
	{
		return default;
	}

	public TimeSpan ToTimeSpan(DurationType durationType)
	{
		return default;
	}

	internal Exception TryToTimeSpan(out TimeSpan result)
	{
		result = default;
		return null;
	}

	internal Exception TryToTimeSpan(DurationType durationType, out TimeSpan result)
	{
		result = default;
		return null;
	}

	public override string ToString()
	{
		return null;
	}

	internal string ToString(DurationType durationType)
	{
		return null;
	}

	internal static Exception TryParse(string s, out XsdDuration result)
	{
		result = default;
		return null;
	}

	internal static Exception TryParse(string s, DurationType durationType, out XsdDuration result)
	{
		result = default;
		return null;
	}

	private static string TryParseDigits(string s, ref int offset, bool eatDigits, out int result, out int numDigits)
	{
		result = default;
		numDigits = default;
		return null;
	}
}
