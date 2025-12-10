//============================================================================
// Zadanie 6.6
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
  int n, m, a, b;
} nmab;

nmab read_nmab();

int roll(int a, int b);
void swap(int *a, int *b);
void print_int_matrix(int n, int m, int matrix[n][m], char row_headers[n][50], char col_headers[m][50]);
void print_float_matrix(int n, int m, float matrix[n][m], char row_headers[n][50], char col_headers[m][50]);
void print_string_matrix(int n, int m, int k, char matrix[n][m][k], char row_headers[n][100], char col_headers[m][100]);
void generate_random_int_matrix(int n, int m, int arr[n][m], int a, int b);
void generate_random_float_matrix(int n, int m, float arr[n][m], int a, int b);
void generate_default_headers(int n, int m, char row_headers[n][50], char col_headers[m][50]);
void swap_matrix_rows(int n, int m, int arr[n][m], int row1, int row2);
int get_visible_length(const char *str);


char Powiedzonka[][75] = {
  "Jak sie nie ma co sie lubi, to nie lubi sie i tego co sie ma",
  "Slowo sie rzeklo, kobylka u plota",
  "Moja chata z kraja",
  "Kto rano wstaje, ten leje jak z cebra",
  "Gdzie kucharek szesc, tam nie ma co jesc",
  "Lepszy wrobel w garsci niz golab na dachu",
  "Ciszej jedziesz, dalej bedziesz",
  "Na pochyle drzewo wszystkie kozy skacza",
  "Idz sprawdzic, czy rowery jeszcze stoja",
  "A tu kazdy sobie ciurka, ze swojego Jalu Kurka",
  ""
};

int main() {
  srand(time(NULL));

  int i = 0;
  for (; strlen(Powiedzonka[i]) != 0; i++) {
  }

  char arr[i][2][100];
  char row_headers[i][100], col_headers[2][100] = { "powiedzonko", "liczba wyrazow" };

  i = 0;
  for (; strlen(Powiedzonka[i]) != 0; i++) {
    int cnt = 1;
    for (int j = 0; j < strlen(Powiedzonka[i]); j++) {
      cnt += Powiedzonka[i][j] == ' ';
    }
    snprintf(row_headers[i], 100, "Lp. %d", i + 1);
    snprintf(arr[i][0], 100, "%s", Powiedzonka[i]);
    snprintf(arr[i][1], 100, "%d", cnt);
  }

  print_string_matrix(i, 2, 100, arr, row_headers, col_headers);
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

void swap(int *a, int *b) {
  *a = *a ^ *b;
  *b = *a ^ *b;
  *a = *a ^ *b;
}

int roll(int a, int b) {
  return rand() % (b - a + 1) + a;
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

void generate_default_headers(int n, int m, char row_headers[n][50], char col_headers[m][50]) {
  for (int i = 0; i < n; i++) {
    snprintf(row_headers[i], 50, "Wiersz %d", i);
  }
  for (int i = 0; i < m; i++) {
    snprintf(col_headers[i], 50, "Kolumna %d", i);
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

int get_visible_length(const char *str) {
    int count = 0;
    while (*str) {
        if ((*str & 0xC0) != 0x80) {
            count++;
        }
        str++;
    }
    return count;
}

void print_string_matrix(int n, int m, int k, char matrix[n][m][k], char row_headers[n][100], char col_headers[m][100]) {
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
    int max_len = strlen(col_headers[c]);

    for (int r = 0; r < n; r++) {
      int val_len = strlen(matrix[r][c]);
      if (val_len > max_len) {
        max_len = val_len;
      }
    }
    col_widths[c] = max_len + 4;
  }

  printf("%*s|", row_label_width, "");
  for (int c = 0; c < m; c++) {
    printf("%-*s", col_widths[c], col_headers[c]);
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
      char *val = matrix[r][c];
      printf("%-*s", col_widths[c], val);
    }
    printf("\n");
  }

  free(col_widths);
}