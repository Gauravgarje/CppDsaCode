#include <bits/stdc++.h>

using namespace std;

// Iterative solution
int countDigit_Iterative(long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

// Recursive solution
int countDigit_Recursive(long n)
{
    if (n == 0)
        return 0;
    return 1 + countDigit_Recursive(n / 10);
}

// Logarithmic solution
int countDigit_Logarithmic(long n)
{
    return floor(log10(n) + 1);
}

int main()
{
    long number = 12345;
    cout << "Count of digit for number [" << number << "] = " << countDigit_Iterative(number) << endl;
    cout << "Count of digit for number [" << number << "] = " << countDigit_Recursive(number) << endl;
    cout << "Count of digit for number [" << number << "] = " << countDigit_Logarithmic(number) << endl;
}
