#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* #include <time.h>
rand() % a + b			a b aral���nda rasgele de�er �retir (a-(a+b)-1) a-(b-1)
rand() % 2				Yaln�zca 0 ya da 1 de�erini �retir. (0-(0+2)-1) 0-1
rand() % 6				0 � 5 aral���nda rasgele bir de�er �retir (0-(0+6)-1) 0-5
rand() % 6 + 1			1 � 6 aral���nda rasgele bir de�er �retir. (1-(1+6)-1) 1-6
rand() % 6 + 3			3 � 8 aral���nda rasgele bir de�er �retir. (3-(3+6)-1) 3-8 */


void main()
{
	int a;
	srand(time(NULL));

	a = rand() % 6;

	printf("%d", a);
}