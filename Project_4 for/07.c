#include<stdio.h>
#include<stdlib.h>

main() {
	int i, j, row;

	printf("Enter a number of row:");
	scanf_s("%d", &row);

	for ( i = 0; i < row; i++)
	{
		for ( j = row; j > i; j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}