//============================================================================
// Zadanie 7.3
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>

typedef struct {
  float x;
  float y;
} Punkt;

int main() {
  float a, b, r;
  Punkt p;
  float lewa_strona, prawa_strona;
  
  const char *tekst_wyniku; 

  printf("Podaj wspolrzedne srodka okregu (a b): ");
  scanf("%f %f", &a, &b);

  printf("Podaj promien okregu (r): ");
  scanf("%f", &r);

  printf("Podaj wspolrzedne punktu (x y): ");
  scanf("%f %f", &p.x, &p.y);

  lewa_strona = (p.x - a) * (p.x - a) + (p.y - b) * (p.y - b);
  prawa_strona = r * r;

  if (lewa_strona < prawa_strona) {
    tekst_wyniku = "Wewnatrz okregu";
  } else if (lewa_strona > prawa_strona) {
    tekst_wyniku = "Na zewnatrz okregu";
  } else {
    tekst_wyniku = "Na okregu";
  }

  printf("\n");

  printf("%-4s %10s %10s   %-20s\n", "Lp.", "X", "Y", "Wynik");
  printf("%-4d %10.2f %10.2f   %-20s\n", 
    1, 
    p.x, 
    p.y, 
    tekst_wyniku);

  return 0;
}