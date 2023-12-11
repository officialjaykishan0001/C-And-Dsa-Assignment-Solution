// - Write a program to print all Armstrong numbers between 100 to 500

#include <iostream>

using namespace std;

int cube(int x);
bool armstrong(int temp);


int main()
{

    for (int i = 100; i <= 500; i++)
    {
        if (armstrong(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}

int cube(int x)
{
    return x * x * x;
}

bool armstrong(int temp)
{
    int num = temp;
    int newNum = 0;
    while (num > 0)
    {
        int digit = num % 10;
        num = num / 10;
        newNum += cube(digit);
    }

    if (newNum == temp)
        return true;

    return false;
}