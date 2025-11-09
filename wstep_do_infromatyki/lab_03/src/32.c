//============================================================================
// Zadanie 3.2
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>

int main() {
  int n, m;
  printf("Prosze podac Su: ");
  scanf("%d", &n);
  printf("Prosze podac IU: ");
  scanf("%d", &m);

  int sm = 0, cnt = 0;
  while (sm <= n && cnt < m) {
    int x;
    printf("Prosze podac liczbe: ");
    scanf("%d", &x);
    sm += x;
    cnt += x < 0;
  }

  printf("Suma:                \t%d\n", sm);
  printf("Ilosc liczb ujemnych:\t%d\n", cnt);
  printf("Program zakonczony poniewaz %s", sm > n ? "suma przekroczyla Su" : "ilosc liczb ujemnych przekoroczyla IU");
}