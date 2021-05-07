#include<stdio.h>
#include<stdlib.h>

main() {
	int i, j, row;

	printf("Enter a number of row:");
	scanf_s("%d", &row);

	for (i = row; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			printf("%d", j+1);
		}
		printf("\n");
	}
}