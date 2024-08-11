#include <bits/stdc++.h> //include entire standard library

using namespace std; // declares that classes and functions of the standard library can be used directly in the code

int main()
{

    string name;
    cout << "Enter your name: ";

    // following two lines of code is required to make input and output more efficient
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> name;
    cout << "Hello " << name << "\n";
    cout << "How are you?";
}