// Write a C++ program to swap two numbers with the help of a third variable.

#include <iostream>

using namespace std;

// Main Function starts here
int main()
{
    int first = 1;
    int second = 2;
    int temp; // third varible.

    // Print the Massage
    cout << "First = " << first;
    cout << "\nSecond = " << second;

    // Process to Swap .

    temp = first;
    first = second;
    second = temp;

    // Print the Massage
    cout << endl;
    cout << "First = " << first;
    cout << "\nSecond = " << second;

    return 0;
}