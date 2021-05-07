#include<stdio.h>
#include<stdlib.h>

main() {
	int i, j, k, row;

	printf("Enter a number of row:");
	scanf_s("%d", &row);

	for (i = 0; i < row; i++)
	{
		for ( j = i; j < row-1; j++)
		{
			printf(" ");
		}
		for ( j = row-1-i; j <= row-1; j++)
		{
			if (j == row - 1 || i == row - 1 || j == row - 1 - i)
				printf("*");

			else
				printf(" ");
		}
		printf("\n");
	}
}