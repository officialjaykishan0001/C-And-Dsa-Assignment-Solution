// - Given radius of a circle. Write a function to print the area and circumference of the circle.

// Applicable formulae : area of circle = 3.14 X r ^ 2
//               circumference of circle = 2 X 3.14 X r

// Header Files
#include <iostream>

// To Avoid using namespace std (::std) everyWhere
using namespace std;

// Computes the square of the circle
int square(int number)
{
    return (number * number);
}
// Function computes the Area of the circle
float cirArea(int radius)
{
    return (3.14 * square(radius));
}

// Function computes the circumference of the circle
float cirCircumference(int radius)
{
    return (2 * 3.14 * radius);
}

// Main function
int main()
{
    int radius;
    cout << "Enter the radius of the circle : ";
    cin >> radius;

    cout << "The Area of the circle is : " << (cirArea(radius)) << endl;
    cout << "The Circumference of the circle is : " << (cirCircumference(radius));

    return 0;
}
