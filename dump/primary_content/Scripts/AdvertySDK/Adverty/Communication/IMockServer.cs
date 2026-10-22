using System;

namespace Adverty.Communication;

public interface IMockServer
{
	bool IsMockServerEnabled { get; }

	void Initialize();

	void GetRequest<T>(Action<T> callback, T request, string url, Action<int, string, string> onError);

	void SimulateRequest<T>(string url, byte[] inputData, Action<T> onResponse, Action<int, string, string> onError);

	void SetupResponse(string requestName, string responseBody);

	void SetupImageUrl(string imageUrl);

	void SetupHtmlData(string htmlData);

	void ClearAllCustomResponses();
}
