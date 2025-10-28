//============================================================================
// Zadanie 2.1
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>
#include <stdbool.h>

int main() {
  const double km2kw = 0.73549875;
  const double kw2km = 1.35962161;
  double x = 1;
  bool zamiana;
  printf("Prosze podac wybrac zamiane z KM->KW(0) lub zamiane z KW->KM(1):\n");
  scanf("%d", &zamiana);
  while (x) {
    printf("Prosze podac liczbe do przeliczenia:\n");
    scanf("%lf", &x);
    if (!x) break;
    printf("Przed zamiana:\t%lf\n", x);
    printf("Po zamianie:  \t%lf\n", x * (zamiana ? kw2km : km2kw));
  }
}