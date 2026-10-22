using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Adverty.Native;

namespace Adverty;

public class UserData
{
	private const string ds = "Adverty SDK failed to initialize due to missed AgeSegment";

	private const string dT = "Adverty SDK failed to initialize due to missed Gender";

	private const string dt = "Adverty SDK failed to initialize due to missed UserData. UserData is required.";

	[CompilerGenerated]
	private string dU;

	[CompilerGenerated]
	private int du;

	[CompilerGenerated]
	private string dV;

	[CompilerGenerated]
	private AgeSegment dv;

	[CompilerGenerated]
	private Gender dW;

	[CompilerGenerated]
	private int dw;

	public bool IsChild => false;

	public string ConsentString
	{
		[CompilerGenerated]
		get
		{
			return null;
		}
		[CompilerGenerated]
		private set
		{
		}
	}

	public int GDPR
	{
		[CompilerGenerated]
		get
		{
			return 0;
		}
		[CompilerGenerated]
		private set
		{
		}
	}

	public string USPrivacyString
	{
		[CompilerGenerated]
		get
		{
			return null;
		}
		[CompilerGenerated]
		private set
		{
		}
	}

	public AgeSegment UserAgeGroup
	{
		[CompilerGenerated]
		get
		{
			return AgeSegment.Undefined;
		}
		[CompilerGenerated]
		private set
		{
		}
	}

	public Gender UsersGender
	{
		[CompilerGenerated]
		get
		{
			return Gender.Undefined;
		}
		[CompilerGenerated]
		private set
		{
		}
	}

	public int YearOfBirth
	{
		[CompilerGenerated]
		get
		{
			return 0;
		}
		[CompilerGenerated]
		private set
		{
		}
	}

	public UserData(AgeSegment ageSegment, Gender gender)
	{
	}

	public UserData(string consentString)
	{
	}

	public UserData(string consentString, int gdprApplied, string usPrivacyString)
	{
	}

	public UserData(AgeData ageData)
	{
	}

	public UserData(AgeSegment ageSegment, Gender gender, AgeData ageData)
	{
	}

	public UserData(AgeSegment ageSegment, Gender gender, string consentString)
	{
	}

	public UserData(AgeData ageData, string consentString)
	{
	}

	public UserData(AgeSegment ageSegment, Gender gender, AgeData ageData, string consentString, int gdprApplied, string usPrivacyString)
	{
	}

	public static bool IsTheSame(UserData source, UserData comparator)
	{
		return false;
	}

	public static bool IsValid(UserData userData)
	{
		return false;
	}

	internal void UpdateIABData(NativeIABData iabData)
	{
	}

	public static Dictionary<string, string> GetModel(UserData data)
	{
		return null;
	}
}
