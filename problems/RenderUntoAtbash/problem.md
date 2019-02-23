# Render Unto Atbash

---

The Atbash cipher is a simple substitution cypher originally used with the Hebrew alphabet, but modifiable to be used with the English alphabet. In the cipher, a letter is mapped to its reverse. 'A' becomes 'Z', 'Z' becomes 'A', 'B' becomes 'Y', 'Y' becomes 'B', and so on.

Write a program that takes a string and applies the Atbash cipher to it while preserving the case of the original string. i.e. 'a' -> 'z' 'A' -> 'Z' 

---

## Input Format

The first line contains __*n*__ the length of the input string.
The second line contains the input string __*S*__.

## Constraints 

1 <= __*n*__ <= 100
- The input string __*S*__ contains only alphabetic characters.

## Output Format

Print the string resulting from ciphering the input string, followed by a newline.

### Sample Input
```
10
HelloWorld
```

### Sample Output
```
10
SvoolDliow
```
