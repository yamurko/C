#include<stdio.h>
#include<stdlib.h>
int x = 0; // global value
int fact(int n);

void main()
{
	//* int fact_1 = 0; yapýp x = 2; den sonra fact_1 = fact(5); yazýlsaydý yine x = 3 basýlacaktý.x önce 2ye eþitlenir sonra fonksiyona girip 3e eþitlenir ve 3 bastýrýlýr.*//
	// direk x = 2; den önce int fact_1 = fact(5); yazýlsaydý x önce 3 olarak tanýýmlanýr sonra x = 2; ye geldiðinde deðeri 2ye eþitlenir.
	x = 2;
	int fact_1 = fact(5);
	printf("n! = %d\n", fact_1);
	printf("x = %d\n", x);
}

int fact(int n)
{
	int fact_1 = 1;
	// int x; yazýlsaydý x fonksiyonun endi deðeri olacaktý ve yukardaki global x'le farklý deðiþken olacaktý. yani yukarda x = 2 bastýrýlýrdý. 
	for (; n > 1; n--)
		fact_1 *= n;
	x = 3;
	return fact_1;
}