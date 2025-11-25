#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "../../templates/print_templates.hpp"
#include "../../templates/array_templates.hpp"

const int N = 20;

int main() {
  int a, b;
  scanf("%d %d", &a, &b);

  int arr[N];
  for (int i = 0; i < N; i++)
    arr[i] = rand() % (b - a + 1) + a;

  print_array(arr);
  rotate_right(arr, 1);
  print_array(arr);
}