#include <iostream>
#include <vector>

using namespace std;

int timeGlassSum(vector<vector<int>> &matrix)
{
    int Maxsum = -1, hourSum = 0;
    for (int i = 0; i < matrix.size() - 2; i++)
    {
        for (int j = 0; j < matrix[i].size() - 2; j++)
        {
            hourSum = (matrix[i][j] + matrix[i][j + 1] + matrix[i][j + 2]) + (matrix[i + 1][j + 1]) + (matrix[i + 2][j] + matrix[i + 2][j + 1] + matrix[i + 2][j + 2]);
        }
        if (hourSum > Maxsum)
        {
            Maxsum = hourSum;
        }
        hourSum = 0;
    }
    return Maxsum;
}

int main()
{
    int m, n;
    cout << "Enter m : ";
    cin >> m;
    cout << "Enter n : ";
    cin >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    cout << "Enter the  elements of the matrix : ";
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Actual program logic

    cout << "The desired output is : " << timeGlassSum(matrix) << endl;
    return 0;
}