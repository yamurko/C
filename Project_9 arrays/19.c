#include<stdio.h>
#include<stdlib.h>
#define N 10
int prime_test(int);

void main()
{
	int a[N], num, check, count = 0;

	printf("Enter an integer number: ");
	scanf_s("%d", &num);

	for (int i = 2; i <= num; i++)
	{
		check = prime_test(i);
		if (check == 1 && num % i == 0)
		{
			a[count] = i;
			count++;
		}
	}

	for (int i = 0; i < count; i++)
	{
		printf("%d ", a[i]);
	}

}

int prime_test(int num)
{
	if (num == 1 || num == 0)
		return -1;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			return -1;
			break;
		}
	}
	return 1;
}