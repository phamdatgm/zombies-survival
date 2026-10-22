using System;

namespace Adverty.Native;

public interface IWebViewTextureBridge : INativeClass
{
	IntPtr Create(IntPtr cbo, int width, int height, int loadTimeout, int scale);

	void SetOnClicked(IntPtr ptr, IntPtr onClickedDelegate);

	void SetOnReceiveError(IntPtr ptr, IntPtr onReceivedErrorDelegate);

	void SetOnPageFinished(IntPtr ptr, IntPtr onPageFinishedDelegate);

	void SetOnTextureCheckPassed(IntPtr ptr, IntPtr onTextureCheckPassedDelegate);

	void SetOnHtmlLoadTimeout(IntPtr ptr, IntPtr onHtmlLoadTimeoutDelegate);

	void LoadData(IntPtr ptr, string data);

	void LoadURL(IntPtr ptr, string url);

	void SetRenderActive(IntPtr ptr, bool active);

	void Destroy(IntPtr ptr, string data);

	void Touch(IntPtr ptr, float x, float y);

	void SendViewabilityData(IntPtr ptr, string data);

	void TriggerViewedImpression(IntPtr ptr, string data);
}
