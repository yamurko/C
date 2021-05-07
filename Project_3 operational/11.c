#include<stdio.h>
#include<stdlib.h>

main() {
	int fib1=1, fib2=0, fibn = 0, b, i;

	printf("Enter index:");
	scanf_s("%d", &b);

	if (b == 0 || b == 1)
		fibn = 1;

	else {
		for (i = 0; i < b; i++)
		{
			fibn = fib1 + fib2;
			fib2 = fib1;
			fib1 = fibn;
		}
	}
	printf("%d", fibn);
}