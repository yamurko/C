#include<stdio.h>
#include<stdlib.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define max3(x,y,z) (max(x,max(y,z)))

main()
{
	int i, x = 1, y = 2, z = 3;
	i = max3(x, y, z);
	printf("max: %d\n", max3(x, y, z));
}