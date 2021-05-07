#include<stdio.h>
#include<stdlib.h>

main()
{
	int a, b, c, ebob = 1;
	
	printf("Enter an integer number: ");
	scanf_s("%d", &a);

	printf("Enter an integer number: ");
	scanf_s("%d", &b);

	if (a > 0 && b > 0)
	{
		while (a > b)
		{
			c = a % b;

			if (c != 0)
			{
				a = b;
				b = c;
			}

			else if (c == 0)
			{
				ebob = b;
				a = b;
			}
		}

		while (b >= a)
		{
			c = b % a;

			if (c != 0)
			{
				b = a;
				a = c;
			}

			else if (c == 0)
			{
				ebob = a;
				b = b / INT_MAX;
			}
		}

		printf("%d", ebob);
	}

	else
		printf("Enter number which is greater than 0!");
}