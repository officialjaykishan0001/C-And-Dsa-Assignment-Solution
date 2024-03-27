#include <iostream>
#include <vector>

using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(n)

// Recursive function used to find the position and store into vector
void f(vector<int> arr, int tar, int idx, vector<int> &res)
{
    // Base Case
    if (idx == arr.size())
    {
        return;
    }

    // Position Found!!
    if (arr[idx] == tar)
    {
        res.push_back(idx);
    }

    // Recursive call
    f(arr, tar, idx + 1, res);
}

// Main function
int main()
{
    // Taking the Neccesary Input
    int n, target;
    cout << "Enter n : ";
    cin >> n;
    cout << "Enter the target value : ";
    cin >> target;

    vector<int> arr(n);

    cout << endl
         << "Enter the elements of the vector : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Resultant varieble declared
    vector<int> res;

    // Call to Function
    f(arr, target, 0, res);

    // Output Print
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}