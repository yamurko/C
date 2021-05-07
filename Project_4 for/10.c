#include<stdio.h>
#include<stdlib.h>

main() {
	int i, j, k=0, row;

	printf("Enter a number of row:");
	scanf_s("%d", &row);

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < i+1; j++)
		{
			k++;
			printf("%d ",k);
		}
		
		printf("\n");
	}
}