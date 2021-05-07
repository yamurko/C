#include<stdio.h>
#include<stdlib.h>

int modify();
void yaz();
int a = 5;

void main()
{
	int x;
	printf("a: %d\n", modify());

	x = a;

	printf("x: %d\n", x);
	yaz();
}

int modify()
{
	int a = 7;
	return a;
}

void yaz()
{
	printf("\nyaz: %d\n", a);
}