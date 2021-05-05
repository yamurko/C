#include<stdio.h>

main() {
	printf("YEMEK CESITLERI				KOD				FIYAT");
	printf("\nBaslangic\t\t\t\t1\t\t\t\t10");
	printf("\nAra sicak\t\t\t\t2\t\t\t\t14");
	printf("\nSalata\t\t\t\t\t3\t\t\t\t17");
	printf("\nAna yemek\t\t\t\t4\t\t\t\t28");
	printf("\nTatli\t\t\t\t\t5\t\t\t\t20");
	printf("\nIcecek\t\t\t\t\t6\t\t\t\t6");

	int no;
	float hesap = 0;

start:		printf("\nLutfen siparis etmek icin kod giriniz:");
	printf("\nSiparisi sonlandirmak icin 0'a basiniz.");
	scanf_s("%d", &no);

	switch (no)
	{
	case 1: {
		hesap += 10;
		break;
	}

	case 2: {
		hesap += 14;
		break;
	}

	case 3: {
		hesap += 17;
		break;
	}

	case 4: {
		hesap += 28;
		break;
	}

	case 5: {
		hesap += 20;
		break;
	}

	case 6: {
		hesap += 6;
		break;
	}

	default:
		if (no == 0)
			goto end;

		printf("Lutfen yukardaridaki kodlardan giriniz.");
		break;
	}

	goto start;

end:	printf("\nHesabiniz: %.2f\n", hesap);


}