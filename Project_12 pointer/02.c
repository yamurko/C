#include<stdio.h>
#include<stdlib.h>

main()
{
	int a = 10;
	int *p;
	p = a; // yanlis, p bir integer pointer a bir integer (integer pointer != integer)
	p = &a; // p bir integer pointer a da bir integer pointer (integer pointer == integer pointer)
	*p = a; // *p bir integer a da bir integer (integer == integer)
	*p = &a; // yanlis, *p değiskenin adresindeki deger yani bir integer &a ise bir integer pointer (integer != integer pointer)

	int b;
	int* ptr = &b;

	scanf_s("%d", ptr);
	printf("%d\n", b); // printf("%d",*ptr);
	printf("%p", ptr);
}