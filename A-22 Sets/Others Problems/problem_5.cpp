// There is a person who is at current_pos position and a binary string path which is the moves the person
// took, if path[i] = ‘0’ then the person moved one step left, and if path[i] = ‘1’ then the person moved one step
// to the right. The task is to find the count of distinct positions the person visited.

#include <iostream>
#include <list>
#include <vector>
#include <string>
#include<set>
using namespace std;

vector<int> helper(string &str, int curr_pos)
{   
    set<int> s;
    s.insert(curr_pos);
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '0'){
            curr_pos = curr_pos - 1;
            s.insert(curr_pos);
        }
        else{
            curr_pos = curr_pos + 1;
            s.insert(curr_pos);
        }
    }

    vector<int> res;

    for(auto it : s){
        res.push_back(it);
    }
    return res;
}
int main()
{
    int curr_pos;
    cout << "Enter the current Positiion : ";
    cin >> curr_pos;

    string str;
    cout << "Enter the binary string : ";
    cin >> str;

    vector<int> output = helper(str, curr_pos);

    cout << "The final resultant output is : " << endl;

    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }

    return 0;
}