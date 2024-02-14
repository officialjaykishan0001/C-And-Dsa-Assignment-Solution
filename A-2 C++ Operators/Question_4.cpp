// - Write a program to calculate the sum of the first and the second last digit of a 5 digit number.

#include <iostream>
using namespace std;

int main()
{

    int num = 34343;

    // Logic to solve the problem.
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        int quotient = num / 10;
        int remainder = num % 10;

        if (i == 1)
        {
            sum += remainder;
        }
        if (i == 4)
        {
            sum += remainder;
        }

        num = quotient;
    }

    // Output
    cout << sum << endl;

    return 0;
}