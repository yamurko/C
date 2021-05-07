#include <stdio.h>
#include <stdlib.h>
#define height 100
void main()
{
	printf("First defined value for height : %d\n",
		height);
#undef height // undefining variable
#define height 600 // redefining the same for new value
	
	printf("value of height after undef \& redefine: % d", height);
	
	printf("\n\n");
	system("pause");
}