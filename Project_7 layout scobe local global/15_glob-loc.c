#include <stdio.h>
#include <stdlib.h>
int main() {

	const int pi = 3;

	pi = 5;//Can not be changed

	printf("Enter new pi: ");
	scanf_s("%d", &pi);//Can be changed
	//printf("New pi:%d ", pi);
	
	printf("\n\n");
	system("pause");
}