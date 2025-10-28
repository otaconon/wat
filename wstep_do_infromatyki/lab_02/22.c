//============================================================================
// Zadanie 2.2
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>
#include <stdbool.h>

int main() {
  int n;
  printf("Prosze podac n:\n");
  scanf("%d", &n);
  int sgn = n < 0 ? -1 : 1;
  printf("Wynik:\t%lld\n", (long long)sgn*(sgn*n)*((sgn*n)+1)/2); // Korzystam z wzoru na sume ciagu uwazajac na znak
}