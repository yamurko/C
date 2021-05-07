#include<stdio.h>
#include<stdlib.h>

int ebob(int, int);

void main()
{
	int a, b, ebob1;

	printf("Enter two integer numbers:");
	scanf_s("%d %d", &a, &b);

	ebob1 = ebob(a, b);

	printf("Ebob: %d", ebob1);
}

int ebob(int a, int b)
{
	if (b == 0)
		return a;

	return ebob(b, a % b);
}