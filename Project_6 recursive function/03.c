#include<stdio.h>
#include<stdlib.h>

int fib(int);

void main()
{
	int a, fib1;

	printf("Enter an integer number:");
	scanf_s("%d", &a);

	fib1 = fib(a);

	printf("Fibonnaci %d: %d", a, fib1);
}

int fib(int a)
{
	if (a == 0)
		return 0;

	if (a == 1)
		return 1;

	return fib(a - 1) + fib(a - 2);
}