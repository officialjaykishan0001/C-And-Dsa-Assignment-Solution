// Given a vector arr[] sorted in increasing order. Return an array of squares

#include <iostream>
#include <vector>

using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(n)

int sqaure(int number)
{
    return number * number;
}
int main()
{
    // Input taking logic
    int n;
    vector<int> arr;

    cout << "Enter the size of the array : ";
    cin >> n;

    cout << endl
         << "Enter the elements of the array : " << endl;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }

    // Logic to solve Problem
    vector<int> res;

    for (int i = 0; i < n; i++)
    {
        res.push_back(sqaure(arr[i]));
    }

    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}