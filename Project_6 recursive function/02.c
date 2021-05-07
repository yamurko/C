#include<stdio.h>
#include<stdlib.h>

int power(int, int);

void main()
{
	int a, b, power1;

	printf("Enter two integer numbers:");
	scanf_s("%d %d", &a, &b);

	power1 = power(a, b);

	printf("Power: %d", power1);
}

int power(int a, int b)
{
	if (b == 0)
		return 1;

	else if (b == 1)
		return a;

	return power(a, b - 1) * a;
}