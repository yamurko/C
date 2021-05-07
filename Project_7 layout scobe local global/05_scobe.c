#include<stdio.h>
#include<stdlib.h>

main()
{
	double x = 0.12;

	printf("x = %.6f\n", x);

	double x2 = x * x;
	double x6 = x2 * x2 * x2;

	printf("x^2 = %.6f\n", x2);
	printf("x^6 = %.6f\n", x6);
}