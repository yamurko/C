#include<stdio.h>
main() {
	int a, i;
	int fact = 1;
	printf("Enter an integer number:");
	scanf_s("%d", &a);

	if (a < 0)
		printf("ERROR! Please enter an integer number is more than 0...");

	else {
		for (i = 1; i <= a; i++)
		{
			fact *= i;
		}
		printf("Factorial: %d", fact);
	}
}