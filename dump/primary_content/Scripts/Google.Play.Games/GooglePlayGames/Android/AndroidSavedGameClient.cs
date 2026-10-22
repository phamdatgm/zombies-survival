using System.Text.RegularExpressions;
using GooglePlayGames.BasicApi.SavedGame;
using UnityEngine;

namespace GooglePlayGames.Android;

internal class AndroidSavedGameClient : ISavedGameClient
{
	private static readonly Regex ValidFilenameRegex;

	private AndroidJavaObject mSnapshotsClient;

	private AndroidClient mAndroidClient;

	public AndroidSavedGameClient(AndroidClient androidClient)
	{
	}
}
