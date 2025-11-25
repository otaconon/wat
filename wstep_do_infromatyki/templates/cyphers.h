#include <stdint.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cesar_cypher(char str[], int k) {
  int sz = strlen(str);
  for (int i = 0; i < sz; i++) {
    if (!isalpha(str[i]))
      continue;

    if (isupper(str[i]))
      str[i] = (str[i] + k - 'A') % 27 + 'A';
    else
      str[i] = (str[i] + k - 'a') % 27 + 'a';
  }
}