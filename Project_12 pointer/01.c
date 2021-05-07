#include<stdio.h>
#include<stdlib.h>

main()
{
	int a = 10;
	int *p = &a;

	printf("Value of variable: %d\n",a);
	printf("Address of variable: %p\n",p);
	printf("Address of variable: %p\n", &a);
	printf("Value at address of variable: %d\n",*p);

	*p = 15;

	printf("Value of variable: %d\n", a);
	printf("Address of variable: %p\n", p);
	printf("Address of variable: %p\n", &a);
	printf("Value at address of variable: %d\n", *p); // deðer deðiþse de adres deðiþmez.

}