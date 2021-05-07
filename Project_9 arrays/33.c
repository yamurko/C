#include<stdio.h>
#include<stdlib.h>
void print_matrix(int[][3]);
void transpose_matrix(int[][3], int[][3]);
int symmetric_matrix(int[][3], int[][3]);

main()
{
	int a[3][3] = {{ 1,2,3 }, { 2,4,5 }, { 3,5,8 }}, t[3][3], check;


	print_matrix(a);
	printf("\n");
	transpose_matrix(a, t);
	check = symmetric_matrix(a, t);

	if (check == 1)
		printf("Given matrix is symmetric matrix.");
	else
		printf("Given matrix is not symmetric matrix.");

}
void print_matrix(int a[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

void transpose_matrix(int a[3][3], int t[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			t[i][j] = a[j][i];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", t[i][j]);
		}
		printf("\n");
	}
}

int symmetric_matrix(int a[][3], int t[][3])
{
	int flag;
	for (int i = 0; i < 3; i++)
	{
		flag = 0;
		for (int j = 0; j < 3; j++)
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