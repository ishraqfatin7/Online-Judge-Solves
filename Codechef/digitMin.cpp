#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{

    string s;
    cin >> s;

    if (s.length() == 2 || s.length() == 1)
    {
        cout << s[s.length() - 1] << endl;
    }
    else
    {
        sort(s.begin(), s.end());
        cout << s[0] << endl;
    }
}

int main()
{
    FAST;
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}