namespace System.Linq.Expressions;

public class DebugInfoExpression : Expression
{
	private readonly SymbolDocumentInfo Document;

	public virtual int StartLine => 0;

	public virtual int EndLine => 0;

	public virtual bool IsClear => false;
}
