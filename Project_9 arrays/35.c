#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define N 10

main()
{
	int a[N][N], size, n, k;
	srand(time(NULL));

	printf("Enter size of array: ");
	scanf_s("%d", &size);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			a[i][j] = rand() % 10;
		}
	}
	printf("\n");
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	k = size;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == j)
			{
				n = a[i][j];
				a[i][j] = a[i][k - 1];
				a[i][k - 1] = n;
			}
		}
		k--;
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}