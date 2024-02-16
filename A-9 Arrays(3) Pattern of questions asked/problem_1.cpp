#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // taking the input
    int n;
    cout << "enter the size : ";
    cin >> n;

    vector<int> arr(n);

    cout << endl
         << "Enter the elements of the vector : ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l, r;
    cout << "Enter the L : ";
    cin >> l;
    cout << "Enter the R : ";
    cin >> r;
    if (l < 0 and r > n)
    {
        cout << "Enter valid L and R";
        return 0;
    }
    int sum = 0;
    for (int i = l; i <= r; i++)
    {
        sum += arr[i];
    }

    cout << "The sum : " << (sum) << endl;
    return 0;
}