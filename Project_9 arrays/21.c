#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10
void bubble_sort(int, int[]);
void odd_even(int, int[]);

void main()
{
	int a[N], size;
	srand(time(NULL));
	printf("Enter size for array: ");
	scanf_s("%d", &size);

	for (int i = 0; i < size; i++)
	{
		a[i] = rand() % 101;
	}
	printf("\n\n");
	printf("Rastgele sayilar:\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n\n");

	printf("Sirali dizi:\n");
	bubble_sort(size, a);
	printf("\n");
	printf("Once tek sayilar, sonra cift sayilar sirali dizi:\n");
	odd_even(size, a);
	printf("\n");
}

void bubble_sort(int size, int a[N])
{
	int temp;
	for (int i = 0; i < size; i++)
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

	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void odd_even(int size, int a[N])
{
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
}
