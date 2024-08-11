# How to download C++ in Visual Studio Code
Follow this <a href="https://code.visualstudio.com/docs/cpp/config-mingw#_prerequisites" target="_blank">link</a>

# How to run C++ file
```
g++ -std=c++11 -O2 -Wall BasicCppTemplate.cpp -o BasicCppTemplate
```

This command produces a binary file `BasicCppTemplate` from the source code `BasicCppTemplate.cpp`. The
compiler follows the C++11 standard `-std=c++11`, optimizes the code `-O2` and
shows warnings about possible errors `-Wall`.

# How to make your code run fast?
- Newline `n` works faster than `endl`, because `endl` always causes a flush operation.
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