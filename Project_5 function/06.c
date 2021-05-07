#include<stdio.h>
#include<stdlib.h>

int prime(int);

void main()
{
	int a, check;

	printf("Enter a number:");
	scanf_s("%d", &a);

	check = prime(a);

	if (check == -1)
		printf("ERROR!");

	else if (check == 0)
		printf("%d is not prime.", a);

	else
		printf("%d is prime.", a);
}

int prime(int a)
{
	if (a < 0)
		return -1;

	if (a == 1 || a == 0)
		return 0;

	int i;

	for ( i = 2; i < a; i++)
	{
		if (a % i == 0)
			return 0;
	}

	return 1;
}