#include<stdio.h>
#include<stdlib.h>

void junk(int[]);

void main()
{
	int B[4] = { 1,2,3,4 };

	junk(B);

	for (int i = 0; i < 4; i++)
	{
		printf("%d ", B[i]);
	}
}

void junk(int A[])
{
	A[0] = 8;
	A[1] = 9;
	A[2] = 10;
}