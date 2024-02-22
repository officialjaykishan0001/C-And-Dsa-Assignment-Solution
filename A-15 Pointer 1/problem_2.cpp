#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 1;

    cout << "The Product is : " << (*(&a) * (*(&b)));

    return 0;
}