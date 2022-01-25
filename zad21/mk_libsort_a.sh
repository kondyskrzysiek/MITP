#!/bin/bash

set -e

echo "Creating archive"

gcc -c *_sort.c swap.c
ar cr libsortint.a *_sort.o swap.o
rm *_sort.o swap.o

echo "Archive created"
