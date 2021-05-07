#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int binary_function(int, int[]);
#define N 10
void main()
{
	int a[N], num, index;
	printf("Enter an integer number: ");
	scanf_s("%d", &num);

	index = binary_function(num, a);

	for (int i = 0; i < index; i++)
	{
		printf("%d ", a[i]);
	}

}

int binary_function(int num, int a[])
{
	int num1, b, index = 0;
	num1 = num;

	while (num >= 1)
	{
		b = num % 2;
		index++;
		num = num / 2;
	}


	for (int i = 0; i < index; i++)
	{
		a[index - i - 1] = num1 % 2;
		num1 /= 2;
	}
	return index;
}
