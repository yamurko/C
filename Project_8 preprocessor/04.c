#include<stdio.h>
#include<stdlib.h>
#define MAX(i, j) ((i > j)?(i):(j))
int MAX_FUNCT(int, int);

int main() {
	int i, j;

	printf("Enter i: ");
	scanf_s("%d", &i);

	printf("Enter j: ");
	scanf_s("%d", &j);

	printf("Result MAX(%d,%d) = %d\n",i,j,MAX(i, j));

	printf("Result MAX_FUNCT(%d,%d) = %d\n", i, j, MAX_FUNCT(i, j));

	printf("Result MAX(%d++,%d) = %d\n", i, j, MAX(i++, j));

	printf("Result MAX(%d++,%d) = %d\n", i, j, ((i++ > j)?(i++):(j)));

	printf("Result MAX_FUNCT(%d++,%d) = %d\n", i, j, MAX_FUNCT(i++, j));
	
	printf("\n\n");

	system("pause");
}
int MAX_FUNCT(int i, int j)
{
	int n;
		n = (i > j) ? (i) : (j);
	return n;
}