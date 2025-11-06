#include <stdio.h>
#include <string.h>

int main() {
    int lista, album, wiek, suma;
    char imie[100], nazwisko[100], zainteresowania[100];

   
    printf("Podaj wiek: ");
    scanf("%d", &wiek);

    printf("Podaj imie: ");
    scanf("%s", imie);

    printf("Podaj nazwisko: ");
    scanf("%s", nazwisko);

    printf("Podaj zainteresowania: ");
    getchar(); 
    fgets(zainteresowania, sizeof(zainteresowania), stdin);
    zainteresowania[strcspn(zainteresowania, "\n")] = 0; 

    printf("Podaj numer z listy: ");
    scanf("%d", &lista);

    printf("Podaj numer albumu: ");
    scanf("%d", &album);

    
    suma = lista + album;

    
    
    printf("Imie: %s\nNazwisko: %s\nWiek: %d\nNumer z listy: %d\nNumer albumu: %d\nSuma: %d\nZainteresowania: %s\n",
           imie, nazwisko, wiek, lista, album, suma, zainteresowania);

    return 0;
}

