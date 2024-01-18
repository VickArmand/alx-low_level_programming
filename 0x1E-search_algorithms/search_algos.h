#ifndef SEARCH_ALGOS_H_
#define SEARCH_ALGOS_H_
#include <stdio.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t start, size_t end);
#endif
