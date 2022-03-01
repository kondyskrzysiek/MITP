#!/bin/bash

set -e

echo "Start created....."

./mk_libsort_a.sh
gcc zad18b.c -L. -lsort -o zad18b
gcc zad19b.c -L. -lsort -o zad19b

echo "End"