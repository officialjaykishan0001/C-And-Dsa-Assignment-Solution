//  Given a vector arr[] sorted in increasing order of n size and an integer x, find the number
// of unique pairs that exist in the array whose absolute sum is exactly x.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Size of the vector : ";
    cin >> n;

    vector<int> arr;

    cout << "Enter the elements of the vector array : ";

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;

        arr.push_back(ele);
    }

    int x;
    cout << endl
         << "Enter the value of the x : ";
    cin >> x;
    // solution logic 
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (((arr[i] + arr[j]) < 0 ? arr[i] + arr[j] * (-1) : arr[i]+arr[j]) == x)
            {
                count++;
            }
        }
    }

    cout << "Total no of pair : " << count << endl;

    return 0;
}