//  Write a program to print alphabet diamond pattern:
/*
 A
 ABC
 ABCDE
 ABCDEFG
ABCDEFGHI
 ABCDEFG
 ABCDE
 ABC
 A
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n :  ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - 1 - i); j++)
        {
            cout << " ";
        }
        for (int k = 0; k < (2 * i + 1); k++)
        {

            cout << char(65 + k);
        }
        cout << endl;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < (2 * n - (2 * i + 1)); k++)
        {
            cout << char(65 + k);
        }
        cout << endl;
    }
}