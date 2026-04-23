# Big-O Analysis

## 1. Vector Playlist

- Add Song: O(1) (amortized, push_back)
- Remove Song: O(n) (search required before deletion)
- Search Song: O(n)
- Print Playlist: O(n)
- Sort Songs: O(n log n) using std::sort

### Why Vector?
Vector is efficient for dynamic arrays and fast insertion at the end.

---

## 2. Linked List Playlist

- Add Song: O(n) (must traverse to end)
- Remove Song: O(n)
- Search Song: O(n)
- Print Playlist: O(n)

### Why Linked List?
Linked lists are useful for dynamic memory and frequent insert/delete operations.

---

## 3. Sorting Algorithm

- Time Complexity: O(n log n) (std::sort)
- Space Complexity: O(1) to O(n)

### Why Sorting?
Sorting helps organize songs alphabetically for better usability.

---

## 4. Comparison

- Vector is faster for random access
- Linked list is better for dynamic insert/delete
- Sorting improves usability but adds complexity

As the dataset grows, vector + sorting becomes more efficient than linked list for this application.