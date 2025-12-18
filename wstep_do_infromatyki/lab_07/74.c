//============================================================================
// Zadanie 7.4
// Wdi IY3S1 Olbrys Maksymilian
//============================================================================

#include <stdio.h>
#include <string.h>

#define N 11

typedef struct {
  char Nazwa[20];
  int Wypornosc;
  char Dlugosc[10];
  char Szerokosc[10];
  char Zanurzenie[10];
  int Kaliber;
  int IloscDzial;
  int IloscPlot25;
  int IloscPlot13;
  int Wyrzutnie;
  int Bomby;
  int Vmax;
  int Zaloga;
} Typ_DD;

int main() {
  char TN[N][20] = {
    "Matsu", "Akizuki", "Yugumo", "Shimakaze", "Kagero", "Asashio",
    "Shiratsuyu", "Hatsuharu", "Akatsuki", "Fubuki", "Mutsuki"
  };
  int TWyp[N] = { 1530, 2700, 2520, 3048, 2490, 2370, 1980, 1802, 1980, 2090, 1772 };
  char TDl[N][10] = {
    "328'1", "440'3", "390'11", "413'4", "388'9", "388'0", "352'8", "359'3", "378'3", "338'9", ""
  };
  char TSx[N][10] = {
    "30'8", "38'1", "35'5", "36'9", "35'5", "33'11", "32'6", "32'9", "34'0", "30'0", ""
  };
  char TZan[N][10] = {
    "10'10", "13'7", "12'4", "13'7", "12'4", "12'1", "11'6", "9'11", "10'6", "9'8", ""
  };
  int TAGK[N] = { 127, 100, 127, 127, 127, 127, 127, 127, 127, 127, 120 };
  int TAGI[N] = { 3, 8, 6, 6, 6, 6, 5, 5, 6, 6, 4 };
  int TAA25[N] = { 29, 51, 28, 28, 28, 28, 21, 21, 28, 22, 20 };
  int TAA13[N] = { 0, 0, 4, 4, 4, 4, 4, 4, 10, 10, 5 };
  int TTT[N] = { 4, 4, 8, 15, 8, 8, 8, 6, 9, 9, 6 };
  int TDC[N] = { 36, 72, 36, 18, 36, 36, 16, 36, 36, 36, 18 };
  int TVmx[N] = { 27, 33, 35, 39, 35, 35, 34, 35, 38, 38, 37 };
  int TZal[N] = { 110, 300, 228, 312, 240, 200, 180, 200, 197, 197, 150 };

  Typ_DD TTDD[N];
  int i;

  for (i = 0; i < N; i++) {
    strcpy(TTDD[i].Nazwa, TN[i]);
    TTDD[i].Wypornosc = TWyp[i];
    strcpy(TTDD[i].Dlugosc, TDl[i]);
    strcpy(TTDD[i].Szerokosc, TSx[i]);
    strcpy(TTDD[i].Zanurzenie, TZan[i]);
    TTDD[i].Kaliber = TAGK[i];
    TTDD[i].IloscDzial = TAGI[i];
    TTDD[i].IloscPlot25 = TAA25[i];
    TTDD[i].IloscPlot13 = TAA13[i];
    TTDD[i].Wyrzutnie = TTT[i];
    TTDD[i].Bomby = TDC[i];
    TTDD[i].Vmax = TVmx[i];
    TTDD[i].Zaloga = TZal[i];
  }

  printf("%-3s %-12s %6s %8s %7s %7s %4s %3s %5s %5s %5s %5s %5s %5s\n",
      "Lp.", "Nazwa", "Wyp.", "Dl.", "Szer.", "Zan.", 
      "Kal.", "Dz.", "AA25", "AA13", "Tor.", "Bomb", "Vmax", "Zal.");

  for (i = 0; i < N; i++) {
    printf("%-3d %-12s %6d %8s %7s %7s %4d %3d %5d %5d %5d %5d %5d %5d\n",
        i + 1,
        TTDD[i].Nazwa,
        TTDD[i].Wypornosc,
        TTDD[i].Dlugosc,
        TTDD[i].Szerokosc,
        TTDD[i].Zanurzenie,
        TTDD[i].Kaliber,
        TTDD[i].IloscDzial,
        TTDD[i].IloscPlot25,
        TTDD[i].IloscPlot13,
        TTDD[i].Wyrzutnie,
        TTDD[i].Bomby,
        TTDD[i].Vmax,
        TTDD[i].Zaloga);
  }

  return 0;
}