#include<stdio.h>
#include<stdlib.h>
#define N 10

main()
{
	int a[N], num, pos, size;
	srand(time(NULL));
	printf("Enter size for array: ");
	scanf_s("%d", &size);

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

	for (int i = 0; i < pos-1; i++)
	{
		printf("%d ", a[i]);
	}

	a[pos - 1] = num;
	printf("%d ", a[pos - 1]);
	for (int i = pos; i < size; i++)
	{
		printf("%d ", a[i]);
	}

}