// Write a program to find the sum of n natural numbers.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the nth Natural Number : ";
    cin >> num;

    int sum = 0;
    while (num > 0)
    {
        sum += num;
        num--;
    }

    cout << "The Sum is : " << sum << endl;

    return 0;
}