#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.find('r') < s.find('R') && s.find('g') < s.find('G') && s.find('b') < s.find('B'))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}