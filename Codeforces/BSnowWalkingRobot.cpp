#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, n) for (int i = 1; i <= (n); i++)
#define rrep(i, n) for (int i = (n)-1; i >= 0; i--)
#define rrep1(i, n) for (int i = (n); i > 0; i--)
#define all_bit(x) __builtin_popcount(x)
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    string s;
    cin >> s;
    int l = 0;
    int r = 0;
    int u = 0;
    int d = 0;
    vector<char> v;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'L')
        {
            l++;
        }
        else if (s[i] == 'R')
        {
            r++;
        }
        else if (s[i] == 'U')
        {
            u++;
        }
        else
        {
            d++;
        }
    }
    int x = min(l, r);
    int y = min(u, d);
    if (!l || !r)
    {
        x = 0;
    }
    if (!u || !d)
    {
        y = 0;
    }
    if (x > 1 && y == 0)
    {
        x = 1;
    }
    if (y > 1 && x == 0)
    {
        y = 1;
    }

    rep(i, x)
    {

        v.pb('L');
    }
    rep(i, y)
    {

        v.pb('U');
    }
    rep(i, x)
    {

        v.pb('R');
    }
    rep(i, y)
    {

        v.pb('D');
    }
    cout << v.size() << '\n';
    for (auto i : v)
    {
        cout << i;
    }
    cout << '\n';
}

int main()
{
    FAST;
    int tt;
    tt = 1;
    cin >> tt;
    //   for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}