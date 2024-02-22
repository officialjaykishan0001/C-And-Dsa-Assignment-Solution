#include <iostream>
using namespace std;



void printSeries(int n)
{
    if (n <= 0)
    {
        cout << (n) << " ";
        return;
    }
    cout << (n) << " ";
    printSeries(n - 5);
    cout << (n) << " ";
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    printSeries(n);
}