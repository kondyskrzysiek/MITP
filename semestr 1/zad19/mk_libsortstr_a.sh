#!/bin/bash

set -e

echo "Created library"

gcc -c *_str.c
ar cr libsortstr.a *_str.o
rm *_str.o

echo "End created library"
