# Satellite Schedule

---

You are a programmer working on a solar system probe network. It is able to communicate large chunks of scientific data over vast distances, but is limited by the relative movement of the planets. The orbital mechanics team has calculated a schedule of how much data the involved satellites will be able to communicate with each other per week, over the course of the next mission cycle. You have been tasked with calculating how much total data the network could ship from the outer reaches to Earth over the course of the mission cycle, given the connectivity schedule.

Because of speed-of-light delay, satellite-to-satellite links are not necessarily symmetric. Satellites can be considered to have unlimited storage capacity.

---

## Input Format

The first line contains two integers:
* __*N*__, the number of communication nodes in the network.
* __*M*__, the number of weeks in the mission cycle.

The next N lines contain N integers each and form a grid __*G*__. Each entry at line *i*, column *j* represents the number of terabytes of data that can be transferred peer week from satellite *i* to satellite *j*.

## Constraints 

1 <= __*N*__, __*M*__ <= 20
1 <= __*G[i][j]*__ <= 1000

## Output Format

Print the total number of terabytes which can be transferred from the last node (N) at the beginning of the mission cycle to the first node (1) at the end of the mission cycle, utilizing as much available capacity as possible.

### Sample Input
```
...
```

### Sample Output
```
...
```