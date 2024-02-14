//  Given a natural number, find the number of 0’s in the binary representation of that number.
// Note: Don’t count the preceding zeros.
// For example: 001001 has 2 zeros as the first two zeros from left are preceding zeros

#include <iostream>
using namespace std;

int decimalToBinary(int decimalNum)
{
    int binaryNum = 0;
    int temp = 1;
    while (decimalNum > 0)
    {
        int quotient = decimalNum / 2;
        int remainder = decimalNum % 2;

        binaryNum = binaryNum + remainder * temp;

        decimalNum = quotient;
        temp = temp * 10;
    }

    return binaryNum;
}

int main()
{
    // Taking the input from the user
    int num;
    cout << "Enter the natural Number : ";
    cin >> num;

    // Logic to solve the problems
    int binaryRepresentation = decimalToBinary(num) * 1; // Multiplying by 1 to ingore preceding zeros.

    int countZeros = 0;

    while (binaryRepresentation > 0)
    {
        if (binaryRepresentation % 10 == 0)
        {
            countZeros++;
        }

        binaryRepresentation = binaryRepresentation / 10;
    }

    // Output
    cout << "Total No of Zeros : " << (countZeros) << endl;

    return 0;
}