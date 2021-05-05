#include<stdio.h>
#include<stdlib.h>
main() {
	char ch;
	printf("What are you doing today?\n");
	printf("A) To wirte a c program\n");
	printf("B) To go swimming\n");
	printf("C) To bike\n");
    printf("Enter your option please:");

	ch = getchar(); //read your option
	getchar(); //like \n
	ch = putchar(ch);
	printf("\n\n");
	putchar('Y'); /*write Y on the screen*/
	ch = 'K';
	putchar(ch);
	printf("\n\n");
	printf("\nBir harf giriniz:");
	ch = getchar();
	printf("Girilen harfin asii kodu: %d\n", ch);
	printf("Girilen harf: %c\n", ch);
	system("pause");

}