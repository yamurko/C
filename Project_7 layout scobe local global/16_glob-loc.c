#include <stdio.h>
#include <stdlib.h>
int Square(int);

int main() {
	int a;

	printf("Enter a number: ");
	scanf_s("%d", &a);

	printf("Square(%d)=%d ", a, Square(a));
	
	printf("\n\n");
	system("pause");
}

int Square(int a) 
{
	const int x = 3;
	
	x = a * a;//error! x must be a modifiable value
	
	return x;
}