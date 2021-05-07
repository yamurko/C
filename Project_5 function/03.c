#include<stdio.h>
#include<stdlib.h>

int number_int(float);
float number_float(float);

void main()
{
	float number,b=0;
	int a=0;

	printf("Enter a float number:");
	scanf_s("%f", &number);

	a = number_int(number);
	b = number_float(number);

	printf("int part is: %d\n", a);

	printf("float part is: %f\n", b);
}

int number_int(float number)
{
	int a = (int)number;
	return a;
}

float number_float(float number)
{
	int a = (int)number;
	float b = number - a;
	return b;
}