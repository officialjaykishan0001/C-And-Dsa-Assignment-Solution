// 1. You are given an array of n digits. Your task is to generate a k-digit number such that it is the maximum
// possible number that can be generated from the given digits. Make sure that the relative ordering of the
// digits is not changed.

// Note the value of k can be large so the number should be formed in the form of a string.

#include <vector>
#include <iostream>
#include <stack>
#include <string>

#include <algorithm>
using namespace std;

// Actual logic containing function 
string helper(vector<int> &v, int k)
{
    // Declare stack 
    stack<int> st;

    // Sort array in ascending order
    sort(v.begin(), v.end());

    // Push all element in the stack
    for (int i = 0; i < v.size(); i++)
    {
        st.push(v[i]);
    }

    // Remove last k elements from the stack 
    string ans = "";
    while (k--)
    {
        int num = st.top();
        ans += to_string(num );
        st.pop();
    }
    // reverse teh ans string and return 
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    // Take Input 
    int n;
    cout << "Enter n : ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter The elements of the vector : ";
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int k;
    cout << "Enter k : ";
    cin >> k;

    // Call to helper function for output/ result
    string res = helper(v, k);

    cout << endl
         << "The final output : " << res << endl;
    return 0;
}