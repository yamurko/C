#include<stdio.h> 
int main()
{
	unsigned int x = -1;
	int y = ~0;
	if (x == y)
		printf("same");
	else
		printf("not same");
	return 0;
}