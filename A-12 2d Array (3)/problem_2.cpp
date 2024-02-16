#include <iostream>
#include <vector>
using namespace std;

// Time Complexity : O(n^2)
// Space Complexity : O(1)

bool isPerfectSquareMatrix(vector<vector<int>> &grid)
{
    bool flag = true;
    ;

    for (int i = grid.size() - 1; i >= 0; i--)
    {
        for (int j = 0; j < grid.size(); j++)
        {
            if (i == j and grid[i][j] == 0)
            {
                flag = false;
                return flag;
            }
            else if (grid[i][grid.size() - i - 1] == 0)
            {
                flag = false;
                return flag;
            }
            else if ((i != j) and (j != grid.size() - i - 1) and grid[i][j] != 0)
            {
                flag = false;
                return flag;
            }
        }
    }
    return flag;
}

int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Is Matrix Perfect : " << isPerfectSquareMatrix(matrix) << endl;
}