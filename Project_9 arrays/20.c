#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10

main()
{
	int a[N], size, temp;
	srand(time(NULL));
	printf("Enter size for array: ");
	scanf_s("%d", &size);

	for (int i = 0; i < size; i++)
	{
		a[i] = rand() % 101;
	}
	printf("\n");
	printf("Rastgele sayilar:\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	for (int i = 0; i < size ; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	printf("\n");
	printf("Sirali dizi:\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n\n");
	printf("Once tek sayilar, sonra cift sayilar sirali dizi:\n");
	for (int i = 0; i < size; i++)
	{
		if (a[i] % 2 == 1)
			printf("%d ", a[i]);
	}

	for (int i = 0; i < size; i++)
	{
		if (a[i] % 2 == 0)
			printf("%d ", a[i]);
	}
	printf("\n");


}