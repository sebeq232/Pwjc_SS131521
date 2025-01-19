#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void roznica(int *a, int *b, int *wynik) {
    *wynik = *a - *b;
}

void srednia(int *a, int *b, int *c, float *wynik) {
    *wynik = (*a + *b + *c) / 3.0;
} 
//zad4
void doKwadratu(int *liczba) {
    *liczba = (*liczba) * (*liczba);
}
//zad5
int* obliczPotegę(int *podstawa, int *wykladnik, int *wynik) {
    *wynik = 1;
    for (int i = 0; i < *wykladnik; i++) {
        *wynik *= *podstawa;
    }
    return wynik;
}

//zad6
void wypiszZnak(char *znak, int *ilosc) {
    for (int i = 0; i < *ilosc; i++) {
        printf("%c", *znak);
    }
    printf("\n");
    (*ilosc)--; // Zmniejszenie ilości powtórzeń
}
//zad8
void zamien(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    //zad1
    // int liczba1, liczba2, liczba3, wynikRoznica;
    // float wynikSrednia;

    // printf("Podaj wartosc liczby: ");
    // scanf("%d", &liczba1);

    // printf("Adres zmiennej liczba1: %p, Wartosc: %d\n", (void*)&liczba1, liczba1);

    // printf("Podaj dwie liczby do obliczenia rożnicy: ");
    // scanf("%d %d", &liczba2, &liczba3);

    // roznica(&liczba2, &liczba3, &wynikRoznica);
    // printf("Roznica: %d\n", wynikRoznica);

    // srednia(&liczba1, &liczba2, &liczba3, &wynikSrednia);
    // printf("Srednia: %.2f\n", wynikSrednia);
    //zad2
    // int tablica[10];
    // int zakresMin, zakresMax;

    // printf("Adres pierwszego elementu: %p\n", (void*)&tablica[0]);
    // printf("Adres czwartego elementu: %p\n", (void*)&tablica[3]);

    // printf("Podaj zakres liczb losowych (min i max): ");
    // scanf("%d %d", &zakresMin, &zakresMax);

    // srand(time(NULL));
    // for (int i = 0; i < 10; i++) {
        // tablica[i] = rand() % (zakresMax - zakresMin + 1) + zakresMin;
        // printf("Element %d: %d, Adres: %p\n", i, tablica[i], (void*)&tablica[i]);
    // }

    //zad3
    //  int n;

    // printf("Podaj liczbe elementow tablicy: ");
    // scanf("%d", &n);

    // int tablica[n];
    // int suma = 0;

    // printf("Podaj elementy tablicy:\n");
    // for (int i = 0; i < n; i++) {
        // scanf("%d", &tablica[i]);
        // suma += tablica[i];
    // }

    // float srednia = suma / (float)n;
    // printf("Srednia: %.2f\n", srednia);
    // printf("Elementy większe od średniej: ");

    // for (int i = 0; i < n; i++) {
        // if (tablica[i] > srednia) {
            // printf("%d ", tablica[i]);
        // }
    // }
    // printf("\n");
    // zad4
    // int liczba;

    // printf("Podaj liczbę: ");
    // scanf("%d", &liczba);

    // doKwadratu(&liczba);
    // printf("Kwadrat liczby: %d\n", liczba);

    //zad5
    // int podstawa, wykladnik, wynik;

    // printf("Podaj podstawe: ");
    // scanf("%d", &podstawa);
    // printf("Podaj wykladnik: ");
    // scanf("%d", &wykladnik);

    // obliczPotegę(&podstawa, &wykladnik, &wynik);
    // printf("Wynik: %d\n", wynik);

    //zad6
    // char znak;
    // int ilosc;

    // printf("Podaj znak: ");
    // scanf(" %c", &znak);
    // printf("Podaj ilosc powtorzen: ");
    // scanf("%d", &ilosc);

    // wypiszZnak(&znak, &ilosc);
    // printf("Pozostala ilosc powtórzen: %d\n", ilosc);

    //zad8
     int a, b;

    printf("Podaj dwie liczby: ");
    scanf("%d %d", &a, &b);

    printf("Przed zamiana: a = %d, b = %d\n", a, b);
    zamien(&a, &b);
    printf("Po zamianie: a = %d, b = %d\n", a, b);

    return 0;
}
