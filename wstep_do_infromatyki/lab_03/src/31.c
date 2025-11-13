//============================================================================
// Zadanie 3.1
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>

int main() {
  int n;
  printf("Prosze podac N: ");
  scanf("%d", &n);

  int x = n;
  int rev = 0;
  while (x != 0) {
    rev *= 10;
    rev += (x % 10);
    x /= 10;
  }

  printf("\nDana liczba N %s bo jej odbicie to: %d", rev == n ? "jest lustrzana" : "nie jest lustrzana", rev);
}