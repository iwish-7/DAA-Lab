# Heap Sort on File-Based Data

Generates `N` random elements, writes them to a file, reads them back into
memory, sorts them with **Heap Sort**, and writes the sorted result to another
file.

## Approach

1. **Generate:** `N` random integers (`0–9999`) are written to `input.txt`,
   one per line.
2. **Load:** the same `N` integers are read back from `input.txt` into an
   in-memory array.
3. **Sort (Heap Sort):**
   - **Build a max-heap:** call `heapify` on every non-leaf node, from
     `n/2 - 1` down to `0`, so the largest element ends up at `arr[0]`.
   - **Extract repeatedly:** swap the root (largest remaining element) with
     the last element of the unsorted region, shrink that region by one, and
     `heapify` the root back down to restore the heap property. Repeating
     this `n-1` times leaves the array sorted ascending.
   - `heapify(arr, n, i)` compares node `i` against its children
     (`2i+1`, `2i+2`), swaps with the larger child if needed, and recurses
     down — at most `O(log n)` steps since the heap is a complete binary
     tree of height `log n`.
4. **Write:** the sorted array is written to `output_heap.txt`, one element
   per line.

## Complexity

| Case | Comparisons | Why |
|---|---|---|
| Build heap | `O(n)` | Tighter than the naive `O(n log n)` — most nodes are near the bottom of the tree and sift down only a short distance. |
| Extract phase | `O(n log n)` | `n` extractions, each followed by an `O(log n)` `heapify`. |
| Overall | `O(n log n)` — **every case**: best, average, *and* worst | Heap Sort's cost depends only on the tree's height, not on the input's original order, so unlike Quicksort it has **no** quadratic worst case. |
| Space | `O(1)` extra — sorts in place (the recursive `heapify` calls add `O(log n)` stack depth) |

Because the runtime doesn't depend on input order, sorted, reverse-sorted, and
random input all cost about the same — a useful contrast with the Quicksort
program, whose worst case (sorted input) is quadratic.

## Build & Run

```bash
gcc heapsort.c -o heapsort
./heapsort
Enter number of random elements (N): 10000
Heap Sort complete. Check output_heap.txt
```

- `input.txt` — the unsorted, randomly generated numbers
- `output_heap.txt` — the same numbers, sorted ascending