# Bubble Sort Performance Analysis

## Aim

To compare the performance of **Normal Bubble Sort** and **Optimized Bubble Sort** by counting the number of comparisons made while sorting arrays of different sizes.

---

## Problem Statement

Implement two versions of the Bubble Sort algorithm:

- **Normal Bubble Sort**, which always performs all passes.
- **Optimized Bubble Sort**, which stops early if the array becomes sorted.

Compare their performance by recording the number of comparisons for different input sizes and visualize the results using a graph.

---

## Approach

- Generate random arrays of different sizes (100 to 1000).
- Create two identical copies of each array.
- Sort one copy using the optimized version and the other using the normal version.
- Count the number of comparisons performed by each algorithm.
- Store the results in a CSV file.
- Use Python (Matplotlib) to plot the comparison graph.

---

## Algorithm

1. Generate a random array of size **n**.
2. Copy the array into two separate arrays.
3. Apply **Optimized Bubble Sort** and count the comparisons.
4. Apply **Normal Bubble Sort** and count the comparisons.
5. Store the results for each array size.
6. Repeat for array sizes from **100 to 1000**.
7. Plot the comparison graph using Python.

---

## Concepts Used

- Bubble Sort
- Optimized Bubble Sort
- Arrays
- Functions
- Performance Analysis
- CSV File Handling
- Python (Pandas & Matplotlib)

---

## Observation

| Array Size | Optimized | Normal |
|-----------:|----------:|-------:|
| 100 | 4719 | 4950 |
| 200 | 19879 | 19900 |
| 300 | 44714 | 44850 |
| 400 | 79449 | 79800 |
| 500 | 124695 | 124750 |
| 600 | 178997 | 179700 |
| 700 | 244350 | 244650 |
| 800 | 319564 | 319600 |
| 900 | 404414 | 404550 |
| 1000 | 499380 | 499500 |

---

## Performance Graph

The generated graph compares the number of comparisons made by both versions of Bubble Sort for different input sizes.

*(Insert the generated graph here in your GitHub repository.)*

---

## Time Complexity

### Normal Bubble Sort

- **Best Case:** O(n²)
- **Average Case:** O(n²)
- **Worst Case:** O(n²)

### Optimized Bubble Sort

- **Best Case:** O(n)
- **Average Case:** O(n²)
- **Worst Case:** O(n²)

---

## Space Complexity

Both algorithms require **O(1)** auxiliary space since they sort the array in place.

---

## Conclusion

The experiment shows that both versions of Bubble Sort have similar performance on randomly generated arrays, resulting in nearly the same number of comparisons. However, the optimized version performs slightly fewer comparisons because it can terminate early when the array becomes sorted. This optimization is especially beneficial for nearly sorted datasets, where the best-case time complexity improves from **O(n²)** to **O(n)**.