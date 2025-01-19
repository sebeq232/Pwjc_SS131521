#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
//zadanie1 i 2
struct trojkat {
    float bok1;
    float bok2;
    float bok3;
};

float obwodTrojkata(struct trojkat t) {
    return t.bok1 + t.bok2 + t.bok3;
}
//zad2
void przepiszTrojkat(struct trojkat troj1, struct trojkat *troj2) {
    troj2->bok1 = troj1.bok1;
    troj2->bok2 = troj1.bok2;
    troj2->bok3 = troj1.bok3;
}
//zad3 i 4 
struct punkt {
    float x;
    float y;
    float z;
};

float odleglosc(struct punkt p1, struct punkt p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2) + pow(p1.z - p2.z, 2));
}

float najmniejszaOdleglosc(struct punkt tab[], int rozmiar) {
    float minOdleglosc = odleglosc(tab[0], tab[1]);

    for (int i = 0; i < rozmiar - 1; i++) {
        for (int j = i + 1; j < rozmiar; j++) {
            float odlegloscAktualna = odleglosc(tab[i], tab[j]);
            if (odlegloscAktualna < minOdleglosc) {
                minOdleglosc = odlegloscAktualna;
            }
        }
    }

    return minOdleglosc;
}

//zad4
void przepiszTablice(struct punkt tab1[], struct punkt tab2[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        tab2[i] = tab1[i];
    }
}
//zad5
struct struktura {
    int liczba;
    char napis[50];
};
int main() {
    //zadanie1
    // struct trojkat t = {3.0, 4.0, 5.0};

    // printf("Obwod trojkąta: %.2f\n", obwodTrojkata(t));

    //zad2
    //  struct trojkat troj1 = {3.0, 4.0, 5.0};
    // struct trojkat troj2;

    // przepiszTrojkat(troj1, &troj2);

    // printf("Przepisany trojkąt: bok1 = %.2f, bok2 = %.2f, bok3 = %.2f\n", troj2.bok1, troj2.bok2, troj2.bok3);

    //zad3
    // struct punkt tab[] = {{0, 0, 0}, {1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
    // int rozmiar = sizeof(tab) / sizeof(tab[0]);

    // printf("Najmniejsza odleglosc: %.2f\n", najmniejszaOdleglosc(tab, rozmiar));
    

    //zad4
    //  struct punkt tab1[] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // struct punkt tab2[3];
    // int rozmiar = sizeof(tab1) / sizeof(tab1[0]);

    // przepiszTablice(tab1, tab2, rozmiar);

    // printf("Zawartość tablicy tab2:\n");
    // for (int i = 0; i < rozmiar; i++) {
        // printf("Punkt %d: x = %.2f, y = %.2f, z = %.2f\n", i, tab2[i].x, tab2[i].y, tab2[i].z);
    // }
    //zad5
     // Statyczna tablica
    struct struktura tablica1[10];
    // Dynamiczna tablica
    struct struktura *tablica2 = (struct struktura*)malloc(10 * sizeof(struct struktura));
    // Statyczna tablica wskaznikow
    struct struktura *tablica3[10];

    // Inicjalizacja tablicy wskaznikow
    for (int i = 0; i < 10; i++) {
        tablica3[i] = (struct struktura*)malloc(sizeof(struct struktura));
    }

    // Wpisanie wartosci do tablic
    for (int i = 0; i < 10; i++) {
        // Tablica 1
        tablica1[i].liczba = i + 1;
        sprintf(tablica1[i].napis, "Statyczna %d", i + 1);

        // Tablica 2
        tablica2[i].liczba = (i + 1) * 2;
        sprintf(tablica2[i].napis, "Dynamiczna %d", i + 1);

        // Tablica 3
        tablica3[i]->liczba = (i + 1) * 3;
        sprintf(tablica3[i]->napis, "Wskaźnik %d", i + 1);
    }

    // Suma pol liczbowych
    int suma1 = 0, suma2 = 0, suma3 = 0;

    for (int i = 0; i < 10; i++) {
        suma1 += tablica1[i].liczba;
        suma2 += tablica2[i].liczba;
        suma3 += tablica3[i]->liczba;
    }

    printf("Suma tablicy statycznej: %d\n", suma1);
    printf("Suma tablicy dynamicznej: %d\n", suma2);
    printf("Suma tablicy wskaźników: %d\n", suma3);

    // Zwolnienie pamięci dynamicznej
    free(tablica2);
    for (int i = 0; i < 10; i++) {
        free(tablica3[i]);
    }
    return 0;
}