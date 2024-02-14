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
int PreviousPrimeNo(int num);

// Global Varieble Declaration
int PrimeNumber = -1;
int lastPrime = PrimeNumber + 1;

// Main Function start
int main()
{
    // Take Number from user
    int num;
    cout << "Enter your Number : ";
    cin >> num;

    // if num is already prime then print massage and return
    if (isPrime(num))
    {
        cout << endl
             << "The number can't expressed as the sum of the prime number ";
        return 0;
    }

    // Find the previous Prime Number to the Number
    int PrePrimeNo = PreviousPrimeNo(num);
    // find the second prime number which can be added to Previous Prime number to make the Orignal Number.
    int secondNo = -1;
    while (1)
    {
        GeneratePrimeNumber();
        if (PrePrimeNo + lastPrime == num)
        {
            secondNo = lastPrime;
            break;
        }
    }

    // At End print following massage.
    cout << "It Expressed as : " << PrePrimeNo << " + " << secondNo << endl;

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

int PreviousPrimeNo(int num)
{
    int result = -1;
    while (num > 0)
    {
        if (isPrime(num))
        {
            result = num;
            break;
        }
        num--;
    }
    return result;
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