#include <iostream>
#include <vector>
using namespace std;


vector<int> subArray(vector<int> arr){
    vector<vector<int>> subArray;

    for(int i = 0; i < arr.size(); i++)
    {
        for(int j =i; j < arr.size() ; j++){
            for(int k = i; k <= j; k++){
                cout<<arr[k]<<" ";
            }
        cout<<endl;
        }
    }
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of the array : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    subArray(arr);

    return 0;
}