// Given an integer array containing n elements. Find the element in the array for which all the elements
// to its left are smaller than it and all the elements to the right of it are larger than it. Here 1<n<101.

// Header files
#include <iostream>
using namespace std;

// Compare to left part of the array
bool CompareLeft(int idx, int arr[], int sz)
{
    if (idx == sz)
    {
        return false;
    }
    int key = arr[idx];
    for (; idx >= 0; idx--)
    {
        if (arr[idx] > key)
        {
            return false;
        }
    }

    return true;
}
bool CompareRight(int idx, int arr[], int sz)
{
    if (idx == sz)
    {
        return false;
    }
    int key = arr[idx];
    for (; idx < sz; idx++)
    {
        if (arr[idx] < key)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    // int arr[] = {1, 6, 5, 7, 10, 8, 9};
    int arr[] = {5, 16, 2, 8, 10, 9};
    int sz = 6, result = -1;

    for (int i = 1; i < sz; i++)
    {
        if (CompareLeft(i, arr, sz) && CompareRight(i, arr, sz))
        {
            result = i;
        }
    }

    cout << "The index is : " << (result) << endl;
    return 0;
}