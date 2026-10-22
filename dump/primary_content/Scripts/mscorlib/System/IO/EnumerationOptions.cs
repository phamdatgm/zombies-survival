namespace System.IO;

public class EnumerationOptions
{
	private static readonly EnumerationOptions Compatible;

	private static readonly EnumerationOptions CompatibleRecursive;

	private static readonly EnumerationOptions Default;

	private bool RecurseSubdirectories;

	private bool IgnoreInaccessible;

	private FileAttributes AttributesToSkip;

	private MatchType MatchType;

	private MatchCasing MatchCasing;

	private bool ReturnSpecialDirectories;
}
