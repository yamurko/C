#include<stdio.h>
#include<stdlib.h>

int fib(int);

void main()
{
	int a, fib1, sum = 0, i;

	printf("Enter an integer number:");
	scanf_s("%d", &a);

	for ( i = 0; i <= a; i++)
	{
		printf("%d ", fib(i));
		sum += fib(i);
	}

	printf("\nSum of fibonacci up to %d: %d\n",a, sum);

	fib1 = fib(a);
	printf("f(%d): %d\n",a, fib1);
}

int fib(int a)
{
	int i, first = 0, second = 1, f;

	if (a == 0)
		return 0;

	if (a == 1 || a == 2)
		return 1;

	for ( i = 0; i < a - 1; i++)
	{
		f = first + second;
		first = second;
		second = f;
	}

	return f;
}