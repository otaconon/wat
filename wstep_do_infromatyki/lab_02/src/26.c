//============================================================================
// Zadanie 2.6
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>
#include <stdbool.h>

static int h = 0;

// Funkcje porownawcze dla poszegolnych podpunktow
bool ret_false(int i, int j) { return false; }
bool task_a(int i, int j) { return true; }
bool task_b(int i, int j) { return j <= i; }
bool task_c(int i, int j) { return j < h-i; }
bool task_d(int i, int j) { return j >= h-i-1; }
bool task_e_1(int i, int j) { return j >= i; }
bool task_e_2(int i, int j) { return j < h-i-1; }

// Funkcja ktora jako argumenty przyjmuje funkcje porownawcze, w celu wypisania wiersza
void print_row(int i, bool (*compare_1)(int, int), bool (*compare_2)(int, int)) {
  for (int j = 0; j < h; j++)
    printf("%c", compare_1(i, j) ? '*' : ' ');
  for (int j = 0; j < h; j++)
    printf("%c", compare_2(i, j) ? '*' : ' ');
}

int main() {
  printf("Prosze podac h:\n");
  scanf("%d", &h);

  // wypisanie oznaczen podpunktow w odpowiednich odstepach
  const char* tasks[5] = {"a)", "b)", "c)", "d)", "e)"};
  for (int j = 0; j < h*10 - 5*2; j++) {
    printf("%s", j % (2*h - 1) == 0 ? tasks[j/(2*h-1)] : " ");
  }
  printf("\n\n");

  for (int i = 0; i < h; i++) {
    print_row(i, task_a, ret_false);
    print_row(i, task_b, ret_false);
    print_row(i, task_c, ret_false);
    print_row(i, task_d, ret_false);
    print_row(i, task_e_1, task_e_2);
    printf("%c", '\n');
  }
}