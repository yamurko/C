#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX_SIZE 100

void main()
{
	int a[20], i, lim, sum_a = 0, b[MAX_SIZE], size, sum_b = 0;
	double ave_a, ave_b;

	do
	{
		system("cls"); //koþul saðlanmazsa sayfa kendini yeniler, uyarýyý bastýrmaz.

		printf("Enter number from 1 to 20: ");
		scanf_s("%d", &lim);

		if (lim > 20 || lim < 0)
		{
			printf("ERROR! Enter integer number from 1 to 20!");
			getch(); //getch() uyarýyý basar ve klavyede herhangi bir tuþa basýnca cls yi aktifleþtirir.
		}

		else
			break;
	} while (lim > 20 || lim < 0);

	for (i = 0; i < lim; i++)
	{
		printf("Enter %d element:", i);
		scanf_s("%d", &a[i]);
		sum_a += a[i];
	}
	ave_a = (float)sum_a / (float)lim;

	printf("\n\nArray of elements:\n");
	for (i = 0; i < lim; i++)
	{
		printf("a[%d]: %d\n", i, a[i]);
	}
	printf("\nSum of array a[%d]: %d and average of array a[%d]: %.2lf\n", lim, sum_a, i, ave_a);

	printf("\n----------------------------------\n");

	srand(time(NULL));

	printf("Enter number from 1 to 100: ");
	scanf_s("%d", &size);

	for (i = 0; i < size; i++)
	{
		b[i] = rand() % 100 + 1;
		sum_b += b[i];
	}
	ave_b = (float)sum_b / (float)size;

	printf("\nArray of elements:\n");
	for (i = 0; i < size; i++)
	{
		printf("b[%d]: %d\n", i, b[i]);
	}
	printf("\nSum of array b[%d]: %d and average of array b[%d]: %.2lf\n", size, sum_b, i, ave_b);
	/*for (j = 0; j < colm; j++)
	{
		k = j + 1;
		check = 0;
		if (a[0][j] == a[0][k])
			check = 1;

		if (check == 1)
			printf("%d ", a[0][j]);
	}*/
}