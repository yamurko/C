#include<stdio.h>
#include<stdlib.h>

main() {
	char ch;

	printf("Enter a string and press new line\n\n");

	do
	{
		ch = getchar();
		putchar(ch);

	} while (ch != '\n');

	printf("\n\n");

	while (ch = getchar() != '\n')
	{
		putchar(ch);
	}
}