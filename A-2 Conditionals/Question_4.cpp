// - Write a program to print positive number entered by the user, if user enters a negative
// number, it is skipped.

// Header Files
#include <iostream>

using namespace std;

// Main Function Starts here
int main()
{
    // code here.
    int num;
    cout << "Enter the Number : ";
    cin >> num;

    if (num < 0)
    {
        cout << "The Entered Number is negative and skipped";
    }
    else
    {
        cout << "The Entered Number is : " << num;
    }
    cout << endl;

    return 0;
}