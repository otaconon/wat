//============================================================================
// Zadanie 1.4
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>

int main() {
  int n;
  printf("Prosze podac liczbe ocen:\n");
  scanf("%d", &n);
  printf("Prosze podac oceny:\n");

  int suma_ocen = 0;
  int oceny_niedostateczne = 0;
  for (int i = 0; i < n; i++) {
    int ocena;
    scanf("%d", &ocena);
    suma_ocen += ocena;
    oceny_niedostateczne += ocena == 2;
  }

  printf("Srednia: %.2f\n", suma_ocen / (double)n);
  printf("Liczba ocen niedostatecznych: %d\n", oceny_niedostateczne);
}