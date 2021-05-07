#include<stdio.h>
int main() {
	char ch1, ch2;
	printf("Enter two characters:");
	scanf_s("%c", &ch1);
	scanf_s(" %c", &ch2);

	printf("Girilen %c asii kodu: %d\n", ch1, ch1);
	printf("Girilen %c asii kodu: %d\n", ch2, ch2);
}