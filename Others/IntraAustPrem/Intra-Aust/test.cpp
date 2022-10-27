#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string p = s;
    reverse(s.begin(), s.end());
    if (p == s)
    {
        cout << "Yes" << endl;
        return 0;
    }

    if (p[p.length()-1] == 'a')

    {   
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}