#include<stdio.h>
#include<stdlib.h>

main() {
	int i, j, k, row;

	printf("Enter a number of row:");
	scanf_s("%d", &row);

	for ( i = 0; i < row; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j || j == 0 || i == row-1)
				printf("*");

			else
				printf("?");
		}
		printf("\n");
	}
}