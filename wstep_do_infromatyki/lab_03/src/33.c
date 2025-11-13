//============================================================================
// Zadanie 3.3
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
  double a, b, c;
  char cont = 'T';
  while (cont == 'T') {
    printf("Prosze podac a: ");
    scanf("%lf", &a);
    printf("\nProsze podac b: ");
    scanf("%lf", &b);
    printf("\nProsze podac c: ");
    scanf("%lf", &c);

    double delta = b*b - 4*a*c;
    if (delta < 0)
      printf("\nNie ma pierwiastkow\n");
    else if (delta == 0)
      printf("\nJeden pierwiastek: x1 = %lf\n", -b/(2*a));
    else {
      delta = sqrt(delta);
      printf("\nDwa pierwiastki: x1 = %lf, x2 = %lf\n", (-b+delta)/(2*a), (-b-delta)/(2*a));
    }

    printf("Kontynuowac? ('T', 'N')\n");
    fflush(stdin);
    scanf("%c", &cont);
    fflush(stdin);
  }
}