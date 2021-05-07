#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100

main()
{
	char a[N] = "mucbir sebepler";
	char b[N] = "bu aksam 00.00'da";
	strcat_s(b, 36, a);//b+a
	puts(b);
}