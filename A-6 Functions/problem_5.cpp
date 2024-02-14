// Given two numbers a and b, write a program to print all the prime numbers present between
// a and b

// Header Files
#include <iostream>
using namespace std;

// Function to check prime number
bool isPrime(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a, b;
    cout << "Enter number a : ";
    cin >> a;
    cout << "Enter number b : ";
    cin >> b;

    if (a > b)
    {
        cout << "a should be less than b ";
        return 0;
    }

    for (; a < b; a++)
    {
        if (isPrime(a))
        {
            cout << a << " ";
        }
    }
    return 0;
}