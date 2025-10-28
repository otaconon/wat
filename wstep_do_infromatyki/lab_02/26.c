//============================================================================
// Zadanie 2.6
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>
#include <stdbool.h>

int main() {
  int h;
  printf("Prosze podac h:\n");
  scanf("%d", &h);
  printf("a)\n");
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < h; j++)
      printf("*");
    printf("\n");
  }
  printf("\n");

  printf("b)\n");
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < h; j++)
      printf("%c", j <= i ? '*' : ' ');
    printf("\n");
  }
  printf("\n");

  printf("c)\n");
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < h; j++)
      printf("%c", j < h-i ? '*' : ' ');
    printf("\n");
  }
  printf("\n");

  printf("d)\n");
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < h; j++)
      printf("%c", j < h-i-1 ? ' ' : '*');
    printf("\n");
  }
  printf("\n");

  printf("e)\n");
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < h; j++)
      printf("%c", j < i ? ' ' : '*');
    for (int j = 0; j < h; j++)
      printf("%c", j < h-i-1 ? '*' : ' ');
    printf("\n");
  }
}