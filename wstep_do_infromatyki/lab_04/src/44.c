//============================================================================
// Zadanie 4.4
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void print_array(int arr[], int N, const char* header) {
  int max_space = 0;
  for (int i = 0; i < N; i++) {
    int space = snprintf(NULL, 0, "%d", arr[i]);
    if (space > max_space)
      max_space = space;
  }

  printf("%s\n", header);
  for (int i = 0; i < N; i++)
    printf("%*d%c", max_space, arr[i], ((i+1) % 10 == 0) ? '\n' : ' ');
}

int roll(int a, int b) {
  return rand() % (b-a+1) + a;
}

const char* solve(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i-1])
      return "NIE JEST nie malejaca";
  }
  return "JEST nie malejaca";
}

int main() {
  int arr1[] = {1, 4, 4, 9, 10, 12};
  int arr2[] = {1, 4, 3, 9, 10, 12};
  int n = sizeof(arr1) / sizeof(int);

  print_array(arr1, n, "Tablica nie malejaca:");
  printf("\nWynik: tablica %s\n\n", solve(arr1, n));

  print_array(arr2, n, "Tablica NIE nie malejaca:");
  printf("\nWynik: tablica %s\n\n", solve(arr2, n));
}