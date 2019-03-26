# Satellite Schedule

---

You are a programmer working on a solar system probe network. It is able to communicate large chunks of scientific data over vast distances, but is limited by the relative movement of the planets. The orbital mechanics team has calculated a schedule of how much data the involved satellites will be able to communicate with each other per week, over the course of the next mission cycle. You have been tasked with calculating how much total data the network could ship from the outer reaches to Earth over the course of the mission cycle, given the connectivity schedule.

---

## Input Format

The first line contains two integers:
* __*N*__, the number of communication nodes in the network.
* __*M*__, the number of weeks in the mission cycle.

There are then M groups of N lines. Each group represents one week of the mission cycle:
* Each of the N lines in the group creates N integers.
* Each entry at line *i*, column *j* represents the number of gigabytes of data that can be transferred that week from satellite *i* to satellite *j*.
* Because of speed-of-light delay, the links are not necessarily symmetric.

## Constraints 

1 <= __*n*__ <= 20

## Output Format

Print the total number of gigabytes which can be transferred from the last node (N) to the first node (1), utilizing all available capacity, over the course of the mission cycle.

### Sample Input
```
...
```

### Sample Output
```
...
```
