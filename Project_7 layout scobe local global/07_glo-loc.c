#include<stdio.h>
#include<stdlib.h>
int global;

void print_1(void)
{
	int local = 3;

	printf("global: %d local: %d\n", global, local);
}

void main()
{
	int local = 5;

	global = local * local;
	print_1();
}