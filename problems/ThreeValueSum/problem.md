# Three Value Sum

Given an array of integers, and an integer __*k*__, count how many ways you can choose three distinct integers from the array, such that the sum of three integers is equal to __*k*__.

## Input Format

The first line contains 2 space-separated integers, __*N*__ and __*k*__ respectively. __*N*__ is the number of values in the array, and __*k*__ is the value the three integers should sum to.
The second line contains __*N*__ space-separated integers, representing values in the array.

## Constraints

- 3 <= __*N*__ <= 5000
- 3 <= __*k*__ <= 10<sup>5</sup>
- 0 <= __*A<sub>i</sub>*__ <= 10<sup>5</sup>
- Each integer A<sub>i</sub> will be unique

## Output Format

Print a single integer, representing the number of different three-value combinations which sum to equal __*k*__.

## Sample Input
<pre>
6 10
3 5 11 2 4 1
</pre>

## Sample Output
<pre>
2
</pre>
