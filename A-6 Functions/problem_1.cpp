// Write a function to print squares of the first 5 natural numbers.

#include <iostream>

using namespace std;

int NaturalNumSum()
{
    int num = 1, sum = 0;
    for (; num < 6; num++)
    {
        sum += num;
    }
    return sum;
}

int main()
{
    cout << "The sum is : " << (NaturalNumSum());
    return 0;
}