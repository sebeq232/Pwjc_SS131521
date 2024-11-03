
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <Windows.h> 
#include <math.h>
#include <limits.h>

int main()
{
    /* int liczba;
     int i = 0;

     printf("Podaj liczbe: ");
     scanf("%d", &liczba);
     printf("\nwhile\n");
     while (i <= liczba)
     {
         printf("%d ", i);
         i = i + 1;
     }

     i = 0;
     printf("\ndo while\n");

     do {
         printf("%d ", i);
         i++;

     } while (i < liczba);*/






     //losowanie liczb 
    // int liczba, n;
    // srand(time(NULL)); // funckja pozwalajaca na pseudolosowanie, 
    ///* wywo³ywana jest tylko raz*/
    //     printf("Podaj ilosc liczn do wylosowania: ");
    // scanf("%d", &n);

    // printf("wylosowane liczby: ");
    // for (int i = 0; i < n; i++) {
    //     //printf("%d ", rand() % 10); 
    //     liczba = rand() % 10;
    //     printf("%d ", liczba);

    // }
    // //v1 = rand() % 100; //losowanie z zakresu 0 - 99 
    // //v2 = rand() % 100 + 1; // losowanie z zakresu 1 - 100 
    // //v3 = rand() % 31 - 15 // losowanie z zakresu -15 - 15,  
    // /* rand() % a - b;
    // a - suma wszytskich elementow w przedziale losowania,
    // b - pocz¹tek przedzia³u losowania */


 //zadanie 1
    //int liczba;
    //int licznik = 0;
    //int suma = 0;
    //float srednia;
    //int maks =INT_MIN; //zainicjowanie int maks jako najmniejsza mozliwa wartosc(limits.h)
    //
    //while (1) {
    //    printf("Podaj liczbe: ");
    //    scanf("%d", &liczba);
    //    if (liczba < 0) {
    //        break;
    //    }
    //    
    //    
    //    
    //        suma += liczba;
    //        licznik++;

    //        if (liczba > maks) {
    //            maks = liczba;
    //        }
    //    
    //    
    //}
    //srednia = (float)suma / licznik;
    //printf("suma podanych liczb wynosi: %d \n" , suma);
    //printf("srednia podanych liczb wynosi %f \n", srednia);
    //
    //printf("maksymalna wartosc z podanych liczb to: %d", maks);



    //zadanie2 


        //float liczby[10];
        //int LiczbyDodatnie = 0,LiczbyUjemne = 0;
        //float SumaDodatnich = 0.0,SumaUjemnych = 0.0;

        //// Wczytywanie 10 liczb od u¿ytkownika
        //for (int i = 0; i < 10; i++) {
        //    printf("Wprowadz liczbe %d: ", i + 1);
        //    scanf("%f", &liczby[i]);

        //    // Sprawdzanie, czy liczba jest dodatnia czy ujemna
        //    if (liczby[i] > 0) {
        //        SumaDodatnich += liczby[i];
        //        LiczbyDodatnie++;
        //    }
        //    else if (liczby[i] < 0) {
        //        SumaUjemnych += liczby[i];
        //        LiczbyUjemne++;
        //    }
        //}


        //printf("Ilosc liczb dodatnich: %d\n", LiczbyDodatnie);
        //printf("Suma liczb dodatnich: %.2f\n", SumaDodatnich);
        //printf("Ilosc liczb ujemnych: %d\n", LiczbyDodatnie);
        //printf("Suma liczb ujemnych: %.2f\n", SumaUjemnych);      


//zadanie3 


//int n; 
//int i;
//int cyfra;
//int suma =0;
//
//
//printf("Podaj liczbe elementow w ciagu (n > 0): ");
//scanf("%d", &n);
//
//
//if (n <= 0) {
//    printf("Liczba elementow musi byc wieksza od zera.\n");
//    return 1;
//}
//
//
//printf("Podaj %d liczb:\n", n);
//for (i = 0; i < n; i++) {
//    scanf("%d", &cyfra);
//
//    
//    if (cyfra % 2 == 0) {
//        suma += cyfra;
//    }
//}
//
//
//printf("Suma liczb parzystych w danym ciagu to: %d\n", suma);




//zadanie4
//int n;
//int i;
//int cyfra;
//int suma = 0;
//srand(time(NULL));
//
//printf("Podaj liczbe elementow w ciagu (n > 0): ");
//scanf("%d", &n);
//
//
//if (n <= 0) {
//    printf("Liczba elementow musi byc wieksza od zera.\n");
//    return 1;
//}
//
//
//printf("Losowanie %d liczb:\n", n);
//for (i = 0; i < n; i++) {
//    cyfra = rand() %56 - 10;
//    printf("%d ", cyfra);
//    if (cyfra % 2 == 0) {
//              suma += cyfra;
//          }
//}
//
//
//printf("Suma liczb parzystych w danym ciagu to: %d\n", suma);

//zadanie 5 (za pomoca petli for i while)
//float srednia;
//int n;
//int punkty;
//int suma = 0;
//
//printf("Podaj liczbe studentow: ");
//
//scanf("%d", &n);
//if (n <= 0) {
//    printf("Liczba elementow musi byc wieksza od zera.\n");
//    return 1;
//}
//
//for (int i = 0; i < n; i++) {
//    printf("podaj liczbê punktow dla studenta %d: ", i+1);
//    scanf("%d", &punkty);
//    suma += punkty;
//}   
//printf("Suma wynosi: %d \n",suma);
//
//srednia = (float)suma / n;
//printf("Srednia punktow wynosi: %.1f \n", srednia);




// Petla while
//float srednia;
//int n;
//int punkty;
//int suma = 0;
//int i = 0; 
//
//printf("Podaj liczbe studentow: ");
//scanf("%d", &n);
//
//
//if (n <= 0) {
//    printf("Liczba studentow musi byc wieksza od zera.\n");
//    return 1;
//}
//
//
//while (i < n) {
//    printf("Podaj liczbê punktow dla studenta %d: ", i + 1);
//    scanf("%d", &punkty);
//    suma += punkty;
//    i++; 
//}
//
//printf("Suma wynosi: %d\n", suma);
//
//
//srednia = (float)suma / n;
//printf("Srednia punktow wynosi: %.2f\n", srednia);




//zadanie 6
//a.)
//int i;
//    for (i = 0; i < 100; i++) {
//        printf("%d \n", i + 1);
//    
//    }
    //b.)
//int i;
//for (i = 100; i > -1; i--) {
//        printf("%d \n", i); }



//c.)
   /* int i;
    for (i = 7; i < 78; i+=7) {
        printf("%d \n", i);
    }*/

//d.)
 //int i;
 //for (i = 20; i >-1 ; i--) {
 //       if (i % 2 == 0) {
 //           printf("%d \n", i);
 //       }
 //   }
    

//zadanie 7
//Pierwotny kod:
//int i, j;
//for (i = 0; i < 10; i++) {
//    for (j = 0; j <= i; j++)
//        printf("X");
//    printf("\n");
//}









//a.)
//int i, j;
//for (i = 10; i > -1; i--) {
//    for (j = 0; j <= i; j++)
//        printf("X");
//    printf("\n");
//}

//c.)
//int i, j;
//for (i = 0; i < 10; i++) {
//   
//    for (j = 0; j < i; j++) { // Dodanie odstepow przed X
//        printf(" ");
//    }
//   
//    for (j = 0; j < 10 - i; j++) {
//        printf("X");
//    }
//    printf("\n");
//}

//b.)
//int i, j;
//for (i = 0; i < 10; i++) {
//    
//    for (j = 0; j < 9 - i; j++) {  // Dodanie odstepow przed X
//        printf(" ");
//    }
//
//    for (j = 0; j <= i; j++) {
//        printf("X");
//    }
//    printf("\n");
//}

//d.)
int i, j;
for (i = 0; i < 10; i++) {
    // Dodawanie spacji przed "X"
    for (j = 0; j < 9 - i; j++) {
        printf(" ");
    }
    // Wyœwietlanie X (2 * i, aby mieæ parzyst¹ liczbê X)
    for (j = 0; j < 2 * i; j++) {
        printf("X");
    }
    printf("\n");
}

    return 0;
}
 


















    
