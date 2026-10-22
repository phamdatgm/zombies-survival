namespace Newtonsoft.Json.Linq;

public class JRaw : JValue
{
	internal JRaw(JRaw other, JsonCloneSettings? settings)
		: base(null, JTokenType.None)
	{
	}

	public JRaw(object? rawJson)
		: base(null, JTokenType.None)
	{
	}

	public static JRaw Create(JsonReader reader)
	{
		return null;
	}

	internal override JToken CloneToken(JsonCloneSettings? settings)
	{
		return null;
	}
}
