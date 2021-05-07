#include<stdio.h>
#include<stdlib.h>

#define ch_int(ch) (ch=='a')?"character":"integer"

main()
{
	char ch1;

	printf("Enter character or integer: ");
	scanf_s("%c", &ch1);

	if (ch1 == 'a')
		printf("%s", ch_int(ch1));
	else
		printf("%s", ch_int(ch1));
}