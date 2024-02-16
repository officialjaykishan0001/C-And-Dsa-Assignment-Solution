#include <iostream>
#include <vector>
using namespace std;

// Time Complexity : O(n^2)
// Space Complexity : O(n)

int main()
{
    // Taking the input logic
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Solution logic
    vector<int> ans;
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product = 1;
        for (int j = 0; j < arr.size(); j++)
        {
            if (i != j)
            {
                product *= arr[j];
            }
        }
        ans.push_back(product);
    }

    // result
    cout << endl
         << "The result is : " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}