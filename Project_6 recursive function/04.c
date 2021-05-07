#include<stdio.h>
#include<stdlib.h>

int sum_odd(int);
int sum_even(int);

void main()
{
	int a, sum1_odd, sum1_even;

	printf("Enter an integer number:");
	scanf_s("%d", &a);

	sum1_odd = sum_odd(a);
	sum1_even = sum_even(a);

	printf("Sum of odd numbers: %d\n", sum1_odd);
	printf("Sum of even number: %d\n", sum1_even);
}

int sum_odd(int a)
{
	if (a % 2 == 0)
	{
		if ((a - 1) == 1)
			return 1;

		return sum_odd((a - 1) - 2) + (a - 1);
	}

	else if (a % 2 == 1)
	{
		if (a == 1)
			return 1;

		return sum_odd(a - 2) + a;
	}
}

int sum_even(int a)
{
	if (a % 2 == 0)
	{
		if (a == 0)
			return 0;

		if (a == 2)
			return 2;

		return sum_even(a - 2) + a;
	}

	else if (a % 2 == 1)
	{
		if ((a - 1) == 0)
			return 0;

		if ((a - 1) == 2)
			return 2;

		return sum_even((a - 1) - 2) + (a - 1);
	}
}