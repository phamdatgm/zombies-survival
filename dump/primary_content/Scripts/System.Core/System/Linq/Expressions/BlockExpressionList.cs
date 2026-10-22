using System.Collections;
using System.Collections.Generic;

namespace System.Linq.Expressions;

internal class BlockExpressionList : IList<Expression>, ICollection<Expression>, IEnumerable<Expression>, IEnumerable
{
	private readonly BlockExpression _block;

	private readonly Expression _arg0;

	public Expression this[int index]
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public int Count => 0;

	public bool IsReadOnly => false;

	internal BlockExpressionList(BlockExpression provider, Expression arg0)
	{
	}

	public int IndexOf(Expression item)
	{
		return 0;
	}

	public void Insert(int index, Expression item)
	{
	}

	public void RemoveAt(int index)
	{
	}

	public void Add(Expression item)
	{
	}

	public void Clear()
	{
	}

	public bool Contains(Expression item)
	{
		return false;
	}

	public void CopyTo(Expression[] array, int index)
	{
	}

	public bool Remove(Expression item)
	{
		return false;
	}

	public IEnumerator<Expression> GetEnumerator()
	{
		return null;
	}

	IEnumerator IEnumerable.GetEnumerator()
	{
		return null;
	}
}
