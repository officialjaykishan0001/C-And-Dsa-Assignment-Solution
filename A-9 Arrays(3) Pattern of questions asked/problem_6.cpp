#include <iostream>
#include <vector>

using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(1)

void helper(vector<int> &arr, int x, int l, int r)
{
    for (int i = l; i <= r; i++)
    {
        arr[i] += x;
    }
    return;
}
int main()
{
    // taking the complete input
    int n;
    cout << "Enter the size of the vector :";
    cin >> n;

    vector<int> arr(n, 0);

    int x;
    cout << "X : ";
    cin >> x;

    vector<vector<int>> q;

    int n_q;
    cout << "Enter the no of queries : ";
    cin >> n_q;

    for (int i = 0; i < n_q; i++)
    {
        vector<int> temp(2);
        cin >> temp[0];
        cin >> temp[1];

        q.push_back(temp);
    }

    // Solution Logic

    for (int i = 0; i < q.size(); i++)
    {

        int l = q[i][0];
        int r = q[i][1];

        helper(arr, x, l, r);
    }

    cout << "The Final output : " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}