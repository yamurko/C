#include<stdio.h>
#include<stdlib.h>

int sum(int);

void main()
{
	int a, sum1;

	printf("Enter an integer number:");
	scanf_s("%d", &a);

	sum1 = sum(a);
	printf("Sum: %d", sum1);
	
}

int sum(int a)
{
	if (a == 1)
		return 1;

	return sum(a - 1) + a;
}