#include<stdio.h>
#include<stdlib.h>
int x = 0; // global value
int fact(int n);

void main()
{
	//* int fact_1 = 0; yap�p x = 2; den sonra fact_1 = fact(5); yaz�lsayd� yine x = 3 bas�lacakt�.x �nce 2ye e�itlenir sonra fonksiyona girip 3e e�itlenir ve 3 bast�r�l�r.*//
	// direk x = 2; den �nce int fact_1 = fact(5); yaz�lsayd� x �nce 3 olarak tan��mlan�r sonra x = 2; ye geldi�inde de�eri 2ye e�itlenir.
	x = 2;
	int fact_1 = fact(5);
	printf("n! = %d\n", fact_1);
	printf("x = %d\n", x);
}

int fact(int n)
{
	int fact_1 = 1;
	// int x; yaz�lsayd� x fonksiyonun endi de�eri olacakt� ve yukardaki global x'le farkl� de�i�ken olacakt�. yani yukarda x = 2 bast�r�l�rd�. 
	for (; n > 1; n--)
		fact_1 *= n;
	x = 3;
	return fact_1;
}