#include<stdio.h>
#include<stdlib.h>
#define A 5
#define B 7

main()
{
	int i, a[A] = { 12,54,63,58,96 }, b[B], max, count = 0;

	max = a[0];
	for (i = 0; i < A; i++)
	{
		if (max < a[i])
			max = a[i];
	}

	printf("Max a: %d\n\n", max);

	printf("Enter %d integer numbers for create array:\n", B);

	for (i = 0; i < B; i++)
	{
		scanf_s("%d", &b[i]);
		if (count == 1)
			max = b[i];

		else
		{
			if (max < b[i])
				max = b[i];
		}
	}

	printf("\nMax b: %d\n", max);
}