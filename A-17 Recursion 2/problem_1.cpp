#include <iostream>
using namespace std;
int f(int n, int m, int num)
{
    if (num == m)
    {
        return n * m;
    }

    f(n, m, num + 1);
}
int main()
{
    int multiplicand, multiplier;
    cout << "Enter multiplicand : ";
    cin >> multiplicand;
    cout << "\nEnter Multiplier : ";
    cin >> multiplier;
    int num = 1;
    cout << "The product is : " << (f(multiplicand, multiplier, num));
    return 0;
}