#include <iostream>
#include <vector>
using namespace std;

// Time complexity : O(n^2)
// Space Complexity : O(1)

bool isPerfect(vector<vector<int>> &grid)
{
    bool flag = false;

    for (int i = 0; i < grid.size() - 1; i++)
    {
        for (int j = 0; j < grid[i].size() - 1; j++)
        {
            if (grid[i][j] == grid[i + 1][j + 1])
            {
                flag = true;
            }
            else
            {
                flag = false;
            }
        }
    }

    return flag;
}
int main()
{
    int m, n;
    cout << "Enter m : ";
    cin >> m;
    cout << "Enter n : ";
    cin >> n;

    vector<vector<int>> arr(m, vector<int>(n));

            cout
        << "Enter the elements of the array : " << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl
         << "Is The Matrix is perfect : " << (isPerfect(arr)) << endl;

    return 0;
}