#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "../../templates/cyphers.h"

int main() {
  char str[201];
  scanf("%200s", str);

  printf("orginalne:           \t %s\n", str);
  int k = rand() % 10 + 1;
  cesar_cypher(str, k);
  printf("zaszyfrowane z k=%d: \t %s\n", k, str);
}