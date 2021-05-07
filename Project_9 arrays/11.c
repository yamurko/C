#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void array(int[]);
void variable_1(int);
int variable_2(int);

void main()
{
	int A[5] = { 1,2,3,4,5 }, b = 12, c = 12;

	array(A);
	variable_1(b);
	c = variable_2(c);

	printf("b = %d\n", b);
	printf("c = %d\n", c);

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", A[i]);
	}
}

void array(int b[])
{
	for (int i = 0; i < 5; i++)
	{
		b[i] = pow(b[i], 2);
	}
}

void variable_1(int b)
{
	b = b * 2;
}

int variable_2(int c)
{
	c = c * 2;
	return c;
}
