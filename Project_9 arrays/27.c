#include<stdio.h>
#include<stdlib.h>
#define N 4
#define M 6
int first_row_min(int[][M]);
int first_row_min2(int[][M]);
void bubble_sort(int[][M]);

void main()
{
	int a[N][M] = { {9,8,0,3,0,1},{8,4,2,5,3,7},{9,6,6,0,8,4},{1,9,4,2,6,7} }, row, colm, i, j, min, min1 = 0, count = 0;

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	min = first_row_min(a);
	printf("min: %d\n", min);

	min1 = first_row_min2(a);
	if (min1 != -1)
		printf("min1: %d\n", min1);
	printf("\n");
	bubble_sort(a);

}

int first_row_min(int a[][M])
{
	int min_first = a[0][0];
	for (int j = 0; j < M; j++)
	{
		if (min_first > a[0][j])
			min_first = a[0][j];
	}

	return min_first;
}

int first_row_min2(int a[][M])
{
	int min2 = -1;
	for (int j = 0; j < M; j++)
	{
		if (first_row_min(a) == a[0][j])
			min2 = a[0][j];
	}
	return min2;
}

void bubble_sort(int a[][M])
{
	int temp, k, count = 0;
	for (int i = 0; i < N; i++)
	{
		k = 0;
		while(k < M)
		for (int j = 0; j < M - 1; j++)
		{
			if (a[i][j] > a[i][j + 1])
			{
				temp = a[i][j];
				a[i][j] = a[i][j + 1];
				a[i][j + 1] = temp;
			}
			count++;
			if (count % M - 1 == 0)
				k++;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
