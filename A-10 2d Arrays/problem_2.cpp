#include <iostream>
#include <vector>

using namespace std;

void rorateGrid(vector<vector<int> > &grid)
{

    for (int j = 0; j < grid.size(); j++)
    {
        for (int i = grid.size() - 1; i >= 0; i--)
        {
            cout << grid[i][j] << " ";
        }

        cout << endl;
    }

    return;
}
int main()
{
    // Taking input logic
    int n;
    cout << "Enter n : ";
    cin >> n;

    vector<vector<int> > grid(n, vector<int>(n));

    cout << endl
         << "Enter the elements of The grid : " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    rorateGrid(grid);

    return 0;
}