#include<stdio.h>
#include<stdlib.h>

main() {
	int i, j, row, a;

	printf("Enter a number of row:");
	scanf_s("%d", &row);

	for (i = row; i > 0; i--)
	{
		for (j = row; j >= i; j--)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}