# Max Length Chain

For this problem, we use pairs of numbers (a, b), where a < b. We would like to form a chain of pairs such that if a pair (c, d) follows another pair (a, b), then b < c.

Given a set of __*N*__ pairs, find the length of the longest chain that can be formed following the condition above.

## Input Format

The first line contains a single integer __*N*__, the number of pairs.
The next __*N*__ lines each contain two integers, __*a*__ and __*b*__ denoting the first and second values in each pair.

## Constraints

- 1 <= __*N*__ <= 100
- 1 <= __*a*__, __*b*__ <= 1000
- a < b for any given pair.

## Output Format

Print a single integer, representing the number of pairs in the maximal length pair chain, followed by a newline.

## Sample Input
<pre>
4
652 755
400 933
61 677
369 740
</pre>

## Sample Output
<pre>
1
</pre>
