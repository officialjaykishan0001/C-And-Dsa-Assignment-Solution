// - Write a program to print + pattern given below :
/*

    *
    *
* * * * *
    *
    *

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n :  ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i != n / 2)
        {
            for (int k = 0; k < n / 2; k++)
            {
                cout << " ";
            }
        }
        if (i != n / 2)
        {

            cout << "*";
        }
        cout << endl;
        if (i == n / 2)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "*";
            }
        }

        if (i != n / 2)
        {
            for (int k = 0; k < n / 2; k++)
            {
                cout << " ";
            }
        }
        if (i != n / 2)
        {

            cout << "*";
        }
        // cout << endl;
    }
}