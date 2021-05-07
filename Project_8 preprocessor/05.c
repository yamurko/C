#include<stdlib.h>
#include<stdio.h>
#define CHECK_ZERO(divisor)  /* '\' is a nex line */ \
if (divisor==0) \
{printf("**Attempt to divide by zero on line %d of file %s**\n",__LINE__, __FILE__); \
system("pause"); exit(1); /* Terminate the program */ \
}
void main() {
	int i, j;
	printf("Enter i: ");
	scanf_s("%d", &i);
	printf("Enter j: ");
	scanf_s("%d", &j);
	CHECK_ZERO(j);
	printf("Result: %.2f", (float)i / j);
	printf("\n\n");
	system("pause");
}

