// Write a program to calculate marks to grades . Follow the conversion rule as given below :
// For Table Refer to the Assignment pdf.

// Header Files
#include <iostream>

using namespace std;

// Main Function starts here.
int main()
{
    int grade;
    cout << "Enter Your Grade : ";
    cin >> grade;
    cout << endl;
    if (grade >= 90)
        cout << "A+";
    else if (grade >= 80)
        cout << "A";
    else if (grade >= 70)
        cout << "B+";
    else if (grade >= 60)
        cout << "B";
    else if (grade >= 50)
        cout << "C";
    else if (grade >= 40)
        cout << "D";
    else if (grade >= 30)
        cout << "E";
    else
        cout << "F";

    cout << endl;
    return 0;
}