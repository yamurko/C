#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 10
main()
{
	int a[N], num, digit, b, index=0, num1;
	printf("Enter an integer number: ");
	scanf_s("%d", &num);

	num1 = num;
	
	while(num>=1)
	{
		b = num % 2;
		index++;
		num = num / 2;
	}

	
	for (int i = 0; i < index; i++)
	{
		a[index-i-1] = num1 % 2;
		num1 /= 2;
	}

	for (int i = 0; i < index; i++)
	{
		printf("%d ", a[i]);
	}

}