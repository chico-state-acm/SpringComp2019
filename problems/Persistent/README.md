# Persistent Numbers

The Persistence of a number __*X*__ is the number of times a given operation must be performed on __*X*__ to reach a fixed point. For this problem, the operation will be taking the product of all of the digits in __*X*__ and the stopping point will be when __*X*__ has only one digit. 

For example, starting with 1234, we reach a single-digit number in two steps:

1. 1\*2\*3\*4 → 24 
2. 2\*4 → 8

This gives us a persistence of 2.

Given a number __*N*__, find the smallest number __*X*__ whose Persistence is __*N*__.

## Input Format
One integer, __*N*__.

## Constraints
* 0 < __*N*__ < 11

## Output Format
One line containing the smallest number __*X*__ whose Persistence is __*N*__.

## Sample Input
```
1
```

## Sample Output
```
10
```

