#include<stdio.h>
#include<stdlib.h>

main()
{
	int size;

	printf("Enter size of array:");
	scanf_s("%d", &size);

	int* dizi = (int*)malloc(size * sizeof(int));

	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		printf("Enter %d th number:", i + 1);
		scanf_s("%d", dizi + i);
		sum += *(dizi + i);
	}

	printf("Sum: %d", sum);

	free(dizi);

	dizi = NULL;

}