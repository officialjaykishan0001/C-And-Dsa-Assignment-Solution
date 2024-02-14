//  Write a program to print the cross pattern given below (in the shape of X):
// For figure refer to the assignment question pdf.


// THIS PROGRAM ONLY WORKS FOR N = 3. THIS IS NOT THE COMPLETE SOLUTION FOR THIS.
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the no of rows : ";
    cin >> n;
    // For printing the X shape, in this approach i have divided the X shape into three part as : top, middle, bottom.

    // Code for printing the top part
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << "*";

        for (int k = 0; k < (n - 2 * i); k++)
        {
            cout << " ";
        }
        cout << "*";
        cout << "\n";
    }

    // Code for printing the middle part
    for (int i = 0; i < n - 1; i++)
    {
        cout << " ";

        if (i == n - 2)
        {
            cout << "*";
        }
    }
    cout << "\n";

    // Code for printing the bottom part
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < (1 - i); j++)
        {
            cout << " ";
        }
        cout << "*";

        for (int k = 0; k < (2 * i + 1); k++)
        {
            cout << " ";
        }

        cout << "*";

        cout << "\n";
    }
    return 0;
}