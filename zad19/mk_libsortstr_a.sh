#!/bin/bash

set -e

echo "Creating archive"

gcc -c *_str.c
ar cr lisortstr.a *_str.o
rm *_str.o

echo "Archive created"
