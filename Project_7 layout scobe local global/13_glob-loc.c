#include<stdio.h>
#include<stdlib.h>
const int pi = 3;

int main() 
{
	printf("Enter new pi: ");
	scanf_s("%d", &pi); //Can not be changed

	printf("New pi:%d ", pi);
	
	printf("\n\n");
	system("pause");
}