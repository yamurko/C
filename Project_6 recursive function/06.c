#include<stdio.h>
#include<stdlib.h>

int fact(int);

void main()
{
	int a, fact1;

	printf("Enter an integer number:");
	scanf_s("%d", &a);

	fact1 = fact(a);

	printf("%d!: %d", a, fact1);
}

int fact(int a)
{
	if (a == 0)
		return 1;

	if (a == 1)
		return 1;

	return fact(a - 1) * a;
}