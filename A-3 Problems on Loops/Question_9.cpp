// Q9- Write a C++ program to check whether a Number can be expressed as a Sum of Two Prime Numbers.
// Eg. Sample Input - Enter a +ve Integer : 14
// Sample Output –
// 14 = 3 + 11
// 14 = 7 + 7

// Header Files
#include <iostream>

using namespace std;

// Function Declaration.
bool isPrime(int x);
void GeneratePrimeNumber();

// Global Varieble Declaration
int PrimeNumber = -1;
int lastPrime = PrimeNumber + 1;

// Main Function start
int main()
{
    GeneratePrimeNumber();
    cout << PrimeNumber << endl;
    GeneratePrimeNumber();
    cout << PrimeNumber << endl;
    GeneratePrimeNumber();
    cout << PrimeNumber << endl;
    GeneratePrimeNumber();
    cout << PrimeNumber << endl;
    // Return
    return 0;
}

// Function Defination
bool isPrime(int x)
{
    // Some Base Cases
    if (x == 1)
        return true;
    if (x < 2)
        return false;

    // All process to check x is prime or not
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0 and x != i)
        {
            // X is not a prime number.
            return false;
        }
    }

    // All process is clear so return true.
    return true;
}

void GeneratePrimeNumber()
{
    lastPrime = PrimeNumber + 1;
    while (!(isPrime(lastPrime)))
    {
        lastPrime = lastPrime + 1;
    }

    PrimeNumber = lastPrime;
}