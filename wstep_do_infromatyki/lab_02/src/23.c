//============================================================================
// Zadanie 2.3
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>
#include <stdbool.h>

int main() {
  int n, k;
  printf("Prosze podac n:\n");
  scanf("%d", &n);
  printf("Prosze podac k:\n");
  scanf("%d", &k);
  long long suma = 0;
  int x = n/k; // Ile liczb podzielnych przez k
  printf("Wynik:\t%lld\n", k * x*(x+1)/2); // k * ile razy suma ciagu od 0 do ilosci liczb podzielnych przez k
}