#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10

main()
{
	int a[N][N], t[N][N], size;
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
		for (int j = 0; j < size; j++)
		{
			t[i][j] = a[j][i];
		}
	}
	printf("\n");

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%d ", t[i][j]);
		}
		printf("\n");
	}
}