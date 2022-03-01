#!/bin/bash

set -e

echo "Start created....."

./mk_libsort_a.sh
gcc zad18a.c -L. -lsort -o zad18a
gcc zad19a.c -L. -lsort -o zad19a

echo "End"