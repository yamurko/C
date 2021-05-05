#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main() {
	char opr;
	float a, b;

start:	printf("\nEnter two number:");
	scanf_s("%f %f", &a, &b);
	printf("\nTo end this program enter '!'\n");
	printf("\nEnter an operator:");
	scanf_s(" %c", &opr);


	switch (opr)
	{
	case '+': {
		printf("%.1f + %.1f = %.1f", a, b, a + b);
		break;
	}
	case '-': {
		printf("%.1f - %.1f = %.1f", a, b, a - b);
		break;
	}

	case '*': {
		printf("%.1f * %.1f = %.1f", a, b, a * b);
		break;
	}
	case '/': {
		if (b == 0)
			printf("Error. Division by zero.");

		else
			printf("%.1f / %.1f = %.1f", a, b, a / b);
		break;
	}
	case '%': {
		printf("%.1f %% %.1f = %.1f", a, b, (int)a % (int)b);
		break;
	}
	case '^': {
		printf("%.1f ^ %.1f = %.1f", a, b, pow(a, b));
		break;
	}
	default:
		if (opr == '!')
			goto end;

		printf("Invalid operator.");
		break;
	}
	goto start;
end: system("pause");
}