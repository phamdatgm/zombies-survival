using UnityEngine;

namespace FSG
{
	public class AndroidSecuritySettings : ScriptableObject
	{
		public const string SETTINGS_NAME = "AndroidSecuritySettings";

		public byte[] signature;

		public bool lockAsset;

		public bool autoImportSignature;

		public string keystoreSignature => null;

		public string error => null;
	}
}
