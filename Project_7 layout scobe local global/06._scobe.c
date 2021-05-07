#include<stdio.h>
#include<stdlib.h>

main()
{
	int n = 543;
	printf("n = %d\n", n);
	{
		int n = -1234;
		printf("n = %d\n", n);
	}

	printf("n = %d\n", n);
}