#include<stdio.h>
#include<stdlib.h>

void change_values(int, int);
void change_values_2(int, int);
void change_values_3(int, int);

int main()
{
	int a = 10, b = 5;
	int c = 15, d = 20;
	int e = 25, f = 30;
	change_values(&a, &b);
	change_values_2(c, d);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
	printf("d = %d\n", d);
	change_values_3(e, f);
}

void change_values(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void change_values_2(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

void change_values_3(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
	printf("c = %d\n", x);
	printf("d = %d\n", y);
}