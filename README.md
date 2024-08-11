# How to download C++ in Visual Studio Code

Follow this <a href="https://code.visualstudio.com/docs/cpp/config-mingw#_prerequisites" target="_blank">link</a>

# How to run C++ file

```
g++ -std=c++11 -O2 -Wall BasicCppTemplate.cpp -o BasicCppTemplate
```

This command produces a binary file `BasicCppTemplate` from the source code `BasicCppTemplate.cpp`. The
compiler follows the C++11 standard `-std=c++11`, optimizes the code `-O2` and
shows warnings about possible errors `-Wall`.

# Primitive Data Types available in C++

| Data Type    | Size in Bytes |                 Range                 |                               Usage |
| :----------- | :-----------: | :-----------------------------------: | ----------------------------------: |
| int          |       4       |  -2<sup>31</sup> to 2<sup>31</sup>-1  |                                     |
| long long    |       8       |  -2<sup>63</sup> to 2<sup>63</sup>-1  | long long x = 123456789123456789LL; |
| \_\_int128_t |      16       | -2<sup>127</sup> to 2<sup>127</sup>-1 |                                     |
| double       |       8       |  -2<sup>63</sup> to 2<sup>63</sup>-1  |                                     |
| long double  |      10       |  -2<sup>79</sup> to 2<sup>79</sup>-1  |                                     |

# How to make your code run fast?

- Newline `\n` works faster than `endl`, because `endl` always causes a flush operation.
- C functions `scanf` and `printf` are an alternative to the C++ standard streams. They are usually a bit faster.
- Input and output is sometimes a bottleneck in the program. The following lines at the beginning of the code make input and output more efficient:

```
ios::sync_with_stdio(0);
cin.tie(0);
```

- To read whole line from the input

```
string s;
getline(cin, s);
```

- If the amount of data is unknown, the following loop reads elements from the input one after another, until there is no more data available in the input.

```
while (cin >> x) {
// code
}
```

- To read and write from/to a file, add following lines at the beginning of code

```
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
```

# Notes

- `x mod m` means remainder when `x` is divided by `m`
- An important property of the remainder is that in addition, subtraction and multiplication, the remainder can be taken before the operation:

```
(a+b) mod m = (a mod m+b mod m) mod m
(a-b) mod m = (a mod m-b mod m) mod m
(a.b) mod m = (a mod m . b mod m) mod m
```
