#include <stdio.h>
//zad1
unsigned long long silnia(int liczba) {
    if (liczba == 0 || liczba == 1) {
        return 1;
    }
    return liczba * silnia(liczba - 1); 
    
}
//zad2
int ciag(int n) {
    if (n == 1) {
        return -1;
    }
    return -ciag(n - 1) * n - 2;
}
//zad3
int nwd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return nwd(b, a % b);
}
//zad4
int wynik(int i) {
    if (i < 3) {
        return 1;
    }
    if (i % 2 == 0) {
        return wynik(i - 3) + wynik(i - 1) + 1;
    }
    return wynik(i - 1) % 7;


}
//zad5
void naBinarny(int liczba) {
    if (liczba > 1) {
        naBinarny(liczba / 2);
    }
    printf("%d", liczba % 2);
}
//zad7
void naSystemDwojkowy(int liczba) {
    if (liczba > 1) {
        naSystemDwojkowy(liczba / 2); // Rekurencyjne dzielenie przez 2
    }
    printf("%d", liczba % 2); // Wypisanie reszty (0 lub 1)
}
int main() {
    //zadanie1
    // int liczba;
    // printf("Podaj liczbe n: ");
    // scanf("%d", &liczba);

    // if (liczba < 0) {
        // printf("Silnia nie jest zdefiniowana dla liczb ujemnych.\n");
    // } else {
        // printf("Silnia %d wynosi: %llu\n", liczba, silnia(liczba));
    // }
    //zadanie2
    //  int n;
    // printf("Podaj wartosc n: ");
    // scanf("%d", &n);

    // if (n < 1) {
        // printf("n musi być wieksze lub rowne 1.\n");
    // } else {
        // printf("n-ty wyraz ciagu wynosi: %d\n", ciag(n));
    // }

    //zad3
    // int a, b;
    // printf("Podaj dwie liczby a i b: ");
    // scanf("%d %d", &a, &b);

    // printf("NWD(%d, %d) wynosi: %d\n", a, b, nwd(a, b));
    
    //zad4
    // for (int i = 2; i <= 8; i++) {
        // printf("wynik(%d) = %d\n", i, wynik(i));
    // }

    //zad5
    //   int liczba;
    // printf("Podaj liczbę calkowita: ");
    // scanf("%d", &liczba);

    // if (liczba < 0) {
        // printf("Podaj liczbe dodatnia.\n");
    // } else {
        // printf("Liczba %d w systemie binarnym: ", liczba);
        // naBinarny(liczba);
        // printf("\n");
    // }
    
    //zad7
     int liczba;

    printf("Podaj liczbe dziesietna: ");
    scanf("%d", &liczba);

    if (liczba < 0) {
        printf("Podaj liczbe dodatnia.\n");
    } else {
        printf("Liczba %d w systemie dwojkowym: ", liczba);
        naSystemDwojkowy(liczba); 
        printf("\n");
    }
    return 0;
}
