using System;
using System.Collections;
using System.Collections.Generic;

namespace UnityEngine.UIElements;

public struct StylePropertyNameCollection : IEnumerable<StylePropertyName>, IEnumerable
{
	public struct Enumerator : IEnumerator<StylePropertyName>, IEnumerator, IDisposable
	{
		private List<StylePropertyName>.Enumerator m_Enumerator = default;

		public StylePropertyName Current => default;

		object IEnumerator.Current => null;

		internal Enumerator(List<StylePropertyName>.Enumerator enumerator)
		{
		}

		public bool MoveNext()
		{
			return false;
		}

		public void Reset()
		{
		}

		public void Dispose()
		{
		}
	}

	internal List<StylePropertyName> propertiesList = null;

	internal StylePropertyNameCollection(List<StylePropertyName> list)
	{
	}

	public Enumerator GetEnumerator()
	{
		return default;
	}

	IEnumerator<StylePropertyName> IEnumerable<StylePropertyName>.GetEnumerator()
	{
		return null;
	}

	IEnumerator IEnumerable.GetEnumerator()
	{
		return null;
	}
}
