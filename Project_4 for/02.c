#include<stdio.h>
#include<stdlib.h>

main() {
	int i, j, row;
	printf("Enter a number of row:");
	scanf_s("%d", &row);

	for ( i = 1; i < row+1; i++)
	{
		for ( j = 1; j <= i; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}