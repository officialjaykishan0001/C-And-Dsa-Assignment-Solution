//  Given an integer array and its size, find the sum of the greatest and the smallest integer present
// in the array. Here 1< size <101

// Header Files
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5, smallestNum = INT16_MAX, greatestNum = INT16_MIN;

    for (int idx = 0; idx < n; idx++)
    {
        if (arr[idx] < smallestNum)
        {
            smallestNum = arr[idx];
        }
        if (arr[idx] > greatestNum)
        {
            greatestNum = arr[idx];
        }
    }

    cout << "The sum = " << (smallestNum + greatestNum) << endl;
    return 0;
}