#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 50
void perfect(int n[], int);

void main()
{
	int n[N], a1;
	srand(time(NULL));
	printf("Enter number of index: ");
	scanf_s("%d", &a1);

	for (int i = 0; i < a1; i++)
	{
		n[i] = rand() % 50;
	}

	
	perfect(n, a1);
	
}

void perfect(int n[], int a)
{
	int sum;
	int flag;
	for (int i = 0; i < a; i++)
	{
		flag = 0;
		sum = 0;
		for (int j = 1; j < n[i]; j++)
		{
			if (n[i] % j == 0)
				sum += j;
		}
		if (sum == n[i])
			flag = 1;
		if (n[i] == 0)
			flag = 0;
		if (flag == 1)
			printf("%d\n", n[i]);
			
	}
}