#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 20
#define grand_prize 10000
#define small_prize 2500
#define amorti 1

void main()
{
	int a[N], bp, sp, amo, cost, flag = 0;
	int ticket[N];
	srand(time(NULL));

	for (int i = 0; i < 6; i++)
	{
		a[i] = rand() % 10;
	}

	printf("Enter cost your lottery ticket: ");
	scanf_s("%d", &cost);

	bp = grand_prize * cost;
	sp = small_prize * cost;
	amo = amorti * cost;

	printf("Enter numbers of your lottery ticket: ");
	for (int i = 0; i < 6; i++)
	{
		scanf_s("%d", &ticket);
	}

	if (a[0] == ticket[0])
	{
		for (int i = 0; i < 6; i++)
		{
			if (a[i] == ticket[i])
				flag = 1;
			else
				flag = 0;
		}
		if (flag == 1)
			printf("\nYou won %d!\n", bp);
	}


	if (a[0] == ticket[0] && flag == 0)
	{
		for (int i = 1; i < 3; i++)
		{
			if (a[i] == ticket[i])
				flag = 2;
			else
				break;
		}

		if (flag == 2)
			printf("\nYou won %d!\n", sp);
	}

	if (a[3] == ticket[3] && flag == 0)
	{
		for (int i = 4; i < 6; i++)
		{
			if (a[i] == ticket[i])
				flag = 3;
			else
				break;
		}

		if (flag == 3)
			printf("\nYou won %d!\n", sp);
	}

	if (a[5] == ticket[5] && flag == 0)
		printf("\nYou won %d!\n", amo);

	else
		printf("\nYou couldn't win!\n");

	for (int i = 0; i < 6; i++)
	{
		printf("%d ", a[i]);
	}

}