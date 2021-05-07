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

	for (int i = 0; i < N; i++)
	{
		printf("a[%d] = %d and *(a + %d) = %d\n", i, a[i], i, *(a + i)); 
		printf("&a[%d] = %p and a + %d = %p\n", i, &a[i], i, a + i);
		printf("\n--------------------\n\n");

	}
}