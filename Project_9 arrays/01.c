#include<stdio.h>
#include<stdlib.h>

main()
{
	int i, a[5];

	double b[5];

	printf("Enter the 5 array elements: ");
	/* Read the array elements */
	for (i = 0; i < 5; i++)
	{
		scanf_s("%lf", &b[i]);
		printf("b[%d] = %.2lf\n", i, b[i]);
	}

	printf("Enter five integer number for create the array: ");

	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &a[i]);
		printf("a[%d] = %d\n", i, a[i]);
	}

}