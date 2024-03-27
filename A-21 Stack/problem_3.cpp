//  Given a vector, print the index of the Next Smaller Element for every element. 

// The Next Smaller Element for an element x is the first smaller element on the right side of x in the vector.
// Elements for which no smaller element exists, consider the next smaller element as -1. 

// The first line of input contains the size of the vector.

// The second line of input contains the elements of the vector.

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> getNSE(vector<int> &v){
    stack<int> st;
    vector<int>ans;
    for(int i = 0;i < v.size(); i++)
    {   
        bool flag = false;
        for(int j = i+1; j < v.size();j++){
            if(v[j]< v[i]){
                ans.push_back(j);
                flag = true;
                break;
            }
            
        }
        if(flag == false){
            ans.push_back(-1);
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    vector<int> v(n);

    cout<<endl<<"Enter the elements of the array : "<<endl;

    for(int i = 0;i < n; i++){
        cin>>v[i];
    }

    vector<int> ans = getNSE(v);

    cout<<endl<<"The final output is : "<<endl;

    for(int i = 0;i < ans.size(); i ++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}