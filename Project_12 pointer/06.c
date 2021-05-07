#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 15

main()
{
	char a[15] = "Mucbir Sebepler";
	char* p = "Mucbir Sebepler";

	printf("%s\n\n", p);

	for (int i = 0; i < N; i++)
	{
		printf("a[%d] = %c\n", i, *p); // printf("a[%d] = %d\n", i, a[i]);
		printf("&a[%d] = %p\n", i, p); // printf("&a[%d] = %p\n", i, &a[i]);
		printf("\n--------------------\n\n");
		p++;
	}

	
}