#include<stdio.h>
#include<stdlib.h>
#include <assert.h>

void main()
{
	int i, k;

	printf("Enter a number:");
	scanf_s("%d", &i);

	assert(i != 0);
	k = 20 / i;

	printf("Result is: %d\n", k);
}