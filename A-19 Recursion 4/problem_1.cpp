// Header Files  
#include <iostream>
#include <vector>
using namespace std;

// Helper function containing all the logic to solve the problem
void f(string str, int idx, string &res)
{
    if (idx == str.size())
    {
        return;
    }
    if (res.size() == 0 || res[res.size() - 1] != str[idx])
    {
        res.push_back(str[idx]);
    }

    // Recursive  call 
    f(str, idx + 1, res);
}

// Function
string removeDuplicateChar(string str)
{
    string res;
    f(str, 0, res);
    return res;
}

// Main Function containing Driver Code
int main()
{
    string str;
    cout << "Enter The String : ";
    cin >> str;

    cout << "The Resultant String is : " << removeDuplicateChar(str) << endl;

    return 0;
}