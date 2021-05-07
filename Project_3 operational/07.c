#include<stdio.h>
main() {
	int i, n;
	float a,b;
	int sum1=0 ,sum2 = 0;
	int counter1=0 ,counter2 = 0;
	printf("Enter an integer number:");
	scanf_s("%d", &n);

	i = 0;
	while (i<n)
	{
		i++;
		if (i%2==1)
		{
			printf("%d\n", i);
			sum1 += i;
			counter1++;
		}
	}
	a = (float) sum1 / counter1;
	printf("Sum of odd numbers which are between 1 and %d is %d.\n", n, sum1);
	printf("Arithmetic main of odd numbers which are between 1 and %d is %.2f.\n", n, a);

	for ( i = 2; i <= n; i+=2)
	{
		printf("%d\n", i);
		sum2 +=i;
		counter2++;
	}
	b = (float)sum2 / counter2;
	printf("Sum of even numbers which are between 1 and %d is %d.\n", n, sum2);
	printf("Arithmetic main of even numbers which are between 1 and %d is %.2f.\n", n, b);
}