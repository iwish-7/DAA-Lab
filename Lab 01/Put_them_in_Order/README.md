# Put Them in Order

## Aim

To implement a C program that arranges a given set of mathematical functions in **increasing order of asymptotic growth** for sufficiently large values of **n** using the concept of time complexity.

---

## Problem Statement

Arrange the following functions in increasing order of growth:

- \(n \log_2 n\)
- \(12\sqrt{n}\)
- \(1/n\)
- \(n^{\log_2 n}\)
- \(100n^2 + 6n\)
- \(n^{0.51}\)
- \(n^2 - 324\)
- \(50n^{0.5}\)
- \(2n^3\)
- \(3^n\)
- \(2^{32}n\)
- \(\log_2 n\)

---

## Approach

- Store each function along with its corresponding asymptotic complexity and ranking.
- Assign a rank based on the increasing order of growth.
- Use the `qsort()` function to sort the list according to the assigned rank.
- Print the sorted functions along with their Big-O notation.

---

## Algorithm

1. Create a structure to store:
   - Function expression
   - Big-O notation
   - Rank
2. Initialize an array containing all the given functions.
3. Assign ranks based on their asymptotic growth.
4. Sort the array using the C library function `qsort()`.
5. Display the functions in increasing order of growth.

---

## Concepts Used

- Structures (`struct`)
- Arrays
- Sorting using `qsort()`
- Comparator functions
- Asymptotic Analysis
- Big-O Notation

---

## Expected Output

```
Functions in Increasing Order of Growth (as n -> infinity):

1. 1 / n
2. log2(n)
3. 12 * sqrt(n)
4. 50 * n^0.5
5. n^0.51
6. (2^32) * n
7. n * log2(n)
8. n^2 - 324
9. 100n^2 + 6n
10. 2 * n^3
11. n^(log2(n))
12. 3^n
```

*(Output verified using the program execution.)*

---

## Time Complexity

- Sorting using `qsort()` takes **O(n log n)**.
- Since there are only 12 functions, the execution time is effectively constant for this problem.

---

## Space Complexity

**O(1)** (excluding the fixed-size array used to store the functions).

---

## Conclusion

This program successfully arranges the given mathematical functions according to their asymptotic growth for large values of **n**. It demonstrates the practical use of **Big-O notation**, structures, and sorting techniques in C to compare the growth rates of different functions.