# Tidy Numbers
---
Tidy numbers are those whose digits (when represented in base 10) are in non-decreasing order from left to right.
For example:
<blockquote>`123, 12233, 8`</blockquote>

When he's not programming, Robert likes to count out loud from one up to some random number to pass the time.  Because many of the numbers he chooses are quite large, Robert's excitement upon finally reaching his target number oftentimes makes him forget which was the last tidy number he said while counting.  This is tragic because Robert loves tidy numbers.

Robert needs your help to discover the last tidy number he encountered during his most recent counting-spree.

### Input
<p>The first line of the input contains a positive integer, **_T_**, denoting how many numbers he counted to in his latest counting-spree.</p>
<p>The next **_T_** lines each contain a single positive integer, **_N_**, which is a number Robert counted to.</p>

### Output
For each number Robert counted to, output the last tidy Robert reached, followed by a newline.

### Constraints
* 1 ≤ **_T_** ≤ 100
* 1 ≤ **_N_** < 10<sup>19</sup>

### Sample Input
<pre>
4
132
1000
7
111111111111111110
</pre>

### Sample Output
<pre>
129
999
7
99999999999999999
</pre>

"[Tidy Numbers](https://code.google.com/codejam/contest/3264486/dashboard#s=p1)" by [Google LLC](https://www.google.com/) is licenced under [CC BY 3.0](https://creativecommons.org/licenses/by/3.0/)