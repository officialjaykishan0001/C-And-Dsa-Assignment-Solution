// Write a C++ program to print a triangle of prime numbers upto given number of lines of the triangle.
/*
     2
    3 5
   7 11 13
  17 19 23 29
 31 37 41 43 47
53 59 61 67 71 73
79 83 89 97 101 103 107
113 127 131 137 139 149 151 

*/
#include <iostream>
using namespace std;
int maximum = 11;

bool isPrime(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0 and i != x)
        {
            return false;
        }
    }
    return true;
}
int last_prime = 1;

int generate_Prime_No()
{
    int next_prime_Number = last_prime + 1;
    while (!isPrime(next_prime_Number))
    {
        ++next_prime_Number;
    }
    last_prime = next_prime_Number;
    return last_prime;
}
int main()
{
    int n;
    cout << "Enter the value of N : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - 1 - i); j++)
        {
            cout << " ";
        }
        // k < (2 * i + 1)
        for (int k = 0; k <= (i); k++)
        {
            cout << generate_Prime_No() << " ";
        }
        cout << endl;
    }

    return 0;
}