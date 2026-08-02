# Element Uniqueness

## Aim

To implement a C program that generates **n random numbers** and checks whether the array contains any duplicate elements. If duplicates are present, the program also displays the indices where they occur.

---

## Problem Statement

Generate **n** random numbers and determine whether any duplicate values exist in the array. If duplicates are found, print the repeated element along with the indices at which it appears. Also, analyze the behavior of the method for sufficiently large values of **n**.

---

## Approach

- Generate an array of random integers in the range **0–99**.
- Compare each element with the remaining elements in the array.
- Keep track of elements that have already been processed to avoid printing the same duplicate multiple times.
- If an element appears more than once, display the element and the indices where it occurs.
- If no duplicates are found, display an appropriate message.

---

## Algorithm

1. Read the number of elements **n**.
2. Generate **n** random numbers and store them in an array.
3. Initialize a helper array to mark already processed duplicate elements.
4. For each element:
   - Skip it if it has already been processed.
   - Compare it with all subsequent elements.
   - Count the number of occurrences.
   - If the count is greater than one, print the element and its indices.
5. If no duplicates are detected, display **"No duplicates found."**

---

## Concepts Used

- Arrays
- Nested Loops
- Random Number Generation (`rand()`)
- Duplicate Detection
- Time Complexity Analysis

---

## Sample Output

```
Enter number of elements: 15

Generated Array:
23 15 67 23 89 42 15 90 12 67 54 18 23 91 42

Duplicate Elements:
23 found at indices: 0, 3, 12
15 found at indices: 1, 6
67 found at indices: 2, 9
42 found at indices: 5, 14
```

*Since the array is generated randomly, the output will be different for each execution.*

---

## Time Complexity

**O(n²)**

Each element is compared with the remaining elements in the array, resulting in quadratic time complexity.

---

## Space Complexity

**O(n)**

An additional array is used to keep track of elements that have already been processed.

---

## Conclusion

The program successfully detects duplicate elements in a randomly generated array and reports their positions. Since it uses nested loops, the algorithm has a time complexity of **O(n²)**, making it less efficient for very large values of **n**. For larger datasets, more efficient approaches such as **sorting (O(n log n))** or **hashing (O(n))** are generally preferred.