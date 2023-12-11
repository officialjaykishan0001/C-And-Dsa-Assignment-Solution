// Write a C++ program to take length and breadth of a rectangle and print its area

// header files
#include <iostream>

using namespace std;

int main()
{
    // code here
    int area;
    int breadth;
    int length;
    cout << "Enter the length of rectangle : ";
    cin >> length;
    cout << "Enter the Breadth of the Rectangle : ";
    cin >> breadth;

    area = length * breadth;

    cout << "The Area of Rectangle is : " << (area) << endl;

    return 0;
}