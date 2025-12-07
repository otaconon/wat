//============================================================================
// Zadanie 5.4
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void print_matrix(int n, int m, int mat[n][m]) {
  int max_space = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int space = snprintf(NULL, 0, "%d", mat[i][j]);
      if (space > max_space)
        max_space = space;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%*d%c", max_space, mat[i][j], ' ');
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

  int mat[n][m];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      mat[i][j] = roll(a, b);

  printf("\nmacierz poczatkowa\n");
  print_matrix(n, m, mat);

  for (int i = 0; i < n; i++) {
    int mn = 10000000;
    for (int j = 0; j < m; j++) 
      mn = fmin(mat[i][j], mn);
    for (int j = 0; j < m; j++) {
      if (mat[i][j] == mn)
        mat[i][j] = 1000;
    }
  }
  printf("\nmacierz po zastapieniu elemntow najmniejszych\n");
  print_matrix(n, m, mat);

  for (int i = 0; i < n; i++) {
    int mx = -1;
    for (int j = 0; j < m; j++) 
      mx = fmax(mat[i][j], mx);
    for (int j = 0; j < m; j++) {
      if (mat[i][j] == mx)
        mat[i][j] = -1;
    }
  }
  printf("\nmacierz po zastapieniu elemntow najwiekszych\n");
  print_matrix(n, m, mat);
}