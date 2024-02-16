#include <iostream>
#include <vector>
using namespace std;

// Time Complexity : O(n^2)
// Space Complexity : O(1)

void Upper()
{
    int n;
    cout << "Enter N : ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    cout << endl
         << "Enter the elements of the matrix : " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << endl
         << "Desired Output : " << endl;

    for (int i = 0; i < n; i++)
    {
        for(int k = 0; k < i; k++)
        {
            cout<<"  ";
        }
        for (int j = i; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return;
}

int main()
{

    Upper();

    return 0;
}