#ifndef _SORTSTR_H
#define _SORTSTR_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void bubble_sort(void *base, size_t len, size_t width, int (*compar)(const void *, const void *));
void select_sort(void *base, size_t len, size_t width, int (*compar)(const void *, const void *));
void swap(void *ad1, void *ad2, int bytes);
#endif