// Write a program to check whether two numbers (entered by user) are equal or not.

#include <iostream>

using namespace std;

int main()
{
    // Take Input from User
    int a, b;
    cout << "Enter First Number : ";
    cin >> a;
    cout << "Enter Second Number : ";
    cin >> b;

    // Logic to Check Whether entered Numbers are equal or not.
    if (a == b)
    {
        cout << "The Two Numbers are equal";
    }
    else
    {
        cout << "Numbers are not equal";
    }

    return 0;
}