#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define M 21
void shapes(int, int[][M]);

void main()
{
	int s, A[M][M];

	printf("Which shape would you like draw:\n");
	printf("1. Line\n2. Parabola\n3. Circle\n4. Exit\n");
	scanf_s("%d", &s);

	shapes(s, A);

}

void shapes(int s, int A[][M])
{
	int a, b, c, x, y, r, y_1, y_2, dis;

	while (s != 4)
	{
		for (int i = 0; i < 21; i++)
		{
			for (int j = 0; j < 21; j++)
			{
				A[i][j] = 0; //" "

				for (int i = 0; i < 21; i++)
					A[10][i] = 2; //"-"

				for (int i = 0; i < 21; i++)
					A[i][10] = 1; //"|"
			}
		}

		switch (s)
		{
		case 1:
			printf("Line formula is y = ax + b\n");
			printf("Enter a and b: ");
			scanf_s("%d %d", &a, &b);

			for (int i = -10; i < 11; i++)
			{
				x = i;
				y = a * x + b;
				y = -y + 10;
				x += 10;

				if (y < 21 && x < 21)
					A[y][x] = 3; //"*"
			}
			break;

		case 2:
			printf("Parabola formula is y = ax^2 + bx + c\n");
			printf("Enter a, b and c: ");
			scanf_s("%d %d %d", &a, &b, &c);

			for (int i = -10; i < 11; i++)
			{
				x = i;
				y = a * pow(x, 2) + b * x + c;
				y = -y + 10;
				x += 10;

				if (y < 21 && x < 21)
					A[y][x] = 3;
			}
			break;

		case 3:
			printf("Circle formula is (x - a)^2 + (y - b)^2 = r^2\n");
			printf("Enter center's coordinates (a, b) and radius: ");
			scanf_s("%d %d %d", &a, &b, &r);

			float y1, r2 = pow(r, 2);
			for (int i = -10; i < 11; i++)
			{
				x = i;
				y1 = sqrt(r2 - pow(x - a, 2)) + b;
				y_1 = sqrt(r2 - pow(x - a, 2)) + b;
				y_2 = -sqrt(r2 - pow(x - a, 2)) + b;
				y1 = -y1 + 10;
				y_1 = -y_1 + 10;
				y_2 = -y_2 + 10;
				x += 10;

				dis = pow(x - a, 2) + pow(y1 - b, 2);
				if (y1 < 21 && x < 21 && dis >= r2)
				{
					if (fabs(y1 - y_1) < 0.2)
					{
						A[y_1][x] = 3;
						A[y_2][x] = 3;
					}
				}
			}
			break;

		default:
			printf("Enter from 1 to 4.");
			break;
		}

		if (s == 1 || s == 2 || s == 3)
		{
			for (int i = 0; i < 21; i++)
			{
				for (int j = 0; j < 21; j++)
				{
					if (A[i][j] == 0)
						printf(" ");

					else if (A[i][j] == 3)
						printf("*");

					else if (A[i][j] == 1)
						printf("|");

					else if (A[i][j] == 2)
						printf("-");
				}
				printf("\n");
			}
		}
		printf("Which shape would you like draw:\n");
		printf("1. Line\n2. Parabola\n3. Circle\n4. Exit\n");
		scanf_s("%d", &s);
	}
}
