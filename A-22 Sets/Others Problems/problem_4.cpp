//  Given an array of size n filled with natural numbers in random order. The array has only one repeating
// element. The task is to find that repeating element

#include<bits/stdc++.h>

using namespace std;

int helper(vector<int> v){
    int max = INT_MIN;
    for(int i = 0; i < v.size(); i ++)
    {
        if(max < v[i]){
            max = v[i];
        }
    }

    
    
    vector<int> freq (max + 1, 0);

    for(int i = 0;i < v.size(); i++)
    {
        freq[v[i]]++;
    }


    int res = -1;
    for(int i = 0; i < freq.size(); i++)
    {
        if(freq[i] >1){
            res = i;
            break;

        }
    }

    return res;



}
int main()
{
    int n ;
    cout<<"Enter The value of N : ";
    cin>>n;

    vector<int> v(n);

    cout<<"Enter the elements of the vector array : "<<endl;

    for(int i = 0;i < n; i++)
    {
        cin>>v[i];
    }

    int res = helper(v);

    cout<<endl<<"The repeateding element is : "<<res<<endl;

    return 0;

}