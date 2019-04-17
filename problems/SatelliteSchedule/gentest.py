#!/usr/bin/env python3

import random

N = random.randint(2, 20)
M = random.randint(1, 20)
matrix = [[0 for _ in range(N)] for _ in range(N)]

for i, row in enumerate(matrix):
    for _ in range(1, N//2):
        target = i + random.randint(-N//2, N//2)
        if target == i or target < 0 or target >= N:
            continue
        row[target] = int(random.triangular(1, 1000, 20))

print(N, M)
for row in matrix:
    print(*row)
