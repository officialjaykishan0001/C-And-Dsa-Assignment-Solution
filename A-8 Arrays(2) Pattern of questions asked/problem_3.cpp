// Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
// a pair in the array whose absolute difference is exactly x.

#include <iostream>
#include <vector>
using namespace std;

// Time Complexity : O(n^2)
// Space Complexity : O(1)


int main()
{

    // Input Taking Logic
    vector<int> arr;
    int n;
    cout << "Enter The size of the vector arr : ";
    cin >> n;

    cout << endl
         << "Enter the elements of the vector arr" << endl;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }

    int x;
    cout << endl
         << "enter the value of the x  : ";
    cin >> x;

    // logic to solve the problem

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (((arr[i] - arr[j])*(-1)) == x)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}