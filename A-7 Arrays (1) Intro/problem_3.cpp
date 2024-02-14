//  Given an integer array and its size, reverse the array and print it . Here 1<size<101

#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    int reversedArr[n];

    for (int idx = (n - 1); idx >= 0; idx--)
    {
        reversedArr[n - 1 - idx] = arr[idx];
    }

    for (int idx = 0; idx < n; idx++)
    {
        cout << reversedArr[idx] << " ";
    }

    return 0;
}