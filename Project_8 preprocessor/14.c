#include<stdio.h>
#include<stdlib.h>

enum month{april=3,june=6,september=9,december=12};
enum days{monday=1,tuesday,wednesday,thursday,friday,saturday,sunday};
enum score{win=0,lose=1};

main()
{
	/*for (int i = monday; i <= december; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = april; i < december; i++)
	{
		printf("%d ", i);
	}
	printf("\n");*/

	

	/*char ch[5];
	printf("Enter score: ");
	scanf_s("%s",ch,_countof(ch));*/

	/*int ch;
	printf("If your team win, enter 0; if your team lose, enter 0: ");
	scanf_s("%d", &ch);*/

	enum score ch;
	
	ch = win;
	(ch == win) ? printf("Your team is win!") : printf("Your team is lose!");
}