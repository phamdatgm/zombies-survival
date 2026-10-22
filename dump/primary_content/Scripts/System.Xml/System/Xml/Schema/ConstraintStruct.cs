using System.Collections;

namespace System.Xml.Schema;

internal sealed class ConstraintStruct
{
	internal CompiledIdentityConstraint constraint;

	internal SelectorActiveAxis axisSelector;

	internal ArrayList axisFields;

	internal Hashtable qualifiedTable;

	internal Hashtable keyrefTable;

	private int tableDim;

	internal ConstraintStruct(CompiledIdentityConstraint constraint)
	{
	}
}
