#include<stdio.h>
#include<stdlib.h>

int fact(int n)
{
	static int fact_ = 1;

	for (; n > 1; n--)
		fact_ *= n;
	return fact_;
}

main()
{
	int n = 5;
	printf("n!: %d\n", fact(n));
	printf("2!: %d\n", fact(2));
}