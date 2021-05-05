#include<stdio.h>
main() {
	char c1 = 'A', c2 = 'c';
	int a = 11, b = 16;
	double d1 = 56.7, d2 = 456.7894561;
	printf("+-------+-------+\n");
	printf("|%7c|%-7c|\n", c1, c2);
	printf("|%-7d|%7d|\n", a, b);
	printf("|%7.2f|%-7.1f|\n", d1, d2);
	printf("+-------+-------+\n");
	return 0;
}