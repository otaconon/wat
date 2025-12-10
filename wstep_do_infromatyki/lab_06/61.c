//============================================================================
// Zadanie 6.1
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
  int n, m, a, b;
} nmab;

nmab read_nmab();

int roll(int a, int b);
void print_int_matrix(int n, int m, int matrix[n][m], char row_headers[n][50], char col_headers[m][50]);
void generate_random_matrix(int n, int m, int arr[n][m], int a, int b);

int main() {
  srand(time(NULL));

  nmab input = read_nmab();
  int n = input.n, m = input.m, a = input.a, b = input.b;

  int arr[n+1][m];
  generate_random_matrix(n, m, arr, a, b);
  char row_headers[n+1][50];
  strcpy(row_headers[n], "Parzyste");
  char col_headers[m][50];
  for (int i = 0; i < n; i++) {
    snprintf(row_headers[i], 50, "Wiersz %d", i);
  }
  for (int i = 0; i < m; i++) {
    snprintf(col_headers[i], 50, "Kolumna %d", i);
  }

  print_int_matrix(n, m, arr, row_headers, col_headers);
  printf("\n\n");

  for (int i = 0; i < m; i++) {
    arr[n][i] = 0;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      arr[n][j] += (arr[i][j] & 1) == 0;
    }
  }

  print_int_matrix(n+1, m, arr, row_headers, col_headers);
}

void print_int_matrix(int n, int m, int matrix[n][m], char row_headers[n][50], char col_headers[m][50]) {
  int max_row_header_len = 0;
  for (int r = 0; r < n; r++) {
    int len = (int)strlen(row_headers[r]);
    if (len > max_row_header_len) {
      max_row_header_len = len;
    }
  }
  int row_label_width = max_row_header_len + 3;
  int *col_widths = (int *)malloc(m * sizeof(int));
  if (col_widths == NULL)
    return;

  for (int c = 0; c < m; c++) {
    int max_len = (int)strlen(col_headers[c]);

    for (int r = 0; r < n; r++) {
      int val = matrix[r][c];
      int val_len = snprintf(NULL, 0, "%d", val);

      if (val_len > max_len) {
        max_len = val_len;
      }
    }
    col_widths[c] = max_len + 2;
  }

  printf("%*s|", row_label_width, "");
  for (int c = 0; c < m; c++) {
    printf("%*s", col_widths[c], col_headers[c]);
  }
  printf("\n");

  int total_width = row_label_width + 1;
  for (int c = 0; c < m; c++) {
    total_width += col_widths[c];
  }

  for (int i = 0; i < total_width; i++)
    printf("-");
  printf("\n");

  for (int r = 0; r < n; r++) {
    printf("%-*s|", row_label_width, row_headers[r]);
    for (int c = 0; c < m; c++) {
      int val = matrix[r][c];
      printf("%*d", col_widths[c], val);
    }
    printf("\n");
  }

  free(col_widths);
}

nmab read_nmab() {
  nmab input;
  printf("\nProsze podac n: ");
  scanf("%d", &input.n);

  printf("\nProsze podac m: ");
  scanf("%d", &input.m);

  printf("\nProsze podac a: ");
  scanf("%d", &input.a);

  printf("\nProsze podac b: ");
  scanf("%d", &input.b);
  printf("\n\n");

  return input;
}

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