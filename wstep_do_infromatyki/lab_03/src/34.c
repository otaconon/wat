//============================================================================
// Zadanie 3.4
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>
#include <math.h>

#define N 20

int tabZ[N] = {625,640,631,621,7,773,722,735,741,779,772,780,778,850,77,856,855,853,852,863};

void print() {
  int max_space = 0;
  for (int i = 0; i < N; i++)
    max_space = fmax(max_space, snprintf(NULL, 0, "%d", tabZ[i]));

  for (int i = 0; i < N; i++)
    printf("%*d%c", max_space, tabZ[i], ((i+1) % 10 == 0) ? '\n' : ' ');
}


int main() {
  print();
  return 0;
}

