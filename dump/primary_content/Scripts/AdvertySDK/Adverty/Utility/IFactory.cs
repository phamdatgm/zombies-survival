namespace Adverty.Utility;

public interface IFactory<T>
{
	T Create();
}
public interface IFactory<T, W>
{
	T Create(W input);
}
public interface IFactory<T, W, U>
{
	T Create(W a, U b);
}
public interface IFactory<T, W, U, X>
{
	T Create(W a, U b, X c);
}
