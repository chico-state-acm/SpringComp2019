# Server Farm

Bethany is in charge of her company's small server farm, but she has a problem. She was provided with a list of the servers sorted by how long they've been in service. However the list she was given includes some servers multiple times. Bethany knows that if the same server appears on the list repeatedly, the first entry will be the correct one. Write a program that can condense the server list, eliminating any duplicate entries while preserving the order.

## Input Format

The first line contains a single integer __*N*__, denoting the number of entries on the list.
The second line contains __*N*__ space-separated integers, the server numbers on Bethany's list.

## Constraints

- 1 <= __*N*__ <= 10<sup>5</sup>
- 0 <= __*A<sub>i</sub>*__ <= 10<sup>3</sup>

## Output Format

Print the input list with any duplicates removed, followed by a newline.

## Sample Input
<pre>
10
5 2 10 9 5 10 11 20 1 100
</pre>

## Sample Output
<pre>
5 2 10 9 11 20 1 100
</pre>
