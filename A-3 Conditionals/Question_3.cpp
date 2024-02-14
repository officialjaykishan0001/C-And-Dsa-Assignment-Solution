// Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
// calculate Profit or Loss.

// Header Files
#include <iostream>

using namespace std;

// Main Function Start here
int main()
{
    int cp, sp;
    cout << "Enter the Cost Price : ";
    cin >> cp;
    cout << "\nEnter the Selling Price : ";
    cin >> sp;

    int formula = sp - cp;

    if (formula < 0)
    {
        cout << "\nLoss :  " << formula * (-1);
    }
    else
    {
        cout << "\nProfit :  " << formula;
    }
    return 0;
}