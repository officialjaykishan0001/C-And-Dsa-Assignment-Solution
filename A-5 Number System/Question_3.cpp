//  - Given two binary numbers, return the greatest of these numbers in decimal format

#include<iostream>
using namespace std;

int binaryRepresentation(int decimalNum)
{
    int binaryNum = 0;
    int temp = 1;
    while(decimalNum > 0)
    {
        int quotient = decimalNum / 2;
        int remainder = decimalNum % 2;

        binaryNum += remainder * temp;

        decimalNum = quotient;
        temp = temp * 10;
    }

    return binaryNum;
}
int main()
{
    int a, b;
    cout<<"Enter first Number : ";
    cin>>a;
    cout<<"Enter second Number : ";
    cin>>b;

    int binaryRepreOfa = binaryRepresentation(a);
    int binaryRepreOfb = binaryRepresentation(b);

    if(a > b)
    {
        cout<<binaryRepreOfa<<" is greater than "<<binaryRepreOfb<<endl;
    }
    else{
        cout<<binaryRepreOfb<<" is greater than "<<binaryRepreOfa<<endl;
    }

    return 0;
    
}