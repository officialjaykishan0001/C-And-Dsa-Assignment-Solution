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
    // Take input from user.
    int n;
    cout << "Enter the value of n :  ";
    cin >> n;

    // Check for entered number is odd or even
    if (n % 2 == 0)
    {
        cout << "Entered Number is not a Odd Number. Please enter the odd number only !";
        return 0;
    }

    // Divide this shape into three parts - top, middle, bottom
    for (int i = 0; i < n; i++)
    {
        // Code for printing top part of the shape
        if (i < n / 2)
        {
            for (int j = 0; j < n / 2; j++)
            {
                cout << " ";
            }
            cout << "*";
            cout << "\n";
        }
        // Code for printing the middle part of the shape
        if (i == n / 2)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }

        // Code for printing the bottom part of the shape
        if (i > n / 2)
        {
            for (int k = 0; k < n / 2; k++)
            {
                cout << " ";
            }
            cout << "*";
            cout << "\n";
        }
    }
}