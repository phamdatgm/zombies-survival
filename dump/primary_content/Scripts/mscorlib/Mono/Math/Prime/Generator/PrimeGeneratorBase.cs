namespace Mono.Math.Prime.Generator;

internal abstract class PrimeGeneratorBase
{
	public virtual PrimalityTest PrimalityTest => null;

	public abstract BigInteger GenerateNewPrime(int bits);
}
