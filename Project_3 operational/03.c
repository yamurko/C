#include<stdio.h>
#include<math.h>
main() {
	int first, last, e, digit;
	printf("Enter an integer number:");
	scanf_s("%d", &e);

	last = e % 10;

	digit = log10(e);
	first = e / pow(10, digit);
	printf("First digit and last digit of %d are %d and %d.", e, first, last);
}