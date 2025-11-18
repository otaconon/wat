//============================================================================
// Zadanie 3.5
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

static int a, b, n;

int roll() {
  return rand() % (b-a+1) + a;
}

int main() {
  srand(time(NULL));
  printf("Prosze podac a: ");
  scanf("%d", &a);
  printf("Prosze podac b: ");
  scanf("%d", &b);
  printf("Prosze podac N: ");
  scanf("%d", &n);
  printf("\n");

  int max_space = snprintf(NULL, 0, "%d", b);
  int arr[n];
  for (int i = 0; i < n; i++)
    arr[i] = roll();
  for (int i = 0; i < n; i++)
    printf("%*d%c", max_space, arr[i], ((i+1) % 10 == 0) ? '\n' : ' ');
}