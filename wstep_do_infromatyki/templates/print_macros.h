#include <stdint.h>
#include <math.h>
#include <stdio.h>

#define print_array(arr) do { \
    int sz = sizeof(arr) / sizeof((arr)[0]); \
    int max_space = 0; \
    for (int i = 0; i < sz; i++) \
      max_space = fmax(max_space, snprintf(NULL, 0, "%d", arr[i])); \
    printf("======== TABLICA ========\n"); \
    for (int i = 0; i < sz; i++) { \
        _Generic((arr)[0], \
            int: printf("%*d", max_space, (arr)[i]), \
            float: printf("%*.2f", max_space, (arr)[i]), \
            double: printf("%*.2f", max_space, (arr)[i]), \
            char: printf("%*c", max_space, (arr)[i]), \
            long: printf("%*ld", max_space, (arr)[i]), \
            default: printf("%*p", max_space, (void*)&(arr)[i]) \
        ); \
        printf("%c", ((i+1) % 10 == 0) ? '\n' : ' '); \
    } \
    printf("\n"); \
} while(0)
