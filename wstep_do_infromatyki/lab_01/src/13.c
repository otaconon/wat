//============================================================================
// Zadanie 1.3
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>
#include <stdbool.h>

int main() {
  int a, b, c;
  printf("Prosze podac trzy liczby calkowite:\n");
  scanf("%d%d%d", &a, &b, &c);
  bool ans = (a == b && b != c) || (a == c && b != c) || (b == c && a != b);
  printf("Wynik:\t%d", ans);
}
