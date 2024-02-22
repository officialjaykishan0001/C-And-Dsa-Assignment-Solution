#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 3, temp;

    // Addresses of each variable
    int *addofA = &a;
    int *addofB = &b;
    int *addofTemp = &temp;

    // Swapping method applied (Using a third variable)
    *addofTemp = *addofA;
    *addofA = *addofB;
    *addofB = *addofTemp;

    cout << "a = " << (a) << " "
         << "b = " << (b) << endl;

    return 0;
}

// Remember : 
// & is address of operator
// and * is value at address operator