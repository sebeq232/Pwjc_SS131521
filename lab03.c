
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <Windows.h>


int main() {
    /* printf("Hello, world!\n");

     int tabInt[6] = { 1,2,3,4,5,6 };
     printf("%d", tabInt[5]);*/

     //Zadanie 1 i 2 
     //int tablica[10]; 

     //
     //for (int i = 0; i < 10; i++) {
     //    tablica[i] = (i + 1) * 3;
     //    printf("wielokrotnosc trojki nr %d: %d \n",i+1, tablica[i]);
     //    
     //    /*if (tablica[i] % 2 == 0) {
     //        printf("co druga wartosc tablicy: %d \n", tablica[i]);
     //    }*/
     //    
     //}

     //for (int i = 1; i < 10; i += 2) {  
     //    printf("co druga wartosc tablicy: %d\n", tablica[i]);
     //} 
    //zadanie 3
    /*int n;
    printf("prosze podac rozmiar tablicy: \n");
    scanf("%d", &n);

    int a;
    printf("prosze podac wartosc a: \n");
    scanf("%d", &a);

    
    


    for (int i = n-1; i >= 0; i--) {
        int wynik = a - (i * 5);
        printf("wynik %d: %d \n",n-i, wynik);
    }*/

    //zadanie 3 (2 sposob)
    /*int n, a;

   
    const int MAX_ROZMIAR = 100;
    int tablica[MAX_ROZMIAR];

    
    printf("Podaj rozmiar tablicy (n <= %d): ", MAX_ROZMIAR);
    scanf("%d", &n);

   
    if (n > MAX_ROZMIAR || n <= 0) {
        printf("Nieprawidlowy rozmiar tablicy!\n");
        return 1;
    }

    
    printf("Podaj wartosc poczatkowa (a): ");
    scanf("%d", &a);

    
    for (int i = n - 1; i >= 0; i--) {
        tablica[i] = a;
        a -= 5;  
    }

    
    printf("Zawartosc tablicy:\n");
    for (int i = 0; i < n; i++) {
        printf("tablica[%d] = %d\n", i, tablica[i]);
    }*/




    //zadanie 4
    
    /*int n;
   
    srand(time(NULL));
    printf("Podaj rozmiar tablicy: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Rozmiar tablicy musi byæ dodatni!\n");
        return 1;
    }
    int* tablica = (int*)malloc(n * sizeof(int));
    if (tablica == NULL) {
        printf("Blad alokacji pamieci!\n");
        return 1;
    }
        tablica[n];
        for (int i = 0; i < n; i++) {
             
            tablica[i] = rand() % 73 - 23;
            printf("tablica[%d]: %d \n",i,tablica[i]);

        }
        int min = tablica[0]; 
        for (int i = 1; i < n; i++) { 
            if (tablica[i] < min) {
                min = tablica[i];
            }
        }

        printf("Minimalna wartosc w tablicy: %d\n", min);

        free(tablica); */
        /*printf("%d", tablica[2]);*/
        

//zadanie 5
//int n;
//int o;
//int l;
//    
//    printf("Podaj rozmiar tablicy: ");
//    scanf("%d", &n);
//    if (n <= 0) {
//        printf("Rozmiar tablicy musi byæ dodatni!\n");
//        return 1;
//    }
//    int* tablica = (int*)malloc(n * sizeof(int));
//    if (tablica == NULL) {
//        printf("Blad alokacji pamieci!\n");
//        return 1;
//    }
//    if (n <= 2) {
//        printf("Aby program mogl wykonac zadane mu obliczenia minimalny rozmiar tablicy powinnien byc rowny 3,teraz mozesz tylko wprowadzic wartosci dla tablica[0] i tablica[1] \n");
//    }
//    tablica[n];
//    printf("prosze podac 1 wartosc tablicy: ");
//    scanf("%d",&o);
//    tablica[0] = o;
//    printf("prosze podac 2 wartosc tablicy: ");
//    scanf("%d", &l);
//    tablica[1] = l;
//    printf("tablica[0]: %d \n",o );
//    printf("tablica[1]: %d \n",l );
//    int suma = tablica[0] + tablica[1];
//    for (int i = 2; i < n; i++) {
//
//        tablica[i] = tablica[i-1]+tablica[i-2];
//        printf("tablica[%d]: %d \n", i, tablica[i]);
//      
//    }



//zadanie 6
//int tablica[20];
//printf("Pierwsza polowa tablicy:\n");
//for (int i = 0; i < 10; i++) {
//    tablica[i] = i + 1; 
//    printf("tablica[%d] = %d\n", i, tablica[i]);
//}
//
//
//for (int i = 10; i < 20; i++) {
//    tablica[i] = tablica[i - 10];
//}
//
//
//printf("Ca³a tablica po skopiowaniu wartosci:\n");
//for (int i = 0; i < 20; i++) {
//    printf("tablica[%d] = %d\n", i, tablica[i]);
//}

//zadanie 7

//int tablica[3][3];
//int n = 3;
//tablica[0][0] = 1;
//tablica[0][1] = 2;
//tablica[0][2] = 3;
//tablica[1][0] = 4;
//tablica[1][1] = 5;
//tablica[1][2] = 6;
//tablica[2][0] = 7; 
//tablica[2][1] = 8;
//tablica[2][2] = 9;
//int suma = 0;
//for (int i = 0; i < n; i++) {
//    suma += tablica[i][i];
//    
//}
//printf("Suma elementow przekatnej glownej wynosi: %d\n", suma);


//zadanie 8
int m, n;


printf("Podaj liczbe wierszy: ");
scanf("%d", &m);
if (m <= 0) {
    printf("Liczba wierszy musi byc dodatnia!\n");
    return 1;
}


printf("Podaj liczbe kolumn: ");
scanf("%d", &n);
if (n <= 0) {
    printf("Liczba kolumn musi byæ dodatnia!\n");
    return 1;
}


int** A = (int**)malloc(m * sizeof(int*));  
int** B = (int**)malloc(m * sizeof(int*));  
int** C = (int**)malloc(m * sizeof(int*));  
if (A == NULL || B == NULL || C == NULL) {
    printf("Blad alokacji pamieci!\n");
    return 1;
}


for (int i = 0; i < m; i++) {
    A[i] = (int*)malloc(n * sizeof(int));
    B[i] = (int*)malloc(n * sizeof(int));
    C[i] = (int*)malloc(n * sizeof(int));
    if (A[i] == NULL || B[i] == NULL || C[i] == NULL) {
        printf("Blad alokacji pamieci dla kolumn!\n");
        return 1;
    }
}


printf("Podaj elementy macierzy A:\n");
for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        printf("A[%d][%d]: ", i, j);
        scanf("%d", &A[i][j]);
    }
}


printf("Podaj elementy macierzy B:\n");
for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        printf("B[%d][%d]: ", i, j);
        scanf("%d", &B[i][j]);
    }
}


for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        C[i][j] = A[i][j] + B[i][j];
    }
}


printf("Wynikowa macierz C = A + B:\n");
for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        printf("%d ", C[i][j]);
    }
    printf("\n");
}


for (int i = 0; i < m; i++) {
    free(A[i]);
    free(B[i]);
    free(C[i]);
}
free(A);
free(B);
free(C);



    return 0;
}

