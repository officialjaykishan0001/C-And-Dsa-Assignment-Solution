// Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.

// Header files
#include <iostream>
using namespace std;

// Function to check Even Number
bool isEven(int number)
{
    if (number % 2 == 0)
    {
        return true;
    }

    return false;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, -6, -7, 8, -9, -10};
    int evenNumCount = 0, oddNumCount = 0;

    for (int idx = 0; idx < 10; idx++)
    {
        if (isEven(arr[idx]))
        {
            evenNumCount++;
        }
        else
        {
            oddNumCount++;
        }
    }

    cout << "Count of Even Number = " << (evenNumCount) << endl;
    cout << "Count of Odd Number  = " << (oddNumCount) << endl;

    return 0;
}