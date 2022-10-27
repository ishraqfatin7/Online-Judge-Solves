#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s; //
        char first = s[0];
        char last = s[s.length() - 1];
        string newString;
        if (s.length() > 10)
        {
            for (int i = 1; i < s.length() - 1; i++)
            {
                newString += s[i];
            }
            cout << first << newString.length() << last << endl;
        }
        else{
            cout <<s<<endl;
        }
    }
}