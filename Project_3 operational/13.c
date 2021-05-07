#include<stdio.h>
#include<stdlib.h>

main() {
	int a, b, i, j, R2D2 = 1;

	printf("Enter low number:");
	scanf_s("%d", &a);

	printf("Enter up number:");
	scanf_s("%d", &b);

		for (i = a; i <= b; i++)
		{
			R2D2 = 1;

			for ( j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					R2D2 = 0;
					break;
				}
			}

			if (i == 1)
				R2D2 = 0;

			if (R2D2 == 1)
				printf("%d\n", i);
		}
}