#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define N 10

main()
{
	int a[N][N], sum1 = 0, sum2 = 0, size;
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
			printf("%d ",a[i][j]);
			if (i == j)
				sum1 += a[i][j];
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < size; i++)
	{
		for (int j = size; j >= 0; j--)
		{
			if (i + j == size - 1)
				sum2 += a[i][j];
		}
	}

	printf("Left cross sum: %d\n", sum1);
	printf("Right cross sum: %d\n", sum2);
}