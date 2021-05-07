#include<stdio.h>
#include<stdlib.h>

main() {

	int index, a, i, R2D2 = 0, sum = 0;

	printf("Enter an integer number:");
	scanf_s("%d", &index);


	for (a = 0; a <= index; a++)
	{
		R2D2 = 0;

		if (a == 0 || a == 1)
			R2D2 = 1;

		else
		{
			for (i = 2; i < a; i++)
			{
				if (a % i == 0)
				{
					R2D2 = 1;
					break;
				}
			}
			if (R2D2 == 0)
				printf("%d\n", a);
		}
		if (R2D2 == 0)
			sum += a;
	}
	printf("\n\nSum: %d", sum);
	
}