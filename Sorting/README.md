# 1) Selection Sort

- Time Complexity -
- <a href="https://www.geeksforgeeks.org/selection-sort-algorithm-2/" target="_blank">Selection Sort Algorithm(GFG)</a>

# 2) Bubble Sort

- Time Complexity -
- <a href="https://www.geeksforgeeks.org/bubble-sort-algorithm/" target="_blank">Bubble Sort Algorithm(GFG)</a>

# 3) Insertion Sort

- Time Complexity -
- <a href="https://www.geeksforgeeks.org/insertion-sort-algorithm/" target="_blank">Insertion Sort Algorithm(GFG)</a>

# 4) Merge Sort

- Time Complexity -
- <a href="https://www.geeksforgeeks.org/merge-sort/" target="_blank">Merge Sort Algorithm(GFG)</a>

# 5) Quick Sort

- Time Complexity -
- <a href="https://www.geeksforgeeks.org/quick-sort-algorithm/" target="_blank">Quick Sort Algorithm(GFG)</a>

# 6) Heap Sort

- Time Complexity -
- <a href="https://www.geeksforgeeks.org/heap-sort/" target="_blank">Heap Sort Algorithm(GFG)</a>

# 7) Counting Sort

- Time Complexity -
- <a href="https://www.geeksforgeeks.org/counting-sort/" target="_blank">Counting Sort Algorithm(GFG)</a>

# 8) Radix Sort

- Time Complexity -
- <a href="https://www.geeksforgeeks.org/radix-sort/" target="_blank">Radix Sort Algorithm(GFG)</a>

1. If a Æ b, do not do anything, because the subarray is already sorted.
2. Calculate the position of the middle element: k Æ b(aÅb)/2c.
3. Recursively sort the subarray array[a...k].
4. Recursively sort the subarray array[kÅ1...b].
5. Merge the sorted subarrays array[a...k] and array[kÅ1...b] into a sorted subarray array[a...b].

- It halves the subarray at each step

# C++ Library Implementation

- Vector Sorting

```
vector<int> v = {4,2,5,3,5,8,3};
sort(v.begin(),v.end());
```

- Vector Reverse Sorting

```
sort(v.rbegin(),v.rend());
```

- Ordinary Array Sorting

```
int n = 7; // array size
int a[] = {4,2,5,3,5,8,3};
sort(a,a+n);
```

- String Sorting

```
string s = "monkey";
sort(s.begin(), s.end());
```

- Pairs (pair) are sorted primarily according to their first elements (first). However, if the first elements of two pairs are equal, they are sorted according to their second elements (second):

```
vector<pair<int,int>> v;
v.push_back({1,5});
v.push_back({2,3});
v.push_back({1,2});
sort(v.begin(), v.end()); // After sorting (1,2), (1,5), (2,3)
```

- Tuple Sorting

```
vector<tuple<int,int,int>> v;
v.push_back({2,1,4});
v.push_back({1,5,3});
v.push_back({2,1,3});
sort(v.begin(), v.end()); // After sorting (1,5,3), (2,1,3), (2,1,4)
```
