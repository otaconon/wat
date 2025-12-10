#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int roll(int a, int b) {
  return rand() % (b-a+1) + a;
}

void generate_random_matrix(int n, int m, int arr[n][m], int a, int b) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      arr[i][j] = roll(a, b);
    }
  }
}