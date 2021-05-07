#include<stdio.h>
#include<stdlib.h>

main()
{
	int n;

	for (n = 0; n < 5; n++)
	{
		int sum = n * (n + 1) / 2;
		printf("+ %d = %d\n", n, sum);
	}
}