#include<stdio.h>
#include<stdlib.h>

main() {
	int i, j, row;

	printf("Enter a number of row:");
	scanf_s("%d", &row);

	for ( i = row; i > 0; i--)
	{
		for ( j = i; j > 0; j--)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}