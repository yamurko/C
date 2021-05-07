#include<stdio.h>
#include<stdio.h>
#include<time.h>
#define N 50

void array_ev_od(int[], int);
void array_pri(int[], int);


void main()
{
	int A[N], n, flag;
	srand(time(NULL));
	printf("Enter n:");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 100;
	}

	array_ev_od(A, n);
	printf("\n");

	array_pri(A, n);
}

void array_ev_od(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (A[i] % 2 == 0)
			printf("\nEven number: %d", A[i]);
		else
			printf("\nOdd number: %d", A[i]);
	}
}

void array_pri(int A[], int n)
{
	int flag;
	for (int i = 0; i < n; i++)
	{

		flag = 0;
		if (A[i] == 0 || A[i] == 1)
			flag = 1;

		for (int j = 2; j < A[i]; j++)
		{
			if (A[i] % j == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			printf("%d\n", A[i]);
	}
}
