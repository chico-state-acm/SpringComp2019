# Persistent Numbers

---

Given a number __*N*__, find the smallest number __*X*__ whose Persistence is __*N*__. The Persistence of a number X is the number of times a given operation must be performed on __*X*__ to reach a fixed point. For this problem, the operation will be taking the product of all of the digits in __*X*__ and the stopping point will be when X has only one digit. 


## example 
x = 1234 
1. 1\*2\*3\*4 → 24 
2. 2\*4 → 8

This gives us a persistence of 2


## Inputs
    One integer N

## Constraints
    0 < N < 11

## Output
    One integer with no trailing new line


### Sample Input
```
1
```

### Sample Output
```
10
```

