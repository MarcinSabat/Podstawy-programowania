#include <stdio.h>


int main() {
	int wybor;
	int a, b;
	float wynik;
	do{
		printf("\n\n0.Wyjscie\n1.Dodawanie\n2.Odejmowanie\n3.Mnozenie\n4.Dzielenie\n");
		scanf("%d", &wybor);
		switch(wybor)
		{
			case 0:
				break;
			case 1:
				printf("Podaj a: ");
				scanf("%d", &a);
				printf("Podaj b: ");
				scanf("%d", &b);
				wynik=a+b;
				printf("%f", wynik);
				break;
			case 2:				
				printf("Podaj a: ");
				scanf("%d", &a);
				printf("Podaj b: ");
				scanf("%d", &b);
				wynik=a-b;
				printf("%f", wynik);
				break;
			case 3:				
				printf("Podaj a: ");
				scanf("%d", &a);
				printf("Podaj b: ");
				scanf("%d", &b);
				wynik=a*b;
				printf("%f", wynik);
				break;
			case 4:
				printf("Podaj a: ");
				scanf("%d", &a);
				printf("Podaj b: ");
				scanf("%d", &b);
				wynik=(float)a/b;
				printf("%f", wynik);
				break;
		}
	}while(wybor!=0);
	return 0;
}
