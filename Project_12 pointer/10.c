#include<stdio.h>
#include<stdlib.h>

int pw(int s, int r);
void armstrong(int* ptr);

void main()
{
	int number;

	printf("Enter an integer number: ");
	scanf_s("%d", &number);

	armstrong(number);
}

int pw(int s, int r)
{
	while (s >= 1)
	{
		s /= 10;
		r++;
	}

	return r;
}

void armstrong(int* ptr)
{
	int a, digit = 0, b, sum = 0, c, power, temp;
	a = ptr;
	c = a;
	power = pw(c, digit);
	while (a >= 1)
	{
		b = a % 10;
		a /= 10;
		temp = 1;
		for (int i = 0; i < power; i++)
		{
			temp *= b;
		}
		sum += temp;
	}
	
	if (sum == c)
		printf("%d is armstrong number.", c);
	else
		printf("%d is not armstrong number.", c);

}
