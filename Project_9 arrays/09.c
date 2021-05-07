#include<stdio.h>
#include<stdlib.h>
#define N 20

main()
{
	int a[N][N], b[N][N], row_a, colm_a, row_b, colm_b, sum;

	do
	{
		system("cls");

		printf("Enter number of row for array a: ");
		scanf_s("%d", &row_a);
		printf("Enter number of column for array a: ");
		scanf_s("%d", &colm_a);
		printf("\n");
		printf("Enter number of row for array b: ");
		scanf_s("%d", &row_b);
		printf("Enter number of column for array b: ");
		scanf_s("%d", &colm_b);

		if (row_a != row_b || colm_a != colm_b)
		{
			printf("\nEnter column a and b and row a and b the same!");
			getch();
		}
		else
			break;

	} while (row_a != row_b || colm_a != colm_b);

	printf("\n");

	for (int i = 0; i < row_a; i++)
	{
		for (int j = 0; j < colm_a; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	printf("\n");

	for (int i = 0; i < row_b; i++)
	{
		for (int j = 0; j < colm_b; j++)
		{
			scanf_s("%d", &b[i][j]);
		}
	}
	printf("\n");

	printf("Array a:\n");
	for (int i = 0; i < row_a; i++)
	{
		for (int j = 0; j < colm_a; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	printf("Array b:\n");
	for (int i = 0; i < row_b; i++)
	{
		for (int j = 0; j < colm_b; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	printf("Sum of array a and array b:\n");
	for (int i = 0; i < row_b; i++)
	{
		sum = 0;
		for (int j = 0; j < colm_b; j++)
		{
			sum = a[i][j] + b[i][j];
			printf("%d ", sum);
		}
		printf("\n");
	}
}