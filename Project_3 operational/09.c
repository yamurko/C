#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main() {
	srand(time(NULL));

	int n, sayi, sum = 0, i, min, max;
	double average;
	printf("Enter a number:");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
	{
		sayi = rand() % 100;
		if (i == 0) {
			min = sayi;
			max = sayi;
		}
		if (min > sayi)
			min = sayi;
		if (max < sayi)
			max = sayi;

		printf("%d\t", sayi);
		sum += sayi;
	}
	printf("\nSum: %d", sum);
	average = (double)sum / n;
	printf("\nAverage: %.2f", average);
	printf("\nmin: %d", min);
	printf("\nmax: %d", max);
}