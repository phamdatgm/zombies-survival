// Namespace: 
internal class <Module> // TypeDefIndex: 7451
{}


// Namespace: 
internal static class SR // TypeDefIndex: 7452
{
	// Methods

	// RVA: 0x10E2258 Offset: 0x10DE258 VA: 0x10E2258
	internal static string Format(string resourceFormat, object p1) { }

	// RVA: 0x10E22C8 Offset: 0x10DE2C8 VA: 0x10E22C8
	internal static string Format(string resourceFormat, object p1, object p2) { }
}


// Namespace: System.Xml.Linq
internal class BaseUriAnnotation // TypeDefIndex: 7453
{
	// Fields
	internal string baseUri; // 0x10

	// Methods

	// RVA: 0x10E2340 Offset: 0x10DE340 VA: 0x10E2340
	public void .ctor(string baseUri) { }
}


// Namespace: System.Xml.Linq
internal class LineInfoAnnotation // TypeDefIndex: 7454
{
	// Fields
	internal int lineNumber; // 0x10
	internal int linePosition; // 0x14

	// Methods

	// RVA: 0x10E2368 Offset: 0x10DE368 VA: 0x10E2368
	public void .ctor(int lineNumber, int linePosition) { }
}


// Namespace: System.Xml.Linq
internal class LineInfoEndElementAnnotation : LineInfoAnnotation // TypeDefIndex: 7455
{
	// Methods

	// RVA: 0x10E2394 Offset: 0x10DE394 VA: 0x10E2394
	public void .ctor(int lineNumber, int linePosition) { }
}


// Namespace: System.Xml.Linq
public class XAttribute : XObject // TypeDefIndex: 7456
{
	// Fields
	internal XAttribute next; // 0x20
	internal XName name; // 0x28
	internal string value; // 0x30

	// Properties
	public bool IsNamespaceDeclaration { get; }
	public XName Name { get; }
	public override XmlNodeType NodeType { get; }
	public string Value { get; }

	// Methods

	// RVA: 0x10E23C0 Offset: 0x10DE3C0 VA: 0x10E23C0
	public void .ctor(XName name, object value) { }

	// RVA: 0x10E2AE0 Offset: 0x10DEAE0 VA: 0x10E2AE0
	public void .ctor(XAttribute other) { }

	// RVA: 0x10E2B60 Offset: 0x10DEB60 VA: 0x10E2B60
	public bool get_IsNamespaceDeclaration() { }

	// RVA: 0x10E2C18 Offset: 0x10DEC18 VA: 0x10E2C18
	public XName get_Name() { }

	// RVA: 0x10E2C20 Offset: 0x10DEC20 VA: 0x10E2C20 Slot: 7
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x10E2C28 Offset: 0x10DEC28 VA: 0x10E2C28
	public string get_Value() { }

	// RVA: 0x10E2C30 Offset: 0x10DEC30 VA: 0x10E2C30 Slot: 3
	public override string ToString() { }

	// RVA: 0x10E300C Offset: 0x10DF00C VA: 0x10E300C
	internal string GetPrefixOfNamespace(XNamespace ns) { }

	// RVA: 0x10E28B0 Offset: 0x10DE8B0 VA: 0x10E28B0
	private static void ValidateAttribute(XName name, string value) { }
}


// Namespace: System.Xml.Linq
public class XCData : XText // TypeDefIndex: 7457
{
	// Properties
	public override XmlNodeType NodeType { get; }

	// Methods

	// RVA: 0x10E3358 Offset: 0x10DF358 VA: 0x10E3358
	public void .ctor(string value) { }

	// RVA: 0x10E33D0 Offset: 0x10DF3D0 VA: 0x10E33D0
	public void .ctor(XCData other) { }

	// RVA: 0x10E344C Offset: 0x10DF44C VA: 0x10E344C Slot: 7
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x10E3454 Offset: 0x10DF454 VA: 0x10E3454 Slot: 8
	public override void WriteTo(XmlWriter writer) { }

	// RVA: 0x10E34C4 Offset: 0x10DF4C4 VA: 0x10E34C4 Slot: 10
	internal override XNode CloneNode() { }
}


// Namespace: System.Xml.Linq
public class XComment : XNode // TypeDefIndex: 7458
{
	// Fields
	internal string value; // 0x28

	// Properties
	public override XmlNodeType NodeType { get; }
	public string Value { get; }

	// Methods

	// RVA: 0x10E351C Offset: 0x10DF51C VA: 0x10E351C
	public void .ctor(string value) { }

	// RVA: 0x10E3598 Offset: 0x10DF598 VA: 0x10E3598
	public void .ctor(XComment other) { }

	// RVA: 0x10E3610 Offset: 0x10DF610 VA: 0x10E3610 Slot: 7
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x10E3618 Offset: 0x10DF618 VA: 0x10E3618
	public string get_Value() { }

	// RVA: 0x10E3620 Offset: 0x10DF620 VA: 0x10E3620 Slot: 8
	public override void WriteTo(XmlWriter writer) { }

	// RVA: 0x10E3690 Offset: 0x10DF690 VA: 0x10E3690 Slot: 10
	internal override XNode CloneNode() { }
}


// Namespace: 
private sealed class XContainer.ContentReader // TypeDefIndex: 7459
{
	// Fields
	private readonly NamespaceCache _eCache; // 0x10
	private readonly NamespaceCache _aCache; // 0x20
	private readonly IXmlLineInfo _lineInfo; // 0x30
	private XContainer _currentContainer; // 0x38
	private string _baseUri; // 0x40

	// Methods

	// RVA: 0x10E4FE8 Offset: 0x10E0FE8 VA: 0x10E4FE8
	public void .ctor(XContainer rootContainer) { }

	// RVA: 0x10E5714 Offset: 0x10E1714 VA: 0x10E5714
	public void .ctor(XContainer rootContainer, XmlReader r, LoadOptions o) { }

	// RVA: 0x10E5010 Offset: 0x10E1010 VA: 0x10E5010
	public bool ReadContentFrom(XContainer rootContainer, XmlReader r) { }

	// RVA: 0x10E57BC Offset: 0x10E17BC VA: 0x10E57BC
	public bool ReadContentFrom(XContainer rootContainer, XmlReader r, LoadOptions o) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class XContainer.<Nodes>d__18 : IEnumerable<XNode>, IEnumerable, IEnumerator<XNode>, IDisposable, IEnumerator // TypeDefIndex: 7460
{
	// Fields
	private int <>1__state; // 0x10
	private XNode <>2__current; // 0x18
	private int <>l__initialThreadId; // 0x20
	public XContainer <>4__this; // 0x28
	private XNode <n>5__2; // 0x30

	// Properties
	private XNode System.Collections.Generic.IEnumerator<System.Xml.Linq.XNode>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: 0x10E4800 Offset: 0x10E0800 VA: 0x10E4800
	public void .ctor(int <>1__state) { }

	[DebuggerHidden]
	// RVA: 0x10E6BC8 Offset: 0x10E2BC8 VA: 0x10E6BC8 Slot: 7
	private void System.IDisposable.Dispose() { }

	// RVA: 0x10E6BCC Offset: 0x10E2BCC VA: 0x10E6BCC Slot: 8
	private bool MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x10E6C5C Offset: 0x10E2C5C VA: 0x10E6C5C Slot: 6
	private XNode System.Collections.Generic.IEnumerator<System.Xml.Linq.XNode>.get_Current() { }

	[DebuggerHidden]
	// RVA: 0x10E6C64 Offset: 0x10E2C64 VA: 0x10E6C64 Slot: 10
	private void System.Collections.IEnumerator.Reset() { }

	[DebuggerHidden]
	// RVA: 0x10E6C9C Offset: 0x10E2C9C VA: 0x10E6C9C Slot: 9
	private object System.Collections.IEnumerator.get_Current() { }

	[DebuggerHidden]
	// RVA: 0x10E6CA4 Offset: 0x10E2CA4 VA: 0x10E6CA4 Slot: 4
	private IEnumerator<XNode> System.Collections.Generic.IEnumerable<System.Xml.Linq.XNode>.GetEnumerator() { }

	[DebuggerHidden]
	// RVA: 0x10E6D40 Offset: 0x10E2D40 VA: 0x10E6D40 Slot: 5
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }
}


// Namespace: System.Xml.Linq
public abstract class XContainer : XNode // TypeDefIndex: 7461
{
	// Fields
	internal object content; // 0x28

	// Properties
	public XNode LastNode { get; }

	// Methods

	// RVA: 0x10E36E8 Offset: 0x10DF6E8 VA: 0x10E36E8
	internal void .ctor() { }

	// RVA: 0x10E36F0 Offset: 0x10DF6F0 VA: 0x10E36F0
	internal void .ctor(XContainer other) { }

	// RVA: 0x10E38E4 Offset: 0x10DF8E4 VA: 0x10E38E4
	public XNode get_LastNode() { }

	// RVA: 0x10E3A20 Offset: 0x10DFA20 VA: 0x10E3A20
	public void Add(object content) { }

	// RVA: 0x10E4790 Offset: 0x10E0790 VA: 0x10E4790
	public IEnumerable<XNode> Nodes() { }

	// RVA: 0x10E4834 Offset: 0x10E0834 VA: 0x10E4834 Slot: 11
	internal virtual void AddAttribute(XAttribute a) { }

	// RVA: 0x10E4838 Offset: 0x10E0838 VA: 0x10E4838 Slot: 12
	internal virtual void AddAttributeSkipNotify(XAttribute a) { }

	// RVA: 0x10E3F80 Offset: 0x10DFF80 VA: 0x10E3F80
	internal void AddContentSkipNotify(object content) { }

	// RVA: 0x10E444C Offset: 0x10E044C VA: 0x10E444C
	internal void AddNode(XNode n) { }

	// RVA: 0x10E483C Offset: 0x10E083C VA: 0x10E483C
	internal void AddNodeSkipNotify(XNode n) { }

	// RVA: 0x10E44CC Offset: 0x10E04CC VA: 0x10E44CC
	internal void AddString(string s) { }

	// RVA: 0x10E48BC Offset: 0x10E08BC VA: 0x10E48BC
	internal void AddStringSkipNotify(string s) { }

	// RVA: 0x10E4AB8 Offset: 0x10E0AB8 VA: 0x10E4AB8
	internal void AppendNode(XNode n) { }

	// RVA: 0x10E3824 Offset: 0x10DF824 VA: 0x10E3824
	internal void AppendNodeSkipNotify(XNode n) { }

	// RVA: 0x10E4E0C Offset: 0x10E0E0C VA: 0x10E4E0C Slot: 9
	internal override void AppendText(StringBuilder sb) { }

	// RVA: 0x10E4A0C Offset: 0x10E0A0C VA: 0x10E4A0C
	internal void ConvertTextToNode() { }

	// RVA: 0x10E2488 Offset: 0x10DE488 VA: 0x10E2488
	internal static string GetStringValue(object value) { }

	// RVA: 0x10E4EF4 Offset: 0x10E0EF4 VA: 0x10E4EF4
	internal void ReadContentFrom(XmlReader r) { }

	// RVA: 0x10E55EC Offset: 0x10E15EC VA: 0x10E55EC
	internal void ReadContentFrom(XmlReader r, LoadOptions o) { }

	// RVA: 0x10E6460 Offset: 0x10E2460 VA: 0x10E6460
	internal void RemoveNode(XNode n) { }

	// RVA: 0x10E65FC Offset: 0x10E25FC VA: 0x10E65FC Slot: 13
	internal virtual void ValidateNode(XNode node, XNode previous) { }

	// RVA: 0x10E6600 Offset: 0x10E2600 VA: 0x10E6600 Slot: 14
	internal virtual void ValidateString(string s) { }

	// RVA: 0x10E6604 Offset: 0x10E2604 VA: 0x10E6604
	internal void WriteContentTo(XmlWriter writer) { }
}


// Namespace: System.Xml.Linq
public class XDeclaration // TypeDefIndex: 7462
{
	// Fields
	private string _version; // 0x10
	private string _encoding; // 0x18
	private string _standalone; // 0x20

	// Properties
	public string Encoding { get; }
	public string Standalone { get; }
	public string Version { get; }

	// Methods

	// RVA: 0x10E6D44 Offset: 0x10E2D44 VA: 0x10E6D44
	public void .ctor(string version, string encoding, string standalone) { }

	// RVA: 0x10E6D80 Offset: 0x10E2D80 VA: 0x10E6D80
	public void .ctor(XDeclaration other) { }

	// RVA: 0x10E6E00 Offset: 0x10E2E00 VA: 0x10E6E00
	public string get_Encoding() { }

	// RVA: 0x10E6E08 Offset: 0x10E2E08 VA: 0x10E6E08
	public string get_Standalone() { }

	// RVA: 0x10E6E10 Offset: 0x10E2E10 VA: 0x10E6E10
	public string get_Version() { }

	// RVA: 0x10E6E18 Offset: 0x10E2E18 VA: 0x10E6E18 Slot: 3
	public override string ToString() { }
}


// Namespace: System.Xml.Linq
public class XDocument : XContainer // TypeDefIndex: 7463
{
	// Fields
	private XDeclaration _declaration; // 0x30

	// Properties
	public XDeclaration Declaration { get; set; }
	public override XmlNodeType NodeType { get; }
	public XElement Root { get; }

	// Methods

	// RVA: 0x10E7080 Offset: 0x10E3080 VA: 0x10E7080
	public void .ctor() { }

	// RVA: 0x10E7088 Offset: 0x10E3088 VA: 0x10E7088
	public void .ctor(XDocument other) { }

	// RVA: 0x10E7100 Offset: 0x10E3100 VA: 0x10E7100
	public XDeclaration get_Declaration() { }

	// RVA: 0x10E7108 Offset: 0x10E3108 VA: 0x10E7108
	public void set_Declaration(XDeclaration value) { }

	// RVA: 0x10E7110 Offset: 0x10E3110 VA: 0x10E7110 Slot: 7
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x10E7118 Offset: 0x10E3118 VA: 0x10E7118
	public XElement get_Root() { }

	// RVA: 0x10E7160 Offset: 0x10E3160 VA: 0x10E7160 Slot: 8
	public override void WriteTo(XmlWriter writer) { }

	// RVA: 0x10E728C Offset: 0x10E328C VA: 0x10E728C Slot: 11
	internal override void AddAttribute(XAttribute a) { }

	// RVA: 0x10E72D8 Offset: 0x10E32D8 VA: 0x10E72D8 Slot: 12
	internal override void AddAttributeSkipNotify(XAttribute a) { }

	// RVA: 0x10E7324 Offset: 0x10E3324 VA: 0x10E7324 Slot: 10
	internal override XNode CloneNode() { }

	// RVA: -1 Offset: -1
	private T GetFirstNode<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB1338 Offset: 0xBAD338 VA: 0xBB1338
	|-XDocument.GetFirstNode<object>
	*/

	// RVA: 0x10E737C Offset: 0x10E337C VA: 0x10E737C
	internal static bool IsWhitespace(string s) { }

	// RVA: 0x10E7410 Offset: 0x10E3410 VA: 0x10E7410 Slot: 13
	internal override void ValidateNode(XNode node, XNode previous) { }

	// RVA: 0x10E75B4 Offset: 0x10E35B4 VA: 0x10E75B4
	private void ValidateDocument(XNode previous, XmlNodeType allowBefore, XmlNodeType allowAfter) { }

	// RVA: 0x10E76D8 Offset: 0x10E36D8 VA: 0x10E76D8 Slot: 14
	internal override void ValidateString(string s) { }
}


// Namespace: System.Xml.Linq
public class XDocumentType : XNode // TypeDefIndex: 7464
{
	// Fields
	private string _name; // 0x28
	private string _publicId; // 0x30
	private string _systemId; // 0x38
	private string _internalSubset; // 0x40

	// Properties
	public string InternalSubset { get; }
	public string Name { get; }
	public override XmlNodeType NodeType { get; }
	public string PublicId { get; }
	public string SystemId { get; }

	// Methods

	// RVA: 0x10E690C Offset: 0x10E290C VA: 0x10E690C
	public void .ctor(string name, string publicId, string systemId, string internalSubset) { }

	// RVA: 0x10E7738 Offset: 0x10E3738 VA: 0x10E7738
	public void .ctor(XDocumentType other) { }

	// RVA: 0x10E77B8 Offset: 0x10E37B8 VA: 0x10E77B8
	public string get_InternalSubset() { }

	// RVA: 0x10E77C0 Offset: 0x10E37C0 VA: 0x10E77C0
	public string get_Name() { }

	// RVA: 0x10E77C8 Offset: 0x10E37C8 VA: 0x10E77C8 Slot: 7
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x10E77D0 Offset: 0x10E37D0 VA: 0x10E77D0
	public string get_PublicId() { }

	// RVA: 0x10E77D8 Offset: 0x10E37D8 VA: 0x10E77D8
	public string get_SystemId() { }

	// RVA: 0x10E77E0 Offset: 0x10E37E0 VA: 0x10E77E0 Slot: 8
	public override void WriteTo(XmlWriter writer) { }

	// RVA: 0x10E7850 Offset: 0x10E3850 VA: 0x10E7850 Slot: 10
	internal override XNode CloneNode() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class XElement.<GetAttributes>d__116 : IEnumerable<XAttribute>, IEnumerable, IEnumerator<XAttribute>, IDisposable, IEnumerator // TypeDefIndex: 7465
{
	// Fields
	private int <>1__state; // 0x10
	private XAttribute <>2__current; // 0x18
	private int <>l__initialThreadId; // 0x20
	public XElement <>4__this; // 0x28
	private XName name; // 0x30
	public XName <>3__name; // 0x38
	private XAttribute <a>5__2; // 0x40

	// Properties
	private XAttribute System.Collections.Generic.IEnumerator<System.Xml.Linq.XAttribute>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: 0x10E83A8 Offset: 0x10E43A8 VA: 0x10E83A8
	public void .ctor(int <>1__state) { }

	[DebuggerHidden]
	// RVA: 0x10E8C88 Offset: 0x10E4C88 VA: 0x10E8C88 Slot: 7
	private void System.IDisposable.Dispose() { }

	// RVA: 0x10E8C8C Offset: 0x10E4C8C VA: 0x10E8C8C Slot: 8
	private bool MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x10E8D34 Offset: 0x10E4D34 VA: 0x10E8D34 Slot: 6
	private XAttribute System.Collections.Generic.IEnumerator<System.Xml.Linq.XAttribute>.get_Current() { }

	[DebuggerHidden]
	// RVA: 0x10E8D3C Offset: 0x10E4D3C VA: 0x10E8D3C Slot: 10
	private void System.Collections.IEnumerator.Reset() { }

	[DebuggerHidden]
	// RVA: 0x10E8D74 Offset: 0x10E4D74 VA: 0x10E8D74 Slot: 9
	private object System.Collections.IEnumerator.get_Current() { }

	[DebuggerHidden]
	// RVA: 0x10E8D7C Offset: 0x10E4D7C VA: 0x10E8D7C Slot: 4
	private IEnumerator<XAttribute> System.Collections.Generic.IEnumerable<System.Xml.Linq.XAttribute>.GetEnumerator() { }

	[DebuggerHidden]
	// RVA: 0x10E8E20 Offset: 0x10E4E20 VA: 0x10E8E20 Slot: 5
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }
}


// Namespace: System.Xml.Linq
[XmlTypeConvertor("ConvertForAssignment")]
[XmlSchemaProvider(null, IsAny = True)]
public class XElement : XContainer, IXmlSerializable // TypeDefIndex: 7466
{
	// Fields
	internal XName name; // 0x30
	internal XAttribute lastAttr; // 0x38

	// Properties
	public bool HasAttributes { get; }
	public bool IsEmpty { get; }
	public XName Name { get; }
	public override XmlNodeType NodeType { get; }
	public string Value { get; }

	// Methods

	// RVA: 0x10E67E0 Offset: 0x10E27E0 VA: 0x10E67E0
	public void .ctor(XName name) { }

	// RVA: 0x10E78A8 Offset: 0x10E38A8 VA: 0x10E78A8
	public void .ctor(XElement other) { }

	// RVA: 0x10E4710 Offset: 0x10E0710 VA: 0x10E4710
	public void .ctor(XStreamingElement other) { }

	// RVA: 0x10E7968 Offset: 0x10E3968 VA: 0x10E7968
	public bool get_HasAttributes() { }

	// RVA: 0x10E7978 Offset: 0x10E3978 VA: 0x10E7978
	public bool get_IsEmpty() { }

	// RVA: 0x10E7988 Offset: 0x10E3988 VA: 0x10E7988
	public XName get_Name() { }

	// RVA: 0x10E7990 Offset: 0x10E3990 VA: 0x10E7990 Slot: 7
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x10E7998 Offset: 0x10E3998 VA: 0x10E7998
	public string get_Value() { }

	// RVA: 0x10E7A2C Offset: 0x10E3A2C VA: 0x10E7A2C
	public XAttribute Attribute(XName name) { }

	// RVA: 0x10E7A68 Offset: 0x10E3A68 VA: 0x10E7A68
	public IEnumerable<XAttribute> Attributes() { }

	// RVA: 0x10E3144 Offset: 0x10DF144 VA: 0x10E3144
	public string GetPrefixOfNamespace(XNamespace ns) { }

	// RVA: 0x10E7BF0 Offset: 0x10E3BF0 VA: 0x10E7BF0 Slot: 8
	public override void WriteTo(XmlWriter writer) { }

	// RVA: 0x10E7E14 Offset: 0x10E3E14 VA: 0x10E7E14 Slot: 15
	private XmlSchema System.Xml.Serialization.IXmlSerializable.GetSchema() { }

	// RVA: 0x10E7E1C Offset: 0x10E3E1C VA: 0x10E7E1C Slot: 16
	private void System.Xml.Serialization.IXmlSerializable.ReadXml(XmlReader reader) { }

	// RVA: 0x10E8020 Offset: 0x10E4020 VA: 0x10E8020 Slot: 17
	private void System.Xml.Serialization.IXmlSerializable.WriteXml(XmlWriter writer) { }

	// RVA: 0x10E802C Offset: 0x10E402C VA: 0x10E802C Slot: 11
	internal override void AddAttribute(XAttribute a) { }

	// RVA: 0x10E8248 Offset: 0x10E4248 VA: 0x10E8248 Slot: 12
	internal override void AddAttributeSkipNotify(XAttribute a) { }

	// RVA: 0x10E8114 Offset: 0x10E4114 VA: 0x10E8114
	internal void AppendAttribute(XAttribute a) { }

	// RVA: 0x10E6854 Offset: 0x10E2854 VA: 0x10E6854
	internal void AppendAttributeSkipNotify(XAttribute a) { }

	// RVA: 0x10E8350 Offset: 0x10E4350 VA: 0x10E8350 Slot: 10
	internal override XNode CloneNode() { }

	// RVA: 0x10E7A70 Offset: 0x10E3A70 VA: 0x10E7A70
	private IEnumerable<XAttribute> GetAttributes(XName name) { }

	// RVA: 0x10E7AFC Offset: 0x10E3AFC VA: 0x10E7AFC
	private string GetNamespaceOfPrefixInScope(string prefix, XElement outOfScope) { }

	// RVA: 0x10E7FA8 Offset: 0x10E3FA8 VA: 0x10E7FA8
	private void ReadElementFrom(XmlReader r, LoadOptions o) { }

	// RVA: 0x10E83DC Offset: 0x10E43DC VA: 0x10E83DC
	private void ReadElementFromImpl(XmlReader r, LoadOptions o) { }

	// RVA: 0x10E6A78 Offset: 0x10E2A78 VA: 0x10E6A78
	internal void SetEndElementLineInfo(int lineNumber, int linePosition) { }

	// RVA: 0x10E8B54 Offset: 0x10E4B54 VA: 0x10E8B54 Slot: 13
	internal override void ValidateNode(XNode node, XNode previous) { }
}


// Namespace: 
public sealed class XHashtable.ExtractKeyDelegate<TValue> : MulticastDelegate // TypeDefIndex: 7467
{
	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(object object, IntPtr method) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC16E84 Offset: 0xC12E84 VA: 0xC16E84
	|-XHashtable.ExtractKeyDelegate<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 12
	public virtual string Invoke(TValue value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC16F84 Offset: 0xC12F84 VA: 0xC16F84
	|-XHashtable.ExtractKeyDelegate<__Il2CppFullySharedGenericType>.Invoke
	*/
}


// Namespace: 
private struct XHashtable.XHashtableState.Entry<TValue> // TypeDefIndex: 7468
{
	// Fields
	public TValue Value; // 0x0
	public int HashCode; // 0x0
	public int Next; // 0x0
}


// Namespace: 
private sealed class XHashtable.XHashtableState<TValue> // TypeDefIndex: 7469
{
	// Fields
	private int[] _buckets; // 0x0
	private XHashtable.XHashtableState.Entry<TValue>[] _entries; // 0x0
	private int _numEntries; // 0x0
	private XHashtable.ExtractKeyDelegate<TValue> _extractKey; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(XHashtable.ExtractKeyDelegate<TValue> extractKey, int capacity) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBAEC4 Offset: 0xCB6EC4 VA: 0xCBAEC4
	|-XHashtable.XHashtableState<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	public XHashtable.XHashtableState<TValue> Resize() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBAF64 Offset: 0xCB6F64 VA: 0xCBAF64
	|-XHashtable.XHashtableState<__Il2CppFullySharedGenericType>.Resize
	*/

	// RVA: -1 Offset: -1
	public bool TryGetValue(string key, int index, int count, out TValue value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBB35C Offset: 0xCB735C VA: 0xCBB35C
	|-XHashtable.XHashtableState<__Il2CppFullySharedGenericType>.TryGetValue
	*/

	// RVA: -1 Offset: -1
	public bool TryAdd(TValue value, out TValue newValue) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBB4D4 Offset: 0xCB74D4 VA: 0xCBB4D4
	|-XHashtable.XHashtableState<__Il2CppFullySharedGenericType>.TryAdd
	*/

	// RVA: -1 Offset: -1
	private bool FindEntry(int hashCode, string key, int index, int count, ref int entryIndex) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBB874 Offset: 0xCB7874 VA: 0xCBB874
	|-XHashtable.XHashtableState<__Il2CppFullySharedGenericType>.FindEntry
	*/

	// RVA: -1 Offset: -1
	private static int ComputeHashCode(string key, int index, int count) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBBC38 Offset: 0xCB7C38 VA: 0xCBBC38
	|-XHashtable.XHashtableState<__Il2CppFullySharedGenericType>.ComputeHashCode
	*/
}


// Namespace: System.Xml.Linq
internal sealed class XHashtable<TValue> // TypeDefIndex: 7470
{
	// Fields
	private XHashtable.XHashtableState<TValue> _state; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(XHashtable.ExtractKeyDelegate<TValue> extractKey, int capacity) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBBCB4 Offset: 0xCB7CB4 VA: 0xCBBCB4
	|-XHashtable<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	public bool TryGetValue(string key, int index, int count, out TValue value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBBD24 Offset: 0xCB7D24 VA: 0xCBBD24
	|-XHashtable<__Il2CppFullySharedGenericType>.TryGetValue
	*/

	// RVA: -1 Offset: -1
	public TValue Add(TValue value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xCBBD48 Offset: 0xCB7D48 VA: 0xCBBD48
	|-XHashtable<__Il2CppFullySharedGenericType>.Add
	*/
}


// Namespace: System.Xml.Linq
internal struct NamespaceCache // TypeDefIndex: 7471
{
	// Fields
	private XNamespace _ns; // 0x0
	private string _namespaceName; // 0x8

	// Methods

	// RVA: 0x10E674C Offset: 0x10E274C VA: 0x10E674C
	public XNamespace Get(string namespaceName) { }
}


// Namespace: System.Xml.Linq
internal struct ElementWriter // TypeDefIndex: 7472
{
	// Fields
	private XmlWriter _writer; // 0x0
	private NamespaceResolver _resolver; // 0x8

	// Methods

	// RVA: 0x10E7C68 Offset: 0x10E3C68 VA: 0x10E7C68
	public void .ctor(XmlWriter writer) { }

	// RVA: 0x10E7C74 Offset: 0x10E3C74 VA: 0x10E7C74
	public void WriteElement(XElement e) { }

	// RVA: 0x10E9104 Offset: 0x10E5104 VA: 0x10E9104
	private string GetPrefixOfNamespace(XNamespace ns, bool allowDefaultNamespace) { }

	// RVA: 0x10E8E24 Offset: 0x10E4E24 VA: 0x10E8E24
	private void PushAncestors(XElement e) { }

	// RVA: 0x10E9374 Offset: 0x10E5374 VA: 0x10E9374
	private void PushElement(XElement e) { }

	// RVA: 0x10E90AC Offset: 0x10E50AC VA: 0x10E90AC
	private void WriteEndElement() { }

	// RVA: 0x10E90D8 Offset: 0x10E50D8 VA: 0x10E90D8
	private void WriteFullEndElement() { }

	// RVA: 0x10E8F4C Offset: 0x10E4F4C VA: 0x10E8F4C
	private void WriteStartElement(XElement e) { }
}


// Namespace: 
private class NamespaceResolver.NamespaceDeclaration // TypeDefIndex: 7473
{
	// Fields
	public string prefix; // 0x10
	public XNamespace ns; // 0x18
	public int scope; // 0x20
	public NamespaceResolver.NamespaceDeclaration prev; // 0x28

	// Methods

	// RVA: 0x10E9554 Offset: 0x10E5554 VA: 0x10E9554
	public void .ctor() { }
}


// Namespace: System.Xml.Linq
internal struct NamespaceResolver // TypeDefIndex: 7474
{
	// Fields
	private int _scope; // 0x0
	private NamespaceResolver.NamespaceDeclaration _declaration; // 0x8
	private NamespaceResolver.NamespaceDeclaration _rover; // 0x10

	// Methods

	// RVA: 0x10E9448 Offset: 0x10E5448 VA: 0x10E9448
	public void PushScope() { }

	// RVA: 0x10E94F4 Offset: 0x10E54F4 VA: 0x10E94F4
	public void PopScope() { }

	// RVA: 0x10E9458 Offset: 0x10E5458 VA: 0x10E9458
	public void Add(string prefix, XNamespace ns) { }

	// RVA: 0x10E92DC Offset: 0x10E52DC VA: 0x10E92DC
	public void AddFirst(string prefix, XNamespace ns) { }

	// RVA: 0x10E9200 Offset: 0x10E5200 VA: 0x10E9200
	public string GetPrefixOfNamespace(XNamespace ns, bool allowDefaultNamespace) { }
}


// Namespace: System.Xml.Linq
public enum XObjectChange // TypeDefIndex: 7475
{
	// Fields
	public int value__; // 0x0
	public const XObjectChange Add = 0;
	public const XObjectChange Remove = 1;
	public const XObjectChange Name = 2;
	public const XObjectChange Value = 3;
}


// Namespace: System.Xml.Linq
[Flags]
public enum LoadOptions // TypeDefIndex: 7476
{
	// Fields
	public int value__; // 0x0
	public const LoadOptions None = 0;
	public const LoadOptions PreserveWhitespace = 1;
	public const LoadOptions SetBaseUri = 2;
	public const LoadOptions SetLineInfo = 4;
}


// Namespace: System.Xml.Linq
[Flags]
public enum SaveOptions // TypeDefIndex: 7477
{
	// Fields
	public int value__; // 0x0
	public const SaveOptions None = 0;
	public const SaveOptions DisableFormatting = 1;
	public const SaveOptions OmitDuplicateNamespaces = 2;
}


// Namespace: System.Xml.Linq
[Serializable]
public sealed class XName : IEquatable<XName>, ISerializable // TypeDefIndex: 7478
{
	// Fields
	private XNamespace _ns; // 0x10
	private string _localName; // 0x18
	private int _hashCode; // 0x20

	// Properties
	public string LocalName { get; }
	public string NamespaceName { get; }

	// Methods

	// RVA: 0x10E955C Offset: 0x10E555C VA: 0x10E955C
	internal void .ctor(XNamespace ns, string localName) { }

	// RVA: 0x10E9604 Offset: 0x10E5604 VA: 0x10E9604
	public string get_LocalName() { }

	// RVA: 0x10E2BFC Offset: 0x10DEBFC VA: 0x10E2BFC
	public string get_NamespaceName() { }

	// RVA: 0x10E960C Offset: 0x10E560C VA: 0x10E960C Slot: 3
	public override string ToString() { }

	// RVA: 0x10E969C Offset: 0x10E569C VA: 0x10E969C
	public static XName Get(string expandedName) { }

	// RVA: 0x10E9C3C Offset: 0x10E5C3C VA: 0x10E9C3C
	public static XName Get(string localName, string namespaceName) { }

	// RVA: 0x10E9C60 Offset: 0x10E5C60 VA: 0x10E9C60
	public static XName op_Implicit(string expandedName) { }

	// RVA: 0x10E9C6C Offset: 0x10E5C6C VA: 0x10E9C6C Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x10E9C78 Offset: 0x10E5C78 VA: 0x10E9C78 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x10E247C Offset: 0x10DE47C VA: 0x10E247C
	public static bool op_Equality(XName left, XName right) { }

	// RVA: 0x10E9C80 Offset: 0x10E5C80 VA: 0x10E9C80 Slot: 4
	private bool System.IEquatable<System.Xml.Linq.XName>.Equals(XName other) { }

	// RVA: 0x10E9C8C Offset: 0x10E5C8C VA: 0x10E9C8C Slot: 5
	private void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x10E9CC4 Offset: 0x10E5CC4 VA: 0x10E9CC4
	internal void .ctor() { }
}


// Namespace: System.Xml.Linq
public sealed class XNamespace // TypeDefIndex: 7479
{
	// Fields
	private static XHashtable<WeakReference> s_namespaces; // 0x0
	private static WeakReference s_refNone; // 0x8
	private static WeakReference s_refXml; // 0x10
	private static WeakReference s_refXmlns; // 0x18
	private string _namespaceName; // 0x10
	private int _hashCode; // 0x18
	private XHashtable<XName> _names; // 0x20

	// Properties
	public static XNamespace None { get; }
	public static XNamespace Xml { get; }
	public static XNamespace Xmlns { get; }

	// Methods

	// RVA: 0x10E9CFC Offset: 0x10E5CFC VA: 0x10E9CFC
	internal void .ctor(string namespaceName) { }

	// RVA: 0x10E6780 Offset: 0x10E2780 VA: 0x10E6780
	public XName GetName(string localName) { }

	// RVA: 0x10E9DF4 Offset: 0x10E5DF4 VA: 0x10E9DF4 Slot: 3
	public override string ToString() { }

	// RVA: 0x10E9BD4 Offset: 0x10E5BD4 VA: 0x10E9BD4
	public static XNamespace get_None() { }

	// RVA: 0x10E9EDC Offset: 0x10E5EDC VA: 0x10E9EDC
	public static XNamespace get_Xml() { }

	// RVA: 0x10E9F3C Offset: 0x10E5F3C VA: 0x10E9F3C
	public static XNamespace get_Xmlns() { }

	// RVA: 0x10E88DC Offset: 0x10E48DC VA: 0x10E88DC
	public static XNamespace Get(string namespaceName) { }

	// RVA: 0x10E9F9C Offset: 0x10E5F9C VA: 0x10E9F9C
	public static XNamespace op_Implicit(string namespaceName) { }

	// RVA: 0x10E9FB0 Offset: 0x10E5FB0 VA: 0x10E9FB0 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x10E9FBC Offset: 0x10E5FBC VA: 0x10E9FBC Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x10E7AF0 Offset: 0x10E3AF0 VA: 0x10E7AF0
	public static bool op_Equality(XNamespace left, XNamespace right) { }

	// RVA: 0x10E9FC4 Offset: 0x10E5FC4 VA: 0x10E9FC4
	public static bool op_Inequality(XNamespace left, XNamespace right) { }

	// RVA: 0x10E9AC4 Offset: 0x10E5AC4 VA: 0x10E9AC4
	internal XName GetName(string localName, int index, int count) { }

	// RVA: 0x10E97E4 Offset: 0x10E57E4 VA: 0x10E97E4
	internal static XNamespace Get(string namespaceName, int index, int count) { }

	// RVA: 0x10E9FD0 Offset: 0x10E5FD0 VA: 0x10E9FD0
	private static string ExtractLocalName(XName n) { }

	// RVA: 0x10E9FE8 Offset: 0x10E5FE8 VA: 0x10E9FE8
	private static string ExtractNamespace(WeakReference r) { }

	// RVA: 0x10E9DFC Offset: 0x10E5DFC VA: 0x10E9DFC
	private static XNamespace EnsureNamespace(ref WeakReference refNmsp, string namespaceName) { }
}


// Namespace: System.Xml.Linq
public abstract class XNode : XObject // TypeDefIndex: 7480
{
	// Fields
	internal XNode next; // 0x20

	// Methods

	// RVA: 0x10E3590 Offset: 0x10DF590 VA: 0x10E3590
	internal void .ctor() { }

	// RVA: 0x10EA060 Offset: 0x10E6060 VA: 0x10EA060
	public void Remove() { }

	// RVA: 0x10EA0C0 Offset: 0x10E60C0 VA: 0x10EA0C0 Slot: 3
	public override string ToString() { }

	// RVA: -1 Offset: -1 Slot: 8
	public abstract void WriteTo(XmlWriter writer);

	// RVA: 0x10EA634 Offset: 0x10E6634 VA: 0x10EA634 Slot: 9
	internal virtual void AppendText(StringBuilder sb) { }

	// RVA: -1 Offset: -1 Slot: 10
	internal abstract XNode CloneNode();

	// RVA: 0x10EA1BC Offset: 0x10E61BC VA: 0x10EA1BC
	private string GetXmlString(SaveOptions o) { }
}


// Namespace: System.Xml.Linq
public abstract class XObject : IXmlLineInfo // TypeDefIndex: 7481
{
	// Fields
	internal XContainer parent; // 0x10
	internal object annotations; // 0x18

	// Properties
	public string BaseUri { get; }
	public abstract XmlNodeType NodeType { get; }
	public XElement Parent { get; }
	private int System.Xml.IXmlLineInfo.LineNumber { get; }
	private int System.Xml.IXmlLineInfo.LinePosition { get; }
	internal bool HasBaseUri { get; }

	// Methods

	// RVA: 0x10E2474 Offset: 0x10DE474 VA: 0x10E2474
	internal void .ctor() { }

	// RVA: 0x10E6B3C Offset: 0x10E2B3C VA: 0x10E6B3C
	public string get_BaseUri() { }

	// RVA: -1 Offset: -1 Slot: 7
	public abstract XmlNodeType get_NodeType();

	// RVA: 0x10EA638 Offset: 0x10E6638 VA: 0x10EA638
	public XElement get_Parent() { }

	// RVA: 0x10E893C Offset: 0x10E493C VA: 0x10E893C
	public void AddAnnotation(object annotation) { }

	// RVA: 0x10EA6B4 Offset: 0x10E66B4 VA: 0x10EA6B4
	private object AnnotationForSealedType(Type type) { }

	// RVA: -1 Offset: -1
	public T Annotation<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB143C Offset: 0xBAD43C VA: 0xBB143C
	|-XObject.Annotation<object>
	*/

	// RVA: 0x10EA800 Offset: 0x10E6800 VA: 0x10EA800 Slot: 4
	private bool System.Xml.IXmlLineInfo.HasLineInfo() { }

	// RVA: 0x10EA854 Offset: 0x10E6854 VA: 0x10EA854 Slot: 5
	private int System.Xml.IXmlLineInfo.get_LineNumber() { }

	// RVA: 0x10EA8A8 Offset: 0x10E68A8 VA: 0x10EA8A8 Slot: 6
	private int System.Xml.IXmlLineInfo.get_LinePosition() { }

	// RVA: 0x10E6AE8 Offset: 0x10E2AE8 VA: 0x10E6AE8
	internal bool get_HasBaseUri() { }

	// RVA: 0x10E4C74 Offset: 0x10E0C74 VA: 0x10E4C74
	internal bool NotifyChanged(object sender, XObjectChangeEventArgs e) { }

	// RVA: 0x10E4BCC Offset: 0x10E0BCC VA: 0x10E4BCC
	internal bool NotifyChanging(object sender, XObjectChangeEventArgs e) { }

	// RVA: 0x10E699C Offset: 0x10E299C VA: 0x10E699C
	internal void SetBaseUri(string baseUri) { }

	// RVA: 0x10E6A08 Offset: 0x10E2A08 VA: 0x10E6A08
	internal void SetLineInfo(int lineNumber, int linePosition) { }

	// RVA: 0x10E3F10 Offset: 0x10DFF10 VA: 0x10E3F10
	internal bool SkipNotify() { }

	// RVA: 0x10EA0DC Offset: 0x10E60DC VA: 0x10EA0DC
	internal SaveOptions GetSaveOptionsFromAnnotations() { }
}


// Namespace: System.Xml.Linq
internal class XObjectChangeAnnotation // TypeDefIndex: 7482
{
	// Fields
	internal EventHandler<XObjectChangeEventArgs> changing; // 0x10
	internal EventHandler<XObjectChangeEventArgs> changed; // 0x18
}


// Namespace: System.Xml.Linq
public class XObjectChangeEventArgs : EventArgs // TypeDefIndex: 7483
{
	// Fields
	private XObjectChange _objectChange; // 0x10
	public static readonly XObjectChangeEventArgs Add; // 0x0
	public static readonly XObjectChangeEventArgs Remove; // 0x8
	public static readonly XObjectChangeEventArgs Name; // 0x10
	public static readonly XObjectChangeEventArgs Value; // 0x18

	// Methods

	// RVA: 0x10EA8FC Offset: 0x10E68FC VA: 0x10EA8FC
	public void .ctor(XObjectChange objectChange) { }

	// RVA: 0x10EA968 Offset: 0x10E6968 VA: 0x10EA968
	private static void .cctor() { }
}


// Namespace: System.Xml.Linq
public class XProcessingInstruction : XNode // TypeDefIndex: 7484
{
	// Fields
	internal string target; // 0x28
	internal string data; // 0x30

	// Properties
	public string Data { get; }
	public override XmlNodeType NodeType { get; }
	public string Target { get; }

	// Methods

	// RVA: 0x10E688C Offset: 0x10E288C VA: 0x10E688C
	public void .ctor(string target, string data) { }

	// RVA: 0x10EAAF4 Offset: 0x10E6AF4 VA: 0x10EAAF4
	public void .ctor(XProcessingInstruction other) { }

	// RVA: 0x10EAB6C Offset: 0x10E6B6C VA: 0x10EAB6C
	public string get_Data() { }

	// RVA: 0x10EAB74 Offset: 0x10E6B74 VA: 0x10EAB74 Slot: 7
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x10EAB7C Offset: 0x10E6B7C VA: 0x10EAB7C
	public string get_Target() { }

	// RVA: 0x10EAB84 Offset: 0x10E6B84 VA: 0x10EAB84 Slot: 8
	public override void WriteTo(XmlWriter writer) { }

	// RVA: 0x10EABF4 Offset: 0x10E6BF4 VA: 0x10EABF4 Slot: 10
	internal override XNode CloneNode() { }

	// RVA: 0x10EAA1C Offset: 0x10E6A1C VA: 0x10EAA1C
	private static void ValidateName(string name) { }
}


// Namespace: System.Xml.Linq
public class XStreamingElement // TypeDefIndex: 7485
{
	// Fields
	internal XName name; // 0x10
	internal object content; // 0x18
}


// Namespace: System.Xml.Linq
public class XText : XNode // TypeDefIndex: 7486
{
	// Fields
	internal string text; // 0x28

	// Properties
	public override XmlNodeType NodeType { get; }
	public string Value { get; set; }

	// Methods

	// RVA: 0x10E335C Offset: 0x10DF35C VA: 0x10E335C
	public void .ctor(string value) { }

	// RVA: 0x10E33D4 Offset: 0x10DF3D4 VA: 0x10E33D4
	public void .ctor(XText other) { }

	// RVA: 0x10EAC4C Offset: 0x10E6C4C VA: 0x10EAC4C Slot: 7
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x10EAC54 Offset: 0x10E6C54 VA: 0x10EAC54
	public string get_Value() { }

	// RVA: 0x10E4D1C Offset: 0x10E0D1C VA: 0x10E4D1C
	public void set_Value(string value) { }

	// RVA: 0x10EAC5C Offset: 0x10E6C5C VA: 0x10EAC5C Slot: 8
	public override void WriteTo(XmlWriter writer) { }

	// RVA: 0x10EAD48 Offset: 0x10E6D48 VA: 0x10EAD48 Slot: 9
	internal override void AppendText(StringBuilder sb) { }

	// RVA: 0x10EAD6C Offset: 0x10E6D6C VA: 0x10EAD6C Slot: 10
	internal override XNode CloneNode() { }
}


// Namespace: System.Text
internal static class StringBuilderCache // TypeDefIndex: 7487
{
	// Fields
	[ThreadStatic]
	private static StringBuilder t_cachedInstance; // 0x80000000

	// Methods

	// RVA: 0x10E6F84 Offset: 0x10E2F84 VA: 0x10E6F84
	public static StringBuilder Acquire(int capacity = 16) { }

	// RVA: 0x10EADC4 Offset: 0x10E6DC4 VA: 0x10EADC4
	public static void Release(StringBuilder sb) { }

	// RVA: 0x10E7044 Offset: 0x10E3044 VA: 0x10E7044
	public static string GetStringAndRelease(StringBuilder sb) { }
}


// Namespace: Unity
internal sealed class ThrowStub : ObjectDisposedException // TypeDefIndex: 7488
{
	// Methods

	// RVA: 0x10EAE3C Offset: 0x10E6E3C VA: 0x10EAE3C
	public static void ThrowNotSupportedException() { }
}
