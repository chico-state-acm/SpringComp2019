#!/usr/bin/python3

from sys import argv, stderr
from random import randint

if len(argv) != 3:
    print('USAGE: gen_tests.py <num digits> <num tests>', file=stderr)
    exit(1)

num_tests = int(argv[2])
num_digits = int(argv[1])

print(num_tests)
for test in range(num_tests):
    for i in range(num_digits):
        first = 1 if i == 0 else 0
        print('0123456789'[randint(first, 9)], end='')
    print()
