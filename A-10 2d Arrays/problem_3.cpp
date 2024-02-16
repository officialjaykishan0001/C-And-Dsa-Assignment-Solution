#include <iostream>
#include <vector>
using namespace std;

// time complexity : O(n^2)
// space complexity: O(n)

void SetToZero(vector<vector<int> > &grid, int col_no, int row_no)
{

    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (i == row_no || j == col_no)
            {
                grid[i][j] = 0;
            }
        }
    }
}


void RowAndColumnToZero(vector<vector<int> > &grid)
{
    vector<int> row_no, col_no;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (grid[i][j] == 0)
            {
                row_no.push_back(i);
                col_no.push_back(j);
            }
        }
    }

    for (int i = 0; i < row_no.size(); i++)
    {
        SetToZero(grid, col_no[i], row_no[i]);
    }

    return;
}
int main()
{
    // Taking the input
    int m, n;
    cout << "Enter no of the rows : ";
    cin >> m;
    cout << "\nEnter no of the column : ";
    cin >> n;

    vector<vector<int> > arr(m, vector<int>(n));

    cout << endl
         << "Enter the elements of the matrix : ";
    cout << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    RowAndColumnToZero(arr);

    cout << endl
         << "OutPut : " << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}