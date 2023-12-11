// Write a program to reverse a given integer number.

#include <math.h>
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the Number :  ";
    cin >> num;

    int newNum = 0;

    while (num > 0)
    {
        int digit = num % 10;

        num = num / 10;
        newNum = newNum * 10 + digit;
    }

    cout << "The new number is :  " << newNum << endl;
    return 0;
}