//11_func.c
#include "11_func.h"
int Sum(int a, int b)
{
	return a + b;
}
int Factorial(int n)
{
	if (n <= 1)
		return 1;
	return n * Factorial(n - 1);
}