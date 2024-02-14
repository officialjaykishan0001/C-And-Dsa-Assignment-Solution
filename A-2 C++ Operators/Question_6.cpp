//  Design a calculator to perform basic arithmetic operations (+,-,/,*,%)

#include <iostream>
using namespace std;

int main()
{
    // Take input from user
    int a, b;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;

    // Output
    cout << "Sum = " << (a + b) << endl;
    cout << "Difference = " << (a - b) << endl;
    cout << "Product = " << (a * b) << endl;
    cout << "Division = " << (float(a) / b) << endl;

    return 0;
}