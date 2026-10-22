namespace Newtonsoft.Json.Bson;

internal class BsonRegex : BsonToken
{
	public BsonString Pattern { set; }

	public BsonString Options { set; }

	public override BsonType Type => (BsonType)0;

	public BsonRegex(string pattern, string options)
	{
	}
}
