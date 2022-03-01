#!/bin/bash

set -e

echo "Created library"

gcc -c *_str.c *_int.c
ar cr libsort.a *_str.o *_int.o
rm *_str.o *_int.o

echo "End created library"
