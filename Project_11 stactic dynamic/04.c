#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Students
{
	char name[20];
	char surname[20];
	int age;
};

int main()
{
	struct Students student1;

	puts("Enter your name, surname and age: ");
	gets(student1.name);
	gets(student1.surname);
	scanf_s("%d", &student1.age);

	printf("Name: %s\n", student1.name);
	printf("Surname: %s\n", student1.surname);
	printf("Age: %d\n", student1.age);
}