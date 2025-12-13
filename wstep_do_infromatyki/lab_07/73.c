#include <stdio.h>

typedef struct {
  float x;
  float y;
} Punkt;

int main() {
  float a, b, r;
  Punkt p;
  float lewa_strona, prawa_strona;

  printf("Podaj wspolrzedne srodka okregu (a b): ");
  scanf("%f %f", &a, &b);

  printf("Podaj promien okregu (r): ");
  scanf("%f", &r);

  printf("Podaj wspolrzedne punktu (x y): ");
  scanf("%f %f", &p.x, &p.y);

  lewa_strona = (p.x - a) * (p.x - a) + (p.y - b) * (p.y - b);
  prawa_strona = r * r;

  printf("\nLp.\tX\tY\tWynik\n");
  printf("1\t%.2f\t%.2f\t", p.x, p.y);

  if (lewa_strona < prawa_strona) {
    printf("Wewnatrz okregu\n");
  } else if (lewa_strona > prawa_strona) {
    printf("Na zewnatrz okregu\n");
  } else {
    printf("Na okregu\n");
  }

  return 0;
}