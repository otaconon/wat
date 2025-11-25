#pragma once

#include <stdint.h>
#include <math.h>
#include <stdio.h>

template<typename T, size_t N>
void reverse_array(T (&arr)[N], int start, int end) {
  while (start < end) {
    T temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

template<typename T, size_t N>
void rotate_right(T (&arr)[N], int k) {
  if (k == 0)
    return;

  reverse_array(arr, 0, N-1);
  reverse_array(arr, 0, k-1);
  reverse_array(arr, k, N-1);
}

template<typename T, size_t N>
void rotate_left(T (&arr)[N], int sz, int k) {
  if (k == 0)
    return;

  reverse_array(arr, 0, k-1);
  reverse_array(arr, k, N-1);
  reverse_array(arr, 0, N-1);
}