// - Write a program which takes the values of length and breadth from user and check if it is
// a square or not

// Header Files
#include <iostream>

using namespace std;

// Main Function Starts here
int main()
{
    int length, breadth;
    cout << "Enter the length of the Square : ";
    cin >> length;
    cout << "\nEnter the Breadth of the Square : ";
    cin >> breadth;

    if (length == breadth)
    {
        cout << "\nIt is Square";
    }
    else
    {
        cout << "\nIt is not Square";
    }
    cout << endl;
    return 0;
}
