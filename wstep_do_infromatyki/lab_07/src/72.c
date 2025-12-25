//============================================================================
// Zadanie 7.2
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char marka[50];
  char model[50];
  char kolor[20];
  int przebieg;
  float cena;
} Samochod;

#define N 5
char TMk[N][20]={"Mercedes","VolksWagen","Toyota","Hyundai","Opel"}; //Marka
char TMo[N][20]={"C220","VW Golf","Corolla","i30","Astra"}; //Model
char TCol[N][20]={"Granat","Czarny","Srebrny","Bialy","Oliwka"}; //kolor
int  TPrz[N]={153000,27000,125200,30480,54900}; //Przebieg
int  TAGK[N]={27000,63000,97000,77000,27000};  //Cena

int main() {
  Samochod auta[N];

  for (int i = 0; i < N; i++) {
    strcpy(auta[i].marka, TMk[i]);
    strcpy(auta[i].model, TMo[i]);
    strcpy(auta[i].kolor, TCol[i]);
    auta[i].przebieg = TPrz[i];
    auta[i].cena = TAGK[i];
  }

  printf("\nLista wszystkich samochodow:\n");
  
  printf("%-4s %-15s %-15s %-12s %10s %12s\n", 
         "Lp.", "Marka", "Model", "Kolor", "Przebieg", "Cena");
  for (int i = 0; i < N; i++) {
    printf("%-4d %-15s %-15s %-12s %10d %12.2f\n",
        i + 1, 
        auta[i].marka, 
        auta[i].model, 
        auta[i].kolor, 
        auta[i].przebieg, 
        auta[i].cena);
  }

  printf("\nSamochody z przebiegiem ponizej 70000 KM:\n");
  
  printf("%-4s %-15s %-15s %-12s %10s %12s\n", 
         "Lp.", "Marka", "Model", "Kolor", "Przebieg", "Cena");
  
  int cnt = 1;
  for (int i = 0; i < N; i++) {
    if (auta[i].przebieg < 70000) {
      printf("%-4d %-15s %-15s %-12s %10d %12.2f\n",
          cnt++, 
          auta[i].marka, 
          auta[i].model, 
          auta[i].kolor, 
          auta[i].przebieg, 
          auta[i].cena);
    }
  }

  return 0;
}