#include<stdio.h>
#include<stdlib.h>

main()
{
	int a[5];

	for (int i = 0; i < 5; i++)
	{
		printf("&a[%d] = %p\n", i, &a[i]);// adresin degerleri 4er artiyor bunun sebebi int 4 bytelik yer kaplar.
	}

	printf("address of x: %p\n", &a);// dizinin adý dizinin ilk elemanýnýn adresini temsil eder.

	/*dizinin 2. elemanýnýn adresine ulasmak icin ise dizinin adina aritmetik olarak bir eklenir.
	bu islemlere bu sekilde dizinin adini arttirarak ve azaltarak devam edilebilir. buna pointer aritmetigi denir.*/

	int b[] = { 1,2,6,4 };
	int* p = b;

	printf("%d\n", *p);
	printf("%p\n",p);

	p++;

	printf("%d\n", *p);
	printf("%p\n", p);

	printf("%d\n", *(p+1));
	printf("%p\n", p);
	printf("%p\n", p+1);
}