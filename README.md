# How to download C++ in Visual Studio Code
Follow this <a href="https://code.visualstudio.com/docs/cpp/config-mingw#_prerequisites" target="_blank">link</a>

# How to run C++ file
```
g++ -std=c++11 -O2 -Wall BasicCppTemplate.cpp -o BasicCppTemplate
```

This command produces a binary file `BasicCppTemplate` from the source code `BasicCppTemplate.cpp`. The
compiler follows the C++11 standard `-std=c++11`, optimizes the code `-O2` and
shows warnings about possible errors `-Wall`.