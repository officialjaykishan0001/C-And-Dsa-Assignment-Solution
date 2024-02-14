// Given two numbers a and b, write a program using functions to print all the odd numbers
// between them.

// Header Files
#include <iostream>
using namespace std;

// Function to check number is odd or not
bool isOdd(int number)
{
    if (number % 2 == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
    return true;
}
int main()
{
    int a, b;
    cout << "Enter the number a : ";
    cin >> a;
    cout << "Enter the number b : ";
    cin >> b;
    if (a > b)
    {
        cout << "a should be less than b ";
        return 0;
    }
    for (; a < b; a++)
    {
        if (isOdd(a))
        {
            cout << a << " ";
        }
    }

    return 0;
}