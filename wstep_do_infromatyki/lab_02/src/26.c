//============================================================================
// Zadanie 2.6
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>
#include <stdbool.h>

static int h = 0;

bool ret_false(int i, int j) { return false; }
bool task_a(int i, int j) { return true; }
bool task_b(int i, int j) { return j <= i; }
bool task_c(int i, int j) { return j < h-i; }
bool task_d(int i, int j) { return j >= h-i-1; }
bool task_e_1(int i, int j) { return j >= i; }
bool task_e_2(int i, int j) { return j < h-i-1; }

void print_shape(char task, bool (*compare_1)(int, int), bool (*compare_2)(int, int)) {
  printf("%c)\n", task);
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < h; j++)
      printf("%c", compare_1(i, j) ? '*' : ' ');
    for (int j = 0; j < h; j++)
      printf("%c", compare_2(i, j) ? '*' : ' ');
    printf("\n");
  }
}

int main() {
  printf("Prosze podac h:\n");
  scanf("%d", &h);

  print_shape('a', task_a, ret_false);
  print_shape('b', task_b, ret_false);
  print_shape('c', task_c, ret_false);
  print_shape('d', task_d, ret_false);
  print_shape('e', task_e_1, task_e_2);
}