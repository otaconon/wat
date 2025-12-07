//============================================================================
// Zadanie 5.2
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 20

char tabN[N][20] = {"Aoba", "Furutaka", "Kako", "Kinugasa", "Myoko", "Nachi", "Haguro", "Ashigara",
    "Takao", "Atago", "Chokai", "Maya", "Mogami", "Mikuma", "Kumano", "Suzuya",
    "Tone", "Chikuma", "Ibuki", "Oyodo"};

int main() {
  printf("Lp.    \tslowo\n");
  for (int i = 0; i < N; i++) {
    printf("%d.\t%s\n", i+1, tabN[i]);
  }

  printf("\n");
  int lp = 0;
  printf("Lp.    \tslowo\n");
  for (int i = 0; i < N; i++) {
    int m = strlen(tabN[i]);
    if (m >= 5 && tolower(tabN[i][0]) == tolower(tabN[i][m-1])) {
      printf("%d.   \t%s\n", lp+1, tabN[i]);
      lp++;
    }
  }
}