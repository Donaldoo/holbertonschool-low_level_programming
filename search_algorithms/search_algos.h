#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/* macro */
#define MIN(A, B) ((A) < (B) ? (A) : (B))

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t position, size_t size);
int jump_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binarySearch(int *array, size_t left, size_t right , int value);

#endif
