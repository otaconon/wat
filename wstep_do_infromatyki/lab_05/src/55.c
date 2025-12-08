//============================================================================
// Zadanie 5.5
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void print_matrix(int n, int m, float mat[n][m]) {
  int max_space = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int space = snprintf(NULL, 0, "%.2f", mat[i][j]);
      if (space > max_space)
        max_space = space;
    }
  }

  printf("\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%*.2f%c", max_space, mat[i][j], ' ');
    }
    printf("\n");
  }
}

int roll(int a, int b) {
  return rand() % (b-a+1) + a;
}

int main() {
  srand(time(NULL));
  int n, m, a, b;
  printf("Prosze podac n: ");
  scanf("%d", &n);
  printf("Prosze podac m: ");
  scanf("%d", &m);
  printf("Prosze podac a: ");
  scanf("%d", &a);
  printf("Prosze podac b: ");
  scanf("%d", &b);

  float mat[n+2][m+2];
  for (int i = 0; i < n+2; i++)
    for (int j = 0; j < m+2; j++)
      mat[i][j] = 0;
  
  for (int i = 0; i < m; i++)
    mat[n][i] = 1000000;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      mat[i][j] = roll(a, b);
      mat[i][m] += mat[i][j];
      mat[n][j] = fminf(mat[n][j], mat[i][j]);
      mat[n+1][j] = fmaxf(mat[n+1][j], mat[i][j]);
    }
    mat[i][m+1] = mat[i][m] / m;
  }

  printf("\nmacierz");
  print_matrix(n+2, m+2, mat);
}