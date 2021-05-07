#include<stdio.h>
#include<stdlib.h>

main()
{
	int a[10]; // statik ve stack bolgesinde depolanir

	for (int i = 0; i < 10; i++)
	{
		a[i] = i;
		printf("%d\n", a[i]);
	}
	printf("\n\n");
	int* b = (int*)malloc(10 * sizeof(int)); // dinamik ve heap bolgesinde depolanir

	for (int i = 0; i < 10; i++)
	{
		b[i] = i;
		printf("%d\n", b[i]);
	}
	printf("\n");

	b = realloc(b, 13*sizeof(int));

	for (int i = 10; i < 13; i++)
	{
		b[i] = i;
		printf("%d\n", b[i]);
	}

	free(b);
	b = NULL; // heapte depolanan veriler silinmez, bu yüzden serbest býrakmalýyýz.

}