//============================================================================
// Zadanie 4.3
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

int main() {
  int a, b, n;
  printf("Prosze podac a: ");
  scanf("%d", &a);
  printf("\nProsze podac b: ");
  scanf("%d", &b);
  printf("\nProsze podac n: ");
  scanf("%d", &n);

  srand(time(NULL));
  int arr[n];
  for (int i = 0; i < n; i++)  {
    arr[i] = roll(a, b);
  }
  int cnt[10000] = {0};
  print_array(arr, n, "\nTablica:");
  for (int i = 0; i < n; i++) {
    cnt[arr[i]]++;
  }

  for (int i = 0; i < n; i++) {
    if (cnt[arr[i]] >= 2) {
      printf("\nPowtarzajaca sie wartosc: %d", arr[i]);
      printf("\nIlosc powtorzen: %d\n", cnt[arr[i]]);
      return 0;
    }
  }

  printf("\nZadna wartosc sie nie powtarza");
}