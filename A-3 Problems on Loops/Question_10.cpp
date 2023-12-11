// Q10- Write a C++ program to print a rectangle out of *
// Sample Output :
// Sample Input :
// Please Enter the number of StarRows:
// 2
// Please Enter the number of StarColumns:
// 3
// * * *
// * * *

// header files
#include <iostream>

using namespace std;

// Main Function
int main()
{
    // Required Varieble Declaration
    int rows, columns;

    // Massage Printing
    cout << "Enter the NO of Rows : ";
    cin >> rows;
    cout << "Enter the NO of columns :  ";
    cin >> columns;

    // All process to print the Rectangle.
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Return
    return 0;
}