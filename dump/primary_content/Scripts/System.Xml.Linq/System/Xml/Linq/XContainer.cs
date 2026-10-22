using System.Collections.Generic;
using System.Text;

namespace System.Xml.Linq;

public abstract class XContainer : XNode
{
	private sealed class ContentReader
	{
		private readonly NamespaceCache _eCache;

		private readonly NamespaceCache _aCache;

		private readonly IXmlLineInfo _lineInfo;

		private XContainer _currentContainer;

		private string _baseUri;

		public ContentReader(XContainer rootContainer)
		{
		}

		public ContentReader(XContainer rootContainer, XmlReader r, LoadOptions o)
		{
		}

		public bool ReadContentFrom(XContainer rootContainer, XmlReader r)
		{
			return false;
		}

		public bool ReadContentFrom(XContainer rootContainer, XmlReader r, LoadOptions o)
		{
			return false;
		}
	}

	internal object content;

	public XNode LastNode => null;

	internal XContainer()
	{
	}

	internal XContainer(XContainer other)
	{
	}

	public void Add(object content)
	{
	}

	public IEnumerable<XNode> Nodes()
	{
		return null;
	}

	internal virtual void AddAttribute(XAttribute a)
	{
	}

	internal virtual void AddAttributeSkipNotify(XAttribute a)
	{
	}

	internal void AddContentSkipNotify(object content)
	{
	}

	internal void AddNode(XNode n)
	{
	}

	internal void AddNodeSkipNotify(XNode n)
	{
	}

	internal void AddString(string s)
	{
	}

	internal void AddStringSkipNotify(string s)
	{
	}

	internal void AppendNode(XNode n)
	{
	}

	internal void AppendNodeSkipNotify(XNode n)
	{
	}

	internal override void AppendText(StringBuilder sb)
	{
	}

	internal void ConvertTextToNode()
	{
	}

	internal static string GetStringValue(object value)
	{
		return null;
	}

	internal void ReadContentFrom(XmlReader r)
	{
	}

	internal void ReadContentFrom(XmlReader r, LoadOptions o)
	{
	}

	internal void RemoveNode(XNode n)
	{
	}

	internal virtual void ValidateNode(XNode node, XNode previous)
	{
	}

	internal virtual void ValidateString(string s)
	{
	}

	internal void WriteContentTo(XmlWriter writer)
	{
	}
}
