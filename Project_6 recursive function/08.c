#include<stdio.h>
#include<stdlib.h>

int fib(int);

void main()
{
	int a, fib1;

	printf("Enter an integer number:");
	scanf_s("%d", &a);

	fib1 = fib(a);

	printf("f(%d): %d", a, fib1);
}

int fib(int a)
{
	if (a == 0)
		return 0;

	else if (a == 1)
		return 1;

	else
		return fib(a - 1) + fib(a - 2);
}