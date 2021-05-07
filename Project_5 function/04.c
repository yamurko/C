#include<stdio.h>
#include<stdlib.h>

int factorial(int);

void main()
{
	int a, fact;

	printf("Enter an integer number:");
	scanf_s("%d", &a);

	fact = factorial(a);

	if (fact == -1)
		printf("ERROR!");
	else
		printf("Factorial of %d is %d.\n", a, fact);
}

int factorial(int a)
{
	int i,fact=1;

	if (a < 0)
		return -1;
	for ( i = 1; i <= a ; i++)
	{
		fact *= i;
	}

	return fact;
}