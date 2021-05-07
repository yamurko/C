#include<stdio.h>
#include<stdlib.h>
int sum(int n);

void main()
{
	int sum_1 = sum(5);

	printf("1 + 2 + 3 ... + n: %d\n", sum_1);
}

int sum(int n)
{
	int sum_ = 0;

	if (n == 1)
		return 1;

	sum_ = sum(n - 1) + n; // sum_ = sum(n - 1)

	return sum_; // return sum_ + n;
}