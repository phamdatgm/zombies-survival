using System.Collections.Generic;
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;

namespace System;

/// <summary>Represents any time zone in the world.</summary>
[Serializable]
[TypeForwardedFrom("System.Core, Version=2.0.5.0, Culture=Neutral, PublicKeyToken=7cec85d7bea7798e")]
public sealed class TimeZoneInfo : IEquatable<TimeZoneInfo>, ISerializable, IDeserializationCallback
{
	private struct TZifType(byte[] data, int index)
	{
		public readonly TimeSpan UtcOffset = default;

		public readonly bool IsDst = false;

		public readonly byte AbbreviationIndex = 0;
	}

	private struct TZifHead(byte[] data, int index)
	{
		public readonly uint Magic = 0u;

		public readonly TZVersion Version = TZVersion.V1;

		public readonly uint IsGmtCount = 0u;

		public readonly uint IsStdCount = 0u;

		public readonly uint LeapCount = 0u;

		public readonly uint TimeCount = 0u;

		public readonly uint TypeCount = 0u;

		public readonly uint CharCount = 0u;
	}

	private enum TZVersion : byte
	{
		V1 = 0,
		V2 = 1,
		V3 = 2
	}

	/// <summary>Provides information about a time zone adjustment, such as the transition to and from daylight saving time.</summary>
	[Serializable]
	public sealed class AdjustmentRule : IEquatable<AdjustmentRule>, ISerializable, IDeserializationCallback
	{
		private readonly DateTime _dateStart;

		private readonly DateTime _dateEnd;

		private readonly TimeSpan _daylightDelta;

		private readonly TransitionTime _daylightTransitionStart;

		private readonly TransitionTime _daylightTransitionEnd;

		private readonly TimeSpan _baseUtcOffsetDelta;

		private readonly bool _noDaylightTransitions;

		internal bool HasDaylightSaving => false;

		/// <summary>Determines whether the current <see cref="T:System.TimeZoneInfo.AdjustmentRule" /> object is equal to a second <see cref="T:System.TimeZoneInfo.AdjustmentRule" /> object.</summary>
		/// <param name="other">The object to compare with the current object.</param>
		/// <returns>
		///   <see langword="true" /> if both <see cref="T:System.TimeZoneInfo.AdjustmentRule" /> objects have equal values; otherwise, <see langword="false" />.</returns>
		public bool Equals(AdjustmentRule other)
		{
			return false;
		}

		/// <summary>Serves as a hash function for hashing algorithms and data structures such as hash tables.</summary>
		/// <returns>A 32-bit signed integer that serves as the hash code for the current <see cref="T:System.TimeZoneInfo.AdjustmentRule" /> object.</returns>
		public override int GetHashCode()
		{
			return 0;
		}

		private AdjustmentRule(DateTime dateStart, DateTime dateEnd, TimeSpan daylightDelta, TransitionTime daylightTransitionStart, TransitionTime daylightTransitionEnd, TimeSpan baseUtcOffsetDelta, bool noDaylightTransitions)
		{
		}

		/// <summary>Creates a new adjustment rule for a particular time zone.</summary>
		/// <param name="dateStart">The effective date of the adjustment rule. If the value of the <paramref name="dateStart" /> parameter is <see langword="DateTime.MinValue.Date" />, this is the first adjustment rule in effect for a time zone.</param>
		/// <param name="dateEnd">The last date that the adjustment rule is in force. If the value of the <paramref name="dateEnd" /> parameter is <see langword="DateTime.MaxValue.Date" />, the adjustment rule has no end date.</param>
		/// <param name="daylightDelta">The time change that results from the adjustment. This value is added to the time zone's <see cref="P:System.TimeZoneInfo.BaseUtcOffset" /> property to obtain the correct daylight offset from Coordinated Universal Time (UTC). This value can range from -14 to 14.</param>
		/// <param name="daylightTransitionStart">An object that defines the start of daylight saving time.</param>
		/// <param name="daylightTransitionEnd">An object that defines the end of daylight saving time.</param>
		/// <returns>An object that represents the new adjustment rule.</returns>
		/// <exception cref="T:System.ArgumentException">The <see cref="P:System.DateTime.Kind" /> property of the <paramref name="dateStart" /> or <paramref name="dateEnd" /> parameter does not equal <see cref="F:System.DateTimeKind.Unspecified" />.  
		///  -or-  
		///  The <paramref name="daylightTransitionStart" /> parameter is equal to the <paramref name="daylightTransitionEnd" /> parameter.  
		///  -or-  
		///  The <paramref name="dateStart" /> or <paramref name="dateEnd" /> parameter includes a time of day value.</exception>
		/// <exception cref="T:System.ArgumentOutOfRangeException">
		///   <paramref name="dateEnd" /> is earlier than <paramref name="dateStart" />.  
		/// -or-  
		/// <paramref name="daylightDelta" /> is less than -14 or greater than 14.  
		/// -or-  
		/// The <see cref="P:System.TimeSpan.Milliseconds" /> property of the <paramref name="daylightDelta" /> parameter is not equal to 0.  
		/// -or-  
		/// The <see cref="P:System.TimeSpan.Ticks" /> property of the <paramref name="daylightDelta" /> parameter does not equal a whole number of seconds.</exception>
		public static AdjustmentRule CreateAdjustmentRule(DateTime dateStart, DateTime dateEnd, TimeSpan daylightDelta, TransitionTime daylightTransitionStart, TransitionTime daylightTransitionEnd)
		{
			return null;
		}

		internal static AdjustmentRule CreateAdjustmentRule(DateTime dateStart, DateTime dateEnd, TimeSpan daylightDelta, TransitionTime daylightTransitionStart, TransitionTime daylightTransitionEnd, TimeSpan baseUtcOffsetDelta, bool noDaylightTransitions)
		{
			return null;
		}

		internal bool IsStartDateMarkerForBeginningOfYear()
		{
			return false;
		}

		internal bool IsEndDateMarkerForEndOfYear()
		{
			return false;
		}

		private static void ValidateAdjustmentRule(DateTime dateStart, DateTime dateEnd, TimeSpan daylightDelta, TransitionTime daylightTransitionStart, TransitionTime daylightTransitionEnd, bool noDaylightTransitions)
		{
		}

		/// <summary>Runs when the deserialization of a <see cref="T:System.TimeZoneInfo.AdjustmentRule" /> object is completed.</summary>
		/// <param name="sender">The object that initiated the callback. The functionality for this parameter is not currently implemented.</param>
		void IDeserializationCallback.OnDeserialization(object sender)
		{
		}

		/// <summary>Populates a <see cref="T:System.Runtime.Serialization.SerializationInfo" /> object with the data that is required to serialize this object.</summary>
		/// <param name="info">The object to populate with data.</param>
		/// <param name="context">The destination for this serialization (see <see cref="T:System.Runtime.Serialization.StreamingContext" />).</param>
		void ISerializable.GetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		private AdjustmentRule(SerializationInfo info, StreamingContext context)
		{
		}

		internal AdjustmentRule()
		{
		}
	}

	/// <summary>Provides information about a specific time change, such as the change from daylight saving time to standard time or vice versa, in a particular time zone.</summary>
	[Serializable]
	public struct TransitionTime : IEquatable<TransitionTime>, ISerializable, IDeserializationCallback
	{
		private readonly DateTime _timeOfDay = default;

		private readonly byte _month = 0;

		private readonly byte _week = 0;

		private readonly byte _day = 0;

		private readonly DayOfWeek _dayOfWeek = DayOfWeek.Sunday;

		private readonly bool _isFixedDateRule = false;

		/// <summary>Determines whether an object has identical values to the current <see cref="T:System.TimeZoneInfo.TransitionTime" /> object.</summary>
		/// <param name="obj">An object to compare with the current <see cref="T:System.TimeZoneInfo.TransitionTime" /> object.</param>
		/// <returns>
		///   <see langword="true" /> if the two objects are equal; otherwise, <see langword="false" />.</returns>
		public override bool Equals(object obj)
		{
			return false;
		}

		/// <summary>Determines whether two specified <see cref="T:System.TimeZoneInfo.TransitionTime" /> objects are not equal.</summary>
		/// <param name="t1">The first object to compare.</param>
		/// <param name="t2">The second object to compare.</param>
		/// <returns>
		///   <see langword="true" /> if <paramref name="t1" /> and <paramref name="t2" /> have any different member values; otherwise, <see langword="false" />.</returns>
		public static bool operator !=(TransitionTime t1, TransitionTime t2)
		{
			return false;
		}

		/// <summary>Determines whether the current <see cref="T:System.TimeZoneInfo.TransitionTime" /> object has identical values to a second <see cref="T:System.TimeZoneInfo.TransitionTime" /> object.</summary>
		/// <param name="other">An object to compare to the current instance.</param>
		/// <returns>
		///   <see langword="true" /> if the two objects have identical property values; otherwise, <see langword="false" />.</returns>
		public bool Equals(TransitionTime other)
		{
			return false;
		}

		/// <summary>Serves as a hash function for hashing algorithms and data structures such as hash tables.</summary>
		/// <returns>A 32-bit signed integer that serves as the hash code for this <see cref="T:System.TimeZoneInfo.TransitionTime" /> object.</returns>
		public override int GetHashCode()
		{
			return 0;
		}

		private TransitionTime(DateTime timeOfDay, int month, int week, int day, DayOfWeek dayOfWeek, bool isFixedDateRule)
		{
		}

		/// <summary>Defines a time change that uses a fixed-date rule (that is, a time change that occurs on a specific day of a specific month).</summary>
		/// <param name="timeOfDay">The time at which the time change occurs. This parameter corresponds to the <see cref="P:System.TimeZoneInfo.TransitionTime.TimeOfDay" /> property.</param>
		/// <param name="month">The month in which the time change occurs. This parameter corresponds to the <see cref="P:System.TimeZoneInfo.TransitionTime.Month" /> property.</param>
		/// <param name="day">The day of the month on which the time change occurs. This parameter corresponds to the <see cref="P:System.TimeZoneInfo.TransitionTime.Day" /> property.</param>
		/// <returns>Data about the time change.</returns>
		/// <exception cref="T:System.ArgumentException">The <paramref name="timeOfDay" /> parameter has a non-default date component.  
		///  -or-  
		///  The <paramref name="timeOfDay" /> parameter's <see cref="P:System.DateTime.Kind" /> property is not <see cref="F:System.DateTimeKind.Unspecified" />.  
		///  -or-  
		///  The <paramref name="timeOfDay" /> parameter does not represent a whole number of milliseconds.</exception>
		/// <exception cref="T:System.ArgumentOutOfRangeException">The <paramref name="month" /> parameter is less than 1 or greater than 12.  
		///  -or-  
		///  The <paramref name="day" /> parameter is less than 1 or greater than 31.</exception>
		public static TransitionTime CreateFixedDateRule(DateTime timeOfDay, int month, int day)
		{
			return default;
		}

		/// <summary>Defines a time change that uses a floating-date rule (that is, a time change that occurs on a specific day of a specific week of a specific month).</summary>
		/// <param name="timeOfDay">The time at which the time change occurs. This parameter corresponds to the <see cref="P:System.TimeZoneInfo.TransitionTime.TimeOfDay" /> property.</param>
		/// <param name="month">The month in which the time change occurs. This parameter corresponds to the <see cref="P:System.TimeZoneInfo.TransitionTime.Month" /> property.</param>
		/// <param name="week">The week of the month in which the time change occurs. Its value can range from 1 to 5, with 5 representing the last week of the month. This parameter corresponds to the <see cref="P:System.TimeZoneInfo.TransitionTime.Week" /> property.</param>
		/// <param name="dayOfWeek">The day of the week on which the time change occurs. This parameter corresponds to the <see cref="P:System.TimeZoneInfo.TransitionTime.DayOfWeek" /> property.</param>
		/// <returns>Data about the time change.</returns>
		/// <exception cref="T:System.ArgumentException">The <paramref name="timeOfDay" /> parameter has a non-default date component.  
		///  -or-  
		///  The <paramref name="timeOfDay" /> parameter does not represent a whole number of milliseconds.  
		///  -or-  
		///  The <paramref name="timeOfDay" /> parameter's <see cref="P:System.DateTime.Kind" /> property is not <see cref="F:System.DateTimeKind.Unspecified" />.</exception>
		/// <exception cref="T:System.ArgumentOutOfRangeException">
		///   <paramref name="month" /> is less than 1 or greater than 12.  
		/// -or-  
		/// <paramref name="week" /> is less than 1 or greater than 5.  
		/// -or-  
		/// The <paramref name="dayOfWeek" /> parameter is not a member of the <see cref="T:System.DayOfWeek" /> enumeration.</exception>
		public static TransitionTime CreateFloatingDateRule(DateTime timeOfDay, int month, int week, DayOfWeek dayOfWeek)
		{
			return default;
		}

		private static void ValidateTransitionTime(DateTime timeOfDay, int month, int week, int day, DayOfWeek dayOfWeek)
		{
		}

		/// <summary>Runs when the deserialization of an object has been completed.</summary>
		/// <param name="sender">The object that initiated the callback. The functionality for this parameter is not currently implemented.</param>
		void IDeserializationCallback.OnDeserialization(object sender)
		{
		}

		/// <summary>Populates a <see cref="T:System.Runtime.Serialization.SerializationInfo" /> object with the data that is required to serialize this object.</summary>
		/// <param name="info">The object to populate with data.</param>
		/// <param name="context">The destination for this serialization (see <see cref="T:System.Runtime.Serialization.StreamingContext" />).</param>
		void ISerializable.GetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		private TransitionTime(SerializationInfo info, StreamingContext context)
		{
		}
	}

	private sealed class CachedData
	{
		private TimeZoneInfo _localTimeZone;

		public TimeZoneInfo Local => null;

		private TimeZoneInfo CreateLocal()
		{
			return null;
		}

		public DateTimeKind GetCorrespondingKind(TimeZoneInfo timeZone)
		{
			return DateTimeKind.Unspecified;
		}
	}

	private readonly string _id;

	private readonly string _displayName;

	private readonly string _standardDisplayName;

	private readonly string _daylightDisplayName;

	private readonly TimeSpan _baseUtcOffset;

	private readonly bool _supportsDaylightSavingTime;

	private readonly AdjustmentRule[] _adjustmentRules;

	private static readonly TimeZoneInfo s_utcTimeZone;

	private static CachedData s_cachedData;

	private static readonly DateTime s_maxDateOnly;

	private static readonly DateTime s_minDateOnly;

	private static readonly TimeSpan MaxOffset;

	private static readonly TimeSpan MinOffset;

	/// <summary>Gets the general display name that represents the time zone.</summary>
	/// <returns>The time zone's general display name.</returns>
	public string DisplayName => null;

	/// <summary>Gets the display name for the time zone's standard time.</summary>
	/// <returns>The display name of the time zone's standard time.</returns>
	public string StandardName => null;

	/// <summary>Gets the display name for the current time zone's daylight saving time.</summary>
	/// <returns>The display name for the time zone's daylight saving time.</returns>
	public string DaylightName => null;

	/// <summary>Gets a <see cref="T:System.TimeZoneInfo" /> object that represents the local time zone.</summary>
	/// <returns>An object that represents the local time zone.</returns>
	public static TimeZoneInfo Local => null;

	private TimeZoneInfo(byte[] data, string id, bool dstDisabled)
	{
	}

	private static TimeZoneInfo GetLocalTimeZone(CachedData cachedData)
	{
		return null;
	}

	private static bool TryGetLocalTzFile(out byte[] rawData, out string id)
	{
		rawData = null;
		id = null;
		return false;
	}

	private static string GetTzEnvironmentVariable()
	{
		return null;
	}

	private static bool TryLoadTzFile(string tzFilePath, ref byte[] rawData, ref string id)
	{
		return false;
	}

	private static string FindTimeZoneIdUsingReadLink(string tzFilePath)
	{
		return null;
	}

	private static string GetDirectoryEntryFullPath(ref Interop.Sys.DirectoryEntry dirent, string currentPath)
	{
		return null;
	}

	private static void EnumerateFilesRecursively(string path, Predicate<string> condition)
	{
	}

	private static string FindTimeZoneId(byte[] rawData)
	{
		return null;
	}

	private static bool CompareTimeZoneFile(string filePath, byte[] buffer, byte[] rawData)
	{
		return false;
	}

	private static TimeZoneInfo GetLocalTimeZoneFromTzFile()
	{
		return null;
	}

	private static TimeZoneInfo GetTimeZoneFromTzData(byte[] rawData, string id)
	{
		return null;
	}

	private static string GetTimeZoneDirectory()
	{
		return null;
	}

	internal static TimeSpan GetDateTimeNowUtcOffsetFromUtc(DateTime time, out bool isAmbiguousLocalDst)
	{
		isAmbiguousLocalDst = default;
		return default;
	}

	private static void TZif_GenerateAdjustmentRules(out AdjustmentRule[] rules, TimeSpan baseUtcOffset, DateTime[] dts, byte[] typeOfLocalTime, TZifType[] transitionType, bool[] StandardTime, bool[] GmtTime, string futureTransitionsPosixFormat)
	{
		rules = null;
	}

	private static void TZif_GenerateAdjustmentRule(ref int index, TimeSpan timeZoneBaseUtcOffset, List<AdjustmentRule> rulesList, DateTime[] dts, byte[] typeOfLocalTime, TZifType[] transitionTypes, bool[] StandardTime, bool[] GmtTime, string futureTransitionsPosixFormat)
	{
	}

	private static TimeSpan TZif_CalculateTransitionOffsetFromBase(TimeSpan transitionOffset, TimeSpan timeZoneBaseUtcOffset)
	{
		return default;
	}

	private static TZifType TZif_GetEarlyDateTransitionType(TZifType[] transitionTypes)
	{
		return default;
	}

	private static AdjustmentRule TZif_CreateAdjustmentRuleForPosixFormat(string posixFormat, DateTime startTransitionDate, TimeSpan timeZoneBaseUtcOffset)
	{
		return null;
	}

	private static TimeSpan? TZif_ParseOffsetString(string offset)
	{
		return null;
	}

	private static DateTime ParseTimeOfDay(string time)
	{
		return default;
	}

	private static TransitionTime? TZif_CreateTransitionTimeFromPosixRule(string date, string time)
	{
		return null;
	}

	private static void TZif_ParseJulianDay(string date, out int month, out int day)
	{
		month = default;
		day = default;
	}

	private static bool TZif_ParseMDateRule(string dateRule, out int month, out int week, out DayOfWeek dayOfWeek)
	{
		month = default;
		week = default;
		dayOfWeek = default;
		return false;
	}

	private static bool TZif_ParsePosixFormat(string posixFormat, out string standardName, out string standardOffset, out string daylightSavingsName, out string daylightSavingsOffset, out string start, out string startTime, out string end, out string endTime)
	{
		standardName = null;
		standardOffset = null;
		daylightSavingsName = null;
		daylightSavingsOffset = null;
		start = null;
		startTime = null;
		end = null;
		endTime = null;
		return false;
	}

	private static string TZif_ParsePosixName(string posixFormat, ref int index)
	{
		return null;
	}

	private static string TZif_ParsePosixOffset(string posixFormat, ref int index)
	{
		return null;
	}

	private static void TZif_ParsePosixDateTime(string posixFormat, ref int index, out string date, out string time)
	{
		date = null;
		time = null;
	}

	private static string TZif_ParsePosixDate(string posixFormat, ref int index)
	{
		return null;
	}

	private static string TZif_ParsePosixTime(string posixFormat, ref int index)
	{
		return null;
	}

	private static string TZif_ParsePosixString(string posixFormat, ref int index, Func<char, bool> breakCondition)
	{
		return null;
	}

	private static string TZif_GetZoneAbbreviation(string zoneAbbreviations, int index)
	{
		return null;
	}

	private static int TZif_ToInt32(byte[] value, int startIndex)
	{
		return 0;
	}

	private static long TZif_ToInt64(byte[] value, int startIndex)
	{
		return 0L;
	}

	private static long TZif_ToUnixTime(byte[] value, int startIndex, TZVersion version)
	{
		return 0L;
	}

	private static DateTime TZif_UnixTimeToDateTime(long unixTime)
	{
		return default;
	}

	private static void TZif_ParseRaw(byte[] data, out TZifHead t, out DateTime[] dts, out byte[] typeOfLocalTime, out TZifType[] transitionType, out string zoneAbbreviations, out bool[] StandardTime, out bool[] GmtTime, out string futureTransitionsPosixFormat)
	{
		t = default;
		dts = null;
		typeOfLocalTime = null;
		transitionType = null;
		zoneAbbreviations = null;
		StandardTime = null;
		GmtTime = null;
		futureTransitionsPosixFormat = null;
	}

	private AdjustmentRule GetPreviousAdjustmentRule(AdjustmentRule rule, int? ruleIndex)
	{
		return null;
	}

	/// <summary>Calculates the offset or difference between the time in this time zone and Coordinated Universal Time (UTC) for a particular date and time.</summary>
	/// <param name="dateTime">The date and time to determine the offset for.</param>
	/// <returns>An object that indicates the time difference between the two time zones.</returns>
	public TimeSpan GetUtcOffset(DateTime dateTime)
	{
		return default;
	}

	internal static TimeSpan GetLocalUtcOffset(DateTime dateTime, TimeZoneInfoOptions flags)
	{
		return default;
	}

	internal TimeSpan GetUtcOffset(DateTime dateTime, TimeZoneInfoOptions flags)
	{
		return default;
	}

	private TimeSpan GetUtcOffset(DateTime dateTime, TimeZoneInfoOptions flags, CachedData cachedData)
	{
		return default;
	}

	internal static DateTime ConvertTime(DateTime dateTime, TimeZoneInfo sourceTimeZone, TimeZoneInfo destinationTimeZone, TimeZoneInfoOptions flags)
	{
		return default;
	}

	private static DateTime ConvertTime(DateTime dateTime, TimeZoneInfo sourceTimeZone, TimeZoneInfo destinationTimeZone, TimeZoneInfoOptions flags, CachedData cachedData)
	{
		return default;
	}

	internal static DateTime ConvertTimeToUtc(DateTime dateTime, TimeZoneInfoOptions flags)
	{
		return default;
	}

	/// <summary>Determines whether the current <see cref="T:System.TimeZoneInfo" /> object and another <see cref="T:System.TimeZoneInfo" /> object are equal.</summary>
	/// <param name="other">A second object to compare with the current object.</param>
	/// <returns>
	///   <see langword="true" /> if the two <see cref="T:System.TimeZoneInfo" /> objects are equal; otherwise, <see langword="false" />.</returns>
	public bool Equals(TimeZoneInfo other)
	{
		return false;
	}

	/// <summary>Determines whether the current <see cref="T:System.TimeZoneInfo" /> object and another object are equal.</summary>
	/// <param name="obj">A second object to compare with the current object.</param>
	/// <returns>
	///   <see langword="true" /> if <paramref name="obj" /> is a <see cref="T:System.TimeZoneInfo" /> object that is equal to the current instance; otherwise, <see langword="false" />.</returns>
	public override bool Equals(object obj)
	{
		return false;
	}

	/// <summary>Serves as a hash function for hashing algorithms and data structures such as hash tables.</summary>
	/// <returns>A 32-bit signed integer that serves as the hash code for this <see cref="T:System.TimeZoneInfo" /> object.</returns>
	public override int GetHashCode()
	{
		return 0;
	}

	/// <summary>Indicates whether the current object and another <see cref="T:System.TimeZoneInfo" /> object have the same adjustment rules.</summary>
	/// <param name="other">A second object to compare with the current <see cref="T:System.TimeZoneInfo" /> object.</param>
	/// <returns>
	///   <see langword="true" /> if the two time zones have identical adjustment rules and an identical base offset; otherwise, <see langword="false" />.</returns>
	/// <exception cref="T:System.ArgumentNullException">The <paramref name="other" /> parameter is <see langword="null" />.</exception>
	public bool HasSameRules(TimeZoneInfo other)
	{
		return false;
	}

	/// <summary>Returns the current <see cref="T:System.TimeZoneInfo" /> object's display name.</summary>
	/// <returns>The value of the <see cref="P:System.TimeZoneInfo.DisplayName" /> property of the current <see cref="T:System.TimeZoneInfo" /> object.</returns>
	public override string ToString()
	{
		return null;
	}

	private TimeZoneInfo(string id, TimeSpan baseUtcOffset, string displayName, string standardDisplayName, string daylightDisplayName, AdjustmentRule[] adjustmentRules, bool disableDaylightSavingTime)
	{
	}

	/// <summary>Creates a custom time zone with a specified identifier, an offset from Coordinated Universal Time (UTC), a display name, and a standard time display name.</summary>
	/// <param name="id">The time zone's identifier.</param>
	/// <param name="baseUtcOffset">An object that represents the time difference between this time zone and Coordinated Universal Time (UTC).</param>
	/// <param name="displayName">The display name of the new time zone.</param>
	/// <param name="standardDisplayName">The name of the new time zone's standard time.</param>
	/// <returns>The new time zone.</returns>
	/// <exception cref="T:System.ArgumentNullException">The <paramref name="id" /> parameter is <see langword="null" />.</exception>
	/// <exception cref="T:System.ArgumentException">The <paramref name="id" /> parameter is an empty string ("").  
	///  -or-  
	///  The <paramref name="baseUtcOffset" /> parameter does not represent a whole number of minutes.</exception>
	/// <exception cref="T:System.ArgumentOutOfRangeException">The <paramref name="baseUtcOffset" /> parameter is greater than 14 hours or less than -14 hours.</exception>
	public static TimeZoneInfo CreateCustomTimeZone(string id, TimeSpan baseUtcOffset, string displayName, string standardDisplayName)
	{
		return null;
	}

	/// <summary>Creates a custom time zone with a specified identifier, an offset from Coordinated Universal Time (UTC), a display name, a standard time name, a daylight saving time name, daylight saving time rules, and a value that indicates whether the returned object reflects daylight saving time information.</summary>
	/// <param name="id">The time zone's identifier.</param>
	/// <param name="baseUtcOffset">A <see cref="T:System.TimeSpan" /> object that represents the time difference between this time zone and Coordinated Universal Time (UTC).</param>
	/// <param name="displayName">The display name of the new time zone.</param>
	/// <param name="standardDisplayName">The standard time name of the new time zone.</param>
	/// <param name="daylightDisplayName">The daylight saving time name of the new time zone.</param>
	/// <param name="adjustmentRules">An array of <see cref="T:System.TimeZoneInfo.AdjustmentRule" /> objects that augment the base UTC offset for a particular period.</param>
	/// <param name="disableDaylightSavingTime">
	///   <see langword="true" /> to discard any daylight saving time-related information present in <paramref name="adjustmentRules" /> with the new object; otherwise, <see langword="false" />.</param>
	/// <returns>The new time zone. If the <paramref name="disableDaylightSavingTime" /> parameter is <see langword="true" />, the returned object has no daylight saving time data.</returns>
	/// <exception cref="T:System.ArgumentNullException">The <paramref name="id" /> parameter is <see langword="null" />.</exception>
	/// <exception cref="T:System.ArgumentException">The <paramref name="id" /> parameter is an empty string ("").  
	///  -or-  
	///  The <paramref name="baseUtcOffset" /> parameter does not represent a whole number of minutes.</exception>
	/// <exception cref="T:System.ArgumentOutOfRangeException">The <paramref name="baseUtcOffset" /> parameter is greater than 14 hours or less than -14 hours.</exception>
	/// <exception cref="T:System.InvalidTimeZoneException">The adjustment rules specified in the <paramref name="adjustmentRules" /> parameter overlap.  
	///  -or-  
	///  The adjustment rules specified in the <paramref name="adjustmentRules" /> parameter are not in chronological order.  
	///  -or-  
	///  One or more elements in <paramref name="adjustmentRules" /> are <see langword="null" />.  
	///  -or-  
	///  A date can have multiple adjustment rules applied to it.  
	///  -or-  
	///  The sum of the <paramref name="baseUtcOffset" /> parameter and the <see cref="P:System.TimeZoneInfo.AdjustmentRule.DaylightDelta" /> value of one or more objects in the <paramref name="adjustmentRules" /> array is greater than 14 hours or less than -14 hours.</exception>
	public static TimeZoneInfo CreateCustomTimeZone(string id, TimeSpan baseUtcOffset, string displayName, string standardDisplayName, string daylightDisplayName, AdjustmentRule[] adjustmentRules, bool disableDaylightSavingTime)
	{
		return null;
	}

	/// <summary>Runs when the deserialization of an object has been completed.</summary>
	/// <param name="sender">The object that initiated the callback. The functionality for this parameter is not currently implemented.</param>
	/// <exception cref="T:System.Runtime.Serialization.SerializationException">The <see cref="T:System.TimeZoneInfo" /> object contains invalid or corrupted data.</exception>
	void IDeserializationCallback.OnDeserialization(object sender)
	{
	}

	/// <summary>Populates a <see cref="T:System.Runtime.Serialization.SerializationInfo" /> object with the data needed to serialize the current <see cref="T:System.TimeZoneInfo" /> object.</summary>
	/// <param name="info">The <see cref="T:System.Runtime.Serialization.SerializationInfo" /> object to populate with data.</param>
	/// <param name="context">The destination for this serialization (see <see cref="T:System.Runtime.Serialization.StreamingContext" />).</param>
	/// <exception cref="T:System.ArgumentNullException">The <paramref name="info" /> parameter is <see langword="null" />.</exception>
	void ISerializable.GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	private TimeZoneInfo(SerializationInfo info, StreamingContext context)
	{
	}

	private AdjustmentRule GetAdjustmentRuleForTime(DateTime dateTime, out int? ruleIndex)
	{
		ruleIndex = null;
		return null;
	}

	private AdjustmentRule GetAdjustmentRuleForTime(DateTime dateTime, bool dateTimeisUtc, out int? ruleIndex)
	{
		ruleIndex = null;
		return null;
	}

	private int CompareAdjustmentRuleToDateTime(AdjustmentRule rule, AdjustmentRule previousRule, DateTime dateTime, DateTime dateOnly, bool dateTimeisUtc)
	{
		return 0;
	}

	private DateTime ConvertToUtc(DateTime dateTime, TimeSpan daylightDelta, TimeSpan baseUtcOffsetDelta)
	{
		return default;
	}

	private DateTime ConvertFromUtc(DateTime dateTime, TimeSpan daylightDelta, TimeSpan baseUtcOffsetDelta)
	{
		return default;
	}

	private DateTime ConvertToFromUtc(DateTime dateTime, TimeSpan daylightDelta, TimeSpan baseUtcOffsetDelta, bool convertToUtc)
	{
		return default;
	}

	private static DateTime ConvertUtcToTimeZone(long ticks, TimeZoneInfo destinationTimeZone, out bool isAmbiguousLocalDst)
	{
		isAmbiguousLocalDst = default;
		return default;
	}

	private DaylightTimeStruct GetDaylightTime(int year, AdjustmentRule rule, int? ruleIndex)
	{
		return default;
	}

	private static bool GetIsDaylightSavings(DateTime time, AdjustmentRule rule, DaylightTimeStruct daylightTime, TimeZoneInfoOptions flags)
	{
		return false;
	}

	private TimeSpan GetDaylightSavingsStartOffsetFromUtc(TimeSpan baseUtcOffset, AdjustmentRule rule, int? ruleIndex)
	{
		return default;
	}

	private TimeSpan GetDaylightSavingsEndOffsetFromUtc(TimeSpan baseUtcOffset, AdjustmentRule rule)
	{
		return default;
	}

	private static bool GetIsDaylightSavingsFromUtc(DateTime time, int year, TimeSpan utc, AdjustmentRule rule, int? ruleIndex, out bool isAmbiguousLocalDst, TimeZoneInfo zone)
	{
		isAmbiguousLocalDst = default;
		return false;
	}

	private static bool CheckIsDst(DateTime startTime, DateTime time, DateTime endTime, bool ignoreYearAdjustment, AdjustmentRule rule)
	{
		return false;
	}

	private static bool GetIsAmbiguousTime(DateTime time, AdjustmentRule rule, DaylightTimeStruct daylightTime)
	{
		return false;
	}

	private static bool GetIsInvalidTime(DateTime time, AdjustmentRule rule, DaylightTimeStruct daylightTime)
	{
		return false;
	}

	private static TimeSpan GetUtcOffset(DateTime time, TimeZoneInfo zone, TimeZoneInfoOptions flags)
	{
		return default;
	}

	private static TimeSpan GetUtcOffsetFromUtc(DateTime time, TimeZoneInfo zone)
	{
		return default;
	}

	private static TimeSpan GetUtcOffsetFromUtc(DateTime time, TimeZoneInfo zone, out bool isDaylightSavings)
	{
		isDaylightSavings = default;
		return default;
	}

	internal static TimeSpan GetUtcOffsetFromUtc(DateTime time, TimeZoneInfo zone, out bool isDaylightSavings, out bool isAmbiguousLocalDst)
	{
		isDaylightSavings = default;
		isAmbiguousLocalDst = default;
		return default;
	}

	internal static DateTime TransitionTimeToDateTime(int year, TransitionTime transitionTime)
	{
		return default;
	}

	private static void ValidateTimeZoneInfo(string id, TimeSpan baseUtcOffset, AdjustmentRule[] adjustmentRules, out bool adjustmentRulesSupportDst)
	{
		adjustmentRulesSupportDst = default;
	}

	internal static bool UtcOffsetOutOfRange(TimeSpan offset)
	{
		return false;
	}

	private static TimeSpan GetUtcOffset(TimeSpan baseUtcOffset, AdjustmentRule adjustmentRule)
	{
		return default;
	}

	private static bool IsValidAdjustmentRuleOffest(TimeSpan baseUtcOffset, AdjustmentRule adjustmentRule)
	{
		return false;
	}

	private static void NormalizeAdjustmentRuleOffset(TimeSpan baseUtcOffset, ref AdjustmentRule adjustmentRule)
	{
	}

	private static List<AdjustmentRule> CreateAdjustmentRule(int year, out long[] data, out string[] names)
	{
		data = null;
		names = null;
		return null;
	}

	private static TimeZoneInfo CreateLocalUnity()
	{
		return null;
	}

	internal TimeZoneInfo()
	{
	}
}
