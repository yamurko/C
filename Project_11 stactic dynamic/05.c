#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
	char name[20];
	char surname[20];
	int age;
}Students;

int main()
{
	Students student1;

	strcpy_s(student1.name, 7, "Yagmur");
	strcpy_s(student1.surname, 10, "Kocabiyik");
	student1.age = 19;

	printf("%s %s %d", student1.name, student1.surname, student1.age);

	return 0;
}