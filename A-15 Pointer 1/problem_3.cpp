#include <iostream>
using namespace std;

void smallestAndLargest(int &smallest, int &greatest)
{
    int a, b, c;
    cout << "Enter your three numbers : ";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        greatest = a;
        if (b < c)
        {
            smallest = b;
        }
        else
        {
            smallest = c;
        }
    }
    else if (b > a && b > c)
    {
        greatest = b;
        if (a < c)
        {
            smallest = a;
        }
        else
        {
            smallest = c;
        }
    }
    else
    {
        greatest = c;
        if (a < b)
        {
            smallest = a;
        }
        else
        {
            smallest = b;
        }
    }
    return;
}
int main()
{
    int smallest, greatest;
    smallestAndLargest(smallest, greatest);

    cout << "Smallest : " << (smallest) << endl
         << "Greatest : " << (greatest) << endl;
    return 0;
}