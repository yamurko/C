#include<stdio.h>
#include<stdlib.h>

void enter(int* ptr, int);
void print(int* ptr, int);

int main()
{
	int n;

	printf("Enter size of array: ");
	scanf_s("%d", &n);

	int* a = (int*)malloc(n * sizeof(int));
	printf("Sayilari giriniz: \n");
	enter(a, n);
	print(a, n);

	free(a);
	a = NULL;
}

void enter(int* ptr, int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", ptr); // scanf_s("%d",&ptr[i]);
		ptr++;
	}
}

void print(int* ptr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", *(ptr + i));
	}
}