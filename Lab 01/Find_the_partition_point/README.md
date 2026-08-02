# Find the Partition Point

## Aim

To implement a C program that finds the exact partition point in an array containing a sequence of **0s followed by 1s** using the Binary Search algorithm.

---

## Problem Statement

Given an array of **n** elements where all the **0s appear before all the 1s**, determine the exact point where the transition from **0** to **1** occurs.

Example:

```
Input:
0 0 1 1 1

Output:
Partition Point = 2
Transition occurs between index 2 and 3
```

---

## Approach

- Since the array is already sorted (all 0s followed by all 1s), Binary Search can be used to efficiently locate the first occurrence of **1**.
- Whenever a **1** is found, store its index and continue searching in the left half to check if an earlier **1** exists.
- The first occurrence of **1** represents the partition point.

---

## Algorithm

1. Read the number of elements and the array.
2. Initialize:
   - `low = 0`
   - `high = n - 1`
   - `ans = -1`
3. Perform Binary Search:
   - Find the middle element.
   - If the middle element is **1**, store its index and search the left half.
   - Otherwise, search the right half.
4. After the search:
   - If no **1** is found, display an appropriate message.
   - Otherwise, print the partition point and the transition indices.

---

## Concepts Used

- Binary Search
- Arrays
- Functions
- Time Complexity Analysis

---

## Sample Output

```
Enter number of elements: 5
Enter elements (0s followed by 1s):
0
0
1
1
1

Partition Point = 2
Transition occurs between index 2 and 3
```

---

## Time Complexity

**O(log n)**

The program uses Binary Search, reducing the search space by half in each iteration.

---

## Space Complexity

**O(1)**

Only a few additional variables are used regardless of the input size.

---

## Conclusion

This program successfully identifies the partition point in an array containing consecutive **0s** followed by **1s**. By using Binary Search, the solution achieves an efficient time complexity of **O(log n)**, making it suitable even for large input sizes.