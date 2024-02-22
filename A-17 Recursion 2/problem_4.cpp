#include <iostream>
#include <vector>
using namespace std;

// Time complexity : O(n)
// Space Complexity : O(n)
void f(vector<int> bc, vector<int> &gc, int idx)
{
    if (idx == bc.size())
    {
        return;
    }

    gc[idx] = bc[idx] ^ bc[idx - 1];

    f(bc, gc, idx + 1);
}
int main()
{
    int n;
    cout << "Enter the N : ";
    cin >> n;

    vector<int> binaryC(n);

    cout << endl
         << "Enter the Binary Code : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> binaryC[i];
    }

    vector<int> grayC(n);

    grayC[0] = binaryC[0];

    f(binaryC, grayC, 1);

    cout << endl
         << "OUTPUT : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << grayC[i] << " ";
    }

    return 0;
}