#include <bits/stdc++.h>
using namespace std;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using ll = long long;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    string s, s1;
    cin >> s >> s1;
    sort(s.begin(), s.end());
    sort(s1.begin(), s1.end());
    string ss = "";
    int counta = 0, countb = 0;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (s[i] < s1[j] && counta != k)
        {
            cout << s[i++];
            counta++;
            countb = 0;
        }
        else if (countb != k)
        {
            cout << s1[j++];
            countb++;
            counta = 0;
        }
        else
        {
            cout << s[i++];
            countb = 0;
            counta++;
        }
    }
    cout << ss << endl;
}

int32_t main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}