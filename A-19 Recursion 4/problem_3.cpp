// Header Files
#include <iostream>
#include <vector>
using namespace std;

// Recursive Function used to reverse string
void reverse(string str, int idx, string &revStr)
{
    // Base Case
    if (idx == str.size())
    {
        return;
    }
    // Recursive Call
    reverse(str, idx + 1, revStr);
    // Insert last of str as first element of revStr
    revStr.push_back(str[idx]);
}

// Function used to rotate a particular string by one step
void rotation(string &str)
{
    // Store First Element
    char temp = str[0];

    // Move each Elements towards left by one position
    for (int i = 0; i < str.size() - 1; i++)
    {
        str[i] = str[i + 1];
    }

    // Insert First element as last element in the same string
    str[str.size() - 1] = temp;
    return;
}

// Helper Function -> contains all logic to solve the problem
bool f(int idx, string str)
{
    // Base Case
    if (idx == str.size())
    {
        return false;
    }
    // rotate string
    rotation(str);
    
    // get reverse of string 
    string revStr;
    reverse(str, 0, revStr);

    // check for palindrome
    if (revStr == str)
    {
        return true;
    }

    // Recursive call
    return f(idx + 1, str);
}

// Driver code
int main()
{
    string str;
    cout << "Enter Your string : ";
    cin >> str;

    cout << "The Output is : " << (f(0, str)) << endl;

    return 0;
}