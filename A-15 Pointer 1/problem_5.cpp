#include <iostream>
using namespace std;

void GetSol(string &str, char &fChar, char &lChar, int &Occ)
{
    fChar = str[0];
    lChar = str[str.size() - 1];

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 't' || str[i] == 'T')
        {
            Occ++;
        }
    }

    return;
}
int main()
{
    string str;
    cout << "Enter the string : ";
    cin >> str;
    char firstChar, lastChar;
    int OccofT = 0;
    GetSol(str, firstChar, lastChar, OccofT);

    cout << "First character : " << (firstChar) << " "
         << "Last Character : " << (lastChar) << " "
         << "Occurence of T : " << (OccofT) << endl;

    return 0;
}