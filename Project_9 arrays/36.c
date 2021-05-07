#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 11
#define M 11
void rand_array(int[][M], int, int);
void cell_weights(int[][M], int, int);

void main()
{
	int a[N][M], row, colm;

	printf("Enter number of row: ");
	scanf_s("%d", &row);

	printf("Enter number of column: ");
	scanf_s("%d", &colm);

	if (row > 10 || colm > 10)
	{
		printf("\nError! Enter row and column from 1 to 10.\n\n");
		system("pause");
		exit(0);
	}

	rand_array(a, row, colm);

	printf("\n");

	cell_weights(a, row, colm);
	printf("\n");
}

void rand_array(int a[][M], int row, int colm)
{
	srand(time(0));

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colm; j++)
		{
			a[i][j] = rand() % 10;
		}
	}
}

void cell_weights(int a[][M], int row, int colm)
{
	int p[N][M], k, p1[N], l = 0;

	for (int j = 0; j < colm; j++)
	{
		p[0][j] = a[0][j];
	}

	for (int i = 1; i < row; i++)
	{
		for (int j = 0; j < colm; j++)
		{
			k = j;

			if (j > 0 && p[i - 1][j - 1] < p[i - 1][k])
				k = j - 1;

			if (j + 1 < colm && p[i - 1][j + 1] < p[i - 1][k])
				k = j + 1;

			p[i][j] = p[i - 1][k] + a[i][j];

		}
	}

	for (int j = 1; j < colm; j++)
	{
		if (l == colm - 1)
		{
			if (p[row - 1][j] < p[row - 1][l - 1])
				l = j - 1;
		}

		else
			if (p[row - 1][j] < p[row - 1][l])
				l = j;
	}

	int in = row - 1;

	if (l == colm)
		p1[in] = l - 1;
	else
		p1[in] = l;

	while (in == row - 1 || in > 0)
	{

		if (l > 0 && (p[in - 1][l - 1] + a[in][l] == p[in][l]))
			l -= 1;

		else if (l + 1 < colm)
		{
			if (p[in - 1][l + 1] + a[in][l] == p[in][l])
				l += 1;
		}

		in--;

		if (in != -1)
			p1[in] = l;

	}

	printf("\n");

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colm; j++)
		{
			if (j == p1[i])
				printf("[%d]	", a[i][j]);

			else
				printf("%d	", a[i][j]);
		}
		printf("\n\n");
	}
}
