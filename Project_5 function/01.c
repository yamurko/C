#include<stdio.h>
#include<stdlib.h>
int factorial(int);

void main()
{
	int a, fact;

	printf("Enter a number:");
	scanf_s("%d", &a);

	fact = factorial(a);
	printf("factorial of %d: %d", a, fact);
}
int factorial(int a)
{
	int i, fact = 1;
	for ( i = 1; i<=a; i++)
	{
		fact = fact * i;
	}
	return fact;
}
