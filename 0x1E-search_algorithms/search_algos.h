#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>

void print_array(const int *array, size_t low, size_t size);
int value_search(int *array, size_t size, size_t low, size_t high, int value);

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
