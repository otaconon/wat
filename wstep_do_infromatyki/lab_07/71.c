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

  printf("Marka\tModel\tKolor\tPrzebieg\tCena\n");

  printf("%s\t%s\t%s\t%d\t%.2f\n",
      Auto.marka,
      Auto.model,
      Auto.kolor,
      Auto.przebieg,
      Auto.cena);

  return 0;
}