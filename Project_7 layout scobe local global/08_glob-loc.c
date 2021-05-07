#include<stdio.h>
#include<stdlib.h>
int sum;

void sum_1(int n)
{
	int i;
	sum = 0;

	for (i = 0; i < n; i++)
		sum += i;

}

void main()
{
	int sum1, sum2;

	sum_1(10);
	sum1 = sum;

	sum_1(20);
	sum2 = sum;

	printf("Sum1: %d  Sum2: %d\n", sum1, sum2);
}

