#include <stdio.h>
#include <string.h>

typedef struct {
  char Imie[20];
  char Rasa[30];
  int Wiek;
} Pies;

typedef struct {
  char Imie[20];
  char Nazwisko[30];
  Pies Psy[4];
  int LiczbaPsow;
} Wlasciciel;

void wyswietlStan(Wlasciciel w) {
  int i;
  printf("\n--- STAN POSIADANIA ---\n");
  printf("Wlasciciel: %s %s\n", w.Imie, w.Nazwisko);
  printf("Liczba psow: %d/4\n", w.LiczbaPsow);

  if (w.LiczbaPsow == 0) {
    printf("(Brak psow)\n");
  } else {
    printf("Lista psow:\n");
    for (i = 0; i < w.LiczbaPsow; i++) {
      printf("%d. %s (Rasa: %s, Wiek: %d)\n",
          i + 1, w.Psy[i].Imie, w.Psy[i].Rasa, w.Psy[i].Wiek);
    }
  }
  printf("-----------------------\n");
}

void dodajPsa(Wlasciciel *w) {
  if (w->LiczbaPsow >= 4) {
    printf("BLAD: Osiagnieto limit 4 psow!\n");
    return;
  }

  printf("\nDodawanie psa nr %d:\n", w->LiczbaPsow + 1);
  printf("Podaj imie psa: ");
  scanf("%s", w->Psy[w->LiczbaPsow].Imie);
  printf("Podaj rase: ");
  scanf("%s", w->Psy[w->LiczbaPsow].Rasa);
  printf("Podaj wiek: ");
  scanf("%d", &w->Psy[w->LiczbaPsow].Wiek);

  w->LiczbaPsow++;
}

void usunPsa(Wlasciciel *w, char *imiePsa) {
  int i, j;
  int znaleziono = 0;

  for (i = 0; i < w->LiczbaPsow; i++) {
    if (strcmp(w->Psy[i].Imie, imiePsa) == 0) {
      znaleziono = 1;
      for (j = i; j < w->LiczbaPsow - 1; j++) {
        w->Psy[j] = w->Psy[j + 1];
      }
      w->LiczbaPsow--;
      printf("Sukces: Pies %s zostal usuniety.\n", imiePsa);
      break;
    }
  }

  if (!znaleziono) {
    printf("Blad: Nie znaleziono psa o imieniu %s.\n", imiePsa);
  }
}

int main() {
  Wlasciciel w;
  int wybor;
  char nazwaDoUsuniecia[20];

  w.LiczbaPsow = 0;

  printf("Podaj imie wlasciciela: ");
  scanf("%s", w.Imie);
  printf("Podaj nazwisko wlasciciela: ");
  scanf("%s", w.Nazwisko);

  while (1) {
    printf("\nMENU:\n");
    printf("1. Dodaj psa\n");
    printf("2. Usun psa\n");
    printf("3. Wyswietl stan\n");
    printf("4. Koniec\n");
    printf("Wybierz opcje: ");
    scanf("%d", &wybor);

    switch (wybor) {
    case 1:
      dodajPsa(&w);
      break;
    case 2:
      printf("Podaj imie psa do usuniecia: ");
      scanf("%s", nazwaDoUsuniecia);
      usunPsa(&w, nazwaDoUsuniecia);
      break;
    case 3:
      wyswietlStan(w);
      break;
    case 4:
      return 0;
    default:
      printf("Niepoprawna opcja.\n");
    }
  }

  return 0;
}