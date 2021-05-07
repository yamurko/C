#include<stdio.h>
#include<stdlib.h>
#define N 50

void main()
{
	char password[N] = { 'm','u','c','b','i','r','s','e','b','e','p','l','e','r','\0' };
	char user_pass[N];
	int flag, i;

	while (1)
	{
		flag = 0;
		i = 0;
		printf("Enter password: ");
		scanf_s("%s", user_pass, _countof(user_pass));

		while (!(password[i] == '\0' && user_pass[i] == '\0'))
		{
			if (password[i] != user_pass[i])
			{
				printf("\nPasswprd is wrong!\n");
				flag = 1;
				break;
			}
			else
				i++;
		}
		if (flag == 0)
			printf("\nPassword is correct!\n");
		break;
	}


}