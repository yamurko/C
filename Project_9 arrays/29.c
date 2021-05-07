#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10

main()
{
	int a[N][N], sum_row, sum_colm, size;
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

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 0; i < size; i++)
	{
		sum_row = 0;
		for (int j = 0; j < size; j++)
		{
			sum_row += a[i][j];
		}
		printf("Sum of row %d: %d\n", i + 1, sum_row);
	}
	printf("\n");

	for (int j = 0; j < size; j++)
	{
		sum_colm = 0;
		for (int i = 0; i < size; i++)
		{
			sum_colm += a[i][j];
		}
		printf("Sum of column %d: %d\n", j + 1, sum_colm);
	}
}