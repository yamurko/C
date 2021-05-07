#include<stdio.h>
int main() {
	int a = 15;
	double b = 9999.444;
	float c=45612.74;
	char d[16] = "Mucbir Sebepler";
	char e = 'J';

	printf("%d\n", a);
	printf("%.2f\n", b);
	printf("%.2f\n", c);
	printf("%s\n", d);
	printf("%c\n", e);

	printf("\n%d Ram uzerinde %d byte yer kapliyor. \n", a, sizeof(int));
	printf("%.2f Ram uzerinde %d byte yer kapliyor. \n", b, sizeof(double));
	printf("%.2f Ram uzerinde %d byte yer kapliyor. \n", c, sizeof(float));
	printf("%s Ram uzerinde %d byte yer kapliyor. \n", d, sizeof(char));
	printf("%c Ram uzerinde %d byte yer kapliyor. \n", e, sizeof(char));


}