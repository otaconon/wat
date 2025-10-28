//============================================================================
// Zadanie 1.1
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>

int main() {
  unsigned int in1, in2;
  float fl1, fl2;
  long int loin1, loin2;
  double doub1, doub2;
  char znak1, znak2;

  printf("Uwaga jezeli dzielnie liczb byloby dzieleniem przez 0, to nie zostanie ono wykonane!!!\n");
  printf("Prosze wprowadzic:\n");

  printf("Dwie liczby calkowite bez znaku:\n");
  scanf("%u%u", &in1, &in2);
  printf("Suma:   \t%u\n", in1 + in2);
  printf("Roznica:\t%u\n", in1 - in2);
  printf("Iloczyn:\t%u\n", in1 * in2);
  if (in2 != 0) printf("Iloraz: \t%u\n", in1 / in2);
  if (in2 != 0) printf("Modulo: \t%u\n\n", in1 % in2);

  printf("Dwie liczby zmienno przecinkowe:\n");
  scanf("%f%f", &fl1, &fl2);
  printf("Suma:   \t%f\n", fl1 + fl2);
  printf("Roznica:\t%f\n", fl1 - fl2);
  printf("Iloczyn:\t%f\n", fl1 * fl2);
  if (fl2 != 0) printf("Iloraz: \t%f\n\n", fl1 / fl2);

  printf("Dwie liczby calkowite dlugie:\n");
  scanf("%ld%ld", &loin1, &loin2);
  printf("Suma:   \t%ld\n", loin1 + loin2);
  printf("Roznica:\t%ld\n", loin1 - loin2);
  if (loin2 != 0) printf("Iloraz: \t%ld\n\n", loin1 / loin2);
  if (loin2 != 0) printf("Modulo:\t%ld\n", loin1 % loin2);

  printf("Dwie liczby zmienno przecinkowe dlugie:\n");
  scanf("%lf%lf", &doub1, &doub2);
  printf("Suma:   \t%lf\n", doub1 + doub2);
  printf("Roznica:\t%lf\n", doub1 - doub2);
  printf("Iloczyn:\t%lf\n", doub1 * doub2);
  if (doub2 != 0) printf("Iloraz: \t%lf\n\n", doub1 / doub2);

  // W c zmienne typu char, sa automatycznie konwertowane na ich reprezentacje ASCII przy operacjach arytmetycznych
  printf("Dwa znaki (bez spacji):\n");
  fflush(stdin);
  scanf("%c%c", &znak1, &znak2);
  fflush(stdin);
  printf("Suma:   \t%c\n", znak1 + znak2);
  printf("Roznica:\t%c\n", znak1 - znak2);
  printf("Iloczyn:\t%c\n", znak1 * znak2);
  if (znak2 != 0) printf("Iloraz: \t%d\n", znak1 / znak2);
  if (znak2 != 0) printf("Modulo: \t%d\n\n", znak1 % znak2);
}
