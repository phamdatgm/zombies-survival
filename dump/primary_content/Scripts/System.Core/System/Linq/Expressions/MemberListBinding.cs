using System.Collections.ObjectModel;

namespace System.Linq.Expressions;

public sealed class MemberListBinding : MemberBinding
{
	private readonly ReadOnlyCollection<ElementInit> Initializers;
}
