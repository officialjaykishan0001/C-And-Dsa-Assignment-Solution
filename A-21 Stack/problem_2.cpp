// 2. You are given two non-empty linked lists representing two non-negative integers. The most significant
// digit comes first and each of their nodes contains a single digit. Add the two numbers and return the sum as
// a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

// The first line of input contains n and m, the size of the 2 linked lists.

// The second line of input contains n integers, the values stored in the first linked list.

// The third line of input contains m integers, the values stored in the second linked list

#include <iostream>
#include <list>
#include <stack>
using namespace std;

list<int> helper(list<int> l1, list<int> l2)
{
    list<int> res;
    stack<int> st;

    while (!l1.empty() && !l2.empty())
    {
        int sum = l1.back() + l2.back();

        st.push(sum);
        l1.pop_back();
        l2.pop_back();
    }

    while (!l1.empty())
    {
        st.push(l1.back());
        l1.pop_back();
    }

    while (!l2.empty())
    {
        st.push(l2.back());
        l2.pop_back();
    }

    while (!st.empty())
    {
        res.push_back(st.top());
        st.pop();
    }

    return res;
}
int main()
{
    // Take input
    list<int> l1, l2;

    int m, n;
    cout << "Enter m: ";
    cin >> m;

    cout << endl
         << "Enter the node values of the list : " << endl;

    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        l1.insert(l1.end(), num);
    }

    cout << "Enter n : ";
    cin >> n;

    cout << endl
         << "enter the node values of the list : " << endl;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        l2.insert(l2.end(), num);
    }

    list<int> ans = helper(l1, l2);

    cout << endl
         << "The final answer is : " << endl;

    while(!ans.empty()){
        cout<<ans.front()<<" ";
        ans.pop_front();
    }
    return 0;
}