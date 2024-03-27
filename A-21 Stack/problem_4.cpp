//  You are given an array of n integers representing the heights of the buildings in an area. Mario can jump
// from one building of height arr[i] to another of height arr[j], i <= j, if the height of the second building is
// strictly greater than the height of the first building i.e. arr[j] > arr[i]. Each day mario makes a jump. Today he
// is a little busy so he wants to keep the length of jump(j - i) as small as possible. Help him find the location
// from where he must make his jump and to where.

// Assume there always exists a valid answer. If there are multiple answers, print the answer with the
// minimum index(0 -based indexing).

#include <iostream>
#include <vector>
#include <stack>

using namespace std;
vector<int> minHeightJump(vector<int> &v)
{
    stack<vector<int>> st;
    int minCost = INT8_MAX;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] < v[j])
            {
                if (minCost > (j - i))
                {
                    minCost = (j - i);
                    st.push({i, j});
                }
            }
        }
    }
    return st.top();
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements of the array : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> res = minHeightJump(v);

    cout << endl
         << "The output is : " << res[0] << " " << res[1] << endl;
    return 0;
}