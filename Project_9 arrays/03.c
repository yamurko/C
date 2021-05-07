#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* #include <time.h>
rand() % a + b			a b aralýðýnda rasgele deðer üretir (a-(a+b)-1) a-(b-1)
rand() % 2				Yalnýzca 0 ya da 1 deðerini üretir. (0-(0+2)-1) 0-1
rand() % 6				0 – 5 aralýðýnda rasgele bir deðer üretir (0-(0+6)-1) 0-5
rand() % 6 + 1			1 – 6 aralýðýnda rasgele bir deðer üretir. (1-(1+6)-1) 1-6
rand() % 6 + 3			3 – 8 aralýðýnda rasgele bir deðer üretir. (3-(3+6)-1) 3-8 */


void main()
{
	int a;
	srand(time(NULL));

	a = rand() % 6;

	printf("%d", a);
}