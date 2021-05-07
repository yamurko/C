#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void arm_num(int);

void main()
{
	int a;
	printf("Enter an integer number:");
	scanf_s("%d", &a);

	arm_num(a);
}

void arm_num(int a)
{
	int i,n,j,digit,sum=0;
	n = a;
	digit = log10(a);

	for ( i = 0; i <= digit; i++)
	{
		j = n % 10;
		sum += pow(j, digit+1);
		n = n / 10;
	}
	if (a == sum)
		printf("This number is Armstrong number.\n");
	else
		printf("This number is not Armstrong number.");
	
}