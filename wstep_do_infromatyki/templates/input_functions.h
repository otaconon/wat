#include <stdio.h>

#include "input_structs.h"

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