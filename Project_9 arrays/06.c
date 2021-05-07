#include<stdio.h>
#include<stdlib.h>

main()
{
	int a[9] = { NULL };


	for (int i = 1; i < 10; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if ((j + 1) % i == 0)
				a[j] = !a[j];

		}
	}

	for (int i = 0; i < 9; i++)
	{
		printf("%d\n", a[i]);
	}
}