//============================================================================
// Zadanie 5.1
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>
#include <ctype.h>

#define N 201

int main() {
  char s[N];
  printf("Prosze podac ciag znakow: ");
  gets(s);

  printf("\nProsze podac litere: ");
  char c;
  scanf(" %c", &c);
  int cnt = 0;
  for (int i = 0; s[i] != '\0'; i++) {
    if (tolower(c) == tolower(s[i])) {
      cnt++;
    }
  }

  printf("\nciag: %s", s);
  printf("\n%c wystpailo w ciagu znakow %d razy", c, cnt);
}