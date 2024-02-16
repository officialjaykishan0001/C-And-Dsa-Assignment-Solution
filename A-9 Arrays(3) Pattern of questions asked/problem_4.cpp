#include <iostream>
#include <vector>
using namespace std;


// Get SubArray of an array
vector<vector<int> > subArray(vector<int> arr)
{
    vector<vector<int> > subArray;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i; j < arr.size(); j++)
        {
            vector<int> temp;
            for (int k = i; k <= j; k++)
            {
                temp.push_back(arr[k]);
            }
            subArray.push_back(temp);
        }
    }

    return subArray;
}

// Main function
int main()
{
    // Input taking 
    int n;
    cout << "Enter n : ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of the array : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Problem solving logic starts here
    int sum = 0, count = 0;
    vector<vector<int> > SubArrays = subArray(arr);

    for (int i = 0; i < SubArrays.size(); i++)
    {
        sum = 0;
        for (int j = 0; j < SubArrays[i].size(); j++)
        {
            sum += SubArrays[i][j];
        }
        if (sum % 2 != 0)
        {
            count++;
        }
    }

    cout << "Count is : " << (count) << endl;

    return 0;
}