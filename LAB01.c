#include <stdio.h>


int main() {
	int liczba;
  //zadanie 1
	printf("SS131521 \n" );

	//zadanie 2 
	printf("Prosze podac liczbe calkowita: ");
	scanf("%d",&liczba );
	if (liczba % 2 == 0) {
		printf("liczba %d jest parzysta \n",liczba);
	}
	
	else {
		printf("wprowadzona liczba nie jest parzysta \n");
	}

	//zadanie 3
	float liczba1;
	float liczba2;
	printf("Prosze podac dwie liczby do sprawdzenia \n");
		printf("pierwsza liczba: \n");
	scanf("%f", &liczba1);
	printf("Druga liczba: \n");
	scanf("%f", &liczba2);
	if (liczba1 > liczba2) {
		printf("liczba %f jest wieksza od liczby %f \n", liczba1, liczba2);
	}
	else if (liczba2 == liczba1) {
		printf("obie liczby sa rowne \n");
	}
	else { printf("liczba %f jest wieksza od liczb %f \n",liczba2, liczba1); }

	//zadanie 4
	float number1, number2, number3, number4;
	printf("prosze podac cztery liczby do obliczenia sredniej arytmetycznej \n");
	printf("pierwsza liczba: \n");
	scanf("%f", &number1);
	printf("druga liczba: \n");
	scanf("%f", &number2);
	printf("trzecia liczba: \n");
	scanf("%f", &number3);
	printf("czwarta liczba: \n");
	scanf("%f", &number4);
	float wynik = (number1 + number2 + number3 + number4) / 4;
	printf("srednia arytmetyczna wprowadzonych liczb to: %f \n", wynik);

	 //zadanie 5 
	printf("Prosze wybrac jedna z 4 dostepnych operacji mozliwych do przeprowadzenia na kalkulatorze: *(mnozenie),/(dzielenie),+(dodawanie),-(odejmowanie) \n");
	char wybor;
	
	float liczbaa1,liczbaa2,wynik1;
	
	scanf(" %c", &wybor);
	printf("wybrana operacja to %c \n", wybor);
	printf("prosze podac pierwsza liczbe: \n");
	scanf("%f", &liczbaa1);
	printf("prosze podac druga liczbe: \n");
	scanf("%f", &liczbaa2);
	switch(wybor){
	case '+':
	wynik1 =liczbaa1 + liczbaa2;
	printf("wynik dodawania: %f", wynik1);
		break;
	case '-':
	wynik1 =liczbaa1 - liczbaa2;
	printf("wynik odejmowania: %f", wynik1);
		break;
	case '*':
	wynik1 =liczbaa1 * liczbaa2;
	printf("wynik mnozenia: %f", wynik1);
		break;

	case '/':
	wynik1 =liczbaa1 / liczbaa2;
	printf("wynik dzielenia: %f", wynik1);
		break;
	default: printf("prosze wybrac wlasciwa operacje wybierajac odpowiedni znak(+,-,*,/)\n");
		break;
	}
	return 0;
}