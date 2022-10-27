#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
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
    string s, t;
    cin >> s >> t;
    sort(all(s));
    int x1 = s.find(t[0]);
    int x2 = s.find(t[1]);
    int x3 = s.find(t[2]);
    if (x1 == -1 || x2 == -1 || x3 == -1)
    {
        cout << s << endl;
    }
    else if (t != "abc")
    {
        cout << s << endl;
    }
    else
    {
        string a = "", b = "", c = "", d = "";

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a')
                a += s[i];
            else if (s[i] == 'b')
                b += s[i];
            else if (s[i] == 'c')
            {
                c += s[i];
            }
            else
                d += s[i];
        }
        sort(all(d));
        cout << a << c << b << d << endl;
    }
}

int main()
{
    FAST;
    int tt;
    tt = 1;
    cin >> tt;
    //  for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}