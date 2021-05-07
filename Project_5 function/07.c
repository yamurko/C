#include<stdio.h>
#include<stdlib.h>

int prime(int);

void main()
{
	int a, b, i, check;

	while (1)
	{
		printf("Enter lower number:");
		scanf_s("%d", &a);

		printf("Enter upper number:");
		scanf_s("%d", &b);

		if (a >= 0 && b >= a)
			break;

		else
			printf("Error!");
	}

	for ( i = a; i <= b; i++)
	{
		check = prime(i);

		if (check == 1)
			printf("%d\n",i);
	}
}
	

int prime(int a)
{
	if (a < 0)
		return -1;

	if (a == 1 || a == 0)
		return 0;

	int i;

	for (i = 2; i < a; i++)
	{
		if (a % i == 0)
			return 0;
	}

	return 1;
}