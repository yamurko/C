#include<stdio.h>
#include<stdlib.h>

int prime(int);

void main()
{
	int a,flag;

	printf("Enter a number:");
	scanf_s("%d",&a);

	flag = prime(a);

	if (a == 1 || a == 0)
		flag = 1;

	if (flag == 1)
		printf("%d is not prime.", a);

	else if (a < 0)
		printf("ERROR!");
	
	else
		printf("%d is prime.", a);

}

int prime(int a)
{
	int i,n,flag=0;

	for ( i = 2; i < a; i++)
	{
		n = a % i;
		if (n == 0)
		{
			flag = 1;
			break;
		}
	}
	return flag;
}