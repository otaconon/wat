//============================================================================
// Zadanie 2.4
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>
#include <stdbool.h>

int main() {
  int a, b, k;
  printf("Prosze podac przedzial [a, b]:\n");
  scanf("%d %d", &a, &b);
  printf("Prosze podac k:\n");
  scanf("%d", &k);
  printf("Wynik:\t%d", b/k - (a-1)/k);
}