// - Write a C++ program to calculate the cube of a number

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the Number here : ";
    cin >> a;

    int cube = a * a * a;

    cout << "The Cube of the Number " << a << " is : " << cube << endl;

    return 0;
}