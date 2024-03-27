//  Given two vectors. You have to find the intersection of these two vectors.

// The intersection contains all the unique elements that are common between the two or more vectors.

// It is possible that the vectors have no element in common. 

// You can return the answer in any order.
#include <bits/stdc++.h>
using namespace std;

vector<int> helper(vector<int> &v1, vector<int> &v2)
{
    set<int> s1(v1.begin(), v1.end());
    set<int> s2(v2.begin(), v2.end());
    vector<int> res;
    for (auto it : s1)
    {
        if ((s2.find(it)) != s2.end())
        {
            res.push_back(it);
        }
    }

    return res;
}

int main()
{
    int m, n;
    cout << "Enter the value of m : ";
    cin >> m;

    vector<int> v1(m);
    cout << endl
         << "Enter the elements of the first vector : " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> v1[i];
    }

    cout << endl
         << "Enter the value of n : ";
    cin >> n;

    vector<int> v2(n);
    cout << endl
         << "Enter the elements of the second vector : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    vector<int> res = helper(v1, v2);

    cout << "The output is  : " << endl;
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}