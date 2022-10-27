#include <bits/stdc++.h>
using namespace std;

void solve(int tt)
{
    string s;
    cin >> s;
    string ss = "";
    bool f = false;
    if (s[4] != 's')
    {
        f = true;
    }
    if (!f)
    {
        cout << "Case " << tt << ": ";
        cout << s << endl;
    }
    else
    {
        cout << "Case " << tt << ": ";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ':')
            {
                cout << "s:";
                continue;
            }
            cout << s[i];
        }
        cout << endl;
    }
}

int main()
{
    int tt;
    cin >> tt;

    for (int i = 1; i <= tt; i++)
    {
        solve(i);
    }
}
