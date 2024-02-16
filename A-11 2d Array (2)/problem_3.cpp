#include <iostream>
#include <vector>

using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(1)

// Get the count of overlapping intervals
int RemoveIntervalCount(vector<vector<int>> &grid)
{
    int count = 0;
    for (int i = 0; i < grid.size() - 1; i++)
    {
        if (grid[i][1] > grid[i + 1][0])
        {
            count++;
        }
    }

    return count;
}
int main()
{
    // Taking input 
    int n;
    cout << "Enter n : ";
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(2));

    cout << "Enter the elements of the grid" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> grid[i][j];
        }
    }

    cout << endl
         << "Number of intervals to remove : " << (RemoveIntervalCount(grid)) << endl;
    return 0;
}