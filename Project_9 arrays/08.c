#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 49

main()
{
	int rand_num, lottery[N] = { NULL };
	srand(time(NULL));

	for (int i = 0; i < 6; i++)
	{
		rand_num = 1 + rand() % 49;

		while (lottery[rand_num - 1] == 1)
		{
			rand_num = 1 + rand() % 49;
		}
		lottery[rand_num - 1] = 1;
		printf("%d ", rand_num);
	}
	printf("\n\n");
	for (int i = 0; i < 49; i++)
	{
		printf("%d ", lottery[i]);
	}
}
