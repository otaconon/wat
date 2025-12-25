//============================================================================
// Zadanie 7.6
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>

typedef struct {
  char Imie[20];
  char Rasa[30];
  int Wiek;
  char Hobby[50];
} Pies;

typedef struct {
  char Imie[20];
  char Nazwisko[30];
  int Wiek;
  char Miasto[30];
  Pies Pies;
} Wlasciciel;

int main() {
  Wlasciciel w;

  printf("--- DANE WLASCICIELA ---\n");
  printf("Podaj imie: ");
  scanf("%s", w.Imie);
  printf("Podaj nazwisko: ");
  scanf("%s", w.Nazwisko);
  printf("Podaj wiek: ");
  scanf("%d", &w.Wiek);
  printf("Podaj miasto: ");
  scanf("%s", w.Miasto);

  printf("\n--- DANE PSA ---\n");
  printf("Podaj imie psa: ");
  scanf("%s", w.Pies.Imie);
  printf("Podaj rase psa: ");
  scanf("%s", w.Pies.Rasa);
  printf("Podaj wiek psa: ");
  scanf("%d", &w.Pies.Wiek);

  printf("Co uwielbia pies (np. spacery): ");
  scanf(" %[^\n]s", w.Pies.Hobby);

  printf("\nPan %s %s, %d latek z %s, ma psa, ktory wabi sie %s.\n",
      w.Imie, w.Nazwisko, w.Wiek, w.Miasto, w.Pies.Imie);

  printf("Jego pies to %s, ma %d lata i uwielbia %s.\n",
      w.Pies.Rasa, w.Pies.Wiek, w.Pies.Hobby);

  return 0;
}