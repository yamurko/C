#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 30

main()
{
	char a[N] = "";
	fgets(a, sizeof(a), stdin);
	puts(a);

	int len = strlen(a);
	printf("%d\n", len);

	char b[N];
	strcpy_s(b, N, a);
	puts(b);
}