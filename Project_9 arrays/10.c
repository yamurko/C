#include<stdio.h>
#include<stdlib.h>
#define N 50
int sum(int[], int);

void main()
{
	int n, a[N], sum1;

	printf("Enter n: ");
	scanf_s("%d", &n);
	printf("Enter index value for a array: ");
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}

	sum1 = sum(a[n], n);
	printf("Sum: %d", sum1);
}

int sum(int a[], int n)
{
	int sum1 = 0;

	for (int i = 0; i < n; i++)
	{
		sum1 += a[i];
	}
	return sum1;
}