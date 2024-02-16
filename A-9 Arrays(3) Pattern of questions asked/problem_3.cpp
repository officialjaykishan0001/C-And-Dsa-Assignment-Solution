#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // solution of problem logic starts here
    int maxLength = 0,count = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if ((arr[i] == 0 and arr[i + 1] == 1) ||( arr[i] == 1 and arr[i + 1] == 0))
        {
            count += 1;
        }
        else
        {
            count = 0;
        }
        if (maxLength < count)
        {
            maxLength = count;
        }
    }

    cout << "Max Length = " << (maxLength) << endl;

    return 0;
}