#!/bin/bash

set -e

echo "compiler build ...."

g++ -o task2 -Wall task2.cpp -O0

echo "END"

read -p "Press any key..."