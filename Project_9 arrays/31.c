#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10
void generate_matrix(int[][N], int);
void print_matrix(int[][N], int);
void transpose_matrix(int[][N], int[][N], int);

main()
{
	int a[N][N], t[N][N], size;
	
	printf("Enter size of array: ");
	scanf_s("%d", &size);

	generate_matrix(a, size);
	print_matrix(a, size);
	printf("\n");
	transpose_matrix(a, t, size);

	
}

void generate_matrix(int a[][N], int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			a[i][j] = rand() % 10;
		}
	}
}

void print_matrix(int a[N][N], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

void transpose_matrix(int a[N][N], int t[N][N], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			t[i][j] = a[j][i];
		}
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%d ", t[i][j]);
		}
		printf("\n");
	}
}