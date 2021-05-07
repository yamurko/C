#include<stdio.h>
#include<stdlib.h>

main() {
	int a,i,R2D2=0;

	printf("Enter a number:");
	scanf_s("%d", &a);

	if (a == 0 || a == 1)
		R2D2 = 1;

	for (i = 2; i < a; i++)
	{
		if (a % i == 0)
			break;
	}

	if(i<a || R2D2==1)
		printf("This number is not prime.\n");

	else
	printf("This number is prime.\n");
}