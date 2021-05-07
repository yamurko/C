#include<stdio.h>
#include<stdlib.h>

int sum_odd(int, int);
int sum_even(int, int);

void main()
{
	int a, b, sum1_odd, sum1_even;

	printf("Enter lower and upper numbers:");
	scanf_s("%d %d", &a, &b);

	sum1_odd = sum_odd(a, b);
	printf("\nSum of odd numbers: %d\n", sum1_odd);

	sum1_even = sum_even(a, b);
	printf("Sum of even numbers: %d\n", sum1_even);

}

int sum_odd(int a, int b)
{
	if (a > b)
		return 0;

	if (a % 2 == 1 && b % 2 == 1)
		return sum_odd(a + 2, b) + a;

	else if (a % 2 == 0 && b % 2 == 1)
		return sum_odd(((a + 1) + 2), b) + (a + 1);

	else if (a % 2 == 1 && b % 2 == 0)
		return sum_odd(a + 2, (b - 1)) + a;

	else
		return sum_odd(((a + 1) + 2), (b - 1)) + (a + 1);

}

int sum_even(int a, int b)
{
	if (a > b)
		return 0;

	if (a % 2 == 1 && b % 2 == 1)
		return sum_even(((a + 1) + 2), b - 1) + a + 1;

	else if (a % 2 == 0 && b % 2 == 1)
		return sum_even(a + 2, b - 1) + a;

	else if (a % 2 == 1 && b % 2 == 0)
		return sum_even(((a + 1) + 2), b) + (a + 1);

	else
		return sum_even(a + 2, b) + a;
	
}