#include <iostream>
using namespace std;

// Time Complexity : O(n) 
// space complexity : O(n)

bool f(int num, int iterator)
{
    if (iterator == num)
    {
        return true;
    }
    else if (num % iterator == 0)
    {
        return false;
    }
    else if (num % iterator != 0)
    {
        return f(num, iterator + 1);
    }
    return true;
}
int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;

    int iterator = 2;

    cout << "Is the Number Prime : " << (f(num, iterator)) << endl;
    return 0;
}