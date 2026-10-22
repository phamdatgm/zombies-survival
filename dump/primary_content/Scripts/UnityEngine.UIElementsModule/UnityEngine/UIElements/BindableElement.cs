namespace UnityEngine.UIElements;

public class BindableElement : VisualElement, IBindable
{
	public new class UxmlFactory : UxmlFactory<BindableElement, UxmlTraits>
	{
	}

	public new class UxmlTraits : VisualElement.UxmlTraits
	{
		private UxmlStringAttributeDescription m_PropertyPath;

		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}
	}

	public IBinding binding { get; }

	public string bindingPath { set; }
}
