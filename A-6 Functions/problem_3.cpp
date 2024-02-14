// Given the age of a person, write a function to check if the person is eligible to vote or not.

// Header Files
#include <iostream>
using namespace std;

bool voteFilter(int age)
{
    if (age <= 18)
    {
        return false;
    }
    else
    {
        return true;
    }
    return true;
}

// Main Function
int main()
{
    int age;
    cout << "Enter Your Age : ";
    cin >> age;

    if (voteFilter(age))
    {
        cout << "Yes, You are eligible for vote";
    }
    else
    {
        cout << "Sorry, You are not eligible for vote";
    }

    return 0;
}