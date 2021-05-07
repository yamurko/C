#include<stdio.h>
#include<stdlib.h>

main() {
	int fib1=1, fib2=0, fibn, b, i;

	printf("Enter last index:");
	scanf_s("%d", &b);

	printf("%d\t",fib1);

	for (i = 0; i < b; i++)
	{
		fibn = fib1 + fib2;
		printf("%d\t", fibn);
		fib2 = fib1;
		fib1 = fibn;
	}
	system("pause");
}