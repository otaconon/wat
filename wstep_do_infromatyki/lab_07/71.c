//============================================================================
// Zadanie 7.1
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>

typedef struct {
  char marka[50];
  char model[50];
  char kolor[20];
  int przebieg;
  float cena;
} Samochod;

int main() {
  Samochod Auto;

  printf("Podaj marke: ");
  scanf("%s", Auto.marka);

  printf("Podaj model: ");
  scanf("%s", Auto.model);

  printf("Podaj kolor: ");
  scanf("%s", Auto.kolor);

  printf("Podaj przebieg (km): ");
  scanf("%d", &Auto.przebieg);

  printf("Podaj cene (PLN): ");
  scanf("%f", &Auto.cena);

  printf("\n");

  printf("%-20s %-20s %-15s %10s %12s\n", 
         "Marka", "Model", "Kolor", "Przebieg", "Cena");

  printf("%-20s %-20s %-15s %10d %12.2f\n",
      Auto.marka,
      Auto.model,
      Auto.kolor,
      Auto.przebieg,
      Auto.cena);

  return 0;
}