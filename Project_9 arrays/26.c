#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 101
void array_func(int, int, int[]);

void main()
{
	int a[N], num, size;
	srand(time(NULL));

	printf("Enter size for array: ");
	scanf_s("%d", &size);

	if (size > N)
	{
		printf("Error! Size must be equal or small than 100.");
		exit(0);
	}

	printf("Enter an integer number: ");
	scanf_s("%d", &num);

	for (int i = 0; i < size; i++)
	{
		a[i] = rand() % 100;
	}

	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	array_func(size, num, a);
}

void array_func(int size, int num, int a[])
{
	int temp, count = 0;
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
		if (num < a[i])
			break;
		else
			count++;
	}
	printf("%d\n", count);

	for (int i = size; i >= count; i--)
	{
		a[i] = a[i - 1];
	}

	a[count] = num;

	for (int i = 0; i < size + 1; i++)
	{
		printf("%d ", a[i]);
	}
}