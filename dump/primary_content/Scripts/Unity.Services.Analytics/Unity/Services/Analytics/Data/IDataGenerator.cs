namespace Unity.Services.Analytics.Data;

internal interface IDataGenerator
{
	void GameRunning(string callingMethodIdentifier);

	void SdkStartup(string callingMethodIdentifier);

	void NewPlayer(string callingMethodIdentifier);

	void GameStarted(string callingMethodIdentifier);

	void GameEnded(string callingMethodIdentifier, DataGenerator.SessionEndState quitState);

	void ClientDevice(string callingMethodIdentifier);

	void PushCommonParams(string callingMethodIdentifier);
}
