#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int a[5], i, j;
	srand(time(NULL));

	printf("Enter value for array: ");

	for ( i = 0; i < 5; i++)
	{
		a[i] = rand() % 10 + 1;
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < a[i]; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}