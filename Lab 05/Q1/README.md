# Median of N Numbers Without Sorting

Finds the median of a list using **Quickselect**, which locates a single order
statistic (the k-th smallest element) without sorting the whole array.

## Approach

1. **Partition (Lomuto scheme):** pick `arr[high]` as pivot, move all elements
   `<= pivot` to its left, and place the pivot at its final sorted position
   `i`. This costs `high - low` comparisons.
2. **Quickselect:** compare the pivot's final position `i` to the target rank
   `k`:
   - `i == k` → found it, return `arr[i]`.
   - `i > k` → the answer is to the left, recurse on `[low, i-1]`.
   - `i < k` → the answer is to the right, recurse on `[i+1, high]`.
   Only **one side** is ever recursed into — the other is discarded, which is
   what makes this faster than sorting.
3. **Median:**
   - Odd `n` → one call, `quickSelect(arr, 0, n-1, n/2)`.
   - Even `n` → **two** calls, for ranks `n/2 - 1` and `n/2`, averaged into a
     `double`.

## Complexity

| Case | Comparisons | Why |
|---|---|---|
| Average | `O(n)` | Each partition roughly halves the search window: `n + n/2 + n/4 + ... ≈ 2n`. |
| Worst | `O(n²)` | Pivot is always `arr[high]`, so a sorted or reverse-sorted input makes every partition shrink the window by only 1: `n + (n-1) + ... = O(n²)`. |
| Space | `O(1)` extra (in place) | Plus `O(n)` worst-case / `O(log n)` average recursion-stack space, since `quickSelect` calls itself. |

For even `n`, the median needs **two** Quickselect calls (ranks `n/2-1` and
`n/2`), so the cost roughly doubles versus the odd case — a single call would
suffice if the lower-middle value were derived from the elements already
partitioned to the left during the first call, but this implementation keeps
it simple and reselects instead.

Compared to sorting first (`O(n log n)`), average-case Quickselect is
asymptotically faster; its worst case is only avoided by choosing a better
pivot (e.g. random or median-of-three), which this version does not do.

## Build & Run

```bash
gcc median.c -o median
./median
Enter number of elements: 9
Enter the elements:
7 12 3 9 21 5 18 1 14
Median = 9.00
```

```bash
./median
Enter number of elements: 6
Enter the elements:
4 8 15 16 23 42
Median = 15.50
```