#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX_SIZE 100
#define MAX_SIZE_2 MAX_SIZE*2

void main()
{
	int A[MAX_SIZE], B[MAX_SIZE], C[MAX_SIZE_2], N, i, upper, lower, min, max, sum_A = 0, sum_B = 0, count, key, flag_A, flag_B;
	float mean_A, mean_B;

	srand(time(NULL));

	do
	{
		system("cls");
		printf("Enter integer number for element of array: ");
		scanf_s("%d", &N);

		if (N > 100 || N < 0)
		{
			printf("ERROR! Enter number for 1 to 100!");
			getch();
		}
		else
			break;

	} while (N > 100 || N < 0);

	printf("Enter lower limit: ");
	scanf_s("%d", &lower);

	printf("Enter upper limit: ");
	scanf_s("%d", &upper);

	for (i = 0; i < N; i++)
	{
		A[i] = (rand() % (upper - lower + 1)) + lower;
	}
	printf("\nA dizisi: ");
	for (i = 0; i < N; i++)
	{
		printf(" %d ", A[i]);
		sum_A += A[i];
	}
	mean_A = (float)sum_A / N;

	for (i = 0; i < N; i++)
	{
		B[i] = (rand() % (upper - lower + 1)) + lower;
	}
	printf("\nB dizisi: ");
	for (i = 0; i < N; i++)
	{
		printf(" %d ", B[i]);
		sum_B += B[i];
	}
	mean_B = (float)sum_B / N;

	printf("\n\n");
	printf("This number(s) is/are greater than mean(%.2f) in A Array: ", mean_A);
	for (i = 0; i < N; i++)
	{
		if (A[i] > mean_A)
			printf("%d\t", A[i]);
	}

	printf("\n\n");
	printf("This number(s) is/are smaller than mean(%.2f) in B Array: ", mean_B);
	for (i = 0; i < N; i++)
	{
		if (B[i] < mean_B)
			printf("%d\t", B[i]);
	}

	printf("\n\n");
	count = 0;
	for (i = 0; i < N; i++)
	{
		if (count == 0)
		{
			min = A[i];
			max = A[i];
		}
		else
		{
			if (max < A[i])
				max = A[i];

			if (min > A[i])
				min = A[i];
		}
		count++;
	}
	printf("Max of A array: %d and min of A array: %d", max, min);

	printf("\n");
	count = 0;
	for (i = 0; i < N; i++)
	{
		if (count == 0)
		{
			min = B[i];
			max = B[i];
		}
		else
		{
			if (max < B[i])
				max = B[i];

			if (min > B[i])
				min = B[i];
		}
		count++;
	}
	printf("Max of B array: %d and min of B array: %d", max, min);

	printf("\n\n");

	while (1)
	{
		flag_A = -1;
		flag_B = -1;

		printf("Enter number and enter -1 to exit: ");
		scanf_s("%d", &key);

		if (key == -1)
			break;

		else
		{
			for (i = 0; i < N; i++)
			{
				if (key == A[i])
					flag_A = i;

				if (key == B[i])
					flag_B = i;
			}

			if (flag_A == -1)
				printf("%d is not found in A array.\n", key);
			else
				printf("%d is in index %d in A array.\n", key, flag_A);

			if (flag_B == -1)
				printf("%d is not found in B array.\n", key);
			else
				printf("%d is in index %d in B array.\n", key, flag_B);
		}
	}

	printf("\n\n");

	for (i = 0; i < N * 2; i++)
	{
		if (i % 2 == 0)
			C[i] = A[i / 2];
		else
			C[i] = B[(i - 1) / 2];
	}

	printf("C dizisi: ");
	for (i = 0; i < N * 2; i++)
	{
		printf(" %d ", C[i]);
	}

	printf("\n\n");
}