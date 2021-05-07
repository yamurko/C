#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int num(int);

void main()
{
	int a, num1;

	printf("Enter an integer number:");
	scanf_s("%d", &a);

	num1 = num(a);

	printf("\n%d\n", num1);
}

int num(int a)
{
	int digit;

	digit = (int)log10(a);

	if (a == 0)
		return 0;

	return (((a % 10) * pow(10, digit)) + num(a / 10));

}