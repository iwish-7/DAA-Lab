# Quicksort on File-Based Data

Generates `N` random elements, writes them to a file, reads them back into
memory, sorts them with **Quicksort**, and writes the sorted result to another
file.

## Approach

1. **Generate:** `N` random integers (`0–9999`) are written to `input.txt`,
   one per line.
2. **Load:** the same `N` integers are read back from `input.txt` into an
   in-memory array — modelling a real workflow where data comes from disk
   rather than being generated in place.
3. **Sort (Quicksort, Lomuto partition):** pick `arr[high]` as pivot, move all
   elements `< pivot` to its left (tracked by index `i`), then place the pivot
   right after them at `i+1`. Recursively sort the left and right partitions
   around that pivot.
4. **Write:** the sorted array is written to `output_quick.txt`, one element
   per line.

## Complexity

| Case | Comparisons | Why |
|---|---|---|
| Average | `O(n log n)` | Each partition splits the array roughly in half, giving `log n` levels of `O(n)` work each. |
| Worst | `O(n²)` | Pivot is always `arr[high]`, so sorted/reverse-sorted input makes each partition shrink by only 1 element: `n + (n-1) + ... = O(n²)`. Since the input here is random, this case is very unlikely in practice. |
| Space | `O(n)` for `arr` + `O(log n)` average / `O(n)` worst-case recursion stack |

Because the input is randomly generated, the average case is what's actually
exercised in practice — worst-case behavior would only show up on
already-sorted or adversarially crafted input.

## Build & Run

```bash
gcc quicksort.c -o quicksort
./quicksort
Enter number of random elements (N): 10000
Quick Sort complete. Check output_quick.txt
```

- `input.txt` — the unsorted, randomly generated numbers
- `output_quick.txt` — the same numbers, sorted ascending