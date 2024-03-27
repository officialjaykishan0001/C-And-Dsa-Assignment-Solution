// Header Files
#include<iostream>
#include<vector>
using namespace std;

// Helper Function -> All problem logic written here
void f(string str, int idx, string &revStr ){
    // Base Case
    if(idx == str.size()){
        return ;
    }

    // Recursive call
    f(str, idx + 1, revStr);

    // Through Backtracking adding last to first  elements to the revStr
    revStr.push_back(str[idx]);


}

// Driver Function
int main(){
    // STring str
    string str;
    cout<<"Enter Your String : ";
    cin>>str;
    // Resultant String
    string revStr;

    // Calling to recursive function f
    f(str, 0, revStr);

    // Print Output
    cout<<"The Reversed string is : "<<revStr<<endl;

    return 0;
    
}