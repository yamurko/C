#include<stdio.h>
#include<stdlib.h>
#define mult(x,y) x*y
#define mult1(x,y) (x)*(y)

main()
{
	int i, a = 2, b = 3;

	i = mult(a, b);
	i = mult(a + 2, b + 3);
	i = mult1(a + 2, b + 3);

	printf("%d\n%d\n", mult(a,b),mult(a+2,b+3)); // 2+2*3+3  2*3=6  2+3=5   6+5=11
	printf("%d\n", mult1(a + 2, b + 3));
}