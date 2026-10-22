using System.Collections.Generic;

namespace System.Globalization;

internal class DateTimeFormatInfoScanner
{
	private enum FoundDatePattern
	{
		None = 0,
		FoundYearPatternFlag = 1,
		FoundMonthPatternFlag = 2,
		FoundDayPatternFlag = 4,
		FoundYMDPatternFlag = 7
	}

	internal List<string> m_dateWords;

	private static Dictionary<string, string> s_knownWords;

	private FoundDatePattern _ymdFlags;

	private static Dictionary<string, string> KnownWords => null;

	internal static int SkipWhiteSpacesAndNonLetter(string pattern, int currentIndex)
	{
		return 0;
	}

	internal void AddDateWordOrPostfix(string formatPostfix, string str)
	{
	}

	internal int AddDateWords(string pattern, int index, string formatPostfix)
	{
		return 0;
	}

	internal static int ScanRepeatChar(string pattern, char ch, int index, out int count)
	{
		count = default;
		return 0;
	}

	internal void AddIgnorableSymbols(string text)
	{
	}

	internal void ScanDateWord(string pattern)
	{
	}

	internal string[] GetDateWordsOfDTFI(DateTimeFormatInfo dtfi)
	{
		return null;
	}

	internal static FORMATFLAGS GetFormatFlagGenitiveMonth(string[] monthNames, string[] genitveMonthNames, string[] abbrevMonthNames, string[] genetiveAbbrevMonthNames)
	{
		return FORMATFLAGS.None;
	}

	internal static FORMATFLAGS GetFormatFlagUseSpaceInMonthNames(string[] monthNames, string[] genitveMonthNames, string[] abbrevMonthNames, string[] genetiveAbbrevMonthNames)
	{
		return FORMATFLAGS.None;
	}

	internal static FORMATFLAGS GetFormatFlagUseSpaceInDayNames(string[] dayNames, string[] abbrevDayNames)
	{
		return FORMATFLAGS.None;
	}

	internal static FORMATFLAGS GetFormatFlagUseHebrewCalendar(int calID)
	{
		return FORMATFLAGS.None;
	}

	private static bool EqualStringArrays(string[] array1, string[] array2)
	{
		return false;
	}

	private static bool ArrayElementsHaveSpace(string[] array)
	{
		return false;
	}

	private static bool ArrayElementsBeginWithDigit(string[] array)
	{
		return false;
	}
}
