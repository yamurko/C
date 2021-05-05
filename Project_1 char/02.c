#include<stdio.h>
#include<stdlib.h>

main() {
	char city[10], uni[21], dep[17], gra[5];

	printf("Where do you live?:\n");
	scanf_s(" %s", city, _countof(city));
	printf("What University do you study at?:\n");
	scanf_s(" %s", uni, _countof(uni));
	printf("What department do you study at?:\n");
	scanf_s(" %s", dep, _countof(dep));
	printf("What is your average grade?:\n");
	scanf_s(" %s", gra, _countof(gra));

	printf("The city which you are living: %s\n", city);
	printf("The university which you are study at: %s\n", uni);
	printf("The department which you are study at: %s\n", dep);
	printf("Your average grade: %s\n", gra);
	system("pause");
}