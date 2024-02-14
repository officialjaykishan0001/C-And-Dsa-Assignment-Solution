//  Write a program to calculate the sum of digits of a 3 digit number.

#include <iostream>
using namespace std;

int main()
{
    int num = 123;

    // Logic to solve Problems
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num = num / 10;
    }

    // Output
    cout << "The sum is : " << (sum) << endl;

    return 0;
}