#include <stdlib.h>
#include <stdio.h>
//#define BOYUT 50
int main() {
#ifndef BOYUT
	{
		printf("BOYUT is not defined. So, now we are going to " \
			"define here\n");
#define BOYUT 300
	}
#else
	printf("BOYUT is already defined in the program");
#endif

	printf("\n\n");
	system("pause");
}