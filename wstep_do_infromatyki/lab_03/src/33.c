//============================================================================
// Zadanie 3.3
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>
#include <stdbool.h>

double a, b, c;

void f(int x) {
  return a*x*x + b*x + c;
}

void df(int x) {
  return 2*a*x + b;
}

int main() {
  printf("Prosze podac a: ");
  scanf("%d", &a);
  printf("Prosze podac b: ");
  scanf("%d", &b);
  printf("Prosze podac c: ");
  scanf("%d", &c);

  char cont = 'T';
  while (cont == 'T') {
    
  }
}