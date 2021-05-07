#include <stdlib.h>
#include <stdio.h>
#define SIZE 100

int main()
{
#ifdef SIZE
	printf("SIZE is defined. So, this line will be added in " \
		"this C file\n");
#else
	printf("SIZE is not defined\n");
#endif
	printf("\n\n");
	system("pause");
}