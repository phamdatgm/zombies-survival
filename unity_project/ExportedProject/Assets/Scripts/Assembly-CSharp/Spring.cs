using System;

[Serializable]
public abstract class Spring<T>
{
	public float force;

	public float damping;

	public bool enabled;

	[NonSerialized]
	public T desValue;

	protected T _currentVel;

	protected T impulseSum;

	private bool externalVelUsed;

	private float _dampingRatio;

	private bool isInit;

	private T zero;

	private T delta;

	private T acceleration;

	public T currentVel
	{
		set
		{
		}
	}

	public float dampingRatio
	{
		set
		{
		}
	}

	public void KOGLNCIFCJK(SpringParams GCAIEKNPOIC)
	{
	}

	protected void ABKCOINIEGL()
	{
	}

	public void LGLBDMEEIJC(T PKPMGEFLMLG)
	{
	}

	protected abstract T DLEHLHGOOKB(T INHGHFGNDIO, T CEECPPMLPAE);

	protected virtual T JMBHHPLAMCB()
	{
		return default;
	}

	protected virtual T KMLFNMGOELP(T KFCCMCBGKEA, T MOEHNCAFHCO)
	{
		return default;
	}

	public T JGMENGJBLAO(T MOEHNCAFHCO)
	{
		return default;
	}

	protected abstract T CFAJGEJFJDD(T INHGHFGNDIO, float CEECPPMLPAE);

	protected abstract T JLDDFKPHBAB(T INHGHFGNDIO, T CEECPPMLPAE);
}
