int fibonacciNumber(int n)
{

	if (n <= 1)
	{
		return n;
	}
	
	return fibonacciNumber(n - 1) + fibonacciNumber(n - 2);
}
