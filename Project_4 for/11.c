#include<stdio.h>
#include<stdlib.h>

main() {
	int i, j, k, row;

	printf("Enter a number of row:");
	scanf_s("%d", &row);

	for (i = 0; i < row; i++)
	{
		for (j = row + 4; j > i + 1; j--)
		{
			printf("-");
		}
		for (k = 0; k < 2 * i + 1; k++)
		{

			printf("*");

		}
		printf("\n");
	}
}