#include<stdio.h>
#include<stdlib.h>
#define N 100

main()
{
	int a[N], num, pos, size, temp;
	srand(time(NULL));
	printf("Enter size for array: ");
	scanf_s("%d", &size);

	if (size > 100)
	{
		printf("Error! Size must be equal or smaller than 100.\n");
		exit(0);
	}

	printf("Enter an integer number: ");
	scanf_s("%d", &num);

	printf("Enter position for entered number: ");
	scanf_s("%d", &pos);

	for (int i = 0; i < size; i++)
	{
		a[i] = rand() % 100;
	}
	printf("\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	for (int i = size; i <= pos; i--)
	{
		a[i] = a[i - 1];
	}
	a[pos - 1] = num;
	printf("\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
}