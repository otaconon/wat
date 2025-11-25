#pragma once

#include <iomanip>
#include <iostream>
#include <math.h>
#include <stdint.h>

using namespace std;

template <typename T, size_t N>
void print_array(T (&arr)[N]) {
  int max_space = 0;
  for (size_t i = 0; i < N; i++)
    max_space = fmax(max_space, snprintf(NULL, 0, "%d", arr[i]));

  cout << "======== TABLICA ========\n";
  for (size_t i = 0; i < N; i++) {
    cout << setw(max_space) << arr[i];
    cout << (((i + 1) % 10 == 0) ? '\n' : ' ');
  }
  cout << "\n";
}

template <typename T, size_t N, size_t M>
void print_matrix(T (&arr)[N][M]) {
  int max_space = 0;
  for (size_t i = 0; i < N; i++)
    for (size_t j = 0; j < M; j++)
      max_space = fmax(max_space, snprintf(NULL, 0, "%d", arr[i][j]));

  cout << "======== TABLICA ========\n";
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < M; j++)
      cout << setw(max_space) << arr[i][j] << ' ';
    cout << "\n";
  }
}
