#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char marka[50];
  char model[50];
  char kolor[20];
  int przebieg;
  float cena;
} Samochod;

int main() {
  int n, i;
  Samochod *auta;

  printf("Podaj ilosc samochodow do wprowadzenia: ");
  scanf("%d", &n);

  auta = (struct Samochod *)malloc(n * sizeof(Samochod));

  for (i = 0; i < n; i++) {
    printf("\n--- Samochod nr %d ---\n", i + 1);
    printf("Podaj marke: ");
    scanf("%s", auta[i].marka);
    printf("Podaj model: ");
    scanf("%s", auta[i].model);
    printf("Podaj kolor: ");
    scanf("%s", auta[i].kolor);
    printf("Podaj przebieg: ");
    scanf("%d", &auta[i].przebieg);
    printf("Podaj cene: ");
    scanf("%f", &auta[i].cena);
  }

  printf("\nLista wszystkich samochodow: \n");
  printf("Lp.\tMarka\tModel\tKolor\tPrzebieg\tCena\n");
  for (i = 0; i < n; i++) {
    printf("%d\t%s\t%s\t%s\t%d\t%.2f\n",
        i + 1, auta[i].marka, auta[i].model, auta[i].kolor, auta[i].przebieg, auta[i].cena);
  }

  printf("\nSamochody z przebiegeim ponizej 70000 KM\n");
  printf("Lp.\tMarka\tModel\tKolor\tPrzebieg\tCena\n");
  for (i = 0; i < n; i++) {
    if (auta[i].przebieg < 70000) {
      printf("%d\t%s\t%s\t%s\t%d\t%.2f\n",
          i + 1, auta[i].marka, auta[i].model, auta[i].kolor, auta[i].przebieg, auta[i].cena);
    }
  }

  free(auta);
  return 0;
}