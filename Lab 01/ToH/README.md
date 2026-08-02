# Tower of Hanoi (ToH)

## Aim

To implement the **Tower of Hanoi** algorithm using recursion in C, determine the total number of moves required to solve the problem, and analyze how the number of moves grows as the number of disks increases.

---

## Problem Statement

Implement a recursive solution for the **Tower of Hanoi** problem. Plot the total number of moves required for different values of **n** (number of disks) and analyze the algorithm based on the graph obtained.

---

## Approach

- Read the number of disks from the user.
- Solve the Tower of Hanoi recursively by moving disks between the source, auxiliary, and destination pegs.
- Count every move made during the recursion.
- Record the total number of moves for different values of **n**.
- Store the results in a CSV file and plot them using Python.

---

## Algorithm

1. Read the number of disks **n**.
2. If **n = 1**, move the disk directly from the source peg to the destination peg.
3. Otherwise:
   - Move the top **n − 1** disks from the source peg to the auxiliary peg.
   - Move the largest disk to the destination peg.
   - Move the **n − 1** disks from the auxiliary peg to the destination peg.
4. Increment the move counter after every move.
5. Display the sequence of moves and the total number of moves.

---

## Concepts Used

- Recursion
- Divide and Conquer
- Recursive Functions
- Performance Analysis
- CSV File Handling
- Python (Pandas & Matplotlib)

---

## Sample Output

```
Enter the number of disks: 10

Sequence of Moves:

Move Disk 1 from A to C
Move Disk 2 from A to B
...
Move Disk 2 from A to C
Move Disk 1 from B to C

----------------------------------
Total Moves Required = 1023
----------------------------------
```

---

## Observation

| Number of Disks | Total Moves |
|----------------:|------------:|
| 1 | 1 |
| 2 | 3 |
| 3 | 7 |
| 4 | 15 |
| 5 | 31 |
| 6 | 63 |
| 7 | 127 |
| 8 | 255 |
| 9 | 511 |
| 10 | 1023 |
| 11 | 2047 |
| 12 | 4095 |
| 13 | 8191 |
| 14 | 16383 |
| 15 | 32767 |

The total number of moves follows the formula:

\[
\text{Moves} = 2^n - 1
\]

---

## Performance Graph

The plotted graph shows that the number of moves grows exponentially with the number of disks. Initially the increase is gradual, but after a few additional disks the required moves increase very rapidly.

*(Insert the generated graph here in your GitHub repository.)*

---

## Time Complexity

**O(2ⁿ)**

Each additional disk nearly doubles the number of recursive calls and moves.

---

## Space Complexity

**O(n)**

The recursive function requires a maximum recursion depth of **n**, so the auxiliary space used by the call stack is proportional to the number of disks.

---

## Conclusion

The recursive implementation successfully solves the Tower of Hanoi problem and correctly counts the total number of moves. The graph clearly demonstrates **exponential growth**, confirming that the number of moves required is **2ⁿ − 1**. As the number of disks increases, the execution time grows rapidly, making the algorithm impractical for large values of **n** despite its elegant recursive solution.