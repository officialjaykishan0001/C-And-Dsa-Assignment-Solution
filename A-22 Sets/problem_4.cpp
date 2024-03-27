// . Given two vectors. You have to find the union of these two vectors.

// The union contains all the unique elements of two or more vectors.

// You can return the answer in any order.

#include <bits/stdc++.h>
using namespace std;

set<int> helper(vector<int> &v1, vector<int> &v2)
{
    set<int> s1(v1.begin(), v1.end());
    set<int> s2(v2.begin(), v2.end());
    
    s1.insert(s2.begin(),s2.end());

    return s1;
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

    set<int> res = helper(v1, v2);

    cout << "The output is  : " << endl;
    for(auto it : res){
        cout<<it<<" ";
    }   

    return 0;
}