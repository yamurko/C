#include<stdio.h>
#include<stdlib.h>

main()
{
	int num, count = 0, sum = 0, check = 0;
	int min1 = 2147483647, min2 = 2147483647, min3 = 2147483647;
	float average;

	printf("Enter few integer numbers until -1 entered:\n");

	while (1)
	{
		scanf_s("%d", &num);

		if (num != -1)
		{
			count++;

			if (min1 > num)
			{
				min3 = min2;
				min2 = min1;
				min1 = num;
			}

			else if (min1 < num && min2 > num)
			{
				min3 = min2;
				min2 = num;
			}

			else if (min2 < num && min3 > num)
			{
				min3 = num;
			}
		}

		if (num == -1)
			break;

		sum += num;
	}

	if (min3 == 2147483647 && min2 != 2147483647)
		check = 1;

	if (min3 == 2147483647 && min2 == 2147483647)
		check = 2;

	if (count >= 3)
	{
		average = (float)sum / count;
		printf("Sum of all numbers: %d\n", sum);
		printf("Average: %.2f\n", average);
		printf("Minimum is: %d\n", min1);

		switch (check)
		{
		case 0:
			printf("Second minimum is: %d\n", min2);
			printf("Third minimum is: %d\n", min3);
			break;

		case 1:
			printf("Second minimum is: %d\n", min2);
			break;

		case 2:
			break;

		}
	}

	else
		printf("Please enter least 3 integer numbers! ");

	system("pause");
}