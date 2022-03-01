#!/bin/bash

set -e

echo "Start created....."

./mk_libsortstr_a.sh
gcc zad19.c -L. -lsortstr -o zad19

echo "End"