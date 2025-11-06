//============================================================================
// Zadanie 1.5
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>
#include <stdbool.h>

int main() {
  long long x;
  bool negative;
  printf("Prosze podac liczbe calkowita:\n");
  scanf("%lld", &x);

  // Jezeli liczba jest ujemna to trzeba wykonac kilka dodatkowych operacji
  if (x < 0) {
    x = -x;
    negative = true;
  }

  int rev = 0;
  while (x != 0) {
    rev *= 10;
    rev += (x % 10);
    x /= 10;
  }

  if (negative) {
    rev = -rev;
  }

  printf("Wynik:\t%d", rev);
}
