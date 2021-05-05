#include<stdio.h>
#include<stdlib.h>

main() {
	char name[8], type[22], imdb[4];

	printf("Enter Name of Movie:");
	scanf_s("%s", name, _countof(name));

	printf("Enter Type:");
	scanf_s("%s", type, _countof(type));

	printf("Enter IMDb:");
	scanf_s(" %s", imdb, _countof(imdb));

	printf("Name of Movie: %s\n", name);
	printf("Type of movie: %s\n", type);
	printf("IMDb of Movie: %s\n", imdb);

	system("pause");
}