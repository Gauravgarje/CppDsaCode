#include <bits/stdc++.h>

using namespace std;

// Time Complexity = O(n^2)
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return;
}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    return;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    return;
}

// Driver code
int main()
{
    // int arr[] = {5, 4, 3, 2, 1};
    int arr[] = {56, 45, 553, 2, 1, -11, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}