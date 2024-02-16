#include <iostream>
#include <vector>
using namespace std;

// Solution logic implementation
int MaxElmeentInGrid(vector<vector<int>> &grid)
{
    int max = INT8_MIN;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (grid[i][j] > max)
            {
                max = grid[i][j];
            }
        }
    }
    return max;
}

int main()
{
    // Input Taking logic
    int m, n;
    cout << "Enter the  no of rows : ";
    cin >> m;

    cout << endl
         << "Enter the no of columns : ";
    cin >> n;

    vector<vector<int>> grid(m, vector<int>(n));

    cout << "Enter the elements of the grid : " << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    cout << "The max element is : " << MaxElmeentInGrid(grid) << endl;
    return 0;
}