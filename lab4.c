#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    // char str1[100], str2[100], combined[200];

   
    // printf("Wprowadź pierwszy ciąg tekstowy: ");
    // fgets(str1, sizeof(str1), stdin);
    // str1[strcspn(str1, "\n")] = '\0'; // Usunięcie znaku nowej linii

    // printf("Wprowadź drugi ciąg tekstowy: ");
    // fgets(str2, sizeof(str2), stdin);
    // str2[strcspn(str2, "\n")] = '\0'; // Usunięcie znaku nowej linii

    // 
    // char copy[100];
    // strcpy(copy, str1);

    // 
    // strcpy(combined, str1);
    // strcat(combined, " ");
    // strcat(combined, str2);

    // 
    // printf("Długość pierwszego ciągu: %lu\n", strlen(str1));
    // printf("Długość drugiego ciągu: %lu\n", strlen(str2));

    // 
    // printf("Pierwszy ciąg (kopiowany): %s\n", copy);
    // printf("Połączony ciąg: %s\n", combined);
    
    //zad 2
    // printf("Znaki ASCII od 'a' do 'z':\n");
    // for (char ch = 'a'; ch <= 'z'; ch++) {
        // printf("'%c' -> %d\n", ch, (int)ch);
    // }

    // printf("\nZnaki ASCII od 'A' do 'Z':\n");
    // for (char ch = 'A'; ch <= 'Z'; ch++) {
        // printf("'%c' -> %d\n", ch, (int)ch);
    // }

    // printf("\nZnaki ASCII od '0' do '9':\n");
    // for (char ch = '0'; ch <= '9'; ch++) {
        // printf("'%c' -> %d\n", ch, (int)ch);
    // }

    //zad3
    // char text[1000];
    // int vowels = 0, consonants = 0;

    // printf("Wprowadź tekst: ");
    // fgets(text, sizeof(text), stdin);

    // for (int i = 0; text[i] != '\0'; i++) {
        // char ch = tolower(text[i]);
        // if (ch >= 'a' && ch <= 'z') {
            // if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                // vowels++;
            // } else {
                // consonants++;
            // }
        // }
    // }

    // printf("Samogłoski: %d\n", vowels);
    // printf("Spółgłoski: %d\n", consonants);
    
    //zad4 
    //  char text[1000];

    // printf("Wprowadź tekst: ");
    // fgets(text, sizeof(text), stdin);

    //Usuwanie znaku nowej linii, jeśli istnieje
    // text[strcspn(text, "\n")] = '\0';

    // Odwracanie i zamiana na wielkie litery
    // int length = strlen(text);
    // printf("Wynik: ");
    // for (int i = length - 1; i >= 0; i--) {
        // if (islower(text[i])) {
            // putchar(toupper(text[i]));
        // } else {
            // putchar(text[i]);
        // }
    // }
    // printf("\n");

    //zad 5
    void printCyfra(int cyfra) {
    switch (cyfra) {
        case 0: printf("zero "); break;
        case 1: printf("jeden "); break;
        case 2: printf("dwa "); break;
        case 3: printf("trzy "); break;
        case 4: printf("cztery "); break;
        case 5: printf("pięć "); break;
        case 6: printf("sześć "); break;
        case 7: printf("siedem "); break;
        case 8: printf("osiem "); break;
        case 9: printf("dziewięć "); break;
    }
}

    int number;

    printf("Wprowadź dodatnią liczbę całkowitą: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Liczba musi być dodatnia!\n");
        return 1;
    }

    if (number == 0) {
        printf("zero\n");
        return 0;
    }

    // Znalezienie cyfr w liczbie
    int digits[10];
    int count = 0;
    while (number > 0) {
        digits[count++] = number % 10;
        number /= 10;
    }

    // Wypisywanie cyfr od końca (odwrócenie kolejności)
    for (int i = count - 1; i >= 0; i--) {
        printDigit(digits[i]);
    }
    printf("\n");
    return 0;
}