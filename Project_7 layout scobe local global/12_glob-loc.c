#include<stdio.h>
#include<stdlib.h>

void func1(void);
void func2(void);

void main()
{
	func1();
	func2();

	printf("\n");

	func1();
	func2();

	printf("\n");

	func1();
	func2();

	printf("\n");

}

void func1(void)
{
	int id1 = 1;
	printf("%d ", id1);
	id1 += 5;
	printf("%d ", id1);
}

void func2(void)
{
	static int id1 = 0;
	printf("%d ", id1);
	id1 += 9;
	printf("%d ", id1);
}