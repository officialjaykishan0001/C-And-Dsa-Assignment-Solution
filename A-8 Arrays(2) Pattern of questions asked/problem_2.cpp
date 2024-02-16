// Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
// a pair in the array whose sum is exactly x.

#include <iostream>
#include <vector>

using namespace std;

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

    // logic to solve problems

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == x)
            {
                cout << "Yes";
                return 0;
            }
        }
    }

    cout << "NO";
    return 0;
}