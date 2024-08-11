# O(n<sup>2</sup>) Algorithms

## 1) Bubble Sort

- Bubble sort consists of n rounds. On each round, the algorithm iterates through the elements of the array. Whenever two consecutive elements are found that are not in correct order, the algorithm swaps them
- <a href="https://www.geeksforgeeks.org/bubble-sort-in-cpp/" target="_blank">Geeks For Geeks</a>

# O(n.log(n)) Algorithms

## 2) Merge Sort

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
