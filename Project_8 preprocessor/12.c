#include<stdio.h>
#include<stdlib.h>

#define time(character) (character=='E'||character=='e')?__TIME__:"Unknown"

void main()
{
	char ch;

	printf("If you learn to time, enter 'E' or 'e': ");
	scanf_s("%c", &ch);

	if(time(ch))
		printf("%s", time(ch));
}