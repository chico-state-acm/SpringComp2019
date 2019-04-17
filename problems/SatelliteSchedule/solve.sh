#!/bin/sh

make solution
for f in tests/t*.in; do
    out=${f%.*}.out
    ./solution <$f >$out
done
