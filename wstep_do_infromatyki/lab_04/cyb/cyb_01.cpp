#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "../../templates/array_templates.hpp"
#include "../../templates/print_templates.hpp"

const int N = 20;

int main() {
  int a, b;
  scanf("%d %d", &a, &b);

  int arr[N];
  for (int i = 0; i < N; i++)
    arr[i] = rand() % (b - a + 1) + a;

  print_array(arr);

  int gis = 1;
  int idx = 0;
  for (int i = 1; i < N; i++) {
    gis = arr[i] > arr[i-1] ? gis + 1 : 1;
    idx = arr[i] > arr[i-1] ? idx : i;
  }
  
  printf("\n%d, %d", gis, idx);
}
