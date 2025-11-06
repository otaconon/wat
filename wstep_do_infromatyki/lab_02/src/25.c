//============================================================================
// Zadanie 2.5
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>
#include <stdbool.h>

int main() {
  int n;
  short x;
  printf("Prosze podac n:\n");
  scanf("%d", &n);
  int suma = 0;
  for (int i = 0; i < n; i++) {
    printf("Prosze podac liczbe nie wieksza od 1000:\n");
    scanf("%hd", &x);
    int sgn = x < 0 ? -1 : 1;
    suma += (sgn*x >= 10 && sgn*x < 100) ? x : 0;
  }
  printf("Wynik:\t%d\n", suma);
}