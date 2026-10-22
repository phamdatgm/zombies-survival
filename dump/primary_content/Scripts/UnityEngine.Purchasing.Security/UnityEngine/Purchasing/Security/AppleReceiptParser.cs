using System;
using System.Collections.Generic;
using System.Globalization;
using LipingShare.LCLib.Asn1Processor;

namespace UnityEngine.Purchasing.Security;

public class AppleReceiptParser
{
	private static Dictionary<string, object> _mostRecentReceiptData;

	private const string k_AppleReceiptKey = "k_AppleReceiptKey";

	private const string k_PKCS7Key = "k_PKCS7Key";

	private const string k_ReceiptBytesKey = "k_ReceiptBytesKey";

	public AppleReceipt Parse(byte[] receiptData)
	{
		return null;
	}

	internal AppleReceipt Parse(byte[] receiptData, out PKCS7 receipt)
	{
		receipt = null;
		return null;
	}

	private static CultureInfo PushInvariantCultureOnThread()
	{
		return null;
	}

	private static void PopCultureOffThread(CultureInfo originalCulture)
	{
	}

	private AppleReceipt ParseReceipt(Asn1Node data)
	{
		return null;
	}

	private Asn1Node GetSetNode(Asn1Node data)
	{
		return null;
	}

	private AppleInAppPurchaseReceipt ParseInAppReceipt(Asn1Node inApp)
	{
		return null;
	}

	private static DateTime TryParseDateTimeNode(Asn1Node node)
	{
		return default;
	}

	public static bool ArrayEquals<T>(T[] a, T[] b) where T : IEquatable<T>
	{
		return false;
	}
}
