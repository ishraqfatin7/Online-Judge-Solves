#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{

    string newString = s;
    reverse(newString.begin(), newString.end());
    if (s == newString)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        if (k == 0)
        {
            cout << "1" << endl;
        }
        if (k >= 1)
        {
            if (isPalindrome(s))
            {
                cout << "1" << endl;
            }
            else
            {
                cout << "2" << endl;
            }
        }
    }
}