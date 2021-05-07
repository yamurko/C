#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 5

main()
{
	int a[N];
	srand(time(0));

	for (int i = 0; i < N; i++)
	{
		a[i] = rand() % 10;
	}

	int* p = a;

	for (int i = 0; i < N; i++)
	{
		printf("a[%d] = %d\n", i, *p); // printf("a[%d] = %d\n", i, a[i]);
		printf("&a[%d] = %p\n", i, p); // printf("&a[%d] = %p\n", i, &a[i]);
		printf("\n--------------------\n\n");
		p++;
	}
}