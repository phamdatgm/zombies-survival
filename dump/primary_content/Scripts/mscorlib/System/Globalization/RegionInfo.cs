using System.Runtime.InteropServices;

namespace System.Globalization;

/// <summary>Contains information about the country/region.</summary>
[Serializable]
[StructLayout((LayoutKind)0)]
public class RegionInfo
{
	private static RegionInfo currentRegion;

	private int regionId;

	private string iso2Name;

	private string iso3Name;

	private string win3Name;

	private string englishName;

	private string nativeName;

	private string currencySymbol;

	private string isoCurrencySymbol;

	private string currencyEnglishName;

	private string currencyNativeName;
}
