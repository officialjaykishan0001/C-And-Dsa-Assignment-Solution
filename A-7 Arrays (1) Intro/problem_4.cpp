// Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such
// that they belong to different arrays and are not at the same index. Here 1<size<101

#include <iostream>
using namespace std;

int smallestElem(int arr[], int size)
{
    int smallestNum = INT16_MAX;
    for (int idx = 0; idx < size; idx++)
    {
        if (arr[idx] < smallestNum)
        {
            smallestNum = arr[idx];
        }
    }

    return smallestNum;
}
int main()
{
    int a[] = {5, 6, 10, 4, 9}, b[] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << "The sum is : " << (smallestElem(a, 5)) + (smallestElem(b, 5));
    return 0;
}