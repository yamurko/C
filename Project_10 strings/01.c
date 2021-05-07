#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    char str[20];
    printf("Enter a string ");
    scanf_s("%[^\n]", str, countof(str));  //scanning the whole string, including the white spaces
    printf("%s", str);
}