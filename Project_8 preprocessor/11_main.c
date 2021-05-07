//11_main.c
#include <stdio.h>
#include <stdlib.h>
#include "11_func.h"

int main(void) {
	int a, b;
	printf("Insert two numbers: ");
	if (scanf_s("%d%d", &a, &b) != 2) {
		fputs("Invalid input", stderr);
		return 1;
	}
	printf("%d + %d = %d\n", a, b, Sum(a, b));
	printf("%d!=%d\n", a, Factorial(a));
	printf("%d!=%d\n", b, Factorial(b));
	system("pause");
}