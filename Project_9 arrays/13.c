#include<stdio.h>
#include<stdlib.h>
#define N 20
void max_(int[], int);

void main()
{
	int n, A[N], max;

	printf("Enter n: ");
	scanf_s("%d", &n);

	printf("Enter index value: ");

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &A[i]);
	}

	max_(A, n);


}

void max_(int A[], int n)
{
	int max, count = 0;

	for (int i = 0; i < n; i++)
	{
		if (count == 0)
			max = A[i];

		if (max < A[i])
			max = A[i];

		count++;
	}
	printf("\nMax: %d\n", max);
}