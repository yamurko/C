#include<stdio.h>
main() 
{
	char c1 = 'Y', c2 = 'K';
	int a = 8;
	double d = 12.345, f = 543.21;
	printf("#********+********#\n");
	printf("#%8c+%-8c#\n", c1, c2);
	printf("#%8d+%-8d#\n",a,a);
	printf("#%1.5f+%-1.4f#\n", d, f);
	return 0;
}
