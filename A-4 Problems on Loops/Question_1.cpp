//  Write a program to calculate the factorial of a number.

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter your Number : ";
    cin >> num;

    int factorial = 1;

    if (num == 0)
        factorial = 0;
        
    for (int i = num; i >= 1; i--)
    {
        factorial = factorial * i;
    }

    cout << "\nFactorial is : " << factorial << endl;
    return 0;
}