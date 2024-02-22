#include <iostream>
#include <vector>
using namespace std;

void prefixSum(vector<vector<int>> &grid)
{
    // Row Prefix sum
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 1; j < grid[i].size(); j++)
        {
            grid[i][j] += grid[i][j - 1];
        }
    }

    // Column Prefix Sum
    for (int i = 1; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            grid[i][j] += grid[i - 1][j];
        }
    }
    return;
}

int main()
{
    int m, n;
    cout << "Enter m : ";
    cin >> m;

    cout << "Enter n : ";
    cin >> n;

    vector<vector<int>> grid(m, vector<int>(n));

    cout << "Enter the elements of the vector array : " << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    prefixSum(grid);

    cout << "The Output : " << endl;

    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}