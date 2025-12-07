#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../templates/print_functions.h"

int main() {
  printf("--- Example 1: Varying lengths ---\n");
  int data_1[3][3] = {
    {1, 2500, 3},
    {45, 5, 612345},
    {7, 88, 9}
  };
  const char* row_headers[] = {"abc", "defashdashdj", "xpp"};
  const char* col_headers[] = {"abc", "defdsahfjdsj", "xpp"};
  print_int_matrix(3, 3, data_1, row_headers, col_headers);

  return 0;
}