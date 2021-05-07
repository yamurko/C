#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int sesliHarf(char[], int, int);
int sessizHarf(char[], int, int);

int main()
{
	char string[100];
	char ch = 'a';

	puts("String Giriniz: ");
	gets(string);

	int len = strlen(string) - 1;

	printf("Uzunlugu= %d\n", len);

	int sesli, sessiz;

	sesli = sesliHarf(string, 0, len);

	sessiz = sessizHarf(string, 0, len);

	printf("Sesli harf sayisi = %d\n", sesli);
	printf("Sessiz harf sayisi = %d\n", sessiz);
}

int sesliHarf(char string[100], int unlu, int len)
{
	char* pnt = &string[0];

	if (*pnt == 'a' || *pnt == 'e' || *pnt == 'u' || *pnt == 'o' || *pnt == 'i')
	{
		unlu ++;
	}

	else if (*pnt == 'A' || *pnt == 'E' || *pnt == 'U' || *pnt == 'O' || *pnt == 'I')
	{
		unlu ++;
	}

	for (int i = 1; i < len; i++)
	{
		char *pnt = &string[i];

		if (*pnt == 'a' || *pnt == 'e' || *pnt == 'u' || *pnt == 'o' || *pnt == 'i')
		{
			unlu++;
		}

		else if (*pnt == 'A' || *pnt == 'E' || *pnt == 'U' || *pnt == 'O' || *pnt == 'I')
		{
			unlu++;
		}
	}

	return unlu;
}

int sessizHarf(char string[], int unsuz, int len)
{
	char* pnt = &string[0];

	switch (*pnt)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'O':
	case 'I':
	case 'U':
	case'/n':
		break;
	default:
		unsuz++;
		break;
	}

	for (int i = 1; i < len; i++)
	{
		char* pnt = &string[i];

		switch (*pnt)
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'O':
		case 'I':
		case 'U':
		case'/n':
			break;
		default:
			unsuz++;
			break;
		}
	}

	return unsuz;
}