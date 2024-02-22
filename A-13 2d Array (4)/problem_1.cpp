#include <iostream>
#include <vector>
using namespace std;

// Gives row no of maximum sum 
int maxRowSum(vector<vector<int>> &grid)
{
    int maxSumRow = INT16_MIN,maxSum = INT16_MIN, sum = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        sum = 0;
        for (int j = 0; j < grid[i].size(); j++)
        {
            sum += grid[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            maxSumRow = i;
        }
    }

    return maxSumRow;
}

int main()
{
    // Fetching the input
    int m, n;
    cout << "m : ";
    cin >> m;
    cout << "n : ";
    cin >> n;

    vector<vector<int>> grid(m, vector<int>(n));

    cout << "Enter the elements of the grid : ";
    cout << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    cout << endl
         << "Maximum sum Row : " << (maxRowSum(grid)) << endl;

    return 0;
}