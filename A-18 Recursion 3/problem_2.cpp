// Header Files
#include <iostream>
#include <vector>
using namespace std;

// Global Varieble
vector<vector<int>> res;

// Recursive Function used to solve the problem 
void f(vector<int> arr)
{
    // Base Case
    if (arr.size() == 1)
    {
        return;
    }
    // Temparary Vector
    vector<int> temp;

    temp.push_back(arr[0] + arr[1]);

    for (int i = 2; i < arr.size(); i++)
    {
        temp.push_back(arr[i]);
    }
    res.push_back(temp);
    // Recursive Call
    f(temp);
}

// Main function
int main()
{
    // Taking the neccesary input
    int n;
    cout << "Enter n : ";
    cin >> n;
    
    vector<int> v(n);

    cout << "Enter the elements : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // Pushing frech vector v into the resultant 2d vector
    res.push_back(v);

    // Calling the Recursive Function
    f(v);

    // Print output
    cout << endl
         << "Output : " << endl;

    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}