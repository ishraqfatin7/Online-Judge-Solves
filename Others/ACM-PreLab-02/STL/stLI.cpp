#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

void solve()
{
    string s;
    set<string> ss;
    set<string>::iterator it;
    while (cin >> s)
    {

        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string newS = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                newS += s[i];
            }
            else if (newS != "")
            {
                ss.insert(newS);
                newS = "";
            }
        }
        if (newS != "")
            ss.insert(newS);
    }
    for (it = ss.begin(); it != ss.end(); ++it)
    {

        cout << *it << "\n";
    }

    ss.clear();
}

int main()
{
    // int tt;
    // cin >> tt;
    // while (tt--)
    // {
    //     solve();
    // }
    solve();
}
