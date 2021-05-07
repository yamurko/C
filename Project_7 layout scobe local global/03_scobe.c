#include<stdio.h>
#include<stdlib.h>

main()
{
	int n;

	for (n = 0; n < 5; n++)
		printf("%d + ", n);

	printf("%d = %d\n", n, n * (n + 1) / 2);
}