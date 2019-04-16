# K Degrees Of Bacon

Billy is trying to cook up a delicious breakfast before school, but the he can't figure out the instructions. The temperatures written on the box are in all different scales. Help Billy by writing a program that takes in a temperature, and the scale it uses, and outputs the equivalent temperature in Fahrenheit.

Note:

* (F - 32) * (5/9) -> C
* C + 273.15 -> K

## Input Format

- The first line contains __*T*__ a double representing the temperature that need to be converted.
- The second line contains __*S*__, a character representing the scale the temperature corresponds with: 'F' for Fahrenheit, 'C' for Celsius, or 'K' for Kelvin.

## Constraints
- -100.0 <= __*T*__ <= 500.0
- S is one of three characters, 'F', 'C', or 'K'

## Output Format

Print the double corresponding to the input temperature converted to Fahrenheit and accurate to 2 places past the decimal point, followed by a newline.

## Sample Input
<pre>
400.0
K
</pre>

## Sample Output
<pre>
260.33
</pre>
