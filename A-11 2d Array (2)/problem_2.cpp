#include <iostream>
#include <vector>
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(1)

// Merge intervals 
vector<vector<int>> MergeInterverals(vector<vector<int>> &grid)
{
    vector<vector<int>> mergedInterval;

    for (int i = 0; i < grid.size() - 1; i++)
    {
        if (grid[i][1] > grid[i + 1][0])
        {
            if (grid[i][1] > grid[i + 1][1])
            {
                vector<int> temp;
                temp.push_back(grid[i][0]);
                temp.push_back(grid[i][1]);
                mergedInterval.push_back(temp);
            }
            else
            {
                vector<int> temp;
                temp.push_back(grid[i][0]);
                temp.push_back(grid[i + 1][1]);
                mergedInterval.push_back(temp);
            }
            // i = i + 1;
        }
    }

    return mergedInterval;
}

int main()
{
    // Taking the input
    int n;
    cout << "Enter n : ";
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(2));

    cout
        << "Enter the elements of the array : " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    // Actual program logic starts
    vector<vector<int>> result = MergeInterverals(arr);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i][0] << " " << result[i][1] << endl;
    }
    return 0;
}