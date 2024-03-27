// Header Files
#include <iostream>
#include <vector>
using namespace std;

// Global Varieble
vector<vector<int>> result;

void f(vector<int> &v, int idx, int r, vector<int> &subSet, vector<vector<int>> &ans)
{

    // Base Case
    if (idx >= v.size())
    {
        if (r == 0)
        {
            ans.push_back(subSet);
        }
        return;
    }

    // Include ith Element
    subSet.push_back(v[idx]);
    f(v, idx + 1, r - 1, subSet, ans);

    // Exclude ith Element
    subSet.pop_back();
    f(v, idx + 1, r, subSet, ans);
}

int main()
{
    // Taking neccesary input from the users
    int n, r;
    cout << "Enter the size of the vector : ";
    cin >> n;

    vector<int> v(n);

    cout << endl
         << "Enter the elements of the vector : " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    cout << endl
         << "Enter the value of \'r\' : ";
    cin >> r;

    // Logic to find accurate solution
    vector<int> subSet;
    vector<vector<int>> ans;

    // Calling to function
    f(v, 0, r, subSet, ans);

    // Print Output
    cout << "The Combinations are : " << endl;

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}