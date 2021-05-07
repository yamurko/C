#include<stdio.h>
#include<stdlib.h>
int fact(auto int n);

main()
{
	auto int n = 5;

	printf("factorial 1: %d\n", fact(n));
	printf("factorial 2: %d\n", fact(2));
}

int fact(auto int n)
{
	auto fact_ = 1;

	for (; n > 1; n--)
		fact_ *= n;

	return fact_;
}