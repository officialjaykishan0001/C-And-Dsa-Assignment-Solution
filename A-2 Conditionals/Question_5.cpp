// Create a calculator using switch statement to perform addition, subtraction, multiplication
// and division

// Header Files
#include <iostream>

using namespace std;

int main()
{
    // code here.
    int x, y;
    char sign;

    cout << "Enter the sign ( + - * / ) : ";
    cin >> sign;

    cout << "Enter the first Number : ";
    cin >> x;
    cout << "Enter the Second Number : ";
    cin >> y;
    cout << endl;
    switch (sign)
    {
    case '+':
        cout << "Additon is : " << (x + y);
        break;

    case '-':
        cout << "Differnce is : " << (x - y);
        break;

    case '*':
        cout << "Product is : " << (x * y);
        break;

    case '/':
        cout << "Quotient is : " << (x / y);
        break;
    default:
        cout << "Entered Operator is Wrong !!" << endl;
    }

    return 0;
}