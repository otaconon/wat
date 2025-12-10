//============================================================================
// Zadanie 6.4
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

typedef struct {
  int n, m, a, b;
} nmab;

nmab read_nmab();

int roll(int a, int b);
void swap(int* a, int* b);
void print_int_matrix(int n, int m, int matrix[n][m], char row_headers[n][50], char col_headers[m][50]);
void print_float_matrix(int n, int m, float matrix[n][m], char row_headers[n][50], char col_headers[m][50]);
void generate_random_int_matrix(int n, int m, int arr[n][m], int a, int b);
void generate_random_float_matrix(int n, int m, float arr[n][m], int a, int b);
void swap_matrix_rows(int n, int m, int arr[n][m], int row1, int row2);

int main() {
  srand(time(NULL));
  nmab input = read_nmab();
  int n = input.n, m = input.m, a = input.a, b = input.b;
  int row1, row2;
  printf("Prosze numer pierwszego wiersza do zamiany: ");
  scanf("%d", &row1);
  printf("\nProsze numer drugiego wiersza do zamiany: ");
  scanf("%d", &row2);
  printf("\n\n");

  int arr[n][m];
  generate_random_int_matrix(n, m, arr, a, b);

  char row_headers[n][50];
  char col_headers[m][50];
  for (int i = 0; i < n; i++) {
    snprintf(row_headers[i], 50, "Wiersz %d", i);
  }
  for (int i = 0; i < m; i++) {
    snprintf(col_headers[i], 50, "Kolumna %d", i);
  }

  print_int_matrix(n, m, arr, row_headers, col_headers);
  printf("\n\n");

  swap_matrix_rows(n, m, arr, row1, row2);

  print_int_matrix(n, m, arr, row_headers, col_headers);
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


void swap(int* a, int* b) {
  *a =  *a  ^  *b;
  *b =  *a  ^  *b;
  *a =  *a  ^  *b;
}

int roll(int a, int b) {
  return rand() % (b-a+1) + a;
}

void generate_random_int_matrix(int n, int m, int arr[n][m], int a, int b) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      arr[i][j] = roll(a, b);
    }
  }
}

void generate_random_float_matrix(int n, int m, float arr[n][m], int a, int b) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      arr[i][j] = roll(a, b);
    }
  }
}

void swap_matrix_rows(int n, int m, int arr[n][m], int row1, int row2) {
  for (int i = 0; i < m; i++) {
    swap(&arr[row1][i], &arr[row2][i]);
  }
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

void print_float_matrix(int n, int m, float matrix[n][m], char row_headers[n][50], char col_headers[m][50]) {
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
      float val = matrix[r][c];
      int val_len = snprintf(NULL, 0, "%.2f", val);

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
      float val = matrix[r][c];
      printf("%*.2f", col_widths[c], val);
    }
    printf("\n");
  }

  free(col_widths);
}