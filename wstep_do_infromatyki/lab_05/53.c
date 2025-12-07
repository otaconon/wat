//============================================================================
// Zadanie 5.3
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>

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

void get_minor(int n, int m, int mat[n][m], int r, int c, int out[n - 1][m - 1]) {
  int ii = 0;
  for (int i = 0; i < n; i++) {
    if (i == r)
      continue;
    int jj = 0;
    for (int j = 0; j < m; j++) {
      if (j == c)
        continue;

      out[ii][jj] = mat[i][j];
      jj++;
    }
    ii++;
  }
}

int det(int n, int mat[n][n]) {
  if (n == 1) {
    return mat[0][0];
  }

  int res = 0;
  int minor[n - 1][n - 1];

  for (int i = 0; i < n; i++) {
    get_minor(n, n, mat, i, 0, minor);

    int sub_det = det(n - 1, minor);
    res += mat[i][0] * sub_det * (i & 1 ? -1 : 1);
  }
  return res;
}

int main() {
  printf("Prosze podac macierz: \n");
  int mat[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &mat[i][j]);
    }
  }

  printf("macierz:\n");
  print_matrix(3, 3, mat);

  // Wiem ze dla macierzy 3x3 mozna prosciej, ale do przyszlych zdan
  // moze sie przydac funkcja dla dowolnej macierzy
  printf("\nwyznacznik: %d", det(3, mat));
}