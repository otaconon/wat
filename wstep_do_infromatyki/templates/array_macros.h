#include <stdint.h>
#include <math.h>
#include <stdio.h>

#define reverse_array(arr, start, end) do { \
  typeof(start) _start = (start); \
  typeof(end) _end = (end); \
  while (_start < _end) { \
    typeof(arr[0]) temp = arr[_start]; \
    arr[_start] = arr[_end]; \
    arr[_end] = temp; \
    _start++; \
    _end--; \
  } \
} while(0)

#define rotate_right(arr, k) do { \
  int sz = sizeof(arr) / sizeof((arr)[0]); \
  typeof(k) _k = k % sz; \
  if (_k == 0) break; \
  reverse_array(arr, 0, sz-1); \
  reverse_array(arr, 0, _k-1); \
  reverse_array(arr, _k, sz-1); \
} while(0)

#define rotate_left(arr, k) do { \
  int sz = sizeof(arr) / sizeof((arr)[0]); \
  typeof(k) _k = k % sz; \
  if (_k == 0) break; \
  reverse_array(arr, 0, _k-1); \
  reverse_array(arr, _k, sz-1); \
  reverse_array(arr, 0, sz-1); \
} while(0)