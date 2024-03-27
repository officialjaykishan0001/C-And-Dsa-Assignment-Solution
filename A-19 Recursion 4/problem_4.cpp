// Header files
#include <iostream>
#include <vector>
using namespace std;

// Helper function -> contains all the function logic
void f(string &str1, string &str2, int idx)
{
    // Base Case
    if (idx == str2.size())
    {
        return;
    }
    // Merge each character of str2 into str1
    str1.push_back(str2[idx]);

    // Recursive call
    f(str1, str2, idx + 1);
}

// Driver Function/ main function
int main()
{
    // Input taking from user
    string str1, str2;
    cout << "Enter first string : ";
    cin >> str1;
    cout << endl
         << "Enter second string : ";
    cin >> str2;

    // Call to helper function
    f(str1, str2, 0);

    // Print output
    cout << "Merged String is : " << str1 << endl;

    return 0;
}