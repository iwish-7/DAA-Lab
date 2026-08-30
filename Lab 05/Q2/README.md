# K-th Smallest Element (Quickselect)

Finds the `k`-th smallest element (1-indexed) of an unsorted array without
sorting it, using **Quickselect**.

## Approach

1. **Partition (Lomuto scheme):** pick `arr[high]` as pivot, move all
   elements `<= pivot` to its left, and place the pivot at its final sorted
   position `index`. Costs `high - low` comparisons.
2. **Quickselect:** `index - low + 1` is the pivot's rank *within the current
   subarray* `[low, high]`. Compare it to the target rank `k`:
   - equal → pivot is the answer, return `arr[index]`.
   - pivot's rank `> k` → answer is to the left, recurse on `[low, index-1]`
     with the same `k`.
   - pivot's rank `< k` → answer is to the right, recurse on `[index+1, high]`
     with `k` reduced by the number of elements just discarded on the left
     (`k - (index - low + 1)`), so `k` always stays relative to the new
     subarray.

   Only one side is ever recursed into, so the other half of the array is
   never examined again.

## Complexity

| Case | Comparisons | Why |
|---|---|---|
| Average | `O(n)` | Each partition roughly halves the remaining window: `n + n/2 + n/4 + ... ≈ 2n`. |
| Worst | `O(n²)` | Pivot is always `arr[high]`, so on sorted/reverse-sorted input each partition only shrinks the window by 1: `n + (n-1) + ... = O(n²)`. |
| Space | `O(1)` extra (in place), plus `O(n)` worst-case / `O(log n)` average recursion-stack space |

Faster than sorting first (`O(n log n)`) on average; the worst case is only
avoided by a better pivot choice (e.g. random or median-of-three), which this
version does not use.

## Build & Run

```bash
gcc kth_smallest.c -o kth_smallest
./kth_smallest
Enter number of elements: 9
Enter elements:
7 12 3 9 21 5 18 1 14
Enter K: 4
4'th smallest element is 7
```