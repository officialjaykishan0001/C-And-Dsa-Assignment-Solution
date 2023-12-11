// 2 - Write a program to print absolute value of a number entered by the user

// Header Files
#include <iostream>

using namespace std;

// Main Function Starts here
int main()
{
    int num;
    cout << "Enter the Number : ";
    cin >> num;

    if (num < 0)
    {
        num *= (-1); // num = num * 1
    }

    cout << endl;
    return 0;
}