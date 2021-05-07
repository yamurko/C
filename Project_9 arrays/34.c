#include <stdio.h>
#include <stdlib.h>
#define SIZE 10000

void main()
{
	int sum = 0, saturity, n, i, j, new_sat;

	while (1)
	{
		printf("Enter the number of cells: ");
		scanf_s("%d", &n);

		if (n > SIZE || n < 1)
		{
			printf("ERROR! Try again!\n");
		}
		else
		{
			break;
		}
	}

	printf("Enter max saturity of cells respectively: ");

	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &saturity);
		sum += saturity;
	}

	for (j = 2; j < sum; j++)
	{
		if (sum % j == 0 && sum / j >= n)
		{
			new_sat = j;
		}
		else
		{
			continue;
		}

	}

	printf("%d", new_sat);

	printf("\n\n");
	system("pause");

}