#include<stdio.h>
#include<math.h>
main() {
	int a, digit, e, n, sum = 0;
	printf("Enter an integer number:");
	scanf_s("%d", &a);

	e = a;
	digit = log10(a);
	while (digit >= 0)
	{
		n = e % 10;
		sum += n * pow(10, digit);
		e /= 10;
		digit = digit - 1;
	}
	printf("%d", sum);
}