//  Print the sum of the first 5 decimal numbers from 1 to 5 in binary format

#include <iostream>
using namespace std;

// Function for converting decimal into binary
int decimalToBinary(int num)
{
    int temp = 1;
    int binaryNum = 0;
    while (num > 0)
    {
        int quotient = num / 2;
        int remainder = num % 2;
        binaryNum = binaryNum + remainder * temp;
        num = quotient;
        temp = temp * 10;
    }

    return binaryNum;
}

int main()
{
    // Logic to solve the problem
    int sum = 0;

    for (int i = 1; i <= 5; i++)
    {
        sum += i;
    }

    // Output
    cout << "The sum is " << decimalToBinary(sum) << endl;
    return 0;
}