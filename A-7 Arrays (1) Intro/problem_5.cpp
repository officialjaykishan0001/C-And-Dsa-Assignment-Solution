// Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n) (inclusive of
// both 0 and n). Find and return the only number of the range that is not present in the array. Here 1<n<101.

#include <iostream>

using namespace std;
//  Global variebles 
int smallNum = INT16_MAX, greatestNum = INT16_MIN;

// Function to identify range (i.e. smallest Num and greatest Num)
void identifyRange(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallNum)
        {
            smallNum = arr[i];
        }
        if (arr[i] > greatestNum)
        {
            greatestNum = arr[i];
        }
    }
}

// Function to check key is present in arr
bool isPresent(int key, int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            return true;
        }
    }
    return false;
}

// Main function
int main()
{
    int arr[]={8,6,4,2,3,5,0,1};

    identifyRange(arr, 8);

    for (; smallNum <= greatestNum; smallNum++)
    {
        if (!(isPresent(smallNum, arr, 8)))
        {
            cout << (smallNum) << " ";
        }
    }
    return 0;
}