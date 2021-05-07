#include<stdio.h>
#include<stdlib.h>

void num(float, int, float);

void main()
{
	float number,i=0;
	int j=0;

	printf("Enter a float number:");
	scanf_s("%f", &number);

	num(number, i, j);
}

void num(float number, int a, float b)
{
	a = (int)number;
	b = number - a;

	printf("int part: %d, float part: %.2f", a, b);

}