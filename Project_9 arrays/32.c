#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10
void generate_matrix(int[][N], int);
void print_matrix(int[][N], int);
void transpose_matrix(int[][N], int[][N], int);
int symmetric_matrix(int[][N], int[][N], int);

main()
{
	int a[N][N], t[N][N], size, check;

	printf("Enter size of array: ");
	scanf_s("%d", &size);

	generate_matrix(a, size);
	print_matrix(a, size);
	printf("\n");
	transpose_matrix(a, t, size);
	check = symmetric_matrix(a, t, size);

	if (check == 1)
		printf("Given matrix is symmetric matrix.");
	else
		printf("Given matrix is not symmetric matrix.");

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

int symmetric_matrix(int a[][N], int t[][N], int size)
{
	int flag;
	for (int i = 0; i < size; i++)
	{
		flag = 0;
		for (int j = 0; j < size; j++)
		{
			if (a[i][j] == t[i][j])
				flag = 1;
			else
			{
				flag = 0;
				break;
			}
		}
	}
	return flag;
	
}