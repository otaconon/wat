//============================================================================
// Zadanie 1.2
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>
#include <stdbool.h>

int main() {
  char imie[20], nazwisko[20];
  unsigned long long nr_albumu;
  unsigned short wiek;
  char zainteresowania[5][20];
  
  printf("Prosze podac imie i naziwsko:\n");
  scanf("%19s%19s", imie, nazwisko);
  printf("Prosze podac numer albumu:\n");
  scanf("%llu", &nr_albumu);
  printf("Prosze podac wiek:\n");
  scanf("%hu", &wiek);

  int cnt = 0;
  for (int i = 0; i < 5; i++) {
    printf("Prosze podac swoje zainteresowanie: \n");
    scanf("%19s", zainteresowania[i]);
    cnt++;
    
    if (i < 4) {
      printf("Czy chcesz podac kolejne zaintersowanie ('y', 'n')?\n");
      fflush(stdin);
      char cont;
      scanf("%c", &cont);
      fflush(stdin);
      if (cont == 'n') break;
	  }
  }

  printf("\n\n");
  printf("Imie:            \t%s\n", imie);
  printf("Nazwisko:        \t%s\n", nazwisko);
  printf("Nr albumu:       \t%llu\n", nr_albumu);
  printf("Wiek:            \t%hu\n", wiek);
  printf("Nr albumu + wiek:\t%llu\n", nr_albumu + wiek);
  printf("Zainteresowania: \t");
  for (int j = 0; j < cnt; j++) {
    printf("%s ", zainteresowania[j]);
  }
}
