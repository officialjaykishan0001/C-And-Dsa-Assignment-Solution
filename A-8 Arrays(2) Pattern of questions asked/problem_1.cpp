// Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the
// two arrays into a single sorted array of size m+n.

#include <iostream>
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(m + n)

int main()
{
    int arr1[] = {1, 2, 3, 4, 4}, arr2[] = {5, 6, 7};
    int m = 4, n = 3;
    int arr[(m + n)];

    for (int i = 0; i < m; i++)
    {
        arr[i] = arr1[i];
    }

    int idx = 0;
    for (int i = m; i < m + n; i++)
    {
        arr[i] = arr2[idx++];
    }

    for (int i = 0; i < m + n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
