#include<stdio.h>
#include<stdlib.h>
#include"b.h"
int x;

void main(void)
{
	extern void f(void);
	f();
	printf("x: %d", x);
	printf("\n\n");
	system("pause");
}