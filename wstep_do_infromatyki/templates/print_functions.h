#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_int_len(int n) {
  return snprintf(NULL, 0, "%d", n);
}

void print_int_matrix(int rows, int cols, int matrix[rows][cols], const char *row_headers[rows], const char *col_headers[cols]) {
  int max_row_header_len = 0;
  for (int r = 0; r < rows; r++) {
    int len = (int)strlen(row_headers[r]);
    if (len > max_row_header_len) {
      max_row_header_len = len;
    }
  }
  int row_label_width = max_row_header_len + 3;
  int *col_widths = (int *)malloc(cols * sizeof(int));
  if (col_widths == NULL)
    return;

  for (int c = 0; c < cols; c++) {
    int max_len = (int)strlen(col_headers[c]);

    for (int r = 0; r < rows; r++) {
      int val = matrix[r][c];
      int val_len = get_int_len(val);
      if (val_len > max_len) {
        max_len = val_len;
      }
    }
    col_widths[c] = max_len + 2;
  }

  printf("%*s|", row_label_width, "");
  for (int c = 0; c < cols; c++) {
    printf("%*s", col_widths[c], col_headers[c]);
  }
  printf("\n");

  int total_width = row_label_width + 1;
  for (int c = 0; c < cols; c++) {
    total_width += col_widths[c];
  }

  for (int i = 0; i < total_width; i++)
    printf("-");
  printf("\n");

  for (int r = 0; r < rows; r++) {
    printf("%-*s|", row_label_width, row_headers[r]);
    for (int c = 0; c < cols; c++) {
      int val = matrix[r][c];
      printf("%*d", col_widths[c], val);
    }
    printf("\n");
  }

  free(col_widths);
}