// Given a vector array nums, print the count of triplets [nums[i], nums[j], nums[k]] such
// that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == x. Where k is an integer
// given by the user.
// `  Note: The solution set must not contain duplicate triplets and should not have 3 loops.`

#include <iostream>
#include <vector>

using namespace std;

// Time complexity : O(n^2)
// Space Complexity : O(1)
int main()
{
    // input taking logic

    int n;
    cout << "Size of the vector : ";
    cin >> n;

    vector<int> arr;

    cout << "Enter the elements of the vector array : ";

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;

        arr.push_back(ele);
    }

    int x;
    cout << endl
         << "Enter the value of the x : ";
    cin >> x;

    // problem solution logic
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size() - 1; j++)
        {
            if (arr[i] + arr[j] + arr[j + 1] == x && i != j)
            {
                // cout << arr[i] << " " << arr[j] << " " << arr[j + 1] << endl;
                count = count + 1;
            }
        }
    }

    cout << "Total triplets are : " << (count) << endl;
    return 0;
}