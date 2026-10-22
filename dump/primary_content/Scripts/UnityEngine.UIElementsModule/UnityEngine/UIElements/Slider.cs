namespace UnityEngine.UIElements;

public class Slider : BaseSlider<float>
{
	public new class UxmlFactory : UxmlFactory<Slider, UxmlTraits>
	{
	}

	public new class UxmlTraits : BaseSlider<float>.UxmlTraits
	{
		private UxmlFloatAttributeDescription m_LowValue;

		private UxmlFloatAttributeDescription m_HighValue;

		private UxmlFloatAttributeDescription m_PageSize;

		private UxmlBoolAttributeDescription m_ShowInputField;

		private UxmlEnumAttributeDescription<SliderDirection> m_Direction;

		private UxmlBoolAttributeDescription m_Inverted;

		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}
	}

	public new static readonly string ussClassName;

	public new static readonly string labelUssClassName;

	public new static readonly string inputUssClassName;

	public Slider()
		: base((string)null, 0f, 0f, SliderDirection.Horizontal, 0f)
	{
	}

	public Slider(float start, float end, SliderDirection direction = SliderDirection.Horizontal, float pageSize = 0f)
		: base((string)null, 0f, 0f, SliderDirection.Horizontal, 0f)
	{
	}

	public Slider(string label, float start = 0f, float end = 10f, SliderDirection direction = SliderDirection.Horizontal, float pageSize = 0f)
		: base((string)null, 0f, 0f, SliderDirection.Horizontal, 0f)
	{
	}

	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, float startValue)
	{
	}

	internal override float SliderLerpUnclamped(float a, float b, float interpolant)
	{
		return 0f;
	}

	internal override float SliderNormalizeValue(float currentValue, float lowerValue, float higherValue)
	{
		return 0f;
	}

	internal override float ParseStringToValue(string previousValue, string newValue)
	{
		return 0f;
	}

	internal override void ComputeValueFromKey(SliderKey sliderKey, bool isShift)
	{
	}
}
