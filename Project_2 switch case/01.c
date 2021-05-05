#include<stdio.h>
int main() {
	int a, b;
	char op;
	float c;
	int R2D2 = 0;

	printf("Enter first number:");
	scanf_s("%d", &a);
	printf("Enter second number:");
	scanf_s("%d", &b);
	printf("Enter a operator:");
	scanf_s(" %c", &op);

	switch (op) 
	{
	case '+': {
			c = a + b;
			break;
		}
	case '-': {
		c = a - b;
		break;
	}
	case '*': {
		c = a * b;
		break;
	}
	case '/': { 
		if (b==0)
		{
			R2D2 = 1;
		}
		else {
			c = (float) a / b;
		}
		break;
		}
	default:
		printf("Illegal operator.");
		break;
	}

	if (R2D2 == 1) {
		printf("Error. Division by zero! ");
	}
	else
	{
		printf("Result of %d%c%d=%.2f:", a, op, b, c);
	}
}