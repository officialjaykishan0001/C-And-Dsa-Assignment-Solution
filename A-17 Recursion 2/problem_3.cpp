#include <iostream>
#include <math.h>
using namespace std;
// Global variable
int count = 0;

// Decimal to binary code
int f(int n, int &bd)
{
    if (n == 1)
    {
        return bd += (1) * pow(10, count);
    }

    bd += (n % 2) * pow(10, count);
    count = count + 1;
    return f(n / 2, bd);
}

int main()
{
    int n, bd = 0;
    cout << "Enter the number : ";
    cin >> n;

    cout << "the Binary code for " << (n) << " is : " << (f(n, bd)) << endl;

    return 0;
}