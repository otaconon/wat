//============================================================================
// Zadanie 1.6
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>

int main() {
  double km2kw = 0.73549875;
  int n;
  printf("Prosze podac N:\n");
  scanf("%d", &n);

  for (int i = 10; i <= n; i+=10) {
    printf("KM:\t%d\n", i);
    printf("kW:\t%lf", i * km2kw);
    printf("\n\n");
  }
}
